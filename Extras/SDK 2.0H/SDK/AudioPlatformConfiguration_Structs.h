#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0H
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
	 * Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
	 */
	enum class AudioPlatformConfiguration_ESoundwaveSampleRateSettings : uint8_t
	{
		ESoundwaveSampleRateSettings__Max         = 0,
		ESoundwaveSampleRateSettings__High        = 1,
		ESoundwaveSampleRateSettings__Medium      = 2,
		ESoundwaveSampleRateSettings__Low         = 3,
		ESoundwaveSampleRateSettings__Min         = 4,
		ESoundwaveSampleRateSettings__MatchDevice = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
	 * Size -> 0x0010
	 */
	struct FPlatformRuntimeAudioCompressionOverrides
	{
	public:
		bool                                                       bOverrideCompressionTimes;                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QF6B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DurationThreshold;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumRandomBranches;                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SoundCueQualityIndex;                                    // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
