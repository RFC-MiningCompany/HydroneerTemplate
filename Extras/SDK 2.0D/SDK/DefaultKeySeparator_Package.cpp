﻿/**
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
	 * 		Name   -> PredefindFunction UDefaultKeySeparator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultKeySeparator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DefaultKeySeparator.DefaultKeySeparator_C");
		return ptr;
	}

}


