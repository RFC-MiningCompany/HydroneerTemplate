/**
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
	 * 		Name   -> Function StyledKeyLabel.StyledKeyLabel_C.GetIconBrush
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UStyledKeyLabel_C::GetIconBrush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StyledKeyLabel.StyledKeyLabel_C.GetIconBrush");
		
		UStyledKeyLabel_C_GetIconBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StyledKeyLabel.StyledKeyLabel_C.GetDisplayNameUpper
	 * 		Flags  -> ()
	 */
	class FText UStyledKeyLabel_C::GetDisplayNameUpper()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StyledKeyLabel.StyledKeyLabel_C.GetDisplayNameUpper");
		
		UStyledKeyLabel_C_GetDisplayNameUpper_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StyledKeyLabel.StyledKeyLabel_C.UpdateKeyLabel
	 * 		Flags  -> ()
	 */
	void UStyledKeyLabel_C::UpdateKeyLabel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StyledKeyLabel.StyledKeyLabel_C.UpdateKeyLabel");
		
		UStyledKeyLabel_C_UpdateKeyLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StyledKeyLabel.StyledKeyLabel_C.ExecuteUbergraph_StyledKeyLabel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStyledKeyLabel_C::ExecuteUbergraph_StyledKeyLabel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StyledKeyLabel.StyledKeyLabel_C.ExecuteUbergraph_StyledKeyLabel");
		
		UStyledKeyLabel_C_ExecuteUbergraph_StyledKeyLabel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStyledKeyLabel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStyledKeyLabel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StyledKeyLabel.StyledKeyLabel_C");
		return ptr;
	}

}


