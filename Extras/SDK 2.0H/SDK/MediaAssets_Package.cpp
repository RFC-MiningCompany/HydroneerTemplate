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
	 * 		Name   -> Function MediaAssets.MediaSource.Validate
	 * 		Flags  -> ()
	 */
	bool UMediaSource::Validate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.Validate"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaSource.SetMediaOptionString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaSource::SetMediaOptionString(const class FName& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.SetMediaOptionString"));
		
		struct
		{
			class FName                                        Key;
			class FString                                      Value;
		} params;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaSource.SetMediaOptionInt64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaSource::SetMediaOptionInt64(const class FName& Key, int64_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.SetMediaOptionInt64"));
		
		struct
		{
			class FName                                        Key;
			int64_t                                            Value;
		} params;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaSource.SetMediaOptionFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaSource::SetMediaOptionFloat(const class FName& Key, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.SetMediaOptionFloat"));
		
		struct
		{
			class FName                                        Key;
			float                                              Value;
		} params;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaSource.SetMediaOptionBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaSource::SetMediaOptionBool(const class FName& Key, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.SetMediaOptionBool"));
		
		struct
		{
			class FName                                        Key;
			bool                                               Value;
		} params;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaSource.GetUrl
	 * 		Flags  -> ()
	 */
	class FString UMediaSource::GetUrl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.GetUrl"));
		
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
	 * 		Name   -> PredefindFunction UMediaSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.MediaSource"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseMediaSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseMediaSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.BaseMediaSource"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.FileMediaSource.SetFilePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFileMediaSource::SetFilePath(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.FileMediaSource.SetFilePath"));
		
		struct
		{
			class FString                                      Path;
		} params;
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFileMediaSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFileMediaSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.FileMediaSource"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FMediaCaptureDevice>                 OutDevices                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Filter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaBlueprintFunctionLibrary::EnumerateWebcamCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32_t Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices"));
		
		struct
		{
			TArray<struct FMediaCaptureDevice>                 OutDevices;
			int32_t                                            Filter;
		} params;
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDevices != nullptr)
			*OutDevices = params.OutDevices;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FMediaCaptureDevice>                 OutDevices                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Filter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaBlueprintFunctionLibrary::EnumerateVideoCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32_t Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices"));
		
		struct
		{
			TArray<struct FMediaCaptureDevice>                 OutDevices;
			int32_t                                            Filter;
		} params;
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDevices != nullptr)
			*OutDevices = params.OutDevices;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FMediaCaptureDevice>                 OutDevices                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Filter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaBlueprintFunctionLibrary::EnumerateAudioCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32_t Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices"));
		
		struct
		{
			TArray<struct FMediaCaptureDevice>                 OutDevices;
			int32_t                                            Filter;
		} params;
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDevices != nullptr)
			*OutDevices = params.OutDevices;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMediaBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.MediaBlueprintFunctionLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaComponent.GetMediaTexture
	 * 		Flags  -> ()
	 */
	class UMediaTexture* UMediaComponent::GetMediaTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaComponent.GetMediaTexture"));
		
		struct
		{
			class UMediaTexture*                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaComponent.GetMediaPlayer
	 * 		Flags  -> ()
	 */
	class UMediaPlayer* UMediaComponent::GetMediaPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaComponent.GetMediaPlayer"));
		
		struct
		{
			class UMediaPlayer*                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMediaComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.MediaComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMediaTimeStampInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaTimeStampInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.MediaTimeStampInfo"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.SupportsSeeking
	 * 		Flags  -> ()
	 */
	bool UMediaPlayer::SupportsSeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SupportsSeeking"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.SupportsScrubbing
	 * 		Flags  -> ()
	 */
	bool UMediaPlayer::SupportsScrubbing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SupportsScrubbing"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.SupportsRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Unthinned                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SupportsRate"));
		
		struct
		{
			float                                              Rate;
			bool                                               Unthinned;
			bool                                               ReturnValue;
		} params;
		params.Rate = Rate;
		params.Unthinned = Unthinned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetViewRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Absolute                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::SetViewRotation(const struct FRotator& Rotation, bool Absolute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetViewRotation"));
		
		struct
		{
			struct FRotator                                    Rotation;
			bool                                               Absolute;
			bool                                               ReturnValue;
		} params;
		params.Rotation = Rotation;
		params.Absolute = Absolute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetViewField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Horizontal                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Vertical                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Absolute                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::SetViewField(float Horizontal, float Vertical, bool Absolute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetViewField"));
		
		struct
		{
			float                                              Horizontal;
			float                                              Vertical;
			bool                                               Absolute;
			bool                                               ReturnValue;
		} params;
		params.Horizontal = Horizontal;
		params.Vertical = Vertical;
		params.Absolute = Absolute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FrameRate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate"));
		
		struct
		{
			int32_t                                            TrackIndex;
			int32_t                                            FormatIndex;
			float                                              FrameRate;
			bool                                               ReturnValue;
		} params;
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		params.FrameRate = FrameRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetTrackFormat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::SetTrackFormat(MediaAssets_EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetTrackFormat"));
		
		struct
		{
			MediaAssets_EMediaPlayerTrack                      TrackType;
			int32_t                                            TrackIndex;
			int32_t                                            FormatIndex;
			bool                                               ReturnValue;
		} params;
		params.TrackType = TrackType;
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetTimeDelay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimespan                                   TimeDelay                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaPlayer::SetTimeDelay(const struct FTimespan& TimeDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetTimeDelay"));
		
		struct
		{
			struct FTimespan                                   TimeDelay;
		} params;
		params.TimeDelay = TimeDelay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::SetRate(float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetRate"));
		
		struct
		{
			float                                              Rate;
			bool                                               ReturnValue;
		} params;
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetNativeVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::SetNativeVolume(float Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetNativeVolume"));
		
		struct
		{
			float                                              Volume;
			bool                                               ReturnValue;
		} params;
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetMediaOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMediaSource*                                Options                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaPlayer::SetMediaOptions(class UMediaSource* Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetMediaOptions"));
		
		struct
		{
			class UMediaSource*                                Options;
		} params;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetLooping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Looping                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::SetLooping(bool Looping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetLooping"));
		
		struct
		{
			bool                                               Looping;
			bool                                               ReturnValue;
		} params;
		params.Looping = Looping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetDesiredPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PlayerName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaPlayer::SetDesiredPlayerName(const class FName& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetDesiredPlayerName"));
		
		struct
		{
			class FName                                        PlayerName;
		} params;
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetBlockOnTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimespan                                   Time                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaPlayer::SetBlockOnTime(const struct FTimespan& Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetBlockOnTime"));
		
		struct
		{
			struct FTimespan                                   Time;
		} params;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.SelectTrack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::SelectTrack(MediaAssets_EMediaPlayerTrack TrackType, int32_t TrackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SelectTrack"));
		
		struct
		{
			MediaAssets_EMediaPlayerTrack                      TrackType;
			int32_t                                            TrackIndex;
			bool                                               ReturnValue;
		} params;
		params.TrackType = TrackType;
		params.TrackIndex = TrackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.Seek
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimespan                                   Time                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::Seek(const struct FTimespan& Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Seek"));
		
		struct
		{
			struct FTimespan                                   Time;
			bool                                               ReturnValue;
		} params;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.Rewind
	 * 		Flags  -> ()
	 */
	bool UMediaPlayer::Rewind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Rewind"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.Reopen
	 * 		Flags  -> ()
	 */
	bool UMediaPlayer::Reopen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Reopen"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.Previous
	 * 		Flags  -> ()
	 */
	bool UMediaPlayer::Previous()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Previous"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.PlayAndSeek
	 * 		Flags  -> ()
	 */
	void UMediaPlayer::PlayAndSeek()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.PlayAndSeek"));
		
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
	 * 		Name   -> Function MediaAssets.MediaPlayer.Play
	 * 		Flags  -> ()
	 */
	bool UMediaPlayer::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Play"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.Pause
	 * 		Flags  -> ()
	 */
	bool UMediaPlayer::Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Pause"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.OpenUrl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::OpenUrl(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenUrl"));
		
		struct
		{
			class FString                                      URL;
			bool                                               ReturnValue;
		} params;
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.OpenSourceWithOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMediaPlayerOptions                         Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::OpenSourceWithOptions(class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenSourceWithOptions"));
		
		struct
		{
			class UMediaSource*                                MediaSource;
			struct FMediaPlayerOptions                         Options;
			bool                                               ReturnValue;
		} params;
		params.MediaSource = MediaSource;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.OpenSourceLatent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMediaPlayerOptions                         Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaPlayer::OpenSourceLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenSourceLatent"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class UMediaSource*                                MediaSource;
			struct FMediaPlayerOptions                         Options;
			bool                                               bSuccess;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.MediaSource = MediaSource;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.OpenSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::OpenSource(class UMediaSource* MediaSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenSource"));
		
		struct
		{
			class UMediaSource*                                MediaSource;
			bool                                               ReturnValue;
		} params;
		params.MediaSource = MediaSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.OpenPlaylistIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMediaPlaylist*                              InPlaylist                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenPlaylistIndex"));
		
		struct
		{
			class UMediaPlaylist*                              InPlaylist;
			int32_t                                            Index;
			bool                                               ReturnValue;
		} params;
		params.InPlaylist = InPlaylist;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.OpenPlaylist
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMediaPlaylist*                              InPlaylist                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::OpenPlaylist(class UMediaPlaylist* InPlaylist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenPlaylist"));
		
		struct
		{
			class UMediaPlaylist*                              InPlaylist;
			bool                                               ReturnValue;
		} params;
		params.InPlaylist = InPlaylist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.OpenFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::OpenFile(const class FString& FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenFile"));
		
		struct
		{
			class FString                                      FilePath;
			bool                                               ReturnValue;
		} params;
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.Next
	 * 		Flags  -> ()
	 */
	bool UMediaPlayer::Next()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Next"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.IsReady
	 * 		Flags  -> ()
	 */
	bool UMediaPlayer::IsReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsReady"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.IsPreparing
	 * 		Flags  -> ()
	 */
	bool UMediaPlayer::IsPreparing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsPreparing"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.IsPlaying
	 * 		Flags  -> ()
	 */
	bool UMediaPlayer::IsPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsPlaying"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.IsPaused
	 * 		Flags  -> ()
	 */
	bool UMediaPlayer::IsPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsPaused"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.IsLooping
	 * 		Flags  -> ()
	 */
	bool UMediaPlayer::IsLooping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsLooping"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.IsConnecting
	 * 		Flags  -> ()
	 */
	bool UMediaPlayer::IsConnecting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsConnecting"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.IsClosed
	 * 		Flags  -> ()
	 */
	bool UMediaPlayer::IsClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsClosed"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.IsBuffering
	 * 		Flags  -> ()
	 */
	bool UMediaPlayer::IsBuffering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsBuffering"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.HasError
	 * 		Flags  -> ()
	 */
	bool UMediaPlayer::HasError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.HasError"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetViewRotation
	 * 		Flags  -> ()
	 */
	struct FRotator UMediaPlayer::GetViewRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetViewRotation"));
		
		struct
		{
			struct FRotator                                    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UMediaPlayer::GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackType"));
		
		struct
		{
			int32_t                                            TrackIndex;
			int32_t                                            FormatIndex;
			class FString                                      ReturnValue;
		} params;
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFloatRange UMediaPlayer::GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates"));
		
		struct
		{
			int32_t                                            TrackIndex;
			int32_t                                            FormatIndex;
			struct FFloatRange                                 ReturnValue;
		} params;
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMediaPlayer::GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate"));
		
		struct
		{
			int32_t                                            TrackIndex;
			int32_t                                            FormatIndex;
			float                                              ReturnValue;
		} params;
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntPoint UMediaPlayer::GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackDimensions"));
		
		struct
		{
			int32_t                                            TrackIndex;
			int32_t                                            FormatIndex;
			struct FIntPoint                                   ReturnValue;
		} params;
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMediaPlayer::GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio"));
		
		struct
		{
			int32_t                                            TrackIndex;
			int32_t                                            FormatIndex;
			float                                              ReturnValue;
		} params;
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
	 * 		Flags  -> ()
	 */
	float UMediaPlayer::GetVerticalFieldOfView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVerticalFieldOfView"));
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetUrl
	 * 		Flags  -> ()
	 */
	class FString UMediaPlayer::GetUrl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetUrl"));
		
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
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetTrackLanguage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UMediaPlayer::GetTrackLanguage(MediaAssets_EMediaPlayerTrack TrackType, int32_t TrackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTrackLanguage"));
		
		struct
		{
			MediaAssets_EMediaPlayerTrack                      TrackType;
			int32_t                                            TrackIndex;
			class FString                                      ReturnValue;
		} params;
		params.TrackType = TrackType;
		params.TrackIndex = TrackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetTrackFormat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMediaPlayer::GetTrackFormat(MediaAssets_EMediaPlayerTrack TrackType, int32_t TrackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTrackFormat"));
		
		struct
		{
			MediaAssets_EMediaPlayerTrack                      TrackType;
			int32_t                                            TrackIndex;
			int32_t                                            ReturnValue;
		} params;
		params.TrackType = TrackType;
		params.TrackIndex = TrackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetTrackDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UMediaPlayer::GetTrackDisplayName(MediaAssets_EMediaPlayerTrack TrackType, int32_t TrackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTrackDisplayName"));
		
		struct
		{
			MediaAssets_EMediaPlayerTrack                      TrackType;
			int32_t                                            TrackIndex;
			class FText                                        ReturnValue;
		} params;
		params.TrackType = TrackType;
		params.TrackIndex = TrackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetTimestamp
	 * 		Flags  -> ()
	 */
	class UMediaTimeStampInfo* UMediaPlayer::GetTimestamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTimestamp"));
		
		struct
		{
			class UMediaTimeStampInfo*                         ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetTimeDelay
	 * 		Flags  -> ()
	 */
	struct FTimespan UMediaPlayer::GetTimeDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTimeDelay"));
		
		struct
		{
			struct FTimespan                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetTime
	 * 		Flags  -> ()
	 */
	struct FTimespan UMediaPlayer::GetTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTime"));
		
		struct
		{
			struct FTimespan                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetSupportedRates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFloatRange>                         OutRates                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Unthinned                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaPlayer::GetSupportedRates(TArray<struct FFloatRange>* OutRates, bool Unthinned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetSupportedRates"));
		
		struct
		{
			TArray<struct FFloatRange>                         OutRates;
			bool                                               Unthinned;
		} params;
		params.Unthinned = Unthinned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRates != nullptr)
			*OutRates = params.OutRates;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetSelectedTrack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMediaPlayer::GetSelectedTrack(MediaAssets_EMediaPlayerTrack TrackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetSelectedTrack"));
		
		struct
		{
			MediaAssets_EMediaPlayerTrack                      TrackType;
			int32_t                                            ReturnValue;
		} params;
		params.TrackType = TrackType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetRate
	 * 		Flags  -> ()
	 */
	float UMediaPlayer::GetRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetRate"));
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetPlaylistIndex
	 * 		Flags  -> ()
	 */
	int32_t UMediaPlayer::GetPlaylistIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetPlaylistIndex"));
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetPlaylist
	 * 		Flags  -> ()
	 */
	class UMediaPlaylist* UMediaPlayer::GetPlaylist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetPlaylist"));
		
		struct
		{
			class UMediaPlaylist*                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetPlayerName
	 * 		Flags  -> ()
	 */
	class FName UMediaPlayer::GetPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetPlayerName"));
		
		struct
		{
			class FName                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetNumTracks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMediaPlayer::GetNumTracks(MediaAssets_EMediaPlayerTrack TrackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetNumTracks"));
		
		struct
		{
			MediaAssets_EMediaPlayerTrack                      TrackType;
			int32_t                                            ReturnValue;
		} params;
		params.TrackType = TrackType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetNumTrackFormats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		MediaAssets_EMediaPlayerTrack                      TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMediaPlayer::GetNumTrackFormats(MediaAssets_EMediaPlayerTrack TrackType, int32_t TrackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetNumTrackFormats"));
		
		struct
		{
			MediaAssets_EMediaPlayerTrack                      TrackType;
			int32_t                                            TrackIndex;
			int32_t                                            ReturnValue;
		} params;
		params.TrackType = TrackType;
		params.TrackIndex = TrackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetMediaName
	 * 		Flags  -> ()
	 */
	class FText UMediaPlayer::GetMediaName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetMediaName"));
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
	 * 		Flags  -> ()
	 */
	float UMediaPlayer::GetHorizontalFieldOfView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView"));
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetDuration
	 * 		Flags  -> ()
	 */
	struct FTimespan UMediaPlayer::GetDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetDuration"));
		
		struct
		{
			struct FTimespan                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetDesiredPlayerName
	 * 		Flags  -> ()
	 */
	class FName UMediaPlayer::GetDesiredPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetDesiredPlayerName"));
		
		struct
		{
			class FName                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetAudioTrackType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UMediaPlayer::GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetAudioTrackType"));
		
		struct
		{
			int32_t                                            TrackIndex;
			int32_t                                            FormatIndex;
			class FString                                      ReturnValue;
		} params;
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMediaPlayer::GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate"));
		
		struct
		{
			int32_t                                            TrackIndex;
			int32_t                                            FormatIndex;
			int32_t                                            ReturnValue;
		} params;
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetAudioTrackChannels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMediaPlayer::GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetAudioTrackChannels"));
		
		struct
		{
			int32_t                                            TrackIndex;
			int32_t                                            FormatIndex;
			int32_t                                            ReturnValue;
		} params;
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.Close
	 * 		Flags  -> ()
	 */
	void UMediaPlayer::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Close"));
		
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
	 * 		Name   -> Function MediaAssets.MediaPlayer.CanPlayUrl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::CanPlayUrl(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.CanPlayUrl"));
		
		struct
		{
			class FString                                      URL;
			bool                                               ReturnValue;
		} params;
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.CanPlaySource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::CanPlaySource(class UMediaSource* MediaSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.CanPlaySource"));
		
		struct
		{
			class UMediaSource*                                MediaSource;
			bool                                               ReturnValue;
		} params;
		params.MediaSource = MediaSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlayer.CanPause
	 * 		Flags  -> ()
	 */
	bool UMediaPlayer::CanPause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.CanPause"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMediaPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.MediaPlayer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlaylist.Replace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMediaSource*                                Replacement                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlaylist::Replace(int32_t Index, class UMediaSource* Replacement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Replace"));
		
		struct
		{
			int32_t                                            Index;
			class UMediaSource*                                Replacement;
			bool                                               ReturnValue;
		} params;
		params.Index = Index;
		params.Replacement = Replacement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlaylist.RemoveAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlaylist::RemoveAt(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.RemoveAt"));
		
		struct
		{
			int32_t                                            Index;
			bool                                               ReturnValue;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlaylist.Remove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlaylist::Remove(class UMediaSource* MediaSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Remove"));
		
		struct
		{
			class UMediaSource*                                MediaSource;
			bool                                               ReturnValue;
		} params;
		params.MediaSource = MediaSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlaylist.Num
	 * 		Flags  -> ()
	 */
	int32_t UMediaPlaylist::Num()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Num"));
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlaylist.Insert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaPlaylist::Insert(class UMediaSource* MediaSource, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Insert"));
		
		struct
		{
			class UMediaSource*                                MediaSource;
			int32_t                                            Index;
		} params;
		params.MediaSource = MediaSource;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlaylist.GetRandom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMediaSource* UMediaPlaylist::GetRandom(int32_t* OutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.GetRandom"));
		
		struct
		{
			int32_t                                            OutIndex;
			class UMediaSource*                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIndex != nullptr)
			*OutIndex = params.OutIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlaylist.GetPrevious
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InOutIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMediaSource* UMediaPlaylist::GetPrevious(int32_t* InOutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.GetPrevious"));
		
		struct
		{
			int32_t                                            InOutIndex;
			class UMediaSource*                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InOutIndex != nullptr)
			*InOutIndex = params.InOutIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlaylist.GetNext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InOutIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMediaSource* UMediaPlaylist::GetNext(int32_t* InOutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.GetNext"));
		
		struct
		{
			int32_t                                            InOutIndex;
			class UMediaSource*                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InOutIndex != nullptr)
			*InOutIndex = params.InOutIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlaylist.Get
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMediaSource* UMediaPlaylist::Get(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Get"));
		
		struct
		{
			int32_t                                            Index;
			class UMediaSource*                                ReturnValue;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlaylist.AddUrl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlaylist::AddUrl(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.AddUrl"));
		
		struct
		{
			class FString                                      URL;
			bool                                               ReturnValue;
		} params;
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlaylist.AddFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlaylist::AddFile(const class FString& FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.AddFile"));
		
		struct
		{
			class FString                                      FilePath;
			bool                                               ReturnValue;
		} params;
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaPlaylist.Add
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlaylist::Add(class UMediaSource* MediaSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Add"));
		
		struct
		{
			class UMediaSource*                                MediaSource;
			bool                                               ReturnValue;
		} params;
		params.MediaSource = MediaSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMediaPlaylist.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaPlaylist::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.MediaPlaylist"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      InFrequenciesToAnalyze                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		MediaAssets_EMediaSoundComponentFFTSize            InFFTSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaSoundComponent::SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, MediaAssets_EMediaSoundComponentFFTSize InFFTSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings"));
		
		struct
		{
			TArray<float>                                      InFrequenciesToAnalyze;
			MediaAssets_EMediaSoundComponentFFTSize            InFFTSize;
		} params;
		params.InFrequenciesToAnalyze = InFrequenciesToAnalyze;
		params.InFFTSize = InFFTSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaSoundComponent.SetMediaPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMediaPlayer*                                NewMediaPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaSoundComponent::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.SetMediaPlayer"));
		
		struct
		{
			class UMediaPlayer*                                NewMediaPlayer;
		} params;
		params.NewMediaPlayer = NewMediaPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AttackTimeMsec                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReleaseTimeMsec                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaSoundComponent::SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings"));
		
		struct
		{
			int32_t                                            AttackTimeMsec;
			int32_t                                            ReleaseTimeMsec;
		} params;
		params.AttackTimeMsec = AttackTimeMsec;
		params.ReleaseTimeMsec = ReleaseTimeMsec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInSpectralAnalysisEnabled                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaSoundComponent::SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis"));
		
		struct
		{
			bool                                               bInSpectralAnalysisEnabled;
		} params;
		params.bInSpectralAnalysisEnabled = bInSpectralAnalysisEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInEnvelopeFollowing                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaSoundComponent::SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing"));
		
		struct
		{
			bool                                               bInEnvelopeFollowing;
		} params;
		params.bInEnvelopeFollowing = bInEnvelopeFollowing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaSoundComponent.GetSpectralData
	 * 		Flags  -> ()
	 */
	TArray<struct FMediaSoundComponentSpectralData> UMediaSoundComponent::GetSpectralData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.GetSpectralData"));
		
		struct
		{
			TArray<struct FMediaSoundComponentSpectralData>    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaSoundComponent.GetNormalizedSpectralData
	 * 		Flags  -> ()
	 */
	TArray<struct FMediaSoundComponentSpectralData> UMediaSoundComponent::GetNormalizedSpectralData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.GetNormalizedSpectralData"));
		
		struct
		{
			TArray<struct FMediaSoundComponentSpectralData>    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaSoundComponent.GetMediaPlayer
	 * 		Flags  -> ()
	 */
	class UMediaPlayer* UMediaSoundComponent::GetMediaPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.GetMediaPlayer"));
		
		struct
		{
			class UMediaPlayer*                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaSoundComponent.GetEnvelopeValue
	 * 		Flags  -> ()
	 */
	float UMediaSoundComponent::GetEnvelopeValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.GetEnvelopeValue"));
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSoundAttenuationSettings                   OutAttenuationSettings                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UMediaSoundComponent::BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply"));
		
		struct
		{
			struct FSoundAttenuationSettings                   OutAttenuationSettings;
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAttenuationSettings != nullptr)
			*OutAttenuationSettings = params.OutAttenuationSettings;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMediaSoundComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaSoundComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.MediaSoundComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaTexture.SetMediaPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMediaPlayer*                                NewMediaPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaTexture::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.SetMediaPlayer"));
		
		struct
		{
			class UMediaPlayer*                                NewMediaPlayer;
		} params;
		params.NewMediaPlayer = NewMediaPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaTexture.GetWidth
	 * 		Flags  -> ()
	 */
	int32_t UMediaTexture::GetWidth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetWidth"));
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaTexture.GetMediaPlayer
	 * 		Flags  -> ()
	 */
	class UMediaPlayer* UMediaTexture::GetMediaPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetMediaPlayer"));
		
		struct
		{
			class UMediaPlayer*                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaTexture.GetHeight
	 * 		Flags  -> ()
	 */
	int32_t UMediaTexture::GetHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetHeight"));
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MediaAssets.MediaTexture.GetAspectRatio
	 * 		Flags  -> ()
	 */
	float UMediaTexture::GetAspectRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetAspectRatio"));
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMediaTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.MediaTexture"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPlatformMediaSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlatformMediaSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.PlatformMediaSource"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStreamMediaSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStreamMediaSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.StreamMediaSource"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTimeSynchronizableMediaSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeSynchronizableMediaSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class MediaAssets.TimeSynchronizableMediaSource"));
		return ptr;
	}

}


