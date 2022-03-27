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
	 * Enum MagicLeapController.EMagicLeapTouchpadGestureDirection
	 */
	enum class MagicLeapController_EMagicLeapTouchpadGestureDirection : uint8_t
	{
		EMagicLeapTouchpadGestureDirection__None                                   = 0,
		EMagicLeapTouchpadGestureDirection__Up                                     = 1,
		EMagicLeapTouchpadGestureDirection__Down                                   = 2,
		EMagicLeapTouchpadGestureDirection__Left                                   = 3,
		EMagicLeapTouchpadGestureDirection__Right                                  = 4,
		EMagicLeapTouchpadGestureDirection__In                                     = 5,
		EMagicLeapTouchpadGestureDirection__Out                                    = 6,
		EMagicLeapTouchpadGestureDirection__Clockwise                              = 7,
		EMagicLeapTouchpadGestureDirection__CounterClockwise                       = 8,
		EMagicLeapTouchpadGestureDirection__EMagicLeapTouchpadGestureDirection_MAX = 9
	};

	/**
	 * Enum MagicLeapController.EMagicLeapTouchpadGestureType
	 */
	enum class MagicLeapController_EMagicLeapTouchpadGestureType : uint8_t
	{
		EMagicLeapTouchpadGestureType__None                              = 0,
		EMagicLeapTouchpadGestureType__Tap                               = 1,
		EMagicLeapTouchpadGestureType__ForceTapDown                      = 2,
		EMagicLeapTouchpadGestureType__ForceTapUp                        = 3,
		EMagicLeapTouchpadGestureType__ForceDwell                        = 4,
		EMagicLeapTouchpadGestureType__SecondForceDown                   = 5,
		EMagicLeapTouchpadGestureType__LongHold                          = 6,
		EMagicLeapTouchpadGestureType__RadialScroll                      = 7,
		EMagicLeapTouchpadGestureType__Swipe                             = 8,
		EMagicLeapTouchpadGestureType__Scroll                            = 9,
		EMagicLeapTouchpadGestureType__Pinch                             = 10,
		EMagicLeapTouchpadGestureType__EMagicLeapTouchpadGestureType_MAX = 11
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerTrackingMode
	 */
	enum class MagicLeapController_EMagicLeapControllerTrackingMode : uint8_t
	{
		EMagicLeapControllerTrackingMode__InputService                         = 0,
		EMagicLeapControllerTrackingMode__CoordinateFrameUID                   = 1,
		EMagicLeapControllerTrackingMode__EMagicLeapControllerTrackingMode_MAX = 2
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerHapticIntensity
	 */
	enum class MagicLeapController_EMagicLeapControllerHapticIntensity : uint8_t
	{
		EMagicLeapControllerHapticIntensity__Low                                     = 0,
		EMagicLeapControllerHapticIntensity__Medium                                  = 1,
		EMagicLeapControllerHapticIntensity__High                                    = 2,
		EMagicLeapControllerHapticIntensity__EMagicLeapControllerHapticIntensity_MAX = 3
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerHapticPattern
	 */
	enum class MagicLeapController_EMagicLeapControllerHapticPattern : uint8_t
	{
		EMagicLeapControllerHapticPattern__None                                  = 0,
		EMagicLeapControllerHapticPattern__Click                                 = 1,
		EMagicLeapControllerHapticPattern__Bump                                  = 2,
		EMagicLeapControllerHapticPattern__DoubleClick                           = 3,
		EMagicLeapControllerHapticPattern__Buzz                                  = 4,
		EMagicLeapControllerHapticPattern__Tick                                  = 5,
		EMagicLeapControllerHapticPattern__ForceDown                             = 6,
		EMagicLeapControllerHapticPattern__ForceUp                               = 7,
		EMagicLeapControllerHapticPattern__ForceDwell                            = 8,
		EMagicLeapControllerHapticPattern__SecondForceDown                       = 9,
		EMagicLeapControllerHapticPattern__EMagicLeapControllerHapticPattern_MAX = 10
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerLEDSpeed
	 */
	enum class MagicLeapController_EMagicLeapControllerLEDSpeed : uint8_t
	{
		EMagicLeapControllerLEDSpeed__Slow                             = 0,
		EMagicLeapControllerLEDSpeed__Medium                           = 1,
		EMagicLeapControllerLEDSpeed__Fast                             = 2,
		EMagicLeapControllerLEDSpeed__EMagicLeapControllerLEDSpeed_MAX = 3
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerLEDColor
	 */
	enum class MagicLeapController_EMagicLeapControllerLEDColor : uint8_t
	{
		EMagicLeapControllerLEDColor__BrightMissionRed                 = 0,
		EMagicLeapControllerLEDColor__PastelMissionRed                 = 1,
		EMagicLeapControllerLEDColor__BrightFloridaOrange              = 2,
		EMagicLeapControllerLEDColor__PastelFloridaOrange              = 3,
		EMagicLeapControllerLEDColor__BrightLunaYellow                 = 4,
		EMagicLeapControllerLEDColor__PastelLunaYellow                 = 5,
		EMagicLeapControllerLEDColor__BrightNebulaPink                 = 6,
		EMagicLeapControllerLEDColor__PastelNebulaPink                 = 7,
		EMagicLeapControllerLEDColor__BrightCosmicPurple               = 8,
		EMagicLeapControllerLEDColor__PastelCosmicPurple               = 9,
		EMagicLeapControllerLEDColor__BrightMysticBlue                 = 10,
		EMagicLeapControllerLEDColor__PastelMysticBlue                 = 11,
		EMagicLeapControllerLEDColor__BrightCelestialBlue              = 12,
		EMagicLeapControllerLEDColor__PastelCelestialBlue              = 13,
		EMagicLeapControllerLEDColor__BrightShaggleGreen               = 14,
		EMagicLeapControllerLEDColor__PastelShaggleGreen               = 15,
		EMagicLeapControllerLEDColor__EMagicLeapControllerLEDColor_MAX = 16
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerLEDEffect
	 */
	enum class MagicLeapController_EMagicLeapControllerLEDEffect : uint8_t
	{
		EMagicLeapControllerLEDEffect__RotateCW                          = 0,
		EMagicLeapControllerLEDEffect__RotateCCW                         = 1,
		EMagicLeapControllerLEDEffect__Pulse                             = 2,
		EMagicLeapControllerLEDEffect__PaintCW                           = 3,
		EMagicLeapControllerLEDEffect__PaintCCW                          = 4,
		EMagicLeapControllerLEDEffect__Blink                             = 5,
		EMagicLeapControllerLEDEffect__EMagicLeapControllerLEDEffect_MAX = 6
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerLEDPattern
	 */
	enum class MagicLeapController_EMagicLeapControllerLEDPattern : uint8_t
	{
		EMagicLeapControllerLEDPattern__None                               = 0,
		EMagicLeapControllerLEDPattern__Clock01                            = 1,
		EMagicLeapControllerLEDPattern__Clock02                            = 2,
		EMagicLeapControllerLEDPattern__Clock03                            = 3,
		EMagicLeapControllerLEDPattern__Clock04                            = 4,
		EMagicLeapControllerLEDPattern__Clock05                            = 5,
		EMagicLeapControllerLEDPattern__Clock06                            = 6,
		EMagicLeapControllerLEDPattern__Clock07                            = 7,
		EMagicLeapControllerLEDPattern__Clock08                            = 8,
		EMagicLeapControllerLEDPattern__Clock09                            = 9,
		EMagicLeapControllerLEDPattern__Clock10                            = 10,
		EMagicLeapControllerLEDPattern__Clock11                            = 11,
		EMagicLeapControllerLEDPattern__Clock12                            = 12,
		EMagicLeapControllerLEDPattern__Clock01_07                         = 13,
		EMagicLeapControllerLEDPattern__Clock02_08                         = 14,
		EMagicLeapControllerLEDPattern__Clock03_09                         = 15,
		EMagicLeapControllerLEDPattern__Clock0401                          = 16,
		EMagicLeapControllerLEDPattern__Clock0501                          = 17,
		EMagicLeapControllerLEDPattern__Clock0601                          = 18,
		EMagicLeapControllerLEDPattern__EMagicLeapControllerLEDPattern_MAX = 19
	};

	/**
	 * Enum MagicLeapController.EMagicLeapControllerType
	 */
	enum class MagicLeapController_EMagicLeapControllerType : uint8_t
	{
		EMagicLeapControllerType__None                         = 0,
		EMagicLeapControllerType__Device                       = 1,
		EMagicLeapControllerType__MobileApp                    = 2,
		EMagicLeapControllerType__EMagicLeapControllerType_MAX = 3
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
		InputCore_EControllerHand                                  Hand;                                                    // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IRH9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MotionSource;                                            // 0x0004(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		MagicLeapController_EMagicLeapTouchpadGestureType          Type;                                                    // 0x000C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		MagicLeapController_EMagicLeapTouchpadGestureDirection     Direction;                                               // 0x000D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WDFM[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
