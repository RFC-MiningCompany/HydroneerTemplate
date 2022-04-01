﻿/**
 * Name: Hydroneer
 * Version: 2.0H
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
	 * 		Name   -> Function StyledSliderSetting.StyledSliderSetting_C.Construct
	 * 		Flags  -> ()
	 */
	void UStyledSliderSetting_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function StyledSliderSetting.StyledSliderSetting_C.Construct"));
		
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
	 * 		Name   -> Function StyledSliderSetting.StyledSliderSetting_C.TextCommitted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		SlateCore_ETextCommit                              CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStyledSliderSetting_C::TextCommitted(const class FText& Text, SlateCore_ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function StyledSliderSetting.StyledSliderSetting_C.TextCommitted"));
		
		struct
		{
			class FText                                        Text;
			SlateCore_ETextCommit                              CommitMethod;
		} params;
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function StyledSliderSetting.StyledSliderSetting_C.BndEvt__StyledSliderSetting_HSlider_C_63_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStyledSliderSetting_C::BndEvt__StyledSliderSetting_HSlider_C_63_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function StyledSliderSetting.StyledSliderSetting_C.BndEvt__StyledSliderSetting_HSlider_C_63_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature"));
		
		struct
		{
			float                                              Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function StyledSliderSetting.StyledSliderSetting_C.ExecuteUbergraph_StyledSliderSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStyledSliderSetting_C::ExecuteUbergraph_StyledSliderSetting(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function StyledSliderSetting.StyledSliderSetting_C.ExecuteUbergraph_StyledSliderSetting"));
		
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStyledSliderSetting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStyledSliderSetting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass StyledSliderSetting.StyledSliderSetting_C"));
		return ptr;
	}

}


