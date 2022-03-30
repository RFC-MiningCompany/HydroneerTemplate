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
	 * 		Name   -> PredefindFunction UH_TextBody_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UH_TextBody_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass H_TextBody.H_TextBody_C"));
		return ptr;
	}

}


