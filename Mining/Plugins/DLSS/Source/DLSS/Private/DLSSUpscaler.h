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

#pragma once

#include "CoreMinimal.h"
#include "RendererInterface.h"
#include "PostProcess/TemporalAA.h"
#include "ScreenPass.h"
#include "NGXRHI.h"
#include "DLSSSettings.h"

#include "CustomStaticScreenPercentage.h"
#include "CustomResourcePool.h"

class FSceneTextureParameters;

struct FTemporalAAHistory;

class FRHITexture;
class NGXRHI;
struct FDLSSOptimalSettings;
struct FDLSSPassParameters
{
	FIntRect InputViewRect;
	FIntRect OutputViewRect;
	bool bHighResolutionMotionVectors = false;

	FRDGTexture* SceneColorInput = nullptr;
	FRDGTexture* SceneVelocityInput = nullptr;
	FRDGTexture* SceneDepthInput = nullptr;

	FDLSSPassParameters(const FViewInfo& View)
		: InputViewRect(View.ViewRect)
		, OutputViewRect(FIntPoint::ZeroValue, View.GetSecondaryViewRectSize())
	{
	}

	/** Returns the texture resolution that will be output. */
	FIntPoint GetOutputExtent() const;

	/** Validate the settings of TAA, to make sure there is no issue. */
	bool Validate() const;
};

struct FDLSSOutputs
{
	FRDGTexture* SceneColor = nullptr;
};

enum class EDLSSQualityMode
{
	MinValue = -2,
	UltraPerformance = -2,
	Performance = -1,
	Balanced = 0,
	Quality = 1,
	UltraQuality = 2,
	MaxValue = UltraQuality,
	NumValues = 5
};

class DLSS_API FDLSSUpscaler final : public ITemporalUpscaler, public ICustomStaticScreenPercentage, public ICustomResourcePool
{

	friend class FDLSSModule;
public:


	FDLSSUpscaler(const FDLSSUpscaler* InUpscaler, EDLSSQualityMode InQualityMode);
	virtual ~FDLSSUpscaler();
	// Inherited via ITemporalUpscaler
	virtual const TCHAR* GetDebugName() const final;

	virtual void AddPasses(
		FRDGBuilder& GraphBuilder,
		const FViewInfo& View,
		const FPassInputs& PassInputs,
		FRDGTextureRef* OutSceneColorTexture,
		FIntRect* OutSceneColorViewRect,
		FRDGTextureRef* OutSceneColorHalfResTexture,	
		FIntRect* OutSceneColorHalfResViewRect) const final;


	// Inherited via ICustomStaticScreenPercentage
	virtual void SetupMainGameViewFamily(FSceneViewFamily& ViewFamily) final;

#if DLSS_ENGINE_SUPPORTS_CSSPD
	/** Allows to setup View Family directly. To be used by modules that are aware of DLSS Plugin. */
	virtual void SetupViewFamily(FSceneViewFamily& ViewFamily, TSharedPtr<ICustomStaticScreenPercentageData> InScreenPercentageDataInterface) final;
#endif

	virtual float GetMinUpsampleResolutionFraction() const final;
	virtual float GetMaxUpsampleResolutionFraction() const final;

	float GetOptimalResolutionFractionForQuality(EDLSSQualityMode Quality) const;
	float GetOptimalSharpnessForQuality(EDLSSQualityMode Quality) const;
	float GetMinResolutionFractionForQuality(EDLSSQualityMode Quality) const;
	float GetMaxResolutionFractionForQuality(EDLSSQualityMode Quality) const;
	bool IsFixedResolutionFraction(EDLSSQualityMode Quality) const;
	
	const NGXRHI* GetNGXRHI() const
	{
		return NGXRHIExtensions;
	}

	// Inherited via ICustomResourcePool
	virtual void Tick(FRHICommandListImmediate& RHICmdList) override;

	bool IsQualityModeSupported(EDLSSQualityMode InQualityMode) const;
	uint32 GetNumRuntimeQualityModes() const
	{
		return NumRuntimeQualityModes;
	}

	bool IsDLSSActive() const;

	static FDLSSUpscaler* GetUpscalerInstanceForViewFamily(const FDLSSUpscaler* InUpscaler, EDLSSQualityMode InQualityMode);
	static bool IsValidUpscalerInstance(const ITemporalUpscaler* InUpscaler);

	static bool IsAutoQualityMode();
	static void SetAutoQualityMode(bool bAutoQualityMode);

	// Give the suggested EDLSSQualityMode if one is appropriate for the given pixel count, or nothing if DLSS should be disabled
	TOptional<EDLSSQualityMode> GetAutoQualityModeFromPixels(int PixelCount) const;

	static void ReleaseStaticResources();

private:
	FDLSSUpscaler(NGXRHI* InNGXRHIExtensions);
	FDLSSUpscaler(const FDLSSUpscaler&) = default;
	

	EDLSSQualityMode GetSupportedQualityModeFromCVarValue(int32 InCVarValue) const
	{
		checkf(NumRuntimeQualityModes, TEXT("This should only be called from the higher level code when DLSS is supported") );
		static_assert(int32(EDLSSQualityMode::NumValues) == 5, "dear DLSS plugin NVIDIA developer, please update this code to handle the new EDLSSQualityMode enum values");
		for (auto QualityMode : { EDLSSQualityMode::UltraPerformance,  EDLSSQualityMode::Performance , EDLSSQualityMode::Balanced, EDLSSQualityMode::Quality,  EDLSSQualityMode::UltraQuality })
		{
			if (InCVarValue == static_cast<int32>(QualityMode) && IsQualityModeSupported(QualityMode))
			{
				return QualityMode;
			}
		}
		return EDLSSQualityMode::Balanced;
	}

	TOptional<EDLSSQualityMode> GetAutoQualityModeFromViewFamily(const FSceneViewFamily& ViewFamily) const;
	
	bool EnableDLSSInPlayInEditorViewports() const;
	FDLSSOutputs AddDLSSPass(
		FRDGBuilder& GraphBuilder,
		const FViewInfo& View,
		const FDLSSPassParameters& Inputs,
		const FTemporalAAHistory& InputHistory,
		FTemporalAAHistory* OutputHistory,
		const TRefCountPtr<ICustomTemporalAAHistory> InputCustomHistoryInterface,
		TRefCountPtr<ICustomTemporalAAHistory>* OutputCustomHistoryInterface
	) const;



	EDLSSQualityMode DLSSQualityMode = EDLSSQualityMode::NumValues;

	// The FDLSSUpscaler(NGXRHI*) will update those once
	static NGXRHI* NGXRHIExtensions;
	static float MinResolutionFraction;
	static float MaxResolutionFraction;	

	static uint32 NumRuntimeQualityModes;
	static TArray<FDLSSOptimalSettings> ResolutionSettings;

	static TStaticArray <TSharedPtr<FDLSSUpscaler>, uint32(EDLSSQualityMode::NumValues)> DLSSUpscalerInstancesPerViewFamily;
};
