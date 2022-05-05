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
	 * Class EasyFileSystem.EasyFileSystemBPLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEasyFileSystemBPLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool SetReadOnly(const class FString& inPath, bool bNewReadOnlyValue);
		bool SaveStringToFile(const class FString& inPath, const class FString& textData);
		bool SaveArrayToFile(const class FString& inPath, TArray<unsigned char> Array);
		bool MoveFile(const class FString& to, const class FString& from);
		class FString LoadFileToString(const class FString& inPath);
		bool LoadFileToArray(const class FString& inPath, TArray<unsigned char>* Result);
		bool IsReadOnly(const class FString& Filename);
		class FString GetStringFieldJson(const class FString& Data, const class FString& fieldName);
		class FString GetSourceDir();
		int32_t GetSizeFile(const class FString& inPath);
		class FString GetProjectFilePath();
		int32_t GetIntegerFieldJson(const class FString& Data, const class FString& fieldName);
		class FString GetFilenameOnDisk(const class FString& Filename);
		class FString GetExtension(const class FString& inPath);
		class FString GetEngineDir();
		bool GetBoolFieldJson(const class FString& Data, const class FString& fieldName);
		TArray<class FString> FindFiles(const class FString& Directory, const class FString& fileExtension);
		bool FileExists(const class FString& inPath);
		bool DirectoryExists(const class FString& inPath);
		bool DeleteFile(const class FString& inPath);
		bool DeleteDirectory(const class FString& Directory);
		bool CreateDirectory(const class FString& inPath);
		bool CopyFile(const class FString& to, const class FString& from);
		bool CopyDirectoryTree(const class FString& destinationDirectory, const class FString& Source, bool bOverwriteAllExisting);
		class FString ChangeExtension(const class FString& inPath, const class FString& inNewExtension);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
