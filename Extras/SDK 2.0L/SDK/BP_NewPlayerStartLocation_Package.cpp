﻿/**
 * Name: Hydroneer
 * Version: 2.0L
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
	 * 		Name   -> PredefindFunction ABP_NewPlayerStartLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NewPlayerStartLocation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NewPlayerStartLocation.BP_NewPlayerStartLocation_C");
		return ptr;
	}

}


