﻿/**
 * Name: Hydroneer
 * Version: 2.0H
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
	 * 		Name   -> PredefindFunction UMovieScenePropertyTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePropertyTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePropertyTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFloatChannelEvaluatorSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFloatChannelEvaluatorSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.FloatChannelEvaluatorSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
	 * 		Flags  -> ()
	 */
	struct FTransform UMovieSceneTransformOrigin::BP_GetTransformOrigin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin"));
		
		struct
		{
			struct FTransform                                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneTransformOrigin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneTransformOrigin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneTransformOrigin"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  InConstraintBindingID                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieScene3DConstraintSection::SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID"));
		
		struct
		{
			struct FMovieSceneObjectBindingID                  InConstraintBindingID;
		} params;
		params.InConstraintBindingID = InConstraintBindingID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
	 * 		Flags  -> ()
	 */
	struct FMovieSceneObjectBindingID UMovieScene3DConstraintSection::GetConstraintBindingID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID"));
		
		struct
		{
			struct FMovieSceneObjectBindingID                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScene3DConstraintSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene3DConstraintSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DConstraintSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScene3DAttachSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene3DAttachSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DAttachSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScene3DConstraintTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene3DConstraintTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DConstraintTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScene3DAttachTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene3DAttachTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DAttachTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScene3DPathSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene3DPathSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DPathSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScene3DPathTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene3DPathTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DPathTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScenePropertySystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePropertySystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePropertySystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScene3DTransformPropertySystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene3DTransformPropertySystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DTransformPropertySystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScene3DTransformSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene3DTransformSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DTransformSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScene3DTransformTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene3DTransformTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScene3DTransformTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneActorReferenceSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneActorReferenceSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneActorReferenceSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneActorReferenceTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneActorReferenceTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneActorReferenceTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                InStartOffset                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneAudioSection::SetStartOffset(const struct FFrameNumber& InStartOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset"));
		
		struct
		{
			struct FFrameNumber                                InStartOffset;
		} params;
		params.InStartOffset = InStartOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneAudioSection.SetSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  InSound                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneAudioSection::SetSound(class USoundBase* InSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneAudioSection.SetSound"));
		
		struct
		{
			class USoundBase*                                  InSound;
		} params;
		params.InSound = InSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
	 * 		Flags  -> ()
	 */
	struct FFrameNumber UMovieSceneAudioSection::GetStartOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset"));
		
		struct
		{
			struct FFrameNumber                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneAudioSection.GetSound
	 * 		Flags  -> ()
	 */
	class USoundBase* UMovieSceneAudioSection::GetSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneAudioSection.GetSound"));
		
		struct
		{
			class USoundBase*                                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneAudioSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAudioSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneAudioSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneAudioTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAudioTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneAudioTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneBaseValueEvaluatorSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneBaseValueEvaluatorSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneBoolTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneBoolTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneBoolTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneByteSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneByteSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneByteSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneByteTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneByteTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneByteTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCameraAnimSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraAnimSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraAnimSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCameraAnimTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraAnimTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraAnimTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  InCameraBindingID                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneCameraCutSection::SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID"));
		
		struct
		{
			struct FMovieSceneObjectBindingID                  InCameraBindingID;
		} params;
		params.InCameraBindingID = InCameraBindingID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
	 * 		Flags  -> ()
	 */
	struct FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID"));
		
		struct
		{
			struct FMovieSceneObjectBindingID                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCameraCutSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraCutSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraCutSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCameraCutTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraCutTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraCutTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCameraCutTrackInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraCutTrackInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraCutTrackInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCameraShakeSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraShakeSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraShakeSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCameraShakeSourceShakeSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraShakeSourceShakeSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCameraShakeSourceShakeTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraShakeSourceShakeTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCameraShakeSourceTriggerSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraShakeSourceTriggerSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCameraShakeSourceTriggerTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraShakeSourceTriggerTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCameraShakeTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraShakeTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCameraShakeTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InShotDisplayName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneCinematicShotSection::SetShotDisplayName(const class FString& InShotDisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName"));
		
		struct
		{
			class FString                                      InShotDisplayName;
		} params;
		params.InShotDisplayName = InShotDisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
	 * 		Flags  -> ()
	 */
	class FString UMovieSceneCinematicShotSection::GetShotDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName"));
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCinematicShotSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCinematicShotSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCinematicShotSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCinematicShotTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCinematicShotTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneCinematicShotTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneColorSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneColorSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneColorSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneColorTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneColorTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneColorTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneComponentAttachmentInvalidatorSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneComponentAttachmentInvalidatorSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneComponentAttachmentSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneComponentAttachmentSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneComponentAttachmentSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneComponentMobilitySystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneComponentMobilitySystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneComponentMobilitySystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScenePreAnimatedComponentTransformSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePreAnimatedComponentTransformSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePreAnimatedComponentTransformSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneComponentTransformSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneComponentTransformSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneComponentTransformSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneEnumSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEnumSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEnumSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneEnumTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEnumTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEnumTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneEulerTransformPropertySystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEulerTransformPropertySystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneEulerTransformTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEulerTransformTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEulerTransformTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneEventSectionBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEventSectionBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEventSectionBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneEventRepeaterSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEventRepeaterSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEventRepeaterSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneEventSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEventSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEventSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneEventSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEventSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEventSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScenePreSpawnEventSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePreSpawnEventSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePreSpawnEventSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScenePostSpawnEventSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePostSpawnEventSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePostSpawnEventSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScenePostEvalEventSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePostEvalEventSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePostEvalEventSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneEventTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEventTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEventTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneEventTriggerSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEventTriggerSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneEventTriggerSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneFadeSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneFadeSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneFadeSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneFloatTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneFloatTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneFloatTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneFadeTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneFadeTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneFadeTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneFloatPropertySystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneFloatPropertySystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneFloatPropertySystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneFloatSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneFloatSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneFloatSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneHierarchicalBiasSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneHierarchicalBiasSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneIntegerSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneIntegerSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneIntegerSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneIntegerTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneIntegerTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneIntegerTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneInterrogatedPropertyInstantiatorSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneInterrogatedPropertyInstantiatorSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		MovieSceneTracks_ELevelVisibility                  InVisibility                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneLevelVisibilitySection::SetVisibility(MovieSceneTracks_ELevelVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility"));
		
		struct
		{
			MovieSceneTracks_ELevelVisibility                  InVisibility;
		} params;
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                InLevelNames                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneLevelVisibilitySection::SetLevelNames(TArray<class FName> InLevelNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames"));
		
		struct
		{
			TArray<class FName>                                InLevelNames;
		} params;
		params.InLevelNames = InLevelNames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
	 * 		Flags  -> ()
	 */
	MovieSceneTracks_ELevelVisibility UMovieSceneLevelVisibilitySection::GetVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility"));
		
		struct
		{
			MovieSceneTracks_ELevelVisibility                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
	 * 		Flags  -> ()
	 */
	TArray<class FName> UMovieSceneLevelVisibilitySection::GetLevelNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames"));
		
		struct
		{
			TArray<class FName>                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneLevelVisibilitySection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneLevelVisibilitySection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneLevelVisibilitySection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneLevelVisibilitySystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneLevelVisibilitySystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneLevelVisibilitySystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneLevelVisibilityTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneLevelVisibilityTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneLevelVisibilityTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneMaterialTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneMaterialTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneMaterialTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneMaterialParameterCollectionTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneMaterialParameterCollectionTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneComponentMaterialTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneComponentMaterialTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneComponentMaterialTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneObjectPropertySection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneObjectPropertySection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneObjectPropertySection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneObjectPropertyTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneObjectPropertyTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneObjectPropertyTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneParameterSection::RemoveVectorParameter(const class FName& InParameterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter"));
		
		struct
		{
			class FName                                        InParameterName;
			bool                                               ReturnValue;
		} params;
		params.InParameterName = InParameterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneParameterSection::RemoveVector2DParameter(const class FName& InParameterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter"));
		
		struct
		{
			class FName                                        InParameterName;
			bool                                               ReturnValue;
		} params;
		params.InParameterName = InParameterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneParameterSection::RemoveTransformParameter(const class FName& InParameterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter"));
		
		struct
		{
			class FName                                        InParameterName;
			bool                                               ReturnValue;
		} params;
		params.InParameterName = InParameterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneParameterSection::RemoveScalarParameter(const class FName& InParameterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter"));
		
		struct
		{
			class FName                                        InParameterName;
			bool                                               ReturnValue;
		} params;
		params.InParameterName = InParameterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneParameterSection::RemoveColorParameter(const class FName& InParameterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter"));
		
		struct
		{
			class FName                                        InParameterName;
			bool                                               ReturnValue;
		} params;
		params.InParameterName = InParameterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneParameterSection::RemoveBoolParameter(const class FName& InParameterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter"));
		
		struct
		{
			class FName                                        InParameterName;
			bool                                               ReturnValue;
		} params;
		params.InParameterName = InParameterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
	 * 		Flags  -> ()
	 */
	void UMovieSceneParameterSection::GetParameterNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                InTime                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneParameterSection::AddVectorParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey"));
		
		struct
		{
			class FName                                        InParameterName;
			struct FFrameNumber                                InTime;
			struct FVector                                     InValue;
		} params;
		params.InParameterName = InParameterName;
		params.InTime = InTime;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                InTime                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneParameterSection::AddVector2DParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector2D& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey"));
		
		struct
		{
			class FName                                        InParameterName;
			struct FFrameNumber                                InTime;
			struct FVector2D                                   InValue;
		} params;
		params.InParameterName = InParameterName;
		params.InTime = InTime;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                InTime                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InValue                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneParameterSection::AddTransformParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, const struct FTransform& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey"));
		
		struct
		{
			class FName                                        InParameterName;
			struct FFrameNumber                                InTime;
			struct FTransform                                  InValue;
		} params;
		params.InParameterName = InParameterName;
		params.InTime = InTime;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                InTime                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneParameterSection::AddScalarParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey"));
		
		struct
		{
			class FName                                        InParameterName;
			struct FFrameNumber                                InTime;
			float                                              InValue;
		} params;
		params.InParameterName = InParameterName;
		params.InTime = InTime;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                InTime                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneParameterSection::AddColorParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey"));
		
		struct
		{
			class FName                                        InParameterName;
			struct FFrameNumber                                InTime;
			struct FLinearColor                                InValue;
		} params;
		params.InParameterName = InParameterName;
		params.InTime = InTime;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                InTime                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneParameterSection::AddBoolParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey"));
		
		struct
		{
			class FName                                        InParameterName;
			struct FFrameNumber                                InTime;
			bool                                               InValue;
		} params;
		params.InParameterName = InParameterName;
		params.InTime = InTime;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneParameterSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneParameterSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneParameterSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneParticleParameterTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneParticleParameterTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneParticleParameterTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneParticleSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneParticleSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneParticleSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneParticleTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneParticleTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneParticleTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScenePiecewiseFloatBlenderSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePiecewiseFloatBlenderSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScenePrimitiveMaterialSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePrimitiveMaterialSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePrimitiveMaterialSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScenePrimitiveMaterialTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePrimitiveMaterialTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScenePropertyInstantiatorSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePropertyInstantiatorSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneQuaternionInterpolationRotationSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneQuaternionInterpolationRotationSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneSkeletalAnimationSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSkeletalAnimationSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneSkeletalAnimationTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSkeletalAnimationTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneSlomoSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSlomoSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneSlomoSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneSlomoTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSlomoTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneSlomoTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneStringSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneStringSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneStringSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneStringTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneStringTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneStringTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneTransformOriginSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneTransformOriginSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneTransformOriginSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneTransformTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneTransformTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneTransformTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneVectorSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneVectorSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneVectorSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneVectorTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneVectorTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneVectorTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneVisibilityTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneVisibilityTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneVisibilityTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneHierarchicalEasingInstantiatorSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneHierarchicalEasingInstantiatorSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeightAndEasingEvaluatorSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeightAndEasingEvaluatorSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MovieSceneTracks.WeightAndEasingEvaluatorSystem"));
		return ptr;
	}

}


