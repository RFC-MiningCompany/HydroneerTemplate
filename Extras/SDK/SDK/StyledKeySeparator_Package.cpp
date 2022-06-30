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
	 * 		Name   -> PredefindFunction UStyledKeySeparator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStyledKeySeparator_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StyledKeySeparator.StyledKeySeparator_C");
		return ptr;
	}

}


