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
	 * 		Name   -> PredefindFunction UAudioSettingsPage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioSettingsPage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AudioSettingsPage.AudioSettingsPage_C");
		return ptr;
	}

}


