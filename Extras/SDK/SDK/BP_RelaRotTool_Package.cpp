/**
 * Name: Hydroneer
 * Version: 2.0
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
	 * 		Name   -> PredefindFunction ABP_RelaRotTool_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RelaRotTool_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RelaRotTool.BP_RelaRotTool_C");
		return ptr;
	}

}


