/*
* Copyright (c) 2020 NVIDIA CORPORATION.  All rights reserved.
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

#include "DLSSLibrary.h"

#if WITH_DLSS
#include "DLSS.h"
#include "DLSSSettings.h"
#include "DLSSUpscaler.h"
#include "NGXRHI.h"
#endif

#include "PostProcess/TemporalAA.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "ShaderCore.h"

#define LOCTEXT_NAMESPACE "FDLSSBlueprintModule"
DEFINE_LOG_CATEGORY_STATIC(LogDLSSBlueprint, Log, All);

static const FName SetDLSSModeInvalidEnumValueError= FName("SetDLSSModeInvalidEnumValueError");
static const FName IsDLSSModeSupportedInvalidEnumValueError = FName("IsDLSSModeSupportedInvalidEnumValueError");

UDLSSSupport UDLSSLibrary::DLSSSupport = UDLSSSupport::NotSupportedByPlatformAtBuildTime;
#if WITH_DLSS
int32 UDLSSLibrary::MinDLSSDriverVersionMajor = 0;
int32 UDLSSLibrary::MinDLSSDriverVersionMinor = 0;

FDLSSUpscaler* UDLSSLibrary::DLSSUpscaler = nullptr;
bool UDLSSLibrary::bDLSSLibraryInitialized = false;

static bool ShowDLSSSDebugOnScreenMessages()
{

	if (GetDefault<UDLSSOverrideSettings>()->ShowDLSSSDebugOnScreenMessages == EDLSSSettingOverride::UseProjectSettings)
	{
		return GetDefault<UDLSSSettings>()->bShowDLSSSDebugOnScreenMessages;
	}
	else
	{
		return GetDefault<UDLSSOverrideSettings>()->ShowDLSSSDebugOnScreenMessages == EDLSSSettingOverride::Enabled;
	}
}


#if !UE_BUILD_SHIPPING

UDLSSLibrary::FDLSSErrorState UDLSSLibrary::DLSSErrorState;
FDelegateHandle UDLSSLibrary::DLSSOnScreenMessagesDelegateHandle;
void UDLSSLibrary::GetDLSSOnScreenMessages(TMultiMap<FCoreDelegates::EOnScreenMessageSeverity, FText>& OutMessages)
{
	check(IsInGameThread());

	if(ShowDLSSSDebugOnScreenMessages())
	{
		if (DLSSErrorState.bIsDLSSModeUnsupported)
		{
			const FTextFormat Format(LOCTEXT("DLSSOnScreenDebugSetModeUnsupportedDLSSMode",
				"DLSS Error: The DLSS mode \"{0}\" is not supported. This error can be avoided by calling SetDLSSMode({0}) only if IsDLSSModeSupported({0}) returns true."));
			const FText Message = FText::Format(Format, StaticEnum<UDLSSMode>()->GetDisplayNameTextByValue(int64(DLSSErrorState.InvalidDLSSMode)));
			OutMessages.Add(FCoreDelegates::EOnScreenMessageSeverity::Error, Message);
		}

		// Checking for "contains" in case virtualization is changing the GPU string
		const bool bIsNVIDIA =  FWindowsPlatformMisc::GetPrimaryGPUBrand().Contains(TEXT("NVIDIA"));
	
		if (bIsNVIDIA && (UDLSSSupport::Supported != DLSSSupport))
		{
			const FTextFormat Format(LOCTEXT("DLSSOnScreenDebugDLSSNotSupported",
				"DLSS Information: DLSS is not supported due to {0}. Please see the various LogDLSS* categories in the Developer Tools -> Output Log for further detail."));
			const FText Message = FText::Format(Format, StaticEnum<UDLSSSupport>()->GetDisplayNameTextByValue(int64(DLSSSupport)));
			OutMessages.Add(FCoreDelegates::EOnScreenMessageSeverity::Warning, Message);
		}

	}
}
#endif


static EDLSSQualityMode ToEDLSSQualityMode(UDLSSMode InDLSSQualityMode)
{
	static_assert(int32(EDLSSQualityMode::NumValues) == 5, "dear DLSS plugin NVIDIA developer, please update this code to translate the new EDLSSQualityMode enum values to UDLSSMode");

	switch (InDLSSQualityMode)
	{

	case UDLSSMode::UltraPerformance: 
		return EDLSSQualityMode::UltraPerformance;
	
	// the higher level code should catch this...
	case UDLSSMode::Off:
		checkf(InDLSSQualityMode != UDLSSMode::Off, TEXT("ToEDLSSQualityMode should not be called with an InDLSSQualityMode of UDLSSMode::Off from the higher level code"));
	default:
		checkf(false, TEXT("ToEDLSSQualityMode should not be called with an out of range InDLSSQualityMode %d InDLSSQualityMode from the higher level code"), InDLSSQualityMode);

	case UDLSSMode::Performance:
		return EDLSSQualityMode::Performance;
	
	case UDLSSMode::Balanced:
		return EDLSSQualityMode::Balanced;
	
	case UDLSSMode::Quality:
		return EDLSSQualityMode::Quality;
	
	case UDLSSMode::UltraQuality:
		return EDLSSQualityMode::UltraQuality;
	}
}

int32 UDLSSLibrary::ToDLSSQualityCVarValue(UDLSSMode DLSSMode)
{
	return static_cast<int32>(ToEDLSSQualityMode(DLSSMode));
}

#endif

bool UDLSSLibrary::IsDLSSModeSupported(UDLSSMode DLSSMode)
{
	const UEnum* Enum = StaticEnum<UDLSSMode>();

	// UEnums are strongly typed, but then one can also cast a byte to an UEnum ...
	if (Enum->IsValidEnumValue(int64(DLSSMode)) && (Enum->GetMaxEnumValue() != int64(DLSSMode)))
	{
		if (DLSSMode == UDLSSMode::Off)
		{
			return true;
		}
#if WITH_DLSS
		if (!TryInitDLSSLibrary())
		{
			UE_LOG(LogDLSSBlueprint, Error, TEXT("IsDLSSModeSupported should not be called before PostEngineInit"));
			return false;
		}
		if (!IsDLSSSupported())
		{
			return false;
		}
		else if (DLSSMode == UDLSSMode::Auto)
		{
			return true;
		}
		else
		{
			return DLSSUpscaler->IsQualityModeSupported(ToEDLSSQualityMode(DLSSMode));
		}
#else
		return false;
#endif
	}
	else
	{
#if !UE_BUILD_SHIPPING
		FFrame::KismetExecutionMessage(*FString::Printf(
			TEXT("IsDLSSModeSupported should not be called with an invalid DLSSMode enum value (%d) \"%s\""),
			int64(DLSSMode), *StaticEnum<UDLSSMode>()->GetDisplayNameTextByValue(int64(DLSSMode)).ToString()),
			ELogVerbosity::Error, IsDLSSModeSupportedInvalidEnumValueError);
#endif 
		return false;
	}

}

void UDLSSLibrary::GetDLSSModeInformation(UDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness)
{
	// fall back to TAA for unsupported or DLSS off
	OptimalScreenPercentage = 0.0f;
	bIsFixedScreenPercentage = false;
	MinScreenPercentage = 100.0f * ITemporalUpscaler::GetDefaultTemporalUpscaler()->GetMinUpsampleResolutionFraction();
	MaxScreenPercentage = 100.0f * ITemporalUpscaler::GetDefaultTemporalUpscaler()->GetMaxUpsampleResolutionFraction();
	OptimalSharpness = 0.0f;
#if WITH_DLSS
	if (!TryInitDLSSLibrary())
	{
		UE_LOG(LogDLSSBlueprint, Error, TEXT("GetDLSSModeInformation should not be called before PostEngineInit"));
		bIsSupported = false;
		return;
	}
#endif
	bIsSupported = IsDLSSModeSupported(DLSSMode);

#if WITH_DLSS
	if ((DLSSMode != UDLSSMode::Off) && bIsSupported)
	{
		EDLSSQualityMode EDLSSMode;
		if (DLSSMode != UDLSSMode::Auto)
		{
			EDLSSMode = ToEDLSSQualityMode(DLSSMode);
		}
		else
		{
			// Auto DLSS mode is based on total pixels
			float PixelsFloat = ScreenResolution.X * ScreenResolution.Y;
			int32 PixelsInt = (PixelsFloat < static_cast<float>(MAX_int32)) ? static_cast<int32>(PixelsFloat) : MAX_int32;
			TOptional<EDLSSQualityMode> MaybeDLSSMode = DLSSUpscaler->GetAutoQualityModeFromPixels(PixelsInt);
			if (!MaybeDLSSMode.IsSet())
			{
				// DLSS Off
				return;
			}
			EDLSSMode = MaybeDLSSMode.GetValue();
		}
		bIsFixedScreenPercentage = DLSSUpscaler->IsFixedResolutionFraction(EDLSSMode);

		OptimalScreenPercentage = 100.0f * DLSSUpscaler->GetOptimalResolutionFractionForQuality(EDLSSMode);
		MinScreenPercentage = 100.0f * DLSSUpscaler->GetMinResolutionFractionForQuality(EDLSSMode);
		MaxScreenPercentage = 100.0f * DLSSUpscaler->GetMaxResolutionFractionForQuality(EDLSSMode);

		OptimalSharpness = DLSSUpscaler->GetOptimalSharpnessForQuality(EDLSSMode);
	}
#endif
}

void UDLSSLibrary::GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage)
{
#if WITH_DLSS
	if (!TryInitDLSSLibrary())
	{
		UE_LOG(LogDLSSBlueprint, Error, TEXT("GetDLSSScreenPercentageRange should not be called before PostEngineInit"));
		MinScreenPercentage = 100.0f;
		MaxScreenPercentage = 100.0f;
		return;
	}

	if (IsDLSSSupported())
	{
		MinScreenPercentage = 100.0f * DLSSUpscaler->GetMinUpsampleResolutionFraction();
		MaxScreenPercentage = 100.0f * DLSSUpscaler->GetMaxUpsampleResolutionFraction();
	}
	else
#endif
	{
		MinScreenPercentage = 100.0f;
		MaxScreenPercentage = 100.0f;
	}
}

TArray<UDLSSMode> UDLSSLibrary::GetSupportedDLSSModes()
{
	TArray<UDLSSMode> SupportedQualityModes;
#if WITH_DLSS
	if (!TryInitDLSSLibrary())
	{
		UE_LOG(LogDLSSBlueprint, Error, TEXT("GetSupportedDLSSModes should not be called before PostEngineInit"));
		return SupportedQualityModes;
	}
#endif
	{
		const UEnum* Enum = StaticEnum<UDLSSMode>();
		for (int32 EnumIndex = 0; EnumIndex < Enum->NumEnums(); ++EnumIndex)
		{
			const int64 EnumValue = Enum->GetValueByIndex(EnumIndex);
			if (EnumValue != Enum->GetMaxEnumValue())
			{
				const UDLSSMode QualityMode = UDLSSMode(EnumValue);
				if (IsDLSSModeSupported(QualityMode))
				{
					SupportedQualityModes.Add(QualityMode);
				}
			}
		}
	}
	return SupportedQualityModes;
}

bool UDLSSLibrary::IsDLSSSupported()
{
#if WITH_DLSS
	if (!TryInitDLSSLibrary())
	{
		UE_LOG(LogDLSSBlueprint, Error, TEXT("IsDLSSSupported should not be called before PostEngineInit"));
		return false;
	}

	return QueryDLSSSupport() == UDLSSSupport::Supported;
#else
	return false;
#endif
}

UDLSSSupport UDLSSLibrary::QueryDLSSSupport()
{
#if WITH_DLSS
	if (!TryInitDLSSLibrary())
	{
		UE_LOG(LogDLSSBlueprint, Error, TEXT("QueryDLSSSupport should not be called before PostEngineInit"));
		return UDLSSSupport::NotSupported;
	}
#endif
	return DLSSSupport;
}

void UDLSSLibrary::GetDLSSMinimumDriverVersion(int32& MinDriverVersionMajor, int32& MinDriverVersionMinor)
{
#if WITH_DLSS
	if (!TryInitDLSSLibrary())
	{
		UE_LOG(LogDLSSBlueprint, Error, TEXT("GetDLSSMinimumDriverVersion should not be called before PostEngineInit"));
	}
	MinDriverVersionMajor = MinDLSSDriverVersionMajor;
	MinDriverVersionMinor = MinDLSSDriverVersionMinor;
#else
	MinDriverVersionMajor = 0;
	MinDriverVersionMinor = 0;
#endif
}

void UDLSSLibrary::SetDLSSMode(UDLSSMode DLSSMode)
{
#if WITH_DLSS
	if (!TryInitDLSSLibrary())
	{
		UE_LOG(LogDLSSBlueprint, Error, TEXT("SetDLSSMode should not be called before PostEngineInit"));
		return;
	}

	const UEnum* Enum = StaticEnum<UDLSSMode>();

	// UEnums are strongly typed, but then one can also cast a byte to an UEnum ...
	if(Enum->IsValidEnumValue(int64(DLSSMode)) && (Enum->GetMaxEnumValue() != int64(DLSSMode)))
	{
		static const auto CVarNGXEnable = IConsoleManager::Get().FindConsoleVariable(TEXT("r.NGX.Enable"));
		bool bNGXEnabled = CVarNGXEnable && CVarNGXEnable->GetInt();

		static auto CVarDLSSEnable = IConsoleManager::Get().FindConsoleVariable(TEXT("r.NGX.DLSS.Enable"));
		if (CVarDLSSEnable)
		{
			// r.NGX.Enable might be set to 0 via hotfix so set r.NGX.DLSS.Enable to 0 too (in case it might come from saved settings)
			bool bDLSSEnabled = bNGXEnabled && (DLSSMode != UDLSSMode::Off);
			CVarDLSSEnable->Set(bDLSSEnabled ? 1 : 0, ECVF_SetByCommandline);
		}

		static auto CVarDLSSAutoQualityMode = IConsoleManager::Get().FindConsoleVariable(TEXT("r.NGX.DLSS.Quality.Auto"));
		if (CVarDLSSAutoQualityMode)
		{
			bool bIsAutoQualityMode = bNGXEnabled && (DLSSMode == UDLSSMode::Auto);
			CVarDLSSAutoQualityMode->Set(bIsAutoQualityMode, ECVF_SetByCommandline);
		}

		static auto CVarDLSSQuality = IConsoleManager::Get().FindConsoleVariable(TEXT("r.NGX.DLSS.Quality"));

		if (CVarDLSSQuality && (DLSSMode != UDLSSMode::Off) && (DLSSMode != UDLSSMode::Auto))
		{
#if !UE_BUILD_SHIPPING
			check(IsInGameThread());
			DLSSErrorState.bIsDLSSModeUnsupported = !IsDLSSModeSupported(DLSSMode);
			DLSSErrorState.InvalidDLSSMode = DLSSMode;
#endif 
			CVarDLSSQuality->Set(ToDLSSQualityCVarValue(DLSSMode), ECVF_SetByCommandline);
		}
	}
	else
	{
#if !UE_BUILD_SHIPPING
		FFrame::KismetExecutionMessage(*FString::Printf(
			TEXT("SetDLSSMode should not be called with an invalid DLSSMode enum value (%d) \"%s\""), 
			int64(DLSSMode), *StaticEnum<UDLSSMode>()->GetDisplayNameTextByValue(int64(DLSSMode)).ToString()),
			ELogVerbosity::Error, SetDLSSModeInvalidEnumValueError);
#endif 
	}
#endif	// WITH_DLSS
}

UDLSSMode UDLSSLibrary::GetDLSSMode()
{
#if WITH_DLSS
	if (!TryInitDLSSLibrary())
	{
		UE_LOG(LogDLSSBlueprint, Error, TEXT("GetDLSSMode should not be called before PostEngineInit"));
		return UDLSSMode::Off;
	}

	static const auto CVarNGXEnable = IConsoleManager::Get().FindConsoleVariable(TEXT("r.NGX.Enable"));
	bool bNGXEnabled = CVarNGXEnable && CVarNGXEnable->GetInt();

	static const auto CVarDLSSEnable = IConsoleManager::Get().FindConsoleVariable(TEXT("r.NGX.DLSS.Enable"));
	bool bDLSSEnabled = CVarDLSSEnable && CVarDLSSEnable->GetInt();

	static const auto CVarDLSSQuality = IConsoleManager::Get().FindConsoleVariable(TEXT("r.NGX.DLSS.Quality"));
	int32 DLSSQuality = CVarDLSSQuality ? CVarDLSSQuality->GetInt() : 0;

	static const auto CVarDLSSAutoQualityMode = IConsoleManager::Get().FindConsoleVariable(TEXT("r.NGX.DLSS.Quality.Auto"));
	bool bIsAutoQualityMode = CVarDLSSAutoQualityMode ? CVarDLSSAutoQualityMode->GetBool() : false;

	if (bNGXEnabled && bDLSSEnabled && bIsAutoQualityMode)
	{
		return UDLSSMode::Auto;
	}
	else if (bNGXEnabled && bDLSSEnabled && CVarDLSSQuality)
	{
		static_assert(int32(EDLSSQualityMode::NumValues) == 5, "dear DLSS plugin NVIDIA developer, please update this code to handle the new enum values");

		switch (EDLSSQualityMode(DLSSQuality))
		{
			case EDLSSQualityMode::UltraPerformance:
				return UDLSSMode::UltraPerformance;

			default:
				UE_LOG(LogDLSSBlueprint , Error, TEXT("r.NGX.DLSS.Quality is set to %d, which is outside of the valid range [%d, %d])"), DLSSQuality, EDLSSQualityMode::MinValue, EDLSSQualityMode::MaxValue);

			case EDLSSQualityMode::Performance:
				return UDLSSMode::Performance;

			case EDLSSQualityMode::Balanced:
				return UDLSSMode::Balanced;

			case EDLSSQualityMode::Quality:
				return UDLSSMode::Quality;

			case EDLSSQualityMode::UltraQuality:
				return UDLSSMode::UltraQuality;
		};
	}
#endif
	return UDLSSMode::Off;
}

void UDLSSLibrary::SetDLSSSharpness(float Sharpness)
{
#if WITH_DLSS
	if (!TryInitDLSSLibrary())
	{
		UE_LOG(LogDLSSBlueprint, Error, TEXT("SetDLSSSharpness should not be called before PostEngineInit"));
		return;
	}

	static const auto CVarNGXDLSSharpness = IConsoleManager::Get().FindConsoleVariable(TEXT("r.NGX.DLSS.Sharpness"));
	
	if (CVarNGXDLSSharpness)
	{

		// Quantize here so we can have sharpness snap to 0, which downstream is used to turn off the NGX sharpening flag
		// CVarNGXDLSSharpness->Set(Sharpness, ECVF_SetByCommandline)  internally uses	Set(*FString::Printf(TEXT("%g"), InValue), SetBy);
		CVarNGXDLSSharpness->Set(*FString::Printf(TEXT("%2.2f"), Sharpness), ECVF_SetByCommandline);
	}
#endif
}

float UDLSSLibrary::GetDLSSSharpness()
{
#if WITH_DLSS
	if (!TryInitDLSSLibrary())
	{
		UE_LOG(LogDLSSBlueprint, Error, TEXT("GetDLSSSharpness should not be called before PostEngineInit"));
		return 0.0f;
	}

	static const auto CVarNGXDLSSharpness = IConsoleManager::Get().FindConsoleVariable(TEXT("r.NGX.DLSS.Sharpness"));
	
	if (CVarNGXDLSSharpness)
	{
		return CVarNGXDLSSharpness->GetFloat();
	}
#endif

	return 0.0f;
}

UDLSSMode UDLSSLibrary::GetDefaultDLSSMode()
{
#if WITH_DLSS
	if (!TryInitDLSSLibrary())
	{
		UE_LOG(LogDLSSBlueprint, Error, TEXT("GetDefaultDLSSMode should not be called before PostEngineInit"));
		return UDLSSMode::Off;
	}
#endif
	if (UDLSSLibrary::IsDLSSSupported())
	{
		return UDLSSMode::Auto;
	}
	else
	{
		return UDLSSMode::Off;
	}
}

#if WITH_DLSS
static UDLSSSupport ToUDLSSSupport(EDLSSSupport InDLSSSupport)
{
	switch (InDLSSSupport)
	{

		case EDLSSSupport::Supported:
			return UDLSSSupport::Supported;

		// this should be resolved at development time
		default:
			checkf(false, TEXT("ToUDLSSSupport should not be called with an out of range InDLSSSupport from the higher level code"));
		case EDLSSSupport::NotSupported:
			return UDLSSSupport::NotSupported;

		case EDLSSSupport::NotSupportedIncompatibleHardware:
			return UDLSSSupport::NotSupportedIncompatibleHardware;


		case EDLSSSupport::NotSupportedDriverOutOfDate:
			return UDLSSSupport::NotSupportedDriverOutOfDate;

		case EDLSSSupport::NotSupportedOperatingSystemOutOfDate:
			return UDLSSSupport::NotSupportedOperatingSystemOutOfDate;
	}
}

// Delayed initialization, which allows this module to be available early so blueprints can be loaded before DLSS is available in PostEngineInit
bool UDLSSLibrary::TryInitDLSSLibrary()
{
	if (bDLSSLibraryInitialized)
	{
		return true;
	}

	IDLSSModuleInterface* DLSSModule = FModuleManager::GetModulePtr<IDLSSModuleInterface>(TEXT("DLSS"));
	if (DLSSModule == nullptr)
	{
		return false;
	}

	DLSSUpscaler = DLSSModule->GetDLSSUpscaler();
	DLSSSupport = ToUDLSSSupport(DLSSModule->QueryDLSSSupport());
	DLSSModule->GetDLSSMinDriverVersion(MinDLSSDriverVersionMajor, MinDLSSDriverVersionMinor);

#if !UE_BUILD_SHIPPING
	DLSSOnScreenMessagesDelegateHandle = FCoreDelegates::OnGetOnScreenMessages.AddStatic(&GetDLSSOnScreenMessages);
#endif

	checkf((DLSSModule->GetDLSSUpscaler() != nullptr) || (DLSSModule->QueryDLSSSupport() != EDLSSSupport::Supported), TEXT("mismatch between not having a valid DLSSModule->GetDLSSUpscaler() while also reporting DLSS as being supported by DLSSModule->QueryDLSSSupport() %u "), DLSSModule->QueryDLSSSupport());

	bDLSSLibraryInitialized = true;

	return true;
}
#endif // WITH_DLSS

void FDLSSBlueprintModule::StartupModule()
{
#if WITH_DLSS
	// This initialization will likely not succeed unless this module has been moved to PostEngineInit, and that's ok
	UDLSSLibrary::TryInitDLSSLibrary();
#else
	UE_LOG(LogDLSSBlueprint, Log, TEXT("DLSS is not supported on this platform at build time. The DLSS Blueprint library however is supported and stubbed out to ignore any calls to enable DLSS and will always return UDLSSSupport::NotSupportedByPlatformAtBuildTime, regardless of the underlying hardware. This can be used to e.g. to turn off DLSS related UI elements."));
	UDLSSLibrary::DLSSSupport = UDLSSSupport::NotSupportedByPlatformAtBuildTime;
#endif
}

void FDLSSBlueprintModule::ShutdownModule()
{
#if WITH_DLSS && !UE_BUILD_SHIPPING
	if (UDLSSLibrary::DLSSOnScreenMessagesDelegateHandle.IsValid())
	{
		FCoreDelegates::OnGetOnScreenMessages.Remove(UDLSSLibrary::DLSSOnScreenMessagesDelegateHandle);
		UDLSSLibrary::DLSSOnScreenMessagesDelegateHandle.Reset();
	}
#endif
}


#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FDLSSBlueprintModule, DLSSBlueprint)

