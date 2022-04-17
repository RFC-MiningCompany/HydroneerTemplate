/**
 * Name: Hydroneer
 * Version: 2.0N
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
	 * 		Name   -> PredefindFunction UActorSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorSequence::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class ActorSequence.ActorSequence"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UActorSequenceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorSequenceComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class ActorSequence.ActorSequenceComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UActorSequencePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorSequencePlayer::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class ActorSequence.ActorSequencePlayer"));
		return ptr;
	}

}


