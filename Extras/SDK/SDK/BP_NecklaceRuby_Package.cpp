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
	 * 		Name   -> PredefindFunction ABP_NecklaceRuby_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NecklaceRuby_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_NecklaceRuby.BP_NecklaceRuby_C");
		return ptr;
	}

}


