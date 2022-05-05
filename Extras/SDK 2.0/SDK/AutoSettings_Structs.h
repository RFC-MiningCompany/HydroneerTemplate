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
	 * ScriptStruct AutoSettings.SettingOption
	 * Size -> 0x0028
	 */
	struct FSettingOption
	{
	public:
		class FText                                                Label;                                                   // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AutoSettings.AutoSettingData
	 * Size -> 0x0038
	 */
	struct FAutoSettingData
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               Tags;                                                    // 0x0018(0x0020) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
