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
	 * Enum TimeManagement.EFrameNumberDisplayFormats
	 */
	enum class EFrameNumberDisplayFormats : uint8_t
	{
		NonDropFrameTimecode = 0x0000000000000000,
		DropFrameTimecode    = 0x0000000000000001,
		Seconds              = 0x0000000000000002,
		Frames               = 0x0000000000000003,
		MAX_Count            = 0x0000000000000004,
		MAX                  = 0x0000000000000005
	};

	/**
	 * Enum TimeManagement.ETimedDataInputState
	 */
	enum class ETimedDataInputState : uint8_t
	{
		Connected    = 0x0000000000000000,
		Unresponsive = 0x0000000000000001,
		Disconnected = 0x0000000000000002,
		MAX          = 0x0000000000000003
	};

	/**
	 * Enum TimeManagement.ETimedDataInputEvaluationType
	 */
	enum class ETimedDataInputEvaluationType : uint8_t
	{
		None         = 0x0000000000000000,
		Timecode     = 0x0000000000000001,
		PlatformTime = 0x0000000000000002,
		MAX          = 0x0000000000000003
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TimeManagement.TimedDataInputEvaluationData
	 * Size -> 0x0008
	 */
	struct FTimedDataInputEvaluationData
	{
	public:
		float                                                      DistanceToNewestSampleSeconds;                           // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceToOldestSampleSeconds;                           // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TimeManagement.TimedDataChannelSampleTime
	 * Size -> 0x0018
	 */
	struct FTimedDataChannelSampleTime
	{
	public:
		unsigned char                                              UnknownData_WVAY[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
