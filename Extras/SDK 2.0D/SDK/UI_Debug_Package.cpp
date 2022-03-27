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
	 * 		Name   -> Function UI_Debug.UI_Debug_C.GetText_1
	 * 		Flags  -> ()
	 */
	class FText UUI_Debug_C::GetText_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Debug.UI_Debug_C.GetText_1");
		
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
	 * 		Name   -> PredefindFunction UUI_Debug_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Debug_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Debug.UI_Debug_C");
		return ptr;
	}

}


