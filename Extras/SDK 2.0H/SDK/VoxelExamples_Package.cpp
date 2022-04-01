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
	 * 		Name   -> PredefindFunction UVoxelExamplesModuleDummy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelExamplesModuleDummy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class VoxelExamples.VoxelExamplesModuleDummy"));
		return ptr;
	}

}


