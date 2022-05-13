/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * 		Name   -> Function AudioMixer.SynthComponent.Stop
	 * 		Flags  -> ()
	 */
	void USynthComponent::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.Stop");
		
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
	 * 		Name   -> Function AudioMixer.SynthComponent.Start
	 * 		Flags  -> ()
	 */
	void USynthComponent::Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.Start");
		
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
	 * 		Name   -> Function AudioMixer.SynthComponent.SetVolumeMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponent::SetVolumeMultiplier(float VolumeMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetVolumeMultiplier");
		
		struct
		{
			float                                              VolumeMultiplier;
		} params;
		params.VolumeMultiplier = VolumeMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.SynthComponent.SetSubmixSend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundSubmixBase*                            Submix                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SendLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponent::SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetSubmixSend");
		
		struct
		{
			class USoundSubmixBase*                            Submix;
			float                                              SendLevel;
		} params;
		params.Submix = Submix;
		params.SendLevel = SendLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.SynthComponent.SetLowPassFilterFrequency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InLowPassFilterFrequency                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponent::SetLowPassFilterFrequency(float InLowPassFilterFrequency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetLowPassFilterFrequency");
		
		struct
		{
			float                                              InLowPassFilterFrequency;
		} params;
		params.InLowPassFilterFrequency = InLowPassFilterFrequency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.SynthComponent.SetLowPassFilterEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InLowPassFilterEnabled                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponent::SetLowPassFilterEnabled(bool InLowPassFilterEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetLowPassFilterEnabled");
		
		struct
		{
			bool                                               InLowPassFilterEnabled;
		} params;
		params.InLowPassFilterEnabled = InLowPassFilterEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.SynthComponent.IsPlaying
	 * 		Flags  -> ()
	 */
	bool USynthComponent::IsPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.IsPlaying");
		
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
	 * 		Name   -> PredefindFunction USynthComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynthComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SynthComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAudioGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.AudioGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMegabytesToFree                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAudioMixerBlueprintLibrary::TrimAudioCache(float InMegabytesToFree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache");
		
		struct
		{
			float                                              InMegabytesToFree;
		} params;
		params.InMegabytesToFree = InMegabytesToFree;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAudioRecordingExportType                          ExportType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToRecord                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundWave*                                  ExistingSoundWaveToOverwrite                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USoundWave* UAudioMixerBlueprintLibrary::StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const class FString& Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			EAudioRecordingExportType                          ExportType;
			class FString                                      Name;
			class FString                                      Path;
			class USoundSubmix*                                SubmixToRecord;
			class USoundWave*                                  ExistingSoundWaveToOverwrite;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ExportType = ExportType;
		params.Name = Name;
		params.Path = Path;
		params.SubmixToRecord = SubmixToRecord;
		params.ExistingSoundWaveToOverwrite = ExistingSoundWaveToOverwrite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAudioBus*                                   AudioBus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::StopAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UAudioBus*                                   AudioBus;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.AudioBus = AudioBus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToStopAnalyzing                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USoundSubmix*                                SubmixToStopAnalyzing;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SubmixToStopAnalyzing = SubmixToStopAnalyzing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ExpectedDuration                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToRecord                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			float                                              ExpectedDuration;
			class USoundSubmix*                                SubmixToRecord;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ExpectedDuration = ExpectedDuration;
		params.SubmixToRecord = SubmixToRecord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAudioBus*                                   AudioBus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::StartAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UAudioBus*                                   AudioBus;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.AudioBus = AudioBus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToAnalyze                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFFTSize                                           FFTSize                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFFTPeakInterpolationMethod                        InterpolationMethod                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFFTWindowType                                     WindowType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HopSize                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAudioSpectrumType                                 SpectrumType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USoundSubmix*                                SubmixToAnalyze;
			EFFTSize                                           FFTSize;
			EFFTPeakInterpolationMethod                        InterpolationMethod;
			EFFTWindowType                                     WindowType;
			float                                              HopSize;
			EAudioSpectrumType                                 SpectrumType;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SubmixToAnalyze = SubmixToAnalyze;
		params.FFTSize = FFTSize;
		params.InterpolationMethod = InterpolationMethod;
		params.WindowType = WindowType;
		params.HopSize = HopSize;
		params.SpectrumType = SpectrumType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SoundSubmix                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class USoundEffectSubmixPreset*>            SubmixEffectPresetChain                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              FadeTimeSec                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::SetSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, TArray<class USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USoundSubmix*                                SoundSubmix;
			TArray<class USoundEffectSubmixPreset*>            SubmixEffectPresetChain;
			float                                              FadeTimeSec;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SoundSubmix = SoundSubmix;
		params.SubmixEffectPresetChain = SubmixEffectPresetChain;
		params.FadeTimeSec = FadeTimeSec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSourcePresetChain*               PresetChain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EntryIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBypassed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USoundEffectSourcePresetChain*               PresetChain;
			int32_t                                            EntryIndex;
			bool                                               bBypassed;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PresetChain = PresetChain;
		params.EntryIndex = EntryIndex;
		params.bBypassed = bBypassed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToPause                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USoundSubmix*                                SubmixToPause;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SubmixToPause = SubmixToPause;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                InSoundSubmix                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SubmixChainIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSubmixPreset*                    SubmixEffectPreset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USoundSubmix*                                InSoundSubmix;
			int32_t                                            SubmixChainIndex;
			class USoundEffectSubmixPreset*                    SubmixEffectPreset;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.InSoundSubmix = InSoundSubmix;
		params.SubmixChainIndex = SubmixChainIndex;
		params.SubmixEffectPreset = SubmixEffectPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SoundSubmix                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SubmixChainIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32_t SubmixChainIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USoundSubmix*                                SoundSubmix;
			int32_t                                            SubmixChainIndex;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SoundSubmix = SoundSubmix;
		params.SubmixChainIndex = SubmixChainIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SoundSubmix                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSubmixPreset*                    SubmixEffectPreset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USoundSubmix*                                SoundSubmix;
			class USoundEffectSubmixPreset*                    SubmixEffectPreset;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SoundSubmix = SoundSubmix;
		params.SubmixEffectPreset = SubmixEffectPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSourcePresetChain*               PresetChain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EntryIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USoundEffectSourcePresetChain*               PresetChain;
			int32_t                                            EntryIndex;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PresetChain = PresetChain;
		params.EntryIndex = EntryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSubmixPreset*                    SubmixEffectPreset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USoundEffectSubmixPreset*                    SubmixEffectPreset;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SubmixEffectPreset = SubmixEffectPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundWave*                                  SoundWave                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnLoadCompletion                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::PrimeSoundForPlayback(class USoundWave* SoundWave, const class FScriptDelegate& OnLoadCompletion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback");
		
		struct
		{
			class USoundWave*                                  SoundWave;
			class FScriptDelegate                              OnLoadCompletion;
		} params;
		params.SoundWave = SoundWave;
		params.OnLoadCompletion = OnLoadCompletion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundCue*                                   SoundCue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::PrimeSoundCueForPlayback(class USoundCue* SoundCue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback");
		
		struct
		{
			class USoundCue*                                   SoundCue;
		} params;
		params.SoundCue = SoundCue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToPause                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USoundSubmix*                                SubmixToPause;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SubmixToPause = SubmixToPause;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAudioSpectrumBandPresetType                       InBandPresetType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InNumBands                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InAttackTimeMsec                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InReleaseTimeMsec                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings");
		
		struct
		{
			EAudioSpectrumBandPresetType                       InBandPresetType;
			int32_t                                            InNumBands;
			int32_t                                            InAttackTimeMsec;
			int32_t                                            InReleaseTimeMsec;
		} params;
		params.InBandPresetType = InBandPresetType;
		params.InNumBands = InNumBands;
		params.InAttackTimeMsec = InAttackTimeMsec;
		params.InReleaseTimeMsec = InReleaseTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InNumSemitones                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMusicalNoteName                                   InStartingMusicalNote                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InStartingOctave                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InAttackTimeMsec                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InReleaseTimeMsec                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings");
		
		struct
		{
			int32_t                                            InNumSemitones;
			EMusicalNoteName                                   InStartingMusicalNote;
			int32_t                                            InStartingOctave;
			int32_t                                            InAttackTimeMsec;
			int32_t                                            InReleaseTimeMsec;
		} params;
		params.InNumSemitones = InNumSemitones;
		params.InStartingMusicalNote = InStartingMusicalNote;
		params.InStartingOctave = InStartingOctave;
		params.InAttackTimeMsec = InAttackTimeMsec;
		params.InReleaseTimeMsec = InReleaseTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InNumBands                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InMinimumFrequency                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InMaximumFrequency                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InAttackTimeMsec                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InReleaseTimeMsec                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings");
		
		struct
		{
			int32_t                                            InNumBands;
			float                                              InMinimumFrequency;
			float                                              InMaximumFrequency;
			int32_t                                            InAttackTimeMsec;
			int32_t                                            InReleaseTimeMsec;
		} params;
		params.InNumBands = InNumBands;
		params.InMinimumFrequency = InMinimumFrequency;
		params.InMaximumFrequency = InMaximumFrequency;
		params.InAttackTimeMsec = InAttackTimeMsec;
		params.InReleaseTimeMsec = InReleaseTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAudioBus*                                   AudioBus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAudioMixerBlueprintLibrary::IsAudioBusActive(class UObject* WorldContextObject, class UAudioBus* AudioBus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UAudioBus*                                   AudioBus;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.AudioBus = AudioBus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Frequencies                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Phases                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToAnalyze                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<float>                                      Frequencies;
			TArray<float>                                      Phases;
			class USoundSubmix*                                SubmixToAnalyze;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Frequencies = Frequencies;
		params.SubmixToAnalyze = SubmixToAnalyze;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Phases != nullptr)
			*Phases = params.Phases;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSourcePresetChain*               PresetChain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USoundEffectSourcePresetChain*               PresetChain;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PresetChain = PresetChain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Frequencies                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Magnitudes                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToAnalyze                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<float>                                      Frequencies;
			TArray<float>                                      Magnitudes;
			class USoundSubmix*                                SubmixToAnalyze;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Frequencies = Frequencies;
		params.SubmixToAnalyze = SubmixToAnalyze;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Magnitudes != nullptr)
			*Magnitudes = params.Magnitudes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SoundSubmix                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USoundSubmix*                                SoundSubmix;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SoundSubmix = SoundSubmix;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SoundSubmix                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FadeTimeSec                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::ClearSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USoundSubmix*                                SoundSubmix;
			float                                              FadeTimeSec;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SoundSubmix = SoundSubmix;
		params.FadeTimeSec = FadeTimeSec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::ClearMasterSubmixEffects(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SoundSubmix                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSubmixPreset*                    SubmixEffectPreset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioMixerBlueprintLibrary::AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USoundSubmix*                                SoundSubmix;
			class USoundEffectSubmixPreset*                    SubmixEffectPreset;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SoundSubmix = SoundSubmix;
		params.SubmixEffectPreset = SubmixEffectPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSourcePresetChain*               PresetChain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSourceEffectChainEntry                     Entry                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USoundEffectSourcePresetChain*               PresetChain;
			struct FSourceEffectChainEntry                     Entry;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PresetChain = PresetChain;
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSubmixPreset*                    SubmixEffectPreset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class USoundEffectSubmixPreset*                    SubmixEffectPreset;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SubmixEffectPreset = SubmixEffectPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAudioMixerBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioMixerBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.AudioMixerBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EQuartzCommandQuantization                         InQuantizationBoundary                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::UnsubscribeFromTimeDivision(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			EQuartzCommandQuantization                         InQuantizationBoundary;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.InQuantizationBoundary = InQuantizationBoundary;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::UnsubscribeFromAllTimeDivisions(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EQuartzCommandQuantization                         InQuantizationBoundary                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnQuantizationEvent                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::SubscribeToQuantizationEvent(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const class FScriptDelegate& OnQuantizationEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			EQuartzCommandQuantization                         InQuantizationBoundary;
			class FScriptDelegate                              OnQuantizationEvent;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.InQuantizationBoundary = InQuantizationBoundary;
		params.OnQuantizationEvent = OnQuantizationEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnQuantizationEvent                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::SubscribeToAllQuantizationEvents(class UObject* WorldContextObject, const class FScriptDelegate& OnQuantizationEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FScriptDelegate                              OnQuantizationEvent;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.OnQuantizationEvent = OnQuantizationEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.SetTicksPerSecond
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuartzQuantizationBoundary                 QuantizationBoundary                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		float                                              TicksPerSecond                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::SetTicksPerSecond(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, float TicksPerSecond)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SetTicksPerSecond");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FQuartzQuantizationBoundary                 QuantizationBoundary;
			class FScriptDelegate                              Delegate;
			float                                              TicksPerSecond;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.QuantizationBoundary = QuantizationBoundary;
		params.Delegate = Delegate;
		params.TicksPerSecond = TicksPerSecond;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuartzQuantizationBoundary                 QuantizationBoundary                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		float                                              ThirtySecondsNotesPerMinute                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::SetThirtySecondNotesPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, float ThirtySecondsNotesPerMinute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FQuartzQuantizationBoundary                 QuantizationBoundary;
			class FScriptDelegate                              Delegate;
			float                                              ThirtySecondsNotesPerMinute;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.QuantizationBoundary = QuantizationBoundary;
		params.Delegate = Delegate;
		params.ThirtySecondsNotesPerMinute = ThirtySecondsNotesPerMinute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.SetSecondsPerTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuartzQuantizationBoundary                 QuantizationBoundary                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		float                                              SecondsPerTick                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::SetSecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, float SecondsPerTick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SetSecondsPerTick");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FQuartzQuantizationBoundary                 QuantizationBoundary;
			class FScriptDelegate                              Delegate;
			float                                              SecondsPerTick;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.QuantizationBoundary = QuantizationBoundary;
		params.Delegate = Delegate;
		params.SecondsPerTick = SecondsPerTick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuartzQuantizationBoundary                 QuantizationBoundary                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		float                                              MillisecondsPerTick                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::SetMillisecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, float MillisecondsPerTick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FQuartzQuantizationBoundary                 QuantizationBoundary;
			class FScriptDelegate                              Delegate;
			float                                              MillisecondsPerTick;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.QuantizationBoundary = QuantizationBoundary;
		params.Delegate = Delegate;
		params.MillisecondsPerTick = MillisecondsPerTick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuartzQuantizationBoundary                 QuantizationBoundary                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		float                                              BeatsPerMinute                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::SetBeatsPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, float BeatsPerMinute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FQuartzQuantizationBoundary                 QuantizationBoundary;
			class FScriptDelegate                              Delegate;
			float                                              BeatsPerMinute;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.QuantizationBoundary = QuantizationBoundary;
		params.Delegate = Delegate;
		params.BeatsPerMinute = BeatsPerMinute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.ResumeClock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::ResumeClock(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.ResumeClock");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.ResetTransport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InDelegate                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::ResetTransport(class UObject* WorldContextObject, const class FScriptDelegate& InDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.ResetTransport");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FScriptDelegate                              InDelegate;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.InDelegate = InDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.PauseClock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuartzClockHandle::PauseClock(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.PauseClock");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.GetTicksPerSecond
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzClockHandle::GetTicksPerSecond(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.GetTicksPerSecond");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzClockHandle::GetThirtySecondNotesPerMinute(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.GetSecondsPerTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzClockHandle::GetSecondsPerTick(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.GetSecondsPerTick");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzClockHandle::GetMillisecondsPerTick(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzClockHandle::GetBeatsPerMinute(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UQuartzClockHandle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuartzClockHandle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.QuartzClockHandle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubmixEffectDynamicsProcessorSettings      Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectDynamicsProcessorPreset::SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings");
		
		struct
		{
			struct FSubmixEffectDynamicsProcessorSettings      Settings;
		} params;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundSubmix*                                Submix                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectDynamicsProcessorPreset::SetExternalSubmix(class USoundSubmix* Submix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix");
		
		struct
		{
			class USoundSubmix*                                Submix;
		} params;
		params.Submix = Submix;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USubmixEffectDynamicsProcessorPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectDynamicsProcessorPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SubmixEffectDynamicsProcessorPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubmixEffectSubmixEQSettings               InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectSubmixEQPreset::SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings");
		
		struct
		{
			struct FSubmixEffectSubmixEQSettings               InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USubmixEffectSubmixEQPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectSubmixEQPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SubmixEffectSubmixEQPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UReverbEffect*                               InReverbEffect                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WetLevel                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DryLevel                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectReverbPreset::SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect");
		
		struct
		{
			class UReverbEffect*                               InReverbEffect;
			float                                              WetLevel;
			float                                              DryLevel;
		} params;
		params.InReverbEffect = InReverbEffect;
		params.WetLevel = WetLevel;
		params.DryLevel = DryLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.SubmixEffectReverbPreset.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubmixEffectReverbSettings                 InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectReverbPreset::SetSettings(const struct FSubmixEffectReverbSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettings");
		
		struct
		{
			struct FSubmixEffectReverbSettings                 InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USubmixEffectReverbPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectReverbPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzSubsystem::GetRoundTripMinLatency(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzSubsystem::GetRoundTripMaxLatency(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzSubsystem::GetRoundTripAverageLatency(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetHandleForClock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ClockName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UQuartzClockHandle* UQuartzSubsystem::GetHandleForClock(class UObject* WorldContextObject, const class FName& ClockName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetHandleForClock");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FName                                        ClockName;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ClockName = ClockName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMinLatency(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMaxLatency(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UQuartzSubsystem::GetGameThreadToAudioRenderThreadAverageLatency(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
	 * 		Flags  -> ()
	 */
	float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMinLatency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency");
		
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
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
	 * 		Flags  -> ()
	 */
	float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMaxLatency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency");
		
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
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
	 * 		Flags  -> ()
	 */
	float UQuartzSubsystem::GetAudioRenderThreadToGameThreadAverageLatency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency");
		
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
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.DoesClockExist
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ClockName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UQuartzSubsystem::DoesClockExist(class UObject* WorldContextObject, const class FName& ClockName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.DoesClockExist");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FName                                        ClockName;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ClockName = ClockName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioMixer.QuartzSubsystem.CreateNewClock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ClockName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuartzClockSettings                        InSettings                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideSettingsIfClockExists                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UQuartzClockHandle* UQuartzSubsystem::CreateNewClock(class UObject* WorldContextObject, const class FName& ClockName, const struct FQuartzClockSettings& InSettings, bool bOverrideSettingsIfClockExists)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.CreateNewClock");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FName                                        ClockName;
			struct FQuartzClockSettings                        InSettings;
			bool                                               bOverrideSettingsIfClockExists;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ClockName = ClockName;
		params.InSettings = InSettings;
		params.bOverrideSettingsIfClockExists = bOverrideSettingsIfClockExists;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UQuartzSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuartzSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.QuartzSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USynthSound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynthSound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SynthSound");
		return ptr;
	}

}


