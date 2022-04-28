﻿/**
 * Name: Hydroneer
 * Version: 2.0R
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
	 * 		Name   -> Function DefaultRadioButton.DefaultRadioButton_C.GetTextColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UDefaultRadioButton_C::GetTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultRadioButton.DefaultRadioButton_C.GetTextColor");
		
		UDefaultRadioButton_C_GetTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DefaultRadioButton.DefaultRadioButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDefaultRadioButton_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultRadioButton.DefaultRadioButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UDefaultRadioButton_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DefaultRadioButton.DefaultRadioButton_C.ExecuteUbergraph_DefaultRadioButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDefaultRadioButton_C::ExecuteUbergraph_DefaultRadioButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultRadioButton.DefaultRadioButton_C.ExecuteUbergraph_DefaultRadioButton");
		
		UDefaultRadioButton_C_ExecuteUbergraph_DefaultRadioButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DefaultRadioButton.DefaultRadioButton_C.Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDefaultRadioButton_C::Clicked__DelegateSignature(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultRadioButton.DefaultRadioButton_C.Clicked__DelegateSignature");
		
		UDefaultRadioButton_C_Clicked__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDefaultRadioButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultRadioButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DefaultRadioButton.DefaultRadioButton_C");
		return ptr;
	}

}


