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
	 * 		Name   -> Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class ULuminARSessionConfig*                       Configuration                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuminARSessionFunctionLibrary::StartLuminARSession(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ULuminARSessionConfig* Configuration)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class ULuminARSessionConfig*                       Configuration;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Configuration = Configuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULuminARSessionFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuminARSessionFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MagicLeapAR.LuminARSessionFunctionLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   ScreenPosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FARTraceResult>                      OutHitResults                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool ULuminARFrameFunctionLibrary::LuminARLineTrace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, TArray<struct FARTraceResult>* OutHitResults)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector2D                                   ScreenPosition;
			TArray<struct FARTraceResult>                      OutHitResults;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ScreenPosition = ScreenPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHitResults != nullptr)
			*OutHitResults = params.OutHitResults;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState
	 * 		Flags  -> ()
	 */
	MagicLeapAR_ELuminARTrackingState ULuminARFrameFunctionLibrary::GetTrackingState()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState"));
		
		struct
		{
			MagicLeapAR_ELuminARTrackingState                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULuminARFrameFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuminARFrameFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MagicLeapAR.LuminARFrameFunctionLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImageEx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  CandidateTexture                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FriendlyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PhysicalWidth                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseUnreliablePose                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bImageIsStationary                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapImageTracker_EMagicLeapImageTargetOrientation InAxisOrientation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULuminARCandidateImage* ULuminARImageTrackingFunctionLibrary::AddLuminRuntimeCandidateImageEx(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary, MagicLeapImageTracker_EMagicLeapImageTargetOrientation InAxisOrientation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImageEx"));
		
		struct
		{
			class UARSessionConfig*                            SessionConfig;
			class UTexture2D*                                  CandidateTexture;
			class FString                                      FriendlyName;
			float                                              PhysicalWidth;
			bool                                               bUseUnreliablePose;
			bool                                               bImageIsStationary;
			MagicLeapImageTracker_EMagicLeapImageTargetOrientation InAxisOrientation;
			class ULuminARCandidateImage*                      ReturnValue;
		} params;
		params.SessionConfig = SessionConfig;
		params.CandidateTexture = CandidateTexture;
		params.FriendlyName = FriendlyName;
		params.PhysicalWidth = PhysicalWidth;
		params.bUseUnreliablePose = bUseUnreliablePose;
		params.bImageIsStationary = bImageIsStationary;
		params.InAxisOrientation = InAxisOrientation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  CandidateTexture                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FriendlyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PhysicalWidth                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseUnreliablePose                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bImageIsStationary                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULuminARCandidateImage* ULuminARImageTrackingFunctionLibrary::AddLuminRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage"));
		
		struct
		{
			class UARSessionConfig*                            SessionConfig;
			class UTexture2D*                                  CandidateTexture;
			class FString                                      FriendlyName;
			float                                              PhysicalWidth;
			bool                                               bUseUnreliablePose;
			bool                                               bImageIsStationary;
			class ULuminARCandidateImage*                      ReturnValue;
		} params;
		params.SessionConfig = SessionConfig;
		params.CandidateTexture = CandidateTexture;
		params.FriendlyName = FriendlyName;
		params.PhysicalWidth = PhysicalWidth;
		params.bUseUnreliablePose = bUseUnreliablePose;
		params.bImageIsStationary = bImageIsStationary;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULuminARImageTrackingFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuminARImageTrackingFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MagicLeapAR.LuminARImageTrackingFunctionLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ALuminAROrigin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALuminAROrigin::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MagicLeapAR.LuminAROrigin"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULuminARSessionConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuminARSessionConfig::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MagicLeapAR.LuminARSessionConfig"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits
	 * 		Flags  -> ()
	 */
	TArray<float> ULuminARLightEstimate::GetAmbientIntensityNits()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits"));
		
		struct
		{
			TArray<float>                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULuminARLightEstimate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuminARLightEstimate::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MagicLeapAR.LuminARLightEstimate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose
	 * 		Flags  -> ()
	 */
	bool ULuminARCandidateImage::GetUseUnreliablePose()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose"));
		
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
	 * 		Name   -> Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary
	 * 		Flags  -> ()
	 */
	bool ULuminARCandidateImage::GetImageIsStationary()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary"));
		
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
	 * 		Name   -> Function MagicLeapAR.LuminARCandidateImage.GetAxisOrientation
	 * 		Flags  -> ()
	 */
	MagicLeapImageTracker_EMagicLeapImageTargetOrientation ULuminARCandidateImage::GetAxisOrientation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapAR.LuminARCandidateImage.GetAxisOrientation"));
		
		struct
		{
			MagicLeapImageTracker_EMagicLeapImageTargetOrientation ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULuminARCandidateImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuminARCandidateImage::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MagicLeapAR.LuminARCandidateImage"));
		return ptr;
	}

}


