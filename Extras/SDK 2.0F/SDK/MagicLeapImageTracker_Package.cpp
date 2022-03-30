/**
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
	 * 		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  ImageTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapImageTrackerComponent::SetTargetAsync(class UTexture2D* ImageTarget)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync"));
		
		struct
		{
			class UTexture2D*                                  ImageTarget;
			bool                                               ReturnValue;
		} params;
		params.ImageTarget = ImageTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync
	 * 		Flags  -> ()
	 */
	bool UMagicLeapImageTrackerComponent::RemoveTargetAsync()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync"));
		
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
	 * 		Name   -> PredefindFunction UMagicLeapImageTrackerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapImageTrackerComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MagicLeapImageTracker.MagicLeapImageTrackerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxSimultaneousTargets                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapImageTrackerFunctionLibrary::SetMaxSimultaneousTargets(int32_t MaxSimultaneousTargets)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets"));
		
		struct
		{
			int32_t                                            MaxSimultaneousTargets;
		} params;
		params.MaxSimultaneousTargets = MaxSimultaneousTargets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled
	 * 		Flags  -> ()
	 */
	bool UMagicLeapImageTrackerFunctionLibrary::IsImageTrackingEnabled()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled"));
		
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
	 * 		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets
	 * 		Flags  -> ()
	 */
	int32_t UMagicLeapImageTrackerFunctionLibrary::GetMaxSimultaneousTargets()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets"));
		
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
	 * 		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapImageTrackerFunctionLibrary::EnableImageTracking(bool bEnable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking"));
		
		struct
		{
			bool                                               bEnable;
		} params;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapImageTrackerFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapImageTrackerFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary"));
		return ptr;
	}

}


