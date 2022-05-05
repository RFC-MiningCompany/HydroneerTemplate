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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function LowEntryFileManager.LowEntryFileManagerDirectory.MoveTo
	 */
	struct ULowEntryFileManagerDirectory_MoveTo_Params
	{
	public:
		class ULowEntryFileManagerDirectory*                       NewDirectory;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OverrideExistingFiles;                                   // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerDirectory.IsRootBool
	 */
	struct ULowEntryFileManagerDirectory_IsRootBool_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerDirectory.IsRoot
	 */
	struct ULowEntryFileManagerDirectory_IsRoot_Params
	{
	public:
		LowEntryFileManager_ELowEntryFileManagerYesNo              Branch;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerDirectory.IsEmptyBool
	 */
	struct ULowEntryFileManagerDirectory_IsEmptyBool_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerDirectory.IsEmpty
	 */
	struct ULowEntryFileManagerDirectory_IsEmpty_Params
	{
	public:
		LowEntryFileManager_ELowEntryFileManagerYesNo              Branch;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerDirectory.GetPath
	 */
	struct ULowEntryFileManagerDirectory_GetPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerDirectory.GetParentDirectory
	 */
	struct ULowEntryFileManagerDirectory_GetParentDirectory_Params
	{
	public:
		class ULowEntryFileManagerDirectory*                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerDirectory.GetName
	 */
	struct ULowEntryFileManagerDirectory_GetName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFiles
	 */
	struct ULowEntryFileManagerDirectory_GetFiles_Params
	{
	public:
		TArray<class ULowEntryFileManagerFile*>                    ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFile
	 */
	struct ULowEntryFileManagerDirectory_GetFile_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULowEntryFileManagerFile*                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerDirectory.GetDirectory
	 */
	struct ULowEntryFileManagerDirectory_GetDirectory_Params
	{
	public:
		class FString                                              Directory_;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULowEntryFileManagerDirectory*                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerDirectory.GetDirectories
	 */
	struct ULowEntryFileManagerDirectory_GetDirectories_Params
	{
	public:
		TArray<class ULowEntryFileManagerDirectory*>               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerDirectory.GetAbsolutePath
	 */
	struct ULowEntryFileManagerDirectory_GetAbsolutePath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerDirectory.ExistsBool
	 */
	struct ULowEntryFileManagerDirectory_ExistsBool_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerDirectory.Exists
	 */
	struct ULowEntryFileManagerDirectory_Exists_Params
	{
	public:
		LowEntryFileManager_ELowEntryFileManagerYesNo              Branch;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerDirectory.Delete
	 */
	struct ULowEntryFileManagerDirectory_Delete_Params
	{
	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerDirectory.Create
	 */
	struct ULowEntryFileManagerDirectory_Create_Params
	{
	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerDirectory.CopyTo
	 */
	struct ULowEntryFileManagerDirectory_CopyTo_Params
	{
	public:
		class ULowEntryFileManagerDirectory*                       NewDirectory;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OverrideExistingFiles;                                   // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerDirectory.Clear
	 */
	struct ULowEntryFileManagerDirectory_Clear_Params
	{
	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.Size
	 */
	struct ULowEntryFileManagerFile_Size_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.SetTimestamp
	 */
	struct ULowEntryFileManagerFile_SetTimestamp_Params
	{
	public:
		struct FDateTime                                           Timestamp;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.SetReadOnly
	 */
	struct ULowEntryFileManagerFile_SetReadOnly_Params
	{
	public:
		bool                                                       ReadOnly;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.SetData
	 */
	struct ULowEntryFileManagerFile_SetData_Params
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.MoveTo
	 */
	struct ULowEntryFileManagerFile_MoveTo_Params
	{
	public:
		class ULowEntryFileManagerFile*                            NewFile;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.IsReadOnlyBool
	 */
	struct ULowEntryFileManagerFile_IsReadOnlyBool_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.IsReadOnly
	 */
	struct ULowEntryFileManagerFile_IsReadOnly_Params
	{
	public:
		LowEntryFileManager_ELowEntryFileManagerYesNo              Branch;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.IsEmptyBool
	 */
	struct ULowEntryFileManagerFile_IsEmptyBool_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.IsEmpty
	 */
	struct ULowEntryFileManagerFile_IsEmpty_Params
	{
	public:
		LowEntryFileManager_ELowEntryFileManagerYesNo              Branch;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.GetTimestamp
	 */
	struct ULowEntryFileManagerFile_GetTimestamp_Params
	{
	public:
		struct FDateTime                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.GetPath
	 */
	struct ULowEntryFileManagerFile_GetPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.GetParentDirectory
	 */
	struct ULowEntryFileManagerFile_GetParentDirectory_Params
	{
	public:
		class ULowEntryFileManagerDirectory*                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.GetNameWithoutExtension
	 */
	struct ULowEntryFileManagerFile_GetNameWithoutExtension_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.GetName
	 */
	struct ULowEntryFileManagerFile_GetName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.GetExtension
	 */
	struct ULowEntryFileManagerFile_GetExtension_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.GetData
	 */
	struct ULowEntryFileManagerFile_GetData_Params
	{
	public:
		TArray<unsigned char>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.GetAccessTimestamp
	 */
	struct ULowEntryFileManagerFile_GetAccessTimestamp_Params
	{
	public:
		struct FDateTime                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.GetAbsolutePath
	 */
	struct ULowEntryFileManagerFile_GetAbsolutePath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.ExistsBool
	 */
	struct ULowEntryFileManagerFile_ExistsBool_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.Exists
	 */
	struct ULowEntryFileManagerFile_Exists_Params
	{
	public:
		LowEntryFileManager_ELowEntryFileManagerYesNo              Branch;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.ExecuteAsync
	 */
	struct ULowEntryFileManagerFile_ExecuteAsync_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ProcessID;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Hidden;                                                  // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Priority;                                                // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULowEntryFileManagerDirectory*                       OptionalWorkingDirectory;                                // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.Execute
	 */
	struct ULowEntryFileManagerFile_Execute_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnCode;                                              // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StdOut;                                                  // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StdErr;                                                  // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.Delete
	 */
	struct ULowEntryFileManagerFile_Delete_Params
	{
	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.Create
	 */
	struct ULowEntryFileManagerFile_Create_Params
	{
	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.CopyTo
	 */
	struct ULowEntryFileManagerFile_CopyTo_Params
	{
	public:
		class ULowEntryFileManagerFile*                            NewFile;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.Clear
	 */
	struct ULowEntryFileManagerFile_Clear_Params
	{
	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerFile.AppendData
	 */
	struct ULowEntryFileManagerFile_AppendData_Params
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.SplitPath
	 */
	struct ULowEntryFileManagerLibrary_SplitPath_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PathPart;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              NamePart;                                                // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.SplitName
	 */
	struct ULowEntryFileManagerLibrary_SplitName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              NamePart;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ExtensionPart;                                           // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileTimestamp
	 */
	struct ULowEntryFileManagerLibrary_SetFileTimestamp_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDateTime                                           Timestamp;                                               // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileReadOnly
	 */
	struct ULowEntryFileManagerLibrary_SetFileReadOnly_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReadOnly;                                                // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileData
	 */
	struct ULowEntryFileManagerLibrary_SetFileData_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      Data;                                                    // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceInvalidPathCharacters
	 */
	struct ULowEntryFileManagerLibrary_ReplaceInvalidPathCharacters_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReplacementCharacter;                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceInvalidFilenameCharacters
	 */
	struct ULowEntryFileManagerLibrary_ReplaceInvalidFilenameCharacters_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReplacementCharacter;                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceBackslashesBySlashes
	 */
	struct ULowEntryFileManagerLibrary_ReplaceBackslashesBySlashes_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.RemoveInvalidPathCharacters
	 */
	struct ULowEntryFileManagerLibrary_RemoveInvalidPathCharacters_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.RemoveInvalidFilenameCharacters
	 */
	struct ULowEntryFileManagerLibrary_RemoveInvalidFilenameCharacters_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.RelativeToAbsolutePath
	 */
	struct ULowEntryFileManagerLibrary_RelativeToAbsolutePath_Params
	{
	public:
		class FString                                              RelativePath;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.MoveFile
	 */
	struct ULowEntryFileManagerLibrary_MoveFile_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              to;                                                      // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.MoveDirectory
	 */
	struct ULowEntryFileManagerLibrary_MoveDirectory_Params
	{
	public:
		class FString                                              Directory;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              to;                                                      // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OverrideExistingFiles;                                   // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileReadOnlyBool
	 */
	struct ULowEntryFileManagerLibrary_IsFileReadOnlyBool_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileReadOnly
	 */
	struct ULowEntryFileManagerLibrary_IsFileReadOnly_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		LowEntryFileManager_ELowEntryFileManagerYesNo              Branch;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileEmptyBool
	 */
	struct ULowEntryFileManagerLibrary_IsFileEmptyBool_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileEmpty
	 */
	struct ULowEntryFileManagerLibrary_IsFileEmpty_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		LowEntryFileManager_ELowEntryFileManagerYesNo              Branch;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.IsDirectoryEmptyBool
	 */
	struct ULowEntryFileManagerLibrary_IsDirectoryEmptyBool_Params
	{
	public:
		class FString                                              Directory;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.IsDirectoryEmpty
	 */
	struct ULowEntryFileManagerLibrary_IsDirectoryEmpty_Params
	{
	public:
		class FString                                              Directory;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		LowEntryFileManager_ELowEntryFileManagerYesNo              Branch;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.HasDiskPathsBool
	 */
	struct ULowEntryFileManagerLibrary_HasDiskPathsBool_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.HasDiskPaths
	 */
	struct ULowEntryFileManagerLibrary_HasDiskPaths_Params
	{
	public:
		LowEntryFileManager_ELowEntryFileManagerYesNo              Branch;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetRootDirPath
	 */
	struct ULowEntryFileManagerLibrary_GetRootDirPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetRoot
	 */
	struct ULowEntryFileManagerLibrary_GetRoot_Params
	{
	public:
		class ULowEntryFileManagerDirectory*                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetProjectFilePath
	 */
	struct ULowEntryFileManagerLibrary_GetProjectFilePath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameUserDirPath
	 */
	struct ULowEntryFileManagerLibrary_GetGameUserDirPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameSavedDirPath
	 */
	struct ULowEntryFileManagerLibrary_GetGameSavedDirPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGamePersistentDownloadDirPath
	 */
	struct ULowEntryFileManagerLibrary_GetGamePersistentDownloadDirPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameDirPath
	 */
	struct ULowEntryFileManagerLibrary_GetGameDirPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileTimestamp
	 */
	struct ULowEntryFileManagerLibrary_GetFileTimestamp_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDateTime                                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileSize
	 */
	struct ULowEntryFileManagerLibrary_GetFileSize_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFiles
	 */
	struct ULowEntryFileManagerLibrary_GetFiles_Params
	{
	public:
		class FString                                              Directory;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileNames
	 */
	struct ULowEntryFileManagerLibrary_GetFileNames_Params
	{
	public:
		class FString                                              Directory;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileData
	 */
	struct ULowEntryFileManagerLibrary_GetFileData_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileAccessTimestamp
	 */
	struct ULowEntryFileManagerLibrary_GetFileAccessTimestamp_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDateTime                                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetEngineSavedDirPath
	 */
	struct ULowEntryFileManagerLibrary_GetEngineSavedDirPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetEngineDirPath
	 */
	struct ULowEntryFileManagerLibrary_GetEngineDirPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDisks
	 */
	struct ULowEntryFileManagerLibrary_GetDisks_Params
	{
	public:
		TArray<class ULowEntryFileManagerDirectory*>               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDiskPaths
	 */
	struct ULowEntryFileManagerLibrary_GetDiskPaths_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectoryNames
	 */
	struct ULowEntryFileManagerLibrary_GetDirectoryNames_Params
	{
	public:
		class FString                                              Directory;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectory
	 */
	struct ULowEntryFileManagerLibrary_GetDirectory_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULowEntryFileManagerDirectory*                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectories
	 */
	struct ULowEntryFileManagerLibrary_GetDirectories_Params
	{
	public:
		class FString                                              Directory;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetCloudDirPath
	 */
	struct ULowEntryFileManagerLibrary_GetCloudDirPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.GetAbsoluteRoot
	 */
	struct ULowEntryFileManagerLibrary_GetAbsoluteRoot_Params
	{
	public:
		class ULowEntryFileManagerDirectory*                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.FileExistsBool
	 */
	struct ULowEntryFileManagerLibrary_FileExistsBool_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.FileExists
	 */
	struct ULowEntryFileManagerLibrary_FileExists_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		LowEntryFileManager_ELowEntryFileManagerYesNo              Branch;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.ExecuteFileAsync
	 */
	struct ULowEntryFileManagerLibrary_ExecuteFileAsync_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameters;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ProcessID;                                               // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Hidden;                                                  // 0x0028(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Priority;                                                // 0x002C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OptionalWorkingDirectory;                                // 0x0030(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.ExecuteFile
	 */
	struct ULowEntryFileManagerLibrary_ExecuteFile_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameters;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnCode;                                              // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StdOut;                                                  // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StdErr;                                                  // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.DirectoryExistsBool
	 */
	struct ULowEntryFileManagerLibrary_DirectoryExistsBool_Params
	{
	public:
		class FString                                              Directory;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.DirectoryExists
	 */
	struct ULowEntryFileManagerLibrary_DirectoryExists_Params
	{
	public:
		class FString                                              Directory;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		LowEntryFileManager_ELowEntryFileManagerYesNo              Branch;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.DeleteFile
	 */
	struct ULowEntryFileManagerLibrary_DeleteFile_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.DeleteDirectory
	 */
	struct ULowEntryFileManagerLibrary_DeleteDirectory_Params
	{
	public:
		class FString                                              Directory;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateParentDirectory
	 */
	struct ULowEntryFileManagerLibrary_CreateParentDirectory_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateNewFile
	 */
	struct ULowEntryFileManagerLibrary_CreateNewFile_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateNewDirectory
	 */
	struct ULowEntryFileManagerLibrary_CreateNewDirectory_Params
	{
	public:
		class FString                                              Directory;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.CopyFile
	 */
	struct ULowEntryFileManagerLibrary_CopyFile_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              to;                                                      // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.CopyDirectory
	 */
	struct ULowEntryFileManagerLibrary_CopyDirectory_Params
	{
	public:
		class FString                                              Directory;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              to;                                                      // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OverrideExistingFiles;                                   // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.ClearFile
	 */
	struct ULowEntryFileManagerLibrary_ClearFile_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.ClearDirectory
	 */
	struct ULowEntryFileManagerLibrary_ClearDirectory_Params
	{
	public:
		class FString                                              Directory;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LowEntryFileManager.LowEntryFileManagerLibrary.AppendFileData
	 */
	struct ULowEntryFileManagerLibrary_AppendFileData_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      Data;                                                    // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
