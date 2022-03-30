#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0F
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
	enum class EasyMultiSave_ENextStepType : uint8_t
	{
		ENextStepType__SaveLevel         = 0,
		ENextStepType__FinishSave        = 1,
		ENextStepType__ENextStepType_MAX = 2
	};

	/**
	 * Enum EasyMultiSave.ELoadTypeFlags
	 */
	enum class EasyMultiSave_ELoadTypeFlags : uint8_t
	{
		ELoadTypeFlags__LF_Player = 0,
		ELoadTypeFlags__LF_Level  = 1,
		ELoadTypeFlags__LF_MAX    = 2
	};

	/**
	 * Enum EasyMultiSave.ESaveTypeFlags
	 */
	enum class EasyMultiSave_ESaveTypeFlags : uint8_t
	{
		ESaveTypeFlags__SF_Player = 0,
		ESaveTypeFlags__SF_Level  = 1,
		ESaveTypeFlags__SF_MAX    = 2
	};

	/**
	 * Enum EasyMultiSave.EFileSaveMethod
	 */
	enum class EasyMultiSave_EFileSaveMethod : uint8_t
	{
		EFileSaveMethod__FM_Legacy    = 0,
		EFileSaveMethod__FM_Optimized = 1,
		EFileSaveMethod__FM_MAX       = 2
	};

	/**
	 * Enum EasyMultiSave.ELoadMethod
	 */
	enum class EasyMultiSave_ELoadMethod : uint8_t
	{
		ELoadMethod__LM_Default  = 0,
		ELoadMethod__LM_Deferred = 1,
		ELoadMethod__LM_Thread   = 2,
		ELoadMethod__LM_MAX      = 3
	};

	/**
	 * Enum EasyMultiSave.ESaveGameMode
	 */
	enum class EasyMultiSave_ESaveGameMode : uint8_t
	{
		ESaveGameMode__MODE_Player = 0,
		ESaveGameMode__MODE_Level  = 1,
		ESaveGameMode__MODE_All    = 2,
		ESaveGameMode__MODE_MAX    = 3
	};

	/**
	 * Enum EasyMultiSave.EActorType
	 */
	enum class EasyMultiSave_EActorType : uint8_t
	{
		EActorType__AT_Runtime     = 0,
		EActorType__AT_Placed      = 1,
		EActorType__AT_LevelScript = 2,
		EActorType__AT_Player      = 3,
		EActorType__AT_GameObject  = 4,
		EActorType__AT_Persistent  = 5,
		EActorType__AT_MAX         = 6
	};

	/**
	 * Enum EasyMultiSave.EDataLoadType
	 */
	enum class EasyMultiSave_EDataLoadType : uint8_t
	{
		EDataLoadType__DATA_Level  = 0,
		EDataLoadType__DATA_Player = 1,
		EDataLoadType__DATA_Object = 2,
		EDataLoadType__DATA_MAX    = 3
	};

	/**
	 * Enum EasyMultiSave.EUpdateActorResult
	 */
	enum class EasyMultiSave_EUpdateActorResult : uint8_t
	{
		EUpdateActorResult__RES_Success             = 0,
		EUpdateActorResult__RES_Skip                = 1,
		EUpdateActorResult__RES_ShouldSpawnNewActor = 2,
		EUpdateActorResult__RES_MAX                 = 3
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
		unsigned char                                              UnknownData_F7D9[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct EasyMultiSave.LevelArchive
	 * Size -> 0x0068
	 */
	struct FLevelArchive
	{
	public:
		unsigned char                                              UnknownData_6L5X[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct EasyMultiSave.ControllerSaveData
	 * Size -> 0x0030
	 */
	struct FControllerSaveData
	{
	public:
		unsigned char                                              UnknownData_FCUM[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct EasyMultiSave.PawnSaveData
	 * Size -> 0x0038
	 */
	struct FPawnSaveData
	{
	public:
		unsigned char                                              UnknownData_8RQW[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct EasyMultiSave.LevelScriptSaveData
	 * Size -> 0x0028
	 */
	struct FLevelScriptSaveData
	{
	public:
		unsigned char                                              UnknownData_5JQ9[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct EasyMultiSave.ActorSaveData
	 * Size -> 0x0080
	 */
	struct FActorSaveData
	{
	public:
		unsigned char                                              UnknownData_UJXE[0x80];                                  // 0x0000(0x0080) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct EasyMultiSave.GameObjectSaveData
	 * Size -> 0x0020
	 */
	struct FGameObjectSaveData
	{
	public:
		unsigned char                                              UnknownData_D85P[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct EasyMultiSave.ComponentSaveData
	 * Size -> 0x0050
	 */
	struct FComponentSaveData
	{
	public:
		unsigned char                                              UnknownData_VDT7[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
