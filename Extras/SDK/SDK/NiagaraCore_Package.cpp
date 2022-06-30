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
	 * 		Name   -> PredefindFunction UNiagaraMergeable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraMergeable::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NiagaraCore.NiagaraMergeable");
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
		static UClass* ptr = UObject::FindClass("Class NiagaraCore.NiagaraDataInterfaceBase");
		return ptr;
	}

}


