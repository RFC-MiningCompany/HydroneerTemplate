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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum EasyMultiSave.ENextStepType
	 */
	enum class ENextStepType : uint8_t
	{
		SaveLevel  = 0,
		FinishSave = 1,
		MAX        = 2
	};

	/**
	 * Enum EasyMultiSave.ELoadTypeFlags
	 */
	enum class ELoadTypeFlags : uint8_t
	{
		LF_Player = 0,
		LF_Level  = 1,
		LF_MAX    = 2
	};

	/**
	 * Enum EasyMultiSave.ESaveTypeFlags
	 */
	enum class ESaveTypeFlags : uint8_t
	{
		SF_Player = 0,
		SF_Level  = 1,
		SF_MAX    = 2
	};

	/**
	 * Enum EasyMultiSave.EFileSaveMethod
	 */
	enum class EFileSaveMethod : uint8_t
	{
		FM_Legacy    = 0,
		FM_Optimized = 1,
		FM_MAX       = 2
	};

	/**
	 * Enum EasyMultiSave.ELoadMethod
	 */
	enum class ELoadMethod : uint8_t
	{
		LM_Default  = 0,
		LM_Deferred = 1,
		LM_Thread   = 2,
		LM_MAX      = 3
	};

	/**
	 * Enum EasyMultiSave.ESaveGameMode
	 */
	enum class ESaveGameMode : uint8_t
	{
		MODE_Player = 0,
		MODE_Level  = 1,
		MODE_All    = 2,
		MODE_MAX    = 3
	};

	/**
	 * Enum EasyMultiSave.EActorType
	 */
	enum class EActorType : uint8_t
	{
		AT_Runtime     = 0,
		AT_Placed      = 1,
		AT_LevelScript = 2,
		AT_Player      = 3,
		AT_GameObject  = 4,
		AT_Persistent  = 5,
		AT_MAX         = 6
	};

	/**
	 * Enum EasyMultiSave.EDataLoadType
	 */
	enum class EDataLoadType : uint8_t
	{
		DATA_Level  = 0,
		DATA_Player = 1,
		DATA_Object = 2,
		DATA_MAX    = 3
	};

	/**
	 * Enum EasyMultiSave.EUpdateActorResult
	 */
	enum class EUpdateActorResult : uint8_t
	{
		RES_Success             = 0,
		RES_Skip                = 1,
		RES_ShouldSpawnNewActor = 2,
		RES_MAX                 = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct EasyMultiSave.SaveSlotInfo
	 * Size -> 0x0030
	 */
	struct FSaveSlotInfo
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           Timestamp;                                               // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Level;                                                   // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Players;                                                 // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EasyMultiSave.PlayerArchive
	 * Size -> 0x0090
	 */
	struct FPlayerArchive
	{
	public:
		unsigned char                                              UnknownData_XAUH[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EasyMultiSave.LevelArchive
	 * Size -> 0x0068
	 */
	struct FLevelArchive
	{
	public:
		unsigned char                                              UnknownData_1N0L[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EasyMultiSave.ControllerSaveData
	 * Size -> 0x0030
	 */
	struct FControllerSaveData
	{
	public:
		unsigned char                                              UnknownData_ITSZ[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EasyMultiSave.PawnSaveData
	 * Size -> 0x0038
	 */
	struct FPawnSaveData
	{
	public:
		unsigned char                                              UnknownData_PVID[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EasyMultiSave.LevelScriptSaveData
	 * Size -> 0x0028
	 */
	struct FLevelScriptSaveData
	{
	public:
		unsigned char                                              UnknownData_WCCD[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EasyMultiSave.ActorSaveData
	 * Size -> 0x0080
	 */
	struct FActorSaveData
	{
	public:
		unsigned char                                              UnknownData_OPJQ[0x80];                                  // 0x0000(0x0080) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EasyMultiSave.GameObjectSaveData
	 * Size -> 0x0020
	 */
	struct FGameObjectSaveData
	{
	public:
		unsigned char                                              UnknownData_S2G1[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EasyMultiSave.ComponentSaveData
	 * Size -> 0x0050
	 */
	struct FComponentSaveData
	{
	public:
		unsigned char                                              UnknownData_DA2A[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
