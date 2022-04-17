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
	 * 		Name   -> PredefindFunction UNiagaraMergeable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraMergeable::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class NiagaraCore.NiagaraMergeable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNiagaraDataInterfaceBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class NiagaraCore.NiagaraDataInterfaceBase"));
		return ptr;
	}

}


