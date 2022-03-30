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
	 * 		Name   -> PredefindFunction UH_Background400x200_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UH_Background400x200_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass H_Background400x200.H_Background400x200_C"));
		return ptr;
	}

}


