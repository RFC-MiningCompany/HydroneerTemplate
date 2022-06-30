#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand
	 */
	struct UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Params
	{
	public:
		InputCore_EControllerHand                                  Hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                MotionSource;                                            // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode
	 */
	struct UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Params
	{
	public:
		MagicLeapController_EMagicLeapControllerTrackingMode       TrackingMode;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern
	 */
	struct UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Params
	{
	public:
		class FName                                                MotionSource;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		MagicLeapController_EMagicLeapControllerLEDPattern         LEDPattern;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		MagicLeapController_EMagicLeapControllerLEDColor           LEDColor;                                                // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DurationInSec;                                           // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect
	 */
	struct UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Params
	{
	public:
		class FName                                                MotionSource;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		MagicLeapController_EMagicLeapControllerLEDEffect          LEDEffect;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		MagicLeapController_EMagicLeapControllerLEDSpeed           LEDSpeed;                                                // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		MagicLeapController_EMagicLeapControllerLEDPattern         LEDPattern;                                              // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		MagicLeapController_EMagicLeapControllerLEDColor           LEDColor;                                                // 0x000B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DurationInSec;                                           // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern
	 */
	struct UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Params
	{
	public:
		class FName                                                MotionSource;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		MagicLeapController_EMagicLeapControllerHapticPattern      HapticPattern;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		MagicLeapController_EMagicLeapControllerHapticIntensity    Intensity;                                               // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect
	 */
	struct UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Params
	{
	public:
		InputCore_EControllerHand                                  Hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		MagicLeapController_EMagicLeapControllerLEDEffect          LEDEffect;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		MagicLeapController_EMagicLeapControllerLEDSpeed           LEDSpeed;                                                // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		MagicLeapController_EMagicLeapControllerLEDPattern         LEDPattern;                                              // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		MagicLeapController_EMagicLeapControllerLEDColor           LEDColor;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DurationInSec;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED
	 */
	struct UMagicLeapControllerFunctionLibrary_PlayControllerLED_Params
	{
	public:
		InputCore_EControllerHand                                  Hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		MagicLeapController_EMagicLeapControllerLEDPattern         LEDPattern;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		MagicLeapController_EMagicLeapControllerLEDColor           LEDColor;                                                // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DurationInSec;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback
	 */
	struct UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Params
	{
	public:
		InputCore_EControllerHand                                  Hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		MagicLeapController_EMagicLeapControllerHapticPattern      HapticPattern;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		MagicLeapController_EMagicLeapControllerHapticIntensity    Intensity;                                               // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers
	 */
	struct UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected
	 */
	struct UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Params
	{
	public:
		class FName                                                MotionSource;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping
	 */
	struct UMagicLeapControllerFunctionLibrary_InvertControllerMapping_Params
	{
	};

	/**
	 * Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand
	 */
	struct UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Params
	{
	public:
		InputCore_EControllerHand                                  Hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType
	 */
	struct UMagicLeapControllerFunctionLibrary_GetMLControllerType_Params
	{
	public:
		InputCore_EControllerHand                                  Hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		MagicLeapController_EMagicLeapControllerType               ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource
	 */
	struct UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Params
	{
	public:
		class FName                                                MotionSource;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		InputCore_EControllerHand                                  ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType
	 */
	struct UMagicLeapControllerFunctionLibrary_GetControllerType_Params
	{
	public:
		class FName                                                MotionSource;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		MagicLeapController_EMagicLeapControllerType               ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode
	 */
	struct UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Params
	{
	public:
		MagicLeapController_EMagicLeapControllerTrackingMode       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping
	 */
	struct UMagicLeapControllerFunctionLibrary_GetControllerMapping_Params
	{
	public:
		int32_t                                                    ControllerIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		InputCore_EControllerHand                                  Hand;                                                    // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
