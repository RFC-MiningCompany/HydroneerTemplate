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
	 * 		Name   -> PredefindFunction UH_Background500x350_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UH_Background500x350_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass H_Background500x350.H_Background500x350_C"));
		return ptr;
	}

}


