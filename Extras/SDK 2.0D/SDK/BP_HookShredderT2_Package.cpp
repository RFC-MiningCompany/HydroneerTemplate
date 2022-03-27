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
	 * 		Name   -> PredefindFunction ABP_HookShredderT2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HookShredderT2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HookShredderT2.BP_HookShredderT2_C");
		return ptr;
	}

}


