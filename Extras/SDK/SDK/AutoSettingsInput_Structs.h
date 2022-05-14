#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * Enum AutoSettingsInput.EBindingCaptureMode
	 */
	enum class EBindingCaptureMode : uint8_t
	{
		OnReleased = 0,
		OnPressed  = 1,
		MAX        = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AutoSettingsInput.ConfigActionKeyMapping
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FConfigActionKeyMapping : public FInputActionKeyMapping
	{
	public:
		bool                                                       bIsDefault;                                              // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MF54[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AutoSettingsInput.ConfigAxisKeyMapping
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FConfigAxisKeyMapping : public FInputAxisKeyMapping
	{
	public:
		bool                                                       bIsDefault;                                              // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KRD6[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AutoSettingsInput.InputMappingGroup
	 * Size -> 0x0050
	 */
	struct FInputMappingGroup
	{
	public:
		TArray<struct FConfigActionKeyMapping>                     ActionMappings;                                          // 0x0000(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FConfigAxisKeyMapping>                       AxisMappings;                                            // 0x0010(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FConfigActionKeyMapping>                     UnboundActionMappings;                                   // 0x0020(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FConfigAxisKeyMapping>                       UnboundAxisMappings;                                     // 0x0030(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GILF[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AutoSettingsInput.InputMappingLayout
	 * Size -> 0x0020
	 */
	struct FInputMappingLayout
	{
	public:
		TArray<struct FInputMappingGroup>                          MappingGroups;                                           // 0x0000(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XM31[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AutoSettingsInput.InputMappingPreset
	 * Size -> 0x0040
	 */
	struct FInputMappingPreset
	{
	public:
		struct FGameplayTag                                        PresetTag;                                               // 0x0000(0x0008) Edit, BlueprintVisible, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDefaultMappings;                                     // 0x0008(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68JI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputMappingLayout                                 InputLayout;                                             // 0x0010(0x0020) Edit, Config, NativeAccessSpecifierPublic
		TArray<struct FInputMappingGroup>                          MappingGroups;                                           // 0x0030(0x0010) ZeroConstructor, Config, Deprecated, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AutoSettingsInput.MappingGroupLink
	 * Size -> 0x0010
	 */
	struct FMappingGroupLink
	{
	public:
		TArray<int32_t>                                            MappingGroups;                                           // 0x0000(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AutoSettingsInput.KeyIconPair
	 * Size -> 0x0020
	 */
	struct FKeyIconPair
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            Icon;                                                    // 0x0018(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AutoSettingsInput.KeyIconSet
	 * Size -> 0x0080
	 */
	struct FKeyIconSet
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0000(0x0020) Edit, Config, NativeAccessSpecifierPublic
		unsigned char                                              IconMap[0x50];                                           // 0x0020(0x0050) UNKNOWN PROPERTY: MapProperty
		TArray<struct FKeyIconPair>                                Icons;                                                   // 0x0070(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AutoSettingsInput.KeyFriendlyName
	 * Size -> 0x0030
	 */
	struct FKeyFriendlyName
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                FriendlyName;                                            // 0x0018(0x0018) Edit, Config, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AutoSettingsInput.KeyGroup
	 * Size -> 0x0020
	 */
	struct FKeyGroup
	{
	public:
		struct FGameplayTag                                        KeyGroupTag;                                             // 0x0000(0x0008) Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseGamepadKeys;                                         // 0x0008(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseNonGamepadKeys;                                      // 0x0009(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ARCO[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKey>                                        Keys;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AutoSettingsInput.KeyScale
	 * Size -> 0x0020
	 */
	struct FKeyScale
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0018(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_58SO[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AutoSettingsInput.AxisAssociation
	 * Size -> 0x0050
	 */
	struct FAxisAssociation
	{
	public:
		struct FKey                                                AxisKey;                                                 // 0x0000(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                AnalogKey;                                               // 0x0018(0x0018) Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FKeyScale>                                   ButtonKeys;                                              // 0x0030(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FKeyScale>                                   BooleanKeys;                                             // 0x0040(0x0010) ZeroConstructor, Config, Deprecated, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AutoSettingsInput.PlayerInputMappings
	 * Size -> 0x00A0
	 */
	struct FPlayerInputMappings
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerIndex;                                             // 0x0010(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        BasePresetTag;                                           // 0x0014(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNullBasePreset;                                         // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QYTB[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputMappingLayout                                 MappingOverrides;                                        // 0x0020(0x0020) NativeAccessSpecifierPublic
		bool                                                       Custom;                                                  // 0x0040(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J80K[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputMappingPreset                                 Preset;                                                  // 0x0048(0x0040) Deprecated, NativeAccessSpecifierPublic
		struct FGameplayTag                                        PlayerKeyGroup;                                          // 0x0088(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JZUE[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AutoSettingsInput.CapturedInput
	 * Size -> 0x0028
	 */
	struct FCapturedInput
	{
	public:
		struct FInputChord                                         Chord;                                                   // 0x0000(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AxisScale;                                               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_49IH[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
