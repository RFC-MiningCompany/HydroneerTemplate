#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0D
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum MaterialShaderQualitySettings.EMobileShadowQuality
	 */
	enum class MaterialShaderQualitySettings_EMobileShadowQuality : uint8_t
	{
		EMobileShadowQuality__NoFiltering              = 0,
		EMobileShadowQuality__PCF_1x1                  = 1,
		EMobileShadowQuality__PCF_2x2                  = 2,
		EMobileShadowQuality__PCF_3x3                  = 3,
		EMobileShadowQuality__EMobileShadowQuality_MAX = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
	 * Size -> 0x0009
	 */
	struct FMaterialQualityOverrides
	{
	public:
		bool                                                       bDiscardQualityDuringCook;                               // 0x0000(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableOverride;                                         // 0x0001(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceFullyRough;                                        // 0x0002(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceNonMetal;                                          // 0x0003(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceDisableLMDirectionality;                           // 0x0004(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceLQReflections;                                     // 0x0005(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceDisablePreintegratedGF;                            // 0x0006(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableMaterialNormalCalculation;                       // 0x0007(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		MaterialShaderQualitySettings_EMobileShadowQuality         MobileShadowQuality;                                     // 0x0008(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
