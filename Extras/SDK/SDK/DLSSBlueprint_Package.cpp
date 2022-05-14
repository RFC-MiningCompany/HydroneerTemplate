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
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Sharpness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDLSSLibrary::SetDLSSSharpness(float Sharpness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness");
		
		struct
		{
			float                                              Sharpness;
		} params;
		params.Sharpness = Sharpness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDLSSMode                                         DLSSMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDLSSLibrary::SetDLSSMode(EUDLSSMode DLSSMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.SetDLSSMode");
		
		struct
		{
			EUDLSSMode                                         DLSSMode;
		} params;
		params.DLSSMode = DLSSMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
	 * 		Flags  -> ()
	 */
	EUDLSSSupport UDLSSLibrary::QueryDLSSSupport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport");
		
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
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
	 * 		Flags  -> ()
	 */
	bool UDLSSLibrary::IsDLSSSupported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported");
		
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
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDLSSMode                                         DLSSMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDLSSLibrary::IsDLSSModeSupported(EUDLSSMode DLSSMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported");
		
		struct
		{
			EUDLSSMode                                         DLSSMode;
		} params;
		params.DLSSMode = DLSSMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
	 * 		Flags  -> ()
	 */
	TArray<EUDLSSMode> UDLSSLibrary::GetSupportedDLSSModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes");
		
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
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
	 * 		Flags  -> ()
	 */
	float UDLSSLibrary::GetDLSSSharpness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness");
		
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
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDLSSLibrary::GetDLSSScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange");
		
		struct
		{
			float                                              MinScreenPercentage;
			float                                              MaxScreenPercentage;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinScreenPercentage != nullptr)
			*MinScreenPercentage = params.MinScreenPercentage;
		if (MaxScreenPercentage != nullptr)
			*MaxScreenPercentage = params.MaxScreenPercentage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDLSSMode                                         DLSSMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   ScreenResolution                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSupported                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OptimalScreenPercentage                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsFixedScreenPercentage                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OptimalSharpness                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDLSSLibrary::GetDLSSModeInformation(EUDLSSMode DLSSMode, const struct FVector2D& ScreenResolution, bool* bIsSupported, float* OptimalScreenPercentage, bool* bIsFixedScreenPercentage, float* MinScreenPercentage, float* MaxScreenPercentage, float* OptimalSharpness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation");
		
		struct
		{
			EUDLSSMode                                         DLSSMode;
			struct FVector2D                                   ScreenResolution;
			bool                                               bIsSupported;
			float                                              OptimalScreenPercentage;
			bool                                               bIsFixedScreenPercentage;
			float                                              MinScreenPercentage;
			float                                              MaxScreenPercentage;
			float                                              OptimalSharpness;
		} params;
		params.DLSSMode = DLSSMode;
		params.ScreenResolution = ScreenResolution;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsSupported != nullptr)
			*bIsSupported = params.bIsSupported;
		if (OptimalScreenPercentage != nullptr)
			*OptimalScreenPercentage = params.OptimalScreenPercentage;
		if (bIsFixedScreenPercentage != nullptr)
			*bIsFixedScreenPercentage = params.bIsFixedScreenPercentage;
		if (MinScreenPercentage != nullptr)
			*MinScreenPercentage = params.MinScreenPercentage;
		if (MaxScreenPercentage != nullptr)
			*MaxScreenPercentage = params.MaxScreenPercentage;
		if (OptimalSharpness != nullptr)
			*OptimalSharpness = params.OptimalSharpness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
	 * 		Flags  -> ()
	 */
	EUDLSSMode UDLSSLibrary::GetDLSSMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSMode");
		
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
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinDriverVersionMajor                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinDriverVersionMinor                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDLSSLibrary::GetDLSSMinimumDriverVersion(int32_t* MinDriverVersionMajor, int32_t* MinDriverVersionMinor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion");
		
		struct
		{
			int32_t                                            MinDriverVersionMajor;
			int32_t                                            MinDriverVersionMinor;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinDriverVersionMajor != nullptr)
			*MinDriverVersionMajor = params.MinDriverVersionMajor;
		if (MinDriverVersionMinor != nullptr)
			*MinDriverVersionMinor = params.MinDriverVersionMinor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
	 * 		Flags  -> ()
	 */
	EUDLSSMode UDLSSLibrary::GetDefaultDLSSMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode");
		
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
	 * 		Name   -> PredefindFunction UDLSSLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDLSSLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DLSSBlueprint.DLSSLibrary");
		return ptr;
	}

}


