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
	 * Enum GameplayTags.EGameplayTagQueryExprType
	 */
	enum class EGameplayTagQueryExprType : uint8_t
	{
		Undefined    = 0x0000000000000000,
		AnyTagsMatch = 0x0000000000000001,
		AllTagsMatch = 0x0000000000000002,
		NoTagsMatch  = 0x0000000000000003,
		AnyExprMatch = 0x0000000000000004,
		AllExprMatch = 0x0000000000000005,
		NoExprMatch  = 0x0000000000000006,
		MAX          = 0x0000000000000007
	};

	/**
	 * Enum GameplayTags.EGameplayContainerMatchType
	 */
	enum class EGameplayContainerMatchType : uint8_t
	{
		Any = 0x0000000000000000,
		All = 0x0000000000000001,
		MAX = 0x0000000000000002
	};

	/**
	 * Enum GameplayTags.EGameplayTagMatchType
	 */
	enum class EGameplayTagMatchType : uint8_t
	{
		Explicit          = 0x0000000000000000,
		IncludeParentTags = 0x0000000000000001,
		MAX               = 0x0000000000000002
	};

	/**
	 * Enum GameplayTags.EGameplayTagSelectionType
	 */
	enum class EGameplayTagSelectionType : uint8_t
	{
		None              = 0x0000000000000000,
		NonRestrictedOnly = 0x0000000000000001,
		RestrictedOnly    = 0x0000000000000002,
		All               = 0x0000000000000003,
		MAX               = 0x0000000000000004
	};

	/**
	 * Enum GameplayTags.EGameplayTagSourceType
	 */
	enum class EGameplayTagSourceType : uint8_t
	{
		Native            = 0x0000000000000000,
		DefaultTagList    = 0x0000000000000001,
		TagList           = 0x0000000000000002,
		RestrictedTagList = 0x0000000000000003,
		DataTable         = 0x0000000000000004,
		Invalid           = 0x0000000000000005,
		MAX               = 0x0000000000000006
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameplayTags.GameplayTag
	 * Size -> 0x0008
	 */
	struct FGameplayTag
	{
	public:
		class FName                                                TagName;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct GameplayTags.GameplayTagQuery
	 * Size -> 0x0048
	 */
	struct FGameplayTagQuery
	{
	public:
		int32_t                                                    TokenStreamVersion;                                      // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TTMM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                TagDictionary;                                           // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      QueryTokenStream;                                        // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		class FString                                              UserDescription;                                         // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              AutoDescription;                                         // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GameplayTags.GameplayTagContainer
	 * Size -> 0x0020
	 */
	struct FGameplayTagContainer
	{
	public:
		TArray<struct FGameplayTag>                                GameplayTags;                                            // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, Protected, NativeAccessSpecifierProtected
		TArray<struct FGameplayTag>                                ParentTags;                                              // 0x0010(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct GameplayTags.GameplayTagSource
	 * Size -> 0x0020
	 */
	struct FGameplayTagSource
	{
	public:
		class FName                                                SourceName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayTagSourceType                                     SourceType;                                              // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z1IN[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameplayTagsList*                                   SourceTagList;                                           // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URestrictedGameplayTagsList*                         SourceRestrictedTagList;                                 // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayTags.GameplayTagTableRow
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FGameplayTagTableRow : public FTableRowBase
	{
	public:
		class FName                                                Tag;                                                     // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DevComment;                                              // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FRestrictedGameplayTagTableRow : public FGameplayTagTableRow
	{
	public:
		bool                                                       bAllowNonRestrictedChildren;                             // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J2MA[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayTags.GameplayTagCategoryRemap
	 * Size -> 0x0020
	 */
	struct FGameplayTagCategoryRemap
	{
	public:
		class FString                                              BaseCategory;                                            // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      RemapCategories;                                         // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayTags.GameplayTagRedirect
	 * Size -> 0x0010
	 */
	struct FGameplayTagRedirect
	{
	public:
		class FName                                                OldTagName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NewTagName;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayTags.RestrictedConfigInfo
	 * Size -> 0x0020
	 */
	struct FRestrictedConfigInfo
	{
	public:
		class FString                                              RestrictedConfigName;                                    // 0x0000(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Owners;                                                  // 0x0010(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
	 * Size -> 0x0001
	 */
	struct FGameplayTagCreationWidgetHelper
	{
	public:
		unsigned char                                              UnknownData_0Z7E[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayTags.GameplayTagReferenceHelper
	 * Size -> 0x0010
	 */
	struct FGameplayTagReferenceHelper
	{
	public:
		unsigned char                                              UnknownData_V1U1[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayTags.GameplayTagNode
	 * Size -> 0x0050
	 */
	struct FGameplayTagNode
	{
	public:
		unsigned char                                              UnknownData_9SO0[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
