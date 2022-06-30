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
	 * 		Name   -> PredefindFunction ABP_RelicSpyglass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RelicSpyglass_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_RelicSpyglass.BP_RelicSpyglass_C");
		return ptr;
	}

}


