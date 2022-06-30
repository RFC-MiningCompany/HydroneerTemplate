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
	 * 		Name   -> PredefindFunction ABP_UncutOnyx_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_UncutOnyx_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_UncutOnyx.BP_UncutOnyx_C");
		return ptr;
	}

}


