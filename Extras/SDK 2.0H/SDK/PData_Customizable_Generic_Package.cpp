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
	 * 		Name   -> PredefindFunction UPData_Customizable_Generic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPData_Customizable_Generic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass PData_Customizable_Generic.PData_Customizable_Generic_C"));
		return ptr;
	}

}


