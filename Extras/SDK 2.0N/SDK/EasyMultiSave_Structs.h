#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0N
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
		SaveLevel  = 0x0000000000000000,
		FinishSave = 0x0000000000000001,
		MAX        = 0x0000000000000002
	};

	/**
	 * Enum EasyMultiSave.ELoadTypeFlags
	 */
	enum class ELoadTypeFlags : uint8_t
	{
		LF_Player = 0x0000000000000000,
		LF_Level  = 0x0000000000000001,
		LF_MAX    = 0x0000000000000002
	};

	/**
	 * Enum EasyMultiSave.ESaveTypeFlags
	 */
	enum class ESaveTypeFlags : uint8_t
	{
		SF_Player = 0x0000000000000000,
		SF_Level  = 0x0000000000000001,
		SF_MAX    = 0x0000000000000002
	};

	/**
	 * Enum EasyMultiSave.EFileSaveMethod
	 */
	enum class EFileSaveMethod : uint8_t
	{
		FM_Legacy    = 0x0000000000000000,
		FM_Optimized = 0x0000000000000001,
		FM_MAX       = 0x0000000000000002
	};

	/**
	 * Enum EasyMultiSave.ELoadMethod
	 */
	enum class ELoadMethod : uint8_t
	{
		LM_Default  = 0x0000000000000000,
		LM_Deferred = 0x0000000000000001,
		LM_Thread   = 0x0000000000000002,
		LM_MAX      = 0x0000000000000003
	};

	/**
	 * Enum EasyMultiSave.ESaveGameMode
	 */
	enum class ESaveGameMode : uint8_t
	{
		MODE_Player = 0x0000000000000000,
		MODE_Level  = 0x0000000000000001,
		MODE_All    = 0x0000000000000002,
		MODE_MAX    = 0x0000000000000003
	};

	/**
	 * Enum EasyMultiSave.EActorType
	 */
	enum class EActorType : uint8_t
	{
		AT_Runtime     = 0x0000000000000000,
		AT_Placed      = 0x0000000000000001,
		AT_LevelScript = 0x0000000000000002,
		AT_Player      = 0x0000000000000003,
		AT_GameObject  = 0x0000000000000004,
		AT_Persistent  = 0x0000000000000005,
		AT_MAX         = 0x0000000000000006
	};

	/**
	 * Enum EasyMultiSave.EDataLoadType
	 */
	enum class EDataLoadType : uint8_t
	{
		DATA_Level  = 0x0000000000000000,
		DATA_Player = 0x0000000000000001,
		DATA_Object = 0x0000000000000002,
		DATA_MAX    = 0x0000000000000003
	};

	/**
	 * Enum EasyMultiSave.EUpdateActorResult
	 */
	enum class EUpdateActorResult : uint8_t
	{
		RES_Success             = 0x0000000000000000,
		RES_Skip                = 0x0000000000000001,
		RES_ShouldSpawnNewActor = 0x0000000000000002,
		RES_MAX                 = 0x0000000000000003
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
		unsigned char                                              UnknownData_389F[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EasyMultiSave.LevelArchive
	 * Size -> 0x0068
	 */
	struct FLevelArchive
	{
	public:
		unsigned char                                              UnknownData_JDC8[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EasyMultiSave.ControllerSaveData
	 * Size -> 0x0030
	 */
	struct FControllerSaveData
	{
	public:
		unsigned char                                              UnknownData_NC47[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EasyMultiSave.PawnSaveData
	 * Size -> 0x0038
	 */
	struct FPawnSaveData
	{
	public:
		unsigned char                                              UnknownData_8FAH[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EasyMultiSave.LevelScriptSaveData
	 * Size -> 0x0028
	 */
	struct FLevelScriptSaveData
	{
	public:
		unsigned char                                              UnknownData_6XJU[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EasyMultiSave.ActorSaveData
	 * Size -> 0x0080
	 */
	struct FActorSaveData
	{
	public:
		unsigned char                                              UnknownData_711I[0x80];                                  // 0x0000(0x0080) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EasyMultiSave.GameObjectSaveData
	 * Size -> 0x0020
	 */
	struct FGameObjectSaveData
	{
	public:
		unsigned char                                              UnknownData_VEN8[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EasyMultiSave.ComponentSaveData
	 * Size -> 0x0050
	 */
	struct FComponentSaveData
	{
	public:
		unsigned char                                              UnknownData_HSUQ[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
