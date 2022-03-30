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
	 * 		Name   -> PredefindFunction UH_Background1000x700_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UH_Background1000x700_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass H_Background1000x700.H_Background1000x700_C"));
		return ptr;
	}

}


