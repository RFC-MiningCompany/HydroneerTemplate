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
	 * 		Name   -> PredefindFunction ABP_IcehelmChandelier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_IcehelmChandelier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_IcehelmChandelier.BP_IcehelmChandelier_C");
		return ptr;
	}

}


