﻿/**
 * Name: Hydroneer
 * Version: 2.0H
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_LavaFlow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LavaFlow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_LavaFlow.BP_LavaFlow_C"));
		return ptr;
	}

}


