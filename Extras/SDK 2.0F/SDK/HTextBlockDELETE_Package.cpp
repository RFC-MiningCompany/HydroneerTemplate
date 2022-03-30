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
	 * 		Name   -> PredefindFunction UHTextBlockDELETE_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHTextBlockDELETE_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass HTextBlockDELETE.HTextBlockDELETE_C"));
		return ptr;
	}

}


