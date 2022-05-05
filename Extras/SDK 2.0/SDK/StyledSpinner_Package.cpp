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
	 * 		Name   -> Function StyledSpinner.StyledSpinner_C.OnSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSettingOption                              SelectedOption                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UStyledSpinner_C::OnSelectionChanged(const struct FSettingOption& SelectedOption)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function StyledSpinner.StyledSpinner_C.OnSelectionChanged");
		
		struct
		{
			struct FSettingOption                              SelectedOption;
		} params;
		params.SelectedOption = SelectedOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StyledSpinner.StyledSpinner_C.GetRightArrowColorAndOpacity
	 * 		Flags  -> ()
	 */
	struct FLinearColor UStyledSpinner_C::GetRightArrowColorAndOpacity()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function StyledSpinner.StyledSpinner_C.GetRightArrowColorAndOpacity");
		
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
	 * 		Name   -> Function StyledSpinner.StyledSpinner_C.GetLeftArrowColorAndOpacity
	 * 		Flags  -> ()
	 */
	struct FLinearColor UStyledSpinner_C::GetLeftArrowColorAndOpacity()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function StyledSpinner.StyledSpinner_C.GetLeftArrowColorAndOpacity");
		
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
	 * 		Name   -> Function StyledSpinner.StyledSpinner_C.GetLabelText
	 * 		Flags  -> ()
	 */
	class FText UStyledSpinner_C::GetLabelText()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function StyledSpinner.StyledSpinner_C.GetLabelText");
		
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
	 * 		Name   -> Function StyledSpinner.StyledSpinner_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStyledSpinner_C::BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function StyledSpinner.StyledSpinner_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function StyledSpinner.StyledSpinner_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStyledSpinner_C::BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function StyledSpinner.StyledSpinner_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function StyledSpinner.StyledSpinner_C.ExecuteUbergraph_StyledSpinner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStyledSpinner_C::ExecuteUbergraph_StyledSpinner(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function StyledSpinner.StyledSpinner_C.ExecuteUbergraph_StyledSpinner");
		
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
	 * 		Name   -> PredefindFunction UStyledSpinner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStyledSpinner_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StyledSpinner.StyledSpinner_C");
		return ptr;
	}

}


