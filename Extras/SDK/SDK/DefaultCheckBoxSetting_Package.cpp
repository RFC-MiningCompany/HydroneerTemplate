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
	 * 		Name   -> PredefindFunction UDefaultCheckBoxSetting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultCheckBoxSetting_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DefaultCheckBoxSetting.DefaultCheckBoxSetting_C");
		return ptr;
	}

}


