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
	 * 		Name   -> PredefindFunction UNiagaraDataInterfaceVoxelDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceVoxelDataAsset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VoxelNiagara.NiagaraDataInterfaceVoxelDataAsset");
		return ptr;
	}

}


