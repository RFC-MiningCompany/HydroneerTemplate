/**
 * Name: Hydroneer
 * Version: 2.0
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
	 * 		Name   -> PredefindFunction USC_ShelfLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USC_ShelfLocation_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SC_ShelfLocation.SC_ShelfLocation_C");
		return ptr;
	}

}


