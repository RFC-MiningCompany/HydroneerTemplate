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
	 * 		Name   -> PredefindFunction UHTextBlockDELETE_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHTextBlockDELETE_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HTextBlockDELETE.HTextBlockDELETE_C");
		return ptr;
	}

}


