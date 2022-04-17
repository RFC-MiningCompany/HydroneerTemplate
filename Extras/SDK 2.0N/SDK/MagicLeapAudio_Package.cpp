/**
 * Name: Hydroneer
 * Version: 2.0N
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
	 * 		Name   -> Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackUnpluggedDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapAudioFunctionLibrary::SetOnAudioJackUnpluggedDelegate(const class FScriptDelegate& ResultDelegate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackUnpluggedDelegate"));
		
		UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackPluggedDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapAudioFunctionLibrary::SetOnAudioJackPluggedDelegate(const class FScriptDelegate& ResultDelegate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackPluggedDelegate"));
		
		UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetMicMute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMuted                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapAudioFunctionLibrary::SetMicMute(bool IsMuted)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetMicMute"));
		
		UMagicLeapAudioFunctionLibrary_SetMicMute_Params params {};
		params.IsMuted = IsMuted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.IsMicMuted
	 * 		Flags  -> ()
	 */
	bool UMagicLeapAudioFunctionLibrary::IsMicMuted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.IsMicMuted"));
		
		UMagicLeapAudioFunctionLibrary_IsMicMuted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapAudioFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapAudioFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MagicLeapAudio.MagicLeapAudioFunctionLibrary"));
		return ptr;
	}

}


