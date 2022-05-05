#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class PakLoader.AsyncPakDownloader
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UAsyncPakDownloader : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFail;                                                  // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnProgress;                                              // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M9PX[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAsyncPakDownloader* DownloadPak(const class FString& URL, const class FString& SavePath);
		static UClass* StaticClass();
	};

	/**
	 * Class PakLoader.PakLoaderLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPakLoaderLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void UnRegisterMountPoint(const class FString& RootPath, const class FString& ContentPath);
		bool UnmountPakFile(const class FString& PakFilename);
		bool TryConvertFilenameToLongPackageName(const class FString& Filename, class FString* PackageName);
		class FString SHA1SUM(const class FString& Filename);
		void RuntimeLog(const class FString& Text);
		void RegisterMountPoint(const class FString& RootPath, const class FString& ContentPath);
		bool RegisterEncryptionKey(const class FString& Guid, const class FString& AesKey);
		class FString ProjectPersistentDownloadDir();
		bool MountPakFile(const class FString& PakFilename, const class FString& MountPath);
		void LoadPakAssetRegistryFile(const class FString& AssetRegistryFile);
		bool IsValidPakFile(const class FString& PakFilename, int64_t* PakSize);
		bool IsPackagedBuild();
		class FString GetShortName(const class FString& LongName);
		class FString GetProjectName();
		class UTexture2D* GetPakFileTexture2D(const class FString& Filename);
		bool GetPakFileText(const class FString& Filename, class FString* String);
		class UStaticMesh* GetPakFileStaticMesh(const class FString& Filename);
		class USoundBase* GetPakFileSound(const class FString& Filename);
		class USkeletalMesh* GetPakFileSkeletalMesh(const class FString& Filename);
		class UObject* GetPakFileObject(const class FString& Filename);
		class UMaterialInstanceConstant* GetPakFileMaterialInstanceConstant(const class FString& Filename);
		class UMaterial* GetPakFileMaterial(const class FString& Filename);
		class UClass* GetPakFileClass(const class FString& Filename);
		class UAnimSequence* GetPakFileAnimSequence(const class FString& Filename);
		TArray<class FString> GetMountedPakFilenames();
		TArray<class FString> GetFilesInPakDirectory(const class FString& PakDirectory, bool bRecursively);
		TArray<class FString> GetFilesInPak(const class FString& PakFilename, bool bUAssetOnly);
		void EnableRuntimeLog(bool bEnable, const class FString& NewLogPath);
		bool DoesPakDirectoryExist(const class FString& PakDirectory);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
