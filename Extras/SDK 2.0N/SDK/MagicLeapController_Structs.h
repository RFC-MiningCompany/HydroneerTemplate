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
	 * Enum MagicLeapController.EMagicLeapTouchpadGestureDirection
	 */
	enum class EMagicLeapTouchpadGestureDirection : uint8_t
	{
		None             = 0x0000000000000000,
		Up               = 0x0000000000000001,
		Down             = 0x0000000000000002,
		Left             = 0x0000000000000003,
		Right            = 0x0000000000000004,
		In               = 0x0000000000000005,
		Out              = 0x0000000000000006,
		Clockwise        = 0x0000000000000007,
		CounterClockwise = 0x0000000000000008,
		MAX              = 0x0000000000000009
	};

	/**
	 * Enum MagicLeapController.EMagicLeapTouchpadGestureType
	 */
	enum class EMagicLeapTouchpadGestureType : uint8_t
	{
		None            = 0x0000000000000000,
		Tap             = 0x0000000000000001,
		ForceTapDown    = 0x0000000000000002,
		ForceTapUp      = 0x0000000000000003,
		ForceDwell      = 0x0000000000000004,
		SecondForceDown = 0x0000000000000005,
		LongHold        = 0x0000000000000006,
		RadialScroll    = 0x0000000000000007,
		Swipe           = 0x0000000000000008,
		Scroll          = 0x0000000000000009,
		Pinch           = 0x000000000000000A,
		MAX             = 0x000000000000000B
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerTrackingMode
	 */
	enum class EMagicLeapControllerTrackingMode : uint8_t
	{
		InputService       = 0x0000000000000000,
		CoordinateFrameUID = 0x0000000000000001,
		MAX                = 0x0000000000000002
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerHapticIntensity
	 */
	enum class EMagicLeapControllerHapticIntensity : uint8_t
	{
		Low    = 0x0000000000000000,
		Medium = 0x0000000000000001,
		High   = 0x0000000000000002,
		MAX    = 0x0000000000000003
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerHapticPattern
	 */
	enum class EMagicLeapControllerHapticPattern : uint8_t
	{
		None            = 0x0000000000000000,
		Click           = 0x0000000000000001,
		Bump            = 0x0000000000000002,
		DoubleClick     = 0x0000000000000003,
		Buzz            = 0x0000000000000004,
		Tick            = 0x0000000000000005,
		ForceDown       = 0x0000000000000006,
		ForceUp         = 0x0000000000000007,
		ForceDwell      = 0x0000000000000008,
		SecondForceDown = 0x0000000000000009,
		MAX             = 0x000000000000000A
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerLEDSpeed
	 */
	enum class EMagicLeapControllerLEDSpeed : uint8_t
	{
		Slow   = 0x0000000000000000,
		Medium = 0x0000000000000001,
		Fast   = 0x0000000000000002,
		MAX    = 0x0000000000000003
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerLEDColor
	 */
	enum class EMagicLeapControllerLEDColor : uint8_t
	{
		BrightMissionRed    = 0x0000000000000000,
		PastelMissionRed    = 0x0000000000000001,
		BrightFloridaOrange = 0x0000000000000002,
		PastelFloridaOrange = 0x0000000000000003,
		BrightLunaYellow    = 0x0000000000000004,
		PastelLunaYellow    = 0x0000000000000005,
		BrightNebulaPink    = 0x0000000000000006,
		PastelNebulaPink    = 0x0000000000000007,
		BrightCosmicPurple  = 0x0000000000000008,
		PastelCosmicPurple  = 0x0000000000000009,
		BrightMysticBlue    = 0x000000000000000A,
		PastelMysticBlue    = 0x000000000000000B,
		BrightCelestialBlue = 0x000000000000000C,
		PastelCelestialBlue = 0x000000000000000D,
		BrightShaggleGreen  = 0x000000000000000E,
		PastelShaggleGreen  = 0x000000000000000F,
		MAX                 = 0x0000000000000010
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerLEDEffect
	 */
	enum class EMagicLeapControllerLEDEffect : uint8_t
	{
		RotateCW  = 0x0000000000000000,
		RotateCCW = 0x0000000000000001,
		Pulse     = 0x0000000000000002,
		PaintCW   = 0x0000000000000003,
		PaintCCW  = 0x0000000000000004,
		Blink     = 0x0000000000000005,
		MAX       = 0x0000000000000006
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerLEDPattern
	 */
	enum class EMagicLeapControllerLEDPattern : uint8_t
	{
		None       = 0x0000000000000000,
		Clock01    = 0x0000000000000001,
		Clock02    = 0x0000000000000002,
		Clock03    = 0x0000000000000003,
		Clock04    = 0x0000000000000004,
		Clock05    = 0x0000000000000005,
		Clock06    = 0x0000000000000006,
		Clock07    = 0x0000000000000007,
		Clock08    = 0x0000000000000008,
		Clock09    = 0x0000000000000009,
		Clock10    = 0x000000000000000A,
		Clock11    = 0x000000000000000B,
		Clock12    = 0x000000000000000C,
		Clock01_07 = 0x000000000000000D,
		Clock02_08 = 0x000000000000000E,
		Clock03_09 = 0x000000000000000F,
		Clock0401  = 0x0000000000000010,
		Clock0501  = 0x0000000000000011,
		Clock0601  = 0x0000000000000012,
		MAX        = 0x0000000000000013
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerType
	 */
	enum class EMagicLeapControllerType : uint8_t
	{
		None      = 0x0000000000000000,
		Device    = 0x0000000000000001,
		MobileApp = 0x0000000000000002,
		MAX       = 0x0000000000000003
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MagicLeapController.MagicLeapTouchpadGesture
	 * Size -> 0x0030
	 */
	struct FMagicLeapTouchpadGesture
	{
	public:
		EControllerHand                                            Hand;                                                    // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0DXH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MotionSource;                                            // 0x0004(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMagicLeapTouchpadGestureType                              Type;                                                    // 0x000C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMagicLeapTouchpadGestureDirection                         Direction;                                               // 0x000D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6MMU[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PositionAndForce;                                        // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FingerGap;                                               // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
