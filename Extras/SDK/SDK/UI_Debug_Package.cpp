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
	 * 		Name   -> Function UI_Debug.UI_Debug_C.WriteLog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Line                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Debug_C::WriteLog(const class FString& Line)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Debug.UI_Debug_C.WriteLog");
		
		struct
		{
			class FString                                      Line;
		} params;
		params.Line = Line;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
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


