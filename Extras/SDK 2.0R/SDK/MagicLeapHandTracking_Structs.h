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
	 * Enum MagicLeapHandTracking.EMagicLeapGestureTransformSpace
	 */
	enum class EMagicLeapGestureTransformSpace : uint8_t
	{
		World    = 0x0000000000000000,
		Hand     = 0x0000000000000001,
		Tracking = 0x0000000000000002,
		MAX      = 0x0000000000000003
	};

	/**
	 * Enum MagicLeapHandTracking.EMagicLeapHandTrackingGestureFilterLevel
	 */
	enum class EMagicLeapHandTrackingGestureFilterLevel : uint8_t
	{
		NoFilter                  = 0x0000000000000000,
		SlightRobustnessToFlicker = 0x0000000000000001,
		MoreRobustnessToFlicker   = 0x0000000000000002,
		MAX                       = 0x0000000000000003
	};

	/**
	 * Enum MagicLeapHandTracking.EMagicLeapHandTrackingKeypointFilterLevel
	 */
	enum class EMagicLeapHandTrackingKeypointFilterLevel : uint8_t
	{
		NoFilter            = 0x0000000000000000,
		SimpleSmoothing     = 0x0000000000000001,
		PredictiveSmoothing = 0x0000000000000002,
		MAX                 = 0x0000000000000003
	};

	/**
	 * Enum MagicLeapHandTracking.EMagicLeapHandTrackingGesture
	 */
	enum class EMagicLeapHandTrackingGesture : uint8_t
	{
		Finger       = 0x0000000000000000,
		Fist         = 0x0000000000000001,
		Pinch        = 0x0000000000000002,
		Thumb        = 0x0000000000000003,
		L            = 0x0000000000000004,
		OpenHand     = 0x0000000000000005,
		OpenHandBack = 0x0000000000000006,
		Ok           = 0x0000000000000007,
		C            = 0x0000000000000008,
		NoPose       = 0x0000000000000009,
		NoHand       = 0x000000000000000A,
		MAX          = 0x000000000000000B
	};

	/**
	 * Enum MagicLeapHandTracking.EMagicLeapHandTrackingKeypoint
	 */
	enum class EMagicLeapHandTrackingKeypoint : uint8_t
	{
		Thumb_Tip    = 0x0000000000000000,
		Thumb_IP     = 0x0000000000000001,
		Thumb_MCP    = 0x0000000000000002,
		Thumb_CMC    = 0x0000000000000003,
		Index_Tip    = 0x0000000000000004,
		Index_DIP    = 0x0000000000000005,
		Index_PIP    = 0x0000000000000006,
		Index_MCP    = 0x0000000000000007,
		Middle_Tip   = 0x0000000000000008,
		Middle_DIP   = 0x0000000000000009,
		Middle_PIP   = 0x000000000000000A,
		Middle_MCP   = 0x000000000000000B,
		Ring_Tip     = 0x000000000000000C,
		Ring_DIP     = 0x000000000000000D,
		Ring_PIP     = 0x000000000000000E,
		Ring_MCP     = 0x000000000000000F,
		Pinky_Tip    = 0x0000000000000010,
		Pinky_DIP    = 0x0000000000000011,
		Pinky_PIP    = 0x0000000000000012,
		Pinky_MCP    = 0x0000000000000013,
		Wrist_Center = 0x0000000000000014,
		Wrist_Ulnar  = 0x0000000000000015,
		Wrist_Radial = 0x0000000000000016,
		Hand_Center  = 0x0000000000000017,
		MAX          = 0x0000000000000018
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
