/**
 * Name: Hydroneer
 * Version: 2.0D
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USignificanceManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USignificanceManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SignificanceManager.SignificanceManager");
		return ptr;
	}

}


