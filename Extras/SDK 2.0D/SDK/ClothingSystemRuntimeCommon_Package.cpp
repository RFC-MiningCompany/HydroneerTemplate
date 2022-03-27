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
	 * 		Name   -> PredefindFunction UClothConfigCommon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothConfigCommon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothConfigCommon");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UClothSharedConfigCommon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothSharedConfigCommon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UClothingAssetCustomData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothingAssetCustomData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothingAssetCustomData");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UClothingAssetCommon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothingAssetCommon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothingAssetCommon");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UClothLODDataCommon_Legacy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothLODDataCommon_Legacy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy");
		return ptr;
	}

}


