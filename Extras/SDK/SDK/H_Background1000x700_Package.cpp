/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * 		Name   -> PredefindFunction UH_Background1000x700_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UH_Background1000x700_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass H_Background1000x700.H_Background1000x700_C");
		return ptr;
	}

}


