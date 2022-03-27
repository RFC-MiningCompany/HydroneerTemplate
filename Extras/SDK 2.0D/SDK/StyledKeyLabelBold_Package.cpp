/**
 * Name: Hydroneer
 * Version: 2.0D
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function StyledKeyLabelBold.StyledKeyLabelBold_C.GetIconBrush
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UStyledKeyLabelBold_C::GetIconBrush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StyledKeyLabelBold.StyledKeyLabelBold_C.GetIconBrush");
		
		struct
		{
			struct FSlateBrush                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function StyledKeyLabelBold.StyledKeyLabelBold_C.GetDisplayNameUpper
	 * 		Flags  -> ()
	 */
	class FText UStyledKeyLabelBold_C::GetDisplayNameUpper()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StyledKeyLabelBold.StyledKeyLabelBold_C.GetDisplayNameUpper");
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function StyledKeyLabelBold.StyledKeyLabelBold_C.UpdateKeyLabel
	 * 		Flags  -> ()
	 */
	void UStyledKeyLabelBold_C::UpdateKeyLabel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StyledKeyLabelBold.StyledKeyLabelBold_C.UpdateKeyLabel");
		
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


