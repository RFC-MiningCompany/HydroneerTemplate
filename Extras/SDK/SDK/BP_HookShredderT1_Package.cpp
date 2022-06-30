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
	 * 		Name   -> PredefindFunction ABP_HookShredderT1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HookShredderT1_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HookShredderT1.BP_HookShredderT1_C");
		return ptr;
	}

}


