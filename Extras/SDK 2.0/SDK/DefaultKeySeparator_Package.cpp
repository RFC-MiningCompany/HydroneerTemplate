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
	 * 		Name   -> PredefindFunction UDefaultKeySeparator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultKeySeparator_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DefaultKeySeparator.DefaultKeySeparator_C");
		return ptr;
	}

}


