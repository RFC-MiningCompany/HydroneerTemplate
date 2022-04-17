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
	 * 		Name   -> PredefindFunction UNiagaraDataInterfaceChaosDestruction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceChaosDestruction::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNiagaraDataInterfaceFieldSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceFieldSystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class ChaosNiagara.NiagaraDataInterfaceFieldSystem"));
		return ptr;
	}

}


