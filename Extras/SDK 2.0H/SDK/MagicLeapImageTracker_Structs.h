#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0H
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
	enum class MagicLeapImageTracker_EMagicLeapImageTargetOrientation : uint8_t
	{
		EMagicLeapImageTargetOrientation__ForwardAxisAsNormal                  = 0,
		EMagicLeapImageTargetOrientation__UpAxisAsNormal                       = 1,
		EMagicLeapImageTargetOrientation__EMagicLeapImageTargetOrientation_MAX = 2
	};

	/**
	 * Enum MagicLeapImageTracker.EMagicLeapImageTargetStatus
	 */
	enum class MagicLeapImageTracker_EMagicLeapImageTargetStatus : uint8_t
	{
		EMagicLeapImageTargetStatus__Tracked                         = 0,
		EMagicLeapImageTargetStatus__Unreliable                      = 1,
		EMagicLeapImageTargetStatus__NotTracked                      = 2,
		EMagicLeapImageTargetStatus__EMagicLeapImageTargetStatus_MAX = 3
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
		MagicLeapImageTracker_EMagicLeapImageTargetStatus          TrackingStatus;                                          // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HHN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_0X8P[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
