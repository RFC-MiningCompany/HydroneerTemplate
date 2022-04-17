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
	 * Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus
	 */
	enum class EMagicLeapEyeTrackingCalibrationStatus : uint8_t
	{
		None = 0x0000000000000000,
		Bad  = 0x0000000000000001,
		Good = 0x0000000000000002,
		MAX  = 0x0000000000000003
	};

	/**
	 * Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus
	 */
	enum class EMagicLeapEyeTrackingStatus : uint8_t
	{
		NotConnected                 = 0x0000000000000000,
		Disabled                     = 0x0000000000000001,
		UserNotPresent               = 0x0000000000000002,
		UserPresent                  = 0x0000000000000003,
		UserPresentAndWatchingWindow = 0x0000000000000004,
		MAX                          = 0x0000000000000005
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MagicLeapEyeTracker.MagicLeapEyeBlinkState
	 * Size -> 0x0002
	 */
	struct FMagicLeapEyeBlinkState
	{
	public:
		bool                                                       LeftEyeBlinked;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RightEyeBlinked;                                         // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
