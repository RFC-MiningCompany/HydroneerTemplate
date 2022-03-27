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
	 * 		Name   -> PredefindFunction UMagicLeapLightingTrackingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapLightingTrackingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid
	 * 		Flags  -> ()
	 */
	bool UMagicLeapLightEstimationFunctionLibrary::IsTrackerValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid");
		
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
	 * 		Name   -> Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMagicLeapLightEstimationColorTemperatureState ColorTemperatureState                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapLightEstimationFunctionLibrary::GetColorTemperatureState(struct FMagicLeapLightEstimationColorTemperatureState* ColorTemperatureState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState");
		
		struct
		{
			struct FMagicLeapLightEstimationColorTemperatureState ColorTemperatureState;
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ColorTemperatureState != nullptr)
			*ColorTemperatureState = params.ColorTemperatureState;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMagicLeapLightEstimationAmbientGlobalState GlobalAmbientState                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapLightEstimationFunctionLibrary::GetAmbientGlobalState(struct FMagicLeapLightEstimationAmbientGlobalState* GlobalAmbientState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState");
		
		struct
		{
			struct FMagicLeapLightEstimationAmbientGlobalState GlobalAmbientState;
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GlobalAmbientState != nullptr)
			*GlobalAmbientState = params.GlobalAmbientState;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker
	 * 		Flags  -> ()
	 */
	void UMagicLeapLightEstimationFunctionLibrary::DestroyTracker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker");
		
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
	 * 		Name   -> Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker
	 * 		Flags  -> ()
	 */
	bool UMagicLeapLightEstimationFunctionLibrary::CreateTracker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker");
		
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
	 * 		Name   -> PredefindFunction UMagicLeapLightEstimationFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapLightEstimationFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary");
		return ptr;
	}

}


