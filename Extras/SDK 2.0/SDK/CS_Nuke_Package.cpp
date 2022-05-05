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
	 * 		Name   -> PredefindFunction UCS_Nuke_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_Nuke_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CS_Nuke.CS_Nuke_C");
		return ptr;
	}

}


