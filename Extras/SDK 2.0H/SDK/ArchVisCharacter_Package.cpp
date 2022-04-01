/**
 * Name: Hydroneer
 * Version: 2.0H
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
	 * 		Name   -> PredefindFunction AArchVisCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AArchVisCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class ArchVisCharacter.ArchVisCharacter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UArchVisCharMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchVisCharMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class ArchVisCharacter.ArchVisCharMovementComponent"));
		return ptr;
	}

}


