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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.MoveTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULowEntryFileManagerDirectory*               NewDirectory                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OverrideExistingFiles                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerDirectory::MoveTo(class ULowEntryFileManagerDirectory* NewDirectory, bool OverrideExistingFiles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.MoveTo");
		
		struct
		{
			class ULowEntryFileManagerDirectory*               NewDirectory;
			bool                                               OverrideExistingFiles;
		} params;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.IsRootBool");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.IsRoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELowEntryFileManagerYesNo                          Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerDirectory::IsRoot(ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.IsRoot");
		
		struct
		{
			ELowEntryFileManagerYesNo                          Branch;
		} params;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.IsEmptyBool");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.IsEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELowEntryFileManagerYesNo                          Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerDirectory::IsEmpty(ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.IsEmpty");
		
		struct
		{
			ELowEntryFileManagerYesNo                          Branch;
		} params;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetPath");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetParentDirectory
	 * 		Flags  -> ()
	 */
	class ULowEntryFileManagerDirectory* ULowEntryFileManagerDirectory::GetParentDirectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetParentDirectory");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetName
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerDirectory::GetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetName");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFiles
	 * 		Flags  -> ()
	 */
	TArray<class ULowEntryFileManagerFile*> ULowEntryFileManagerDirectory::GetFiles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFiles");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryFileManagerFile* ULowEntryFileManagerDirectory::GetFile(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFile");
		
		struct
		{
			class FString                                      File;
		} params;
		params.File = File;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetDirectory");
		
		struct
		{
			class FString                                      Directory_;
		} params;
		params.Directory_ = Directory_;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetDirectories");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetAbsolutePath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerDirectory::GetAbsolutePath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetAbsolutePath");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.ExistsBool
	 * 		Flags  -> ()
	 */
	bool ULowEntryFileManagerDirectory::ExistsBool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.ExistsBool");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.Exists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELowEntryFileManagerYesNo                          Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerDirectory::Exists(ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.Exists");
		
		struct
		{
			ELowEntryFileManagerYesNo                          Branch;
		} params;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.Delete");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.Create
	 * 		Flags  -> ()
	 */
	void ULowEntryFileManagerDirectory::Create()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.Create");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.CopyTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULowEntryFileManagerDirectory*               NewDirectory                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OverrideExistingFiles                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerDirectory::CopyTo(class ULowEntryFileManagerDirectory* NewDirectory, bool OverrideExistingFiles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.CopyTo");
		
		struct
		{
			class ULowEntryFileManagerDirectory*               NewDirectory;
			bool                                               OverrideExistingFiles;
		} params;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.Clear");
		
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
	 * 		Name   -> PredefindFunction ULowEntryFileManagerDirectory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryFileManagerDirectory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryFileManager.LowEntryFileManagerDirectory");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.Size");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.SetTimestamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   Timestamp                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::SetTimestamp(const struct FDateTime& Timestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.SetTimestamp");
		
		struct
		{
			struct FDateTime                                   Timestamp;
		} params;
		params.Timestamp = Timestamp;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.SetReadOnly");
		
		struct
		{
			bool                                               ReadOnly;
		} params;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.SetData");
		
		struct
		{
			TArray<unsigned char>                              Data;
		} params;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.MoveTo");
		
		struct
		{
			class ULowEntryFileManagerFile*                    NewFile;
		} params;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.IsReadOnlyBool");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.IsReadOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELowEntryFileManagerYesNo                          Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::IsReadOnly(ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.IsReadOnly");
		
		struct
		{
			ELowEntryFileManagerYesNo                          Branch;
		} params;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.IsEmptyBool");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.IsEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELowEntryFileManagerYesNo                          Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::IsEmpty(ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.IsEmpty");
		
		struct
		{
			ELowEntryFileManagerYesNo                          Branch;
		} params;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetTimestamp");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetPath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerFile::GetPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetPath");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetParentDirectory
	 * 		Flags  -> ()
	 */
	class ULowEntryFileManagerDirectory* ULowEntryFileManagerFile::GetParentDirectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetParentDirectory");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetNameWithoutExtension
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerFile::GetNameWithoutExtension()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetNameWithoutExtension");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetName
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerFile::GetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetName");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetExtension
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerFile::GetExtension()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetExtension");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetData
	 * 		Flags  -> ()
	 */
	TArray<unsigned char> ULowEntryFileManagerFile::GetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetData");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetAccessTimestamp
	 * 		Flags  -> ()
	 */
	struct FDateTime ULowEntryFileManagerFile::GetAccessTimestamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetAccessTimestamp");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetAbsolutePath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerFile::GetAbsolutePath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetAbsolutePath");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.ExistsBool
	 * 		Flags  -> ()
	 */
	bool ULowEntryFileManagerFile::ExistsBool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.ExistsBool");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Exists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELowEntryFileManagerYesNo                          Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::Exists(ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.Exists");
		
		struct
		{
			ELowEntryFileManagerYesNo                          Branch;
		} params;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.ExecuteAsync");
		
		struct
		{
			class FString                                      Parameters;
			bool                                               Success;
			int32_t                                            ProcessID;
			bool                                               Hidden;
			int32_t                                            Priority;
			class ULowEntryFileManagerDirectory*               OptionalWorkingDirectory;
		} params;
		params.Parameters = Parameters;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.Execute");
		
		struct
		{
			class FString                                      Parameters;
			bool                                               Success;
			int32_t                                            ReturnCode;
			class FString                                      StdOut;
			class FString                                      StdErr;
		} params;
		params.Parameters = Parameters;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.Delete");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Create
	 * 		Flags  -> ()
	 */
	void ULowEntryFileManagerFile::Create()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.Create");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.CopyTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULowEntryFileManagerFile*                    NewFile                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::CopyTo(class ULowEntryFileManagerFile* NewFile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.CopyTo");
		
		struct
		{
			class ULowEntryFileManagerFile*                    NewFile;
		} params;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.Clear");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.AppendData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::AppendData(TArray<unsigned char> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.AppendData");
		
		struct
		{
			TArray<unsigned char>                              Data;
		} params;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryFileManager.LowEntryFileManagerFile");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.SplitPath");
		
		struct
		{
			class FString                                      Path;
			class FString                                      PathPart;
			class FString                                      NamePart;
		} params;
		params.Path = Path;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.SplitName");
		
		struct
		{
			class FString                                      Name;
			class FString                                      NamePart;
			class FString                                      ExtensionPart;
		} params;
		params.Name = Name;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileTimestamp");
		
		struct
		{
			class FString                                      File;
			struct FDateTime                                   Timestamp;
		} params;
		params.File = File;
		params.Timestamp = Timestamp;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileReadOnly");
		
		struct
		{
			class FString                                      File;
			bool                                               ReadOnly;
		} params;
		params.File = File;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileData");
		
		struct
		{
			class FString                                      File;
			TArray<unsigned char>                              Data;
		} params;
		params.File = File;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceInvalidPathCharacters");
		
		struct
		{
			class FString                                      String;
			class FString                                      ReplacementCharacter;
		} params;
		params.String = String;
		params.ReplacementCharacter = ReplacementCharacter;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceInvalidFilenameCharacters");
		
		struct
		{
			class FString                                      String;
			class FString                                      ReplacementCharacter;
		} params;
		params.String = String;
		params.ReplacementCharacter = ReplacementCharacter;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceBackslashesBySlashes");
		
		struct
		{
			class FString                                      String;
		} params;
		params.String = String;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.RemoveInvalidPathCharacters");
		
		struct
		{
			class FString                                      String;
		} params;
		params.String = String;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.RemoveInvalidFilenameCharacters");
		
		struct
		{
			class FString                                      String;
		} params;
		params.String = String;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.RelativeToAbsolutePath");
		
		struct
		{
			class FString                                      RelativePath;
		} params;
		params.RelativePath = RelativePath;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.MoveFile");
		
		struct
		{
			class FString                                      File;
			class FString                                      to;
		} params;
		params.File = File;
		params.to = to;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.MoveDirectory");
		
		struct
		{
			class FString                                      Directory;
			class FString                                      to;
			bool                                               OverrideExistingFiles;
		} params;
		params.Directory = Directory;
		params.to = to;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileReadOnlyBool");
		
		struct
		{
			class FString                                      File;
		} params;
		params.File = File;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileReadOnly");
		
		struct
		{
			class FString                                      File;
			ELowEntryFileManagerYesNo                          Branch;
		} params;
		params.File = File;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileEmptyBool");
		
		struct
		{
			class FString                                      File;
		} params;
		params.File = File;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileEmpty");
		
		struct
		{
			class FString                                      File;
			ELowEntryFileManagerYesNo                          Branch;
		} params;
		params.File = File;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsDirectoryEmptyBool");
		
		struct
		{
			class FString                                      Directory;
		} params;
		params.Directory = Directory;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsDirectoryEmpty");
		
		struct
		{
			class FString                                      Directory;
			ELowEntryFileManagerYesNo                          Branch;
		} params;
		params.Directory = Directory;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.HasDiskPathsBool");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.HasDiskPaths
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELowEntryFileManagerYesNo                          Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::HasDiskPaths(ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.HasDiskPaths");
		
		struct
		{
			ELowEntryFileManagerYesNo                          Branch;
		} params;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetRootDirPath");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetRoot
	 * 		Flags  -> ()
	 */
	class ULowEntryFileManagerDirectory* ULowEntryFileManagerLibrary::GetRoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetRoot");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetProjectFilePath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerLibrary::GetProjectFilePath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetProjectFilePath");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameUserDirPath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerLibrary::GetGameUserDirPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameUserDirPath");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameSavedDirPath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerLibrary::GetGameSavedDirPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameSavedDirPath");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGamePersistentDownloadDirPath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerLibrary::GetGamePersistentDownloadDirPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGamePersistentDownloadDirPath");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameDirPath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerLibrary::GetGameDirPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameDirPath");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileTimestamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDateTime ULowEntryFileManagerLibrary::GetFileTimestamp(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileTimestamp");
		
		struct
		{
			class FString                                      File;
		} params;
		params.File = File;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileSize");
		
		struct
		{
			class FString                                      File;
		} params;
		params.File = File;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFiles");
		
		struct
		{
			class FString                                      Directory;
		} params;
		params.Directory = Directory;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileNames");
		
		struct
		{
			class FString                                      Directory;
		} params;
		params.Directory = Directory;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileData");
		
		struct
		{
			class FString                                      File;
		} params;
		params.File = File;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileAccessTimestamp");
		
		struct
		{
			class FString                                      File;
		} params;
		params.File = File;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetEngineSavedDirPath");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetEngineDirPath
	 * 		Flags  -> ()
	 */
	class FString ULowEntryFileManagerLibrary::GetEngineDirPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetEngineDirPath");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDisks
	 * 		Flags  -> ()
	 */
	TArray<class ULowEntryFileManagerDirectory*> ULowEntryFileManagerLibrary::GetDisks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDisks");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDiskPaths
	 * 		Flags  -> ()
	 */
	TArray<class FString> ULowEntryFileManagerLibrary::GetDiskPaths()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDiskPaths");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectoryNames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> ULowEntryFileManagerLibrary::GetDirectoryNames(const class FString& Directory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectoryNames");
		
		struct
		{
			class FString                                      Directory;
		} params;
		params.Directory = Directory;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectory");
		
		struct
		{
			class FString                                      Path;
		} params;
		params.Path = Path;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectories");
		
		struct
		{
			class FString                                      Directory;
		} params;
		params.Directory = Directory;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetCloudDirPath");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetAbsoluteRoot
	 * 		Flags  -> ()
	 */
	class ULowEntryFileManagerDirectory* ULowEntryFileManagerLibrary::GetAbsoluteRoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetAbsoluteRoot");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.FileExistsBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryFileManagerLibrary::FileExistsBool(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.FileExistsBool");
		
		struct
		{
			class FString                                      File;
		} params;
		params.File = File;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.FileExists");
		
		struct
		{
			class FString                                      File;
			ELowEntryFileManagerYesNo                          Branch;
		} params;
		params.File = File;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ExecuteFileAsync");
		
		struct
		{
			class FString                                      File;
			class FString                                      Parameters;
			bool                                               Success;
			int32_t                                            ProcessID;
			bool                                               Hidden;
			int32_t                                            Priority;
			class FString                                      OptionalWorkingDirectory;
		} params;
		params.File = File;
		params.Parameters = Parameters;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ExecuteFile");
		
		struct
		{
			class FString                                      File;
			class FString                                      Parameters;
			bool                                               Success;
			int32_t                                            ReturnCode;
			class FString                                      StdOut;
			class FString                                      StdErr;
		} params;
		params.File = File;
		params.Parameters = Parameters;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.DirectoryExistsBool");
		
		struct
		{
			class FString                                      Directory;
		} params;
		params.Directory = Directory;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.DirectoryExists");
		
		struct
		{
			class FString                                      Directory;
			ELowEntryFileManagerYesNo                          Branch;
		} params;
		params.Directory = Directory;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.DeleteFile");
		
		struct
		{
			class FString                                      File;
		} params;
		params.File = File;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.DeleteDirectory");
		
		struct
		{
			class FString                                      Directory;
		} params;
		params.Directory = Directory;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateParentDirectory");
		
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
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateNewFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::CreateNewFile(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateNewFile");
		
		struct
		{
			class FString                                      File;
		} params;
		params.File = File;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateNewDirectory");
		
		struct
		{
			class FString                                      Directory;
		} params;
		params.Directory = Directory;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.CopyFile");
		
		struct
		{
			class FString                                      File;
			class FString                                      to;
		} params;
		params.File = File;
		params.to = to;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.CopyDirectory");
		
		struct
		{
			class FString                                      Directory;
			class FString                                      to;
			bool                                               OverrideExistingFiles;
		} params;
		params.Directory = Directory;
		params.to = to;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ClearFile");
		
		struct
		{
			class FString                                      File;
		} params;
		params.File = File;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ClearDirectory");
		
		struct
		{
			class FString                                      Directory;
		} params;
		params.Directory = Directory;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.AppendFileData");
		
		struct
		{
			class FString                                      File;
			TArray<unsigned char>                              Data;
		} params;
		params.File = File;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryFileManager.LowEntryFileManagerLibrary");
		return ptr;
	}

}


