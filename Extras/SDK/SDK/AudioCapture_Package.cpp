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
	 * 		Name   -> Function AudioCapture.AudioCapture.StopCapturingAudio
	 * 		Flags  -> ()
	 */
	void UAudioCapture::StopCapturingAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.StopCapturingAudio");
		
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
	 * 		Name   -> Function AudioCapture.AudioCapture.StartCapturingAudio
	 * 		Flags  -> ()
	 */
	void UAudioCapture::StartCapturingAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.StartCapturingAudio");
		
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
	 * 		Name   -> Function AudioCapture.AudioCapture.IsCapturingAudio
	 * 		Flags  -> ()
	 */
	bool UAudioCapture::IsCapturingAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.IsCapturingAudio");
		
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
	 * 		Name   -> Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAudioCaptureDeviceInfo                     OutInfo                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAudioCapture::GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo* OutInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo");
		
		struct
		{
			struct FAudioCaptureDeviceInfo                     OutInfo;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInfo != nullptr)
			*OutInfo = params.OutInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAudioCapture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioCapture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioCapture.AudioCapture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
	 * 		Flags  -> ()
	 */
	class UAudioCapture* UAudioCaptureFunctionLibrary::CreateAudioCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture");
		
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
	 * 		Name   -> PredefindFunction UAudioCaptureFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioCaptureFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioCapture.AudioCaptureFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAudioCaptureComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioCaptureComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioCapture.AudioCaptureComponent");
		return ptr;
	}

}


