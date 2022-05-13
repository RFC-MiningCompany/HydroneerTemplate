/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * 		Name   -> Function DefaultKeyLabel.DefaultKeyLabel_C.UpdateKeyLabel
	 * 		Flags  -> ()
	 */
	void UDefaultKeyLabel_C::UpdateKeyLabel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultKeyLabel.DefaultKeyLabel_C.UpdateKeyLabel");
		
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
	 * 		Name   -> Function DefaultKeyLabel.DefaultKeyLabel_C.ExecuteUbergraph_DefaultKeyLabel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDefaultKeyLabel_C::ExecuteUbergraph_DefaultKeyLabel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultKeyLabel.DefaultKeyLabel_C.ExecuteUbergraph_DefaultKeyLabel");
		
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
	 * 		Name   -> PredefindFunction UDefaultKeyLabel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultKeyLabel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DefaultKeyLabel.DefaultKeyLabel_C");
		return ptr;
	}

}


