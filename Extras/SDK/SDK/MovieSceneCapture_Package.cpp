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
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
	 * 		Flags  -> ()
	 */
	bool UMovieSceneCaptureProtocolBase::IsCapturing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing");
		
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
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
	 * 		Flags  -> ()
	 */
	EMovieSceneCaptureProtocolState UMovieSceneCaptureProtocolBase::GetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState");
		
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
	 * 		Name   -> PredefindFunction UMovieSceneCaptureProtocolBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCaptureProtocolBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureProtocolBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneAudioCaptureProtocolBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAudioCaptureProtocolBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNullAudioCaptureProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNullAudioCaptureProtocol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.NullAudioCaptureProtocol");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMasterAudioSubmixCaptureProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMasterAudioSubmixCaptureProtocol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneImageCaptureProtocolBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneImageCaptureProtocolBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCompositionGraphCaptureProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositionGraphCaptureProtocol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.CompositionGraphCaptureProtocol");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFrameGrabberProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrameGrabberProtocol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.FrameGrabberProtocol");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UImageSequenceProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImageSequenceProtocol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCompressedImageSequenceProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompressedImageSequenceProtocol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.CompressedImageSequenceProtocol");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UImageSequenceProtocol_BMP.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImageSequenceProtocol_BMP::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_BMP");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UImageSequenceProtocol_PNG.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImageSequenceProtocol_PNG::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_PNG");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UImageSequenceProtocol_JPG.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImageSequenceProtocol_JPG::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_JPG");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UImageSequenceProtocol_EXR.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImageSequenceProtocol_EXR::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_EXR");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneCaptureInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCaptureInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ProtocolType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneCapture::SetImageCaptureProtocolType(class UClass* ProtocolType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType");
		
		struct
		{
			class UClass*                                      ProtocolType;
		} params;
		params.ProtocolType = ProtocolType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ProtocolType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneCapture::SetAudioCaptureProtocolType(class UClass* ProtocolType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType");
		
		struct
		{
			class UClass*                                      ProtocolType;
		} params;
		params.ProtocolType = ProtocolType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
	 * 		Flags  -> ()
	 */
	class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetImageCaptureProtocol()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol");
		
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
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
	 * 		Flags  -> ()
	 */
	class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetAudioCaptureProtocol()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol");
		
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
	 * 		Name   -> PredefindFunction UMovieSceneCapture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCapture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCapture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULevelCapture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelCapture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.LevelCapture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
	 * 		Flags  -> ()
	 */
	bool UMovieSceneCaptureEnvironment::IsCaptureInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress");
		
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
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
	 * 		Flags  -> ()
	 */
	int32_t UMovieSceneCaptureEnvironment::GetCaptureFrameNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber");
		
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
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
	 * 		Flags  -> ()
	 */
	float UMovieSceneCaptureEnvironment::GetCaptureElapsedTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime");
		
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
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
	 * 		Flags  -> ()
	 */
	class UMovieSceneImageCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindImageCaptureProtocol()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol");
		
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
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
	 * 		Flags  -> ()
	 */
	class UMovieSceneAudioCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindAudioCaptureProtocol()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol");
		
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
	 * 		Name   -> PredefindFunction UMovieSceneCaptureEnvironment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCaptureEnvironment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureEnvironment");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
	 * 		Flags  -> ()
	 */
	void UUserDefinedCaptureProtocol::StopCapturingFinalPixels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels");
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCapturedPixelsID                           StreamID                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUserDefinedCaptureProtocol::StartCapturingFinalPixels(const struct FCapturedPixelsID& StreamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels");
		
		struct
		{
			struct FCapturedPixelsID                           StreamID;
		} params;
		params.StreamID = StreamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Buffer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCapturedPixelsID                           BufferID                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUserDefinedCaptureProtocol::ResolveBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& BufferID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer");
		
		struct
		{
			class UTexture*                                    Buffer;
			struct FCapturedPixelsID                           BufferID;
		} params;
		params.Buffer = Buffer;
		params.BufferID = BufferID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
	 * 		Flags  -> ()
	 */
	void UUserDefinedCaptureProtocol::OnWarmUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp");
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
	 * 		Flags  -> ()
	 */
	void UUserDefinedCaptureProtocol::OnTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick");
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
	 * 		Flags  -> ()
	 */
	void UUserDefinedCaptureProtocol::OnStartCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture");
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
	 * 		Flags  -> ()
	 */
	bool UUserDefinedCaptureProtocol::OnSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup");
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
	 * 		Flags  -> ()
	 */
	void UUserDefinedCaptureProtocol::OnPreTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick");
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCapturedPixels                             Pixels                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FCapturedPixelsID                           ID                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FFrameMetrics                               FrameMetrics                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUserDefinedCaptureProtocol::OnPixelsReceived(const struct FCapturedPixels& Pixels, const struct FCapturedPixelsID& ID, const struct FFrameMetrics& FrameMetrics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived");
		
		struct
		{
			struct FCapturedPixels                             Pixels;
			struct FCapturedPixelsID                           ID;
			struct FFrameMetrics                               FrameMetrics;
		} params;
		params.Pixels = Pixels;
		params.ID = ID;
		params.FrameMetrics = FrameMetrics;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
	 * 		Flags  -> ()
	 */
	void UUserDefinedCaptureProtocol::OnPauseCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture");
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
	 * 		Flags  -> ()
	 */
	void UUserDefinedCaptureProtocol::OnFinalize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize");
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
	 * 		Flags  -> ()
	 */
	void UUserDefinedCaptureProtocol::OnCaptureFrame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame");
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
	 * 		Flags  -> ()
	 */
	bool UUserDefinedCaptureProtocol::OnCanFinalize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize");
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
	 * 		Flags  -> ()
	 */
	void UUserDefinedCaptureProtocol::OnBeginFinalize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize");
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
	 * 		Flags  -> ()
	 */
	struct FFrameMetrics UUserDefinedCaptureProtocol::GetCurrentFrameMetrics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics");
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameMetrics                               InFrameMetrics                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUserDefinedCaptureProtocol::GenerateFilename(const struct FFrameMetrics& InFrameMetrics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename");
		
		struct
		{
			struct FFrameMetrics                               InFrameMetrics;
		} params;
		params.InFrameMetrics = InFrameMetrics;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUserDefinedCaptureProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUserDefinedCaptureProtocol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.UserDefinedCaptureProtocol");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCapturedPixels                             PixelData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FCapturedPixelsID                           StreamID                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FFrameMetrics                               FrameMetrics                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCopyImageData                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserDefinedImageCaptureProtocol::WriteImageToDisk(const struct FCapturedPixels& PixelData, const struct FCapturedPixelsID& StreamID, const struct FFrameMetrics& FrameMetrics, bool bCopyImageData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk");
		
		struct
		{
			struct FCapturedPixels                             PixelData;
			struct FCapturedPixelsID                           StreamID;
			struct FFrameMetrics                               FrameMetrics;
			bool                                               bCopyImageData;
		} params;
		params.PixelData = PixelData;
		params.StreamID = StreamID;
		params.FrameMetrics = FrameMetrics;
		params.bCopyImageData = bCopyImageData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
	 * 		Flags  -> ()
	 */
	class FString UUserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame");
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Buffer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCapturedPixelsID                           StreamID                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UUserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& StreamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer");
		
		struct
		{
			class UTexture*                                    Buffer;
			struct FCapturedPixelsID                           StreamID;
		} params;
		params.Buffer = Buffer;
		params.StreamID = StreamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUserDefinedImageCaptureProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUserDefinedImageCaptureProtocol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.UserDefinedImageCaptureProtocol");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVideoCaptureProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVideoCaptureProtocol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.VideoCaptureProtocol");
		return ptr;
	}

}


