﻿/**
 * Name: Hydroneer
 * Version: 2.0F
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTemplateSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTemplateSequence::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TemplateSequence.TemplateSequence"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCameraAnimationSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraAnimationSequence::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TemplateSequence.CameraAnimationSequence"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USequenceCameraShakeCameraStandIn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequenceCameraShakeCameraStandIn::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TemplateSequence.SequenceCameraShakeCameraStandIn"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USequenceCameraShake.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequenceCameraShake::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TemplateSequence.SequenceCameraShake"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USequenceCameraShakeSequencePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequenceCameraShakeSequencePlayer::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TemplateSequence.SequenceCameraShakeSequencePlayer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function TemplateSequence.TemplateSequenceActor.SetSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTemplateSequence*                           InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATemplateSequenceActor::SetSequence(class UTemplateSequence* InSequence)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TemplateSequence.TemplateSequenceActor.SetSequence"));
		
		struct
		{
			class UTemplateSequence*                           InSequence;
		} params;
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function TemplateSequence.TemplateSequenceActor.SetBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATemplateSequenceActor::SetBinding(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TemplateSequence.TemplateSequenceActor.SetBinding"));
		
		struct
		{
			class AActor*                                      Actor;
		} params;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function TemplateSequence.TemplateSequenceActor.LoadSequence
	 * 		Flags  -> ()
	 */
	class UTemplateSequence* ATemplateSequenceActor::LoadSequence()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TemplateSequence.TemplateSequenceActor.LoadSequence"));
		
		struct
		{
			class UTemplateSequence*                           ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	 * 		Flags  -> ()
	 */
	class UTemplateSequencePlayer* ATemplateSequenceActor::GetSequencePlayer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer"));
		
		struct
		{
			class UTemplateSequencePlayer*                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function TemplateSequence.TemplateSequenceActor.GetSequence
	 * 		Flags  -> ()
	 */
	class UTemplateSequence* ATemplateSequenceActor::GetSequence()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TemplateSequence.TemplateSequenceActor.GetSequence"));
		
		struct
		{
			class UTemplateSequence*                           ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ATemplateSequenceActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATemplateSequenceActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TemplateSequence.TemplateSequenceActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTemplateSequence*                           TemplateSequence                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMovieSceneSequencePlaybackSettings         Settings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class ATemplateSequenceActor*                      OutActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTemplateSequencePlayer* UTemplateSequencePlayer::CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UTemplateSequence*                           TemplateSequence;
			struct FMovieSceneSequencePlaybackSettings         Settings;
			class ATemplateSequenceActor*                      OutActor;
			class UTemplateSequencePlayer*                     ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.TemplateSequence = TemplateSequence;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActor != nullptr)
			*OutActor = params.OutActor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTemplateSequencePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTemplateSequencePlayer::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TemplateSequence.TemplateSequencePlayer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTemplateSequenceSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTemplateSequenceSection::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TemplateSequence.TemplateSequenceSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTemplateSequenceSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTemplateSequenceSystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TemplateSequence.TemplateSequenceSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTemplateSequenceTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTemplateSequenceTrack::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TemplateSequence.TemplateSequenceTrack"));
		return ptr;
	}

}


