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
	 * 		Name   -> PredefindFunction UH_ButtonMetal3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UH_ButtonMetal3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass H_ButtonMetal3.H_ButtonMetal3_C");
		return ptr;
	}

}


