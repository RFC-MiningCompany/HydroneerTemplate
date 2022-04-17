/**
 * Name: Hydroneer
 * Version: 2.0N
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.MoveTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULowEntryFileManagerDirectory*               NewDirectory                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OverrideExistingFiles                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerDirectory::MoveTo(class ULowEntryFileManagerDirectory* NewDirectory, bool OverrideExistingFiles)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerDirectory.MoveTo"));
		
		ULowEntryFileManagerDirectory_MoveTo_Params params {};
		params.NewDirectory = NewDirectory;
		params.OverrideExistingFiles = OverrideExistingFiles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.IsRootBool
	 * 		Flags  -> ()
	 */
	bool ULowEntryFileManagerDirectory::IsRootBool()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerDirectory.IsRootBool"));
		
		ULowEntryFileManagerDirectory_IsRootBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.IsRoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELowEntryFileManagerYesNo                          Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerDirectory::IsRoot(ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerDirectory.IsRoot"));
		
		ULowEntryFileManagerDirectory_IsRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.IsEmptyBool
	 * 		Flags  -> ()
	 */
	bool ULowEntryFileManagerDirectory::IsEmptyBool()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerDirectory.IsEmptyBool"));
		
		ULowEntryFileManagerDirectory_IsEmptyBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.IsEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELowEntryFileManagerYesNo                          Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerDirectory::IsEmpty(ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerDirectory.IsEmpty"));
		
		ULowEntryFileManagerDirectory_IsEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetPath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerDirectory::GetPath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetPath"));
		
		ULowEntryFileManagerDirectory_GetPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetParentDirectory
	 * 		Flags  -> ()
	 */
	class ULowEntryFileManagerDirectory* ULowEntryFileManagerDirectory::GetParentDirectory()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetParentDirectory"));
		
		ULowEntryFileManagerDirectory_GetParentDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetName
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerDirectory::GetName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetName"));
		
		ULowEntryFileManagerDirectory_GetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFiles
	 * 		Flags  -> ()
	 */
	TArray<class ULowEntryFileManagerFile*> ULowEntryFileManagerDirectory::GetFiles()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFiles"));
		
		ULowEntryFileManagerDirectory_GetFiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryFileManagerFile* ULowEntryFileManagerDirectory::GetFile(const class FString& File)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFile"));
		
		ULowEntryFileManagerDirectory_GetFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory_                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryFileManagerDirectory* ULowEntryFileManagerDirectory::GetDirectory(const class FString& Directory_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetDirectory"));
		
		ULowEntryFileManagerDirectory_GetDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetDirectories
	 * 		Flags  -> ()
	 */
	TArray<class ULowEntryFileManagerDirectory*> ULowEntryFileManagerDirectory::GetDirectories()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetDirectories"));
		
		ULowEntryFileManagerDirectory_GetDirectories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetAbsolutePath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerDirectory::GetAbsolutePath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetAbsolutePath"));
		
		ULowEntryFileManagerDirectory_GetAbsolutePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.ExistsBool
	 * 		Flags  -> ()
	 */
	bool ULowEntryFileManagerDirectory::ExistsBool()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerDirectory.ExistsBool"));
		
		ULowEntryFileManagerDirectory_ExistsBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.Exists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELowEntryFileManagerYesNo                          Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerDirectory::Exists(ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerDirectory.Exists"));
		
		ULowEntryFileManagerDirectory_Exists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.Delete
	 * 		Flags  -> ()
	 */
	void ULowEntryFileManagerDirectory::Delete()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerDirectory.Delete"));
		
		ULowEntryFileManagerDirectory_Delete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.Create
	 * 		Flags  -> ()
	 */
	void ULowEntryFileManagerDirectory::Create()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerDirectory.Create"));
		
		ULowEntryFileManagerDirectory_Create_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.CopyTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULowEntryFileManagerDirectory*               NewDirectory                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OverrideExistingFiles                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerDirectory::CopyTo(class ULowEntryFileManagerDirectory* NewDirectory, bool OverrideExistingFiles)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerDirectory.CopyTo"));
		
		ULowEntryFileManagerDirectory_CopyTo_Params params {};
		params.NewDirectory = NewDirectory;
		params.OverrideExistingFiles = OverrideExistingFiles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.Clear
	 * 		Flags  -> ()
	 */
	void ULowEntryFileManagerDirectory::Clear()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerDirectory.Clear"));
		
		ULowEntryFileManagerDirectory_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryFileManagerDirectory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryFileManagerDirectory::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class LowEntryFileManager.LowEntryFileManagerDirectory"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Size
	 * 		Flags  -> ()
	 */
	int32_t ULowEntryFileManagerFile::Size()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.Size"));
		
		ULowEntryFileManagerFile_Size_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.SetTimestamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   Timestamp                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::SetTimestamp(const struct FDateTime& Timestamp)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.SetTimestamp"));
		
		ULowEntryFileManagerFile_SetTimestamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.SetReadOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReadOnly                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::SetReadOnly(bool ReadOnly)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.SetReadOnly"));
		
		ULowEntryFileManagerFile_SetReadOnly_Params params {};
		params.ReadOnly = ReadOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::SetData(TArray<unsigned char> Data)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.SetData"));
		
		ULowEntryFileManagerFile_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.MoveTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULowEntryFileManagerFile*                    NewFile                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::MoveTo(class ULowEntryFileManagerFile* NewFile)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.MoveTo"));
		
		ULowEntryFileManagerFile_MoveTo_Params params {};
		params.NewFile = NewFile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.IsReadOnlyBool
	 * 		Flags  -> ()
	 */
	bool ULowEntryFileManagerFile::IsReadOnlyBool()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.IsReadOnlyBool"));
		
		ULowEntryFileManagerFile_IsReadOnlyBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.IsReadOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELowEntryFileManagerYesNo                          Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::IsReadOnly(ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.IsReadOnly"));
		
		ULowEntryFileManagerFile_IsReadOnly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.IsEmptyBool
	 * 		Flags  -> ()
	 */
	bool ULowEntryFileManagerFile::IsEmptyBool()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.IsEmptyBool"));
		
		ULowEntryFileManagerFile_IsEmptyBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.IsEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELowEntryFileManagerYesNo                          Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::IsEmpty(ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.IsEmpty"));
		
		ULowEntryFileManagerFile_IsEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetTimestamp
	 * 		Flags  -> ()
	 */
	struct FDateTime ULowEntryFileManagerFile::GetTimestamp()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.GetTimestamp"));
		
		ULowEntryFileManagerFile_GetTimestamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetPath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerFile::GetPath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.GetPath"));
		
		ULowEntryFileManagerFile_GetPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetParentDirectory
	 * 		Flags  -> ()
	 */
	class ULowEntryFileManagerDirectory* ULowEntryFileManagerFile::GetParentDirectory()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.GetParentDirectory"));
		
		ULowEntryFileManagerFile_GetParentDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetNameWithoutExtension
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerFile::GetNameWithoutExtension()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.GetNameWithoutExtension"));
		
		ULowEntryFileManagerFile_GetNameWithoutExtension_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetName
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerFile::GetName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.GetName"));
		
		ULowEntryFileManagerFile_GetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetExtension
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerFile::GetExtension()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.GetExtension"));
		
		ULowEntryFileManagerFile_GetExtension_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetData
	 * 		Flags  -> ()
	 */
	TArray<unsigned char> ULowEntryFileManagerFile::GetData()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.GetData"));
		
		ULowEntryFileManagerFile_GetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetAccessTimestamp
	 * 		Flags  -> ()
	 */
	struct FDateTime ULowEntryFileManagerFile::GetAccessTimestamp()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.GetAccessTimestamp"));
		
		ULowEntryFileManagerFile_GetAccessTimestamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetAbsolutePath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerFile::GetAbsolutePath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.GetAbsolutePath"));
		
		ULowEntryFileManagerFile_GetAbsolutePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.ExistsBool
	 * 		Flags  -> ()
	 */
	bool ULowEntryFileManagerFile::ExistsBool()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.ExistsBool"));
		
		ULowEntryFileManagerFile_ExistsBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Exists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELowEntryFileManagerYesNo                          Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::Exists(ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.Exists"));
		
		ULowEntryFileManagerFile_Exists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.ExecuteAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Parameters                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ProcessID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Hidden                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULowEntryFileManagerDirectory*               OptionalWorkingDirectory                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::ExecuteAsync(const class FString& Parameters, bool* Success, int32_t* ProcessID, bool Hidden, int32_t Priority, class ULowEntryFileManagerDirectory* OptionalWorkingDirectory)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.ExecuteAsync"));
		
		ULowEntryFileManagerFile_ExecuteAsync_Params params {};
		params.Hidden = Hidden;
		params.Priority = Priority;
		params.OptionalWorkingDirectory = OptionalWorkingDirectory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ProcessID != nullptr)
			*ProcessID = params.ProcessID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Execute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Parameters                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnCode                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StdOut                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StdErr                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::Execute(const class FString& Parameters, bool* Success, int32_t* ReturnCode, class FString* StdOut, class FString* StdErr)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.Execute"));
		
		ULowEntryFileManagerFile_Execute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ReturnCode != nullptr)
			*ReturnCode = params.ReturnCode;
		if (StdOut != nullptr)
			*StdOut = params.StdOut;
		if (StdErr != nullptr)
			*StdErr = params.StdErr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Delete
	 * 		Flags  -> ()
	 */
	void ULowEntryFileManagerFile::Delete()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.Delete"));
		
		ULowEntryFileManagerFile_Delete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Create
	 * 		Flags  -> ()
	 */
	void ULowEntryFileManagerFile::Create()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.Create"));
		
		ULowEntryFileManagerFile_Create_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.CopyTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULowEntryFileManagerFile*                    NewFile                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::CopyTo(class ULowEntryFileManagerFile* NewFile)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.CopyTo"));
		
		ULowEntryFileManagerFile_CopyTo_Params params {};
		params.NewFile = NewFile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Clear
	 * 		Flags  -> ()
	 */
	void ULowEntryFileManagerFile::Clear()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.Clear"));
		
		ULowEntryFileManagerFile_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.AppendData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::AppendData(TArray<unsigned char> Data)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerFile.AppendData"));
		
		ULowEntryFileManagerFile_AppendData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryFileManagerFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryFileManagerFile::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class LowEntryFileManager.LowEntryFileManagerFile"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.SplitPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PathPart                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NamePart                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::SplitPath(const class FString& Path, class FString* PathPart, class FString* NamePart)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.SplitPath"));
		
		ULowEntryFileManagerLibrary_SplitPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PathPart != nullptr)
			*PathPart = params.PathPart;
		if (NamePart != nullptr)
			*NamePart = params.NamePart;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.SplitName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NamePart                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExtensionPart                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::SplitName(const class FString& Name, class FString* NamePart, class FString* ExtensionPart)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.SplitName"));
		
		ULowEntryFileManagerLibrary_SplitName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NamePart != nullptr)
			*NamePart = params.NamePart;
		if (ExtensionPart != nullptr)
			*ExtensionPart = params.ExtensionPart;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileTimestamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   Timestamp                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::SetFileTimestamp(const class FString& File, const struct FDateTime& Timestamp)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileTimestamp"));
		
		ULowEntryFileManagerLibrary_SetFileTimestamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileReadOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReadOnly                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::SetFileReadOnly(const class FString& File, bool ReadOnly)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileReadOnly"));
		
		ULowEntryFileManagerLibrary_SetFileReadOnly_Params params {};
		params.ReadOnly = ReadOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::SetFileData(const class FString& File, TArray<unsigned char> Data)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileData"));
		
		ULowEntryFileManagerLibrary_SetFileData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceInvalidPathCharacters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReplacementCharacter                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryFileManagerLibrary::ReplaceInvalidPathCharacters(const class FString& String, const class FString& ReplacementCharacter)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceInvalidPathCharacters"));
		
		ULowEntryFileManagerLibrary_ReplaceInvalidPathCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceInvalidFilenameCharacters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReplacementCharacter                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryFileManagerLibrary::ReplaceInvalidFilenameCharacters(const class FString& String, const class FString& ReplacementCharacter)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceInvalidFilenameCharacters"));
		
		ULowEntryFileManagerLibrary_ReplaceInvalidFilenameCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceBackslashesBySlashes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryFileManagerLibrary::ReplaceBackslashesBySlashes(const class FString& String)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceBackslashesBySlashes"));
		
		ULowEntryFileManagerLibrary_ReplaceBackslashesBySlashes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.RemoveInvalidPathCharacters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryFileManagerLibrary::RemoveInvalidPathCharacters(const class FString& String)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.RemoveInvalidPathCharacters"));
		
		ULowEntryFileManagerLibrary_RemoveInvalidPathCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.RemoveInvalidFilenameCharacters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryFileManagerLibrary::RemoveInvalidFilenameCharacters(const class FString& String)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.RemoveInvalidFilenameCharacters"));
		
		ULowEntryFileManagerLibrary_RemoveInvalidFilenameCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.RelativeToAbsolutePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      RelativePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryFileManagerLibrary::RelativeToAbsolutePath(const class FString& RelativePath)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.RelativeToAbsolutePath"));
		
		ULowEntryFileManagerLibrary_RelativeToAbsolutePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.MoveFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      to                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::MoveFile(const class FString& File, const class FString& to)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.MoveFile"));
		
		ULowEntryFileManagerLibrary_MoveFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.MoveDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      to                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OverrideExistingFiles                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::MoveDirectory(const class FString& Directory, const class FString& to, bool OverrideExistingFiles)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.MoveDirectory"));
		
		ULowEntryFileManagerLibrary_MoveDirectory_Params params {};
		params.OverrideExistingFiles = OverrideExistingFiles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileReadOnlyBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryFileManagerLibrary::IsFileReadOnlyBool(const class FString& File)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileReadOnlyBool"));
		
		ULowEntryFileManagerLibrary_IsFileReadOnlyBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileReadOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELowEntryFileManagerYesNo                          Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::IsFileReadOnly(const class FString& File, ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileReadOnly"));
		
		ULowEntryFileManagerLibrary_IsFileReadOnly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileEmptyBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryFileManagerLibrary::IsFileEmptyBool(const class FString& File)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileEmptyBool"));
		
		ULowEntryFileManagerLibrary_IsFileEmptyBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELowEntryFileManagerYesNo                          Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::IsFileEmpty(const class FString& File, ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileEmpty"));
		
		ULowEntryFileManagerLibrary_IsFileEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.IsDirectoryEmptyBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryFileManagerLibrary::IsDirectoryEmptyBool(const class FString& Directory)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsDirectoryEmptyBool"));
		
		ULowEntryFileManagerLibrary_IsDirectoryEmptyBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.IsDirectoryEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELowEntryFileManagerYesNo                          Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::IsDirectoryEmpty(const class FString& Directory, ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsDirectoryEmpty"));
		
		ULowEntryFileManagerLibrary_IsDirectoryEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.HasDiskPathsBool
	 * 		Flags  -> ()
	 */
	bool ULowEntryFileManagerLibrary::HasDiskPathsBool()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.HasDiskPathsBool"));
		
		ULowEntryFileManagerLibrary_HasDiskPathsBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.HasDiskPaths
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELowEntryFileManagerYesNo                          Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::HasDiskPaths(ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.HasDiskPaths"));
		
		ULowEntryFileManagerLibrary_HasDiskPaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetRootDirPath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerLibrary::GetRootDirPath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetRootDirPath"));
		
		ULowEntryFileManagerLibrary_GetRootDirPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetRoot
	 * 		Flags  -> ()
	 */
	class ULowEntryFileManagerDirectory* ULowEntryFileManagerLibrary::GetRoot()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetRoot"));
		
		ULowEntryFileManagerLibrary_GetRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetProjectFilePath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerLibrary::GetProjectFilePath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetProjectFilePath"));
		
		ULowEntryFileManagerLibrary_GetProjectFilePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameUserDirPath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerLibrary::GetGameUserDirPath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameUserDirPath"));
		
		ULowEntryFileManagerLibrary_GetGameUserDirPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameSavedDirPath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerLibrary::GetGameSavedDirPath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameSavedDirPath"));
		
		ULowEntryFileManagerLibrary_GetGameSavedDirPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGamePersistentDownloadDirPath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerLibrary::GetGamePersistentDownloadDirPath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGamePersistentDownloadDirPath"));
		
		ULowEntryFileManagerLibrary_GetGamePersistentDownloadDirPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameDirPath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerLibrary::GetGameDirPath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameDirPath"));
		
		ULowEntryFileManagerLibrary_GetGameDirPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileTimestamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDateTime ULowEntryFileManagerLibrary::GetFileTimestamp(const class FString& File)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileTimestamp"));
		
		ULowEntryFileManagerLibrary_GetFileTimestamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ULowEntryFileManagerLibrary::GetFileSize(const class FString& File)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileSize"));
		
		ULowEntryFileManagerLibrary_GetFileSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFiles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> ULowEntryFileManagerLibrary::GetFiles(const class FString& Directory)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFiles"));
		
		ULowEntryFileManagerLibrary_GetFiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileNames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> ULowEntryFileManagerLibrary::GetFileNames(const class FString& Directory)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileNames"));
		
		ULowEntryFileManagerLibrary_GetFileNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryFileManagerLibrary::GetFileData(const class FString& File)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileData"));
		
		ULowEntryFileManagerLibrary_GetFileData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileAccessTimestamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDateTime ULowEntryFileManagerLibrary::GetFileAccessTimestamp(const class FString& File)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileAccessTimestamp"));
		
		ULowEntryFileManagerLibrary_GetFileAccessTimestamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetEngineSavedDirPath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerLibrary::GetEngineSavedDirPath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetEngineSavedDirPath"));
		
		ULowEntryFileManagerLibrary_GetEngineSavedDirPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetEngineDirPath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerLibrary::GetEngineDirPath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetEngineDirPath"));
		
		ULowEntryFileManagerLibrary_GetEngineDirPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDisks
	 * 		Flags  -> ()
	 */
	TArray<class ULowEntryFileManagerDirectory*> ULowEntryFileManagerLibrary::GetDisks()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDisks"));
		
		ULowEntryFileManagerLibrary_GetDisks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDiskPaths
	 * 		Flags  -> ()
	 */
	TArray<class FString> ULowEntryFileManagerLibrary::GetDiskPaths()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDiskPaths"));
		
		ULowEntryFileManagerLibrary_GetDiskPaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectoryNames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> ULowEntryFileManagerLibrary::GetDirectoryNames(const class FString& Directory)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectoryNames"));
		
		ULowEntryFileManagerLibrary_GetDirectoryNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryFileManagerDirectory* ULowEntryFileManagerLibrary::GetDirectory(const class FString& Path)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectory"));
		
		ULowEntryFileManagerLibrary_GetDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectories
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> ULowEntryFileManagerLibrary::GetDirectories(const class FString& Directory)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectories"));
		
		ULowEntryFileManagerLibrary_GetDirectories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetCloudDirPath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerLibrary::GetCloudDirPath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetCloudDirPath"));
		
		ULowEntryFileManagerLibrary_GetCloudDirPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetAbsoluteRoot
	 * 		Flags  -> ()
	 */
	class ULowEntryFileManagerDirectory* ULowEntryFileManagerLibrary::GetAbsoluteRoot()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetAbsoluteRoot"));
		
		ULowEntryFileManagerLibrary_GetAbsoluteRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.FileExistsBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryFileManagerLibrary::FileExistsBool(const class FString& File)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.FileExistsBool"));
		
		ULowEntryFileManagerLibrary_FileExistsBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.FileExists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELowEntryFileManagerYesNo                          Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::FileExists(const class FString& File, ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.FileExists"));
		
		ULowEntryFileManagerLibrary_FileExists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ExecuteFileAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameters                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ProcessID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Hidden                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OptionalWorkingDirectory                                   (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::ExecuteFileAsync(const class FString& File, const class FString& Parameters, bool* Success, int32_t* ProcessID, bool Hidden, int32_t Priority, const class FString& OptionalWorkingDirectory)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.ExecuteFileAsync"));
		
		ULowEntryFileManagerLibrary_ExecuteFileAsync_Params params {};
		params.Hidden = Hidden;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ProcessID != nullptr)
			*ProcessID = params.ProcessID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ExecuteFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameters                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnCode                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StdOut                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StdErr                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::ExecuteFile(const class FString& File, const class FString& Parameters, bool* Success, int32_t* ReturnCode, class FString* StdOut, class FString* StdErr)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.ExecuteFile"));
		
		ULowEntryFileManagerLibrary_ExecuteFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ReturnCode != nullptr)
			*ReturnCode = params.ReturnCode;
		if (StdOut != nullptr)
			*StdOut = params.StdOut;
		if (StdErr != nullptr)
			*StdErr = params.StdErr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.DirectoryExistsBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryFileManagerLibrary::DirectoryExistsBool(const class FString& Directory)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.DirectoryExistsBool"));
		
		ULowEntryFileManagerLibrary_DirectoryExistsBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.DirectoryExists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELowEntryFileManagerYesNo                          Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::DirectoryExists(const class FString& Directory, ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.DirectoryExists"));
		
		ULowEntryFileManagerLibrary_DirectoryExists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.DeleteFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::DeleteFile(const class FString& File)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.DeleteFile"));
		
		ULowEntryFileManagerLibrary_DeleteFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.DeleteDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::DeleteDirectory(const class FString& Directory)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.DeleteDirectory"));
		
		ULowEntryFileManagerLibrary_DeleteDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateParentDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::CreateParentDirectory(const class FString& Path)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateParentDirectory"));
		
		ULowEntryFileManagerLibrary_CreateParentDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateNewFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::CreateNewFile(const class FString& File)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateNewFile"));
		
		ULowEntryFileManagerLibrary_CreateNewFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateNewDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::CreateNewDirectory(const class FString& Directory)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateNewDirectory"));
		
		ULowEntryFileManagerLibrary_CreateNewDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.CopyFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      to                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::CopyFile(const class FString& File, const class FString& to)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.CopyFile"));
		
		ULowEntryFileManagerLibrary_CopyFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.CopyDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      to                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OverrideExistingFiles                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::CopyDirectory(const class FString& Directory, const class FString& to, bool OverrideExistingFiles)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.CopyDirectory"));
		
		ULowEntryFileManagerLibrary_CopyDirectory_Params params {};
		params.OverrideExistingFiles = OverrideExistingFiles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ClearFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::ClearFile(const class FString& File)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.ClearFile"));
		
		ULowEntryFileManagerLibrary_ClearFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ClearDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::ClearDirectory(const class FString& Directory)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.ClearDirectory"));
		
		ULowEntryFileManagerLibrary_ClearDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.AppendFileData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::AppendFileData(const class FString& File, TArray<unsigned char> Data)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LowEntryFileManager.LowEntryFileManagerLibrary.AppendFileData"));
		
		ULowEntryFileManagerLibrary_AppendFileData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryFileManagerLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryFileManagerLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class LowEntryFileManager.LowEntryFileManagerLibrary"));
		return ptr;
	}

}


