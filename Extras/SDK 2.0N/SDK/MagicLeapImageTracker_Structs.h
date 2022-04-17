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
	 * Enum MagicLeapImageTracker.EMagicLeapImageTargetOrientation
	 */
	enum class EMagicLeapImageTargetOrientation : uint8_t
	{
		ForwardAxisAsNormal = 0x0000000000000000,
		UpAxisAsNormal      = 0x0000000000000001,
		MAX                 = 0x0000000000000002
	};

	/**
	 * Enum MagicLeapImageTracker.EMagicLeapImageTargetStatus
	 */
	enum class EMagicLeapImageTargetStatus : uint8_t
	{
		Tracked    = 0x0000000000000000,
		Unreliable = 0x0000000000000001,
		NotTracked = 0x0000000000000002,
		MAX        = 0x0000000000000003
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MagicLeapImageTracker.MagicLeapImageTargetState
	 * Size -> 0x001C
	 */
	struct FMagicLeapImageTargetState
	{
	public:
		EMagicLeapImageTargetStatus                                TrackingStatus;                                          // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_66VH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Location;                                                // 0x0004(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0010(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MagicLeapImageTracker.MagicLeapImageTargetSettings
	 * Size -> 0x0020
	 */
	struct FMagicLeapImageTargetSettings
	{
	public:
		class UTexture2D*                                          ImageTexture;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LongerDimension;                                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsStationary;                                           // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BIsEnabled;                                              // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J41S[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
