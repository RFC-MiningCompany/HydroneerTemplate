﻿/**
 * Name: Hydroneer
 * Version: 2.0N
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
	 * 		Name   -> PredefindFunction UPData_ClothingSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPData_ClothingSet_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass PData_ClothingSet.PData_ClothingSet_C"));
		return ptr;
	}

}


