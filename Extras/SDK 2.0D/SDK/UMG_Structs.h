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
	 * Enum UMG.ESlateAccessibleBehavior
	 */
	enum class UMG_ESlateAccessibleBehavior : uint8_t
	{
		ESlateAccessibleBehavior__NotAccessible                = 0,
		ESlateAccessibleBehavior__Auto                         = 1,
		ESlateAccessibleBehavior__Summary                      = 2,
		ESlateAccessibleBehavior__Custom                       = 3,
		ESlateAccessibleBehavior__ToolTip                      = 4,
		ESlateAccessibleBehavior__ESlateAccessibleBehavior_MAX = 5
	};

	/**
	 * Enum UMG.ESlateVisibility
	 */
	enum class UMG_ESlateVisibility : uint8_t
	{
		ESlateVisibility__Visible              = 0,
		ESlateVisibility__Collapsed            = 1,
		ESlateVisibility__Hidden               = 2,
		ESlateVisibility__HitTestInvisible     = 3,
		ESlateVisibility__SelfHitTestInvisible = 4,
		ESlateVisibility__ESlateVisibility_MAX = 5
	};

	/**
	 * Enum UMG.EVirtualKeyboardType
	 */
	enum class UMG_EVirtualKeyboardType : uint8_t
	{
		EVirtualKeyboardType__Default                  = 0,
		EVirtualKeyboardType__Number                   = 1,
		EVirtualKeyboardType__Web                      = 2,
		EVirtualKeyboardType__Email                    = 3,
		EVirtualKeyboardType__Password                 = 4,
		EVirtualKeyboardType__AlphaNumeric             = 5,
		EVirtualKeyboardType__EVirtualKeyboardType_MAX = 6
	};

	/**
	 * Enum UMG.EDragPivot
	 */
	enum class UMG_EDragPivot : uint8_t
	{
		EDragPivot__MouseDown      = 0,
		EDragPivot__TopLeft        = 1,
		EDragPivot__TopCenter      = 2,
		EDragPivot__TopRight       = 3,
		EDragPivot__CenterLeft     = 4,
		EDragPivot__CenterCenter   = 5,
		EDragPivot__CenterRight    = 6,
		EDragPivot__BottomLeft     = 7,
		EDragPivot__BottomCenter   = 8,
		EDragPivot__BottomRight    = 9,
		EDragPivot__EDragPivot_MAX = 10
	};

	/**
	 * Enum UMG.EDynamicBoxType
	 */
	enum class UMG_EDynamicBoxType : uint8_t
	{
		EDynamicBoxType__Horizontal          = 0,
		EDynamicBoxType__Vertical            = 1,
		EDynamicBoxType__Wrap                = 2,
		EDynamicBoxType__VerticalWrap        = 3,
		EDynamicBoxType__Radial              = 4,
		EDynamicBoxType__Overlay             = 5,
		EDynamicBoxType__EDynamicBoxType_MAX = 6
	};

	/**
	 * Enum UMG.ESlateSizeRule
	 */
	enum class UMG_ESlateSizeRule : uint8_t
	{
		ESlateSizeRule__Automatic          = 0,
		ESlateSizeRule__Fill               = 1,
		ESlateSizeRule__ESlateSizeRule_MAX = 2
	};

	/**
	 * Enum UMG.EUMGSequencePlayMode
	 */
	enum class UMG_EUMGSequencePlayMode : uint8_t
	{
		EUMGSequencePlayMode__Forward                  = 0,
		EUMGSequencePlayMode__Reverse                  = 1,
		EUMGSequencePlayMode__PingPong                 = 2,
		EUMGSequencePlayMode__EUMGSequencePlayMode_MAX = 3
	};

	/**
	 * Enum UMG.EWidgetAnimationEvent
	 */
	enum class UMG_EWidgetAnimationEvent : uint8_t
	{
		EWidgetAnimationEvent__Started                   = 0,
		EWidgetAnimationEvent__Finished                  = 1,
		EWidgetAnimationEvent__EWidgetAnimationEvent_MAX = 2
	};

	/**
	 * Enum UMG.EWidgetTickFrequency
	 */
	enum class UMG_EWidgetTickFrequency : uint8_t
	{
		EWidgetTickFrequency__Never                    = 0,
		EWidgetTickFrequency__Auto                     = 1,
		EWidgetTickFrequency__EWidgetTickFrequency_MAX = 2
	};

	/**
	 * Enum UMG.EWidgetDesignFlags
	 */
	enum class UMG_EWidgetDesignFlags : uint8_t
	{
		EWidgetDesignFlags__None                   = 0,
		EWidgetDesignFlags__Designing              = 1,
		EWidgetDesignFlags__ShowOutline            = 2,
		EWidgetDesignFlags__ExecutePreConstruct    = 3,
		EWidgetDesignFlags__EWidgetDesignFlags_MAX = 4
	};

	/**
	 * Enum UMG.EBindingKind
	 */
	enum class UMG_EBindingKind : uint8_t
	{
		EBindingKind__Function         = 0,
		EBindingKind__Property         = 1,
		EBindingKind__EBindingKind_MAX = 2
	};

	/**
	 * Enum UMG.ETickMode
	 */
	enum class UMG_ETickMode : uint8_t
	{
		ETickMode__Disabled      = 0,
		ETickMode__Enabled       = 1,
		ETickMode__Automatic     = 2,
		ETickMode__ETickMode_MAX = 3
	};

	/**
	 * Enum UMG.EWindowVisibility
	 */
	enum class UMG_EWindowVisibility : uint8_t
	{
		EWindowVisibility__Visible               = 0,
		EWindowVisibility__SelfHitTestInvisible  = 1,
		EWindowVisibility__EWindowVisibility_MAX = 2
	};

	/**
	 * Enum UMG.EWidgetGeometryMode
	 */
	enum class UMG_EWidgetGeometryMode : uint8_t
	{
		EWidgetGeometryMode__Plane                   = 0,
		EWidgetGeometryMode__Cylinder                = 1,
		EWidgetGeometryMode__EWidgetGeometryMode_MAX = 2
	};

	/**
	 * Enum UMG.EWidgetBlendMode
	 */
	enum class UMG_EWidgetBlendMode : uint8_t
	{
		EWidgetBlendMode__Opaque               = 0,
		EWidgetBlendMode__Masked               = 1,
		EWidgetBlendMode__Transparent          = 2,
		EWidgetBlendMode__EWidgetBlendMode_MAX = 3
	};

	/**
	 * Enum UMG.EWidgetTimingPolicy
	 */
	enum class UMG_EWidgetTimingPolicy : uint8_t
	{
		EWidgetTimingPolicy__RealTime                = 0,
		EWidgetTimingPolicy__GameTime                = 1,
		EWidgetTimingPolicy__EWidgetTimingPolicy_MAX = 2
	};

	/**
	 * Enum UMG.EWidgetSpace
	 */
	enum class UMG_EWidgetSpace : uint8_t
	{
		EWidgetSpace__World            = 0,
		EWidgetSpace__Screen           = 1,
		EWidgetSpace__EWidgetSpace_MAX = 2
	};

	/**
	 * Enum UMG.EWidgetInteractionSource
	 */
	enum class UMG_EWidgetInteractionSource : uint8_t
	{
		EWidgetInteractionSource__World                        = 0,
		EWidgetInteractionSource__Mouse                        = 1,
		EWidgetInteractionSource__CenterScreen                 = 2,
		EWidgetInteractionSource__Custom                       = 3,
		EWidgetInteractionSource__EWidgetInteractionSource_MAX = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct UMG.WidgetTransform
	 * Size -> 0x001C
	 */
	struct FWidgetTransform
	{
	public:
		struct FVector2D                                           Translation;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Scale;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Shear;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct UMG.NamedSlotBinding
	 * Size -> 0x0010
	 */
	struct FNamedSlotBinding
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidget*                                             Content;                                                 // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct UMG.AnimationEventBinding
	 * Size -> 0x0028
	 */
	struct FAnimationEventBinding
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Delegate;                                                // 0x0008(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		UMG_EWidgetAnimationEvent                                  AnimationEvent;                                          // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DAEG[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                UserTag;                                                 // 0x001C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HAIQ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UMG.DynamicPropertyPath
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	struct FDynamicPropertyPath : public FCachedPropertyPath
	{
	};

	/**
	 * ScriptStruct UMG.AnchorData
	 * Size -> 0x0028
	 */
	struct FAnchorData
	{
	public:
		struct FMargin                                             Offsets;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FAnchors                                            Anchors;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           Alignment;                                               // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct UMG.SlateChildSize
	 * Size -> 0x0008
	 */
	struct FSlateChildSize
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		UMG_ESlateSizeRule                                         SizeRule;                                                // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MNMT[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UMG.RadialBoxSettings
	 * Size -> 0x000C
	 */
	struct FRadialBoxSettings
	{
	public:
		bool                                                       bDistributeItemsEvenly;                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LA1J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngleBetweenItems;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartingAngle;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct UMG.UserWidgetPool
	 * Size -> 0x0080
	 */
	struct FUserWidgetPool
	{
	public:
		TArray<class UUserWidget*>                                 ActiveWidgets;                                           // 0x0000(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UUserWidget*>                                 InactiveWidgets;                                         // 0x0010(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SRYM[0x60];                                  // 0x0020(0x0060) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UMG.ShapedTextOptions
	 * Size -> 0x0003
	 */
	struct FShapedTextOptions
	{
	public:
		unsigned char                                              bOverride_TextShapingMethod : 1;                         // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_TextFlowDirection : 1;                         // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SlateCore_ETextShapingMethod                               TextShapingMethod;                                       // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Slate_ETextFlowDirection                                   TextFlowDirection;                                       // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct UMG.MovieScene2DTransformMask
	 * Size -> 0x0004
	 */
	struct FMovieScene2DTransformMask
	{
	public:
		uint32_t                                                   Mask;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct UMG.SlateMeshVertex
	 * Size -> 0x003C
	 */
	struct FSlateMeshVertex
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV0;                                                     // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV1;                                                     // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV2;                                                     // 0x001C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV3;                                                     // 0x0024(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV4;                                                     // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV5;                                                     // 0x0034(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct UMG.WidgetAnimationBinding
	 * Size -> 0x0024
	 */
	struct FWidgetAnimationBinding
	{
	public:
		class FName                                                WidgetName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SlotWidgetName;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               AnimationGuid;                                           // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRootWidget;                                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C287[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
	 * Size -> 0x001C
	 */
	struct FBlueprintWidgetAnimationDelegateBinding
	{
	public:
		UMG_EWidgetAnimationEvent                                  Action;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GTCM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AnimationToBind;                                         // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FunctionNameToBind;                                      // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                UserTag;                                                 // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct UMG.DelegateRuntimeBinding
	 * Size -> 0x0050
	 */
	struct FDelegateRuntimeBinding
	{
	public:
		class FString                                              ObjectName;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PropertyName;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FunctionName;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDynamicPropertyPath                                SourcePath;                                              // 0x0020(0x0028) NativeAccessSpecifierPublic
		UMG_EBindingKind                                           Kind;                                                    // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LQDG[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UMG.WidgetNavigationData
	 * Size -> 0x0024
	 */
	struct FWidgetNavigationData
	{
	public:
		SlateCore_EUINavigationRule                                Rule;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1GNW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                WidgetToFocus;                                           // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UWidget>                              Widget;                                                  // 0x000C(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      CustomDelegate;                                          // 0x0014(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct UMG.EventReply
	 * Size -> 0x00B8
	 */
	struct FEventReply
	{
	public:
		unsigned char                                              UnknownData_RHOW[0xB8];                                  // 0x0000(0x00B8) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UMG.PaintContext
	 * Size -> 0x0030
	 */
	struct FPaintContext
	{
	public:
		unsigned char                                              UnknownData_ZYL8[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UMG.MovieSceneMarginSectionTemplate
	 * Size -> 0x0288 (FullSize[0x02C0] - InheritedSize[0x0038])
	 */
	struct FMovieSceneMarginSectionTemplate : public FMovieScenePropertySectionTemplate
	{
	public:
		struct FMovieSceneFloatChannel                             TopCurve;                                                // 0x0038(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             LeftCurve;                                               // 0x00D8(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             RightCurve;                                              // 0x0178(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             BottomCurve;                                             // 0x0218(0x00A0) NativeAccessSpecifierPrivate
		MovieScene_EMovieSceneBlendType                            BlendType;                                               // 0x02B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9DZ6[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
	{
	public:
		TArray<class FName>                                        BrushPropertyNamePath;                                   // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct UMG.RichTextStyleRow
	 * Size -> 0x0270 (FullSize[0x0278] - InheritedSize[0x0008])
	 */
	struct FRichTextStyleRow : public FTableRowBase
	{
	public:
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0008(0x0270) Edit, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct UMG.RichImageRow
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRichImageRow : public FTableRowBase
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0008(0x0088) Edit, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct UMG.WidgetComponentInstanceData
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	struct FWidgetComponentInstanceData : public FSceneComponentInstanceData
	{
	public:
		unsigned char                                              UnknownData_8R7L[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
