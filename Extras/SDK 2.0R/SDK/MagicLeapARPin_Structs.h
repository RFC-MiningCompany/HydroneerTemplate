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
	 * Enum MagicLeapARPin.EMagicLeapARPinType
	 */
	enum class EMagicLeapARPinType : uint8_t
	{
		SingleUserSingleSession = 0x0000000000000000,
		SingleUserMultiSession  = 0x0000000000000001,
		MultiUserMultiSession   = 0x0000000000000002,
		MAX                     = 0x0000000000000003
	};

	/**
	 * Enum MagicLeapARPin.EMagicLeapAutoPinType
	 */
	enum class EMagicLeapAutoPinType : uint8_t
	{
		OnlyOnDataRestoration = 0x0000000000000000,
		Always                = 0x0000000000000001,
		Never                 = 0x0000000000000002,
		MAX                   = 0x0000000000000003
	};

	/**
	 * Enum MagicLeapARPin.EMagicLeapPassableWorldError
	 */
	enum class EMagicLeapPassableWorldError : uint8_t
	{
		None                    = 0x0000000000000000,
		LowMapQuality           = 0x0000000000000001,
		UnableToLocalize        = 0x0000000000000002,
		Unavailable             = 0x0000000000000003,
		PrivilegeDenied         = 0x0000000000000004,
		InvalidParam            = 0x0000000000000005,
		UnspecifiedFailure      = 0x0000000000000006,
		PrivilegeRequestPending = 0x0000000000000007,
		StartupPending          = 0x0000000000000008,
		SharedWorldNotEnabled   = 0x0000000000000009,
		NotImplemented          = 0x000000000000000A,
		PinNotFound             = 0x000000000000000B,
		MAX                     = 0x000000000000000C
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MagicLeapARPin.MagicLeapARPinState
	 * Size -> 0x0014
	 */
	struct FMagicLeapARPinState
	{
	public:
		float                                                      Confidence;                                              // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ValidRadius;                                             // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationError;                                           // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TranslationError;                                        // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMagicLeapARPinType                                        PinType;                                                 // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W16H[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MagicLeapARPin.MagicLeapARPinObjectIdList
	 * Size -> 0x0050
	 */
	struct FMagicLeapARPinObjectIdList
	{
	public:
		unsigned char                                              ObjectIdList[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct MagicLeapARPin.MagicLeapARPinQuery
	 * Size -> 0x0068
	 */
	struct FMagicLeapARPinQuery
	{
	public:
		unsigned char                                              Types[0x50];                                             // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
		int32_t                                                    MaxResults;                                              // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetPoint;                                             // 0x0054(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSorted;                                                 // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BVBQ[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
