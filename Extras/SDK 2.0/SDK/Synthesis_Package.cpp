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
	 * 		Name   -> PredefindFunction UModularSynthPresetBank.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModularSynthPresetBank::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.ModularSynthPresetBank");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UModularSynthPresetBank*                     InBank                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModularSynthPreset                         Preset                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      PresetName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthLibrary::AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, const struct FModularSynthPreset& Preset, const class FString& PresetName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset");
		
		struct
		{
			class UModularSynthPresetBank*                     InBank;
			struct FModularSynthPreset                         Preset;
			class FString                                      PresetName;
		} params;
		params.InBank = InBank;
		params.Preset = Preset;
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UModularSynthLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModularSynthLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.ModularSynthLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetSynthPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FModularSynthPreset                         SynthPreset                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetSynthPreset(const struct FModularSynthPreset& SynthPreset)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetSynthPreset");
		
		struct
		{
			struct FModularSynthPreset                         SynthPreset;
		} params;
		params.SynthPreset = SynthPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetSustainGain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SustainGain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetSustainGain(float SustainGain)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetSustainGain");
		
		struct
		{
			float                                              SustainGain;
		} params;
		params.SustainGain = SustainGain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DelayWetlevel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetStereoDelayWetlevel(float DelayWetlevel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel");
		
		struct
		{
			float                                              DelayWetlevel;
		} params;
		params.DelayWetlevel = DelayWetlevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetStereoDelayTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DelayTimeMsec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetStereoDelayTime(float DelayTimeMsec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayTime");
		
		struct
		{
			float                                              DelayTimeMsec;
		} params;
		params.DelayTimeMsec = DelayTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetStereoDelayRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DelayRatio                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetStereoDelayRatio(float DelayRatio)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayRatio");
		
		struct
		{
			float                                              DelayRatio;
		} params;
		params.DelayRatio = DelayRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetStereoDelayMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESynthStereoDelayMode                              StereoDelayMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayMode");
		
		struct
		{
			ESynthStereoDelayMode                              StereoDelayMode;
		} params;
		params.StereoDelayMode = StereoDelayMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               StereoDelayEnabled                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetStereoDelayIsEnabled(bool StereoDelayEnabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled");
		
		struct
		{
			bool                                               StereoDelayEnabled;
		} params;
		params.StereoDelayEnabled = StereoDelayEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DelayFeedback                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetStereoDelayFeedback(float DelayFeedback)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback");
		
		struct
		{
			float                                              DelayFeedback;
		} params;
		params.DelayFeedback = DelayFeedback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetSpread
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Spread                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetSpread(float Spread)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetSpread");
		
		struct
		{
			float                                              Spread;
		} params;
		params.Spread = Spread;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetReleaseTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReleaseTimeMsec                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetReleaseTime(float ReleaseTimeMsec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetReleaseTime");
		
		struct
		{
			float                                              ReleaseTimeMsec;
		} params;
		params.ReleaseTimeMsec = ReleaseTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetPortamento
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Portamento                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetPortamento(float Portamento)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetPortamento");
		
		struct
		{
			float                                              Portamento;
		} params;
		params.Portamento = Portamento;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetPitchBend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PitchBend                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetPitchBend(float PitchBend)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetPitchBend");
		
		struct
		{
			float                                              PitchBend;
		} params;
		params.PitchBend = PitchBend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetPan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Pan                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetPan(float Pan)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetPan");
		
		struct
		{
			float                                              Pan;
		} params;
		params.Pan = Pan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetOscType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OscIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESynth1OscType                                     OscType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetOscType(int32_t OscIndex, ESynth1OscType OscType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscType");
		
		struct
		{
			int32_t                                            OscIndex;
			ESynth1OscType                                     OscType;
		} params;
		params.OscIndex = OscIndex;
		params.OscType = OscType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetOscSync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSynced                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetOscSync(bool bIsSynced)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscSync");
		
		struct
		{
			bool                                               bIsSynced;
		} params;
		params.bIsSynced = bIsSynced;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetOscSemitones
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OscIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Semitones                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetOscSemitones(int32_t OscIndex, float Semitones)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscSemitones");
		
		struct
		{
			int32_t                                            OscIndex;
			float                                              Semitones;
		} params;
		params.OscIndex = OscIndex;
		params.Semitones = Semitones;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetOscPulsewidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OscIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Pulsewidth                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetOscPulsewidth(int32_t OscIndex, float Pulsewidth)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscPulsewidth");
		
		struct
		{
			int32_t                                            OscIndex;
			float                                              Pulsewidth;
		} params;
		params.OscIndex = OscIndex;
		params.Pulsewidth = Pulsewidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetOscOctave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OscIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Octave                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetOscOctave(int32_t OscIndex, float Octave)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscOctave");
		
		struct
		{
			int32_t                                            OscIndex;
			float                                              Octave;
		} params;
		params.OscIndex = OscIndex;
		params.Octave = Octave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetOscGainMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OscIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OscGainMod                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetOscGainMod(int32_t OscIndex, float OscGainMod)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscGainMod");
		
		struct
		{
			int32_t                                            OscIndex;
			float                                              OscGainMod;
		} params;
		params.OscIndex = OscIndex;
		params.OscGainMod = OscGainMod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetOscGain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OscIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OscGain                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetOscGain(int32_t OscIndex, float OscGain)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscGain");
		
		struct
		{
			int32_t                                            OscIndex;
			float                                              OscGain;
		} params;
		params.OscIndex = OscIndex;
		params.OscGain = OscGain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OscIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OscFreqMod                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscFrequencyMod");
		
		struct
		{
			int32_t                                            OscIndex;
			float                                              OscFreqMod;
		} params;
		params.OscIndex = OscIndex;
		params.OscFreqMod = OscFreqMod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetOscCents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OscIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Cents                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetOscCents(int32_t OscIndex, float Cents)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscCents");
		
		struct
		{
			int32_t                                            OscIndex;
			float                                              Cents;
		} params;
		params.OscIndex = OscIndex;
		params.Cents = Cents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetModEnvSustainGain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SustainGain                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetModEnvSustainGain(float SustainGain)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvSustainGain");
		
		struct
		{
			float                                              SustainGain;
		} params;
		params.SustainGain = SustainGain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Release                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetModEnvReleaseTime(float Release)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime");
		
		struct
		{
			float                                              Release;
		} params;
		params.Release = Release;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetModEnvPatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESynthModEnvPatch                                  InPatchType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetModEnvPatch(ESynthModEnvPatch InPatchType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvPatch");
		
		struct
		{
			ESynthModEnvPatch                                  InPatchType;
		} params;
		params.InPatchType = InPatchType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetModEnvInvert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInvert                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetModEnvInvert(bool bInvert)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvInvert");
		
		struct
		{
			bool                                               bInvert;
		} params;
		params.bInvert = bInvert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetModEnvDepth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Depth                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetModEnvDepth(float Depth)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvDepth");
		
		struct
		{
			float                                              Depth;
		} params;
		params.Depth = Depth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DecayTimeMsec                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetModEnvDecayTime(float DecayTimeMsec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvDecayTime");
		
		struct
		{
			float                                              DecayTimeMsec;
		} params;
		params.DecayTimeMsec = DecayTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESynthModEnvBiasPatch                              InPatchType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch");
		
		struct
		{
			ESynthModEnvBiasPatch                              InPatchType;
		} params;
		params.InPatchType = InPatchType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInvert                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetModEnvBiasInvert(bool bInvert)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert");
		
		struct
		{
			bool                                               bInvert;
		} params;
		params.bInvert = bInvert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AttackTimeMsec                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetModEnvAttackTime(float AttackTimeMsec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvAttackTime");
		
		struct
		{
			float                                              AttackTimeMsec;
		} params;
		params.AttackTimeMsec = AttackTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetLFOType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LFOIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESynthLFOType                                      LFOType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetLFOType(int32_t LFOIndex, ESynthLFOType LFOType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOType");
		
		struct
		{
			int32_t                                            LFOIndex;
			ESynthLFOType                                      LFOType;
		} params;
		params.LFOIndex = LFOIndex;
		params.LFOType = LFOType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetLFOPatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LFOIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESynthLFOPatchType                                 LFOPatchType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetLFOPatch(int32_t LFOIndex, ESynthLFOPatchType LFOPatchType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOPatch");
		
		struct
		{
			int32_t                                            LFOIndex;
			ESynthLFOPatchType                                 LFOPatchType;
		} params;
		params.LFOIndex = LFOIndex;
		params.LFOPatchType = LFOPatchType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetLFOMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LFOIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESynthLFOMode                                      LFOMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetLFOMode(int32_t LFOIndex, ESynthLFOMode LFOMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOMode");
		
		struct
		{
			int32_t                                            LFOIndex;
			ESynthLFOMode                                      LFOMode;
		} params;
		params.LFOIndex = LFOIndex;
		params.LFOMode = LFOMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetLFOGainMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LFOIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GainMod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetLFOGainMod(int32_t LFOIndex, float GainMod)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOGainMod");
		
		struct
		{
			int32_t                                            LFOIndex;
			float                                              GainMod;
		} params;
		params.LFOIndex = LFOIndex;
		params.GainMod = GainMod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetLFOGain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LFOIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Gain                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetLFOGain(int32_t LFOIndex, float Gain)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOGain");
		
		struct
		{
			int32_t                                            LFOIndex;
			float                                              Gain;
		} params;
		params.LFOIndex = LFOIndex;
		params.Gain = Gain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LFOIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FrequencyModHz                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod");
		
		struct
		{
			int32_t                                            LFOIndex;
			float                                              FrequencyModHz;
		} params;
		params.LFOIndex = LFOIndex;
		params.FrequencyModHz = FrequencyModHz;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetLFOFrequency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LFOIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FrequencyHz                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetLFOFrequency(int32_t LFOIndex, float FrequencyHz)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOFrequency");
		
		struct
		{
			int32_t                                            LFOIndex;
			float                                              FrequencyHz;
		} params;
		params.LFOIndex = LFOIndex;
		params.FrequencyHz = FrequencyHz;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetGainDb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              GainDb                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetGainDb(float GainDb)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetGainDb");
		
		struct
		{
			float                                              GainDb;
		} params;
		params.GainDb = GainDb;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetFilterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESynthFilterType                                   FilterType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetFilterType(ESynthFilterType FilterType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterType");
		
		struct
		{
			ESynthFilterType                                   FilterType;
		} params;
		params.FilterType = FilterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetFilterQMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FilterQ                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetFilterQMod(float FilterQ)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterQMod");
		
		struct
		{
			float                                              FilterQ;
		} params;
		params.FilterQ = FilterQ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetFilterQ
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FilterQ                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetFilterQ(float FilterQ)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterQ");
		
		struct
		{
			float                                              FilterQ;
		} params;
		params.FilterQ = FilterQ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FilterFrequencyHz                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetFilterFrequencyMod(float FilterFrequencyHz)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod");
		
		struct
		{
			float                                              FilterFrequencyHz;
		} params;
		params.FilterFrequencyHz = FilterFrequencyHz;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetFilterFrequency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FilterFrequencyHz                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetFilterFrequency(float FilterFrequencyHz)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterFrequency");
		
		struct
		{
			float                                              FilterFrequencyHz;
		} params;
		params.FilterFrequencyHz = FilterFrequencyHz;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetFilterAlgorithm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESynthFilterAlgorithm                              FilterAlgorithm                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterAlgorithm");
		
		struct
		{
			ESynthFilterAlgorithm                              FilterAlgorithm;
		} params;
		params.FilterAlgorithm = FilterAlgorithm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetEnableUnison
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EnableUnison                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetEnableUnison(bool EnableUnison)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnableUnison");
		
		struct
		{
			bool                                               EnableUnison;
		} params;
		params.EnableUnison = EnableUnison;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetEnableRetrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               RetriggerEnabled                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetEnableRetrigger(bool RetriggerEnabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnableRetrigger");
		
		struct
		{
			bool                                               RetriggerEnabled;
		} params;
		params.RetriggerEnabled = RetriggerEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetEnablePolyphony
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnablePolyphony                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetEnablePolyphony(bool bEnablePolyphony)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnablePolyphony");
		
		struct
		{
			bool                                               bEnablePolyphony;
		} params;
		params.bEnablePolyphony = bEnablePolyphony;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetEnablePatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPatchId                                    PatchId                                                    (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               BIsEnabled                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModularSynthComponent::SetEnablePatch(const struct FPatchId& PatchId, bool BIsEnabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnablePatch");
		
		struct
		{
			struct FPatchId                                    PatchId;
			bool                                               BIsEnabled;
		} params;
		params.PatchId = PatchId;
		params.BIsEnabled = BIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetEnableLegato
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LegatoEnabled                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetEnableLegato(bool LegatoEnabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnableLegato");
		
		struct
		{
			bool                                               LegatoEnabled;
		} params;
		params.LegatoEnabled = LegatoEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetDecayTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DecayTimeMsec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetDecayTime(float DecayTimeMsec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetDecayTime");
		
		struct
		{
			float                                              DecayTimeMsec;
		} params;
		params.DecayTimeMsec = DecayTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetChorusFrequency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Frequency                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetChorusFrequency(float Frequency)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusFrequency");
		
		struct
		{
			float                                              Frequency;
		} params;
		params.Frequency = Frequency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetChorusFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetChorusFeedback(float Feedback)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusFeedback");
		
		struct
		{
			float                                              Feedback;
		} params;
		params.Feedback = Feedback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetChorusEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EnableChorus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetChorusEnabled(bool EnableChorus)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusEnabled");
		
		struct
		{
			bool                                               EnableChorus;
		} params;
		params.EnableChorus = EnableChorus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetChorusDepth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Depth                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetChorusDepth(float Depth)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusDepth");
		
		struct
		{
			float                                              Depth;
		} params;
		params.Depth = Depth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetAttackTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AttackTimeMsec                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetAttackTime(float AttackTimeMsec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetAttackTime");
		
		struct
		{
			float                                              AttackTimeMsec;
		} params;
		params.AttackTimeMsec = AttackTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.NoteOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Note                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Velocity                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::NoteOn(float Note, int32_t Velocity, float Duration)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.NoteOn");
		
		struct
		{
			float                                              Note;
			int32_t                                            Velocity;
			float                                              Duration;
		} params;
		params.Note = Note;
		params.Velocity = Velocity;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.NoteOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Note                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllNotesOff                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bKillAllNotes                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.NoteOff");
		
		struct
		{
			float                                              Note;
			bool                                               bAllNotesOff;
			bool                                               bKillAllNotes;
		} params;
		params.Note = Note;
		params.bAllNotesOff = bAllNotesOff;
		params.bKillAllNotes = bKillAllNotes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.ModularSynthComponent.CreatePatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESynth1PatchSource                                 PatchSource                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSynth1PatchCable>                   PatchCables                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnableByDefault                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPatchId UModularSynthComponent::CreatePatch(ESynth1PatchSource PatchSource, TArray<struct FSynth1PatchCable> PatchCables, bool bEnableByDefault)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.CreatePatch");
		
		struct
		{
			ESynth1PatchSource                                 PatchSource;
			TArray<struct FSynth1PatchCable>                   PatchCables;
			bool                                               bEnableByDefault;
		} params;
		params.PatchSource = PatchSource;
		params.PatchCables = PatchCables;
		params.bEnableByDefault = bEnableByDefault;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UModularSynthComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModularSynthComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.ModularSynthComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectBitCrusherPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSourceEffectBitCrusherBaseSettings         Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectBitCrusherPreset::SetSettings(const struct FSourceEffectBitCrusherBaseSettings& Settings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectBitCrusherPreset.SetSettings");
		
		struct
		{
			struct FSourceEffectBitCrusherBaseSettings         Settings;
		} params;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundModulatorBase*                         Modulator                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectBitCrusherPreset::SetSampleRateModulator(class USoundModulatorBase* Modulator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator");
		
		struct
		{
			class USoundModulatorBase*                         Modulator;
		} params;
		params.Modulator = Modulator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SampleRate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectBitCrusherPreset::SetSampleRate(float SampleRate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate");
		
		struct
		{
			float                                              SampleRate;
		} params;
		params.SampleRate = SampleRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSourceEffectBitCrusherSettings             ModulationSettings                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectBitCrusherPreset::SetModulationSettings(const struct FSourceEffectBitCrusherSettings& ModulationSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings");
		
		struct
		{
			struct FSourceEffectBitCrusherSettings             ModulationSettings;
		} params;
		params.ModulationSettings = ModulationSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectBitCrusherPreset.SetBits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Bits                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectBitCrusherPreset::SetBits(float Bits)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectBitCrusherPreset.SetBits");
		
		struct
		{
			float                                              Bits;
		} params;
		params.Bits = Bits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundModulatorBase*                         Modulator                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectBitCrusherPreset::SetBitModulator(class USoundModulatorBase* Modulator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator");
		
		struct
		{
			class USoundModulatorBase*                         Modulator;
		} params;
		params.Modulator = Modulator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USourceEffectBitCrusherPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectBitCrusherPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectBitCrusherPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectChorusPreset.SetWetModulator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundModulatorBase*                         Modulator                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectChorusPreset::SetWetModulator(class USoundModulatorBase* Modulator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetWetModulator");
		
		struct
		{
			class USoundModulatorBase*                         Modulator;
		} params;
		params.Modulator = Modulator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectChorusPreset.SetWet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              WetAmount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectChorusPreset::SetWet(float WetAmount)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetWet");
		
		struct
		{
			float                                              WetAmount;
		} params;
		params.WetAmount = WetAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundModulatorBase*                         Modulator                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectChorusPreset::SetSpreadModulator(class USoundModulatorBase* Modulator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator");
		
		struct
		{
			class USoundModulatorBase*                         Modulator;
		} params;
		params.Modulator = Modulator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectChorusPreset.SetSpread
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Spread                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectChorusPreset::SetSpread(float Spread)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetSpread");
		
		struct
		{
			float                                              Spread;
		} params;
		params.Spread = Spread;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectChorusPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSourceEffectChorusBaseSettings             Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectChorusPreset::SetSettings(const struct FSourceEffectChorusBaseSettings& Settings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetSettings");
		
		struct
		{
			struct FSourceEffectChorusBaseSettings             Settings;
		} params;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectChorusPreset.SetModulationSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSourceEffectChorusSettings                 ModulationSettings                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectChorusPreset::SetModulationSettings(const struct FSourceEffectChorusSettings& ModulationSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetModulationSettings");
		
		struct
		{
			struct FSourceEffectChorusSettings                 ModulationSettings;
		} params;
		params.ModulationSettings = ModulationSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundModulatorBase*                         Modulator                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectChorusPreset::SetFrequencyModulator(class USoundModulatorBase* Modulator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator");
		
		struct
		{
			class USoundModulatorBase*                         Modulator;
		} params;
		params.Modulator = Modulator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectChorusPreset.SetFrequency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Frequency                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectChorusPreset::SetFrequency(float Frequency)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetFrequency");
		
		struct
		{
			float                                              Frequency;
		} params;
		params.Frequency = Frequency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundModulatorBase*                         Modulator                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectChorusPreset::SetFeedbackModulator(class USoundModulatorBase* Modulator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator");
		
		struct
		{
			class USoundModulatorBase*                         Modulator;
		} params;
		params.Modulator = Modulator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectChorusPreset.SetFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectChorusPreset::SetFeedback(float Feedback)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetFeedback");
		
		struct
		{
			float                                              Feedback;
		} params;
		params.Feedback = Feedback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectChorusPreset.SetDryModulator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundModulatorBase*                         Modulator                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectChorusPreset::SetDryModulator(class USoundModulatorBase* Modulator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetDryModulator");
		
		struct
		{
			class USoundModulatorBase*                         Modulator;
		} params;
		params.Modulator = Modulator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectChorusPreset.SetDry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DryAmount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectChorusPreset::SetDry(float DryAmount)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetDry");
		
		struct
		{
			float                                              DryAmount;
		} params;
		params.DryAmount = DryAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectChorusPreset.SetDepthModulator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundModulatorBase*                         Modulator                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectChorusPreset::SetDepthModulator(class USoundModulatorBase* Modulator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetDepthModulator");
		
		struct
		{
			class USoundModulatorBase*                         Modulator;
		} params;
		params.Modulator = Modulator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectChorusPreset.SetDepth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Depth                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectChorusPreset::SetDepth(float Depth)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetDepth");
		
		struct
		{
			float                                              Depth;
		} params;
		params.Depth = Depth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USourceEffectChorusPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectChorusPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectChorusPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSourceEffectDynamicsProcessorSettings      InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectDynamicsProcessorPreset::SetSettings(const struct FSourceEffectDynamicsProcessorSettings& InSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings");
		
		struct
		{
			struct FSourceEffectDynamicsProcessorSettings      InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USourceEffectDynamicsProcessorPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectDynamicsProcessorPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectDynamicsProcessorPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvelopeFollowerListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvelopeFollowerListener::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.EnvelopeFollowerListener");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvelopeFollowerListener*                   EnvelopeFollowerListener                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectEnvelopeFollowerPreset::UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener");
		
		struct
		{
			class UEnvelopeFollowerListener*                   EnvelopeFollowerListener;
		} params;
		params.EnvelopeFollowerListener = EnvelopeFollowerListener;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSourceEffectEnvelopeFollowerSettings       InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectEnvelopeFollowerPreset::SetSettings(const struct FSourceEffectEnvelopeFollowerSettings& InSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings");
		
		struct
		{
			struct FSourceEffectEnvelopeFollowerSettings       InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvelopeFollowerListener*                   EnvelopeFollowerListener                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectEnvelopeFollowerPreset::RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener");
		
		struct
		{
			class UEnvelopeFollowerListener*                   EnvelopeFollowerListener;
		} params;
		params.EnvelopeFollowerListener = EnvelopeFollowerListener;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USourceEffectEnvelopeFollowerPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectEnvelopeFollowerPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectEnvelopeFollowerPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectEQPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSourceEffectEQSettings                     InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USourceEffectEQPreset::SetSettings(const struct FSourceEffectEQSettings& InSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEQPreset.SetSettings");
		
		struct
		{
			struct FSourceEffectEQSettings                     InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USourceEffectEQPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectEQPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectEQPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectFilterPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSourceEffectFilterSettings                 InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USourceEffectFilterPreset::SetSettings(const struct FSourceEffectFilterSettings& InSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectFilterPreset.SetSettings");
		
		struct
		{
			struct FSourceEffectFilterSettings                 InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USourceEffectFilterPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectFilterPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectFilterPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSourceEffectFoldbackDistortionSettings     InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectFoldbackDistortionPreset::SetSettings(const struct FSourceEffectFoldbackDistortionSettings& InSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings");
		
		struct
		{
			struct FSourceEffectFoldbackDistortionSettings     InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USourceEffectFoldbackDistortionPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectFoldbackDistortionPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectFoldbackDistortionPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSourceEffectMidSideSpreaderSettings        InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectMidSideSpreaderPreset::SetSettings(const struct FSourceEffectMidSideSpreaderSettings& InSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings");
		
		struct
		{
			struct FSourceEffectMidSideSpreaderSettings        InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USourceEffectMidSideSpreaderPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectMidSideSpreaderPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectMidSideSpreaderPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectPannerPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSourceEffectPannerSettings                 InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectPannerPreset::SetSettings(const struct FSourceEffectPannerSettings& InSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectPannerPreset.SetSettings");
		
		struct
		{
			struct FSourceEffectPannerSettings                 InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USourceEffectPannerPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectPannerPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectPannerPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectPhaserPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSourceEffectPhaserSettings                 InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectPhaserPreset::SetSettings(const struct FSourceEffectPhaserSettings& InSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectPhaserPreset.SetSettings");
		
		struct
		{
			struct FSourceEffectPhaserSettings                 InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USourceEffectPhaserPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectPhaserPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectPhaserPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectRingModulationPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSourceEffectRingModulationSettings         InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectRingModulationPreset::SetSettings(const struct FSourceEffectRingModulationSettings& InSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectRingModulationPreset.SetSettings");
		
		struct
		{
			struct FSourceEffectRingModulationSettings         InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USourceEffectRingModulationPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectRingModulationPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectRingModulationPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSourceEffectSimpleDelaySettings            InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectSimpleDelayPreset::SetSettings(const struct FSourceEffectSimpleDelaySettings& InSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings");
		
		struct
		{
			struct FSourceEffectSimpleDelaySettings            InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USourceEffectSimpleDelayPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectSimpleDelayPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectSimpleDelayPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectStereoDelayPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSourceEffectStereoDelaySettings            InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectStereoDelayPreset::SetSettings(const struct FSourceEffectStereoDelaySettings& InSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectStereoDelayPreset.SetSettings");
		
		struct
		{
			struct FSourceEffectStereoDelaySettings            InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USourceEffectStereoDelayPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectStereoDelayPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectStereoDelayPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SourceEffectWaveShaperPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSourceEffectWaveShaperSettings             InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectWaveShaperPreset::SetSettings(const struct FSourceEffectWaveShaperSettings& InSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectWaveShaperPreset.SetSettings");
		
		struct
		{
			struct FSourceEffectWaveShaperSettings             InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USourceEffectWaveShaperPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectWaveShaperPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectWaveShaperPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAudioImpulseResponse.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioImpulseResponse::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.AudioImpulseResponse");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubmixEffectConvolutionReverbSettings      InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectConvolutionReverbPreset::SetSettings(const struct FSubmixEffectConvolutionReverbSettings& InSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings");
		
		struct
		{
			struct FSubmixEffectConvolutionReverbSettings      InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioImpulseResponse*                       InImpulseResponse                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectConvolutionReverbPreset::SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse");
		
		struct
		{
			class UAudioImpulseResponse*                       InImpulseResponse;
		} params;
		params.InImpulseResponse = InImpulseResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USubmixEffectConvolutionReverbPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectConvolutionReverbPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SubmixEffectConvolutionReverbPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectDelayPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubmixEffectDelaySettings                  InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectDelayPreset::SetSettings(const struct FSubmixEffectDelaySettings& InSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.SetSettings");
		
		struct
		{
			struct FSubmixEffectDelaySettings                  InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectDelayPreset::SetInterpolationTime(float Time)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime");
		
		struct
		{
			float                                              Time;
		} params;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectDelayPreset.SetDelay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectDelayPreset::SetDelay(float Length)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.SetDelay");
		
		struct
		{
			float                                              Length;
		} params;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
	 * 		Flags  -> ()
	 */
	float USubmixEffectDelayPreset::GetMaxDelayInMilliseconds()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USubmixEffectDelayPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectDelayPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SubmixEffectDelayPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectFilterPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubmixEffectFilterSettings                 InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectFilterPreset::SetSettings(const struct FSubmixEffectFilterSettings& InSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetSettings");
		
		struct
		{
			struct FSubmixEffectFilterSettings                 InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectFilterPreset.SetFilterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESubmixFilterType                                  InType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectFilterPreset::SetFilterType(ESubmixFilterType InType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterType");
		
		struct
		{
			ESubmixFilterType                                  InType;
		} params;
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InQ                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectFilterPreset::SetFilterQMod(float InQ)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod");
		
		struct
		{
			float                                              InQ;
		} params;
		params.InQ = InQ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectFilterPreset.SetFilterQ
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InQ                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectFilterPreset::SetFilterQ(float InQ)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterQ");
		
		struct
		{
			float                                              InQ;
		} params;
		params.InQ = InQ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFrequency                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod(float InFrequency)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod");
		
		struct
		{
			float                                              InFrequency;
		} params;
		params.InFrequency = InFrequency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFrequency                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectFilterPreset::SetFilterCutoffFrequency(float InFrequency)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency");
		
		struct
		{
			float                                              InFrequency;
		} params;
		params.InFrequency = InFrequency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESubmixFilterAlgorithm                             InAlgorithm                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectFilterPreset::SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm");
		
		struct
		{
			ESubmixFilterAlgorithm                             InAlgorithm;
		} params;
		params.InAlgorithm = InAlgorithm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USubmixEffectFilterPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectFilterPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SubmixEffectFilterPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubmixEffectFlexiverbSettings              InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectFlexiverbPreset::SetSettings(const struct FSubmixEffectFlexiverbSettings& InSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings");
		
		struct
		{
			struct FSubmixEffectFlexiverbSettings              InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USubmixEffectFlexiverbPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectFlexiverbPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SubmixEffectFlexiverbPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubmixEffectMultibandCompressorSettings    InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectMultibandCompressorPreset::SetSettings(const struct FSubmixEffectMultibandCompressorSettings& InSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings");
		
		struct
		{
			struct FSubmixEffectMultibandCompressorSettings    InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USubmixEffectMultibandCompressorPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectMultibandCompressorPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SubmixEffectMultibandCompressorPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectStereoDelayPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubmixEffectStereoDelaySettings            InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectStereoDelayPreset::SetSettings(const struct FSubmixEffectStereoDelaySettings& InSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectStereoDelayPreset.SetSettings");
		
		struct
		{
			struct FSubmixEffectStereoDelaySettings            InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USubmixEffectStereoDelayPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectStereoDelayPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SubmixEffectStereoDelayPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectTapDelayPreset.SetTap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TapId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTapDelayInfo                               TapInfo                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectTapDelayPreset::SetTap(int32_t TapId, const struct FTapDelayInfo& TapInfo)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.SetTap");
		
		struct
		{
			int32_t                                            TapId;
			struct FTapDelayInfo                               TapInfo;
		} params;
		params.TapId = TapId;
		params.TapInfo = TapInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectTapDelayPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubmixEffectTapDelaySettings               InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectTapDelayPreset::SetSettings(const struct FSubmixEffectTapDelaySettings& InSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.SetSettings");
		
		struct
		{
			struct FSubmixEffectTapDelaySettings               InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectTapDelayPreset::SetInterpolationTime(float Time)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime");
		
		struct
		{
			float                                              Time;
		} params;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TapId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectTapDelayPreset::RemoveTap(int32_t TapId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap");
		
		struct
		{
			int32_t                                            TapId;
		} params;
		params.TapId = TapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    TapIds                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectTapDelayPreset::GetTapIds(TArray<int32_t>* TapIds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds");
		
		struct
		{
			TArray<int32_t>                                    TapIds;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TapIds != nullptr)
			*TapIds = params.TapIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectTapDelayPreset.GetTap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TapId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTapDelayInfo                               TapInfo                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectTapDelayPreset::GetTap(int32_t TapId, struct FTapDelayInfo* TapInfo)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.GetTap");
		
		struct
		{
			int32_t                                            TapId;
			struct FTapDelayInfo                               TapInfo;
		} params;
		params.TapId = TapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TapInfo != nullptr)
			*TapInfo = params.TapInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
	 * 		Flags  -> ()
	 */
	float USubmixEffectTapDelayPreset::GetMaxDelayInMilliseconds()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SubmixEffectTapDelayPreset.AddTap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TapId                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectTapDelayPreset::AddTap(int32_t* TapId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.AddTap");
		
		struct
		{
			int32_t                                            TapId;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TapId != nullptr)
			*TapId = params.TapId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USubmixEffectTapDelayPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectTapDelayPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SubmixEffectTapDelayPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.Synth2DSlider.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynth2DSlider::SetValue(const struct FVector2D& InValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetValue");
		
		struct
		{
			struct FVector2D                                   InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.Synth2DSlider.SetStepSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynth2DSlider::SetStepSize(float InValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetStepSize");
		
		struct
		{
			float                                              InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.Synth2DSlider.SetSliderHandleColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynth2DSlider::SetSliderHandleColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetSliderHandleColor");
		
		struct
		{
			struct FLinearColor                                InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.Synth2DSlider.SetLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynth2DSlider::SetLocked(bool InValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetLocked");
		
		struct
		{
			bool                                               InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.Synth2DSlider.SetIndentHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynth2DSlider::SetIndentHandle(bool InValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetIndentHandle");
		
		struct
		{
			bool                                               InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.Synth2DSlider.GetValue
	 * 		Flags  -> ()
	 */
	struct FVector2D USynth2DSlider::GetValue()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.GetValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USynth2DSlider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynth2DSlider::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.Synth2DSlider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.SetSustainGain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SustainGain                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetSustainGain(float SustainGain)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetSustainGain");
		
		struct
		{
			float                                              SustainGain;
		} params;
		params.SustainGain = SustainGain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.SetSoundWave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundWave*                                  InSoundWave                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetSoundWave(class USoundWave* InSoundWave)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetSoundWave");
		
		struct
		{
			class USoundWave*                                  InSoundWave;
		} params;
		params.InSoundWave = InSoundWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.SetScrubMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bScrubMode                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetScrubMode(bool bScrubMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetScrubMode");
		
		struct
		{
			bool                                               bScrubMode;
		} params;
		params.bScrubMode = bScrubMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.SetReleaseTimeMsec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReleaseTimeMsec                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetReleaseTimeMsec(float ReleaseTimeMsec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetReleaseTimeMsec");
		
		struct
		{
			float                                              ReleaseTimeMsec;
		} params;
		params.ReleaseTimeMsec = ReleaseTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.SetPlayheadTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InPositionSec                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LerpTimeSec                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGranularSynthSeekType                             SeekType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetPlayheadTime");
		
		struct
		{
			float                                              InPositionSec;
			float                                              LerpTimeSec;
			EGranularSynthSeekType                             SeekType;
		} params;
		params.InPositionSec = InPositionSec;
		params.LerpTimeSec = LerpTimeSec;
		params.SeekType = SeekType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.SetPlaybackSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InPlayheadRate                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetPlaybackSpeed(float InPlayheadRate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetPlaybackSpeed");
		
		struct
		{
			float                                              InPlayheadRate;
		} params;
		params.InPlayheadRate = InPlayheadRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.SetGrainVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BaseVolume                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   VolumeRange                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetGrainVolume(float BaseVolume, const struct FVector2D& VolumeRange)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainVolume");
		
		struct
		{
			float                                              BaseVolume;
			struct FVector2D                                   VolumeRange;
		} params;
		params.BaseVolume = BaseVolume;
		params.VolumeRange = VolumeRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.SetGrainsPerSecond
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InGrainsPerSecond                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetGrainsPerSecond(float InGrainsPerSecond)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainsPerSecond");
		
		struct
		{
			float                                              InGrainsPerSecond;
		} params;
		params.InGrainsPerSecond = InGrainsPerSecond;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.SetGrainProbability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InGrainProbability                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetGrainProbability(float InGrainProbability)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainProbability");
		
		struct
		{
			float                                              InGrainProbability;
		} params;
		params.InGrainProbability = InGrainProbability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.SetGrainPitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BasePitch                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   PitchRange                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetGrainPitch(float BasePitch, const struct FVector2D& PitchRange)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainPitch");
		
		struct
		{
			float                                              BasePitch;
			struct FVector2D                                   PitchRange;
		} params;
		params.BasePitch = BasePitch;
		params.PitchRange = PitchRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.SetGrainPan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BasePan                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   PanRange                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetGrainPan(float BasePan, const struct FVector2D& PanRange)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainPan");
		
		struct
		{
			float                                              BasePan;
			struct FVector2D                                   PanRange;
		} params;
		params.BasePan = BasePan;
		params.PanRange = PanRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.SetGrainEnvelopeType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGranularSynthEnvelopeType                         EnvelopeType                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainEnvelopeType");
		
		struct
		{
			EGranularSynthEnvelopeType                         EnvelopeType;
		} params;
		params.EnvelopeType = EnvelopeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.SetGrainDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BaseDurationMsec                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   DurationRange                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetGrainDuration(float BaseDurationMsec, const struct FVector2D& DurationRange)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainDuration");
		
		struct
		{
			float                                              BaseDurationMsec;
			struct FVector2D                                   DurationRange;
		} params;
		params.BaseDurationMsec = BaseDurationMsec;
		params.DurationRange = DurationRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.SetDecayTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DecayTimeMsec                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetDecayTime(float DecayTimeMsec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetDecayTime");
		
		struct
		{
			float                                              DecayTimeMsec;
		} params;
		params.DecayTimeMsec = DecayTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.SetAttackTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AttackTimeMsec                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetAttackTime(float AttackTimeMsec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetAttackTime");
		
		struct
		{
			float                                              AttackTimeMsec;
		} params;
		params.AttackTimeMsec = AttackTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.NoteOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Note                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Velocity                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::NoteOn(float Note, int32_t Velocity, float Duration)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.NoteOn");
		
		struct
		{
			float                                              Note;
			int32_t                                            Velocity;
			float                                              Duration;
		} params;
		params.Note = Note;
		params.Velocity = Velocity;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.NoteOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Note                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bKill                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::NoteOff(float Note, bool bKill)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.NoteOff");
		
		struct
		{
			float                                              Note;
			bool                                               bKill;
		} params;
		params.Note = Note;
		params.bKill = bKill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.IsLoaded
	 * 		Flags  -> ()
	 */
	bool UGranularSynth::IsLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.IsLoaded");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.GetSampleDuration
	 * 		Flags  -> ()
	 */
	float UGranularSynth::GetSampleDuration()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.GetSampleDuration");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.GranularSynth.GetCurrentPlayheadTime
	 * 		Flags  -> ()
	 */
	float UGranularSynth::GetCurrentPlayheadTime()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.GetCurrentPlayheadTime");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGranularSynth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGranularSynth::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.GranularSynth");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMonoWaveTableSynthPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMonoWaveTableSynthPreset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.MonoWaveTableSynthPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InPosition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetWaveTablePosition(float InPosition)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition");
		
		struct
		{
			float                                              InPosition;
		} params;
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InSustainPedalState                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetSustainPedalState(bool InSustainPedalState)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState");
		
		struct
		{
			bool                                               InSustainPedalState;
		} params;
		params.InSustainPedalState = InSustainPedalState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESynthLFOType                                      InLfoType                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPosLfoType(ESynthLFOType InLfoType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType");
		
		struct
		{
			ESynthLFOType                                      InLfoType;
		} params;
		params.InLfoType = InLfoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InLfoFrequency                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPosLfoFrequency(float InLfoFrequency)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency");
		
		struct
		{
			float                                              InLfoFrequency;
		} params;
		params.InLfoFrequency = InLfoFrequency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InLfoDepth                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPosLfoDepth(float InLfoDepth)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth");
		
		struct
		{
			float                                              InLfoDepth;
		} params;
		params.InLfoDepth = InLfoDepth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSustainGain                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain(float InSustainGain)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain");
		
		struct
		{
			float                                              InSustainGain;
		} params;
		params.InSustainGain = InSustainGain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InReleaseTimeMsec                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime");
		
		struct
		{
			float                                              InReleaseTimeMsec;
		} params;
		params.InReleaseTimeMsec = InReleaseTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInInvert                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPositionEnvelopeInvert(bool bInInvert)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert");
		
		struct
		{
			bool                                               bInInvert;
		} params;
		params.bInInvert = bInInvert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDepth                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPositionEnvelopeDepth(float InDepth)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth");
		
		struct
		{
			float                                              InDepth;
		} params;
		params.InDepth = InDepth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDecayTimeMsec                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime(float InDecayTimeMsec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime");
		
		struct
		{
			float                                              InDecayTimeMsec;
		} params;
		params.InDecayTimeMsec = InDecayTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInBiasInvert                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert(bool bInBiasInvert)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert");
		
		struct
		{
			bool                                               bInBiasInvert;
		} params;
		params.bInBiasInvert = bInBiasInvert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDepth                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth(float InDepth)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth");
		
		struct
		{
			float                                              InDepth;
		} params;
		params.InDepth = InDepth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAttackTimeMsec                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime(float InAttackTimeMsec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime");
		
		struct
		{
			float                                              InAttackTimeMsec;
		} params;
		params.InAttackTimeMsec = InAttackTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InNewQ                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetLowPassFilterResonance(float InNewQ)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance");
		
		struct
		{
			float                                              InNewQ;
		} params;
		params.InNewQ = InNewQ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMidiNote                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFrequencyWithMidiNote(float InMidiNote)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote");
		
		struct
		{
			float                                              InMidiNote;
		} params;
		params.InMidiNote = InMidiNote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FrequencyOffsetCents                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFrequencyPitchBend(float FrequencyOffsetCents)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend");
		
		struct
		{
			float                                              FrequencyOffsetCents;
		} params;
		params.FrequencyOffsetCents = FrequencyOffsetCents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFrequency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FrequencyHz                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFrequency(float FrequencyHz)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFrequency");
		
		struct
		{
			float                                              FrequencyHz;
		} params;
		params.FrequencyHz = FrequencyHz;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSustainGain                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain(float InSustainGain)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain");
		
		struct
		{
			float                                              InSustainGain;
		} params;
		params.InSustainGain = InSustainGain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InReleaseTimeMsec                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime");
		
		struct
		{
			float                                              InReleaseTimeMsec;
		} params;
		params.InReleaseTimeMsec = InReleaseTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDecayTimeMsec                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime(float InDecayTimeMsec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime");
		
		struct
		{
			float                                              InDecayTimeMsec;
		} params;
		params.InDecayTimeMsec = InDecayTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInInvert                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFilterEnvelopeInvert(bool bInInvert)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert");
		
		struct
		{
			bool                                               bInInvert;
		} params;
		params.bInInvert = bInInvert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDepth                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFilterEnvelopeDepth(float InDepth)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth");
		
		struct
		{
			float                                              InDepth;
		} params;
		params.InDepth = InDepth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInBiasInvert                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert(bool bInBiasInvert)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert");
		
		struct
		{
			bool                                               bInBiasInvert;
		} params;
		params.bInBiasInvert = bInBiasInvert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDepth                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth(float InDepth)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth");
		
		struct
		{
			float                                              InDepth;
		} params;
		params.InDepth = InDepth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAttackTimeMsec                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime(float InAttackTimeMsec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime");
		
		struct
		{
			float                                              InAttackTimeMsec;
		} params;
		params.InAttackTimeMsec = InAttackTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TableIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            KeyframeIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewValue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USynthComponentMonoWaveTable::SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue");
		
		struct
		{
			int32_t                                            TableIndex;
			int32_t                                            KeyframeIndex;
			float                                              NewValue;
		} params;
		params.TableIndex = TableIndex;
		params.KeyframeIndex = KeyframeIndex;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TableIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InNewTangent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USynthComponentMonoWaveTable::SetCurveTangent(int32_t TableIndex, float InNewTangent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent");
		
		struct
		{
			int32_t                                            TableIndex;
			float                                              InNewTangent;
		} params;
		params.TableIndex = TableIndex;
		params.InNewTangent = InNewTangent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECurveInterpolationType                            InterpolationType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TableIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USynthComponentMonoWaveTable::SetCurveInterpolationType(ECurveInterpolationType InterpolationType, int32_t TableIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType");
		
		struct
		{
			ECurveInterpolationType                            InterpolationType;
			int32_t                                            TableIndex;
		} params;
		params.InterpolationType = InterpolationType;
		params.TableIndex = TableIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSustainGain                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain(float InSustainGain)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain");
		
		struct
		{
			float                                              InSustainGain;
		} params;
		params.InSustainGain = InSustainGain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InReleaseTimeMsec                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime");
		
		struct
		{
			float                                              InReleaseTimeMsec;
		} params;
		params.InReleaseTimeMsec = InReleaseTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInInvert                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetAmpEnvelopeInvert(bool bInInvert)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert");
		
		struct
		{
			bool                                               bInInvert;
		} params;
		params.bInInvert = bInInvert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDepth                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetAmpEnvelopeDepth(float InDepth)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth");
		
		struct
		{
			float                                              InDepth;
		} params;
		params.InDepth = InDepth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDecayTimeMsec                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime(float InDecayTimeMsec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime");
		
		struct
		{
			float                                              InDecayTimeMsec;
		} params;
		params.InDecayTimeMsec = InDecayTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInBiasInvert                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert(bool bInBiasInvert)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert");
		
		struct
		{
			bool                                               bInBiasInvert;
		} params;
		params.bInBiasInvert = bInBiasInvert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDepth                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth(float InDepth)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth");
		
		struct
		{
			float                                              InDepth;
		} params;
		params.InDepth = InDepth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAttackTimeMsec                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime(float InAttackTimeMsec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime");
		
		struct
		{
			float                                              InAttackTimeMsec;
		} params;
		params.InAttackTimeMsec = InAttackTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::RefreshWaveTable(int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
	 * 		Flags  -> ()
	 */
	void USynthComponentMonoWaveTable::RefreshAllWaveTables()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.NoteOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMidiNote                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InVelocity                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::NoteOn(float InMidiNote, float InVelocity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.NoteOn");
		
		struct
		{
			float                                              InMidiNote;
			float                                              InVelocity;
		} params;
		params.InMidiNote = InMidiNote;
		params.InVelocity = InVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.NoteOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMidiNote                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::NoteOff(float InMidiNote)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.NoteOff");
		
		struct
		{
			float                                              InMidiNote;
		} params;
		params.InMidiNote = InMidiNote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
	 * 		Flags  -> ()
	 */
	int32_t USynthComponentMonoWaveTable::GetNumTableEntries()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
	 * 		Flags  -> ()
	 */
	int32_t USynthComponentMonoWaveTable::GetMaxTableIndex()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TableIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<float> USynthComponentMonoWaveTable::GetKeyFrameValuesForTable(float TableIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable");
		
		struct
		{
			float                                              TableIndex;
		} params;
		params.TableIndex = TableIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TableIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USynthComponentMonoWaveTable::GetCurveTangent(int32_t TableIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent");
		
		struct
		{
			int32_t                                            TableIndex;
		} params;
		params.TableIndex = TableIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USynthComponentMonoWaveTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynthComponentMonoWaveTable::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SynthComponentMonoWaveTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentToneGenerator.SetVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InVolume                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentToneGenerator::SetVolume(float InVolume)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentToneGenerator.SetVolume");
		
		struct
		{
			float                                              InVolume;
		} params;
		params.InVolume = InVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthComponentToneGenerator.SetFrequency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFrequency                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentToneGenerator::SetFrequency(float InFrequency)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentToneGenerator.SetFrequency");
		
		struct
		{
			float                                              InFrequency;
		} params;
		params.InFrequency = InFrequency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USynthComponentToneGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynthComponentToneGenerator::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SynthComponentToneGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthSamplePlayer.SetSoundWave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundWave*                                  InSoundWave                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthSamplePlayer::SetSoundWave(class USoundWave* InSoundWave)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetSoundWave");
		
		struct
		{
			class USoundWave*                                  InSoundWave;
		} params;
		params.InSoundWave = InSoundWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InScrubTimeWidthSec                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthSamplePlayer::SetScrubTimeWidth(float InScrubTimeWidthSec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth");
		
		struct
		{
			float                                              InScrubTimeWidthSec;
		} params;
		params.InScrubTimeWidthSec = InScrubTimeWidthSec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthSamplePlayer.SetScrubMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bScrubMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthSamplePlayer::SetScrubMode(bool bScrubMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetScrubMode");
		
		struct
		{
			bool                                               bScrubMode;
		} params;
		params.bScrubMode = bScrubMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthSamplePlayer.SetPitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InPitch                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeSec                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthSamplePlayer::SetPitch(float InPitch, float TimeSec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetPitch");
		
		struct
		{
			float                                              InPitch;
			float                                              TimeSec;
		} params;
		params.InPitch = InPitch;
		params.TimeSec = TimeSec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthSamplePlayer.SeekToTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeSec                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESamplePlayerSeekType                              SeekType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWrap                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthSamplePlayer::SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SeekToTime");
		
		struct
		{
			float                                              TimeSec;
			ESamplePlayerSeekType                              SeekType;
			bool                                               bWrap;
		} params;
		params.TimeSec = TimeSec;
		params.SeekType = SeekType;
		params.bWrap = bWrap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthSamplePlayer.IsLoaded
	 * 		Flags  -> ()
	 */
	bool USynthSamplePlayer::IsLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.IsLoaded");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthSamplePlayer.GetSampleDuration
	 * 		Flags  -> ()
	 */
	float USynthSamplePlayer::GetSampleDuration()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.GetSampleDuration");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
	 * 		Flags  -> ()
	 */
	float USynthSamplePlayer::GetCurrentPlaybackProgressTime()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
	 * 		Flags  -> ()
	 */
	float USynthSamplePlayer::GetCurrentPlaybackProgressPercent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USynthSamplePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynthSamplePlayer::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SynthSamplePlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InLinearValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InDomainMin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InDomainMax                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRangeMin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRangeMax                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USynthesisUtilitiesBlueprintFunctionLibrary::GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency");
		
		struct
		{
			float                                              InLinearValue;
			float                                              InDomainMin;
			float                                              InDomainMax;
			float                                              InRangeMin;
			float                                              InRangeMax;
		} params;
		params.InLinearValue = InLinearValue;
		params.InDomainMin = InDomainMin;
		params.InDomainMax = InDomainMax;
		params.InRangeMin = InRangeMin;
		params.InRangeMax = InRangeMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InLogFrequencyValue                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InDomainMin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InDomainMax                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRangeMin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRangeMax                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USynthesisUtilitiesBlueprintFunctionLibrary::GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency");
		
		struct
		{
			float                                              InLogFrequencyValue;
			float                                              InDomainMin;
			float                                              InDomainMax;
			float                                              InRangeMin;
			float                                              InRangeMax;
		} params;
		params.InLogFrequencyValue = InLogFrequencyValue;
		params.InDomainMin = InDomainMin;
		params.InDomainMax = InDomainMax;
		params.InRangeMin = InRangeMin;
		params.InRangeMax = InRangeMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USynthesisUtilitiesBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynthesisUtilitiesBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthKnob.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthKnob::SetValue(float InValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.SetValue");
		
		struct
		{
			float                                              InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthKnob.SetStepSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthKnob::SetStepSize(float InValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.SetStepSize");
		
		struct
		{
			float                                              InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthKnob.SetLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthKnob::SetLocked(bool InValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.SetLocked");
		
		struct
		{
			bool                                               InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Synthesis.SynthKnob.GetValue
	 * 		Flags  -> ()
	 */
	float USynthKnob::GetValue()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.GetValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USynthKnob.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynthKnob::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SynthKnob");
		return ptr;
	}

}


