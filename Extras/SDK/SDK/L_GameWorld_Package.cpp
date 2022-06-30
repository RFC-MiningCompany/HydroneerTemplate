﻿/**
 * Name: Hydroneer
 * Version: 2.0.6
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
	 * 		Name   -> PredefindFunction AL_GameWorld_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AL_GameWorld_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass L_GameWorld.L_GameWorld_C");
		return ptr;
	}

}


