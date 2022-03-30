/**
 * Name: Hydroneer
 * Version: 2.0F
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCS_Walk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_Walk_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass CS_Walk.CS_Walk_C"));
		return ptr;
	}

}


