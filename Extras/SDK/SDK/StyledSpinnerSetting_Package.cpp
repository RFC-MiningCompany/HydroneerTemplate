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
	 * 		Name   -> PredefindFunction UStyledSpinnerSetting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStyledSpinnerSetting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StyledSpinnerSetting.StyledSpinnerSetting_C");
		return ptr;
	}

}


