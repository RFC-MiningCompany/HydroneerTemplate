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
	 * 		Name   -> PredefindFunction UMaterialShaderQualitySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialShaderQualitySettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MaterialShaderQualitySettings.MaterialShaderQualitySettings"));
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
		static UClass* ptr = UObject::FindClass(_xor_("Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings"));
		return ptr;
	}

}


