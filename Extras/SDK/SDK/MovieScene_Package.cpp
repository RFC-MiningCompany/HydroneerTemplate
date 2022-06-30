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
	 * 		Name   -> PredefindFunction UMovieSceneSignedObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSignedObject::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSignedObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneTrack::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneNameableTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneNameableTrack::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSection.SetRowIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewRowIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSection::SetRowIndex(int32_t NewRowIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetRowIndex");
		
		struct
		{
			int32_t                                            NewRowIndex;
		} params;
		params.NewRowIndex = NewRowIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSection.SetPreRollFrames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InPreRollFrames                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSection::SetPreRollFrames(int32_t InPreRollFrames)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetPreRollFrames");
		
		struct
		{
			int32_t                                            InPreRollFrames;
		} params;
		params.InPreRollFrames = InPreRollFrames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSection.SetPostRollFrames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InPostRollFrames                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSection::SetPostRollFrames(int32_t InPostRollFrames)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetPostRollFrames");
		
		struct
		{
			int32_t                                            InPostRollFrames;
		} params;
		params.InPostRollFrames = InPostRollFrames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSection.SetOverlapPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewPriority                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSection::SetOverlapPriority(int32_t NewPriority)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetOverlapPriority");
		
		struct
		{
			int32_t                                            NewPriority;
		} params;
		params.NewPriority = NewPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSection.SetIsLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsLocked                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSection::SetIsLocked(bool bInIsLocked)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetIsLocked");
		
		struct
		{
			bool                                               bInIsLocked;
		} params;
		params.bInIsLocked = bInIsLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSection.SetIsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsActive                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSection::SetIsActive(bool bInIsActive)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetIsActive");
		
		struct
		{
			bool                                               bInIsActive;
		} params;
		params.bInIsActive = bInIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSection.SetCompletionMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMovieSceneCompletionMode                          InCompletionMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSection::SetCompletionMode(EMovieSceneCompletionMode InCompletionMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetCompletionMode");
		
		struct
		{
			EMovieSceneCompletionMode                          InCompletionMode;
		} params;
		params.InCompletionMode = InCompletionMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSection.SetBlendType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMovieSceneBlendType                               InBlendType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSection::SetBlendType(EMovieSceneBlendType InBlendType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetBlendType");
		
		struct
		{
			EMovieSceneBlendType                               InBlendType;
		} params;
		params.InBlendType = InBlendType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSection.IsLocked
	 * 		Flags  -> ()
	 */
	bool UMovieSceneSection::IsLocked()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.IsLocked");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSection.IsActive
	 * 		Flags  -> ()
	 */
	bool UMovieSceneSection::IsActive()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.IsActive");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSection.GetRowIndex
	 * 		Flags  -> ()
	 */
	int32_t UMovieSceneSection::GetRowIndex()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetRowIndex");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSection.GetPreRollFrames
	 * 		Flags  -> ()
	 */
	int32_t UMovieSceneSection::GetPreRollFrames()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetPreRollFrames");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSection.GetPostRollFrames
	 * 		Flags  -> ()
	 */
	int32_t UMovieSceneSection::GetPostRollFrames()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetPostRollFrames");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSection.GetOverlapPriority
	 * 		Flags  -> ()
	 */
	int32_t UMovieSceneSection::GetOverlapPriority()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetOverlapPriority");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSection.GetCompletionMode
	 * 		Flags  -> ()
	 */
	EMovieSceneCompletionMode UMovieSceneSection::GetCompletionMode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetCompletionMode");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSection.GetBlendType
	 * 		Flags  -> ()
	 */
	struct FOptionalMovieSceneBlendType UMovieSceneSection::GetBlendType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetBlendType");
		
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
	 * 		Name   -> PredefindFunction UMovieSceneSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSection::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequence.FindBindingsByTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InBindingName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequence::FindBindingsByTag(const class FName& InBindingName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequence.FindBindingsByTag");
		
		struct
		{
			class FName                                        InBindingName;
		} params;
		params.InBindingName = InBindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequence.FindBindingByTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InBindingName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FMovieSceneObjectBindingID UMovieSceneSequence::FindBindingByTag(const class FName& InBindingName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequence.FindBindingByTag");
		
		struct
		{
			class FName                                        InBindingName;
		} params;
		params.InBindingName = InBindingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSequence::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
	 * 		Flags  -> ()
	 */
	void UMovieSceneSequencePlayer::StopAtCurrentTime()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.Stop
	 * 		Flags  -> ()
	 */
	void UMovieSceneSequencePlayer::Stop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Stop");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::SetTimeRange(float StartTime, float Duration)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetTimeRange");
		
		struct
		{
			float                                              StartTime;
			float                                              Duration;
		} params;
		params.StartTime = StartTime;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlayRate");
		
		struct
		{
			float                                              PlayRate;
		} params;
		params.PlayRate = PlayRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMovieSceneSequencePlaybackParams           PlaybackParams                                             (Parm, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::SetPlaybackPosition(const struct FMovieSceneSequencePlaybackParams& PlaybackParams)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition");
		
		struct
		{
			struct FMovieSceneSequencePlaybackParams           PlaybackParams;
		} params;
		params.PlaybackParams = PlaybackParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameRate                                  FrameRate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::SetFrameRate(const struct FFrameRate& FrameRate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRate");
		
		struct
		{
			struct FFrameRate                                  FrameRate;
		} params;
		params.FrameRate = FrameRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StartFrame                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SubFrames                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRange");
		
		struct
		{
			int32_t                                            StartFrame;
			int32_t                                            Duration;
			float                                              SubFrames;
		} params;
		params.StartFrame = StartFrame;
		params.Duration = Duration;
		params.SubFrames = SubFrames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInDisableCameraCuts                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts");
		
		struct
		{
			bool                                               bInDisableCameraCuts;
		} params;
		params.bInDisableCameraCuts = bInDisableCameraCuts;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeInSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds");
		
		struct
		{
			float                                              TimeInSeconds;
		} params;
		params.TimeInSeconds = TimeInSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InLabel                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneSequencePlayer::ScrubToMarkedFrame(const class FString& InLabel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame");
		
		struct
		{
			class FString                                      InLabel;
		} params;
		params.InLabel = InLabel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameTime                                  NewPosition                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::ScrubToFrame(const struct FFrameTime& NewPosition)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame");
		
		struct
		{
			struct FFrameTime                                  NewPosition;
		} params;
		params.NewPosition = NewPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.Scrub
	 * 		Flags  -> ()
	 */
	void UMovieSceneSequencePlayer::Scrub()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Scrub");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameTime                                  StoppedTime                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::RPC_OnStopEvent(const struct FFrameTime& StoppedTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent");
		
		struct
		{
			struct FFrameTime                                  StoppedTime;
		} params;
		params.StoppedTime = StoppedTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUpdatePositionMethod                              Method                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameTime                                  RelevantTime                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent");
		
		struct
		{
			EUpdatePositionMethod                              Method;
			struct FFrameTime                                  RelevantTime;
		} params;
		params.Method = Method;
		params.RelevantTime = RelevantTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeInSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds");
		
		struct
		{
			float                                              TimeInSeconds;
		} params;
		params.TimeInSeconds = TimeInSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InLabel                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneSequencePlayer::PlayToMarkedFrame(const class FString& InLabel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame");
		
		struct
		{
			class FString                                      InLabel;
		} params;
		params.InLabel = InLabel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameTime                                  NewPosition                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::PlayToFrame(const struct FFrameTime& NewPosition)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToFrame");
		
		struct
		{
			struct FFrameTime                                  NewPosition;
		} params;
		params.NewPosition = NewPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMovieSceneSequencePlaybackParams           PlaybackParams                                             (Parm, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::PlayTo(const struct FMovieSceneSequencePlaybackParams& PlaybackParams)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayTo");
		
		struct
		{
			struct FMovieSceneSequencePlaybackParams           PlaybackParams;
		} params;
		params.PlaybackParams = PlaybackParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayReverse
	 * 		Flags  -> ()
	 */
	void UMovieSceneSequencePlayer::PlayReverse()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayReverse");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayLooping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumLoops                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::PlayLooping(int32_t NumLoops)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayLooping");
		
		struct
		{
			int32_t                                            NumLoops;
		} params;
		params.NumLoops = NumLoops;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.Play
	 * 		Flags  -> ()
	 */
	void UMovieSceneSequencePlayer::Play()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Play");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.Pause
	 * 		Flags  -> ()
	 */
	void UMovieSceneSequencePlayer::Pause()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Pause");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeInSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds");
		
		struct
		{
			float                                              TimeInSeconds;
		} params;
		params.TimeInSeconds = TimeInSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InLabel                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneSequencePlayer::JumpToMarkedFrame(const class FString& InLabel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame");
		
		struct
		{
			class FString                                      InLabel;
		} params;
		params.InLabel = InLabel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameTime                                  NewPosition                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSequencePlayer::JumpToFrame(const struct FFrameTime& NewPosition)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToFrame");
		
		struct
		{
			struct FFrameTime                                  NewPosition;
		} params;
		params.NewPosition = NewPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.IsReversed
	 * 		Flags  -> ()
	 */
	bool UMovieSceneSequencePlayer::IsReversed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsReversed");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.IsPlaying
	 * 		Flags  -> ()
	 */
	bool UMovieSceneSequencePlayer::IsPlaying()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPlaying");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.IsPaused
	 * 		Flags  -> ()
	 */
	bool UMovieSceneSequencePlayer::IsPaused()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPaused");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
	 * 		Flags  -> ()
	 */
	void UMovieSceneSequencePlayer::GoToEndAndStop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetStartTime
	 * 		Flags  -> ()
	 */
	struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetStartTime()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetStartTime");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
	 * 		Flags  -> ()
	 */
	float UMovieSceneSequencePlayer::GetPlayRate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlayRate");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequencePlayer::GetObjectBindings(class UObject* InObject)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings");
		
		struct
		{
			class UObject*                                     InObject;
		} params;
		params.InObject = InObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
	 * 		Flags  -> ()
	 */
	struct FFrameRate UMovieSceneSequencePlayer::GetFrameRate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameRate");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
	 * 		Flags  -> ()
	 */
	int32_t UMovieSceneSequencePlayer::GetFrameDuration()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetEndTime
	 * 		Flags  -> ()
	 */
	struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetEndTime()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetEndTime");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetDuration
	 * 		Flags  -> ()
	 */
	struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetDuration()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDuration");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
	 * 		Flags  -> ()
	 */
	bool UMovieSceneSequencePlayer::GetDisableCameraCuts()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
	 * 		Flags  -> ()
	 */
	struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetCurrentTime()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime");
		
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
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  ObjectBinding                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UObject*> UMovieSceneSequencePlayer::GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects");
		
		struct
		{
			struct FMovieSceneObjectBindingID                  ObjectBinding;
		} params;
		params.ObjectBinding = ObjectBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
	 * 		Flags  -> ()
	 */
	void UMovieSceneSequencePlayer::ChangePlaybackDirection()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection");
		
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
	 * 		Name   -> PredefindFunction UMovieSceneSequencePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSequencePlayer::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSequencePlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSubSection.SetSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneSubSection::SetSequence(class UMovieSceneSequence* Sequence)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSubSection.SetSequence");
		
		struct
		{
			class UMovieSceneSequence*                         Sequence;
		} params;
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneSubSection.GetSequence
	 * 		Flags  -> ()
	 */
	class UMovieSceneSequence* UMovieSceneSubSection::GetSequence()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSubSection.GetSequence");
		
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
	 * 		Name   -> PredefindFunction UMovieSceneSubSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSubSection::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSubSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneEntitySystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEntitySystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneEntitySystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneSubTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSubTrack::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSubTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneCustomClockSource.OnTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InPlayRate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneCustomClockSource::OnTick(float DeltaSeconds, float InPlayRate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnTick");
		
		struct
		{
			float                                              DeltaSeconds;
			float                                              InPlayRate;
		} params;
		params.DeltaSeconds = DeltaSeconds;
		params.InPlayRate = InPlayRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQualifiedFrameTime                         InStopTime                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneCustomClockSource::OnStopPlaying(const struct FQualifiedFrameTime& InStopTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying");
		
		struct
		{
			struct FQualifiedFrameTime                         InStopTime;
		} params;
		params.InStopTime = InStopTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQualifiedFrameTime                         InStartTime                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneCustomClockSource::OnStartPlaying(const struct FQualifiedFrameTime& InStartTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying");
		
		struct
		{
			struct FQualifiedFrameTime                         InStartTime;
		} params;
		params.InStartTime = InStartTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQualifiedFrameTime                         InCurrentTime                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InPlayRate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UMovieSceneCustomClockSource::OnRequestCurrentTime(const struct FQualifiedFrameTime& InCurrentTime, float InPlayRate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime");
		
		struct
		{
			struct FQualifiedFrameTime                         InCurrentTime;
			float                                              InPlayRate;
		} params;
		params.InCurrentTime = InCurrentTime;
		params.InPlayRate = InPlayRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCustomClockSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCustomClockSource::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneCustomClockSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneEntityProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEntityProvider::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneEntityProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScenePlaybackClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePlaybackClient::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieScenePlaybackClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneTrackTemplateProducer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneTrackTemplateProducer::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneTrackTemplateProducer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNodeAndChannelMappings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNodeAndChannelMappings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.NodeAndChannelMappings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneNodeGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneNodeGroup::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneNodeGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneNodeGroupCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneNodeGroupCollection::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneNodeGroupCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScene.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieScene");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneBindingOverrides.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneBindingOverrides::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOverrides");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneBindingOwnerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneBindingOwnerInterface::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOwnerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneBlenderSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneBlenderSystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneBlenderSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneBoolSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneBoolSection::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneBoolSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneEntityInstantiatorSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEntityInstantiatorSystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneEntityInstantiatorSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneGenericBoundObjectInstantiator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneGenericBoundObjectInstantiator::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneGenericBoundObjectInstantiator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneBoundSceneComponentInstantiator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneBoundSceneComponentInstantiator::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneBoundSceneComponentInstantiator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneSceneComponentImpersonator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSceneComponentImpersonator::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSceneComponentImpersonator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCompiledData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCompiledData::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneCompiledData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCompiledDataManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCompiledDataManager::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneCompiledDataManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneFloatDecomposer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneFloatDecomposer::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneFloatDecomposer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneBuiltInEasingFunction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneBuiltInEasingFunction::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneBuiltInEasingFunction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneEasingExternalCurve.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEasingExternalCurve::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingExternalCurve");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieScene.MovieSceneEasingFunction.OnEvaluate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Interp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMovieSceneEasingFunction::OnEvaluate(float Interp)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneEasingFunction.OnEvaluate");
		
		struct
		{
			float                                              Interp;
		} params;
		params.Interp = Interp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneEasingFunction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEasingFunction::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingFunction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneEntitySystemLinker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEntitySystemLinker::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneEntitySystemLinker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneEvalTimeSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEvalTimeSystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneEvalTimeSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneFolder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneFolder::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneFolder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneKeyProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneKeyProxy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneKeyProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneMasterInstantiatorSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneMasterInstantiatorSystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneMasterInstantiatorSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScenePreAnimatedStateSystemInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePreAnimatedStateSystemInterface::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieScenePreAnimatedStateSystemInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCachePreAnimatedStateSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCachePreAnimatedStateSystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneCachePreAnimatedStateSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneRestorePreAnimatedStateSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneRestorePreAnimatedStateSystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneRestorePreAnimatedStateSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneSequenceTickManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSequenceTickManager::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSequenceTickManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneSpawnablesSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSpawnablesSystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSpawnablesSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneSpawnSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSpawnSection::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSpawnSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneSpawnTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSpawnTrack::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSpawnTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTestMovieSceneTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestMovieSceneTrack::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.TestMovieSceneTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTestMovieSceneSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestMovieSceneSection::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTestMovieSceneSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestMovieSceneSequence::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTestMovieSceneSubTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestMovieSceneSubTrack::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSubTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTestMovieSceneSubSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestMovieSceneSubSection::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSubSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneTrackInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneTrackInstance::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneTrackInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneTrackInstanceInstantiator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneTrackInstanceInstantiator::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneTrackInstanceInstantiator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneTrackInstanceSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneTrackInstanceSystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneTrackInstanceSystem");
		return ptr;
	}

}


