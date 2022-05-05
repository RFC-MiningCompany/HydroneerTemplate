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
	 * 		Name   -> PredefindFunction UCS_Pickup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_Pickup_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CS_Pickup.CS_Pickup_C");
		return ptr;
	}

}


