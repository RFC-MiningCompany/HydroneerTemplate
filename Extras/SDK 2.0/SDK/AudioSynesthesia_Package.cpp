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
	 * 		Name   -> PredefindFunction UAudioSynesthesiaNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioSynesthesiaNRTSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioSynesthesia.AudioSynesthesiaNRTSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAudioSynesthesiaNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioSynesthesiaNRT::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioSynesthesia.AudioSynesthesiaNRT");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UConstantQNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstantQNRTSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioSynesthesia.ConstantQNRTSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutConstantQ                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UConstantQNRT::GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>* OutConstantQ)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime");
		
		struct
		{
			float                                              InSeconds;
			int32_t                                            InChannel;
			TArray<float>                                      OutConstantQ;
		} params;
		params.InSeconds = InSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConstantQ != nullptr)
			*OutConstantQ = params.OutConstantQ;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutConstantQ                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UConstantQNRT::GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>* OutConstantQ)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime");
		
		struct
		{
			float                                              InSeconds;
			int32_t                                            InChannel;
			TArray<float>                                      OutConstantQ;
		} params;
		params.InSeconds = InSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConstantQ != nullptr)
			*OutConstantQ = params.OutConstantQ;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UConstantQNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstantQNRT::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioSynesthesia.ConstantQNRT");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULoudnessNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoudnessNRTSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioSynesthesia.LoudnessNRTSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutLoudness                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoudnessNRT::GetNormalizedLoudnessAtTime(float InSeconds, float* OutLoudness)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime");
		
		struct
		{
			float                                              InSeconds;
			float                                              OutLoudness;
		} params;
		params.InSeconds = InSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLoudness != nullptr)
			*OutLoudness = params.OutLoudness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutLoudness                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoudnessNRT::GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float* OutLoudness)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime");
		
		struct
		{
			float                                              InSeconds;
			int32_t                                            InChannel;
			float                                              OutLoudness;
		} params;
		params.InSeconds = InSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLoudness != nullptr)
			*OutLoudness = params.OutLoudness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutLoudness                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoudnessNRT::GetLoudnessAtTime(float InSeconds, float* OutLoudness)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime");
		
		struct
		{
			float                                              InSeconds;
			float                                              OutLoudness;
		} params;
		params.InSeconds = InSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLoudness != nullptr)
			*OutLoudness = params.OutLoudness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutLoudness                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoudnessNRT::GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float* OutLoudness)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime");
		
		struct
		{
			float                                              InSeconds;
			int32_t                                            InChannel;
			float                                              OutLoudness;
		} params;
		params.InSeconds = InSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLoudness != nullptr)
			*OutLoudness = params.OutLoudness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULoudnessNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoudnessNRT::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioSynesthesia.LoudnessNRT");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOnsetNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnsetNRTSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioSynesthesia.OnsetNRTSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InStartSeconds                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InEndSeconds                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutOnsetTimestamps                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutOnsetStrengths                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UOnsetNRT::GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes");
		
		struct
		{
			float                                              InStartSeconds;
			float                                              InEndSeconds;
			int32_t                                            InChannel;
			TArray<float>                                      OutOnsetTimestamps;
			TArray<float>                                      OutOnsetStrengths;
		} params;
		params.InStartSeconds = InStartSeconds;
		params.InEndSeconds = InEndSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOnsetTimestamps != nullptr)
			*OutOnsetTimestamps = params.OutOnsetTimestamps;
		if (OutOnsetStrengths != nullptr)
			*OutOnsetStrengths = params.OutOnsetStrengths;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InStartSeconds                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InEndSeconds                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutOnsetTimestamps                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutOnsetStrengths                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UOnsetNRT::GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes");
		
		struct
		{
			float                                              InStartSeconds;
			float                                              InEndSeconds;
			int32_t                                            InChannel;
			TArray<float>                                      OutOnsetTimestamps;
			TArray<float>                                      OutOnsetStrengths;
		} params;
		params.InStartSeconds = InStartSeconds;
		params.InEndSeconds = InEndSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOnsetTimestamps != nullptr)
			*OutOnsetTimestamps = params.OutOnsetTimestamps;
		if (OutOnsetStrengths != nullptr)
			*OutOnsetStrengths = params.OutOnsetStrengths;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOnsetNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnsetNRT::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioSynesthesia.OnsetNRT");
		return ptr;
	}

}


