#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0L
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
	 * Enum HeadMountedDisplay.EXRVisualType
	 */
	enum class EXRVisualType : uint8_t
	{
		Controller = 0x0000000000000000,
		Hand       = 0x0000000000000001,
		MAX        = 0x0000000000000002
	};

	/**
	 * Enum HeadMountedDisplay.EHandKeypoint
	 */
	enum class EHandKeypoint : uint8_t
	{
		Palm               = 0x0000000000000000,
		Wrist              = 0x0000000000000001,
		ThumbMetacarpal    = 0x0000000000000002,
		ThumbProximal      = 0x0000000000000003,
		ThumbDistal        = 0x0000000000000004,
		ThumbTip           = 0x0000000000000005,
		IndexMetacarpal    = 0x0000000000000006,
		IndexProximal      = 0x0000000000000007,
		IndexIntermediate  = 0x0000000000000008,
		IndexDistal        = 0x0000000000000009,
		IndexTip           = 0x000000000000000A,
		MiddleMetacarpal   = 0x000000000000000B,
		MiddleProximal     = 0x000000000000000C,
		MiddleIntermediate = 0x000000000000000D,
		MiddleDistal       = 0x000000000000000E,
		MiddleTip          = 0x000000000000000F,
		RingMetacarpal     = 0x0000000000000010,
		RingProximal       = 0x0000000000000011,
		RingIntermediate   = 0x0000000000000012,
		RingDistal         = 0x0000000000000013,
		RingTip            = 0x0000000000000014,
		LittleMetacarpal   = 0x0000000000000015,
		LittleProximal     = 0x0000000000000016,
		LittleIntermediate = 0x0000000000000017,
		LittleDistal       = 0x0000000000000018,
		LittleTip          = 0x0000000000000019,
		MAX                = 0x000000000000001A
	};

	/**
	 * Enum HeadMountedDisplay.EXRTrackedDeviceType
	 */
	enum class EXRTrackedDeviceType : uint8_t
	{
		HeadMountedDisplay = 0x0000000000000000,
		Controller         = 0x0000000000000001,
		TrackingReference  = 0x0000000000000002,
		Other              = 0x0000000000000003,
		Invalid            = 0x0000000000000004,
		Any                = 0x0000000000000005,
		MAX                = 0x0000000000000006
	};

	/**
	 * Enum HeadMountedDisplay.ESpectatorScreenMode
	 */
	enum class ESpectatorScreenMode : uint8_t
	{
		Disabled               = 0x0000000000000000,
		SingleEyeLetterboxed   = 0x0000000000000001,
		Undistorted            = 0x0000000000000002,
		Distorted              = 0x0000000000000003,
		SingleEye              = 0x0000000000000004,
		SingleEyeCroppedToFill = 0x0000000000000005,
		Texture                = 0x0000000000000006,
		TexturePlusEye         = 0x0000000000000007,
		MAX                    = 0x0000000000000008
	};

	/**
	 * Enum HeadMountedDisplay.EXRSystemFlags
	 */
	enum class EXRSystemFlags : uint8_t
	{
		NoFlags              = 0x0000000000000000,
		IsAR                 = 0x0000000000000001,
		IsTablet             = 0x0000000000000002,
		IsHeadMounted        = 0x0000000000000003,
		SupportsHandTracking = 0x0000000000000004,
		MAX                  = 0x0000000000000005
	};

	/**
	 * Enum HeadMountedDisplay.EXRDeviceConnectionResult
	 */
	enum class EXRDeviceConnectionResult : uint8_t
	{
		NoTrackingSystem    = 0x0000000000000000,
		FeatureNotSupported = 0x0000000000000001,
		NoValidViewport     = 0x0000000000000002,
		MiscFailure         = 0x0000000000000003,
		Success             = 0x0000000000000004,
		MAX                 = 0x0000000000000005
	};

	/**
	 * Enum HeadMountedDisplay.EHMDWornState
	 */
	enum class EHMDWornState : uint8_t
	{
		Unknown = 0x0000000000000000,
		Worn    = 0x0000000000000001,
		NotWorn = 0x0000000000000002,
		MAX     = 0x0000000000000003
	};

	/**
	 * Enum HeadMountedDisplay.EHMDTrackingOrigin
	 */
	enum class EHMDTrackingOrigin : uint8_t
	{
		Floor     = 0x0000000000000000,
		Eye       = 0x0000000000000001,
		Stage     = 0x0000000000000002,
		Unbounded = 0x0000000000000003,
		MAX       = 0x0000000000000004
	};

	/**
	 * Enum HeadMountedDisplay.EOrientPositionSelector
	 */
	enum class EOrientPositionSelector : uint8_t
	{
		Orientation            = 0x0000000000000000,
		Position               = 0x0000000000000001,
		OrientationAndPosition = 0x0000000000000002,
		MAX                    = 0x0000000000000003
	};

	/**
	 * Enum HeadMountedDisplay.ETrackingStatus
	 */
	enum class ETrackingStatus : uint8_t
	{
		NotTracked   = 0x0000000000000000,
		InertialOnly = 0x0000000000000001,
		Tracked      = 0x0000000000000002,
		MAX          = 0x0000000000000003
	};

	/**
	 * Enum HeadMountedDisplay.ESpatialInputGestureAxis
	 */
	enum class ESpatialInputGestureAxis : uint8_t
	{
		None            = 0x0000000000000000,
		Manipulation    = 0x0000000000000001,
		Navigation      = 0x0000000000000002,
		NavigationRails = 0x0000000000000003,
		MAX             = 0x0000000000000004
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct HeadMountedDisplay.XRMotionControllerData
	 * Size -> 0x00A0
	 */
	struct FXRMotionControllerData
	{
	public:
		bool                                                       bValid;                                                  // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OZ4U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DeviceName;                                              // 0x0004(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ApplicationInstanceID;                                   // 0x000C(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EXRVisualType                                              DeviceVisualType;                                        // 0x001C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControllerHand                                            HandIndex;                                               // 0x001D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETrackingStatus                                            TrackingStatus;                                          // 0x001E(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6QWS[0x1];                                   // 0x001F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GripPosition;                                            // 0x0020(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FJL0[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               GripRotation;                                            // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             AimPosition;                                             // 0x0040(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RKD4[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               AimRotation;                                             // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     HandKeyPositions;                                        // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FQuat>                                       HandKeyRotations;                                        // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              HandKeyRadii;                                            // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsGrasped;                                              // 0x0090(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B029[0xF];                                   // 0x0091(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HeadMountedDisplay.XRHMDData
	 * Size -> 0x0040
	 */
	struct FXRHMDData
	{
	public:
		bool                                                       bValid;                                                  // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PAN7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DeviceName;                                              // 0x0004(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ApplicationInstanceID;                                   // 0x000C(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETrackingStatus                                            TrackingStatus;                                          // 0x001C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_464O[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x0020(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2JRI[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HeadMountedDisplay.XRDeviceId
	 * Size -> 0x000C
	 */
	struct FXRDeviceId
	{
	public:
		class FName                                                SystemName;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DeviceID;                                                // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HeadMountedDisplay.XRGestureConfig
	 * Size -> 0x0006
	 */
	struct FXRGestureConfig
	{
	public:
		bool                                                       bTap;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHold;                                                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESpatialInputGestureAxis                                   AxisGesture;                                             // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNavigationAxisX;                                        // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNavigationAxisY;                                        // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNavigationAxisZ;                                        // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
