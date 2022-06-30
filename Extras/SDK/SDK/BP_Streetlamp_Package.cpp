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
	 * 		Name   -> PredefindFunction ABP_Streetlamp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Streetlamp_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Streetlamp.BP_Streetlamp_C");
		return ptr;
	}

}


