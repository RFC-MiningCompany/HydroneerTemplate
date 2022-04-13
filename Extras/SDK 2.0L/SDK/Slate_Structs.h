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
	 * Enum Slate.EVirtualKeyboardDismissAction
	 */
	enum class EVirtualKeyboardDismissAction : uint8_t
	{
		TextChangeOnDismiss = 0x0000000000000000,
		TextCommitOnAccept  = 0x0000000000000001,
		TextCommitOnDismiss = 0x0000000000000002,
		MAX                 = 0x0000000000000003
	};

	/**
	 * Enum Slate.EVirtualKeyboardTrigger
	 */
	enum class EVirtualKeyboardTrigger : uint8_t
	{
		OnFocusByPointer = 0x0000000000000000,
		OnAllFocusEvents = 0x0000000000000001,
		MAX              = 0x0000000000000002
	};

	/**
	 * Enum Slate.ETableViewMode
	 */
	enum class ETableViewMode : uint8_t
	{
		List = 0x0000000000000000,
		Tile = 0x0000000000000001,
		Tree = 0x0000000000000002,
		MAX  = 0x0000000000000003
	};

	/**
	 * Enum Slate.ESelectionMode
	 */
	enum class ESelectionMode : uint8_t
	{
		None         = 0x0000000000000000,
		Single       = 0x0000000000000001,
		SingleToggle = 0x0000000000000002,
		Multi        = 0x0000000000000003,
		MAX          = 0x0000000000000004
	};

	/**
	 * Enum Slate.EMultiBlockType
	 */
	enum class EMultiBlockType : uint8_t
	{
		None               = 0x0000000000000000,
		ButtonRow          = 0x0000000000000001,
		EditableText       = 0x0000000000000002,
		Heading            = 0x0000000000000003,
		MenuEntry          = 0x0000000000000004,
		Separator          = 0x0000000000000005,
		ToolBarButton      = 0x0000000000000006,
		ToolBarComboButton = 0x0000000000000007,
		Widget             = 0x0000000000000008,
		MAX                = 0x0000000000000009
	};

	/**
	 * Enum Slate.EMultiBoxType
	 */
	enum class EMultiBoxType : uint8_t
	{
		MenuBar         = 0x0000000000000000,
		ToolBar         = 0x0000000000000001,
		VerticalToolBar = 0x0000000000000002,
		UniformToolBar  = 0x0000000000000003,
		Menu            = 0x0000000000000004,
		ButtonRow       = 0x0000000000000005,
		MAX             = 0x0000000000000006
	};

	/**
	 * Enum Slate.EProgressBarFillType
	 */
	enum class EProgressBarFillType : uint8_t
	{
		LeftToRight    = 0x0000000000000000,
		RightToLeft    = 0x0000000000000001,
		FillFromCenter = 0x0000000000000002,
		TopToBottom    = 0x0000000000000003,
		BottomToTop    = 0x0000000000000004,
		MAX            = 0x0000000000000005
	};

	/**
	 * Enum Slate.EStretch
	 */
	enum class EStretch : uint8_t
	{
		None            = 0x0000000000000000,
		Fill            = 0x0000000000000001,
		ScaleToFit      = 0x0000000000000002,
		ScaleToFitX     = 0x0000000000000003,
		ScaleToFitY     = 0x0000000000000004,
		ScaleToFill     = 0x0000000000000005,
		ScaleBySafeZone = 0x0000000000000006,
		UserSpecified   = 0x0000000000000007,
		MAX             = 0x0000000000000008
	};

	/**
	 * Enum Slate.EStretchDirection
	 */
	enum class EStretchDirection : uint8_t
	{
		Both     = 0x0000000000000000,
		DownOnly = 0x0000000000000001,
		UpOnly   = 0x0000000000000002,
		MAX      = 0x0000000000000003
	};

	/**
	 * Enum Slate.EScrollWhenFocusChanges
	 */
	enum class EScrollWhenFocusChanges : uint8_t
	{
		NoScroll       = 0x0000000000000000,
		InstantScroll  = 0x0000000000000001,
		AnimatedScroll = 0x0000000000000002,
		MAX            = 0x0000000000000003
	};

	/**
	 * Enum Slate.EDescendantScrollDestination
	 */
	enum class EDescendantScrollDestination : uint8_t
	{
		IntoView  = 0x0000000000000000,
		TopOrLeft = 0x0000000000000001,
		Center    = 0x0000000000000002,
		MAX       = 0x0000000000000003
	};

	/**
	 * Enum Slate.EListItemAlignment
	 */
	enum class EListItemAlignment : uint8_t
	{
		EvenlyDistributed = 0x0000000000000000,
		EvenlySize        = 0x0000000000000001,
		EvenlyWide        = 0x0000000000000002,
		LeftAligned       = 0x0000000000000003,
		RightAligned      = 0x0000000000000004,
		CenterAligned     = 0x0000000000000005,
		Fill              = 0x0000000000000006,
		MAX               = 0x0000000000000007
	};

	/**
	 * Enum Slate.ETextFlowDirection
	 */
	enum class ETextFlowDirection : uint8_t
	{
		Auto        = 0x0000000000000000,
		LeftToRight = 0x0000000000000001,
		RightToLeft = 0x0000000000000002,
		MAX         = 0x0000000000000003
	};

	/**
	 * Enum Slate.ETextWrappingPolicy
	 */
	enum class ETextWrappingPolicy : uint8_t
	{
		DefaultWrapping           = 0x0000000000000000,
		AllowPerCharacterWrapping = 0x0000000000000001,
		MAX                       = 0x0000000000000002
	};

	/**
	 * Enum Slate.ETextTransformPolicy
	 */
	enum class ETextTransformPolicy : uint8_t
	{
		None    = 0x0000000000000000,
		ToLower = 0x0000000000000001,
		ToUpper = 0x0000000000000002,
		MAX     = 0x0000000000000003
	};

	/**
	 * Enum Slate.ETextJustify
	 */
	enum class ETextJustify : uint8_t
	{
		Left   = 0x0000000000000000,
		Center = 0x0000000000000001,
		Right  = 0x0000000000000002,
		MAX    = 0x0000000000000003
	};

	/**
	 * Enum Slate.ECustomizedToolMenuVisibility
	 */
	enum class ECustomizedToolMenuVisibility : uint8_t
	{
		None    = 0x0000000000000000,
		Visible = 0x0000000000000001,
		Hidden  = 0x0000000000000002,
		MAX     = 0x0000000000000003
	};

	/**
	 * Enum Slate.EMultipleKeyBindingIndex
	 */
	enum class EMultipleKeyBindingIndex : uint8_t
	{
		Primary   = 0x0000000000000000,
		Secondary = 0x0000000000000001,
		NumChords = 0x0000000000000002,
		MAX       = 0x0000000000000003
	};

	/**
	 * Enum Slate.EUserInterfaceActionType
	 */
	enum class EUserInterfaceActionType : uint8_t
	{
		None            = 0x0000000000000000,
		Button          = 0x0000000000000001,
		ToggleButton    = 0x0000000000000002,
		RadioButton     = 0x0000000000000003,
		Check           = 0x0000000000000004,
		CollapsedButton = 0x0000000000000005,
		MAX             = 0x0000000000000006
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Slate.InputChord
	 * Size -> 0x0020
	 */
	struct FInputChord
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShift : 1;                                              // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCtrl : 1;                                               // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAlt : 1;                                                // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCmd : 1;                                                // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5MA[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Slate.VirtualKeyboardOptions
	 * Size -> 0x0001
	 */
	struct FVirtualKeyboardOptions
	{
	public:
		bool                                                       bEnableAutocorrect;                                      // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Slate.Anchors
	 * Size -> 0x0010
	 */
	struct FAnchors
	{
	public:
		struct FVector2D                                           Minimum;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Maximum;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Slate.CustomizedToolMenuEntry
	 * Size -> 0x0004
	 */
	struct FCustomizedToolMenuEntry
	{
	public:
		ECustomizedToolMenuVisibility                              Visibility;                                              // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YJ2H[0x3];                                   // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct Slate.CustomizedToolMenuSection
	 * Size -> 0x0004
	 */
	struct FCustomizedToolMenuSection
	{
	public:
		ECustomizedToolMenuVisibility                              Visibility;                                              // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3R92[0x3];                                   // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct Slate.CustomizedToolMenuNameArray
	 * Size -> 0x0010
	 */
	struct FCustomizedToolMenuNameArray
	{
	public:
		TArray<class FName>                                        Names;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Slate.CustomizedToolMenu
	 * Size -> 0x01E8
	 */
	struct FCustomizedToolMenu
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, struct FCustomizedToolMenuEntry>         Entries;                                                 // 0x0008(0x0050) NativeAccessSpecifierPublic
		TMap<class FName, struct FCustomizedToolMenuSection>       Sections;                                                // 0x0058(0x0050) NativeAccessSpecifierPublic
		TMap<class FName, struct FCustomizedToolMenuNameArray>     EntryOrder;                                              // 0x00A8(0x0050) NativeAccessSpecifierPublic
		TArray<class FName>                                        SectionOrder;                                            // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7UGG[0xE0];                                  // 0x0108(0x00E0) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
