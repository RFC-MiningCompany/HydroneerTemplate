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
	 * Enum GameplayTags.EGameplayTagQueryExprType
	 */
	enum class GameplayTags_EGameplayTagQueryExprType : uint8_t
	{
		EGameplayTagQueryExprType__Undefined                     = 0,
		EGameplayTagQueryExprType__AnyTagsMatch                  = 1,
		EGameplayTagQueryExprType__AllTagsMatch                  = 2,
		EGameplayTagQueryExprType__NoTagsMatch                   = 3,
		EGameplayTagQueryExprType__AnyExprMatch                  = 4,
		EGameplayTagQueryExprType__AllExprMatch                  = 5,
		EGameplayTagQueryExprType__NoExprMatch                   = 6,
		EGameplayTagQueryExprType__EGameplayTagQueryExprType_MAX = 7
	};

	/**
	 * Enum GameplayTags.EGameplayContainerMatchType
	 */
	enum class GameplayTags_EGameplayContainerMatchType : uint8_t
	{
		EGameplayContainerMatchType__Any                             = 0,
		EGameplayContainerMatchType__All                             = 1,
		EGameplayContainerMatchType__EGameplayContainerMatchType_MAX = 2
	};

	/**
	 * Enum GameplayTags.EGameplayTagMatchType
	 */
	enum class GameplayTags_EGameplayTagMatchType : uint8_t
	{
		EGameplayTagMatchType__Explicit                  = 0,
		EGameplayTagMatchType__IncludeParentTags         = 1,
		EGameplayTagMatchType__EGameplayTagMatchType_MAX = 2
	};

	/**
	 * Enum GameplayTags.EGameplayTagSelectionType
	 */
	enum class GameplayTags_EGameplayTagSelectionType : uint8_t
	{
		EGameplayTagSelectionType__None                          = 0,
		EGameplayTagSelectionType__NonRestrictedOnly             = 1,
		EGameplayTagSelectionType__RestrictedOnly                = 2,
		EGameplayTagSelectionType__All                           = 3,
		EGameplayTagSelectionType__EGameplayTagSelectionType_MAX = 4
	};

	/**
	 * Enum GameplayTags.EGameplayTagSourceType
	 */
	enum class GameplayTags_EGameplayTagSourceType : uint8_t
	{
		EGameplayTagSourceType__Native                     = 0,
		EGameplayTagSourceType__DefaultTagList             = 1,
		EGameplayTagSourceType__TagList                    = 2,
		EGameplayTagSourceType__RestrictedTagList          = 3,
		EGameplayTagSourceType__DataTable                  = 4,
		EGameplayTagSourceType__Invalid                    = 5,
		EGameplayTagSourceType__EGameplayTagSourceType_MAX = 6
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
		unsigned char                                              UnknownData_E65U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		GameplayTags_EGameplayTagSourceType                        SourceType;                                              // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RVWO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_ETTA[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_1YTR[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct GameplayTags.GameplayTagReferenceHelper
	 * Size -> 0x0010
	 */
	struct FGameplayTagReferenceHelper
	{
	public:
		unsigned char                                              UnknownData_RP0C[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct GameplayTags.GameplayTagNode
	 * Size -> 0x0050
	 */
	struct FGameplayTagNode
	{
	public:
		unsigned char                                              UnknownData_BPPF[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
