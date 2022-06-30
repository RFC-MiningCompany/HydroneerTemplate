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
	 * 		Name   -> PredefindFunction UDefaultRadioSelectSetting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultRadioSelectSetting_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DefaultRadioSelectSetting.DefaultRadioSelectSetting_C");
		return ptr;
	}

}


