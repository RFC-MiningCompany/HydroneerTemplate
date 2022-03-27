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
	 * 		Name   -> PredefindFunction ABP_NecklaceOnyx_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NecklaceOnyx_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NecklaceOnyx.BP_NecklaceOnyx_C");
		return ptr;
	}

}


