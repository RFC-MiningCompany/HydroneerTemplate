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
	 * 		Name   -> PredefindFunction UOrangeFlatWorldGenerator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrangeFlatWorldGenerator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OrangeFlatWorldGenerator.OrangeFlatWorldGenerator_C");
		return ptr;
	}

}


