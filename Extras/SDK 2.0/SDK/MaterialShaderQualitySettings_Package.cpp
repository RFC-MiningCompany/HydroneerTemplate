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
	 * 		Name   -> PredefindFunction UMaterialShaderQualitySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialShaderQualitySettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MaterialShaderQualitySettings.MaterialShaderQualitySettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UShaderPlatformQualitySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShaderPlatformQualitySettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings");
		return ptr;
	}

}


