﻿/**
 * Name: Hydroneer
 * Version: 2.0L
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
	 * 		Name   -> Function VideoSettingsPage.VideoSettingsPage_C.Get_AutoApplyCheckbox_bIsEnabled_1
	 * 		Flags  -> ()
	 */
	bool UVideoSettingsPage_C::Get_AutoApplyCheckbox_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettingsPage.VideoSettingsPage_C.Get_AutoApplyCheckbox_bIsEnabled_1");
		
		UVideoSettingsPage_C_Get_AutoApplyCheckbox_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VideoSettingsPage.VideoSettingsPage_C.Get_ApplyButton_bIsEnabled_1
	 * 		Flags  -> ()
	 */
	bool UVideoSettingsPage_C::Get_ApplyButton_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettingsPage.VideoSettingsPage_C.Get_ApplyButton_bIsEnabled_1");
		
		UVideoSettingsPage_C_Get_ApplyButton_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VideoSettingsPage.VideoSettingsPage_C.Get_SaveButton_bIsEnabled_1
	 * 		Flags  -> ()
	 */
	bool UVideoSettingsPage_C::Get_SaveButton_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettingsPage.VideoSettingsPage_C.Get_SaveButton_bIsEnabled_1");
		
		UVideoSettingsPage_C_Get_SaveButton_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVideoSettingsPage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVideoSettingsPage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VideoSettingsPage.VideoSettingsPage_C");
		return ptr;
	}

}


