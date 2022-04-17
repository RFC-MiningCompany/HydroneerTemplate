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
	 * 		Name   -> Function PakLoader.AsyncPakDownloader.DownloadPak
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SavePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAsyncPakDownloader* UAsyncPakDownloader::DownloadPak(const class FString& URL, const class FString& SavePath)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.AsyncPakDownloader.DownloadPak"));
		
		UAsyncPakDownloader_DownloadPak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAsyncPakDownloader.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAsyncPakDownloader::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class PakLoader.AsyncPakDownloader"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.UnRegisterMountPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      RootPath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContentPath                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPakLoaderLibrary::UnRegisterMountPoint(const class FString& RootPath, const class FString& ContentPath)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.UnRegisterMountPoint"));
		
		UPakLoaderLibrary_UnRegisterMountPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.UnmountPakFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PakFilename                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPakLoaderLibrary::UnmountPakFile(const class FString& PakFilename)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.UnmountPakFile"));
		
		UPakLoaderLibrary_UnmountPakFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.TryConvertFilenameToLongPackageName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PackageName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPakLoaderLibrary::TryConvertFilenameToLongPackageName(const class FString& Filename, class FString* PackageName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.TryConvertFilenameToLongPackageName"));
		
		UPakLoaderLibrary_TryConvertFilenameToLongPackageName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PackageName != nullptr)
			*PackageName = params.PackageName;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.SHA1SUM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UPakLoaderLibrary::SHA1SUM(const class FString& Filename)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.SHA1SUM"));
		
		UPakLoaderLibrary_SHA1SUM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.RuntimeLog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPakLoaderLibrary::RuntimeLog(const class FString& Text)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.RuntimeLog"));
		
		UPakLoaderLibrary_RuntimeLog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.RegisterMountPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      RootPath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContentPath                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPakLoaderLibrary::RegisterMountPoint(const class FString& RootPath, const class FString& ContentPath)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.RegisterMountPoint"));
		
		UPakLoaderLibrary_RegisterMountPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.RegisterEncryptionKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Guid                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AesKey                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPakLoaderLibrary::RegisterEncryptionKey(const class FString& Guid, const class FString& AesKey)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.RegisterEncryptionKey"));
		
		UPakLoaderLibrary_RegisterEncryptionKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.ProjectPersistentDownloadDir
	 * 		Flags  -> ()
	 */
	class FString UPakLoaderLibrary::ProjectPersistentDownloadDir()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.ProjectPersistentDownloadDir"));
		
		UPakLoaderLibrary_ProjectPersistentDownloadDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.MountPakFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PakFilename                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MountPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPakLoaderLibrary::MountPakFile(const class FString& PakFilename, const class FString& MountPath)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.MountPakFile"));
		
		UPakLoaderLibrary_MountPakFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.LoadPakAssetRegistryFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AssetRegistryFile                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPakLoaderLibrary::LoadPakAssetRegistryFile(const class FString& AssetRegistryFile)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.LoadPakAssetRegistryFile"));
		
		UPakLoaderLibrary_LoadPakAssetRegistryFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.IsValidPakFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PakFilename                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            PakSize                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPakLoaderLibrary::IsValidPakFile(const class FString& PakFilename, int64_t* PakSize)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.IsValidPakFile"));
		
		UPakLoaderLibrary_IsValidPakFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PakSize != nullptr)
			*PakSize = params.PakSize;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.IsPackagedBuild
	 * 		Flags  -> ()
	 */
	bool UPakLoaderLibrary::IsPackagedBuild()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.IsPackagedBuild"));
		
		UPakLoaderLibrary_IsPackagedBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.GetShortName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LongName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UPakLoaderLibrary::GetShortName(const class FString& LongName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.GetShortName"));
		
		UPakLoaderLibrary_GetShortName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.GetProjectName
	 * 		Flags  -> ()
	 */
	class FString UPakLoaderLibrary::GetProjectName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.GetProjectName"));
		
		UPakLoaderLibrary_GetProjectName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.GetPakFileTexture2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UPakLoaderLibrary::GetPakFileTexture2D(const class FString& Filename)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.GetPakFileTexture2D"));
		
		UPakLoaderLibrary_GetPakFileTexture2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.GetPakFileText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPakLoaderLibrary::GetPakFileText(const class FString& Filename, class FString* String)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.GetPakFileText"));
		
		UPakLoaderLibrary_GetPakFileText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.GetPakFileStaticMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UStaticMesh* UPakLoaderLibrary::GetPakFileStaticMesh(const class FString& Filename)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.GetPakFileStaticMesh"));
		
		UPakLoaderLibrary_GetPakFileStaticMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.GetPakFileSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USoundBase* UPakLoaderLibrary::GetPakFileSound(const class FString& Filename)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.GetPakFileSound"));
		
		UPakLoaderLibrary_GetPakFileSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.GetPakFileSkeletalMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USkeletalMesh* UPakLoaderLibrary::GetPakFileSkeletalMesh(const class FString& Filename)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.GetPakFileSkeletalMesh"));
		
		UPakLoaderLibrary_GetPakFileSkeletalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.GetPakFileObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UPakLoaderLibrary::GetPakFileObject(const class FString& Filename)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.GetPakFileObject"));
		
		UPakLoaderLibrary_GetPakFileObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.GetPakFileMaterialInstanceConstant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterialInstanceConstant* UPakLoaderLibrary::GetPakFileMaterialInstanceConstant(const class FString& Filename)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.GetPakFileMaterialInstanceConstant"));
		
		UPakLoaderLibrary_GetPakFileMaterialInstanceConstant_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.GetPakFileMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterial* UPakLoaderLibrary::GetPakFileMaterial(const class FString& Filename)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.GetPakFileMaterial"));
		
		UPakLoaderLibrary_GetPakFileMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.GetPakFileClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UPakLoaderLibrary::GetPakFileClass(const class FString& Filename)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.GetPakFileClass"));
		
		UPakLoaderLibrary_GetPakFileClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.GetPakFileAnimSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAnimSequence* UPakLoaderLibrary::GetPakFileAnimSequence(const class FString& Filename)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.GetPakFileAnimSequence"));
		
		UPakLoaderLibrary_GetPakFileAnimSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.GetMountedPakFilenames
	 * 		Flags  -> ()
	 */
	TArray<class FString> UPakLoaderLibrary::GetMountedPakFilenames()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.GetMountedPakFilenames"));
		
		UPakLoaderLibrary_GetMountedPakFilenames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.GetFilesInPakDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PakDirectory                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecursively                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UPakLoaderLibrary::GetFilesInPakDirectory(const class FString& PakDirectory, bool bRecursively)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.GetFilesInPakDirectory"));
		
		UPakLoaderLibrary_GetFilesInPakDirectory_Params params {};
		params.bRecursively = bRecursively;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.GetFilesInPak
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PakFilename                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUAssetOnly                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UPakLoaderLibrary::GetFilesInPak(const class FString& PakFilename, bool bUAssetOnly)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.GetFilesInPak"));
		
		UPakLoaderLibrary_GetFilesInPak_Params params {};
		params.bUAssetOnly = bUAssetOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.EnableRuntimeLog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NewLogPath                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPakLoaderLibrary::EnableRuntimeLog(bool bEnable, const class FString& NewLogPath)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.EnableRuntimeLog"));
		
		UPakLoaderLibrary_EnableRuntimeLog_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.DoesPakDirectoryExist
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PakDirectory                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPakLoaderLibrary::DoesPakDirectoryExist(const class FString& PakDirectory)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PakLoader.PakLoaderLibrary.DoesPakDirectoryExist"));
		
		UPakLoaderLibrary_DoesPakDirectoryExist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPakLoaderLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPakLoaderLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class PakLoader.PakLoaderLibrary"));
		return ptr;
	}

}


