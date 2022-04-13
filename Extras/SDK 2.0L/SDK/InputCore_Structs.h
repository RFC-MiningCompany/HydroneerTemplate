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
	 * Enum InputCore.ETouchIndex
	 */
	enum class ETouchIndex : uint8_t
	{
		Touch1             = 0x0000000000000000,
		Touch2             = 0x0000000000000001,
		Touch3             = 0x0000000000000002,
		Touch4             = 0x0000000000000003,
		Touch5             = 0x0000000000000004,
		Touch6             = 0x0000000000000005,
		Touch7             = 0x0000000000000006,
		Touch8             = 0x0000000000000007,
		Touch9             = 0x0000000000000008,
		Touch10            = 0x0000000000000009,
		CursorPointerIndex = 0x000000000000000A,
		MAX_TOUCHES        = 0x000000000000000B,
		MAX                = 0x000000000000000C
	};

	/**
	 * Enum InputCore.EControllerHand
	 */
	enum class EControllerHand : uint8_t
	{
		Left                 = 0x0000000000000000,
		Right                = 0x0000000000000001,
		AnyHand              = 0x0000000000000002,
		Pad                  = 0x0000000000000003,
		ExternalCamera       = 0x0000000000000004,
		Gun                  = 0x0000000000000005,
		Special              = 0x0000000000000006,
		Special01            = 0x0000000000000007,
		Special02            = 0x0000000000000008,
		Special03            = 0x0000000000000009,
		Special04            = 0x000000000000000A,
		Special05            = 0x000000000000000B,
		Special06            = 0x000000000000000C,
		Special07            = 0x000000000000000D,
		Special08            = 0x000000000000000E,
		Special09            = 0x000000000000000F,
		Special10            = 0x0000000000000010,
		ControllerHand_Count = 0x0000000000000011,
		MAX                  = 0x0000000000000012
	};

	/**
	 * Enum InputCore.ETouchType
	 */
	enum class ETouchType : uint8_t
	{
		Began        = 0x0000000000000000,
		Moved        = 0x0000000000000001,
		Stationary   = 0x0000000000000002,
		ForceChanged = 0x0000000000000003,
		FirstMove    = 0x0000000000000004,
		Ended        = 0x0000000000000005,
		NumTypes     = 0x0000000000000006,
		MAX          = 0x0000000000000007
	};

	/**
	 * Enum InputCore.EConsoleForGamepadLabels
	 */
	enum class EConsoleForGamepadLabels : uint8_t
	{
		None    = 0x0000000000000000,
		XBoxOne = 0x0000000000000001,
		PS4     = 0x0000000000000002,
		MAX     = 0x0000000000000003
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct InputCore.Key
	 * Size -> 0x0018
	 */
	struct FKey
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JL14[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
