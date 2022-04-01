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
	 * 		Name   -> PredefindFunction ACameraRig_Crane.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACameraRig_Crane::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class CinematicCamera.CameraRig_Crane"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	 * 		Flags  -> ()
	 */
	class USplineComponent* ACameraRig_Rail::GetRailSplineComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent"));
		
		struct
		{
			class USplineComponent*                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ACameraRig_Rail.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACameraRig_Rail::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class CinematicCamera.CameraRig_Rail"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function CinematicCamera.CineCameraActor.GetCineCameraComponent
	 * 		Flags  -> ()
	 */
	class UCineCameraComponent* ACineCameraActor::GetCineCameraComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraActor.GetCineCameraComponent"));
		
		struct
		{
			class UCineCameraComponent*                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ACineCameraActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACineCameraActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class CinematicCamera.CineCameraActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.SetLensPresetByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InPresetName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCineCameraComponent::SetLensPresetByName(const class FString& InPresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.SetLensPresetByName"));
		
		struct
		{
			class FString                                      InPresetName;
		} params;
		params.InPresetName = InPresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InPresetName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCineCameraComponent::SetFilmbackPresetByName(const class FString& InPresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName"));
		
		struct
		{
			class FString                                      InPresetName;
		} params;
		params.InPresetName = InPresetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFocalLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCineCameraComponent::SetCurrentFocalLength(float InFocalLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength"));
		
		struct
		{
			float                                              InFocalLength;
		} params;
		params.InFocalLength = InFocalLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	 * 		Flags  -> ()
	 */
	float UCineCameraComponent::GetVerticalFieldOfView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView"));
		
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
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	 * 		Flags  -> ()
	 */
	TArray<struct FNamedLensPreset> UCineCameraComponent::GetLensPresetsCopy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy"));
		
		struct
		{
			TArray<struct FNamedLensPreset>                    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetLensPresetName
	 * 		Flags  -> ()
	 */
	class FString UCineCameraComponent::GetLensPresetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.GetLensPresetName"));
		
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
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	 * 		Flags  -> ()
	 */
	float UCineCameraComponent::GetHorizontalFieldOfView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView"));
		
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
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	 * 		Flags  -> ()
	 */
	TArray<struct FNamedFilmbackPreset> UCineCameraComponent::GetFilmbackPresetsCopy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy"));
		
		struct
		{
			TArray<struct FNamedFilmbackPreset>                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	 * 		Flags  -> ()
	 */
	class FString UCineCameraComponent::GetFilmbackPresetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName"));
		
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
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	 * 		Flags  -> ()
	 */
	class FString UCineCameraComponent::GetDefaultFilmbackPresetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName"));
		
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
	 * 		Name   -> PredefindFunction UCineCameraComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCineCameraComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("Class CinematicCamera.CineCameraComponent"));
		return ptr;
	}

}


