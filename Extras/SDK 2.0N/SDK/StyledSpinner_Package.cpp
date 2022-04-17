/**
 * Name: Hydroneer
 * Version: 2.0N
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StyledSpinner.StyledSpinner_C.OnSelectionChanged"));
		
		UStyledSpinner_C_OnSelectionChanged_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StyledSpinner.StyledSpinner_C.GetRightArrowColorAndOpacity"));
		
		UStyledSpinner_C_GetRightArrowColorAndOpacity_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StyledSpinner.StyledSpinner_C.GetLeftArrowColorAndOpacity"));
		
		UStyledSpinner_C_GetLeftArrowColorAndOpacity_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StyledSpinner.StyledSpinner_C.GetLabelText"));
		
		UStyledSpinner_C_GetLabelText_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StyledSpinner.StyledSpinner_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature"));
		
		UStyledSpinner_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StyledSpinner.StyledSpinner_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature"));
		
		UStyledSpinner_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StyledSpinner.StyledSpinner_C.ExecuteUbergraph_StyledSpinner"));
		
		UStyledSpinner_C_ExecuteUbergraph_StyledSpinner_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass StyledSpinner.StyledSpinner_C"));
		return ptr;
	}

}


