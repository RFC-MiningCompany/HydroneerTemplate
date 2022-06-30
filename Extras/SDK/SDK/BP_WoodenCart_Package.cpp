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
	 * 		Name   -> PredefindFunction ABP_WoodenCart_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WoodenCart_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_WoodenCart.BP_WoodenCart_C");
		return ptr;
	}

}


