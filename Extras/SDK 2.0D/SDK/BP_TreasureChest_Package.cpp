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
	 * 		Name   -> PredefindFunction ABP_TreasureChest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TreasureChest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasureChest.BP_TreasureChest_C");
		return ptr;
	}

}


