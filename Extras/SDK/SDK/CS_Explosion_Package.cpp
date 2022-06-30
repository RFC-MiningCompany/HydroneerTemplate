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
	 * 		Name   -> PredefindFunction UCS_Explosion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_Explosion_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CS_Explosion.CS_Explosion_C");
		return ptr;
	}

}


