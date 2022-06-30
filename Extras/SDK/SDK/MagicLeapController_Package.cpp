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
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::SetMotionSourceForHand(EControllerHand Hand, const class FName& MotionSource)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand");
		
		struct
		{
			EControllerHand                                    Hand;
			class FName                                        MotionSource;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMagicLeapControllerTrackingMode                   TrackingMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::SetControllerTrackingMode(EMagicLeapControllerTrackingMode TrackingMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode");
		
		struct
		{
			EMagicLeapControllerTrackingMode                   TrackingMode;
		} params;
		params.TrackingMode = TrackingMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapControllerLEDPattern                     LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapControllerLEDColor                       LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::PlayLEDPattern(const class FName& MotionSource, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern");
		
		struct
		{
			class FName                                        MotionSource;
			EMagicLeapControllerLEDPattern                     LEDPattern;
			EMagicLeapControllerLEDColor                       LEDColor;
			float                                              DurationInSec;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapControllerLEDEffect                      LEDEffect                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapControllerLEDSpeed                       LEDSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapControllerLEDPattern                     LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapControllerLEDColor                       LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::PlayLEDEffect(const class FName& MotionSource, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect");
		
		struct
		{
			class FName                                        MotionSource;
			EMagicLeapControllerLEDEffect                      LEDEffect;
			EMagicLeapControllerLEDSpeed                       LEDSpeed;
			EMagicLeapControllerLEDPattern                     LEDPattern;
			EMagicLeapControllerLEDColor                       LEDColor;
			float                                              DurationInSec;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapControllerHapticPattern                  HapticPattern                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapControllerHapticIntensity                Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::PlayHapticPattern(const class FName& MotionSource, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern");
		
		struct
		{
			class FName                                        MotionSource;
			EMagicLeapControllerHapticPattern                  HapticPattern;
			EMagicLeapControllerHapticIntensity                Intensity;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapControllerLEDEffect                      LEDEffect                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapControllerLEDSpeed                       LEDSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapControllerLEDPattern                     LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapControllerLEDColor                       LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::PlayControllerLEDEffect(EControllerHand Hand, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect");
		
		struct
		{
			EControllerHand                                    Hand;
			EMagicLeapControllerLEDEffect                      LEDEffect;
			EMagicLeapControllerLEDSpeed                       LEDSpeed;
			EMagicLeapControllerLEDPattern                     LEDPattern;
			EMagicLeapControllerLEDColor                       LEDColor;
			float                                              DurationInSec;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapControllerLEDPattern                     LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapControllerLEDColor                       LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::PlayControllerLED(EControllerHand Hand, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED");
		
		struct
		{
			EControllerHand                                    Hand;
			EMagicLeapControllerLEDPattern                     LEDPattern;
			EMagicLeapControllerLEDColor                       LEDColor;
			float                                              DurationInSec;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapControllerHapticPattern                  HapticPattern                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapControllerHapticIntensity                Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::PlayControllerHapticFeedback(EControllerHand Hand, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback");
		
		struct
		{
			EControllerHand                                    Hand;
			EMagicLeapControllerHapticPattern                  HapticPattern;
			EMagicLeapControllerHapticIntensity                Intensity;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers
	 * 		Flags  -> ()
	 */
	int32_t UMagicLeapControllerFunctionLibrary::MaxSupportedMagicLeapControllers()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers");
		
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
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::IsMLControllerConnected(const class FName& MotionSource)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected");
		
		struct
		{
			class FName                                        MotionSource;
		} params;
		params.MotionSource = MotionSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping
	 * 		Flags  -> ()
	 */
	void UMagicLeapControllerFunctionLibrary::InvertControllerMapping()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping");
		
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
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UMagicLeapControllerFunctionLibrary::GetMotionSourceForHand(EControllerHand Hand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand");
		
		struct
		{
			EControllerHand                                    Hand;
		} params;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::GetMLControllerType(EControllerHand Hand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType");
		
		struct
		{
			EControllerHand                                    Hand;
		} params;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EControllerHand UMagicLeapControllerFunctionLibrary::GetHandForMotionSource(const class FName& MotionSource)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource");
		
		struct
		{
			class FName                                        MotionSource;
		} params;
		params.MotionSource = MotionSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::GetControllerType(const class FName& MotionSource)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType");
		
		struct
		{
			class FName                                        MotionSource;
		} params;
		params.MotionSource = MotionSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode
	 * 		Flags  -> ()
	 */
	EMagicLeapControllerTrackingMode UMagicLeapControllerFunctionLibrary::GetControllerTrackingMode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode");
		
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
	 * 		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ControllerIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControllerHand                                    Hand                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapControllerFunctionLibrary::GetControllerMapping(int32_t ControllerIndex, EControllerHand* Hand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping");
		
		struct
		{
			int32_t                                            ControllerIndex;
			EControllerHand                                    Hand;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapControllerFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapControllerFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapController.MagicLeapControllerFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapTouchpadGesturesComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapTouchpadGesturesComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapController.MagicLeapTouchpadGesturesComponent");
		return ptr;
	}

}


