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
	 * 		Name   -> PredefindFunction ABP_OreShard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OreShard_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_OreShard.BP_OreShard_C");
		return ptr;
	}

}


