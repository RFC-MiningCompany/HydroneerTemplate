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
	 * 		Name   -> PredefindFunction UPData_Customizable_Generic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPData_Customizable_Generic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PData_Customizable_Generic.PData_Customizable_Generic_C");
		return ptr;
	}

}


