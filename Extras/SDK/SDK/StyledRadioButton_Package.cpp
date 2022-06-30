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
	 * 		Name   -> Function StyledRadioButton.StyledRadioButton_C.GetColour
	 * 		Flags  -> ()
	 */
	struct FSlateColor UStyledRadioButton_C::GetColour()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function StyledRadioButton.StyledRadioButton_C.GetColour");
		
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
	 * 		Name   -> Function StyledRadioButton.StyledRadioButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStyledRadioButton_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function StyledRadioButton.StyledRadioButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function StyledRadioButton.StyledRadioButton_C.ExecuteUbergraph_StyledRadioButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStyledRadioButton_C::ExecuteUbergraph_StyledRadioButton(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function StyledRadioButton.StyledRadioButton_C.ExecuteUbergraph_StyledRadioButton");
		
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
	 * 		Name   -> PredefindFunction UStyledRadioButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStyledRadioButton_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StyledRadioButton.StyledRadioButton_C");
		return ptr;
	}

}


