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
	 * 		Name   -> PredefindFunction UH_Background400x200_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UH_Background400x200_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass H_Background400x200.H_Background400x200_C");
		return ptr;
	}

}


