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
	 * 		Name   -> Function StyledKeyLabel.StyledKeyLabel_C.GetIconBrush
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UStyledKeyLabel_C::GetIconBrush()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function StyledKeyLabel.StyledKeyLabel_C.GetIconBrush");
		
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
	 * 		Name   -> Function StyledKeyLabel.StyledKeyLabel_C.GetDisplayNameUpper
	 * 		Flags  -> ()
	 */
	class FText UStyledKeyLabel_C::GetDisplayNameUpper()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function StyledKeyLabel.StyledKeyLabel_C.GetDisplayNameUpper");
		
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
	 * 		Name   -> Function StyledKeyLabel.StyledKeyLabel_C.UpdateKeyLabel
	 * 		Flags  -> ()
	 */
	void UStyledKeyLabel_C::UpdateKeyLabel()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function StyledKeyLabel.StyledKeyLabel_C.UpdateKeyLabel");
		
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
	 * 		Name   -> Function StyledKeyLabel.StyledKeyLabel_C.ExecuteUbergraph_StyledKeyLabel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStyledKeyLabel_C::ExecuteUbergraph_StyledKeyLabel(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function StyledKeyLabel.StyledKeyLabel_C.ExecuteUbergraph_StyledKeyLabel");
		
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
	 * 		Name   -> PredefindFunction UStyledKeyLabel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStyledKeyLabel_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StyledKeyLabel.StyledKeyLabel_C");
		return ptr;
	}

}


