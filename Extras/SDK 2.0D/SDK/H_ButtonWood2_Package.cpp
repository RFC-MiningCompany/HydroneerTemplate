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
	 * 		Name   -> PredefindFunction UH_ButtonWood2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UH_ButtonWood2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass H_ButtonWood2.H_ButtonWood2_C");
		return ptr;
	}

}


