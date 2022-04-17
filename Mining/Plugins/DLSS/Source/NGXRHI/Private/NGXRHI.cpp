/*
* Copyright (c) 2020 - 2021 NVIDIA CORPORATION.  All rights reserved.
*
* NVIDIA Corporation and its licensors retain all intellectual property and proprietary
* rights in and to this software, related documentation and any modifications thereto.
* Any use, reproduction, disclosure or distribution of this software and related
* documentation without an express license agreement from NVIDIA Corporation is strictly
* prohibited.
*
* TO THE MAXIMUM EXTENT PERMITTED BY APPLICABLE LAW, THIS SOFTWARE IS PROVIDED *AS IS*
* AND NVIDIA AND ITS SUPPLIERS DISCLAIM ALL WARRANTIES, EITHER EXPRESS OR IMPLIED,
* INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
* PARTICULAR PURPOSE.  IN NO EVENT SHALL NVIDIA OR ITS SUPPLIERS BE LIABLE FOR ANY
* SPECIAL, INCIDENTAL, INDIRECT, OR CONSEQUENTIAL DAMAGES WHATSOEVER (INCLUDING, WITHOUT
* LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS, BUSINESS INTERRUPTION, LOSS OF
* BUSINESS INFORMATION, OR ANY OTHER PECUNIARY LOSS) ARISING OUT OF THE USE OF OR
* INABILITY TO USE THIS SOFTWARE, EVEN IF NVIDIA HAS BEEN ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGES.
*/

#include "NGXRHI.h"

#include "Misc/Paths.h"
#include "GenericPlatform/GenericPlatformFile.h"

#include "nvsdk_ngx.h"
#include "nvsdk_ngx_params.h"
#include "nvsdk_ngx_helpers.h"

// NGX software stack
DEFINE_LOG_CATEGORY_STATIC(LogDLSSNGX, Log, All);
// The UE module
DEFINE_LOG_CATEGORY_STATIC(LogDLSSNGXRHI, Log, All);



DECLARE_STATS_GROUP(TEXT("DLSS"), STATGROUP_DLSS, STATCAT_Advanced);
DECLARE_MEMORY_STAT_POOL(TEXT("DLSS: Video memory"), STAT_DLSSInternalGPUMemory, STATGROUP_DLSS, FPlatformMemory::MCR_GPU);
DECLARE_DWORD_COUNTER_STAT(TEXT("DLSS: Num DLSS features"), STAT_DLSSNumFeatures, STATGROUP_DLSS);

#define LOCTEXT_NAMESPACE "NGXRHI"

static TAutoConsoleVariable<int32> CVarNGXLogLevel(
	TEXT("r.NGX.LogLevel"), 1,
	TEXT("Determines the minimal amount of logging the NGX implementation pipes into LogDLSSNGX. Can be overridden by the -NGXLogLevel= command line option\n")
	TEXT("Please refer to the DLSS plugin documentation on other ways to change the logging level.\n")
	TEXT("0: off \n")
	TEXT("1: on (default)\n")
	TEXT("2: verbose "),
	ECVF_ReadOnly);

static TAutoConsoleVariable<int32> CVarNGXEnableOtherLoggingSinks(
	TEXT("r.NGX.EnableOtherLoggingSinks"), 0,
	TEXT("Determines whether the NGX implementation will write logs to files. Can also be set on the command line via -NGXLogFileEnable and -NGXLogFileDisable\n")
	TEXT("0: off (default)\n")
	TEXT("1: on \n"),
	ECVF_ReadOnly);


static TAutoConsoleVariable<int32> CVarNGXFramesUntilFeatureDestruction(
	TEXT("r.NGX.FramesUntilFeatureDestruction"), 3,
	TEXT("Number of frames until an unused NGX feature gets destroyed. (default=3)"),
	ECVF_RenderThreadSafe);

static TAutoConsoleVariable<int32> CVarNGXRenameLogSeverities(
	TEXT("r.NGX.RenameNGXLogSeverities"), 1,
	TEXT("Renames 'error' and 'warning' in messages returned by the NGX log callback to 'e_rror' and 'w_arning' before passing them to the UE log system\n")
	TEXT("0: off \n")
	TEXT("1: on, for select messages during initalization (default)\n")
	TEXT("2: on, for all messages\n"),
	ECVF_Default);

void FRHIDLSSArguments::Validate() const
{
	check(InputColor);
	check(InputDepth);
	check(InputMotionVectors);
	check(InputExposure);
	check(OutputColor);
}

NGXDLSSFeature::~NGXDLSSFeature()
{
	check(!IsRunningRHIInSeparateThread() || IsInRHIThread());
	UE_LOG(LogDLSSNGXRHI, Log, TEXT("Destroying NGX DLSS Feature %s "), *Desc.GetDebugDescription());
}

void NVSDK_CONV NGXLogSink(const char* InNGXMessage, NVSDK_NGX_Logging_Level InLoggingLevel, NVSDK_NGX_Feature InSourceComponent)
{
	FString Message(FString(UTF8_TO_TCHAR(InNGXMessage)).TrimEnd());
	const TCHAR* NGXComponent = TEXT("Unknown");
	
	switch (InSourceComponent)
	{
		case NVSDK_NGX_Feature_SuperSampling: NGXComponent = TEXT("DLSS");	break;
		case NVSDK_NGX_Feature_Reserved_SDK : NGXComponent = TEXT("SDK");	break;
		case NVSDK_NGX_Feature_Reserved_Core: NGXComponent = TEXT("Core");	break;
	}

	const bool bIsVerboseStartupMessage =
		(Message.Contains(TEXT(" doesn't exist in any of the search paths")) && !Message.Contains(TEXT("nvngx_dlss.dll"))) || // we want to know if the DLSS binary is missing
		Message.Contains(TEXT("warning: UWP compliant mode enabled"));

	

	if ((CVarNGXRenameLogSeverities.GetValueOnAnyThread() == 2) || ((CVarNGXRenameLogSeverities.GetValueOnAnyThread() == 1) && bIsVerboseStartupMessage))
	{
		Message = Message.Replace(TEXT("error:"), TEXT("e_rror:"));
		Message = Message.Replace(TEXT("Warning:"), TEXT("w_arning:"));
		UE_LOG(LogDLSSNGX, Verbose, TEXT("[%s]: %s"), NGXComponent, *Message);
	}
	else
	{
		UE_LOG(LogDLSSNGX, Log, TEXT("[%s]: %s"), NGXComponent, *Message);
	}

}


// the derived RHIs will set this to false based on runtime support
bool NGXRHI::bSupportsAllocateParameters = true;

bool NGXRHI::bNGXInitialized = false;

// the derived RHIs will set this to true during their initialization
bool NGXRHI::bIsIncompatibleAPICaptureToolActive = false;

NGXRHI::NGXRHI(const FNGXRHICreateArguments& Arguments)
	: DynamicRHI(Arguments.DynamicRHI)
{
	FString PluginNGXProductionBinariesDir  = FPaths::Combine(Arguments.PluginBaseDir, TEXT("Binaries/ThirdParty/Win64/"));
	FString PluginNGXDevelopmentBinariesDir = FPaths::Combine(Arguments.PluginBaseDir, TEXT("Binaries/ThirdParty/Win64/Development/"));
	FString PluginNGXBinariesDir = PluginNGXProductionBinariesDir;

	// Thee paths can be different depending on the project type (source, no source) and how the project is packaged, thus we have both
	FString ProjectNGXBinariesDir = FPaths::Combine(FPaths::ProjectDir(), TEXT("Binaries/ThirdParty/NVIDIA/NGX/Win64/"));
	FString LaunchNGXBinariesDir  = FPaths::Combine(FPaths::LaunchDir(), TEXT("Binaries/ThirdParty/NVIDIA/NGX/Win64/"));

	switch (Arguments.NGXBinariesSearchOrder)
	{
		default:
		case ENGXBinariesSearchOrder::CustomThenGeneric:
		{
			UE_LOG(LogDLSSNGXRHI, Log, TEXT("Searching for custom and generic DLSS binaries"));
			NGXDLLSearchPaths.Append({ ProjectNGXBinariesDir, LaunchNGXBinariesDir, PluginNGXProductionBinariesDir });
			break;
		}
 		case  ENGXBinariesSearchOrder::ForceGeneric:
		{
			UE_LOG(LogDLSSNGXRHI, Log, TEXT("Searching only for generic binaries from the plugin folder"));
			NGXDLLSearchPaths.Append({ PluginNGXProductionBinariesDir });
			break;
		}
		case ENGXBinariesSearchOrder::ForceCustom:
		{
			UE_LOG(LogDLSSNGXRHI, Log, TEXT("Searching only for custom DLSS binaries from the DLSS plugin"));
			NGXDLLSearchPaths.Append({ ProjectNGXBinariesDir, LaunchNGXBinariesDir });
			break;
		}
		case ENGXBinariesSearchOrder::ForceDevelopmentGeneric:
		{
			UE_LOG(LogDLSSNGXRHI, Log, TEXT("Searching only for generic development DLSS binaries from the DLSS plugin. This binary is only packaged for non-shipping build configurations"));
			NGXDLLSearchPaths.Append({ PluginNGXDevelopmentBinariesDir });
			PluginNGXBinariesDir = PluginNGXDevelopmentBinariesDir;
			break;
		}
	}

	for (int32 i = 0; i < NGXDLLSearchPaths.Num(); ++i)
	{
		NGXDLLSearchPaths[i] = FPaths::ConvertRelativePathToFull(NGXDLLSearchPaths[i]);
		FPaths::RemoveDuplicateSlashes(NGXDLLSearchPaths[i]);
		FPaths::MakePlatformFilename(NGXDLLSearchPaths[i]);

		// After this we should not touch NGXDLLSearchPaths since that provides the backing store for NGXDLLSearchPathRawStrings	
		NGXDLLSearchPathRawStrings.Add(*NGXDLLSearchPaths[i]);
		const bool bHasDLSSBinary = IPlatformFile::GetPlatformPhysical().FileExists(*FPaths::Combine(NGXDLLSearchPaths[i], NGX_DLSS_BINARY_NAME));
		UE_LOG(LogDLSSNGXRHI, Log, TEXT("NVIDIA NGX DLSS binary %s %s in search path %s"), NGX_DLSS_BINARY_NAME, bHasDLSSBinary ? TEXT("found") : TEXT("not found"), *NGXDLLSearchPaths[i]);
	}
	
	// we do this separately here so we can show relative paths in the UI later
	DLSSGenericBinaryInfo.Get<0>() = FPaths::Combine(PluginNGXBinariesDir, NGX_DLSS_BINARY_NAME);
	DLSSGenericBinaryInfo.Get<1>() = IPlatformFile::GetPlatformPhysical().FileExists(*DLSSGenericBinaryInfo.Get<0>());

	DLSSCustomBinaryInfo.Get<0>() = FPaths::Combine(ProjectNGXBinariesDir, NGX_DLSS_BINARY_NAME);
	DLSSCustomBinaryInfo.Get<1>() = IPlatformFile::GetPlatformPhysical().FileExists(*DLSSCustomBinaryInfo.Get<0>());

	FeatureInfo.PathListInfo.Path = const_cast<wchar_t**>(NGXDLLSearchPathRawStrings.GetData());
	FeatureInfo.PathListInfo.Length = NGXDLLSearchPathRawStrings.Num();

	// logging
	{
		FeatureInfo.LoggingInfo.DisableOtherLoggingSinks = 1 != CVarNGXEnableOtherLoggingSinks.GetValueOnAnyThread();
		FeatureInfo.LoggingInfo.LoggingCallback = &NGXLogSink;

		switch (CVarNGXLogLevel.GetValueOnAnyThread())
		{
			case 0:
				FeatureInfo.LoggingInfo.MinimumLoggingLevel = NVSDK_NGX_LOGGING_LEVEL_OFF;
				break;
			// should match the CVarNGXLogLevel default value
			default:
			case 1:
				FeatureInfo.LoggingInfo.MinimumLoggingLevel = NVSDK_NGX_LOGGING_LEVEL_ON;
				break;
			case 2:
				FeatureInfo.LoggingInfo.MinimumLoggingLevel = NVSDK_NGX_LOGGING_LEVEL_VERBOSE;
				break;
		}
	}
}

TTuple<FString, bool> NGXRHI::GetDLSSGenericBinaryInfo() const
{
	return DLSSGenericBinaryInfo;
}

TTuple<FString, bool> NGXRHI::GetDLSSCustomBinaryInfo() const
{
	return DLSSCustomBinaryInfo;
}

NGXRHI::~NGXRHI()
{
	UE_LOG(LogDLSSNGXRHI, Log, TEXT("%s Enter"), ANSI_TO_TCHAR(__FUNCTION__));
	UE_LOG(LogDLSSNGXRHI, Log, TEXT("%s Leave"), ANSI_TO_TCHAR(__FUNCTION__));
}


void NGXRHI::FDLSSQueryFeature::QueryDLSSSupport()
{
	int32 bNeedsUpdatedDriver = 0;
	int32 MinDriverVersionMajor = 0;
	int32 MinDriverVersionMinor = 0;

	// Centralize this here instead during NGXRHI init. This should not happen but if we don't have a a valid CapabilityParameters, then we also don't have DLSS.
	if (!CapabilityParameters)
	{
		UE_LOG(LogDLSSNGXRHI, Log, TEXT("NVIDIA NGX DLSS cannot be loaded possibly due to issues initializing NGX."));
		DLSSInitResult = NVSDK_NGX_Result_Fail;
		bIsAvailable = false;
		return;
	}

	check(CapabilityParameters);

	NVSDK_NGX_Result ResultUpdatedDriver = CapabilityParameters->Get(NVSDK_NGX_Parameter_SuperSampling_NeedsUpdatedDriver, &bNeedsUpdatedDriver);
	NVSDK_NGX_Result ResultMinDriverVersionMajor = CapabilityParameters->Get(NVSDK_NGX_Parameter_SuperSampling_MinDriverVersionMajor, &MinDriverVersionMajor);
	NVSDK_NGX_Result ResultMinDriverVersionMinor = CapabilityParameters->Get(NVSDK_NGX_Parameter_SuperSampling_MinDriverVersionMinor, &MinDriverVersionMinor);

	UE_LOG(LogDLSSNGXRHI, Log, TEXT("Get NVSDK_NGX_Parameter_SuperSampling_NeedsUpdatedDriver -> (%u %s), bNeedsUpdatedDriver = %d"), ResultUpdatedDriver, GetNGXResultAsString(ResultUpdatedDriver), bNeedsUpdatedDriver);
	UE_LOG(LogDLSSNGXRHI, Log, TEXT("Get NVSDK_NGX_Parameter_SuperSampling_MinDriverVersionMajor -> (%u %s), MinDriverVersionMajor = %d"), ResultMinDriverVersionMajor, GetNGXResultAsString(ResultMinDriverVersionMajor), MinDriverVersionMajor);
	UE_LOG(LogDLSSNGXRHI, Log, TEXT("Get NVSDK_NGX_Parameter_SuperSampling_MinDriverVersionMinor -> (%u %s), MinDriverVersionMinor = %d"), ResultMinDriverVersionMinor, GetNGXResultAsString(ResultMinDriverVersionMinor), MinDriverVersionMinor);

	if (NVSDK_NGX_SUCCEED(ResultUpdatedDriver) && NVSDK_NGX_SUCCEED(ResultMinDriverVersionMajor) && NVSDK_NGX_SUCCEED(ResultMinDriverVersionMinor))
	{
		DriverRequirements.DriverUpdateRequired = DriverRequirements.DriverUpdateRequired || bNeedsUpdatedDriver != 0;
		
		// ignore 0.0 and fall back to the what's baked into FNGXDriverRequirements;
		if (MinDriverVersionMajor)
		{
			
			DriverRequirements.MinDriverVersionMajor = MinDriverVersionMajor;
		}

		if (MinDriverVersionMinor)
		{
			DriverRequirements.MinDriverVersionMinor = MinDriverVersionMinor;
		}


		if (bNeedsUpdatedDriver)
		{
			UE_LOG(LogDLSSNGXRHI, Log, TEXT("NVIDIA NGX DLSS cannot be loaded due to an outdated driver. Minimum Driver Version required : %u.%u"), MinDriverVersionMajor, MinDriverVersionMinor);
		}
		else
		{
			UE_LOG(LogDLSSNGXRHI, Log, TEXT("NVIDIA NGX DLSS is supported by the currently installed driver. Minimum driver version was reported as: %u.%u"), MinDriverVersionMajor, MinDriverVersionMinor);
		}
	}
	else
	{
		UE_LOG(LogDLSSNGXRHI, Log, TEXT("NVIDIA NGX DLSS Minimum driver version was not reported"));
	}

	// determine if DLSS is available
	int DlssAvailable = 0;
	NVSDK_NGX_Result ResultAvailable = CapabilityParameters->Get(NVSDK_NGX_EParameter_SuperSampling_Available, &DlssAvailable);
	UE_LOG(LogDLSSNGXRHI, Log, TEXT("Get NVSDK_NGX_EParameter_SuperSampling_Available -> (%u %s), DlssAvailable = %d"), ResultAvailable, GetNGXResultAsString(ResultAvailable), DlssAvailable);

	if (NVSDK_NGX_SUCCEED(ResultAvailable) && DlssAvailable)
	{
		bIsAvailable = true;

		// store for the higher level code interpret
		DLSSInitResult = ResultAvailable;
	}
	
	// DLSS_TODO verify this
	if(!DlssAvailable)
	{
		// and try to find out more details on why it might have failed
		NVSDK_NGX_Result DlssFeatureInitResult = NVSDK_NGX_Result_Fail;
		NVSDK_NGX_Result ResultDlssFeatureInitResult = CapabilityParameters->Get(NVSDK_NGX_Parameter_SuperSampling_FeatureInitResult, (int*)&DlssFeatureInitResult);
		UE_LOG(LogDLSSNGXRHI, Log, TEXT("Get NVSDK_NGX_Parameter_SuperSampling_FeatureInitResult -> (%u %s), NVSDK_NGX_Parameter_SuperSampling_FeatureInitResult = (%u %s)"), ResultDlssFeatureInitResult, GetNGXResultAsString(ResultDlssFeatureInitResult), DlssFeatureInitResult, GetNGXResultAsString(DlssFeatureInitResult));

		// store for the higher level code interpret
		DLSSInitResult = NVSDK_NGX_SUCCEED(ResultDlssFeatureInitResult) ? DlssFeatureInitResult : NVSDK_NGX_Result_Fail;
	}
}

FDLSSOptimalSettings NGXRHI::FDLSSQueryFeature::GetDLSSOptimalSettings(const FDLSSResolutionParameters& InResolution) const
{
	check(CapabilityParameters);

	FDLSSOptimalSettings OptimalSettings;

	const NVSDK_NGX_Result ResultGetOptimalSettings = NGX_DLSS_GET_OPTIMAL_SETTINGS(
		CapabilityParameters,
		InResolution.Width,
		InResolution.Height,
		InResolution.PerfQuality,
		reinterpret_cast<unsigned int*>(&OptimalSettings.RenderSize.X),
		reinterpret_cast<unsigned int*>(&OptimalSettings.RenderSize.Y),
		reinterpret_cast<unsigned int*>(&OptimalSettings.RenderSizeMax.X),
		reinterpret_cast<unsigned int*>(&OptimalSettings.RenderSizeMax.Y),
		reinterpret_cast<unsigned int*>(&OptimalSettings.RenderSizeMin.X),
		reinterpret_cast<unsigned int*>(&OptimalSettings.RenderSizeMin.Y),
		&OptimalSettings.Sharpness
		);
	UE_LOG(LogDLSSNGXRHI, Log, TEXT("NGX_DLSS_GET_OPTIMAL_SETTINGS -> (%u %s)"), ResultGetOptimalSettings, GetNGXResultAsString(ResultGetOptimalSettings));
	checkf(NVSDK_NGX_SUCCEED(ResultGetOptimalSettings), TEXT("failed to query supported DLSS modes"));

	OptimalSettings.bIsSupported = (OptimalSettings.RenderSize.X > 0) && (OptimalSettings.RenderSize.Y > 0);
	auto ComputeResolutionFraction = [&InResolution](int32 RenderSizeX, int32 RenderSizeY)
	{
		float XScale = float(RenderSizeX) / float(InResolution.Width);
		float YScale = float(RenderSizeY) / float(InResolution.Height);
		return FMath::Min(XScale, YScale);
	};


	OptimalSettings.MinResolutionFraction = ComputeResolutionFraction(OptimalSettings.RenderSizeMin.X, OptimalSettings.RenderSizeMin.Y);
	OptimalSettings.MaxResolutionFraction = ComputeResolutionFraction(OptimalSettings.RenderSizeMax.X, OptimalSettings.RenderSizeMax.Y);
	
	// restrict to range since floating point numbers are gonna floating point
	OptimalSettings.OptimalResolutionFraction = FMath::Clamp<float>(ComputeResolutionFraction(OptimalSettings.RenderSize.X, OptimalSettings.RenderSize.Y), OptimalSettings.MinResolutionFraction, OptimalSettings.MaxResolutionFraction);


	return OptimalSettings;
}

 FString NGXRHI::GetNGXLogDirectory()
{
	// encode the time and instance id to handle cases like PIE standalone game where multiple processe are running at the same time.
	FString AbsoluteProjectLogDir = FPaths::ConvertRelativePathToFull(FPaths::ProjectLogDir());
	FString NGXLogDir = FPaths::Combine(AbsoluteProjectLogDir, TEXT("NGX"), FString::Printf(TEXT("NGX_%s_%s"), *FDateTime::Now().ToString(), *FApp::GetInstanceId().ToString()));
	return NGXLogDir;
}

uint32 FRHIDLSSArguments::GetNGXCommonDLSSFeatureFlags() const
{
	check(!IsRunningRHIInSeparateThread() || IsInRHIThread());
	uint32 DLSSFeatureFlags = NVSDK_NGX_DLSS_Feature_Flags_None;
	DLSSFeatureFlags |= NVSDK_NGX_DLSS_Feature_Flags_IsHDR;
	DLSSFeatureFlags |= bool(ERHIZBuffer::IsInverted) ? NVSDK_NGX_DLSS_Feature_Flags_DepthInverted : 0;
	DLSSFeatureFlags |= !bHighResolutionMotionVectors ? NVSDK_NGX_DLSS_Feature_Flags_MVLowRes : 0;
	DLSSFeatureFlags |= Sharpness != 0.0f ? NVSDK_NGX_DLSS_Feature_Flags_DoSharpening : 0;
	DLSSFeatureFlags |= bUseAutoExposure ? NVSDK_NGX_DLSS_Feature_Flags_AutoExposure : 0;
	return DLSSFeatureFlags;
}

NVSDK_NGX_DLSS_Create_Params FRHIDLSSArguments::GetNGXDLSSCreateParams() const
{
	check(!IsRunningRHIInSeparateThread() || IsInRHIThread());
	NVSDK_NGX_DLSS_Create_Params Result;
	FMemory::Memzero(Result);
	Result.Feature.InWidth = SrcRect.Width();
	Result.Feature.InHeight = SrcRect.Height();
	Result.Feature.InTargetWidth = DestRect.Width();
	Result.Feature.InTargetHeight = DestRect.Height();
	Result.Feature.InPerfQualityValue = static_cast<NVSDK_NGX_PerfQuality_Value>(PerfQuality);
	check((Result.Feature.InPerfQualityValue >= NVSDK_NGX_PerfQuality_Value_MaxPerf) && (Result.Feature.InPerfQualityValue <= NVSDK_NGX_PerfQuality_Value_UltraQuality));

	Result.InFeatureCreateFlags = GetNGXCommonDLSSFeatureFlags();
	Result.InEnableOutputSubrects = OutputColor->GetTexture2D()->GetSizeXY() != DestRect.Size();
	return Result;
}



// this is used by the RHIs to see whether they need to recreate the NGX feature
bool FDLSSState::RequiresFeatureRecreation(const FRHIDLSSArguments& InArguments)
{
	check(!IsRunningRHIInSeparateThread() || IsInRHIThread());
	return !DLSSFeature || DLSSFeature->Desc != InArguments.GetFeatureDesc();
}

void NGXRHI::RegisterFeature(TSharedPtr<NGXDLSSFeature> InFeature)
{ 
	check(!IsRunningRHIInSeparateThread() || IsInRHIThread());
	UE_LOG(LogDLSSNGXRHI, Log, TEXT("Creating   NGX DLSS Feature  %s "), *InFeature->Desc.GetDebugDescription());
	AllocatedDLSSFeatures.Add(InFeature);
}

TSharedPtr<NGXDLSSFeature> NGXRHI::FindFreeFeature(const FRHIDLSSArguments& InArguments)
{
	check(!IsRunningRHIInSeparateThread() || IsInRHIThread());
	TSharedPtr<NGXDLSSFeature> OutFeature;
	for (int FeatureIndex = 0; FeatureIndex < AllocatedDLSSFeatures.Num(); ++FeatureIndex)
	{
		// another view already uses this (1 reference from AllocatedDLSSFeatures, another refernces held by FDLSState
		if (AllocatedDLSSFeatures[FeatureIndex].GetSharedReferenceCount() > 1)
		{
			continue;
		}

		if (AllocatedDLSSFeatures[FeatureIndex]->Desc == InArguments.GetFeatureDesc())
		{
			OutFeature = AllocatedDLSSFeatures[FeatureIndex];
			OutFeature->LastUsedFrame = FrameCounter;
			break;

		}
	}
	return OutFeature;
}

void NGXRHI::ReleaseAllocatedFeatures()
{
	UE_LOG(LogDLSSNGXRHI, Log, TEXT("%s Enter"), ANSI_TO_TCHAR(__FUNCTION__));
	
	// There should be no FDLSSState::DLSSFeature anymore when we shut down
	for (int FeatureIndex = 0; FeatureIndex < AllocatedDLSSFeatures.Num(); ++FeatureIndex)
	{
		checkf(AllocatedDLSSFeatures[FeatureIndex].GetSharedReferenceCount() == 1,TEXT("There should be no FDLSSState::DLSSFeature references elsewhere."));
	}

	AllocatedDLSSFeatures.Empty();
	SET_DWORD_STAT(STAT_DLSSNumFeatures, AllocatedDLSSFeatures.Num());
	UE_LOG(LogDLSSNGXRHI, Log, TEXT("%s Leave"), ANSI_TO_TCHAR(__FUNCTION__));
}

void NGXRHI::ApplyCommonNGXParameterSettings(NVSDK_NGX_Parameter* InOutParameter, const FRHIDLSSArguments& InArguments)
{
	NVSDK_NGX_Parameter_SetI(InOutParameter, NVSDK_NGX_Parameter_FreeMemOnReleaseFeature, InArguments.bReleaseMemoryOnDelete ? 1 : 0);
}

void NGXRHI::TickPoolElements()
{
	check(!IsRunningRHIInSeparateThread() || IsInRHIThread());
	const uint32 kFramesUntilRelease = CVarNGXFramesUntilFeatureDestruction.GetValueOnAnyThread();

	int32 FeatureIndex = 0;

	while (FeatureIndex < AllocatedDLSSFeatures.Num())
	{
		TSharedPtr<NGXDLSSFeature>& Feature = AllocatedDLSSFeatures[FeatureIndex];

		const bool bIsUnused = Feature.GetSharedReferenceCount() == 1;
		const bool bNotRequestedRecently = (FrameCounter - Feature->LastUsedFrame) > kFramesUntilRelease;

		if (bIsUnused && bNotRequestedRecently)
		{
			Swap(Feature, AllocatedDLSSFeatures.Last());
			AllocatedDLSSFeatures.Pop();
		}
		else
		{
			++FeatureIndex;
		}
	}

	SET_DWORD_STAT(STAT_DLSSNumFeatures, AllocatedDLSSFeatures.Num());
	

	// if r.NGX.Enable is 0 then this should be nullptr
	if(DLSSQueryFeature.CapabilityParameters)
	{
		static const auto CVarNGXDLSSEnable = IConsoleManager::Get().FindConsoleVariable(TEXT("r.NGX.Enable"));
		check(CVarNGXDLSSEnable && CVarNGXDLSSEnable->GetInt() != 0);

		unsigned long long VRAM = 0;

		NVSDK_NGX_Result ResultGetStats = NGX_DLSS_GET_STATS(DLSSQueryFeature.CapabilityParameters, &VRAM);

		checkf(NVSDK_NGX_SUCCEED(ResultGetStats), TEXT("Failed to retrieve DLSS memory statistics via NGX_DLSS_GET_STATS -> (%u %s)"), ResultGetStats, GetNGXResultAsString(ResultGetStats));
		if (NVSDK_NGX_SUCCEED(ResultGetStats))
		{
			SET_DWORD_STAT(STAT_DLSSInternalGPUMemory, VRAM);
		}
	}

	++FrameCounter;
}

IMPLEMENT_MODULE(FNGXRHIModule, NGXRHI)

#undef LOCTEXT_NAMESPACE

/** IModuleInterface implementation */

void FNGXRHIModule::StartupModule()
{
	UE_LOG(LogDLSSNGXRHI, Log, TEXT("%s Enter"), ANSI_TO_TCHAR(__FUNCTION__));

	int32 NGXLogLevel = CVarNGXLogLevel.GetValueOnAnyThread();
	if (FParse::Value(FCommandLine::Get(), TEXT("ngxloglevel="), NGXLogLevel))
	{
		CVarNGXLogLevel->Set(NGXLogLevel, ECVF_SetByCommandline);
	}

	if (FParse::Param(FCommandLine::Get(), TEXT("ngxlogfileenable")))
	{
		CVarNGXEnableOtherLoggingSinks->Set(1, ECVF_SetByCommandline);
	}
	else if (FParse::Param(FCommandLine::Get(), TEXT("ngxlogfiledisable")))
	{
		CVarNGXEnableOtherLoggingSinks->Set(0, ECVF_SetByCommandline);
	}

	UE_LOG(LogDLSSNGXRHI, Log, TEXT("%s Leave"), ANSI_TO_TCHAR(__FUNCTION__));
}

void FNGXRHIModule::ShutdownModule()
{
	UE_LOG(LogDLSSNGXRHI, Log, TEXT("%s Enter"), ANSI_TO_TCHAR(__FUNCTION__));
	UE_LOG(LogDLSSNGXRHI, Log, TEXT("%s Leave"), ANSI_TO_TCHAR(__FUNCTION__));
}

