#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0R
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
	 * Enum GameplayTasks.ETaskResourceOverlapPolicy
	 */
	enum class ETaskResourceOverlapPolicy : uint8_t
	{
		StartOnTop = 0x0000000000000000,
		StartAtEnd = 0x0000000000000001,
		MAX        = 0x0000000000000002
	};

	/**
	 * Enum GameplayTasks.EGameplayTaskState
	 */
	enum class EGameplayTaskState : uint8_t
	{
		Uninitialized      = 0x0000000000000000,
		AwaitingActivation = 0x0000000000000001,
		Paused             = 0x0000000000000002,
		Active             = 0x0000000000000003,
		Finished           = 0x0000000000000004,
		MAX                = 0x0000000000000005
	};

	/**
	 * Enum GameplayTasks.EGameplayTaskRunResult
	 */
	enum class EGameplayTaskRunResult : uint8_t
	{
		Error            = 0x0000000000000000,
		Failed           = 0x0000000000000001,
		Success_Paused   = 0x0000000000000002,
		Success_Active   = 0x0000000000000003,
		Success_Finished = 0x0000000000000004,
		MAX              = 0x0000000000000005
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameplayTasks.GameplayResourceSet
	 * Size -> 0x0002
	 */
	struct FGameplayResourceSet
	{
	public:
		unsigned char                                              UnknownData_PQFU[0x2];                                   // 0x0000(0x0002) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
