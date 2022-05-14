#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * Class LowEntryFileManager.LowEntryFileManagerDirectory
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class ULowEntryFileManagerDirectory : public UObject
	{
	public:
		class FString                                              Directory;                                               // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Path;                                                    // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRoot;                                                 // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E0MD[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)

	public:
		void MoveTo(class ULowEntryFileManagerDirectory* NewDirectory, bool OverrideExistingFiles);
		bool IsRootBool();
		void IsRoot(ELowEntryFileManagerYesNo* Branch);
		bool IsEmptyBool();
		void IsEmpty(ELowEntryFileManagerYesNo* Branch);
		class FString GetPath();
		class ULowEntryFileManagerDirectory* GetParentDirectory();
		class FString GetName();
		TArray<class ULowEntryFileManagerFile*> GetFiles();
		class ULowEntryFileManagerFile* GetFile(const class FString& File);
		class ULowEntryFileManagerDirectory* GetDirectory(const class FString& Directory_);
		TArray<class ULowEntryFileManagerDirectory*> GetDirectories();
		class FString GetAbsolutePath();
		bool ExistsBool();
		void Exists(ELowEntryFileManagerYesNo* Branch);
		void Delete();
		void Create();
		void CopyTo(class ULowEntryFileManagerDirectory* NewDirectory, bool OverrideExistingFiles);
		void Clear();
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryFileManager.LowEntryFileManagerFile
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class ULowEntryFileManagerFile : public UObject
	{
	public:
		class FString                                              Directory;                                               // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Path;                                                    // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		int32_t Size();
		void SetTimestamp(const struct FDateTime& Timestamp);
		void SetReadOnly(bool ReadOnly);
		void SetData(TArray<unsigned char> Data);
		void MoveTo(class ULowEntryFileManagerFile* NewFile);
		bool IsReadOnlyBool();
		void IsReadOnly(ELowEntryFileManagerYesNo* Branch);
		bool IsEmptyBool();
		void IsEmpty(ELowEntryFileManagerYesNo* Branch);
		struct FDateTime GetTimestamp();
		class FString GetPath();
		class ULowEntryFileManagerDirectory* GetParentDirectory();
		class FString GetNameWithoutExtension();
		class FString GetName();
		class FString GetExtension();
		TArray<unsigned char> GetData();
		struct FDateTime GetAccessTimestamp();
		class FString GetAbsolutePath();
		bool ExistsBool();
		void Exists(ELowEntryFileManagerYesNo* Branch);
		void ExecuteAsync(const class FString& Parameters, bool* Success, int32_t* ProcessID, bool Hidden, int32_t Priority, class ULowEntryFileManagerDirectory* OptionalWorkingDirectory);
		void Execute(const class FString& Parameters, bool* Success, int32_t* ReturnCode, class FString* StdOut, class FString* StdErr);
		void Delete();
		void Create();
		void CopyTo(class ULowEntryFileManagerFile* NewFile);
		void Clear();
		void AppendData(TArray<unsigned char> Data);
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryFileManager.LowEntryFileManagerLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULowEntryFileManagerLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SplitPath(const class FString& Path, class FString* PathPart, class FString* NamePart);
		void SplitName(const class FString& Name, class FString* NamePart, class FString* ExtensionPart);
		void SetFileTimestamp(const class FString& File, const struct FDateTime& Timestamp);
		void SetFileReadOnly(const class FString& File, bool ReadOnly);
		void SetFileData(const class FString& File, TArray<unsigned char> Data);
		class FString ReplaceInvalidPathCharacters(const class FString& String, const class FString& ReplacementCharacter);
		class FString ReplaceInvalidFilenameCharacters(const class FString& String, const class FString& ReplacementCharacter);
		class FString ReplaceBackslashesBySlashes(const class FString& String);
		class FString RemoveInvalidPathCharacters(const class FString& String);
		class FString RemoveInvalidFilenameCharacters(const class FString& String);
		class FString RelativeToAbsolutePath(const class FString& RelativePath);
		void MoveFile(const class FString& File, const class FString& to);
		void MoveDirectory(const class FString& Directory, const class FString& to, bool OverrideExistingFiles);
		bool IsFileReadOnlyBool(const class FString& File);
		void IsFileReadOnly(const class FString& File, ELowEntryFileManagerYesNo* Branch);
		bool IsFileEmptyBool(const class FString& File);
		void IsFileEmpty(const class FString& File, ELowEntryFileManagerYesNo* Branch);
		bool IsDirectoryEmptyBool(const class FString& Directory);
		void IsDirectoryEmpty(const class FString& Directory, ELowEntryFileManagerYesNo* Branch);
		bool HasDiskPathsBool();
		void HasDiskPaths(ELowEntryFileManagerYesNo* Branch);
		class FString GetRootDirPath();
		class ULowEntryFileManagerDirectory* GetRoot();
		class FString GetProjectFilePath();
		class FString GetGameUserDirPath();
		class FString GetGameSavedDirPath();
		class FString GetGamePersistentDownloadDirPath();
		class FString GetGameDirPath();
		struct FDateTime GetFileTimestamp(const class FString& File);
		int32_t GetFileSize(const class FString& File);
		TArray<class FString> GetFiles(const class FString& Directory);
		TArray<class FString> GetFileNames(const class FString& Directory);
		TArray<unsigned char> GetFileData(const class FString& File);
		struct FDateTime GetFileAccessTimestamp(const class FString& File);
		class FString GetEngineSavedDirPath();
		class FString GetEngineDirPath();
		TArray<class ULowEntryFileManagerDirectory*> GetDisks();
		TArray<class FString> GetDiskPaths();
		TArray<class FString> GetDirectoryNames(const class FString& Directory);
		class ULowEntryFileManagerDirectory* GetDirectory(const class FString& Path);
		TArray<class FString> GetDirectories(const class FString& Directory);
		class FString GetCloudDirPath();
		class ULowEntryFileManagerDirectory* GetAbsoluteRoot();
		bool FileExistsBool(const class FString& File);
		void FileExists(const class FString& File, ELowEntryFileManagerYesNo* Branch);
		void ExecuteFileAsync(const class FString& File, const class FString& Parameters, bool* Success, int32_t* ProcessID, bool Hidden, int32_t Priority, const class FString& OptionalWorkingDirectory);
		void ExecuteFile(const class FString& File, const class FString& Parameters, bool* Success, int32_t* ReturnCode, class FString* StdOut, class FString* StdErr);
		bool DirectoryExistsBool(const class FString& Directory);
		void DirectoryExists(const class FString& Directory, ELowEntryFileManagerYesNo* Branch);
		void DeleteFile(const class FString& File);
		void DeleteDirectory(const class FString& Directory);
		void CreateParentDirectory(const class FString& Path);
		void CreateNewFile(const class FString& File);
		void CreateNewDirectory(const class FString& Directory);
		void CopyFile(const class FString& File, const class FString& to);
		void CopyDirectory(const class FString& Directory, const class FString& to, bool OverrideExistingFiles);
		void ClearFile(const class FString& File);
		void ClearDirectory(const class FString& Directory);
		void AppendFileData(const class FString& File, TArray<unsigned char> Data);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
