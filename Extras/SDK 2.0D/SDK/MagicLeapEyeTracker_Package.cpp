﻿/**
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
	 * 		Name   -> Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetEyeBlinkState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMagicLeapEyeBlinkState                     BlinkState                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapEyeTrackerFunctionLibrary::GetEyeBlinkState(struct FMagicLeapEyeBlinkState* BlinkState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetEyeBlinkState");
		
		struct
		{
			struct FMagicLeapEyeBlinkState                     BlinkState;
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BlinkState != nullptr)
			*BlinkState = params.BlinkState;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetCalibrationStatus
	 * 		Flags  -> ()
	 */
	MagicLeapEyeTracker_EMagicLeapEyeTrackingCalibrationStatus UMagicLeapEyeTrackerFunctionLibrary::GetCalibrationStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetCalibrationStatus");
		
		struct
		{
			MagicLeapEyeTracker_EMagicLeapEyeTrackingCalibrationStatus ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapEyeTrackerFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapEyeTrackerFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary");
		return ptr;
	}

}


