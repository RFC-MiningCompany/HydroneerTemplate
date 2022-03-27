/**
 * Name: Hydroneer
 * Version: 2.0D
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UH_ButtonParent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UH_ButtonParent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass H_ButtonParent.H_ButtonParent_C");
		return ptr;
	}

}


