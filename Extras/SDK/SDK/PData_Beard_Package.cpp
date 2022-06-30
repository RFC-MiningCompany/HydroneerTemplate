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
	 * 		Name   -> PredefindFunction UPData_Beard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPData_Beard_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PData_Beard.PData_Beard_C");
		return ptr;
	}

}


