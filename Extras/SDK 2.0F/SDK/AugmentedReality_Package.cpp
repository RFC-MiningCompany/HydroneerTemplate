﻿/**
 * Name: Hydroneer
 * Version: 2.0F
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AAROriginActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAROriginActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.AROriginActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	 * 		Flags  -> ()
	 */
	bool UARSessionConfig::ShouldResetTrackedObjects()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	 * 		Flags  -> ()
	 */
	bool UARSessionConfig::ShouldResetCameraTracking()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	 * 		Flags  -> ()
	 */
	bool UARSessionConfig::ShouldRenderCameraOverlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	 * 		Flags  -> ()
	 */
	bool UARSessionConfig::ShouldEnableCameraTracking()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	 * 		Flags  -> ()
	 */
	bool UARSessionConfig::ShouldEnableAutoFocus()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetWorldMapData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              WorldMapData                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetWorldMapData(TArray<unsigned char> WorldMapData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetWorldMapData"));
		
		struct
		{
			TArray<unsigned char>                              WorldMapData;
		} params;
		params.WorldMapData = WorldMapData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		AugmentedReality_EARSessionTrackingFeature         InSessionTrackingFeature                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetSessionTrackingFeatureToEnable(AugmentedReality_EARSessionTrackingFeature InSessionTrackingFeature)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable"));
		
		struct
		{
			AugmentedReality_EARSessionTrackingFeature         InSessionTrackingFeature;
		} params;
		params.InSessionTrackingFeature = InSessionTrackingFeature;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		AugmentedReality_EARSceneReconstruction            InSceneReconstructionMethod                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetSceneReconstructionMethod(AugmentedReality_EARSceneReconstruction InSceneReconstructionMethod)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod"));
		
		struct
		{
			AugmentedReality_EARSceneReconstruction            InSceneReconstructionMethod;
		} params;
		params.InSceneReconstructionMethod = InSceneReconstructionMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetResetTrackedObjects(bool bNewValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects"));
		
		struct
		{
			bool                                               bNewValue;
		} params;
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetResetCameraTracking(bool bNewValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetResetCameraTracking"));
		
		struct
		{
			bool                                               bNewValue;
		} params;
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		AugmentedReality_EARFaceTrackingUpdate             InUpdate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetFaceTrackingUpdate(AugmentedReality_EARFaceTrackingUpdate InUpdate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate"));
		
		struct
		{
			AugmentedReality_EARFaceTrackingUpdate             InUpdate;
		} params;
		params.InUpdate = InUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		AugmentedReality_EARFaceTrackingDirection          InDirection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetFaceTrackingDirection(AugmentedReality_EARFaceTrackingDirection InDirection)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection"));
		
		struct
		{
			AugmentedReality_EARFaceTrackingDirection          InDirection;
		} params;
		params.InDirection = InDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetEnableAutoFocus(bool bNewValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus"));
		
		struct
		{
			bool                                               bNewValue;
		} params;
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARVideoFormat                              NewFormat                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat"));
		
		struct
		{
			struct FARVideoFormat                              NewFormat;
		} params;
		params.NewFormat = NewFormat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UARCandidateObject*>                  InCandidateObjects                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetCandidateObjectList"));
		
		struct
		{
			TArray<class UARCandidateObject*>                  InCandidateObjects;
		} params;
		params.InCandidateObjects = InCandidateObjects;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetWorldMapData
	 * 		Flags  -> ()
	 */
	TArray<unsigned char> UARSessionConfig::GetWorldMapData()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetWorldMapData"));
		
		struct
		{
			TArray<unsigned char>                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetWorldAlignment
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARWorldAlignment UARSessionConfig::GetWorldAlignment()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetWorldAlignment"));
		
		struct
		{
			AugmentedReality_EARWorldAlignment                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetSessionType
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARSessionType UARSessionConfig::GetSessionType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetSessionType"));
		
		struct
		{
			AugmentedReality_EARSessionType                    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARSceneReconstruction UARSessionConfig::GetSceneReconstructionMethod()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod"));
		
		struct
		{
			AugmentedReality_EARSceneReconstruction            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARPlaneDetectionMode UARSessionConfig::GetPlaneDetectionMode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode"));
		
		struct
		{
			AugmentedReality_EARPlaneDetectionMode             ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	 * 		Flags  -> ()
	 */
	int32_t UARSessionConfig::GetMaxNumSimultaneousImagesTracked()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked"));
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARLightEstimationMode UARSessionConfig::GetLightEstimationMode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetLightEstimationMode"));
		
		struct
		{
			AugmentedReality_EARLightEstimationMode            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARFrameSyncMode UARSessionConfig::GetFrameSyncMode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetFrameSyncMode"));
		
		struct
		{
			AugmentedReality_EARFrameSyncMode                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARFaceTrackingUpdate UARSessionConfig::GetFaceTrackingUpdate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate"));
		
		struct
		{
			AugmentedReality_EARFaceTrackingUpdate             ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARFaceTrackingDirection UARSessionConfig::GetFaceTrackingDirection()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection"));
		
		struct
		{
			AugmentedReality_EARFaceTrackingDirection          ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	 * 		Flags  -> ()
	 */
	AugmentedReality_EAREnvironmentCaptureProbeType UARSessionConfig::GetEnvironmentCaptureProbeType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType"));
		
		struct
		{
			AugmentedReality_EAREnvironmentCaptureProbeType    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARSessionTrackingFeature UARSessionConfig::GetEnabledSessionTrackingFeature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature"));
		
		struct
		{
			AugmentedReality_EARSessionTrackingFeature         ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	 * 		Flags  -> ()
	 */
	struct FARVideoFormat UARSessionConfig::GetDesiredVideoFormat()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat"));
		
		struct
		{
			struct FARVideoFormat                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
	 * 		Flags  -> ()
	 */
	TArray<class UARCandidateObject*> UARSessionConfig::GetCandidateObjectList()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetCandidateObjectList"));
		
		struct
		{
			TArray<class UARCandidateObject*>                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetCandidateImageList
	 * 		Flags  -> ()
	 */
	TArray<class UARCandidateImage*> UARSessionConfig::GetCandidateImageList()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetCandidateImageList"));
		
		struct
		{
			TArray<class UARCandidateImage*>                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.AddCandidateObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UARCandidateObject*                          CandidateObject                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::AddCandidateObject(class UARCandidateObject* CandidateObject)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.AddCandidateObject"));
		
		struct
		{
			class UARCandidateObject*                          CandidateObject;
		} params;
		params.CandidateObject = CandidateObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.AddCandidateImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UARCandidateImage*                           NewCandidateImage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::AddCandidateImage(class UARCandidateImage* NewCandidateImage)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.AddCandidateImage"));
		
		struct
		{
			class UARCandidateImage*                           NewCandidateImage;
		} params;
		params.NewCandidateImage = NewCandidateImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARSessionConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARSessionConfig::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARSessionConfig"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARLightEstimate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARLightEstimate::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARLightEstimate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	 * 		Flags  -> ()
	 */
	float UARBasicLightEstimate::GetAmbientIntensityLumens()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens"));
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	 * 		Flags  -> ()
	 */
	float UARBasicLightEstimate::GetAmbientColorTemperatureKelvin()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin"));
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UARBasicLightEstimate::GetAmbientColor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor"));
		
		struct
		{
			struct FLinearColor                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARBasicLightEstimate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARBasicLightEstimate::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARBasicLightEstimate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
	 * 		Flags  -> ()
	 */
	float UARCandidateImage::GetPhysicalWidth()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateImage.GetPhysicalWidth"));
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
	 * 		Flags  -> ()
	 */
	float UARCandidateImage::GetPhysicalHeight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateImage.GetPhysicalHeight"));
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetOrientation
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARCandidateImageOrientation UARCandidateImage::GetOrientation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateImage.GetOrientation"));
		
		struct
		{
			AugmentedReality_EARCandidateImageOrientation      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetFriendlyName
	 * 		Flags  -> ()
	 */
	class FString UARCandidateImage::GetFriendlyName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateImage.GetFriendlyName"));
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetCandidateTexture
	 * 		Flags  -> ()
	 */
	class UTexture2D* UARCandidateImage::GetCandidateTexture()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateImage.GetCandidateTexture"));
		
		struct
		{
			class UTexture2D*                                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARCandidateImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARCandidateImage::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARCandidateImage"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARActor.AddARComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InComponentClass                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       NativeID                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARComponent* AARActor::AddARComponent(class UClass* InComponentClass, const struct FGuid& NativeID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARActor.AddARComponent"));
		
		struct
		{
			class UClass*                                      InComponentClass;
			struct FGuid                                       NativeID;
			class UARComponent*                                ReturnValue;
		} params;
		params.InComponentClass = InComponentClass;
		params.NativeID = NativeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AARActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToUnpin                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::UnpinComponent(class USceneComponent* ComponentToUnpin)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.UnpinComponent"));
		
		struct
		{
			class USceneComponent*                             ComponentToUnpin;
		} params;
		params.ComponentToUnpin = ComponentToUnpin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnOff                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		AugmentedReality_EARCaptureType                    CaptureType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::ToggleARCapture(bool bOnOff, AugmentedReality_EARCaptureType CaptureType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture"));
		
		struct
		{
			bool                                               bOnOff;
			AugmentedReality_EARCaptureType                    CaptureType;
			bool                                               ReturnValue;
		} params;
		params.bOnOff = bOnOff;
		params.CaptureType = CaptureType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.StopARSession
	 * 		Flags  -> ()
	 */
	void UARBlueprintLibrary::StopARSession()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.StopARSession"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.StartARSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::StartARSession(class UARSessionConfig* SessionConfig)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.StartARSession"));
		
		struct
		{
			class UARSessionConfig*                            SessionConfig;
		} params;
		params.SessionConfig = SessionConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnOff                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::SetEnabledXRCamera(bool bOnOff)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera"));
		
		struct
		{
			bool                                               bOnOff;
		} params;
		params.bOnOff = bOnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InWorldScale                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::SetARWorldScale(float InWorldScale)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale"));
		
		struct
		{
			float                                              InWorldScale;
		} params;
		params.InWorldScale = InWorldScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     OriginLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    OriginRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsTransformInWorldSpace                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMaintainUpDirection                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::SetARWorldOriginLocationAndRotation(const struct FVector& OriginLocation, const struct FRotator& OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation"));
		
		struct
		{
			struct FVector                                     OriginLocation;
			struct FRotator                                    OriginRotation;
			bool                                               bIsTransformInWorldSpace;
			bool                                               bMaintainUpDirection;
		} params;
		params.OriginLocation = OriginLocation;
		params.OriginRotation = OriginRotation;
		params.bIsTransformInWorldSpace = bIsTransformInWorldSpace;
		params.bMaintainUpDirection = bMaintainUpDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  InAlignmentTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::SetAlignmentTransform(const struct FTransform& InAlignmentTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform"));
		
		struct
		{
			struct FTransform                                  InAlignmentTransform;
		} params;
		params.InAlignmentTransform = InAlignmentTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InSaveName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UARPin*                                      InPin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::SaveARPinToLocalStore(const class FName& InSaveName, class UARPin* InPin)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore"));
		
		struct
		{
			class FName                                        InSaveName;
			class UARPin*                                      InPin;
			bool                                               ReturnValue;
		} params;
		params.InSaveName = InSaveName;
		params.InPin = InPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntPoint                                   InSize                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntPoint UARBlueprintLibrary::ResizeXRCamera(const struct FIntPoint& InSize)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera"));
		
		struct
		{
			struct FIntPoint                                   InSize;
			struct FIntPoint                                   ReturnValue;
		} params;
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.RemovePin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UARPin*                                      PinToRemove                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::RemovePin(class UARPin* PinToRemove)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.RemovePin"));
		
		struct
		{
			class UARPin*                                      PinToRemove;
		} params;
		params.PinToRemove = PinToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InSaveName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::RemoveARPinFromLocalStore(const class FName& InSaveName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore"));
		
		struct
		{
			class FName                                        InSaveName;
		} params;
		params.InSaveName = InSaveName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore
	 * 		Flags  -> ()
	 */
	void UARBlueprintLibrary::RemoveAllARPinsFromLocalStore()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        DebugName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARPin* UARBlueprintLibrary::PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const class FName& DebugName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult"));
		
		struct
		{
			class USceneComponent*                             ComponentToPin;
			struct FARTraceResult                              TraceResult;
			class FName                                        DebugName;
			class UARPin*                                      ReturnValue;
		} params;
		params.ComponentToPin = ComponentToPin;
		params.TraceResult = TraceResult;
		params.DebugName = DebugName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UARPin*                                      Pin                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::PinComponentToARPin(class USceneComponent* ComponentToPin, class UARPin* Pin)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin"));
		
		struct
		{
			class USceneComponent*                             ComponentToPin;
			class UARPin*                                      Pin;
			bool                                               ReturnValue;
		} params;
		params.ComponentToPin = ComponentToPin;
		params.Pin = Pin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.PinComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  PinToWorldTransform                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UARTrackedGeometry*                          TrackedGeometry                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        DebugName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARPin* UARBlueprintLibrary::PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const class FName& DebugName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.PinComponent"));
		
		struct
		{
			class USceneComponent*                             ComponentToPin;
			struct FTransform                                  PinToWorldTransform;
			class UARTrackedGeometry*                          TrackedGeometry;
			class FName                                        DebugName;
			class UARPin*                                      ReturnValue;
		} params;
		params.ComponentToPin = ComponentToPin;
		params.PinToWorldTransform = PinToWorldTransform;
		params.TrackedGeometry = TrackedGeometry;
		params.DebugName = DebugName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.PauseARSession
	 * 		Flags  -> ()
	 */
	void UARBlueprintLibrary::PauseARSession()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.PauseARSession"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
	 * 		Flags  -> ()
	 */
	TMap<class FName, class UARPin*> UARBlueprintLibrary::LoadARPinsFromLocalStore()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore"));
		
		struct
		{
			TMap<class FName, class UARPin*>                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestFeaturePoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestGroundPlane                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneExtents                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneBoundaryPolygon                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D"));
		
		struct
		{
			struct FVector                                     Start;
			struct FVector                                     End;
			bool                                               bTestFeaturePoints;
			bool                                               bTestGroundPlane;
			bool                                               bTestPlaneExtents;
			bool                                               bTestPlaneBoundaryPolygon;
			TArray<struct FARTraceResult>                      ReturnValue;
		} params;
		params.Start = Start;
		params.End = End;
		params.bTestFeaturePoints = bTestFeaturePoints;
		params.bTestGroundPlane = bTestGroundPlane;
		params.bTestPlaneExtents = bTestPlaneExtents;
		params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   ScreenCoord                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestFeaturePoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestGroundPlane                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneExtents                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneBoundaryPolygon                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects"));
		
		struct
		{
			struct FVector2D                                   ScreenCoord;
			bool                                               bTestFeaturePoints;
			bool                                               bTestGroundPlane;
			bool                                               bTestPlaneExtents;
			bool                                               bTestPlaneBoundaryPolygon;
			TArray<struct FARTraceResult>                      ReturnValue;
		} params;
		params.ScreenCoord = ScreenCoord;
		params.bTestFeaturePoints = bTestFeaturePoints;
		params.bTestGroundPlane = bTestGroundPlane;
		params.bTestPlaneExtents = bTestPlaneExtents;
		params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
	 * 		Flags  -> ()
	 * Parameters:
	 * 		AugmentedReality_EARSessionType                    SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::IsSessionTypeSupported(AugmentedReality_EARSessionType SessionType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported"));
		
		struct
		{
			AugmentedReality_EARSessionType                    SessionType;
			bool                                               ReturnValue;
		} params;
		params.SessionType = SessionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
	 * 		Flags  -> ()
	 * Parameters:
	 * 		AugmentedReality_EARSessionType                    SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		AugmentedReality_EARSessionTrackingFeature         SessionTrackingFeature                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::IsSessionTrackingFeatureSupported(AugmentedReality_EARSessionType SessionType, AugmentedReality_EARSessionTrackingFeature SessionTrackingFeature)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported"));
		
		struct
		{
			AugmentedReality_EARSessionType                    SessionType;
			AugmentedReality_EARSessionTrackingFeature         SessionTrackingFeature;
			bool                                               ReturnValue;
		} params;
		params.SessionType = SessionType;
		params.SessionTrackingFeature = SessionTrackingFeature;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
	 * 		Flags  -> ()
	 * Parameters:
	 * 		AugmentedReality_EARSessionType                    SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		AugmentedReality_EARSceneReconstruction            SceneReconstructionMethod                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::IsSceneReconstructionSupported(AugmentedReality_EARSessionType SessionType, AugmentedReality_EARSceneReconstruction SceneReconstructionMethod)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported"));
		
		struct
		{
			AugmentedReality_EARSessionType                    SessionType;
			AugmentedReality_EARSceneReconstruction            SceneReconstructionMethod;
			bool                                               ReturnValue;
		} params;
		params.SessionType = SessionType;
		params.SceneReconstructionMethod = SceneReconstructionMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsARSupported
	 * 		Flags  -> ()
	 */
	bool UARBlueprintLibrary::IsARSupported()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.IsARSupported"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
	 * 		Flags  -> ()
	 */
	bool UARBlueprintLibrary::IsARPinLocalStoreSupported()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
	 * 		Flags  -> ()
	 */
	bool UARBlueprintLibrary::IsARPinLocalStoreReady()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARWorldMappingState UARBlueprintLibrary::GetWorldMappingStatus()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus"));
		
		struct
		{
			AugmentedReality_EARWorldMappingState              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARTrackingQualityReason UARBlueprintLibrary::GetTrackingQualityReason()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason"));
		
		struct
		{
			AugmentedReality_EARTrackingQualityReason          ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARTrackingQuality UARBlueprintLibrary::GetTrackingQuality()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality"));
		
		struct
		{
			AugmentedReality_EARTrackingQuality                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		AugmentedReality_EARSessionType                    SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FARVideoFormat> UARBlueprintLibrary::GetSupportedVideoFormats(AugmentedReality_EARSessionType SessionType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats"));
		
		struct
		{
			AugmentedReality_EARSessionType                    SessionType;
			TArray<struct FARVideoFormat>                      ReturnValue;
		} params;
		params.SessionType = SessionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
	 * 		Flags  -> ()
	 */
	class UARSessionConfig* UARBlueprintLibrary::GetSessionConfig()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig"));
		
		struct
		{
			class UARSessionConfig*                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
	 * 		Flags  -> ()
	 */
	TArray<struct FVector> UARBlueprintLibrary::GetPointCloud()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetPointCloud"));
		
		struct
		{
			TArray<struct FVector>                             ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
	 * 		Flags  -> ()
	 */
	class UARTexture* UARBlueprintLibrary::GetPersonSegmentationImage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage"));
		
		struct
		{
			class UARTexture*                                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
	 * 		Flags  -> ()
	 */
	class UARTexture* UARBlueprintLibrary::GetPersonSegmentationDepthImage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage"));
		
		struct
		{
			class UARTexture*                                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InWorldLocation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		AugmentedReality_EARObjectClassification           OutClassification                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutClassificationLocation                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxLocationDiff                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, AugmentedReality_EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation"));
		
		struct
		{
			struct FVector                                     InWorldLocation;
			AugmentedReality_EARObjectClassification           OutClassification;
			struct FVector                                     OutClassificationLocation;
			float                                              MaxLocationDiff;
			bool                                               ReturnValue;
		} params;
		params.InWorldLocation = InWorldLocation;
		params.MaxLocationDiff = MaxLocationDiff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutClassification != nullptr)
			*OutClassification = params.OutClassification;
		if (OutClassificationLocation != nullptr)
			*OutClassificationLocation = params.OutClassificationLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
	 * 		Flags  -> ()
	 */
	int32_t UARBlueprintLibrary::GetNumberOfTrackedFacesSupported()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported"));
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
	 * 		Flags  -> ()
	 */
	class UARLightEstimate* UARBlueprintLibrary::GetCurrentLightEstimate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate"));
		
		struct
		{
			class UARLightEstimate*                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARCameraIntrinsics                         OutCameraIntrinsics                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::GetCameraIntrinsics(struct FARCameraIntrinsics* OutCameraIntrinsics)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics"));
		
		struct
		{
			struct FARCameraIntrinsics                         OutCameraIntrinsics;
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCameraIntrinsics != nullptr)
			*OutCameraIntrinsics = params.OutCameraIntrinsics;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
	 * 		Flags  -> ()
	 */
	class UARTextureCameraImage* UARBlueprintLibrary::GetCameraImage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetCameraImage"));
		
		struct
		{
			class UARTextureCameraImage*                       ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
	 * 		Flags  -> ()
	 */
	class UARTextureCameraDepth* UARBlueprintLibrary::GetCameraDepth()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth"));
		
		struct
		{
			class UARTextureCameraDepth*                       ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale
	 * 		Flags  -> ()
	 */
	float UARBlueprintLibrary::GetARWorldScale()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale"));
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetARTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		AugmentedReality_EARTextureType                    TextureType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARTexture* UARBlueprintLibrary::GetARTexture(AugmentedReality_EARTextureType TextureType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetARTexture"));
		
		struct
		{
			AugmentedReality_EARTextureType                    TextureType;
			class UARTexture*                                  ReturnValue;
		} params;
		params.TextureType = TextureType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
	 * 		Flags  -> ()
	 */
	struct FARSessionStatus UARBlueprintLibrary::GetARSessionStatus()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus"));
		
		struct
		{
			struct FARSessionStatus                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
	 * 		Flags  -> ()
	 */
	TArray<class UARTrackedPose*> UARBlueprintLibrary::GetAllTrackedPoses()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses"));
		
		struct
		{
			TArray<class UARTrackedPose*>                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
	 * 		Flags  -> ()
	 */
	TArray<class UARTrackedPoint*> UARBlueprintLibrary::GetAllTrackedPoints()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints"));
		
		struct
		{
			TArray<class UARTrackedPoint*>                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
	 * 		Flags  -> ()
	 */
	TArray<class UARPlaneGeometry*> UARBlueprintLibrary::GetAllTrackedPlanes()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes"));
		
		struct
		{
			TArray<class UARPlaneGeometry*>                    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
	 * 		Flags  -> ()
	 */
	TArray<class UARTrackedImage*> UARBlueprintLibrary::GetAllTrackedImages()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages"));
		
		struct
		{
			TArray<class UARTrackedImage*>                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
	 * 		Flags  -> ()
	 */
	TArray<class UAREnvironmentCaptureProbe*> UARBlueprintLibrary::GetAllTrackedEnvironmentCaptureProbes()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes"));
		
		struct
		{
			TArray<class UAREnvironmentCaptureProbe*>          ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
	 * 		Flags  -> ()
	 */
	TArray<struct FARPose2D> UARBlueprintLibrary::GetAllTracked2DPoses()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses"));
		
		struct
		{
			TArray<struct FARPose2D>                           ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllPins
	 * 		Flags  -> ()
	 */
	TArray<class UARPin*> UARBlueprintLibrary::GetAllPins()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetAllPins"));
		
		struct
		{
			TArray<class UARPin*>                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      GeometryClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometriesByClass(class UClass* GeometryClass)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass"));
		
		struct
		{
			class UClass*                                      GeometryClass;
			TArray<class UARTrackedGeometry*>                  ReturnValue;
		} params;
		params.GeometryClass = GeometryClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
	 * 		Flags  -> ()
	 */
	TArray<class UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometries()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries"));
		
		struct
		{
			TArray<class UARTrackedGeometry*>                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
	 * 		Flags  -> ()
	 */
	struct FTransform UARBlueprintLibrary::GetAlignmentTransform()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform"));
		
		struct
		{
			struct FTransform                                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PointName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UARTrackedPoint*> UARBlueprintLibrary::FindTrackedPointsByName(const class FString& PointName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName"));
		
		struct
		{
			class FString                                      PointName;
			TArray<class UARTrackedPoint*>                     ReturnValue;
		} params;
		params.PointName = PointName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UARTrackedGeometry*                          TrackedGeometry                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutlineThickness                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry"));
		
		struct
		{
			class UARTrackedGeometry*                          TrackedGeometry;
			class UObject*                                     WorldContextObject;
			struct FLinearColor                                Color;
			float                                              OutlineThickness;
			float                                              PersistForSeconds;
		} params;
		params.TrackedGeometry = TrackedGeometry;
		params.WorldContextObject = WorldContextObject;
		params.Color = Color;
		params.OutlineThickness = OutlineThickness;
		params.PersistForSeconds = PersistForSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UARPin*                                      ARPin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin"));
		
		struct
		{
			class UARPin*                                      ARPin;
			class UObject*                                     WorldContextObject;
			struct FLinearColor                                Color;
			float                                              Scale;
			float                                              PersistForSeconds;
		} params;
		params.ARPin = ARPin;
		params.WorldContextObject = WorldContextObject;
		params.Color = Color;
		params.Scale = Scale;
		params.PersistForSeconds = PersistForSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             StartPoints                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             EndPoints                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ClosestIntersection                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::CalculateClosestIntersection(TArray<struct FVector> StartPoints, TArray<struct FVector> EndPoints, struct FVector* ClosestIntersection)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection"));
		
		struct
		{
			TArray<struct FVector>                             StartPoints;
			TArray<struct FVector>                             EndPoints;
			struct FVector                                     ClosestIntersection;
		} params;
		params.StartPoints = StartPoints;
		params.EndPoints = EndPoints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClosestIntersection != nullptr)
			*ClosestIntersection = params.ClosestIntersection;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  TransformInFirstCoordinateSystem                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  TransformInSecondCoordinateSystem                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  AlignmentTransform                                         (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::CalculateAlignmentTransform(const struct FTransform& TransformInFirstCoordinateSystem, const struct FTransform& TransformInSecondCoordinateSystem, struct FTransform* AlignmentTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform"));
		
		struct
		{
			struct FTransform                                  TransformInFirstCoordinateSystem;
			struct FTransform                                  TransformInSecondCoordinateSystem;
			struct FTransform                                  AlignmentTransform;
		} params;
		params.TransformInFirstCoordinateSystem = TransformInFirstCoordinateSystem;
		params.TransformInSecondCoordinateSystem = TransformInSecondCoordinateSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AlignmentTransform != nullptr)
			*AlignmentTransform = params.AlignmentTransform;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  WorldTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      PointName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeletePointsWithSameName                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::AddTrackedPointWithName(const struct FTransform& WorldTransform, const class FString& PointName, bool bDeletePointsWithSameName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName"));
		
		struct
		{
			struct FTransform                                  WorldTransform;
			class FString                                      PointName;
			bool                                               bDeletePointsWithSameName;
			bool                                               ReturnValue;
		} params;
		params.WorldTransform = WorldTransform;
		params.PointName = PointName;
		params.bDeletePointsWithSameName = bDeletePointsWithSameName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  CandidateTexture                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FriendlyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PhysicalWidth                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARCandidateImage* UARBlueprintLibrary::AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage"));
		
		struct
		{
			class UARSessionConfig*                            SessionConfig;
			class UTexture2D*                                  CandidateTexture;
			class FString                                      FriendlyName;
			float                                              PhysicalWidth;
			class UARCandidateImage*                           ReturnValue;
		} params;
		params.SessionConfig = SessionConfig;
		params.CandidateTexture = CandidateTexture;
		params.FriendlyName = FriendlyName;
		params.PhysicalWidth = PhysicalWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe"));
		
		struct
		{
			struct FVector                                     Location;
			struct FVector                                     Extent;
			bool                                               ReturnValue;
		} params;
		params.Location = Location;
		params.Extent = Extent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARBlueprintLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UARTrackedGeometry* UARTraceResultLibrary::GetTrackedGeometry(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry"));
		
		struct
		{
			struct FARTraceResult                              TraceResult;
			class UARTrackedGeometry*                          ReturnValue;
		} params;
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	AugmentedReality_EARLineTraceChannels UARTraceResultLibrary::GetTraceChannel(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel"));
		
		struct
		{
			struct FARTraceResult                              TraceResult;
			AugmentedReality_EARLineTraceChannels              ReturnValue;
		} params;
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARTraceResultLibrary::GetLocalTransform(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform"));
		
		struct
		{
			struct FARTraceResult                              TraceResult;
			struct FTransform                                  ReturnValue;
		} params;
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARTraceResultLibrary::GetLocalToWorldTransform(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform"));
		
		struct
		{
			struct FARTraceResult                              TraceResult;
			struct FTransform                                  ReturnValue;
		} params;
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARTraceResultLibrary::GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform"));
		
		struct
		{
			struct FARTraceResult                              TraceResult;
			struct FTransform                                  ReturnValue;
		} params;
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	float UARTraceResultLibrary::GetDistanceFromCamera(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera"));
		
		struct
		{
			struct FARTraceResult                              TraceResult;
			float                                              ReturnValue;
		} params;
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTraceResultLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTraceResultLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTraceResultLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARBaseAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARBaseAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARSaveWorldAsyncTaskBlueprintProxy* UARSaveWorldAsyncTaskBlueprintProxy::ARSaveWorld(class UObject* WorldContextObject)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UARSaveWorldAsyncTaskBlueprintProxy*         ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARSaveWorldAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARSaveWorldAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARGetCandidateObjectAsyncTaskBlueprintProxy* UARGetCandidateObjectAsyncTaskBlueprintProxy::ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                                     Location;
			struct FVector                                     Extent;
			class UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Location = Location;
		params.Extent = Extent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARGetCandidateObjectAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARComponent.UpdateVisualization
	 * 		Flags  -> ()
	 */
	void UARComponent::UpdateVisualization()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARComponent.UpdateVisualization"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARComponent.SetNativeID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       NativeID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARComponent::SetNativeID(const struct FGuid& NativeID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARComponent.SetNativeID"));
		
		struct
		{
			struct FGuid                                       NativeID;
		} params;
		params.NativeID = NativeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARComponent.ReceiveRemove
	 * 		Flags  -> ()
	 */
	void UARComponent::ReceiveRemove()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARComponent.ReceiveRemove"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARComponent.OnRep_Payload
	 * 		Flags  -> ()
	 */
	void UARComponent::OnRep_Payload()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARComponent.OnRep_Payload"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARComponent.GetMRMesh
	 * 		Flags  -> ()
	 */
	class UMRMeshComponent* UARComponent::GetMRMesh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARComponent.GetMRMesh"));
		
		struct
		{
			class UMRMeshComponent*                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		AugmentedReality_EPlaneComponentDebugMode          NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARPlaneComponent::SetPlaneComponentDebugMode(AugmentedReality_EPlaneComponentDebugMode NewDebugMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode"));
		
		struct
		{
			AugmentedReality_EPlaneComponentDebugMode          NewDebugMode;
		} params;
		params.NewDebugMode = NewDebugMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<AugmentedReality_EARObjectClassification, struct FLinearColor> InColors                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPlaneComponent::SetObjectClassificationDebugColors(TMap<AugmentedReality_EARObjectClassification, struct FLinearColor> InColors)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors"));
		
		struct
		{
			TMap<AugmentedReality_EARObjectClassification, struct FLinearColor> InColors;
		} params;
		params.InColors = InColors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARPlaneUpdatePayload                       NewPayload                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPlaneComponent::ServerUpdatePayload(const struct FARPlaneUpdatePayload& NewPayload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload"));
		
		struct
		{
			struct FARPlaneUpdatePayload                       NewPayload;
		} params;
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARPlaneUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPlaneComponent::ReceiveUpdate(const struct FARPlaneUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneComponent.ReceiveUpdate"));
		
		struct
		{
			struct FARPlaneUpdatePayload                       Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARPlaneUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPlaneComponent::ReceiveAdd(const struct FARPlaneUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneComponent.ReceiveAdd"));
		
		struct
		{
			struct FARPlaneUpdatePayload                       Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
	 * 		Flags  -> ()
	 */
	TMap<AugmentedReality_EARObjectClassification, struct FLinearColor> UARPlaneComponent::GetObjectClassificationDebugColors()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors"));
		
		struct
		{
			TMap<AugmentedReality_EARObjectClassification, struct FLinearColor> ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARPlaneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARPlaneComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARPlaneComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPointComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARPointUpdatePayload                       NewPayload                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARPointComponent::ServerUpdatePayload(const struct FARPointUpdatePayload& NewPayload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPointComponent.ServerUpdatePayload"));
		
		struct
		{
			struct FARPointUpdatePayload                       NewPayload;
		} params;
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPointComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARPointUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARPointComponent::ReceiveUpdate(const struct FARPointUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPointComponent.ReceiveUpdate"));
		
		struct
		{
			struct FARPointUpdatePayload                       Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPointComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARPointUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARPointComponent::ReceiveAdd(const struct FARPointUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPointComponent.ReceiveAdd"));
		
		struct
		{
			struct FARPointUpdatePayload                       Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARPointComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARPointComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARPointComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		AugmentedReality_EFaceComponentDebugMode           NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARFaceComponent::SetFaceComponentDebugMode(AugmentedReality_EFaceComponentDebugMode NewDebugMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode"));
		
		struct
		{
			AugmentedReality_EFaceComponentDebugMode           NewDebugMode;
		} params;
		params.NewDebugMode = NewDebugMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARFaceComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARFaceUpdatePayload                        NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARFaceComponent::ServerUpdatePayload(const struct FARFaceUpdatePayload& NewPayload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARFaceComponent.ServerUpdatePayload"));
		
		struct
		{
			struct FARFaceUpdatePayload                        NewPayload;
		} params;
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARFaceComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARFaceUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARFaceComponent::ReceiveUpdate(const struct FARFaceUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARFaceComponent.ReceiveUpdate"));
		
		struct
		{
			struct FARFaceUpdatePayload                        Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARFaceComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARFaceUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARFaceComponent::ReceiveAdd(const struct FARFaceUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARFaceComponent.ReceiveAdd"));
		
		struct
		{
			struct FARFaceUpdatePayload                        Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARFaceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARFaceComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARFaceComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		AugmentedReality_EImageComponentDebugMode          NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARImageComponent::SetImageComponentDebugMode(AugmentedReality_EImageComponentDebugMode NewDebugMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode"));
		
		struct
		{
			AugmentedReality_EImageComponentDebugMode          NewDebugMode;
		} params;
		params.NewDebugMode = NewDebugMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARImageComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARImageUpdatePayload                       NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARImageComponent::ServerUpdatePayload(const struct FARImageUpdatePayload& NewPayload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARImageComponent.ServerUpdatePayload"));
		
		struct
		{
			struct FARImageUpdatePayload                       NewPayload;
		} params;
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARImageComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARImageUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARImageComponent::ReceiveUpdate(const struct FARImageUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARImageComponent.ReceiveUpdate"));
		
		struct
		{
			struct FARImageUpdatePayload                       Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARImageComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARImageUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARImageComponent::ReceiveAdd(const struct FARImageUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARImageComponent.ReceiveAdd"));
		
		struct
		{
			struct FARImageUpdatePayload                       Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARImageComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARImageComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARImageComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		AugmentedReality_EQRCodeComponentDebugMode         NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARQRCodeComponent::SetQRCodeComponentDebugMode(AugmentedReality_EQRCodeComponentDebugMode NewDebugMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode"));
		
		struct
		{
			AugmentedReality_EQRCodeComponentDebugMode         NewDebugMode;
		} params;
		params.NewDebugMode = NewDebugMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARQRCodeUpdatePayload                      NewPayload                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARQRCodeComponent::ServerUpdatePayload(const struct FARQRCodeUpdatePayload& NewPayload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload"));
		
		struct
		{
			struct FARQRCodeUpdatePayload                      NewPayload;
		} params;
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARQRCodeUpdatePayload                      Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARQRCodeComponent::ReceiveUpdate(const struct FARQRCodeUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate"));
		
		struct
		{
			struct FARQRCodeUpdatePayload                      Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARQRCodeComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARQRCodeUpdatePayload                      Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARQRCodeComponent::ReceiveAdd(const struct FARQRCodeUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARQRCodeComponent.ReceiveAdd"));
		
		struct
		{
			struct FARQRCodeUpdatePayload                      Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARQRCodeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARQRCodeComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARQRCodeComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		AugmentedReality_EPoseComponentDebugMode           NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARPoseComponent::SetPoseComponentDebugMode(AugmentedReality_EPoseComponentDebugMode NewDebugMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode"));
		
		struct
		{
			AugmentedReality_EPoseComponentDebugMode           NewDebugMode;
		} params;
		params.NewDebugMode = NewDebugMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPoseComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARPoseUpdatePayload                        NewPayload                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPoseComponent::ServerUpdatePayload(const struct FARPoseUpdatePayload& NewPayload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPoseComponent.ServerUpdatePayload"));
		
		struct
		{
			struct FARPoseUpdatePayload                        NewPayload;
		} params;
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPoseComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARPoseUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPoseComponent::ReceiveUpdate(const struct FARPoseUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPoseComponent.ReceiveUpdate"));
		
		struct
		{
			struct FARPoseUpdatePayload                        Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPoseComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARPoseUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPoseComponent::ReceiveAdd(const struct FARPoseUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPoseComponent.ReceiveAdd"));
		
		struct
		{
			struct FARPoseUpdatePayload                        Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARPoseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARPoseComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARPoseComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAREnvironmentProbeUpdatePayload            NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAREnvironmentProbeComponent::ServerUpdatePayload(const struct FAREnvironmentProbeUpdatePayload& NewPayload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload"));
		
		struct
		{
			struct FAREnvironmentProbeUpdatePayload            NewPayload;
		} params;
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAREnvironmentProbeUpdatePayload            Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAREnvironmentProbeComponent::ReceiveUpdate(const struct FAREnvironmentProbeUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate"));
		
		struct
		{
			struct FAREnvironmentProbeUpdatePayload            Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAREnvironmentProbeUpdatePayload            Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAREnvironmentProbeComponent::ReceiveAdd(const struct FAREnvironmentProbeUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd"));
		
		struct
		{
			struct FAREnvironmentProbeUpdatePayload            Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAREnvironmentProbeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAREnvironmentProbeComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.AREnvironmentProbeComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARObjectComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARObjectUpdatePayload                      NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARObjectComponent::ServerUpdatePayload(const struct FARObjectUpdatePayload& NewPayload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARObjectComponent.ServerUpdatePayload"));
		
		struct
		{
			struct FARObjectUpdatePayload                      NewPayload;
		} params;
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARObjectComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARObjectUpdatePayload                      Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARObjectComponent::ReceiveUpdate(const struct FARObjectUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARObjectComponent.ReceiveUpdate"));
		
		struct
		{
			struct FARObjectUpdatePayload                      Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARObjectComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARObjectUpdatePayload                      Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARObjectComponent::ReceiveAdd(const struct FARObjectUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARObjectComponent.ReceiveAdd"));
		
		struct
		{
			struct FARObjectUpdatePayload                      Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARObjectComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARObjectComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARObjectComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARMeshComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARMeshUpdatePayload                        NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARMeshComponent::ServerUpdatePayload(const struct FARMeshUpdatePayload& NewPayload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARMeshComponent.ServerUpdatePayload"));
		
		struct
		{
			struct FARMeshUpdatePayload                        NewPayload;
		} params;
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARMeshComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARMeshUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARMeshComponent::ReceiveUpdate(const struct FARMeshUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARMeshComponent.ReceiveUpdate"));
		
		struct
		{
			struct FARMeshUpdatePayload                        Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARMeshComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARMeshUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARMeshComponent::ReceiveAdd(const struct FARMeshUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARMeshComponent.ReceiveAdd"));
		
		struct
		{
			struct FARMeshUpdatePayload                        Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARMeshComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARMeshComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		AugmentedReality_EGeoAnchorComponentDebugMode      NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARGeoAnchorComponent::SetGeoAnchorComponentDebugMode(AugmentedReality_EGeoAnchorComponentDebugMode NewDebugMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode"));
		
		struct
		{
			AugmentedReality_EGeoAnchorComponentDebugMode      NewDebugMode;
		} params;
		params.NewDebugMode = NewDebugMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARGeoAnchorUpdatePayload                   NewPayload                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARGeoAnchorComponent::ServerUpdatePayload(const struct FARGeoAnchorUpdatePayload& NewPayload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload"));
		
		struct
		{
			struct FARGeoAnchorUpdatePayload                   NewPayload;
		} params;
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARGeoAnchorUpdatePayload                   Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARGeoAnchorComponent::ReceiveUpdate(const struct FARGeoAnchorUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate"));
		
		struct
		{
			struct FARGeoAnchorUpdatePayload                   Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARGeoAnchorUpdatePayload                   Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARGeoAnchorComponent::ReceiveAdd(const struct FARGeoAnchorUpdatePayload& Payload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd"));
		
		struct
		{
			struct FARGeoAnchorUpdatePayload                   Payload;
		} params;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARGeoAnchorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARGeoAnchorComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARGeoAnchorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARDependencyHandler.StartARSessionLatent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARDependencyHandler::StartARSessionLatent(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARDependencyHandler.StartARSessionLatent"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UARSessionConfig*                            SessionConfig;
			struct FLatentActionInfo                           LatentInfo;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SessionConfig = SessionConfig;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		AugmentedReality_EARServicePermissionRequestResult OutPermissionResult                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARDependencyHandler::RequestARSessionPermission(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo, AugmentedReality_EARServicePermissionRequestResult* OutPermissionResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UARSessionConfig*                            SessionConfig;
			struct FLatentActionInfo                           LatentInfo;
			AugmentedReality_EARServicePermissionRequestResult OutPermissionResult;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SessionConfig = SessionConfig;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPermissionResult != nullptr)
			*OutPermissionResult = params.OutPermissionResult;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARDependencyHandler.InstallARService
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		AugmentedReality_EARServiceInstallRequestResult    OutInstallResult                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARDependencyHandler::InstallARService(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, AugmentedReality_EARServiceInstallRequestResult* OutInstallResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARDependencyHandler.InstallARService"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			AugmentedReality_EARServiceInstallRequestResult    OutInstallResult;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInstallResult != nullptr)
			*OutInstallResult = params.OutInstallResult;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler
	 * 		Flags  -> ()
	 */
	class UARDependencyHandler* UARDependencyHandler::GetARDependencyHandler()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler"));
		
		struct
		{
			class UARDependencyHandler*                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		AugmentedReality_EARServiceAvailability            OutAvailability                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARDependencyHandler::CheckARServiceAvailability(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, AugmentedReality_EARServiceAvailability* OutAvailability)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			AugmentedReality_EARServiceAvailability            OutAvailability;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAvailability != nullptr)
			*OutAvailability = params.OutAvailability;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARDependencyHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARDependencyHandler::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARDependencyHandler"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
	 * 		Flags  -> ()
	 */
	class UARGeoTrackingSupport* UARGeoTrackingSupport::GetGeoTrackingSupport()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport"));
		
		struct
		{
			class UARGeoTrackingSupport*                       ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARGeoTrackingStateReason UARGeoTrackingSupport::GetGeoTrackingStateReason()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason"));
		
		struct
		{
			AugmentedReality_EARGeoTrackingStateReason         ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARGeoTrackingState UARGeoTrackingSupport::GetGeoTrackingState()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState"));
		
		struct
		{
			AugmentedReality_EARGeoTrackingState               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARGeoTrackingAccuracy UARGeoTrackingSupport::GetGeoTrackingAccuracy()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy"));
		
		struct
		{
			AugmentedReality_EARGeoTrackingAccuracy            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Longitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Latitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AltitudeMeters                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OptionalAnchorName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARGeoTrackingSupport::AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, const class FString& OptionalAnchorName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude"));
		
		struct
		{
			float                                              Longitude;
			float                                              Latitude;
			float                                              AltitudeMeters;
			class FString                                      OptionalAnchorName;
			bool                                               ReturnValue;
		} params;
		params.Longitude = Longitude;
		params.Latitude = Latitude;
		params.AltitudeMeters = AltitudeMeters;
		params.OptionalAnchorName = OptionalAnchorName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Longitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Latitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OptionalAnchorName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARGeoTrackingSupport::AddGeoAnchorAtLocation(float Longitude, float Latitude, const class FString& OptionalAnchorName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation"));
		
		struct
		{
			float                                              Longitude;
			float                                              Latitude;
			class FString                                      OptionalAnchorName;
			bool                                               ReturnValue;
		} params;
		params.Longitude = Longitude;
		params.Latitude = Latitude;
		params.OptionalAnchorName = OptionalAnchorName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARGeoTrackingSupport.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARGeoTrackingSupport::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARGeoTrackingSupport"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsAvailable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, const class FString& Error)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature"));
		
		struct
		{
			bool                                               bIsAvailable;
			class FString                                      Error;
		} params;
		params.bIsAvailable = bIsAvailable;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Longitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Latitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			float                                              Longitude;
			float                                              Latitude;
			class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Longitude = Longitude;
		params.Latitude = Latitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailability(class UObject* WorldContextObject)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Longitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Latitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Altitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, const class FString& Error)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature"));
		
		struct
		{
			float                                              Longitude;
			float                                              Latitude;
			float                                              Altitude;
			class FString                                      Error;
		} params;
		params.Longitude = Longitude;
		params.Latitude = Latitude;
		params.Altitude = Altitude;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGetGeoLocationAsyncTaskBlueprintProxy* UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, const struct FVector& WorldPosition)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                                     WorldPosition;
			class UGetGeoLocationAsyncTaskBlueprintProxy*      ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.WorldPosition = WorldPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGetGeoLocationAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetGeoLocationAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ComponentClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       NativeID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARLifeCycleComponent::ServerSpawnARActor(class UClass* ComponentClass, const struct FGuid& NativeID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor"));
		
		struct
		{
			class UClass*                                      ComponentClass;
			struct FGuid                                       NativeID;
		} params;
		params.ComponentClass = ComponentClass;
		params.NativeID = NativeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AARActor*                                    Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARLifeCycleComponent::ServerDestroyARActor(class AARActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor"));
		
		struct
		{
			class AARActor*                                    Actor;
		} params;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AARActor*                                    Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARLifeCycleComponent::InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature"));
		
		struct
		{
			class AARActor*                                    Actor;
		} params;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ComponentClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       NativeID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AARActor*                                    SpawnedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARLifeCycleComponent::InstanceARActorSpawnedDelegate__DelegateSignature(class UClass* ComponentClass, const struct FGuid& NativeID, class AARActor* SpawnedActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature"));
		
		struct
		{
			class UClass*                                      ComponentClass;
			struct FGuid                                       NativeID;
			class AARActor*                                    SpawnedActor;
		} params;
		params.ComponentClass = ComponentClass;
		params.NativeID = NativeID;
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARLifeCycleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARLifeCycleComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARLifeCycleComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPin.GetTrackingState
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARTrackingState UARPin::GetTrackingState()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.GetTrackingState"));
		
		struct
		{
			AugmentedReality_EARTrackingState                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPin.GetTrackedGeometry
	 * 		Flags  -> ()
	 */
	class UARTrackedGeometry* UARPin::GetTrackedGeometry()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.GetTrackedGeometry"));
		
		struct
		{
			class UARTrackedGeometry*                          ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPin.GetPinnedComponent
	 * 		Flags  -> ()
	 */
	class USceneComponent* UARPin::GetPinnedComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.GetPinnedComponent"));
		
		struct
		{
			class USceneComponent*                             ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPin.GetLocalToWorldTransform
	 * 		Flags  -> ()
	 */
	struct FTransform UARPin::GetLocalToWorldTransform()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.GetLocalToWorldTransform"));
		
		struct
		{
			struct FTransform                                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPin.GetLocalToTrackingTransform
	 * 		Flags  -> ()
	 */
	struct FTransform UARPin::GetLocalToTrackingTransform()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.GetLocalToTrackingTransform"));
		
		struct
		{
			struct FTransform                                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPin.GetDebugName
	 * 		Flags  -> ()
	 */
	class FName UARPin::GetDebugName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.GetDebugName"));
		
		struct
		{
			class FName                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPin.DebugDraw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARPin::DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.DebugDraw"));
		
		struct
		{
			class UWorld*                                      World;
			struct FLinearColor                                Color;
			float                                              Scale;
			float                                              PersistForSeconds;
		} params;
		params.World = World;
		params.Color = Color;
		params.Scale = Scale;
		params.PersistForSeconds = PersistForSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARPin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARPin::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARPin"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              ImageData                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldGameMode::SetPreviewImageData(TArray<unsigned char> ImageData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData"));
		
		struct
		{
			TArray<unsigned char>                              ImageData;
		} params;
		params.ImageData = ImageData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	 * 		Flags  -> ()
	 */
	void AARSharedWorldGameMode::SetARWorldSharingIsReady()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              ARWorldData                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldGameMode::SetARSharedWorldData(TArray<unsigned char> ARWorldData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData"));
		
		struct
		{
			TArray<unsigned char>                              ARWorldData;
		} params;
		params.ARWorldData = ARWorldData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
	 * 		Flags  -> ()
	 */
	class AARSharedWorldGameState* AARSharedWorldGameMode::GetARSharedWorldGameState()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState"));
		
		struct
		{
			class AARSharedWorldGameState*                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AARSharedWorldGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSharedWorldGameMode::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARSharedWorldGameMode"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
	 * 		Flags  -> ()
	 */
	void AARSharedWorldGameState::K2_OnARWorldMapIsReady()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AARSharedWorldGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSharedWorldGameState::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARSharedWorldGameState"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
	 * 		Flags  -> ()
	 */
	void AARSharedWorldPlayerController::ServerMarkReadyForReceiving()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldPlayerController::ClientUpdatePreviewImageData(int32_t Offset, TArray<unsigned char> Buffer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData"));
		
		struct
		{
			int32_t                                            Offset;
			TArray<unsigned char>                              Buffer;
		} params;
		params.Offset = Offset;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldPlayerController::ClientUpdateARWorldData(int32_t Offset, TArray<unsigned char> Buffer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData"));
		
		struct
		{
			int32_t                                            Offset;
			TArray<unsigned char>                              Buffer;
		} params;
		params.Offset = Offset;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PreviewImageSize                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ARWorldDataSize                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldPlayerController::ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld"));
		
		struct
		{
			int32_t                                            PreviewImageSize;
			int32_t                                            ARWorldDataSize;
		} params;
		params.PreviewImageSize = PreviewImageSize;
		params.ARWorldDataSize = ARWorldDataSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AARSharedWorldPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSharedWorldPlayerController::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARSharedWorldPlayerController"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAREnvironmentCaptureProbe*                  InCaptureProbe                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AARSkyLight::SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe"));
		
		struct
		{
			class UAREnvironmentCaptureProbe*                  InCaptureProbe;
		} params;
		params.InCaptureProbe = InCaptureProbe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AARSkyLight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSkyLight::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARSkyLight"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTexture::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTexture"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTextureCameraImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTextureCameraImage::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTextureCameraImage"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTextureCameraDepth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTextureCameraDepth::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTextureCameraDepth"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAREnvironmentCaptureProbeTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAREnvironmentCaptureProbeTexture::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.AREnvironmentCaptureProbeTexture"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTraceResultDummy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTraceResultDummy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTraceResultDummy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.IsTracked
	 * 		Flags  -> ()
	 */
	bool UARTrackedGeometry::IsTracked()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.IsTracked"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	 * 		Flags  -> ()
	 */
	class UMRMeshComponent* UARTrackedGeometry::GetUnderlyingMesh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh"));
		
		struct
		{
			class UMRMeshComponent*                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetTrackingState
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARTrackingState UARTrackedGeometry::GetTrackingState()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetTrackingState"));
		
		struct
		{
			AugmentedReality_EARTrackingState                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARObjectClassification UARTrackedGeometry::GetObjectClassification()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetObjectClassification"));
		
		struct
		{
			AugmentedReality_EARObjectClassification           ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetName
	 * 		Flags  -> ()
	 */
	class FString UARTrackedGeometry::GetName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetName"));
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	 * 		Flags  -> ()
	 */
	struct FTransform UARTrackedGeometry::GetLocalToWorldTransform()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform"));
		
		struct
		{
			struct FTransform                                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	 * 		Flags  -> ()
	 */
	struct FTransform UARTrackedGeometry::GetLocalToTrackingTransform()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform"));
		
		struct
		{
			struct FTransform                                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	 * 		Flags  -> ()
	 */
	float UARTrackedGeometry::GetLastUpdateTimestamp()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp"));
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	 * 		Flags  -> ()
	 */
	int32_t UARTrackedGeometry::GetLastUpdateFrameNumber()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber"));
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetDebugName
	 * 		Flags  -> ()
	 */
	class FName UARTrackedGeometry::GetDebugName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetDebugName"));
		
		struct
		{
			class FName                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTrackedGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedGeometry::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTrackedGeometry"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	 * 		Flags  -> ()
	 */
	class UARPlaneGeometry* UARPlaneGeometry::GetSubsumedBy()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy"));
		
		struct
		{
			class UARPlaneGeometry*                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetOrientation
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARPlaneOrientation UARPlaneGeometry::GetOrientation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneGeometry.GetOrientation"));
		
		struct
		{
			AugmentedReality_EARPlaneOrientation               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetExtent
	 * 		Flags  -> ()
	 */
	struct FVector UARPlaneGeometry::GetExtent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneGeometry.GetExtent"));
		
		struct
		{
			struct FVector                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetCenter
	 * 		Flags  -> ()
	 */
	struct FVector UARPlaneGeometry::GetCenter()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneGeometry.GetCenter"));
		
		struct
		{
			struct FVector                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
	 * 		Flags  -> ()
	 */
	TArray<struct FVector> UARPlaneGeometry::GetBoundaryPolygonInLocalSpace()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace"));
		
		struct
		{
			TArray<struct FVector>                             ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARPlaneGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARPlaneGeometry::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARPlaneGeometry"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTrackedPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedPoint::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTrackedPoint"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedImage.GetEstimateSize
	 * 		Flags  -> ()
	 */
	struct FVector2D UARTrackedImage::GetEstimateSize()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedImage.GetEstimateSize"));
		
		struct
		{
			struct FVector2D                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedImage.GetDetectedImage
	 * 		Flags  -> ()
	 */
	class UARCandidateImage* UARTrackedImage::GetDetectedImage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedImage.GetDetectedImage"));
		
		struct
		{
			class UARCandidateImage*                           ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTrackedImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedImage::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTrackedImage"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTrackedQRCode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedQRCode::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTrackedQRCode"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		AugmentedReality_EAREye                            Eye                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARFaceGeometry::GetWorldSpaceEyeTransform(AugmentedReality_EAREye Eye)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform"));
		
		struct
		{
			AugmentedReality_EAREye                            Eye;
			struct FTransform                                  ReturnValue;
		} params;
		params.Eye = Eye;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		AugmentedReality_EAREye                            Eye                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARFaceGeometry::GetLocalSpaceEyeTransform(AugmentedReality_EAREye Eye)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform"));
		
		struct
		{
			AugmentedReality_EAREye                            Eye;
			struct FTransform                                  ReturnValue;
		} params;
		params.Eye = Eye;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		AugmentedReality_EARFaceBlendShape                 BlendShape                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UARFaceGeometry::GetBlendShapeValue(AugmentedReality_EARFaceBlendShape BlendShape)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue"));
		
		struct
		{
			AugmentedReality_EARFaceBlendShape                 BlendShape;
			float                                              ReturnValue;
		} params;
		params.BlendShape = BlendShape;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetBlendShapes
	 * 		Flags  -> ()
	 */
	TMap<AugmentedReality_EARFaceBlendShape, float> UARFaceGeometry::GetBlendShapes()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARFaceGeometry.GetBlendShapes"));
		
		struct
		{
			TMap<AugmentedReality_EARFaceBlendShape, float>    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARFaceGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARFaceGeometry::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARFaceGeometry"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	 * 		Flags  -> ()
	 */
	struct FVector UAREnvironmentCaptureProbe::GetExtent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent"));
		
		struct
		{
			struct FVector                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
	 * 		Flags  -> ()
	 */
	class UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture"));
		
		struct
		{
			class UAREnvironmentCaptureProbeTexture*           ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAREnvironmentCaptureProbe.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAREnvironmentCaptureProbe::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.AREnvironmentCaptureProbe"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedObject.GetDetectedObject
	 * 		Flags  -> ()
	 */
	class UARCandidateObject* UARTrackedObject::GetDetectedObject()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedObject.GetDetectedObject"));
		
		struct
		{
			class UARCandidateObject*                          ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTrackedObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedObject::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTrackedObject"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
	 * 		Flags  -> ()
	 */
	struct FARPose3D UARTrackedPose::GetTrackedPoseData()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedPose.GetTrackedPoseData"));
		
		struct
		{
			struct FARPose3D                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTrackedPose.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedPose::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTrackedPose"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InWorldLocation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		AugmentedReality_EARObjectClassification           OutClassification                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutClassificationLocation                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxLocationDiff                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARMeshGeometry::GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, AugmentedReality_EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation"));
		
		struct
		{
			struct FVector                                     InWorldLocation;
			AugmentedReality_EARObjectClassification           OutClassification;
			struct FVector                                     OutClassificationLocation;
			float                                              MaxLocationDiff;
			bool                                               ReturnValue;
		} params;
		params.InWorldLocation = InWorldLocation;
		params.MaxLocationDiff = MaxLocationDiff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutClassification != nullptr)
			*OutClassification = params.OutClassification;
		if (OutClassificationLocation != nullptr)
			*OutClassificationLocation = params.OutClassificationLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARMeshGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARMeshGeometry::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARMeshGeometry"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoAnchor.GetLongitude
	 * 		Flags  -> ()
	 */
	float UARGeoAnchor::GetLongitude()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARGeoAnchor.GetLongitude"));
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoAnchor.GetLatitude
	 * 		Flags  -> ()
	 */
	float UARGeoAnchor::GetLatitude()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARGeoAnchor.GetLatitude"));
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoAnchor.GetAltitudeSource
	 * 		Flags  -> ()
	 */
	AugmentedReality_EARAltitudeSource UARGeoAnchor::GetAltitudeSource()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARGeoAnchor.GetAltitudeSource"));
		
		struct
		{
			AugmentedReality_EARAltitudeSource                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters
	 * 		Flags  -> ()
	 */
	float UARGeoAnchor::GetAltitudeMeters()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters"));
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARGeoAnchor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARGeoAnchor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARGeoAnchor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTrackableNotifyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackableNotifyComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTrackableNotifyComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARTypesDummyClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTypesDummyClass::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTypesDummyClass"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.SetFriendlyName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARCandidateObject::SetFriendlyName(const class FString& NewName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateObject.SetFriendlyName"));
		
		struct
		{
			class FString                                      NewName;
		} params;
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              InCandidateObject                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARCandidateObject::SetCandidateObjectData(TArray<unsigned char> InCandidateObject)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateObject.SetCandidateObjectData"));
		
		struct
		{
			TArray<unsigned char>                              InCandidateObject;
		} params;
		params.InCandidateObject = InCandidateObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.SetBoundingBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBox                                        InBoundingBox                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARCandidateObject::SetBoundingBox(const struct FBox& InBoundingBox)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateObject.SetBoundingBox"));
		
		struct
		{
			struct FBox                                        InBoundingBox;
		} params;
		params.InBoundingBox = InBoundingBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.GetFriendlyName
	 * 		Flags  -> ()
	 */
	class FString UARCandidateObject::GetFriendlyName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateObject.GetFriendlyName"));
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
	 * 		Flags  -> ()
	 */
	TArray<unsigned char> UARCandidateObject::GetCandidateObjectData()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateObject.GetCandidateObjectData"));
		
		struct
		{
			TArray<unsigned char>                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.GetBoundingBox
	 * 		Flags  -> ()
	 */
	struct FBox UARCandidateObject::GetBoundingBox()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateObject.GetBoundingBox"));
		
		struct
		{
			struct FBox                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UARCandidateObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARCandidateObject::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARCandidateObject"));
		return ptr;
	}

}


