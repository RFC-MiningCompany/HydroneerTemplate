/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * 		Name   -> PredefindFunction UCS_Walk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_Walk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CS_Walk.CS_Walk_C");
		return ptr;
	}

}


