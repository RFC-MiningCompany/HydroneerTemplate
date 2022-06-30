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
	 * 		Name   -> Function PakLoader.AsyncPakDownloader.DownloadPak
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SavePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAsyncPakDownloader* UAsyncPakDownloader::DownloadPak(const class FString& URL, const class FString& SavePath)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.AsyncPakDownloader.DownloadPak");
		
		struct
		{
			class FString                                      URL;
			class FString                                      SavePath;
		} params;
		params.URL = URL;
		params.SavePath = SavePath;
		
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
		static UClass* ptr = UObject::FindClass("Class PakLoader.AsyncPakDownloader");
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.UnRegisterMountPoint");
		
		struct
		{
			class FString                                      RootPath;
			class FString                                      ContentPath;
		} params;
		params.RootPath = RootPath;
		params.ContentPath = ContentPath;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.UnmountPakFile");
		
		struct
		{
			class FString                                      PakFilename;
		} params;
		params.PakFilename = PakFilename;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.TryConvertFilenameToLongPackageName");
		
		struct
		{
			class FString                                      Filename;
			class FString                                      PackageName;
		} params;
		params.Filename = Filename;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.SHA1SUM");
		
		struct
		{
			class FString                                      Filename;
		} params;
		params.Filename = Filename;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.RuntimeLog");
		
		struct
		{
			class FString                                      Text;
		} params;
		params.Text = Text;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.RegisterMountPoint");
		
		struct
		{
			class FString                                      RootPath;
			class FString                                      ContentPath;
		} params;
		params.RootPath = RootPath;
		params.ContentPath = ContentPath;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.RegisterEncryptionKey");
		
		struct
		{
			class FString                                      Guid;
			class FString                                      AesKey;
		} params;
		params.Guid = Guid;
		params.AesKey = AesKey;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.ProjectPersistentDownloadDir");
		
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
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.MountPakFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PakFilename                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MountPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPakLoaderLibrary::MountPakFile(const class FString& PakFilename, const class FString& MountPath)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.MountPakFile");
		
		struct
		{
			class FString                                      PakFilename;
			class FString                                      MountPath;
		} params;
		params.PakFilename = PakFilename;
		params.MountPath = MountPath;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.LoadPakAssetRegistryFile");
		
		struct
		{
			class FString                                      AssetRegistryFile;
		} params;
		params.AssetRegistryFile = AssetRegistryFile;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.IsValidPakFile");
		
		struct
		{
			class FString                                      PakFilename;
			int64_t                                            PakSize;
		} params;
		params.PakFilename = PakFilename;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.IsPackagedBuild");
		
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
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.GetShortName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LongName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UPakLoaderLibrary::GetShortName(const class FString& LongName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.GetShortName");
		
		struct
		{
			class FString                                      LongName;
		} params;
		params.LongName = LongName;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.GetProjectName");
		
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
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.GetPakFileTexture2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UPakLoaderLibrary::GetPakFileTexture2D(const class FString& Filename)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.GetPakFileTexture2D");
		
		struct
		{
			class FString                                      Filename;
		} params;
		params.Filename = Filename;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.GetPakFileText");
		
		struct
		{
			class FString                                      Filename;
			class FString                                      String;
		} params;
		params.Filename = Filename;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.GetPakFileStaticMesh");
		
		struct
		{
			class FString                                      Filename;
		} params;
		params.Filename = Filename;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.GetPakFileSound");
		
		struct
		{
			class FString                                      Filename;
		} params;
		params.Filename = Filename;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.GetPakFileSkeletalMesh");
		
		struct
		{
			class FString                                      Filename;
		} params;
		params.Filename = Filename;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.GetPakFileObject");
		
		struct
		{
			class FString                                      Filename;
		} params;
		params.Filename = Filename;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.GetPakFileMaterialInstanceConstant");
		
		struct
		{
			class FString                                      Filename;
		} params;
		params.Filename = Filename;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.GetPakFileMaterial");
		
		struct
		{
			class FString                                      Filename;
		} params;
		params.Filename = Filename;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.GetPakFileClass");
		
		struct
		{
			class FString                                      Filename;
		} params;
		params.Filename = Filename;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.GetPakFileAnimSequence");
		
		struct
		{
			class FString                                      Filename;
		} params;
		params.Filename = Filename;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.GetMountedPakFilenames");
		
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
	 * 		Name   -> Function PakLoader.PakLoaderLibrary.GetFilesInPakDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PakDirectory                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecursively                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UPakLoaderLibrary::GetFilesInPakDirectory(const class FString& PakDirectory, bool bRecursively)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.GetFilesInPakDirectory");
		
		struct
		{
			class FString                                      PakDirectory;
			bool                                               bRecursively;
		} params;
		params.PakDirectory = PakDirectory;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.GetFilesInPak");
		
		struct
		{
			class FString                                      PakFilename;
			bool                                               bUAssetOnly;
		} params;
		params.PakFilename = PakFilename;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.EnableRuntimeLog");
		
		struct
		{
			bool                                               bEnable;
			class FString                                      NewLogPath;
		} params;
		params.bEnable = bEnable;
		params.NewLogPath = NewLogPath;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function PakLoader.PakLoaderLibrary.DoesPakDirectoryExist");
		
		struct
		{
			class FString                                      PakDirectory;
		} params;
		params.PakDirectory = PakDirectory;
		
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
		static UClass* ptr = UObject::FindClass("Class PakLoader.PakLoaderLibrary");
		return ptr;
	}

}


