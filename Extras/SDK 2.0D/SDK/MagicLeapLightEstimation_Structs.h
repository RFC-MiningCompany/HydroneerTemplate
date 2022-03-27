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
	 * Enum MagicLeapLightEstimation.EMagicLeapLightEstimationCamera
	 */
	enum class MagicLeapLightEstimation_EMagicLeapLightEstimationCamera : uint8_t
	{
		EMagicLeapLightEstimationCamera__Left                                = 0,
		EMagicLeapLightEstimationCamera__Right                               = 1,
		EMagicLeapLightEstimationCamera__FarLeft                             = 2,
		EMagicLeapLightEstimationCamera__FarRight                            = 3,
		EMagicLeapLightEstimationCamera__EMagicLeapLightEstimationCamera_MAX = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationColorTemperatureState
	 * Size -> 0x0020
	 */
	struct FMagicLeapLightEstimationColorTemperatureState
	{
	public:
		float                                                      ColorTemperatureKelvin;                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        AmbientColor;                                            // 0x0004(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4K63[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimespan                                           Timestamp;                                               // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationAmbientGlobalState
	 * Size -> 0x0018
	 */
	struct FMagicLeapLightEstimationAmbientGlobalState
	{
	public:
		TArray<float>                                              AmbientIntensityNits;                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FTimespan                                           Timestamp;                                               // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
