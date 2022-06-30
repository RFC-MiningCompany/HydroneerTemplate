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
	 * 		Name   -> Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FImageWriteOptions                          Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UImageWriteBlueprintLibrary::ExportToDisk(class UTexture* Texture, const class FString& Filename, const struct FImageWriteOptions& Options)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk");
		
		struct
		{
			class UTexture*                                    Texture;
			class FString                                      Filename;
			struct FImageWriteOptions                          Options;
		} params;
		params.Texture = Texture;
		params.Filename = Filename;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UImageWriteBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImageWriteBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ImageWriteQueue.ImageWriteBlueprintLibrary");
		return ptr;
	}

}


