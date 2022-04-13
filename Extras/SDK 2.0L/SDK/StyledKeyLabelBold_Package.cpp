/**
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
	 * 		Name   -> Function StyledKeyLabelBold.StyledKeyLabelBold_C.GetIconBrush
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UStyledKeyLabelBold_C::GetIconBrush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StyledKeyLabelBold.StyledKeyLabelBold_C.GetIconBrush");
		
		UStyledKeyLabelBold_C_GetIconBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StyledKeyLabelBold.StyledKeyLabelBold_C.GetDisplayNameUpper
	 * 		Flags  -> ()
	 */
	class FText UStyledKeyLabelBold_C::GetDisplayNameUpper()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StyledKeyLabelBold.StyledKeyLabelBold_C.GetDisplayNameUpper");
		
		UStyledKeyLabelBold_C_GetDisplayNameUpper_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StyledKeyLabelBold.StyledKeyLabelBold_C.UpdateKeyLabel
	 * 		Flags  -> ()
	 */
	void UStyledKeyLabelBold_C::UpdateKeyLabel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StyledKeyLabelBold.StyledKeyLabelBold_C.UpdateKeyLabel");
		
		UStyledKeyLabelBold_C_UpdateKeyLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StyledKeyLabelBold.StyledKeyLabelBold_C.ExecuteUbergraph_StyledKeyLabelBold
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStyledKeyLabelBold_C::ExecuteUbergraph_StyledKeyLabelBold(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StyledKeyLabelBold.StyledKeyLabelBold_C.ExecuteUbergraph_StyledKeyLabelBold");
		
		UStyledKeyLabelBold_C_ExecuteUbergraph_StyledKeyLabelBold_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStyledKeyLabelBold_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStyledKeyLabelBold_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StyledKeyLabelBold.StyledKeyLabelBold_C");
		return ptr;
	}

}


