/**
 * Name: Hydroneer
 * Version: 2.0R
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
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.SetReadOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewReadOnlyValue                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::SetReadOnly(const class FString& inPath, bool bNewReadOnlyValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.SetReadOnly");
		
		UEasyFileSystemBPLibrary_SetReadOnly_Params params {};
		params.bNewReadOnlyValue = bNewReadOnlyValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.SaveStringToFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inPath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      textData                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::SaveStringToFile(const class FString& inPath, const class FString& textData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.SaveStringToFile");
		
		UEasyFileSystemBPLibrary_SaveStringToFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.SaveArrayToFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inPath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Array                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::SaveArrayToFile(const class FString& inPath, TArray<unsigned char> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.SaveArrayToFile");
		
		UEasyFileSystemBPLibrary_SaveArrayToFile_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.MoveFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      to                                                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      from                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::MoveFile(const class FString& to, const class FString& from)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.MoveFile");
		
		UEasyFileSystemBPLibrary_MoveFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.LoadFileToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inPath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UEasyFileSystemBPLibrary::LoadFileToString(const class FString& inPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.LoadFileToString");
		
		UEasyFileSystemBPLibrary_LoadFileToString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.LoadFileToArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inPath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Result                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::LoadFileToArray(const class FString& inPath, TArray<unsigned char>* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.LoadFileToArray");
		
		UEasyFileSystemBPLibrary_LoadFileToArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.IsReadOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::IsReadOnly(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.IsReadOnly");
		
		UEasyFileSystemBPLibrary_IsReadOnly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetStringFieldJson
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Data                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      fieldName                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UEasyFileSystemBPLibrary::GetStringFieldJson(const class FString& Data, const class FString& fieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetStringFieldJson");
		
		UEasyFileSystemBPLibrary_GetStringFieldJson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetSourceDir
	 * 		Flags  -> ()
	 */
	class FString UEasyFileSystemBPLibrary::GetSourceDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetSourceDir");
		
		UEasyFileSystemBPLibrary_GetSourceDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetSizeFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEasyFileSystemBPLibrary::GetSizeFile(const class FString& inPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetSizeFile");
		
		UEasyFileSystemBPLibrary_GetSizeFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetProjectFilePath
	 * 		Flags  -> ()
	 */
	class FString UEasyFileSystemBPLibrary::GetProjectFilePath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetProjectFilePath");
		
		UEasyFileSystemBPLibrary_GetProjectFilePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetIntegerFieldJson
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Data                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      fieldName                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEasyFileSystemBPLibrary::GetIntegerFieldJson(const class FString& Data, const class FString& fieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetIntegerFieldJson");
		
		UEasyFileSystemBPLibrary_GetIntegerFieldJson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetFilenameOnDisk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UEasyFileSystemBPLibrary::GetFilenameOnDisk(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetFilenameOnDisk");
		
		UEasyFileSystemBPLibrary_GetFilenameOnDisk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetExtension
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UEasyFileSystemBPLibrary::GetExtension(const class FString& inPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetExtension");
		
		UEasyFileSystemBPLibrary_GetExtension_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetEngineDir
	 * 		Flags  -> ()
	 */
	class FString UEasyFileSystemBPLibrary::GetEngineDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetEngineDir");
		
		UEasyFileSystemBPLibrary_GetEngineDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetBoolFieldJson
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Data                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      fieldName                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::GetBoolFieldJson(const class FString& Data, const class FString& fieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetBoolFieldJson");
		
		UEasyFileSystemBPLibrary_GetBoolFieldJson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.FindFiles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      fileExtension                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UEasyFileSystemBPLibrary::FindFiles(const class FString& Directory, const class FString& fileExtension)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.FindFiles");
		
		UEasyFileSystemBPLibrary_FindFiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.FileExists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::FileExists(const class FString& inPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.FileExists");
		
		UEasyFileSystemBPLibrary_FileExists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.DirectoryExists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::DirectoryExists(const class FString& inPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.DirectoryExists");
		
		UEasyFileSystemBPLibrary_DirectoryExists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.DeleteFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::DeleteFile(const class FString& inPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.DeleteFile");
		
		UEasyFileSystemBPLibrary_DeleteFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.DeleteDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::DeleteDirectory(const class FString& Directory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.DeleteDirectory");
		
		UEasyFileSystemBPLibrary_DeleteDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.CreateDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::CreateDirectory(const class FString& inPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.CreateDirectory");
		
		UEasyFileSystemBPLibrary_CreateDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.CopyFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      to                                                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      from                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::CopyFile(const class FString& to, const class FString& from)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.CopyFile");
		
		UEasyFileSystemBPLibrary_CopyFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.CopyDirectoryTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      destinationDirectory                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Source                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverwriteAllExisting                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::CopyDirectoryTree(const class FString& destinationDirectory, const class FString& Source, bool bOverwriteAllExisting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.CopyDirectoryTree");
		
		UEasyFileSystemBPLibrary_CopyDirectoryTree_Params params {};
		params.bOverwriteAllExisting = bOverwriteAllExisting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.ChangeExtension
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      inNewExtension                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UEasyFileSystemBPLibrary::ChangeExtension(const class FString& inPath, const class FString& inNewExtension)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.ChangeExtension");
		
		UEasyFileSystemBPLibrary_ChangeExtension_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEasyFileSystemBPLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEasyFileSystemBPLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFileSystem.EasyFileSystemBPLibrary");
		return ptr;
	}

}


