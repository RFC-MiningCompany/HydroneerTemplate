#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0L
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
	 * Enum Synthesis.ESynth1PatchDestination
	 */
	enum class ESynth1PatchDestination : uint8_t
	{
		Osc1Gain        = 0x0000000000000000,
		Osc1Frequency   = 0x0000000000000001,
		Osc1Pulsewidth  = 0x0000000000000002,
		Osc2Gain        = 0x0000000000000003,
		Osc2Frequency   = 0x0000000000000004,
		Osc2Pulsewidth  = 0x0000000000000005,
		FilterFrequency = 0x0000000000000006,
		FilterQ         = 0x0000000000000007,
		Gain            = 0x0000000000000008,
		Pan             = 0x0000000000000009,
		LFO1Frequency   = 0x000000000000000A,
		LFO1Gain        = 0x000000000000000B,
		LFO2Frequency   = 0x000000000000000C,
		LFO2Gain        = 0x000000000000000D,
		Count           = 0x000000000000000E,
		MAX             = 0x000000000000000F
	};

	/**
	 * Enum Synthesis.ESynth1PatchSource
	 */
	enum class ESynth1PatchSource : uint8_t
	{
		LFO1         = 0x0000000000000000,
		LFO2         = 0x0000000000000001,
		Envelope     = 0x0000000000000002,
		BiasEnvelope = 0x0000000000000003,
		Count        = 0x0000000000000004,
		MAX          = 0x0000000000000005
	};

	/**
	 * Enum Synthesis.ESynthStereoDelayMode
	 */
	enum class ESynthStereoDelayMode : uint8_t
	{
		Normal   = 0x0000000000000000,
		Cross    = 0x0000000000000001,
		PingPong = 0x0000000000000002,
		Count    = 0x0000000000000003,
		MAX      = 0x0000000000000004
	};

	/**
	 * Enum Synthesis.ESynthFilterAlgorithm
	 */
	enum class ESynthFilterAlgorithm : uint8_t
	{
		OnePole       = 0x0000000000000000,
		StateVariable = 0x0000000000000001,
		Ladder        = 0x0000000000000002,
		Count         = 0x0000000000000003,
		MAX           = 0x0000000000000004
	};

	/**
	 * Enum Synthesis.ESynthFilterType
	 */
	enum class ESynthFilterType : uint8_t
	{
		LowPass  = 0x0000000000000000,
		HighPass = 0x0000000000000001,
		BandPass = 0x0000000000000002,
		BandStop = 0x0000000000000003,
		Count    = 0x0000000000000004,
		MAX      = 0x0000000000000005
	};

	/**
	 * Enum Synthesis.ESynthModEnvBiasPatch
	 */
	enum class ESynthModEnvBiasPatch : uint8_t
	{
		PatchToNone       = 0x0000000000000000,
		PatchToOscFreq    = 0x0000000000000001,
		PatchToFilterFreq = 0x0000000000000002,
		PatchToFilterQ    = 0x0000000000000003,
		PatchToLFO1Gain   = 0x0000000000000004,
		PatchToLFO2Gain   = 0x0000000000000005,
		PatchToLFO1Freq   = 0x0000000000000006,
		PatchToLFO2Freq   = 0x0000000000000007,
		Count             = 0x0000000000000008,
		MAX               = 0x0000000000000009
	};

	/**
	 * Enum Synthesis.ESynthModEnvPatch
	 */
	enum class ESynthModEnvPatch : uint8_t
	{
		PatchToNone       = 0x0000000000000000,
		PatchToOscFreq    = 0x0000000000000001,
		PatchToFilterFreq = 0x0000000000000002,
		PatchToFilterQ    = 0x0000000000000003,
		PatchToLFO1Gain   = 0x0000000000000004,
		PatchToLFO2Gain   = 0x0000000000000005,
		PatchToLFO1Freq   = 0x0000000000000006,
		PatchToLFO2Freq   = 0x0000000000000007,
		Count             = 0x0000000000000008,
		MAX               = 0x0000000000000009
	};

	/**
	 * Enum Synthesis.ESynthLFOPatchType
	 */
	enum class ESynthLFOPatchType : uint8_t
	{
		PatchToNone              = 0x0000000000000000,
		PatchToGain              = 0x0000000000000001,
		PatchToOscFreq           = 0x0000000000000002,
		PatchToFilterFreq        = 0x0000000000000003,
		PatchToFilterQ           = 0x0000000000000004,
		PatchToOscPulseWidth     = 0x0000000000000005,
		PatchToOscPan            = 0x0000000000000006,
		PatchLFO1ToLFO2Frequency = 0x0000000000000007,
		PatchLFO1ToLFO2Gain      = 0x0000000000000008,
		Count                    = 0x0000000000000009,
		MAX                      = 0x000000000000000A
	};

	/**
	 * Enum Synthesis.ESynthLFOMode
	 */
	enum class ESynthLFOMode : uint8_t
	{
		Sync    = 0x0000000000000000,
		OneShot = 0x0000000000000001,
		Free    = 0x0000000000000002,
		Count   = 0x0000000000000003,
		MAX     = 0x0000000000000004
	};

	/**
	 * Enum Synthesis.ESynthLFOType
	 */
	enum class ESynthLFOType : uint8_t
	{
		Sine             = 0x0000000000000000,
		UpSaw            = 0x0000000000000001,
		DownSaw          = 0x0000000000000002,
		Square           = 0x0000000000000003,
		Triangle         = 0x0000000000000004,
		Exponential      = 0x0000000000000005,
		RandomSampleHold = 0x0000000000000006,
		Count            = 0x0000000000000007,
		MAX              = 0x0000000000000008
	};

	/**
	 * Enum Synthesis.ESynth1OscType
	 */
	enum class ESynth1OscType : uint8_t
	{
		Sine     = 0x0000000000000000,
		Saw      = 0x0000000000000001,
		Triangle = 0x0000000000000002,
		Square   = 0x0000000000000003,
		Noise    = 0x0000000000000004,
		Count    = 0x0000000000000005,
		MAX      = 0x0000000000000006
	};

	/**
	 * Enum Synthesis.ESourceEffectDynamicsPeakMode
	 */
	enum class ESourceEffectDynamicsPeakMode : uint8_t
	{
		MeanSquared     = 0x0000000000000000,
		RootMeanSquared = 0x0000000000000001,
		Peak            = 0x0000000000000002,
		Count           = 0x0000000000000003,
		MAX             = 0x0000000000000004
	};

	/**
	 * Enum Synthesis.ESourceEffectDynamicsProcessorType
	 */
	enum class ESourceEffectDynamicsProcessorType : uint8_t
	{
		Compressor = 0x0000000000000000,
		Limiter    = 0x0000000000000001,
		Expander   = 0x0000000000000002,
		Gate       = 0x0000000000000003,
		Count      = 0x0000000000000004,
		MAX        = 0x0000000000000005
	};

	/**
	 * Enum Synthesis.EEnvelopeFollowerPeakMode
	 */
	enum class EEnvelopeFollowerPeakMode : uint8_t
	{
		MeanSquared     = 0x0000000000000000,
		RootMeanSquared = 0x0000000000000001,
		Peak            = 0x0000000000000002,
		Count           = 0x0000000000000003,
		MAX             = 0x0000000000000004
	};

	/**
	 * Enum Synthesis.ESourceEffectFilterParam
	 */
	enum class ESourceEffectFilterParam : uint8_t
	{
		FilterFrequency = 0x0000000000000000,
		FilterResonance = 0x0000000000000001,
		Count           = 0x0000000000000002,
		MAX             = 0x0000000000000003
	};

	/**
	 * Enum Synthesis.ESourceEffectFilterType
	 */
	enum class ESourceEffectFilterType : uint8_t
	{
		LowPass  = 0x0000000000000000,
		HighPass = 0x0000000000000001,
		BandPass = 0x0000000000000002,
		BandStop = 0x0000000000000003,
		Count    = 0x0000000000000004,
		MAX      = 0x0000000000000005
	};

	/**
	 * Enum Synthesis.ESourceEffectFilterCircuit
	 */
	enum class ESourceEffectFilterCircuit : uint8_t
	{
		OnePole       = 0x0000000000000000,
		StateVariable = 0x0000000000000001,
		Ladder        = 0x0000000000000002,
		Count         = 0x0000000000000003,
		MAX           = 0x0000000000000004
	};

	/**
	 * Enum Synthesis.EStereoChannelMode
	 */
	enum class EStereoChannelMode : uint8_t
	{
		MidSide   = 0x0000000000000000,
		LeftRight = 0x0000000000000001,
		count     = 0x0000000000000002,
		MAX       = 0x0000000000000003
	};

	/**
	 * Enum Synthesis.EPhaserLFOType
	 */
	enum class EPhaserLFOType : uint8_t
	{
		Sine             = 0x0000000000000000,
		UpSaw            = 0x0000000000000001,
		DownSaw          = 0x0000000000000002,
		Square           = 0x0000000000000003,
		Triangle         = 0x0000000000000004,
		Exponential      = 0x0000000000000005,
		RandomSampleHold = 0x0000000000000006,
		Count            = 0x0000000000000007,
		MAX              = 0x0000000000000008
	};

	/**
	 * Enum Synthesis.ERingModulatorTypeSourceEffect
	 */
	enum class ERingModulatorTypeSourceEffect : uint8_t
	{
		Sine     = 0x0000000000000000,
		Saw      = 0x0000000000000001,
		Triangle = 0x0000000000000002,
		Square   = 0x0000000000000003,
		Count    = 0x0000000000000004,
		MAX      = 0x0000000000000005
	};

	/**
	 * Enum Synthesis.EStereoDelayFiltertype
	 */
	enum class EStereoDelayFiltertype : uint8_t
	{
		Lowpass  = 0x0000000000000000,
		Highpass = 0x0000000000000001,
		Bandpass = 0x0000000000000002,
		Notch    = 0x0000000000000003,
		Count    = 0x0000000000000004,
		MAX      = 0x0000000000000005
	};

	/**
	 * Enum Synthesis.EStereoDelaySourceEffect
	 */
	enum class EStereoDelaySourceEffect : uint8_t
	{
		Normal   = 0x0000000000000000,
		Cross    = 0x0000000000000001,
		PingPong = 0x0000000000000002,
		Count    = 0x0000000000000003,
		MAX      = 0x0000000000000004
	};

	/**
	 * Enum Synthesis.ESubmixEffectConvolutionReverbBlockSize
	 */
	enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t
	{
		BlockSize256  = 0x0000000000000000,
		BlockSize512  = 0x0000000000000001,
		BlockSize1024 = 0x0000000000000002,
		MAX           = 0x0000000000000003
	};

	/**
	 * Enum Synthesis.ESubmixFilterAlgorithm
	 */
	enum class ESubmixFilterAlgorithm : uint8_t
	{
		OnePole       = 0x0000000000000000,
		StateVariable = 0x0000000000000001,
		Ladder        = 0x0000000000000002,
		Count         = 0x0000000000000003,
		MAX           = 0x0000000000000004
	};

	/**
	 * Enum Synthesis.ESubmixFilterType
	 */
	enum class ESubmixFilterType : uint8_t
	{
		LowPass  = 0x0000000000000000,
		HighPass = 0x0000000000000001,
		BandPass = 0x0000000000000002,
		BandStop = 0x0000000000000003,
		Count    = 0x0000000000000004,
		MAX      = 0x0000000000000005
	};

	/**
	 * Enum Synthesis.ETapLineMode
	 */
	enum class ETapLineMode : uint8_t
	{
		SendToChannel = 0x0000000000000000,
		Panning       = 0x0000000000000001,
		Disabled      = 0x0000000000000002,
		MAX           = 0x0000000000000003
	};

	/**
	 * Enum Synthesis.EGranularSynthSeekType
	 */
	enum class EGranularSynthSeekType : uint8_t
	{
		FromBeginning       = 0x0000000000000000,
		FromCurrentPosition = 0x0000000000000001,
		Count               = 0x0000000000000002,
		MAX                 = 0x0000000000000003
	};

	/**
	 * Enum Synthesis.EGranularSynthEnvelopeType
	 */
	enum class EGranularSynthEnvelopeType : uint8_t
	{
		Rectangular         = 0x0000000000000000,
		Triangle            = 0x0000000000000001,
		DownwardTriangle    = 0x0000000000000002,
		UpwardTriangle      = 0x0000000000000003,
		ExponentialDecay    = 0x0000000000000004,
		ExponentialIncrease = 0x0000000000000005,
		Gaussian            = 0x0000000000000006,
		Hanning             = 0x0000000000000007,
		Lanczos             = 0x0000000000000008,
		Cosine              = 0x0000000000000009,
		CosineSquared       = 0x000000000000000A,
		Welch               = 0x000000000000000B,
		Blackman            = 0x000000000000000C,
		BlackmanHarris      = 0x000000000000000D,
		Count               = 0x000000000000000E,
		MAX                 = 0x000000000000000F
	};

	/**
	 * Enum Synthesis.CurveInterpolationType
	 */
	enum class ECurveInterpolationType : uint8_t
	{
		CurveInterpolationType__AUTOINTERP                 = 0x0000000000000000,
		CurveInterpolationType__LINEAR                     = 0x0000000000000001,
		CurveInterpolationType__CONSTANT                   = 0x0000000000000002,
		CurveInterpolationType__CurveInterpolationType_MAX = 0x0000000000000003
	};

	/**
	 * Enum Synthesis.ESamplePlayerSeekType
	 */
	enum class ESamplePlayerSeekType : uint8_t
	{
		FromBeginning       = 0x0000000000000000,
		FromCurrentPosition = 0x0000000000000001,
		FromEnd             = 0x0000000000000002,
		Count               = 0x0000000000000003,
		MAX                 = 0x0000000000000004
	};

	/**
	 * Enum Synthesis.ESynthKnobSize
	 */
	enum class ESynthKnobSize : uint8_t
	{
		Medium = 0x0000000000000000,
		Large  = 0x0000000000000001,
		Count  = 0x0000000000000002,
		MAX    = 0x0000000000000003
	};

	/**
	 * Enum Synthesis.ESynthSlateColorStyle
	 */
	enum class ESynthSlateColorStyle : uint8_t
	{
		Light = 0x0000000000000000,
		Dark  = 0x0000000000000001,
		Count = 0x0000000000000002,
		MAX   = 0x0000000000000003
	};

	/**
	 * Enum Synthesis.ESynthSlateSizeType
	 */
	enum class ESynthSlateSizeType : uint8_t
	{
		Small  = 0x0000000000000000,
		Medium = 0x0000000000000001,
		Large  = 0x0000000000000002,
		Count  = 0x0000000000000003,
		MAX    = 0x0000000000000004
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Synthesis.Synth1PatchCable
	 * Size -> 0x0008
	 */
	struct FSynth1PatchCable
	{
	public:
		float                                                      Depth;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynth1PatchDestination                                    Destination;                                             // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1NFV[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.EpicSynth1Patch
	 * Size -> 0x0018
	 */
	struct FEpicSynth1Patch
	{
	public:
		ESynth1PatchSource                                         PatchSource;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PB3M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSynth1PatchCable>                           PatchCables;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.ModularSynthPreset
	 * Size -> 0x00D8 (FullSize[0x00E0] - InheritedSize[0x0008])
	 */
	struct FModularSynthPreset : public FTableRowBase
	{
	public:
		unsigned char                                              bEnablePolyphony : 1;                                    // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B8CC[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESynth1OscType                                             Osc1Type;                                                // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4XLO[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Osc1Gain;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Osc1Octave;                                              // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Osc1Semitones;                                           // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Osc1Cents;                                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Osc1PulseWidth;                                          // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynth1OscType                                             Osc2Type;                                                // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V83G[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Osc2Gain;                                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Osc2Octave;                                              // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Osc2Semitones;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Osc2Cents;                                               // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Osc2PulseWidth;                                          // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Portamento;                                              // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableUnison : 1;                                       // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableOscillatorSync : 1;                               // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BQAI[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Spread;                                                  // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pan;                                                     // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LFO1Frequency;                                           // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LFO1Gain;                                                // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthLFOType                                              LFO1Type;                                                // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthLFOMode                                              LFO1Mode;                                                // 0x0055(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthLFOPatchType                                         LFO1PatchType;                                           // 0x0056(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CO47[0x1];                                   // 0x0057(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LFO2Frequency;                                           // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LFO2Gain;                                                // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthLFOType                                              LFO2Type;                                                // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthLFOMode                                              LFO2Mode;                                                // 0x0061(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthLFOPatchType                                         LFO2PatchType;                                           // 0x0062(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7BCL[0x1];                                   // 0x0063(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GainDb;                                                  // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackTime;                                              // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecayTime;                                               // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SustainGain;                                             // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReleaseTime;                                             // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthModEnvPatch                                          ModEnvPatchType;                                         // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthModEnvBiasPatch                                      ModEnvBiasPatchType;                                     // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L6CY[0x2];                                   // 0x007A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bInvertModulationEnvelope : 1;                           // 0x007C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInvertModulationEnvelopeBias : 1;                       // 0x007C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0IZ[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ModulationEnvelopeDepth;                                 // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ModulationEnvelopeAttackTime;                            // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ModulationEnvelopeDecayTime;                             // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ModulationEnvelopeSustainGain;                           // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ModulationEnvelopeReleaseTime;                           // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLegato : 1;                                             // 0x0094(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRetrigger : 1;                                          // 0x0094(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YZL[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FilterFrequency;                                         // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilterQ;                                                 // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthFilterType                                           FilterType;                                              // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthFilterAlgorithm                                      FilterAlgorithm;                                         // 0x00A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ENIP[0x2];                                   // 0x00A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bStereoDelayEnabled : 1;                                 // 0x00A4(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SD0F[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESynthStereoDelayMode                                      StereoDelayMode;                                         // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LM3M[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StereoDelayTime;                                         // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StereoDelayFeedback;                                     // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StereoDelayWetlevel;                                     // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StereoDelayRatio;                                        // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bChorusEnabled : 1;                                      // 0x00BC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XM91[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChorusDepth;                                             // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChorusFeedback;                                          // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChorusFrequency;                                         // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0DFO[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEpicSynth1Patch>                            Patches;                                                 // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.ModularSynthPresetBankEntry
	 * Size -> 0x00F0
	 */
	struct FModularSynthPresetBankEntry
	{
	public:
		class FString                                              PresetName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FModularSynthPreset                                 Preset;                                                  // 0x0010(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectBitCrusherSettings
	 * Size -> 0x0030
	 */
	struct FSourceEffectBitCrusherSettings
	{
	public:
		float                                                      CrushedSampleRate;                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JAEH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoundModulationDestinationSettings                 SampleRateModulation;                                    // 0x0008(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CrushedBits;                                             // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8768[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoundModulationDestinationSettings                 BitModulation;                                           // 0x0020(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectChorusSettings
	 * Size -> 0x0078
	 */
	struct FSourceEffectChorusSettings
	{
	public:
		float                                                      Depth;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Feedback;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WetLevel;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DryLevel;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Spread;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoundModulationDestinationSettings                 DepthModulation;                                         // 0x0018(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSoundModulationDestinationSettings                 FrequencyModulation;                                     // 0x0028(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSoundModulationDestinationSettings                 FeedbackModulation;                                      // 0x0038(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSoundModulationDestinationSettings                 WetModulation;                                           // 0x0048(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSoundModulationDestinationSettings                 DryModulation;                                           // 0x0058(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSoundModulationDestinationSettings                 SpreadModulation;                                        // 0x0068(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectDynamicsProcessorSettings
	 * Size -> 0x0028
	 */
	struct FSourceEffectDynamicsProcessorSettings
	{
	public:
		ESourceEffectDynamicsProcessorType                         DynamicsProcessorType;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESourceEffectDynamicsPeakMode                              PeakMode;                                                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EIFG[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LookAheadMsec;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackTimeMsec;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReleaseTimeMsec;                                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThresholdDb;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KneeBandwidthDb;                                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InputGainDb;                                             // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutputGainDb;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStereoLinked : 1;                                       // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAnalogMode : 1;                                         // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9O00[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectEnvelopeFollowerSettings
	 * Size -> 0x000C
	 */
	struct FSourceEffectEnvelopeFollowerSettings
	{
	public:
		float                                                      AttackTime;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReleaseTime;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvelopeFollowerPeakMode                                  PeakMode;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAnalogMode;                                           // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YM1H[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectEQBand
	 * Size -> 0x0010
	 */
	struct FSourceEffectEQBand
	{
	public:
		float                                                      Frequency;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bandwidth;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GainDb;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnabled : 1;                                            // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S1F8[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectEQSettings
	 * Size -> 0x0010
	 */
	struct FSourceEffectEQSettings
	{
	public:
		TArray<struct FSourceEffectEQBand>                         EQBands;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectFilterAudioBusModulationSettings
	 * Size -> 0x0028
	 */
	struct FSourceEffectFilterAudioBusModulationSettings
	{
	public:
		class UAudioBus*                                           AudioBus;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnvelopeFollowerAttackTimeMsec;                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnvelopeFollowerReleaseTimeMsec;                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnvelopeGainMultiplier;                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESourceEffectFilterParam                                   FilterParam;                                             // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6UWZ[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinFrequencyModulation;                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFrequencyModulation;                                  // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinResonanceModulation;                                  // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxResonanceModulation;                                  // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectFilterSettings
	 * Size -> 0x0020
	 */
	struct FSourceEffectFilterSettings
	{
	public:
		ESourceEffectFilterCircuit                                 FilterCircuit;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESourceEffectFilterType                                    FilterType;                                              // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0P4P[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CutoffFrequency;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilterQ;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_48F5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;                                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectFoldbackDistortionSettings
	 * Size -> 0x000C
	 */
	struct FSourceEffectFoldbackDistortionSettings
	{
	public:
		float                                                      InputGainDb;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThresholdDb;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutputGainDb;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectMidSideSpreaderSettings
	 * Size -> 0x0008
	 */
	struct FSourceEffectMidSideSpreaderSettings
	{
	public:
		float                                                      SpreadAmount;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStereoChannelMode                                         InputMode;                                               // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStereoChannelMode                                         OutputMode;                                              // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEqualPower;                                             // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7464[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectPannerSettings
	 * Size -> 0x0008
	 */
	struct FSourceEffectPannerSettings
	{
	public:
		float                                                      Spread;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pan;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectPhaserSettings
	 * Size -> 0x0010
	 */
	struct FSourceEffectPhaserSettings
	{
	public:
		float                                                      WetLevel;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Feedback;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhaserLFOType                                             LFOType;                                                 // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseQuadraturePhase;                                      // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSP9[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectRingModulationSettings
	 * Size -> 0x0020
	 */
	struct FSourceEffectRingModulationSettings
	{
	public:
		ERingModulatorTypeSourceEffect                             ModulatorType;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ME0H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Frequency;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DryLevel;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WetLevel;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WXMF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioBus*                                           AudioBusModulator;                                       // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectSimpleDelaySettings
	 * Size -> 0x0018
	 */
	struct FSourceEffectSimpleDelaySettings
	{
	public:
		float                                                      SpeedOfSound;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayAmount;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DryAmount;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WetAmount;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Feedback;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDelayBasedOnDistance : 1;                               // 0x0014(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PX39[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectStereoDelaySettings
	 * Size -> 0x0024
	 */
	struct FSourceEffectStereoDelaySettings
	{
	public:
		EStereoDelaySourceEffect                                   DelayMode;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2EQO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayTimeMsec;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Feedback;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayRatio;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WetLevel;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DryLevel;                                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFilterEnabled;                                          // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStereoDelayFiltertype                                     FilterType;                                              // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NYU6[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FilterFrequency;                                         // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilterQ;                                                 // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectWaveShaperSettings
	 * Size -> 0x0008
	 */
	struct FSourceEffectWaveShaperSettings
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutputGainDb;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SubmixEffectConvolutionReverbSettings
	 * Size -> 0x0028
	 */
	struct FSubmixEffectConvolutionReverbSettings
	{
	public:
		float                                                      NormalizationVolumeDb;                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBypass;                                                 // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMixInputChannelFormatToImpulseResponseFormat;           // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMixReverbOutputToOutputChannelFormat;                   // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N86H[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SurroundRearChannelBleedDb;                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertRearChannelBleedPhase;                            // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSurroundRearChannelFlip;                                // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0D9[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SurroundRearChannelBleedAmount;                          // 0x0010(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0SX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioImpulseResponse*                               ImpulseResponse;                                         // 0x0018(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowHArdwareAcceleration;                               // 0x0020(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P04E[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.SubmixEffectDelaySettings
	 * Size -> 0x000C
	 */
	struct FSubmixEffectDelaySettings
	{
	public:
		float                                                      MaximumDelayLength;                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpolationTime;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayLength;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SubmixEffectFilterSettings
	 * Size -> 0x000C
	 */
	struct FSubmixEffectFilterSettings
	{
	public:
		ESubmixFilterType                                          FilterType;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESubmixFilterAlgorithm                                     FilterAlgorithm;                                         // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1GO1[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FilterFrequency;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilterQ;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SubmixEffectFlexiverbSettings
	 * Size -> 0x0010
	 */
	struct FSubmixEffectFlexiverbSettings
	{
	public:
		float                                                      PreDelay;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecayTime;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RoomDampening;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Complexity;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.DynamicsBandSettings
	 * Size -> 0x0020
	 */
	struct FDynamicsBandSettings
	{
	public:
		float                                                      CrossoverTopFrequency;                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackTimeMsec;                                          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReleaseTimeMsec;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThresholdDb;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KneeBandwidthDb;                                         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InputGainDb;                                             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutputGainDb;                                            // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SubmixEffectMultibandCompressorSettings
	 * Size -> 0x0020
	 */
	struct FSubmixEffectMultibandCompressorSettings
	{
	public:
		ESubmixEffectDynamicsProcessorType                         DynamicsProcessorType;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESubmixEffectDynamicsPeakMode                              PeakMode;                                                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XJZB[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LookAheadMsec;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLinkChannels;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnalogMode;                                             // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFourPole;                                               // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_437L[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDynamicsBandSettings>                       Bands;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SubmixEffectStereoDelaySettings
	 * Size -> 0x0024
	 */
	struct FSubmixEffectStereoDelaySettings
	{
	public:
		EStereoDelaySourceEffect                                   DelayMode;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MNMC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayTimeMsec;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Feedback;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayRatio;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WetLevel;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DryLevel;                                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFilterEnabled;                                          // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStereoDelayFiltertype                                     FilterType;                                              // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T7EV[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FilterFrequency;                                         // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilterQ;                                                 // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.TapDelayInfo
	 * Size -> 0x0018
	 */
	struct FTapDelayInfo
	{
	public:
		ETapLineMode                                               TapLineMode;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_47II[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayLength;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Gain;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutputChannel;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PanInDegrees;                                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TapId;                                                   // 0x0014(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SubmixEffectTapDelaySettings
	 * Size -> 0x0018
	 */
	struct FSubmixEffectTapDelaySettings
	{
	public:
		float                                                      MaximumDelayLength;                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpolationTime;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTapDelayInfo>                               Taps;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.Synth2DSliderStyle
	 * Size -> 0x02B0 (FullSize[0x02B8] - InheritedSize[0x0008])
	 */
	struct FSynth2DSliderStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         NormalThumbImage;                                        // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DisabledThumbImage;                                      // 0x0090(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalBarImage;                                          // 0x0118(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DisabledBarImage;                                        // 0x01A0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundImage;                                         // 0x0228(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      BarThickness;                                            // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CPSJ[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.SynthKnobStyle
	 * Size -> 0x0230 (FullSize[0x0238] - InheritedSize[0x0008])
	 */
	struct FSynthKnobStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         LargeKnob;                                               // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         LargeKnobOverlay;                                        // 0x0090(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MediumKnob;                                              // 0x0118(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MediumKnobOverlay;                                       // 0x01A0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      MinValueAngle;                                           // 0x0228(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValueAngle;                                           // 0x022C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthKnobSize                                             KnobSize;                                                // 0x0230(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NWL5[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.PatchId
	 * Size -> 0x0004
	 */
	struct FPatchId
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectBitCrusherBaseSettings
	 * Size -> 0x0008
	 */
	struct FSourceEffectBitCrusherBaseSettings
	{
	public:
		float                                                      SampleRate;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BitDepth;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectChorusBaseSettings
	 * Size -> 0x0018
	 */
	struct FSourceEffectChorusBaseSettings
	{
	public:
		float                                                      Depth;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Feedback;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WetLevel;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DryLevel;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Spread;                                                  // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SynthSlateStyle
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FSynthSlateStyle : public FSlateWidgetStyle
	{
	public:
		ESynthSlateSizeType                                        SizeType;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthSlateColorStyle                                      ColorStyle;                                              // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_23WC[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
