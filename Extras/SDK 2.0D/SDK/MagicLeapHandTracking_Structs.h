#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0D
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
	enum class MagicLeapHandTracking_EMagicLeapGestureTransformSpace : uint8_t
	{
		EMagicLeapGestureTransformSpace__World                               = 0,
		EMagicLeapGestureTransformSpace__Hand                                = 1,
		EMagicLeapGestureTransformSpace__Tracking                            = 2,
		EMagicLeapGestureTransformSpace__EMagicLeapGestureTransformSpace_MAX = 3
	};

	/**
	 * Enum MagicLeapHandTracking.EMagicLeapHandTrackingGestureFilterLevel
	 */
	enum class MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel : uint8_t
	{
		EMagicLeapHandTrackingGestureFilterLevel__NoFilter                                     = 0,
		EMagicLeapHandTrackingGestureFilterLevel__SlightRobustnessToFlicker                    = 1,
		EMagicLeapHandTrackingGestureFilterLevel__MoreRobustnessToFlicker                      = 2,
		EMagicLeapHandTrackingGestureFilterLevel__EMagicLeapHandTrackingGestureFilterLevel_MAX = 3
	};

	/**
	 * Enum MagicLeapHandTracking.EMagicLeapHandTrackingKeypointFilterLevel
	 */
	enum class MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel : uint8_t
	{
		EMagicLeapHandTrackingKeypointFilterLevel__NoFilter                                      = 0,
		EMagicLeapHandTrackingKeypointFilterLevel__SimpleSmoothing                               = 1,
		EMagicLeapHandTrackingKeypointFilterLevel__PredictiveSmoothing                           = 2,
		EMagicLeapHandTrackingKeypointFilterLevel__EMagicLeapHandTrackingKeypointFilterLevel_MAX = 3
	};

	/**
	 * Enum MagicLeapHandTracking.EMagicLeapHandTrackingGesture
	 */
	enum class MagicLeapHandTracking_EMagicLeapHandTrackingGesture : uint8_t
	{
		EMagicLeapHandTrackingGesture__Finger                            = 0,
		EMagicLeapHandTrackingGesture__Fist                              = 1,
		EMagicLeapHandTrackingGesture__Pinch                             = 2,
		EMagicLeapHandTrackingGesture__Thumb                             = 3,
		EMagicLeapHandTrackingGesture__L                                 = 4,
		EMagicLeapHandTrackingGesture__OpenHand                          = 5,
		EMagicLeapHandTrackingGesture__OpenHandBack                      = 6,
		EMagicLeapHandTrackingGesture__Ok                                = 7,
		EMagicLeapHandTrackingGesture__C                                 = 8,
		EMagicLeapHandTrackingGesture__NoPose                            = 9,
		EMagicLeapHandTrackingGesture__NoHand                            = 10,
		EMagicLeapHandTrackingGesture__EMagicLeapHandTrackingGesture_MAX = 11
	};

	/**
	 * Enum MagicLeapHandTracking.EMagicLeapHandTrackingKeypoint
	 */
	enum class MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint : uint8_t
	{
		EMagicLeapHandTrackingKeypoint__Thumb_Tip                          = 0,
		EMagicLeapHandTrackingKeypoint__Thumb_IP                           = 1,
		EMagicLeapHandTrackingKeypoint__Thumb_MCP                          = 2,
		EMagicLeapHandTrackingKeypoint__Thumb_CMC                          = 3,
		EMagicLeapHandTrackingKeypoint__Index_Tip                          = 4,
		EMagicLeapHandTrackingKeypoint__Index_DIP                          = 5,
		EMagicLeapHandTrackingKeypoint__Index_PIP                          = 6,
		EMagicLeapHandTrackingKeypoint__Index_MCP                          = 7,
		EMagicLeapHandTrackingKeypoint__Middle_Tip                         = 8,
		EMagicLeapHandTrackingKeypoint__Middle_DIP                         = 9,
		EMagicLeapHandTrackingKeypoint__Middle_PIP                         = 10,
		EMagicLeapHandTrackingKeypoint__Middle_MCP                         = 11,
		EMagicLeapHandTrackingKeypoint__Ring_Tip                           = 12,
		EMagicLeapHandTrackingKeypoint__Ring_DIP                           = 13,
		EMagicLeapHandTrackingKeypoint__Ring_PIP                           = 14,
		EMagicLeapHandTrackingKeypoint__Ring_MCP                           = 15,
		EMagicLeapHandTrackingKeypoint__Pinky_Tip                          = 16,
		EMagicLeapHandTrackingKeypoint__Pinky_DIP                          = 17,
		EMagicLeapHandTrackingKeypoint__Pinky_PIP                          = 18,
		EMagicLeapHandTrackingKeypoint__Pinky_MCP                          = 19,
		EMagicLeapHandTrackingKeypoint__Wrist_Center                       = 20,
		EMagicLeapHandTrackingKeypoint__Wrist_Ulnar                        = 21,
		EMagicLeapHandTrackingKeypoint__Wrist_Radial                       = 22,
		EMagicLeapHandTrackingKeypoint__Hand_Center                        = 23,
		EMagicLeapHandTrackingKeypoint__EMagicLeapHandTrackingKeypoint_MAX = 24
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
