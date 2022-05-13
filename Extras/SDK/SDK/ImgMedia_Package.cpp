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
	 * 		Name   -> Function ImgMedia.ImgMediaSource.SetSequencePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UImgMediaSource::SetSequencePath(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.SetSequencePath");
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImgMedia.ImgMediaSource.GetSequencePath
	 * 		Flags  -> ()
	 */
	class FString UImgMediaSource::GetSequencePath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.GetSequencePath");
		
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
	 * 		Name   -> Function ImgMedia.ImgMediaSource.GetProxies
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              OutProxies                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UImgMediaSource::GetProxies(TArray<class FString>* OutProxies)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.GetProxies");
		
		struct
		{
			TArray<class FString>                              OutProxies;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutProxies != nullptr)
			*OutProxies = params.OutProxies;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UImgMediaSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImgMediaSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ImgMedia.ImgMediaSource");
		return ptr;
	}

}


