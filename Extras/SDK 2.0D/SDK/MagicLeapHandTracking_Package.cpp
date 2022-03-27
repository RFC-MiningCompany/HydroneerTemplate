/**
 * Name: Hydroneer
 * Version: 2.0D
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkMagicLeapHandTrackingSourceFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkMagicLeapHandTrackingSourceFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold
	 * 		Flags  -> ()
	 * Parameters:
	 * 		MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Confidence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapHandTrackingFunctionLibrary::SetStaticGestureConfidenceThreshold(MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture, float Confidence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold");
		
		struct
		{
			MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture;
			float                                              Confidence;
		} params;
		params.Gesture = Gesture;
		params.Confidence = Confidence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture> StaticGesturesToActivate                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTrackingEnabled                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::SetConfiguration(TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture> StaticGesturesToActivate, MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration");
		
		struct
		{
			TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture> StaticGesturesToActivate;
			MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel;
			MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel;
			bool                                               bTrackingEnabled;
			bool                                               ReturnValue;
		} params;
		params.StaticGesturesToActivate = StaticGesturesToActivate;
		params.KeypointsFilterLevel = KeypointsFilterLevel;
		params.GestureFilterLevel = GestureFilterLevel;
		params.bTrackingEnabled = bTrackingEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.IsHoldingControl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::IsHoldingControl(InputCore_EControllerHand Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.IsHoldingControl");
		
		struct
		{
			InputCore_EControllerHand                          Hand;
			bool                                               ReturnValue;
		} params;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold
	 * 		Flags  -> ()
	 * Parameters:
	 * 		MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMagicLeapHandTrackingFunctionLibrary::GetStaticGestureConfidenceThreshold(MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold");
		
		struct
		{
			MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture;
			float                                              ReturnValue;
		} params;
		params.Gesture = Gesture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMotionSourceForHandKeypoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OutMotionSource                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetMotionSourceForHandKeypoint(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint, class FName* OutMotionSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMotionSourceForHandKeypoint");
		
		struct
		{
			InputCore_EControllerHand                          Hand;
			MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint;
			class FName                                        OutMotionSource;
			bool                                               ReturnValue;
		} params;
		params.Hand = Hand;
		params.Keypoint = Keypoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMotionSource != nullptr)
			*OutMotionSource = params.OutMotionSource;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLiveLinkSourceHandle                       SourceHandle                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetMagicLeapHandTrackingLiveLinkSource(struct FLiveLinkSourceHandle* SourceHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource");
		
		struct
		{
			struct FLiveLinkSourceHandle                       SourceHandle;
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SourceHandle != nullptr)
			*SourceHandle = params.SourceHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Secondary                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetHandThumbTip(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Secondary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip");
		
		struct
		{
			InputCore_EControllerHand                          Hand;
			MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace;
			struct FTransform                                  Secondary;
			bool                                               ReturnValue;
		} params;
		params.Hand = Hand;
		params.TransformSpace = TransformSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Secondary != nullptr)
			*Secondary = params.Secondary;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandKeypointForMotionSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint OutKeyPoint                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetHandKeypointForMotionSource(const class FName& MotionSource, MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint* OutKeyPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandKeypointForMotionSource");
		
		struct
		{
			class FName                                        MotionSource;
			MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint OutKeyPoint;
			bool                                               ReturnValue;
		} params;
		params.MotionSource = MotionSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKeyPoint != nullptr)
			*OutKeyPoint = params.OutKeyPoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Pointer                                                    (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetHandIndexFingerTip(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Pointer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip");
		
		struct
		{
			InputCore_EControllerHand                          Hand;
			MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace;
			struct FTransform                                  Pointer;
			bool                                               ReturnValue;
		} params;
		params.Hand = Hand;
		params.TransformSpace = TransformSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pointer != nullptr)
			*Pointer = params.Pointer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HandCenterNormalized                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetHandCenterNormalized(InputCore_EControllerHand Hand, struct FVector* HandCenterNormalized)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized");
		
		struct
		{
			InputCore_EControllerHand                          Hand;
			struct FVector                                     HandCenterNormalized;
			bool                                               ReturnValue;
		} params;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HandCenterNormalized != nullptr)
			*HandCenterNormalized = params.HandCenterNormalized;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  HandCenter                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetHandCenter(InputCore_EControllerHand Hand, struct FTransform* HandCenter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter");
		
		struct
		{
			InputCore_EControllerHand                          Hand;
			struct FTransform                                  HandCenter;
			bool                                               ReturnValue;
		} params;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HandCenter != nullptr)
			*HandCenter = params.HandCenter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetGestureKeypointTransform(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint, MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform");
		
		struct
		{
			InputCore_EControllerHand                          Hand;
			MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint;
			MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace;
			struct FTransform                                  Transform;
			bool                                               ReturnValue;
		} params;
		params.Hand = Hand;
		params.Keypoint = Keypoint;
		params.TransformSpace = TransformSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transform != nullptr)
			*Transform = params.Transform;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Keypoints                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetGestureKeypoints(InputCore_EControllerHand Hand, TArray<struct FTransform>* Keypoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints");
		
		struct
		{
			InputCore_EControllerHand                          Hand;
			TArray<struct FTransform>                          Keypoints;
			bool                                               ReturnValue;
		} params;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Keypoints != nullptr)
			*Keypoints = params.Keypoints;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Confidence                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetCurrentGestureConfidence(InputCore_EControllerHand Hand, float* Confidence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence");
		
		struct
		{
			InputCore_EControllerHand                          Hand;
			float                                              Confidence;
			bool                                               ReturnValue;
		} params;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Confidence != nullptr)
			*Confidence = params.Confidence;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetCurrentGesture(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapHandTrackingGesture* Gesture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture");
		
		struct
		{
			InputCore_EControllerHand                          Hand;
			MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture;
			bool                                               ReturnValue;
		} params;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Gesture != nullptr)
			*Gesture = params.Gesture;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture> ActiveStaticGestures                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTrackingEnabled                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetConfiguration(TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture>* ActiveStaticGestures, MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel* KeypointsFilterLevel, MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel* GestureFilterLevel, bool* bTrackingEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration");
		
		struct
		{
			TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture> ActiveStaticGestures;
			MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel;
			MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel;
			bool                                               bTrackingEnabled;
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActiveStaticGestures != nullptr)
			*ActiveStaticGestures = params.ActiveStaticGestures;
		if (KeypointsFilterLevel != nullptr)
			*KeypointsFilterLevel = params.KeypointsFilterLevel;
		if (GestureFilterLevel != nullptr)
			*GestureFilterLevel = params.GestureFilterLevel;
		if (bTrackingEnabled != nullptr)
			*bTrackingEnabled = params.bTrackingEnabled;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapHandTrackingFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapHandTrackingFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary");
		return ptr;
	}

}


