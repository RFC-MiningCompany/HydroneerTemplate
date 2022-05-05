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
	 * 		Name   -> PredefindFunction AArchVisCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AArchVisCharacter::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ArchVisCharacter.ArchVisCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UArchVisCharMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchVisCharMovementComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ArchVisCharacter.ArchVisCharMovementComponent");
		return ptr;
	}

}


