/**
 * Name: Hydroneer
 * Version: 2.0D
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::SetMotionSourceForHand(InputCore_EControllerHand Hand, const class FName& MotionSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand");
		
		struct
		{
			InputCore_EControllerHand                          Hand;
			class FName                                        MotionSource;
			bool                                               ReturnValue;
		} params;
		params.Hand = Hand;
		params.MotionSource = MotionSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		MagicLeapController_EMagicLeapControllerTrackingMode TrackingMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::SetControllerTrackingMode(MagicLeapController_EMagicLeapControllerTrackingMode TrackingMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode");
		
		struct
		{
			MagicLeapController_EMagicLeapControllerTrackingMode TrackingMode;
			bool                                               ReturnValue;
		} params;
		params.TrackingMode = TrackingMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDColor   LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::PlayLEDPattern(const class FName& MotionSource, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern");
		
		struct
		{
			class FName                                        MotionSource;
			MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern;
			MagicLeapController_EMagicLeapControllerLEDColor   LEDColor;
			float                                              DurationInSec;
			bool                                               ReturnValue;
		} params;
		params.MotionSource = MotionSource;
		params.LEDPattern = LEDPattern;
		params.LEDColor = LEDColor;
		params.DurationInSec = DurationInSec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDEffect  LEDEffect                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDSpeed   LEDSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDColor   LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::PlayLEDEffect(const class FName& MotionSource, MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect");
		
		struct
		{
			class FName                                        MotionSource;
			MagicLeapController_EMagicLeapControllerLEDEffect  LEDEffect;
			MagicLeapController_EMagicLeapControllerLEDSpeed   LEDSpeed;
			MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern;
			MagicLeapController_EMagicLeapControllerLEDColor   LEDColor;
			float                                              DurationInSec;
			bool                                               ReturnValue;
		} params;
		params.MotionSource = MotionSource;
		params.LEDEffect = LEDEffect;
		params.LEDSpeed = LEDSpeed;
		params.LEDPattern = LEDPattern;
		params.LEDColor = LEDColor;
		params.DurationInSec = DurationInSec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerHapticIntensity Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::PlayHapticPattern(const class FName& MotionSource, MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, MagicLeapController_EMagicLeapControllerHapticIntensity Intensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern");
		
		struct
		{
			class FName                                        MotionSource;
			MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern;
			MagicLeapController_EMagicLeapControllerHapticIntensity Intensity;
			bool                                               ReturnValue;
		} params;
		params.MotionSource = MotionSource;
		params.HapticPattern = HapticPattern;
		params.Intensity = Intensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDEffect  LEDEffect                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDSpeed   LEDSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDColor   LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::PlayControllerLEDEffect(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect");
		
		struct
		{
			InputCore_EControllerHand                          Hand;
			MagicLeapController_EMagicLeapControllerLEDEffect  LEDEffect;
			MagicLeapController_EMagicLeapControllerLEDSpeed   LEDSpeed;
			MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern;
			MagicLeapController_EMagicLeapControllerLEDColor   LEDColor;
			float                                              DurationInSec;
			bool                                               ReturnValue;
		} params;
		params.Hand = Hand;
		params.LEDEffect = LEDEffect;
		params.LEDSpeed = LEDSpeed;
		params.LEDPattern = LEDPattern;
		params.LEDColor = LEDColor;
		params.DurationInSec = DurationInSec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED
	 * 		Flags  -> ()
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerLEDColor   LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::PlayControllerLED(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED");
		
		struct
		{
			InputCore_EControllerHand                          Hand;
			MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern;
			MagicLeapController_EMagicLeapControllerLEDColor   LEDColor;
			float                                              DurationInSec;
			bool                                               ReturnValue;
		} params;
		params.Hand = Hand;
		params.LEDPattern = LEDPattern;
		params.LEDColor = LEDColor;
		params.DurationInSec = DurationInSec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		MagicLeapController_EMagicLeapControllerHapticIntensity Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::PlayControllerHapticFeedback(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, MagicLeapController_EMagicLeapControllerHapticIntensity Intensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback");
		
		struct
		{
			InputCore_EControllerHand                          Hand;
			MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern;
			MagicLeapController_EMagicLeapControllerHapticIntensity Intensity;
			bool                                               ReturnValue;
		} params;
		params.Hand = Hand;
		params.HapticPattern = HapticPattern;
		params.Intensity = Intensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers
	 * 		Flags  -> ()
	 */
	int32_t UMagicLeapControllerFunctionLibrary::MaxSupportedMagicLeapControllers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers");
		
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
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::IsMLControllerConnected(const class FName& MotionSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected");
		
		struct
		{
			class FName                                        MotionSource;
			bool                                               ReturnValue;
		} params;
		params.MotionSource = MotionSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping
	 * 		Flags  -> ()
	 */
	void UMagicLeapControllerFunctionLibrary::InvertControllerMapping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping");
		
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
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UMagicLeapControllerFunctionLibrary::GetMotionSourceForHand(InputCore_EControllerHand Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand");
		
		struct
		{
			InputCore_EControllerHand                          Hand;
			class FName                                        ReturnValue;
		} params;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	MagicLeapController_EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::GetMLControllerType(InputCore_EControllerHand Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType");
		
		struct
		{
			InputCore_EControllerHand                          Hand;
			MagicLeapController_EMagicLeapControllerType       ReturnValue;
		} params;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	InputCore_EControllerHand UMagicLeapControllerFunctionLibrary::GetHandForMotionSource(const class FName& MotionSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource");
		
		struct
		{
			class FName                                        MotionSource;
			InputCore_EControllerHand                          ReturnValue;
		} params;
		params.MotionSource = MotionSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	MagicLeapController_EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::GetControllerType(const class FName& MotionSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType");
		
		struct
		{
			class FName                                        MotionSource;
			MagicLeapController_EMagicLeapControllerType       ReturnValue;
		} params;
		params.MotionSource = MotionSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode
	 * 		Flags  -> ()
	 */
	MagicLeapController_EMagicLeapControllerTrackingMode UMagicLeapControllerFunctionLibrary::GetControllerTrackingMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode");
		
		struct
		{
			MagicLeapController_EMagicLeapControllerTrackingMode ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ControllerIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		InputCore_EControllerHand                          Hand                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::GetControllerMapping(int32_t ControllerIndex, InputCore_EControllerHand* Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping");
		
		struct
		{
			int32_t                                            ControllerIndex;
			InputCore_EControllerHand                          Hand;
			bool                                               ReturnValue;
		} params;
		params.ControllerIndex = ControllerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hand != nullptr)
			*Hand = params.Hand;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapControllerFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapControllerFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapController.MagicLeapControllerFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapTouchpadGesturesComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapTouchpadGesturesComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapController.MagicLeapTouchpadGesturesComponent");
		return ptr;
	}

}


