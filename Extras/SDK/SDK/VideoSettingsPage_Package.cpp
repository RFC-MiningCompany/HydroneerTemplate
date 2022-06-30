/**
 * Name: Hydroneer
 * Version: 2.0.6
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
	 * 		Name   -> Function VideoSettingsPage.VideoSettingsPage_C.Get_ApplyButton_bIsEnabled_1
	 * 		Flags  -> ()
	 */
	bool UVideoSettingsPage_C::Get_ApplyButton_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettingsPage.VideoSettingsPage_C.Get_ApplyButton_bIsEnabled_1");
		
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
	 * 		Name   -> Function VideoSettingsPage.VideoSettingsPage_C.Get_SaveButton_bIsEnabled_1
	 * 		Flags  -> ()
	 */
	bool UVideoSettingsPage_C::Get_SaveButton_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettingsPage.VideoSettingsPage_C.Get_SaveButton_bIsEnabled_1");
		
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
	 * 		Name   -> Function VideoSettingsPage.VideoSettingsPage_C.BndEvt__VideoSettingsPage_H_ButtonWood1_C_156_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UVideoSettingsPage_C::BndEvt__VideoSettingsPage_H_ButtonWood1_C_156_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettingsPage.VideoSettingsPage_C.BndEvt__VideoSettingsPage_H_ButtonWood1_C_156_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VideoSettingsPage.VideoSettingsPage_C.ExecuteUbergraph_VideoSettingsPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVideoSettingsPage_C::ExecuteUbergraph_VideoSettingsPage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettingsPage.VideoSettingsPage_C.ExecuteUbergraph_VideoSettingsPage");
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
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


