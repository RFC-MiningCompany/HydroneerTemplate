#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0N
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
	 * Enum AudioSynesthesia.EConstantQFFTSizeEnum
	 */
	enum class EConstantQFFTSizeEnum : uint8_t
	{
		Min     = 0x0000000000000000,
		XXSmall = 0x0000000000000001,
		XSmall  = 0x0000000000000002,
		Small   = 0x0000000000000003,
		Medium  = 0x0000000000000004,
		Large   = 0x0000000000000005,
		XLarge  = 0x0000000000000006,
		XXLarge = 0x0000000000000007,
		Max     = 0x0000000000000008
	};

	/**
	 * Enum AudioSynesthesia.EConstantQNormalizationEnum
	 */
	enum class EConstantQNormalizationEnum : uint8_t
	{
		EqualEuclideanNorm = 0x0000000000000000,
		EqualEnergy        = 0x0000000000000001,
		EqualAmplitude     = 0x0000000000000002,
		MAX                = 0x0000000000000003
	};

	/**
	 * Enum AudioSynesthesia.ELoudnessNRTCurveTypeEnum
	 */
	enum class ELoudnessNRTCurveTypeEnum : uint8_t
	{
		A    = 0x0000000000000000,
		B    = 0x0000000000000001,
		C    = 0x0000000000000002,
		D    = 0x0000000000000003,
		None = 0x0000000000000004,
		MAX  = 0x0000000000000005
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
