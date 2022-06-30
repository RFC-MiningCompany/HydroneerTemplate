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
	 * Function UMG.Widget.SetVisibility
	 */
	struct UWidget_SetVisibility_Params
	{
	public:
		UMG_ESlateVisibility                                       InVisibility;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.SetUserFocus
	 */
	struct UWidget_SetUserFocus_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.SetToolTipText
	 */
	struct UWidget_SetToolTipText_Params
	{
	public:
		class FText                                                InToolTipText;                                           // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.SetToolTip
	 */
	struct UWidget_SetToolTip_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.SetRenderTranslation
	 */
	struct UWidget_SetRenderTranslation_Params
	{
	public:
		struct FVector2D                                           Translation;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.SetRenderTransformPivot
	 */
	struct UWidget_SetRenderTransformPivot_Params
	{
	public:
		struct FVector2D                                           Pivot;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.SetRenderTransformAngle
	 */
	struct UWidget_SetRenderTransformAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.SetRenderTransform
	 */
	struct UWidget_SetRenderTransform_Params
	{
	public:
		struct FWidgetTransform                                    InTransform;                                             // 0x0000(0x001C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.SetRenderShear
	 */
	struct UWidget_SetRenderShear_Params
	{
	public:
		struct FVector2D                                           Shear;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.SetRenderScale
	 */
	struct UWidget_SetRenderScale_Params
	{
	public:
		struct FVector2D                                           Scale;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.SetRenderOpacity
	 */
	struct UWidget_SetRenderOpacity_Params
	{
	public:
		float                                                      InOpacity;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.SetNavigationRuleExplicit
	 */
	struct UWidget_SetNavigationRuleExplicit_Params
	{
	public:
		SlateCore_EUINavigation                                    Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             InWidget;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.SetNavigationRuleCustomBoundary
	 */
	struct UWidget_SetNavigationRuleCustomBoundary_Params
	{
	public:
		SlateCore_EUINavigation                                    Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      InCustomDelegate;                                        // 0x0004(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.SetNavigationRuleCustom
	 */
	struct UWidget_SetNavigationRuleCustom_Params
	{
	public:
		SlateCore_EUINavigation                                    Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      InCustomDelegate;                                        // 0x0004(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.SetNavigationRuleBase
	 */
	struct UWidget_SetNavigationRuleBase_Params
	{
	public:
		SlateCore_EUINavigation                                    Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SlateCore_EUINavigationRule                                Rule;                                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.SetNavigationRule
	 */
	struct UWidget_SetNavigationRule_Params
	{
	public:
		SlateCore_EUINavigation                                    Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SlateCore_EUINavigationRule                                Rule;                                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                WidgetToFocus;                                           // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.SetKeyboardFocus
	 */
	struct UWidget_SetKeyboardFocus_Params
	{
	};

	/**
	 * Function UMG.Widget.SetIsEnabled
	 */
	struct UWidget_SetIsEnabled_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.SetFocus
	 */
	struct UWidget_SetFocus_Params
	{
	};

	/**
	 * Function UMG.Widget.SetCursor
	 */
	struct UWidget_SetCursor_Params
	{
	public:
		CoreUObject_EMouseCursor                                   InCursor;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.SetClipping
	 */
	struct UWidget_SetClipping_Params
	{
	public:
		SlateCore_EWidgetClipping                                  InClipping;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.SetAllNavigationRules
	 */
	struct UWidget_SetAllNavigationRules_Params
	{
	public:
		SlateCore_EUINavigationRule                                Rule;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                WidgetToFocus;                                           // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.ResetCursor
	 */
	struct UWidget_ResetCursor_Params
	{
	};

	/**
	 * Function UMG.Widget.RemoveFromParent
	 */
	struct UWidget_RemoveFromParent_Params
	{
	};

	/**
	 * DelegateFunction UMG.Widget.OnReply__DelegateSignature
	 */
	struct UWidget_OnReply__DelegateSignature_Params
	{
	public:
		struct FEventReply                                         ReturnValue;                                             // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
	 */
	struct UWidget_OnPointerEvent__DelegateSignature_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.IsVisible
	 */
	struct UWidget_IsVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.IsHovered
	 */
	struct UWidget_IsHovered_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.InvalidateLayoutAndVolatility
	 */
	struct UWidget_InvalidateLayoutAndVolatility_Params
	{
	};

	/**
	 * Function UMG.Widget.HasUserFocusedDescendants
	 */
	struct UWidget_HasUserFocusedDescendants_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.HasUserFocus
	 */
	struct UWidget_HasUserFocus_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.HasMouseCaptureByUser
	 */
	struct UWidget_HasMouseCaptureByUser_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PointerIndex;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.HasMouseCapture
	 */
	struct UWidget_HasMouseCapture_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.HasKeyboardFocus
	 */
	struct UWidget_HasKeyboardFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.HasFocusedDescendants
	 */
	struct UWidget_HasFocusedDescendants_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.HasAnyUserFocus
	 */
	struct UWidget_HasAnyUserFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.Widget.GetWidget__DelegateSignature
	 */
	struct UWidget_GetWidget__DelegateSignature_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.GetVisibility
	 */
	struct UWidget_GetVisibility_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.GetTickSpaceGeometry
	 */
	struct UWidget_GetTickSpaceGeometry_Params
	{
	public:
		struct FGeometry                                           ReturnValue;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.Widget.GetText__DelegateSignature
	 */
	struct UWidget_GetText__DelegateSignature_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
	 */
	struct UWidget_GetSlateVisibility__DelegateSignature_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
	 */
	struct UWidget_GetSlateColor__DelegateSignature_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
	 */
	struct UWidget_GetSlateBrush__DelegateSignature_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.GetRenderTransformAngle
	 */
	struct UWidget_GetRenderTransformAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.GetRenderOpacity
	 */
	struct UWidget_GetRenderOpacity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.GetParent
	 */
	struct UWidget_GetParent_Params
	{
	public:
		class UPanelWidget*                                        ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.GetPaintSpaceGeometry
	 */
	struct UWidget_GetPaintSpaceGeometry_Params
	{
	public:
		struct FGeometry                                           ReturnValue;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.GetOwningPlayer
	 */
	struct UWidget_GetOwningPlayer_Params
	{
	public:
		class APlayerController*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.GetOwningLocalPlayer
	 */
	struct UWidget_GetOwningLocalPlayer_Params
	{
	public:
		class ULocalPlayer*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
	 */
	struct UWidget_GetMouseCursor__DelegateSignature_Params
	{
	public:
		CoreUObject_EMouseCursor                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
	 */
	struct UWidget_GetLinearColor__DelegateSignature_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.GetIsEnabled
	 */
	struct UWidget_GetIsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.Widget.GetInt32__DelegateSignature
	 */
	struct UWidget_GetInt32__DelegateSignature_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.GetGameInstance
	 */
	struct UWidget_GetGameInstance_Params
	{
	public:
		class UGameInstance*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.Widget.GetFloat__DelegateSignature
	 */
	struct UWidget_GetFloat__DelegateSignature_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.GetDesiredSize
	 */
	struct UWidget_GetDesiredSize_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.GetClipping
	 */
	struct UWidget_GetClipping_Params
	{
	public:
		SlateCore_EWidgetClipping                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
	 */
	struct UWidget_GetCheckBoxState__DelegateSignature_Params
	{
	public:
		SlateCore_ECheckBoxState                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.GetCachedGeometry
	 */
	struct UWidget_GetCachedGeometry_Params
	{
	public:
		struct FGeometry                                           ReturnValue;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.Widget.GetBool__DelegateSignature
	 */
	struct UWidget_GetBool__DelegateSignature_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.GetAccessibleText
	 */
	struct UWidget_GetAccessibleText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.GetAccessibleSummaryText
	 */
	struct UWidget_GetAccessibleSummaryText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
	 */
	struct UWidget_GenerateWidgetForString__DelegateSignature_Params
	{
	public:
		class FString                                              Item;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
	 */
	struct UWidget_GenerateWidgetForObject__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.ForceVolatile
	 */
	struct UWidget_ForceVolatile_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Widget.ForceLayoutPrepass
	 */
	struct UWidget_ForceLayoutPrepass_Params
	{
	};

	/**
	 * Function UMG.UserWidget.UnregisterInputComponent
	 */
	struct UUserWidget_UnregisterInputComponent_Params
	{
	};

	/**
	 * Function UMG.UserWidget.UnbindFromAnimationStarted
	 */
	struct UUserWidget_UnbindFromAnimationStarted_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.UnbindFromAnimationFinished
	 */
	struct UUserWidget_UnbindFromAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.UnbindAllFromAnimationStarted
	 */
	struct UUserWidget_UnbindAllFromAnimationStarted_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.UnbindAllFromAnimationFinished
	 */
	struct UUserWidget_UnbindAllFromAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.Tick
	 */
	struct UUserWidget_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.StopListeningForInputAction
	 */
	struct UUserWidget_StopListeningForInputAction_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine_EInputEvent                                         EventType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.StopListeningForAllInputActions
	 */
	struct UUserWidget_StopListeningForAllInputActions_Params
	{
	};

	/**
	 * Function UMG.UserWidget.StopAnimationsAndLatentActions
	 */
	struct UUserWidget_StopAnimationsAndLatentActions_Params
	{
	};

	/**
	 * Function UMG.UserWidget.StopAnimation
	 */
	struct UUserWidget_StopAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.StopAllAnimations
	 */
	struct UUserWidget_StopAllAnimations_Params
	{
	};

	/**
	 * Function UMG.UserWidget.SetPositionInViewport
	 */
	struct UUserWidget_SetPositionInViewport_Params
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRemoveDPIScale;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.SetPlaybackSpeed
	 */
	struct UUserWidget_SetPlaybackSpeed_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PlaybackSpeed;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.SetPadding
	 */
	struct UUserWidget_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.SetOwningPlayer
	 */
	struct UUserWidget_SetOwningPlayer_Params
	{
	public:
		class APlayerController*                                   LocalPlayerController;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.SetNumLoopsToPlay
	 */
	struct UUserWidget_SetNumLoopsToPlay_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumLoopsToPlay;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.SetInputActionPriority
	 */
	struct UUserWidget_SetInputActionPriority_Params
	{
	public:
		int32_t                                                    NewPriority;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.SetInputActionBlocking
	 */
	struct UUserWidget_SetInputActionBlocking_Params
	{
	public:
		bool                                                       bShouldBlock;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.SetForegroundColor
	 */
	struct UUserWidget_SetForegroundColor_Params
	{
	public:
		struct FSlateColor                                         InForegroundColor;                                       // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.SetDesiredSizeInViewport
	 */
	struct UUserWidget_SetDesiredSizeInViewport_Params
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.SetColorAndOpacity
	 */
	struct UUserWidget_SetColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.SetAnimationCurrentTime
	 */
	struct UUserWidget_SetAnimationCurrentTime_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InTime;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.SetAnchorsInViewport
	 */
	struct UUserWidget_SetAnchorsInViewport_Params
	{
	public:
		struct FAnchors                                            Anchors;                                                 // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.SetAlignmentInViewport
	 */
	struct UUserWidget_SetAlignmentInViewport_Params
	{
	public:
		struct FVector2D                                           Alignment;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.ReverseAnimation
	 */
	struct UUserWidget_ReverseAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.RemoveFromViewport
	 */
	struct UUserWidget_RemoveFromViewport_Params
	{
	};

	/**
	 * Function UMG.UserWidget.RegisterInputComponent
	 */
	struct UUserWidget_RegisterInputComponent_Params
	{
	};

	/**
	 * Function UMG.UserWidget.PreConstruct
	 */
	struct UUserWidget_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.PlaySound
	 */
	struct UUserWidget_PlaySound_Params
	{
	public:
		class USoundBase*                                          SoundToPlay;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.PlayAnimationTimeRange
	 */
	struct UUserWidget_PlayAnimationTimeRange_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartAtTime;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndAtTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumLoopsToPlay;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		UMG_EUMGSequencePlayMode                                   PlayMode;                                                // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PlaybackSpeed;                                           // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRestoreState;                                           // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUMGSequencePlayer*                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.PlayAnimationReverse
	 */
	struct UUserWidget_PlayAnimationReverse_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PlaybackSpeed;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRestoreState;                                           // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUMGSequencePlayer*                                  ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.PlayAnimationForward
	 */
	struct UUserWidget_PlayAnimationForward_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PlaybackSpeed;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRestoreState;                                           // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUMGSequencePlayer*                                  ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.PlayAnimation
	 */
	struct UUserWidget_PlayAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartAtTime;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumLoopsToPlay;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		UMG_EUMGSequencePlayMode                                   PlayMode;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PlaybackSpeed;                                           // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRestoreState;                                           // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUMGSequencePlayer*                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.PauseAnimation
	 */
	struct UUserWidget_PauseAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnTouchStarted
	 */
	struct UUserWidget_OnTouchStarted_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       InTouchEvent;                                            // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnTouchMoved
	 */
	struct UUserWidget_OnTouchMoved_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       InTouchEvent;                                            // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnTouchGesture
	 */
	struct UUserWidget_OnTouchGesture_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       GestureEvent;                                            // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnTouchForceChanged
	 */
	struct UUserWidget_OnTouchForceChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       InTouchEvent;                                            // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnTouchEnded
	 */
	struct UUserWidget_OnTouchEnded_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       InTouchEvent;                                            // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnRemovedFromFocusPath
	 */
	struct UUserWidget_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnPreviewMouseButtonDown
	 */
	struct UUserWidget_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnPreviewKeyDown
	 */
	struct UUserWidget_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnPaint
	 */
	struct UUserWidget_OnPaint_Params
	{
	public:
		struct FPaintContext                                       Context;                                                 // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnMouseWheel
	 */
	struct UUserWidget_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnMouseMove
	 */
	struct UUserWidget_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnMouseLeave
	 */
	struct UUserWidget_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnMouseEnter
	 */
	struct UUserWidget_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnMouseCaptureLost
	 */
	struct UUserWidget_OnMouseCaptureLost_Params
	{
	};

	/**
	 * Function UMG.UserWidget.OnMouseButtonUp
	 */
	struct UUserWidget_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnMouseButtonDown
	 */
	struct UUserWidget_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnMouseButtonDoubleClick
	 */
	struct UUserWidget_OnMouseButtonDoubleClick_Params
	{
	public:
		struct FGeometry                                           InMyGeometry;                                            // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnMotionDetected
	 */
	struct UUserWidget_OnMotionDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FMotionEvent                                        InMotionEvent;                                           // 0x0038(0x0048)  (Parm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x0080(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnKeyUp
	 */
	struct UUserWidget_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnKeyDown
	 */
	struct UUserWidget_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnKeyChar
	 */
	struct UUserWidget_OnKeyChar_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FCharacterEvent                                     InCharacterEvent;                                        // 0x0038(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x0058(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnInitialized
	 */
	struct UUserWidget_OnInitialized_Params
	{
	};

	/**
	 * Function UMG.UserWidget.OnFocusReceived
	 */
	struct UUserWidget_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnFocusLost
	 */
	struct UUserWidget_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnDrop
	 */
	struct UUserWidget_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (Parm, NativeAccessSpecifierPublic)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnDragOver
	 */
	struct UUserWidget_OnDragOver_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (Parm, NativeAccessSpecifierPublic)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnDragLeave
	 */
	struct UUserWidget_OnDragLeave_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (Parm, NativeAccessSpecifierPublic)
		class UDragDropOperation*                                  Operation;                                               // 0x0070(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnDragEnter
	 */
	struct UUserWidget_OnDragEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (Parm, NativeAccessSpecifierPublic)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnDragDetected
	 */
	struct UUserWidget_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnDragCancelled
	 */
	struct UUserWidget_OnDragCancelled_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UDragDropOperation*                                  Operation;                                               // 0x0070(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnAnimationStarted
	 */
	struct UUserWidget_OnAnimationStarted_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnAnimationFinished
	 */
	struct UUserWidget_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnAnalogValueChanged
	 */
	struct UUserWidget_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.OnAddedToFocusPath
	 */
	struct UUserWidget_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.ListenForInputAction
	 */
	struct UUserWidget_ListenForInputAction_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine_EInputEvent                                         EventType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bConsume;                                                // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.IsPlayingAnimation
	 */
	struct UUserWidget_IsPlayingAnimation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.IsListeningForInputAction
	 */
	struct UUserWidget_IsListeningForInputAction_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.IsInViewport
	 */
	struct UUserWidget_IsInViewport_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.IsInteractable
	 */
	struct UUserWidget_IsInteractable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.IsAnyAnimationPlaying
	 */
	struct UUserWidget_IsAnyAnimationPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.IsAnimationPlayingForward
	 */
	struct UUserWidget_IsAnimationPlayingForward_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.IsAnimationPlaying
	 */
	struct UUserWidget_IsAnimationPlaying_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.GetOwningPlayerPawn
	 */
	struct UUserWidget_GetOwningPlayerPawn_Params
	{
	public:
		class APawn*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.GetOwningPlayerCameraManager
	 */
	struct UUserWidget_GetOwningPlayerCameraManager_Params
	{
	public:
		class APlayerCameraManager*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.GetIsVisible
	 */
	struct UUserWidget_GetIsVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.GetAnimationCurrentTime
	 */
	struct UUserWidget_GetAnimationCurrentTime_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.GetAnchorsInViewport
	 */
	struct UUserWidget_GetAnchorsInViewport_Params
	{
	public:
		struct FAnchors                                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.GetAlignmentInViewport
	 */
	struct UUserWidget_GetAlignmentInViewport_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.FlushAnimations
	 */
	struct UUserWidget_FlushAnimations_Params
	{
	};

	/**
	 * Function UMG.UserWidget.Destruct
	 */
	struct UUserWidget_Destruct_Params
	{
	};

	/**
	 * Function UMG.UserWidget.Construct
	 */
	struct UUserWidget_Construct_Params
	{
	};

	/**
	 * Function UMG.UserWidget.CancelLatentActions
	 */
	struct UUserWidget_CancelLatentActions_Params
	{
	};

	/**
	 * Function UMG.UserWidget.BindToAnimationStarted
	 */
	struct UUserWidget_BindToAnimationStarted_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.BindToAnimationFinished
	 */
	struct UUserWidget_BindToAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.BindToAnimationEvent
	 */
	struct UUserWidget_BindToAnimationEvent_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		UMG_EWidgetAnimationEvent                                  AnimationEvent;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                UserTag;                                                 // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.AddToViewport
	 */
	struct UUserWidget_AddToViewport_Params
	{
	public:
		int32_t                                                    ZOrder;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UserWidget.AddToPlayerScreen
	 */
	struct UUserWidget_AddToPlayerScreen_Params
	{
	public:
		int32_t                                                    ZOrder;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.BoolBinding.GetValue
	 */
	struct UBoolBinding_GetValue_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.BorderSlot.SetVerticalAlignment
	 */
	struct UBorderSlot_SetVerticalAlignment_Params
	{
	public:
		SlateCore_EVerticalAlignment                               InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.BorderSlot.SetPadding
	 */
	struct UBorderSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.BorderSlot.SetHorizontalAlignment
	 */
	struct UBorderSlot_SetHorizontalAlignment_Params
	{
	public:
		SlateCore_EHorizontalAlignment                             InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.BrushBinding.GetValue
	 */
	struct UBrushBinding_GetValue_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Button.SetTouchMethod
	 */
	struct UButton_SetTouchMethod_Params
	{
	public:
		SlateCore_EButtonTouchMethod                               InTouchMethod;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Button.SetStyle
	 */
	struct UButton_SetStyle_Params
	{
	public:
		struct FButtonStyle                                        InStyle;                                                 // 0x0000(0x0278)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Button.SetPressMethod
	 */
	struct UButton_SetPressMethod_Params
	{
	public:
		SlateCore_EButtonPressMethod                               InPressMethod;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Button.SetColorAndOpacity
	 */
	struct UButton_SetColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Button.SetClickMethod
	 */
	struct UButton_SetClickMethod_Params
	{
	public:
		SlateCore_EButtonClickMethod                               InClickMethod;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Button.SetBackgroundColor
	 */
	struct UButton_SetBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        InBackgroundColor;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Button.IsPressed
	 */
	struct UButton_IsPressed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.CanvasPanel.AddChildToCanvas
	 */
	struct UCanvasPanel_AddChildToCanvas_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCanvasPanelSlot*                                    ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.CheckBox.SetTouchMethod
	 */
	struct UCheckBox_SetTouchMethod_Params
	{
	public:
		SlateCore_EButtonTouchMethod                               InTouchMethod;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.CheckBox.SetPressMethod
	 */
	struct UCheckBox_SetPressMethod_Params
	{
	public:
		SlateCore_EButtonPressMethod                               InPressMethod;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.CheckBox.SetIsChecked
	 */
	struct UCheckBox_SetIsChecked_Params
	{
	public:
		bool                                                       InIsChecked;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.CheckBox.SetClickMethod
	 */
	struct UCheckBox_SetClickMethod_Params
	{
	public:
		SlateCore_EButtonClickMethod                               InClickMethod;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.CheckBox.SetCheckedState
	 */
	struct UCheckBox_SetCheckedState_Params
	{
	public:
		SlateCore_ECheckBoxState                                   InCheckedState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.CheckBox.IsPressed
	 */
	struct UCheckBox_IsPressed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.CheckBox.IsChecked
	 */
	struct UCheckBox_IsChecked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.CheckBox.GetCheckedState
	 */
	struct UCheckBox_GetCheckedState_Params
	{
	public:
		SlateCore_ECheckBoxState                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.CheckedStateBinding.GetValue
	 */
	struct UCheckedStateBinding_GetValue_Params
	{
	public:
		SlateCore_ECheckBoxState                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.CircularThrobber.SetRadius
	 */
	struct UCircularThrobber_SetRadius_Params
	{
	public:
		float                                                      InRadius;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.CircularThrobber.SetPeriod
	 */
	struct UCircularThrobber_SetPeriod_Params
	{
	public:
		float                                                      InPeriod;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.CircularThrobber.SetNumberOfPieces
	 */
	struct UCircularThrobber_SetNumberOfPieces_Params
	{
	public:
		int32_t                                                    InNumberOfPieces;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.DynamicEntryBoxBase.SetRadialSettings
	 */
	struct UDynamicEntryBoxBase_SetRadialSettings_Params
	{
	public:
		struct FRadialBoxSettings                                  InSettings;                                              // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.DynamicEntryBoxBase.SetEntrySpacing
	 */
	struct UDynamicEntryBoxBase_SetEntrySpacing_Params
	{
	public:
		struct FVector2D                                           InEntrySpacing;                                          // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.DynamicEntryBoxBase.GetNumEntries
	 */
	struct UDynamicEntryBoxBase_GetNumEntries_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.DynamicEntryBoxBase.GetAllEntries
	 */
	struct UDynamicEntryBoxBase_GetAllEntries_Params
	{
	public:
		TArray<class UUserWidget*>                                 ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.EditableTextBox.SetText
	 */
	struct UEditableTextBox_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.EditableTextBox.SetJustification
	 */
	struct UEditableTextBox_SetJustification_Params
	{
	public:
		Slate_ETextJustify                                         InJustification;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.EditableTextBox.SetIsReadOnly
	 */
	struct UEditableTextBox_SetIsReadOnly_Params
	{
	public:
		bool                                                       bReadOnly;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.EditableTextBox.SetIsPassword
	 */
	struct UEditableTextBox_SetIsPassword_Params
	{
	public:
		bool                                                       bIsPassword;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.EditableTextBox.SetHintText
	 */
	struct UEditableTextBox_SetHintText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.EditableTextBox.SetError
	 */
	struct UEditableTextBox_SetError_Params
	{
	public:
		class FText                                                InError;                                                 // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		SlateCore_ETextCommit                                      CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.EditableTextBox.HasError
	 */
	struct UEditableTextBox_HasError_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.EditableTextBox.GetText
	 */
	struct UEditableTextBox_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.EditableTextBox.ClearError
	 */
	struct UEditableTextBox_ClearError_Params
	{
	};

	/**
	 * Function UMG.GridSlot.SetVerticalAlignment
	 */
	struct UGridSlot_SetVerticalAlignment_Params
	{
	public:
		SlateCore_EVerticalAlignment                               InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.GridSlot.SetRowSpan
	 */
	struct UGridSlot_SetRowSpan_Params
	{
	public:
		int32_t                                                    InRowSpan;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.GridSlot.SetRow
	 */
	struct UGridSlot_SetRow_Params
	{
	public:
		int32_t                                                    InRow;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.GridSlot.SetPadding
	 */
	struct UGridSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.GridSlot.SetNudge
	 */
	struct UGridSlot_SetNudge_Params
	{
	public:
		struct FVector2D                                           InNudge;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.GridSlot.SetLayer
	 */
	struct UGridSlot_SetLayer_Params
	{
	public:
		int32_t                                                    InLayer;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.GridSlot.SetHorizontalAlignment
	 */
	struct UGridSlot_SetHorizontalAlignment_Params
	{
	public:
		SlateCore_EHorizontalAlignment                             InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.GridSlot.SetColumnSpan
	 */
	struct UGridSlot_SetColumnSpan_Params
	{
	public:
		int32_t                                                    InColumnSpan;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.GridSlot.SetColumn
	 */
	struct UGridSlot_SetColumn_Params
	{
	public:
		int32_t                                                    InColumn;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.InputKeySelector.SetTextBlockVisibility
	 */
	struct UInputKeySelector_SetTextBlockVisibility_Params
	{
	public:
		UMG_ESlateVisibility                                       InVisibility;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.InputKeySelector.SetSelectedKey
	 */
	struct UInputKeySelector_SetSelectedKey_Params
	{
	public:
		struct FInputChord                                         InSelectedKey;                                           // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.InputKeySelector.SetNoKeySpecifiedText
	 */
	struct UInputKeySelector_SetNoKeySpecifiedText_Params
	{
	public:
		class FText                                                InNoKeySpecifiedText;                                    // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.InputKeySelector.SetKeySelectionText
	 */
	struct UInputKeySelector_SetKeySelectionText_Params
	{
	public:
		class FText                                                InKeySelectionText;                                      // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.InputKeySelector.SetEscapeKeys
	 */
	struct UInputKeySelector_SetEscapeKeys_Params
	{
	public:
		TArray<struct FKey>                                        InKeys;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.InputKeySelector.SetAllowModifierKeys
	 */
	struct UInputKeySelector_SetAllowModifierKeys_Params
	{
	public:
		bool                                                       bInAllowModifierKeys;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.InputKeySelector.SetAllowGamepadKeys
	 */
	struct UInputKeySelector_SetAllowGamepadKeys_Params
	{
	public:
		bool                                                       bInAllowGamepadKeys;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
	 */
	struct UInputKeySelector_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params
	{
	};

	/**
	 * Function UMG.InputKeySelector.GetIsSelectingKey
	 */
	struct UInputKeySelector_GetIsSelectingKey_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.MenuAnchor.ToggleOpen
	 */
	struct UMenuAnchor_ToggleOpen_Params
	{
	public:
		bool                                                       bFocusOnOpen;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.MenuAnchor.ShouldOpenDueToClick
	 */
	struct UMenuAnchor_ShouldOpenDueToClick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.MenuAnchor.SetPlacement
	 */
	struct UMenuAnchor_SetPlacement_Params
	{
	public:
		SlateCore_EMenuPlacement                                   InPlacement;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.MenuAnchor.Open
	 */
	struct UMenuAnchor_Open_Params
	{
	public:
		bool                                                       bFocusMenu;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.MenuAnchor.IsOpen
	 */
	struct UMenuAnchor_IsOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.MenuAnchor.HasOpenSubMenus
	 */
	struct UMenuAnchor_HasOpenSubMenus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature
	 */
	struct UMenuAnchor_GetUserWidget__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.MenuAnchor.GetMenuPosition
	 */
	struct UMenuAnchor_GetMenuPosition_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.MenuAnchor.FitInWindow
	 */
	struct UMenuAnchor_FitInWindow_Params
	{
	public:
		bool                                                       bFit;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.MenuAnchor.Close
	 */
	struct UMenuAnchor_Close_Params
	{
	};

	/**
	 * Function UMG.MouseCursorBinding.GetValue
	 */
	struct UMouseCursorBinding_GetValue_Params
	{
	public:
		CoreUObject_EMouseCursor                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TextLayoutWidget.SetJustification
	 */
	struct UTextLayoutWidget_SetJustification_Params
	{
	public:
		Slate_ETextJustify                                         InJustification;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.MultiLineEditableText.SetWidgetStyle
	 */
	struct UMultiLineEditableText_SetWidgetStyle_Params
	{
	public:
		struct FTextBlockStyle                                     InWidgetStyle;                                           // 0x0000(0x0270)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.MultiLineEditableText.SetText
	 */
	struct UMultiLineEditableText_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.MultiLineEditableText.SetIsReadOnly
	 */
	struct UMultiLineEditableText_SetIsReadOnly_Params
	{
	public:
		bool                                                       bReadOnly;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.MultiLineEditableText.SetHintText
	 */
	struct UMultiLineEditableText_SetHintText_Params
	{
	public:
		class FText                                                InHintText;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	 */
	struct UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		SlateCore_ETextCommit                                      CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	 */
	struct UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.MultiLineEditableText.GetText
	 */
	struct UMultiLineEditableText_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.MultiLineEditableText.GetHintText
	 */
	struct UMultiLineEditableText_GetHintText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Overlay.AddChildToOverlay
	 */
	struct UOverlay_AddChildToOverlay_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOverlaySlot*                                        ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.OverlaySlot.SetVerticalAlignment
	 */
	struct UOverlaySlot_SetVerticalAlignment_Params
	{
	public:
		SlateCore_EVerticalAlignment                               InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.OverlaySlot.SetPadding
	 */
	struct UOverlaySlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.OverlaySlot.SetHorizontalAlignment
	 */
	struct UOverlaySlot_SetHorizontalAlignment_Params
	{
	public:
		SlateCore_EHorizontalAlignment                             InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.ProgressBar.SetPercent
	 */
	struct UProgressBar_SetPercent_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.ProgressBar.SetIsMarquee
	 */
	struct UProgressBar_SetIsMarquee_Params
	{
	public:
		bool                                                       InbIsMarquee;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.ProgressBar.SetFillColorAndOpacity
	 */
	struct UProgressBar_SetFillColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.RichTextBlock.SetTextTransformPolicy
	 */
	struct URichTextBlock_SetTextTransformPolicy_Params
	{
	public:
		Slate_ETextTransformPolicy                                 InTransformPolicy;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.RichTextBlock.SetTextStyleSet
	 */
	struct URichTextBlock_SetTextStyleSet_Params
	{
	public:
		class UDataTable*                                          NewTextStyleSet;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.RichTextBlock.SetText
	 */
	struct URichTextBlock_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.RichTextBlock.SetMinDesiredWidth
	 */
	struct URichTextBlock_SetMinDesiredWidth_Params
	{
	public:
		float                                                      InMinDesiredWidth;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.RichTextBlock.SetDefaultTextStyle
	 */
	struct URichTextBlock_SetDefaultTextStyle_Params
	{
	public:
		struct FTextBlockStyle                                     InDefaultTextStyle;                                      // 0x0000(0x0270)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.RichTextBlock.SetDefaultStrikeBrush
	 */
	struct URichTextBlock_SetDefaultStrikeBrush_Params
	{
	public:
		struct FSlateBrush                                         InStrikeBrush;                                           // 0x0000(0x0088)  (Parm, OutParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.RichTextBlock.SetDefaultShadowOffset
	 */
	struct URichTextBlock_SetDefaultShadowOffset_Params
	{
	public:
		struct FVector2D                                           InShadowOffset;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
	 */
	struct URichTextBlock_SetDefaultShadowColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InShadowColorAndOpacity;                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.RichTextBlock.SetDefaultFont
	 */
	struct URichTextBlock_SetDefaultFont_Params
	{
	public:
		struct FSlateFontInfo                                      InFontInfo;                                              // 0x0000(0x0058)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.RichTextBlock.SetDefaultColorAndOpacity
	 */
	struct URichTextBlock_SetDefaultColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.RichTextBlock.SetAutoWrapText
	 */
	struct URichTextBlock_SetAutoWrapText_Params
	{
	public:
		bool                                                       InAutoTextWrap;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.RichTextBlock.GetText
	 */
	struct URichTextBlock_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.RichTextBlock.GetDecoratorByClass
	 */
	struct URichTextBlock_GetDecoratorByClass_Params
	{
	public:
		class UClass*                                              DecoratorClass;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URichTextBlockDecorator*                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
	 */
	struct URichTextBlock_ClearAllDefaultStyleOverrides_Params
	{
	};

	/**
	 * Function UMG.ScrollBoxSlot.SetVerticalAlignment
	 */
	struct UScrollBoxSlot_SetVerticalAlignment_Params
	{
	public:
		SlateCore_EVerticalAlignment                               InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.ScrollBoxSlot.SetPadding
	 */
	struct UScrollBoxSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.ScrollBoxSlot.SetHorizontalAlignment
	 */
	struct UScrollBoxSlot_SetHorizontalAlignment_Params
	{
	public:
		SlateCore_EHorizontalAlignment                             InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SizeBox.SetWidthOverride
	 */
	struct USizeBox_SetWidthOverride_Params
	{
	public:
		float                                                      InWidthOverride;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SizeBox.SetMinDesiredWidth
	 */
	struct USizeBox_SetMinDesiredWidth_Params
	{
	public:
		float                                                      InMinDesiredWidth;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SizeBox.SetMinDesiredHeight
	 */
	struct USizeBox_SetMinDesiredHeight_Params
	{
	public:
		float                                                      InMinDesiredHeight;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SizeBox.SetMinAspectRatio
	 */
	struct USizeBox_SetMinAspectRatio_Params
	{
	public:
		float                                                      InMinAspectRatio;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SizeBox.SetMaxDesiredWidth
	 */
	struct USizeBox_SetMaxDesiredWidth_Params
	{
	public:
		float                                                      InMaxDesiredWidth;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SizeBox.SetMaxDesiredHeight
	 */
	struct USizeBox_SetMaxDesiredHeight_Params
	{
	public:
		float                                                      InMaxDesiredHeight;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SizeBox.SetMaxAspectRatio
	 */
	struct USizeBox_SetMaxAspectRatio_Params
	{
	public:
		float                                                      InMaxAspectRatio;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SizeBox.SetHeightOverride
	 */
	struct USizeBox_SetHeightOverride_Params
	{
	public:
		float                                                      InHeightOverride;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SizeBox.ClearWidthOverride
	 */
	struct USizeBox_ClearWidthOverride_Params
	{
	};

	/**
	 * Function UMG.SizeBox.ClearMinDesiredWidth
	 */
	struct USizeBox_ClearMinDesiredWidth_Params
	{
	};

	/**
	 * Function UMG.SizeBox.ClearMinDesiredHeight
	 */
	struct USizeBox_ClearMinDesiredHeight_Params
	{
	};

	/**
	 * Function UMG.SizeBox.ClearMinAspectRatio
	 */
	struct USizeBox_ClearMinAspectRatio_Params
	{
	};

	/**
	 * Function UMG.SizeBox.ClearMaxDesiredWidth
	 */
	struct USizeBox_ClearMaxDesiredWidth_Params
	{
	};

	/**
	 * Function UMG.SizeBox.ClearMaxDesiredHeight
	 */
	struct USizeBox_ClearMaxDesiredHeight_Params
	{
	};

	/**
	 * Function UMG.SizeBox.ClearMaxAspectRatio
	 */
	struct USizeBox_ClearMaxAspectRatio_Params
	{
	};

	/**
	 * Function UMG.SizeBox.ClearHeightOverride
	 */
	struct USizeBox_ClearHeightOverride_Params
	{
	};

	/**
	 * Function UMG.SizeBoxSlot.SetVerticalAlignment
	 */
	struct USizeBoxSlot_SetVerticalAlignment_Params
	{
	public:
		SlateCore_EVerticalAlignment                               InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SizeBoxSlot.SetPadding
	 */
	struct USizeBoxSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SizeBoxSlot.SetHorizontalAlignment
	 */
	struct USizeBoxSlot_SetHorizontalAlignment_Params
	{
	public:
		SlateCore_EHorizontalAlignment                             InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
	 */
	struct USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           LocalVector;                                             // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
	 */
	struct USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           AbsoluteVector;                                          // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
	 */
	struct USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      LocalScalar;                                             // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
	 */
	struct USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      AbsoluteScalar;                                          // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
	 */
	struct USlateBlueprintLibrary_ScreenToWidgetLocal_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGeometry                                           Geometry;                                                // 0x0008(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           ScreenPosition;                                          // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           LocalCoordinate;                                         // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludeWindowPosition;                                  // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
	 */
	struct USlateBlueprintLibrary_ScreenToWidgetAbsolute_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ScreenPosition;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           AbsoluteCoordinate;                                      // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludeWindowPosition;                                  // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SlateBlueprintLibrary.ScreenToViewport
	 */
	struct USlateBlueprintLibrary_ScreenToViewport_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ScreenPosition;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ViewportPosition;                                        // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SlateBlueprintLibrary.LocalToViewport
	 */
	struct USlateBlueprintLibrary_LocalToViewport_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGeometry                                           Geometry;                                                // 0x0008(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           LocalCoordinate;                                         // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           PixelPosition;                                           // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ViewportPosition;                                        // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SlateBlueprintLibrary.LocalToAbsolute
	 */
	struct USlateBlueprintLibrary_LocalToAbsolute_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           LocalCoordinate;                                         // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SlateBlueprintLibrary.IsUnderLocation
	 */
	struct USlateBlueprintLibrary_IsUnderLocation_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           AbsoluteCoordinate;                                      // 0x0038(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
	 */
	struct USlateBlueprintLibrary_GetLocalTopLeft_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SlateBlueprintLibrary.GetLocalSize
	 */
	struct USlateBlueprintLibrary_GetLocalSize_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
	 */
	struct USlateBlueprintLibrary_GetAbsoluteSize_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
	 */
	struct USlateBlueprintLibrary_EqualEqual_SlateBrush_Params
	{
	public:
		struct FSlateBrush                                         A;                                                       // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FSlateBrush                                         B;                                                       // 0x0088(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0110(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
	 */
	struct USlateBlueprintLibrary_AbsoluteToViewport_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           AbsoluteDesktopCoordinate;                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           PixelPosition;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ViewportPosition;                                        // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
	 */
	struct USlateBlueprintLibrary_AbsoluteToLocal_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           AbsoluteCoordinate;                                      // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Slider.SetValue
	 */
	struct USlider_SetValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Slider.SetStepSize
	 */
	struct USlider_SetStepSize_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Slider.SetSliderHandleColor
	 */
	struct USlider_SetSliderHandleColor_Params
	{
	public:
		struct FLinearColor                                        InValue;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Slider.SetSliderBarColor
	 */
	struct USlider_SetSliderBarColor_Params
	{
	public:
		struct FLinearColor                                        InValue;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Slider.SetMinValue
	 */
	struct USlider_SetMinValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Slider.SetMaxValue
	 */
	struct USlider_SetMaxValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Slider.SetLocked
	 */
	struct USlider_SetLocked_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Slider.SetIndentHandle
	 */
	struct USlider_SetIndentHandle_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Slider.GetValue
	 */
	struct USlider_GetValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Slider.GetNormalizedValue
	 */
	struct USlider_GetNormalizedValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TextBinding.GetTextValue
	 */
	struct UTextBinding_GetTextValue_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TextBinding.GetStringValue
	 */
	struct UTextBinding_GetStringValue_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TextBlock.SetTextTransformPolicy
	 */
	struct UTextBlock_SetTextTransformPolicy_Params
	{
	public:
		Slate_ETextTransformPolicy                                 InTransformPolicy;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TextBlock.SetText
	 */
	struct UTextBlock_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TextBlock.SetStrikeBrush
	 */
	struct UTextBlock_SetStrikeBrush_Params
	{
	public:
		struct FSlateBrush                                         InStrikeBrush;                                           // 0x0000(0x0088)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TextBlock.SetShadowOffset
	 */
	struct UTextBlock_SetShadowOffset_Params
	{
	public:
		struct FVector2D                                           InShadowOffset;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TextBlock.SetShadowColorAndOpacity
	 */
	struct UTextBlock_SetShadowColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InShadowColorAndOpacity;                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TextBlock.SetOpacity
	 */
	struct UTextBlock_SetOpacity_Params
	{
	public:
		float                                                      InOpacity;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TextBlock.SetMinDesiredWidth
	 */
	struct UTextBlock_SetMinDesiredWidth_Params
	{
	public:
		float                                                      InMinDesiredWidth;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TextBlock.SetFont
	 */
	struct UTextBlock_SetFont_Params
	{
	public:
		struct FSlateFontInfo                                      InFontInfo;                                              // 0x0000(0x0058)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TextBlock.SetColorAndOpacity
	 */
	struct UTextBlock_SetColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TextBlock.SetAutoWrapText
	 */
	struct UTextBlock_SetAutoWrapText_Params
	{
	public:
		bool                                                       InAutoTextWrap;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TextBlock.GetText
	 */
	struct UTextBlock_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TextBlock.GetDynamicOutlineMaterial
	 */
	struct UTextBlock_GetDynamicOutlineMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TextBlock.GetDynamicFontMaterial
	 */
	struct UTextBlock_GetDynamicFontMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TileView.SetEntryWidth
	 */
	struct UTileView_SetEntryWidth_Params
	{
	public:
		float                                                      NewWidth;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TileView.SetEntryHeight
	 */
	struct UTileView_SetEntryHeight_Params
	{
	public:
		float                                                      NewHeight;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TileView.GetEntryWidth
	 */
	struct UTileView_GetEntryWidth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.TileView.GetEntryHeight
	 */
	struct UTileView_GetEntryHeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UniformGridSlot.SetVerticalAlignment
	 */
	struct UUniformGridSlot_SetVerticalAlignment_Params
	{
	public:
		SlateCore_EVerticalAlignment                               InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UniformGridSlot.SetRow
	 */
	struct UUniformGridSlot_SetRow_Params
	{
	public:
		int32_t                                                    InRow;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UniformGridSlot.SetHorizontalAlignment
	 */
	struct UUniformGridSlot_SetHorizontalAlignment_Params
	{
	public:
		SlateCore_EHorizontalAlignment                             InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.UniformGridSlot.SetColumn
	 */
	struct UUniformGridSlot_SetColumn_Params
	{
	public:
		int32_t                                                    InColumn;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Viewport.Spawn
	 */
	struct UViewport_Spawn_Params
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Viewport.SetViewRotation
	 */
	struct UViewport_SetViewRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Viewport.SetViewLocation
	 */
	struct UViewport_SetViewLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Viewport.GetViewRotation
	 */
	struct UViewport_GetViewRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Viewport.GetViewportWorld
	 */
	struct UViewport_GetViewportWorld_Params
	{
	public:
		class UWorld*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.Viewport.GetViewLocation
	 */
	struct UViewport_GetViewLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.VisibilityBinding.GetValue
	 */
	struct UVisibilityBinding_GetValue_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetAnimation.UnbindFromAnimationStarted
	 */
	struct UWidgetAnimation_UnbindFromAnimationStarted_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetAnimation.UnbindFromAnimationFinished
	 */
	struct UWidgetAnimation_UnbindFromAnimationFinished_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
	 */
	struct UWidgetAnimation_UnbindAllFromAnimationStarted_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
	 */
	struct UWidgetAnimation_UnbindAllFromAnimationFinished_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetAnimation.GetStartTime
	 */
	struct UWidgetAnimation_GetStartTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetAnimation.GetEndTime
	 */
	struct UWidgetAnimation_GetEndTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetAnimation.BindToAnimationStarted
	 */
	struct UWidgetAnimation_BindToAnimationStarted_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetAnimation.BindToAnimationFinished
	 */
	struct UWidgetAnimation_BindToAnimationFinished_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetBinding.GetValue
	 */
	struct UWidgetBinding_GetValue_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.SetWindowVisibility
	 */
	struct UWidgetComponent_SetWindowVisibility_Params
	{
	public:
		UMG_EWindowVisibility                                      InVisibility;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.SetWindowFocusable
	 */
	struct UWidgetComponent_SetWindowFocusable_Params
	{
	public:
		bool                                                       bInWindowFocusable;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.SetWidgetSpace
	 */
	struct UWidgetComponent_SetWidgetSpace_Params
	{
	public:
		UMG_EWidgetSpace                                           NewSpace;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.SetWidget
	 */
	struct UWidgetComponent_SetWidget_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.SetTwoSided
	 */
	struct UWidgetComponent_SetTwoSided_Params
	{
	public:
		bool                                                       bWantTwoSided;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.SetTintColorAndOpacity
	 */
	struct UWidgetComponent_SetTintColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        NewTintColorAndOpacity;                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.SetTickWhenOffscreen
	 */
	struct UWidgetComponent_SetTickWhenOffscreen_Params
	{
	public:
		bool                                                       bWantTickWhenOffscreen;                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.SetTickMode
	 */
	struct UWidgetComponent_SetTickMode_Params
	{
	public:
		UMG_ETickMode                                              InTickMode;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.SetRedrawTime
	 */
	struct UWidgetComponent_SetRedrawTime_Params
	{
	public:
		float                                                      InRedrawTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.SetPivot
	 */
	struct UWidgetComponent_SetPivot_Params
	{
	public:
		struct FVector2D                                           InPivot;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.SetOwnerPlayer
	 */
	struct UWidgetComponent_SetOwnerPlayer_Params
	{
	public:
		class ULocalPlayer*                                        LocalPlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.SetManuallyRedraw
	 */
	struct UWidgetComponent_SetManuallyRedraw_Params
	{
	public:
		bool                                                       bUseManualRedraw;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.SetGeometryMode
	 */
	struct UWidgetComponent_SetGeometryMode_Params
	{
	public:
		UMG_EWidgetGeometryMode                                    InGeometryMode;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.SetDrawSize
	 */
	struct UWidgetComponent_SetDrawSize_Params
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.SetDrawAtDesiredSize
	 */
	struct UWidgetComponent_SetDrawAtDesiredSize_Params
	{
	public:
		bool                                                       bInDrawAtDesiredSize;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.SetCylinderArcAngle
	 */
	struct UWidgetComponent_SetCylinderArcAngle_Params
	{
	public:
		float                                                      InCylinderArcAngle;                                      // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.SetBackgroundColor
	 */
	struct UWidgetComponent_SetBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        NewBackgroundColor;                                      // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.RequestRedraw
	 */
	struct UWidgetComponent_RequestRedraw_Params
	{
	};

	/**
	 * Function UMG.WidgetComponent.IsWidgetVisible
	 */
	struct UWidgetComponent_IsWidgetVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.GetWindowVisiblility
	 */
	struct UWidgetComponent_GetWindowVisiblility_Params
	{
	public:
		UMG_EWindowVisibility                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.GetWindowFocusable
	 */
	struct UWidgetComponent_GetWindowFocusable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.GetWidgetSpace
	 */
	struct UWidgetComponent_GetWidgetSpace_Params
	{
	public:
		UMG_EWidgetSpace                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.GetWidget
	 */
	struct UWidgetComponent_GetWidget_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.GetUserWidgetObject
	 */
	struct UWidgetComponent_GetUserWidgetObject_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.GetTwoSided
	 */
	struct UWidgetComponent_GetTwoSided_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.GetTickWhenOffscreen
	 */
	struct UWidgetComponent_GetTickWhenOffscreen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.GetRenderTarget
	 */
	struct UWidgetComponent_GetRenderTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.GetRedrawTime
	 */
	struct UWidgetComponent_GetRedrawTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.GetPivot
	 */
	struct UWidgetComponent_GetPivot_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.GetOwnerPlayer
	 */
	struct UWidgetComponent_GetOwnerPlayer_Params
	{
	public:
		class ULocalPlayer*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.GetMaterialInstance
	 */
	struct UWidgetComponent_GetMaterialInstance_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.GetManuallyRedraw
	 */
	struct UWidgetComponent_GetManuallyRedraw_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.GetGeometryMode
	 */
	struct UWidgetComponent_GetGeometryMode_Params
	{
	public:
		UMG_EWidgetGeometryMode                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.GetDrawSize
	 */
	struct UWidgetComponent_GetDrawSize_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.GetDrawAtDesiredSize
	 */
	struct UWidgetComponent_GetDrawAtDesiredSize_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.GetCylinderArcAngle
	 */
	struct UWidgetComponent_GetCylinderArcAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetComponent.GetCurrentDrawSize
	 */
	struct UWidgetComponent_GetCurrentDrawSize_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
	 */
	struct UWidgetSwitcherSlot_SetVerticalAlignment_Params
	{
	public:
		SlateCore_EVerticalAlignment                               InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetSwitcherSlot.SetPadding
	 */
	struct UWidgetSwitcherSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
	 */
	struct UWidgetSwitcherSlot_SetHorizontalAlignment_Params
	{
	public:
		SlateCore_EHorizontalAlignment                             InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
	 */
	struct UWindowTitleBarAreaSlot_SetVerticalAlignment_Params
	{
	public:
		SlateCore_EVerticalAlignment                               InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WindowTitleBarAreaSlot.SetPadding
	 */
	struct UWindowTitleBarAreaSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
	 */
	struct UWindowTitleBarAreaSlot_SetHorizontalAlignment_Params
	{
	public:
		SlateCore_EHorizontalAlignment                             InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WrapBoxSlot.SetVerticalAlignment
	 */
	struct UWrapBoxSlot_SetVerticalAlignment_Params
	{
	public:
		SlateCore_EVerticalAlignment                               InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WrapBoxSlot.SetPadding
	 */
	struct UWrapBoxSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WrapBoxSlot.SetHorizontalAlignment
	 */
	struct UWrapBoxSlot_SetHorizontalAlignment_Params
	{
	public:
		SlateCore_EHorizontalAlignment                             InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	 */
	struct UWrapBoxSlot_SetFillSpanWhenLessThan_Params
	{
	public:
		float                                                      InFillSpanWhenLessThan;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function UMG.WrapBoxSlot.SetFillEmptySpace
	 */
	struct UWrapBoxSlot_SetFillEmptySpace_Params
	{
	public:
		bool                                                       InbFillEmptySpace;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
