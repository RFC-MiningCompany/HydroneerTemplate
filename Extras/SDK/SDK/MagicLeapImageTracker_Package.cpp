/**
 * Name: Hydroneer
 * Version: 2.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  ImageTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapImageTrackerComponent::SetTargetAsync(class UTexture2D* ImageTarget)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync");
		
		struct
		{
			class UTexture2D*                                  ImageTarget;
		} params;
		params.ImageTarget = ImageTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync
	 * 		Flags  -> ()
	 */
	bool UMagicLeapImageTrackerComponent::RemoveTargetAsync()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapImageTrackerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapImageTrackerComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapImageTracker.MagicLeapImageTrackerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxSimultaneousTargets                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapImageTrackerFunctionLibrary::SetMaxSimultaneousTargets(int32_t MaxSimultaneousTargets)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets");
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled
	 * 		Flags  -> ()
	 */
	bool UMagicLeapImageTrackerFunctionLibrary::IsImageTrackingEnabled()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets
	 * 		Flags  -> ()
	 */
	int32_t UMagicLeapImageTrackerFunctionLibrary::GetMaxSimultaneousTargets()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapImageTrackerFunctionLibrary::EnableImageTracking(bool bEnable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking");
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapImageTrackerFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapImageTrackerFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary");
		return ptr;
	}

}


