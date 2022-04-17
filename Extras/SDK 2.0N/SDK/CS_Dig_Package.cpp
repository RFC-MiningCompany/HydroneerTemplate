/**
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
	 * 		Name   -> PredefindFunction UCS_Dig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_Dig_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass CS_Dig.CS_Dig_C"));
		return ptr;
	}

}


