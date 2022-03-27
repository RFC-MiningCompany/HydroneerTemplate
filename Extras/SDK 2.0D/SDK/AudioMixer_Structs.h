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
	 * Enum AudioMixer.EMusicalNoteName
	 */
	enum class AudioMixer_EMusicalNoteName : uint8_t
	{
		EMusicalNoteName__C                    = 0,
		EMusicalNoteName__Db                   = 1,
		EMusicalNoteName__D                    = 2,
		EMusicalNoteName__Eb                   = 3,
		EMusicalNoteName__E                    = 4,
		EMusicalNoteName__F                    = 5,
		EMusicalNoteName__Gb                   = 6,
		EMusicalNoteName__G                    = 7,
		EMusicalNoteName__Ab                   = 8,
		EMusicalNoteName__A                    = 9,
		EMusicalNoteName__Bb                   = 10,
		EMusicalNoteName__B                    = 11,
		EMusicalNoteName__EMusicalNoteName_MAX = 12
	};

	/**
	 * Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
	 */
	enum class AudioMixer_ESubmixEffectDynamicsChannelLinkMode : uint8_t
	{
		ESubmixEffectDynamicsChannelLinkMode__Disabled                                 = 0,
		ESubmixEffectDynamicsChannelLinkMode__Average                                  = 1,
		ESubmixEffectDynamicsChannelLinkMode__Peak                                     = 2,
		ESubmixEffectDynamicsChannelLinkMode__Count                                    = 3,
		ESubmixEffectDynamicsChannelLinkMode__ESubmixEffectDynamicsChannelLinkMode_MAX = 4
	};

	/**
	 * Enum AudioMixer.ESubmixEffectDynamicsPeakMode
	 */
	enum class AudioMixer_ESubmixEffectDynamicsPeakMode : uint8_t
	{
		ESubmixEffectDynamicsPeakMode__MeanSquared                       = 0,
		ESubmixEffectDynamicsPeakMode__RootMeanSquared                   = 1,
		ESubmixEffectDynamicsPeakMode__Peak                              = 2,
		ESubmixEffectDynamicsPeakMode__Count                             = 3,
		ESubmixEffectDynamicsPeakMode__ESubmixEffectDynamicsPeakMode_MAX = 4
	};

	/**
	 * Enum AudioMixer.ESubmixEffectDynamicsProcessorType
	 */
	enum class AudioMixer_ESubmixEffectDynamicsProcessorType : uint8_t
	{
		ESubmixEffectDynamicsProcessorType__Compressor                             = 0,
		ESubmixEffectDynamicsProcessorType__Limiter                                = 1,
		ESubmixEffectDynamicsProcessorType__Expander                               = 2,
		ESubmixEffectDynamicsProcessorType__Gate                                   = 3,
		ESubmixEffectDynamicsProcessorType__Count                                  = 4,
		ESubmixEffectDynamicsProcessorType__ESubmixEffectDynamicsProcessorType_MAX = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
	 * Size -> 0x000C
	 */
	struct FSubmixEffectDynamicProcessorFilterSettings
	{
	public:
		unsigned char                                              bEnabled : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CC2W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Cutoff;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GainDb;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
	 * Size -> 0x0050
	 */
	struct FSubmixEffectDynamicsProcessorSettings
	{
	public:
		AudioMixer_ESubmixEffectDynamicsProcessorType              DynamicsProcessorType;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AudioMixer_ESubmixEffectDynamicsPeakMode                   PeakMode;                                                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AudioMixer_ESubmixEffectDynamicsChannelLinkMode            LinkMode;                                                // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R997[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InputGainDb;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThresholdDb;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KneeBandwidthDb;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LookAheadMsec;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackTimeMsec;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReleaseTimeMsec;                                         // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundSubmix*                                        ExternalSubmix;                                          // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bChannelLinked : 1;                                      // 0x0028(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAnalogMode : 1;                                         // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bKeyAudition : 1;                                        // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IAG2[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      KeyGainDb;                                               // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutputGainDb;                                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSubmixEffectDynamicProcessorFilterSettings         KeyHighshelf;                                            // 0x0034(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSubmixEffectDynamicProcessorFilterSettings         KeyLowshelf;                                             // 0x0040(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YO1F[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AudioMixer.SubmixEffectEQBand
	 * Size -> 0x0010
	 */
	struct FSubmixEffectEQBand
	{
	public:
		float                                                      Frequency;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bandwidth;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GainDb;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnabled : 1;                                            // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7Y03[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
	 * Size -> 0x0010
	 */
	struct FSubmixEffectSubmixEQSettings
	{
	public:
		TArray<struct FSubmixEffectEQBand>                         EQBands;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AudioMixer.SubmixEffectReverbSettings
	 * Size -> 0x0040
	 */
	struct FSubmixEffectReverbSettings
	{
	public:
		bool                                                       bBypassEarlyReflections;                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IOEM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReflectionsDelay;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GainHF;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReflectionsGain;                                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBypassLateReflections;                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_65E8[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LateDelay;                                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecayTime;                                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Density;                                                 // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Diffusion;                                               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AirAbsorptionGainHF;                                     // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecayHFRatio;                                            // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LateGain;                                                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Gain;                                                    // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WetLevel;                                                // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DryLevel;                                                // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBypass;                                                 // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TDPD[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
