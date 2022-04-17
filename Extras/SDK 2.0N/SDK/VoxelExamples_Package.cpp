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
	 * 		Name   -> PredefindFunction UVoxelExamplesModuleDummy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelExamplesModuleDummy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class VoxelExamples.VoxelExamplesModuleDummy"));
		return ptr;
	}

}


