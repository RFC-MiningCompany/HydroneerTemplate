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
	 * 		Name   -> PredefindFunction UPData_ClothingSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPData_ClothingSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PData_ClothingSet.PData_ClothingSet_C");
		return ptr;
	}

}


