/**
 * Name: Hydroneer
 * Version: 2.0.2
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVisual.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisual::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Visual");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetVisibility(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetVisibility");
		
		struct
		{
			ESlateVisibility                                   InVisibility;
		} params;
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetUserFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetUserFocus(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetUserFocus");
		
		struct
		{
			class APlayerController*                           PlayerController;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetToolTipText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InToolTipText                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetToolTipText(const class FText& InToolTipText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTipText");
		
		struct
		{
			class FText                                        InToolTipText;
		} params;
		params.InToolTipText = InToolTipText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetToolTip(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTip");
		
		struct
		{
			class UWidget*                                     Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetRenderTranslation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Translation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetRenderTranslation(const struct FVector2D& Translation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTranslation");
		
		struct
		{
			struct FVector2D                                   Translation;
		} params;
		params.Translation = Translation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetRenderTransformPivot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Pivot                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetRenderTransformPivot(const struct FVector2D& Pivot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransformPivot");
		
		struct
		{
			struct FVector2D                                   Pivot;
		} params;
		params.Pivot = Pivot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetRenderTransformAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Angle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetRenderTransformAngle(float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransformAngle");
		
		struct
		{
			float                                              Angle;
		} params;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetRenderTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FWidgetTransform                            InTransform                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetRenderTransform(const struct FWidgetTransform& InTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransform");
		
		struct
		{
			struct FWidgetTransform                            InTransform;
		} params;
		params.InTransform = InTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetRenderShear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Shear                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetRenderShear(const struct FVector2D& Shear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderShear");
		
		struct
		{
			struct FVector2D                                   Shear;
		} params;
		params.Shear = Shear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetRenderScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetRenderScale(const struct FVector2D& Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderScale");
		
		struct
		{
			struct FVector2D                                   Scale;
		} params;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetRenderOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InOpacity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetRenderOpacity(float InOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderOpacity");
		
		struct
		{
			float                                              InOpacity;
		} params;
		params.InOpacity = InOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetNavigationRuleExplicit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     InWidget                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetNavigationRuleExplicit(EUINavigation Direction, class UWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleExplicit");
		
		struct
		{
			EUINavigation                                      Direction;
			class UWidget*                                     InWidget;
		} params;
		params.Direction = Direction;
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetNavigationRuleCustomBoundary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InCustomDelegate                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetNavigationRuleCustomBoundary(EUINavigation Direction, const class FScriptDelegate& InCustomDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleCustomBoundary");
		
		struct
		{
			EUINavigation                                      Direction;
			class FScriptDelegate                              InCustomDelegate;
		} params;
		params.Direction = Direction;
		params.InCustomDelegate = InCustomDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetNavigationRuleCustom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InCustomDelegate                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetNavigationRuleCustom(EUINavigation Direction, const class FScriptDelegate& InCustomDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleCustom");
		
		struct
		{
			EUINavigation                                      Direction;
			class FScriptDelegate                              InCustomDelegate;
		} params;
		params.Direction = Direction;
		params.InCustomDelegate = InCustomDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetNavigationRuleBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUINavigationRule                                  Rule                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleBase");
		
		struct
		{
			EUINavigation                                      Direction;
			EUINavigationRule                                  Rule;
		} params;
		params.Direction = Direction;
		params.Rule = Rule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetNavigationRule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUINavigationRule                                  Rule                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        WidgetToFocus                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, const class FName& WidgetToFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRule");
		
		struct
		{
			EUINavigation                                      Direction;
			EUINavigationRule                                  Rule;
			class FName                                        WidgetToFocus;
		} params;
		params.Direction = Direction;
		params.Rule = Rule;
		params.WidgetToFocus = WidgetToFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetKeyboardFocus
	 * 		Flags  -> ()
	 */
	void UWidget::SetKeyboardFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetKeyboardFocus");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetIsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetIsEnabled(bool bInIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetIsEnabled");
		
		struct
		{
			bool                                               bInIsEnabled;
		} params;
		params.bInIsEnabled = bInIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetFocus
	 * 		Flags  -> ()
	 */
	void UWidget::SetFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetFocus");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetCursor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMouseCursor                                       InCursor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetCursor(EMouseCursor InCursor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetCursor");
		
		struct
		{
			EMouseCursor                                       InCursor;
		} params;
		params.InCursor = InCursor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetClipping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWidgetClipping                                    InClipping                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetClipping(EWidgetClipping InClipping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetClipping");
		
		struct
		{
			EWidgetClipping                                    InClipping;
		} params;
		params.InClipping = InClipping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.SetAllNavigationRules
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigationRule                                  Rule                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        WidgetToFocus                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidget::SetAllNavigationRules(EUINavigationRule Rule, const class FName& WidgetToFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetAllNavigationRules");
		
		struct
		{
			EUINavigationRule                                  Rule;
			class FName                                        WidgetToFocus;
		} params;
		params.Rule = Rule;
		params.WidgetToFocus = WidgetToFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.ResetCursor
	 * 		Flags  -> ()
	 */
	void UWidget::ResetCursor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.ResetCursor");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.RemoveFromParent
	 * 		Flags  -> ()
	 */
	void UWidget::RemoveFromParent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.RemoveFromParent");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.OnReply__DelegateSignature
	 * 		Flags  -> ()
	 */
	struct FEventReply UWidget::OnReply__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnReply__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidget::OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               MouseEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.IsVisible
	 * 		Flags  -> ()
	 */
	bool UWidget::IsVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.IsVisible");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.IsHovered
	 * 		Flags  -> ()
	 */
	bool UWidget::IsHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.IsHovered");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.InvalidateLayoutAndVolatility
	 * 		Flags  -> ()
	 */
	void UWidget::InvalidateLayoutAndVolatility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.InvalidateLayoutAndVolatility");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.HasUserFocusedDescendants
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidget::HasUserFocusedDescendants(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocusedDescendants");
		
		struct
		{
			class APlayerController*                           PlayerController;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.HasUserFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidget::HasUserFocus(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocus");
		
		struct
		{
			class APlayerController*                           PlayerController;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.HasMouseCaptureByUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PointerIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidget::HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasMouseCaptureByUser");
		
		struct
		{
			int32_t                                            UserIndex;
			int32_t                                            PointerIndex;
		} params;
		params.UserIndex = UserIndex;
		params.PointerIndex = PointerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.HasMouseCapture
	 * 		Flags  -> ()
	 */
	bool UWidget::HasMouseCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasMouseCapture");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.HasKeyboardFocus
	 * 		Flags  -> ()
	 */
	bool UWidget::HasKeyboardFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasKeyboardFocus");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.HasFocusedDescendants
	 * 		Flags  -> ()
	 */
	bool UWidget::HasFocusedDescendants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasFocusedDescendants");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.HasAnyUserFocus
	 * 		Flags  -> ()
	 */
	bool UWidget::HasAnyUserFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasAnyUserFocus");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GetWidget__DelegateSignature
	 * 		Flags  -> ()
	 */
	class UWidget* UWidget::GetWidget__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetWidget__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWidget::GetVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetVisibility");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetTickSpaceGeometry
	 * 		Flags  -> ()
	 */
	struct FGeometry UWidget::GetTickSpaceGeometry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetTickSpaceGeometry");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GetText__DelegateSignature
	 * 		Flags  -> ()
	 */
	class FText UWidget::GetText__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetText__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWidget::GetSlateVisibility__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
	 * 		Flags  -> ()
	 */
	struct FSlateColor UWidget::GetSlateColor__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UWidget::GetSlateBrush__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetRenderTransformAngle
	 * 		Flags  -> ()
	 */
	float UWidget::GetRenderTransformAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetRenderTransformAngle");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetRenderOpacity
	 * 		Flags  -> ()
	 */
	float UWidget::GetRenderOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetRenderOpacity");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetParent
	 * 		Flags  -> ()
	 */
	class UPanelWidget* UWidget::GetParent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetParent");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetPaintSpaceGeometry
	 * 		Flags  -> ()
	 */
	struct FGeometry UWidget::GetPaintSpaceGeometry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetPaintSpaceGeometry");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetOwningPlayer
	 * 		Flags  -> ()
	 */
	class APlayerController* UWidget::GetOwningPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetOwningPlayer");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetOwningLocalPlayer
	 * 		Flags  -> ()
	 */
	class ULocalPlayer* UWidget::GetOwningLocalPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetOwningLocalPlayer");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
	 * 		Flags  -> ()
	 */
	EMouseCursor UWidget::GetMouseCursor__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
	 * 		Flags  -> ()
	 */
	struct FLinearColor UWidget::GetLinearColor__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetIsEnabled
	 * 		Flags  -> ()
	 */
	bool UWidget::GetIsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetIsEnabled");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GetInt32__DelegateSignature
	 * 		Flags  -> ()
	 */
	int32_t UWidget::GetInt32__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetInt32__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetGameInstance
	 * 		Flags  -> ()
	 */
	class UGameInstance* UWidget::GetGameInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetGameInstance");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GetFloat__DelegateSignature
	 * 		Flags  -> ()
	 */
	float UWidget::GetFloat__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetFloat__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetDesiredSize
	 * 		Flags  -> ()
	 */
	struct FVector2D UWidget::GetDesiredSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetDesiredSize");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetClipping
	 * 		Flags  -> ()
	 */
	EWidgetClipping UWidget::GetClipping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetClipping");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
	 * 		Flags  -> ()
	 */
	ECheckBoxState UWidget::GetCheckBoxState__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetCachedGeometry
	 * 		Flags  -> ()
	 */
	struct FGeometry UWidget::GetCachedGeometry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetCachedGeometry");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GetBool__DelegateSignature
	 * 		Flags  -> ()
	 */
	bool UWidget::GetBool__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetBool__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetAccessibleText
	 * 		Flags  -> ()
	 */
	class FText UWidget::GetAccessibleText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetAccessibleText");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.GetAccessibleSummaryText
	 * 		Flags  -> ()
	 */
	class FText UWidget::GetAccessibleSummaryText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetAccessibleSummaryText");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Item                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidget* UWidget::GenerateWidgetForString__DelegateSignature(const class FString& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature");
		
		struct
		{
			class FString                                      Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidget* UWidget::GenerateWidgetForObject__DelegateSignature(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature");
		
		struct
		{
			class UObject*                                     Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.ForceVolatile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidget::ForceVolatile(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.ForceVolatile");
		
		struct
		{
			bool                                               bForce;
		} params;
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Widget.ForceLayoutPrepass
	 * 		Flags  -> ()
	 */
	void UWidget::ForceLayoutPrepass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Widget.ForceLayoutPrepass");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Widget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.UnregisterInputComponent
	 * 		Flags  -> ()
	 */
	void UUserWidget::UnregisterInputComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnregisterInputComponent");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.UnbindFromAnimationStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::UnbindFromAnimationStarted(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindFromAnimationStarted");
		
		struct
		{
			class UWidgetAnimation*                            Animation;
			class FScriptDelegate                              Delegate;
		} params;
		params.Animation = Animation;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.UnbindFromAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::UnbindFromAnimationFinished(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindFromAnimationFinished");
		
		struct
		{
			class UWidgetAnimation*                            Animation;
			class FScriptDelegate                              Delegate;
		} params;
		params.Animation = Animation;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.UnbindAllFromAnimationStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindAllFromAnimationStarted");
		
		struct
		{
			class UWidgetAnimation*                            Animation;
		} params;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.UnbindAllFromAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindAllFromAnimationFinished");
		
		struct
		{
			class UWidgetAnimation*                            Animation;
		} params;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Tick");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			float                                              InDeltaTime;
		} params;
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.StopListeningForInputAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInputEvent                                        EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::StopListeningForInputAction(const class FName& ActionName, EInputEvent EventType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopListeningForInputAction");
		
		struct
		{
			class FName                                        ActionName;
			EInputEvent                                        EventType;
		} params;
		params.ActionName = ActionName;
		params.EventType = EventType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.StopListeningForAllInputActions
	 * 		Flags  -> ()
	 */
	void UUserWidget::StopListeningForAllInputActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopListeningForAllInputActions");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.StopAnimationsAndLatentActions
	 * 		Flags  -> ()
	 */
	void UUserWidget::StopAnimationsAndLatentActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAnimationsAndLatentActions");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.StopAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::StopAnimation(class UWidgetAnimation* InAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAnimation");
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
		} params;
		params.InAnimation = InAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.StopAllAnimations
	 * 		Flags  -> ()
	 */
	void UUserWidget::StopAllAnimations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAllAnimations");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetPositionInViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRemoveDPIScale                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPositionInViewport");
		
		struct
		{
			struct FVector2D                                   Position;
			bool                                               bRemoveDPIScale;
		} params;
		params.Position = Position;
		params.bRemoveDPIScale = bRemoveDPIScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetPlaybackSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPlaybackSpeed");
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
			float                                              PlaybackSpeed;
		} params;
		params.InAnimation = InAnimation;
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPadding");
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetOwningPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           LocalPlayerController                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::SetOwningPlayer(class APlayerController* LocalPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetOwningPlayer");
		
		struct
		{
			class APlayerController*                           LocalPlayerController;
		} params;
		params.LocalPlayerController = LocalPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetNumLoopsToPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumLoopsToPlay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetNumLoopsToPlay");
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
			int32_t                                            NumLoopsToPlay;
		} params;
		params.InAnimation = InAnimation;
		params.NumLoopsToPlay = NumLoopsToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetInputActionPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewPriority                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::SetInputActionPriority(int32_t NewPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetInputActionPriority");
		
		struct
		{
			int32_t                                            NewPriority;
		} params;
		params.NewPriority = NewPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetInputActionBlocking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldBlock                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::SetInputActionBlocking(bool bShouldBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetInputActionBlocking");
		
		struct
		{
			bool                                               bShouldBlock;
		} params;
		params.bShouldBlock = bShouldBlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetForegroundColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InForegroundColor                                          (Parm, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::SetForegroundColor(const struct FSlateColor& InForegroundColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetForegroundColor");
		
		struct
		{
			struct FSlateColor                                 InForegroundColor;
		} params;
		params.InForegroundColor = InForegroundColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetDesiredSizeInViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::SetDesiredSizeInViewport(const struct FVector2D& Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetDesiredSizeInViewport");
		
		struct
		{
			struct FVector2D                                   Size;
		} params;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColorAndOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetColorAndOpacity");
		
		struct
		{
			struct FLinearColor                                InColorAndOpacity;
		} params;
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetAnimationCurrentTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::SetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float InTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAnimationCurrentTime");
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
			float                                              InTime;
		} params;
		params.InAnimation = InAnimation;
		params.InTime = InTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetAnchorsInViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAnchors                                    Anchors                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::SetAnchorsInViewport(const struct FAnchors& Anchors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAnchorsInViewport");
		
		struct
		{
			struct FAnchors                                    Anchors;
		} params;
		params.Anchors = Anchors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.SetAlignmentInViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Alignment                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::SetAlignmentInViewport(const struct FVector2D& Alignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAlignmentInViewport");
		
		struct
		{
			struct FVector2D                                   Alignment;
		} params;
		params.Alignment = Alignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.ReverseAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::ReverseAnimation(class UWidgetAnimation* InAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.ReverseAnimation");
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
		} params;
		params.InAnimation = InAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.RemoveFromViewport
	 * 		Flags  -> ()
	 */
	void UUserWidget::RemoveFromViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.RemoveFromViewport");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.RegisterInputComponent
	 * 		Flags  -> ()
	 */
	void UUserWidget::RegisterInputComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.RegisterInputComponent");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PreConstruct");
		
		struct
		{
			bool                                               IsDesignTime;
		} params;
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.PlaySound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  SoundToPlay                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::PlaySound(class USoundBase* SoundToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlaySound");
		
		struct
		{
			class USoundBase*                                  SoundToPlay;
		} params;
		params.SoundToPlay = SoundToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.PlayAnimationTimeRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartAtTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndAtTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumLoopsToPlay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUMGSequencePlayMode                               PlayMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRestoreState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUMGSequencePlayer* UUserWidget::PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationTimeRange");
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
			float                                              StartAtTime;
			float                                              EndAtTime;
			int32_t                                            NumLoopsToPlay;
			EUMGSequencePlayMode                               PlayMode;
			float                                              PlaybackSpeed;
			bool                                               bRestoreState;
		} params;
		params.InAnimation = InAnimation;
		params.StartAtTime = StartAtTime;
		params.EndAtTime = EndAtTime;
		params.NumLoopsToPlay = NumLoopsToPlay;
		params.PlayMode = PlayMode;
		params.PlaybackSpeed = PlaybackSpeed;
		params.bRestoreState = bRestoreState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.PlayAnimationReverse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRestoreState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUMGSequencePlayer* UUserWidget::PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationReverse");
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
			float                                              PlaybackSpeed;
			bool                                               bRestoreState;
		} params;
		params.InAnimation = InAnimation;
		params.PlaybackSpeed = PlaybackSpeed;
		params.bRestoreState = bRestoreState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.PlayAnimationForward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRestoreState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUMGSequencePlayer* UUserWidget::PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationForward");
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
			float                                              PlaybackSpeed;
			bool                                               bRestoreState;
		} params;
		params.InAnimation = InAnimation;
		params.PlaybackSpeed = PlaybackSpeed;
		params.bRestoreState = bRestoreState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.PlayAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartAtTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumLoopsToPlay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUMGSequencePlayMode                               PlayMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRestoreState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUMGSequencePlayer* UUserWidget::PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimation");
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
			float                                              StartAtTime;
			int32_t                                            NumLoopsToPlay;
			EUMGSequencePlayMode                               PlayMode;
			float                                              PlaybackSpeed;
			bool                                               bRestoreState;
		} params;
		params.InAnimation = InAnimation;
		params.StartAtTime = StartAtTime;
		params.NumLoopsToPlay = NumLoopsToPlay;
		params.PlayMode = PlayMode;
		params.PlaybackSpeed = PlaybackSpeed;
		params.bRestoreState = bRestoreState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.PauseAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UUserWidget::PauseAnimation(class UWidgetAnimation* InAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PauseAnimation");
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
		} params;
		params.InAnimation = InAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnTouchStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               InTouchEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchStarted");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               InTouchEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.InTouchEvent = InTouchEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnTouchMoved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               InTouchEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchMoved");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               InTouchEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.InTouchEvent = InTouchEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnTouchGesture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               GestureEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchGesture");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               GestureEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.GestureEvent = GestureEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnTouchForceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               InTouchEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnTouchForceChanged(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchForceChanged");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               InTouchEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.InTouchEvent = InTouchEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnTouchEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               InTouchEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchEnded");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               InTouchEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.InTouchEvent = InTouchEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnRemovedFromFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnRemovedFromFocusPath");
		
		struct
		{
			struct FFocusEvent                                 InFocusEvent;
		} params;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnPreviewMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewMouseButtonDown");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               MouseEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewKeyDown");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FKeyEvent                                   InKeyEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnPaint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::OnPaint(struct FPaintContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPaint");
		
		struct
		{
			struct FPaintContext                               Context;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnMouseWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseWheel");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               MouseEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseMove");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               MouseEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseLeave");
		
		struct
		{
			struct FPointerEvent                               MouseEvent;
		} params;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseEnter");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               MouseEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnMouseCaptureLost
	 * 		Flags  -> ()
	 */
	void UUserWidget::OnMouseCaptureLost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseCaptureLost");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonUp");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               MouseEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDown");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               MouseEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnMouseButtonDoubleClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   InMyGeometry                                               (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               InMouseEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDoubleClick");
		
		struct
		{
			struct FGeometry                                   InMyGeometry;
			struct FPointerEvent                               InMouseEvent;
		} params;
		params.InMyGeometry = InMyGeometry;
		params.InMouseEvent = InMouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnMotionDetected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMotionEvent                                InMotionEvent                                              (Parm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMotionDetected");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FMotionEvent                                InMotionEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.InMotionEvent = InMotionEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyUp");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FKeyEvent                                   InKeyEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyDown");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FKeyEvent                                   InKeyEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnKeyChar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FCharacterEvent                             InCharacterEvent                                           (Parm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyChar");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FCharacterEvent                             InCharacterEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.InCharacterEvent = InCharacterEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnInitialized
	 * 		Flags  -> ()
	 */
	void UUserWidget::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnInitialized");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusReceived");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FFocusEvent                                 InFocusEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusLost");
		
		struct
		{
			struct FFocusEvent                                 InFocusEvent;
		} params;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               PointerEvent                                               (Parm, NativeAccessSpecifierPublic)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserWidget::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDrop");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               PointerEvent;
			class UDragDropOperation*                          Operation;
		} params;
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnDragOver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               PointerEvent                                               (Parm, NativeAccessSpecifierPublic)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserWidget::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragOver");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               PointerEvent;
			class UDragDropOperation*                          Operation;
		} params;
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnDragLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (Parm, NativeAccessSpecifierPublic)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragLeave");
		
		struct
		{
			struct FPointerEvent                               PointerEvent;
			class UDragDropOperation*                          Operation;
		} params;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnDragEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               PointerEvent                                               (Parm, NativeAccessSpecifierPublic)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragEnter");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               PointerEvent;
			class UDragDropOperation*                          Operation;
		} params;
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnDragDetected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragDetected");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               PointerEvent;
			class UDragDropOperation*                          Operation;
		} params;
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Operation != nullptr)
			*Operation = params.Operation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnDragCancelled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragCancelled");
		
		struct
		{
			struct FPointerEvent                               PointerEvent;
			class UDragDropOperation*                          Operation;
		} params;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnAnimationStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::OnAnimationStarted(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationStarted");
		
		struct
		{
			class UWidgetAnimation*                            Animation;
		} params;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationFinished");
		
		struct
		{
			class UWidgetAnimation*                            Animation;
		} params;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnAnalogValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (Parm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUserWidget::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnalogValueChanged");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FAnalogInputEvent                           InAnalogInputEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAddedToFocusPath");
		
		struct
		{
			struct FFocusEvent                                 InFocusEvent;
		} params;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.ListenForInputAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInputEvent                                        EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConsume                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::ListenForInputAction(const class FName& ActionName, EInputEvent EventType, bool bConsume, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.ListenForInputAction");
		
		struct
		{
			class FName                                        ActionName;
			EInputEvent                                        EventType;
			bool                                               bConsume;
			class FScriptDelegate                              Callback;
		} params;
		params.ActionName = ActionName;
		params.EventType = EventType;
		params.bConsume = bConsume;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.IsPlayingAnimation
	 * 		Flags  -> ()
	 */
	bool UUserWidget::IsPlayingAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsPlayingAnimation");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.IsListeningForInputAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserWidget::IsListeningForInputAction(const class FName& ActionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsListeningForInputAction");
		
		struct
		{
			class FName                                        ActionName;
		} params;
		params.ActionName = ActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.IsInViewport
	 * 		Flags  -> ()
	 */
	bool UUserWidget::IsInViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsInViewport");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.IsInteractable
	 * 		Flags  -> ()
	 */
	bool UUserWidget::IsInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsInteractable");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.IsAnyAnimationPlaying
	 * 		Flags  -> ()
	 */
	bool UUserWidget::IsAnyAnimationPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnyAnimationPlaying");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.IsAnimationPlayingForward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserWidget::IsAnimationPlayingForward(class UWidgetAnimation* InAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnimationPlayingForward");
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
		} params;
		params.InAnimation = InAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.IsAnimationPlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserWidget::IsAnimationPlaying(class UWidgetAnimation* InAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnimationPlaying");
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
		} params;
		params.InAnimation = InAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.GetOwningPlayerPawn
	 * 		Flags  -> ()
	 */
	class APawn* UUserWidget::GetOwningPlayerPawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetOwningPlayerPawn");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.GetOwningPlayerCameraManager
	 * 		Flags  -> ()
	 */
	class APlayerCameraManager* UUserWidget::GetOwningPlayerCameraManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetOwningPlayerCameraManager");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.GetIsVisible
	 * 		Flags  -> ()
	 */
	bool UUserWidget::GetIsVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetIsVisible");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.GetAnimationCurrentTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UUserWidget::GetAnimationCurrentTime(class UWidgetAnimation* InAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAnimationCurrentTime");
		
		struct
		{
			class UWidgetAnimation*                            InAnimation;
		} params;
		params.InAnimation = InAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.GetAnchorsInViewport
	 * 		Flags  -> ()
	 */
	struct FAnchors UUserWidget::GetAnchorsInViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAnchorsInViewport");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.GetAlignmentInViewport
	 * 		Flags  -> ()
	 */
	struct FVector2D UUserWidget::GetAlignmentInViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAlignmentInViewport");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.FlushAnimations
	 * 		Flags  -> ()
	 */
	void UUserWidget::FlushAnimations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.FlushAnimations");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.Destruct
	 * 		Flags  -> ()
	 */
	void UUserWidget::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Destruct");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.Construct
	 * 		Flags  -> ()
	 */
	void UUserWidget::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Construct");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.CancelLatentActions
	 * 		Flags  -> ()
	 */
	void UUserWidget::CancelLatentActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.CancelLatentActions");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.BindToAnimationStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::BindToAnimationStarted(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationStarted");
		
		struct
		{
			class UWidgetAnimation*                            Animation;
			class FScriptDelegate                              Delegate;
		} params;
		params.Animation = Animation;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.BindToAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::BindToAnimationFinished(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationFinished");
		
		struct
		{
			class UWidgetAnimation*                            Animation;
			class FScriptDelegate                              Delegate;
		} params;
		params.Animation = Animation;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.BindToAnimationEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EWidgetAnimationEvent                              AnimationEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        UserTag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::BindToAnimationEvent(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate, EWidgetAnimationEvent AnimationEvent, const class FName& UserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationEvent");
		
		struct
		{
			class UWidgetAnimation*                            Animation;
			class FScriptDelegate                              Delegate;
			EWidgetAnimationEvent                              AnimationEvent;
			class FName                                        UserTag;
		} params;
		params.Animation = Animation;
		params.Delegate = Delegate;
		params.AnimationEvent = AnimationEvent;
		params.UserTag = UserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.AddToViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ZOrder                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserWidget::AddToViewport(int32_t ZOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToViewport");
		
		struct
		{
			int32_t                                            ZOrder;
		} params;
		params.ZOrder = ZOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserWidget.AddToPlayerScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ZOrder                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserWidget::AddToPlayerScreen(int32_t ZOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToPlayerScreen");
		
		struct
		{
			int32_t                                            ZOrder;
		} params;
		params.ZOrder = ZOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUserWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUserWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.UserWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.AsyncTaskDownloadImage.DownloadImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::DownloadImage(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.AsyncTaskDownloadImage.DownloadImage");
		
		struct
		{
			class FString                                      URL;
		} params;
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAsyncTaskDownloadImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAsyncTaskDownloadImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.AsyncTaskDownloadImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.PanelWidget.RemoveChildAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPanelWidget::RemoveChildAt(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChildAt");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.PanelWidget.RemoveChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPanelWidget::RemoveChild(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChild");
		
		struct
		{
			class UWidget*                                     Content;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.PanelWidget.HasChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPanelWidget::HasChild(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasChild");
		
		struct
		{
			class UWidget*                                     Content;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.PanelWidget.HasAnyChildren
	 * 		Flags  -> ()
	 */
	bool UPanelWidget::HasAnyChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasAnyChildren");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.PanelWidget.GetChildrenCount
	 * 		Flags  -> ()
	 */
	int32_t UPanelWidget::GetChildrenCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildrenCount");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.PanelWidget.GetChildIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPanelWidget::GetChildIndex(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildIndex");
		
		struct
		{
			class UWidget*                                     Content;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.PanelWidget.GetChildAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidget* UPanelWidget::GetChildAt(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildAt");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.PanelWidget.GetAllChildren
	 * 		Flags  -> ()
	 */
	TArray<class UWidget*> UPanelWidget::GetAllChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetAllChildren");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.PanelWidget.ClearChildren
	 * 		Flags  -> ()
	 */
	void UPanelWidget::ClearChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.ClearChildren");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.PanelWidget.AddChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPanelSlot* UPanelWidget::AddChild(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.AddChild");
		
		struct
		{
			class UWidget*                                     Content;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPanelWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPanelWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.PanelWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ContentWidget.SetContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPanelSlot* UContentWidget::SetContent(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ContentWidget.SetContent");
		
		struct
		{
			class UWidget*                                     Content;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ContentWidget.GetContentSlot
	 * 		Flags  -> ()
	 */
	class UPanelSlot* UContentWidget::GetContentSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ContentWidget.GetContentSlot");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ContentWidget.GetContent
	 * 		Flags  -> ()
	 */
	class UWidget* UContentWidget::GetContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ContentWidget.GetContent");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UContentWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContentWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ContentWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlur.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBackgroundBlur::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetVerticalAlignment");
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlur.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBackgroundBlur::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetPadding");
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 InBrush                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UBackgroundBlur::SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetLowQualityFallbackBrush");
		
		struct
		{
			struct FSlateBrush                                 InBrush;
		} params;
		params.InBrush = InBrush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlur.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBackgroundBlur::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetHorizontalAlignment");
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlur.SetBlurStrength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InStrength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBackgroundBlur::SetBlurStrength(float InStrength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetBlurStrength");
		
		struct
		{
			float                                              InStrength;
		} params;
		params.InStrength = InStrength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlur.SetBlurRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InBlurRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBackgroundBlur::SetBlurRadius(int32_t InBlurRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetBlurRadius");
		
		struct
		{
			int32_t                                            InBlurRadius;
		} params;
		params.InBlurRadius = InBlurRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlur.SetApplyAlphaToBlur
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInApplyAlphaToBlur                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBackgroundBlur::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetApplyAlphaToBlur");
		
		struct
		{
			bool                                               bInApplyAlphaToBlur;
		} params;
		params.bInApplyAlphaToBlur = bInApplyAlphaToBlur;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBackgroundBlur.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBackgroundBlur::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.BackgroundBlur");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPanelSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPanelSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.PanelSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlurSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBackgroundBlurSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetVerticalAlignment");
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlurSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBackgroundBlurSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetPadding");
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBackgroundBlurSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetHorizontalAlignment");
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBackgroundBlurSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBackgroundBlurSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.BackgroundBlurSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.PropertyBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BoolBinding.GetValue
	 * 		Flags  -> ()
	 */
	bool UBoolBinding::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.BoolBinding.GetValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBoolBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoolBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.BoolBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBorder::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Border.SetVerticalAlignment");
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBorder::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Border.SetPadding");
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBorder::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Border.SetHorizontalAlignment");
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetDesiredSizeScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InScale                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBorder::SetDesiredSizeScale(const struct FVector2D& InScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Border.SetDesiredSizeScale");
		
		struct
		{
			struct FVector2D                                   InScale;
		} params;
		params.InScale = InScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetContentColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InContentColorAndOpacity                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBorder::SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Border.SetContentColorAndOpacity");
		
		struct
		{
			struct FLinearColor                                InContentColorAndOpacity;
		} params;
		params.InContentColorAndOpacity = InContentColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetBrushFromTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBorder::SetBrushFromTexture(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromTexture");
		
		struct
		{
			class UTexture2D*                                  Texture;
		} params;
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetBrushFromMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBorder::SetBrushFromMaterial(class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromMaterial");
		
		struct
		{
			class UMaterialInterface*                          Material;
		} params;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetBrushFromAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USlateBrushAsset*                            Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBorder::SetBrushFromAsset(class USlateBrushAsset* Asset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromAsset");
		
		struct
		{
			class USlateBrushAsset*                            Asset;
		} params;
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetBrushColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InBrushColor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBorder::SetBrushColor(const struct FLinearColor& InBrushColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushColor");
		
		struct
		{
			struct FLinearColor                                InBrushColor;
		} params;
		params.InBrushColor = InBrushColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.SetBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 InBrush                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UBorder::SetBrush(const struct FSlateBrush& InBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrush");
		
		struct
		{
			struct FSlateBrush                                 InBrush;
		} params;
		params.InBrush = InBrush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Border.GetDynamicMaterial
	 * 		Flags  -> ()
	 */
	class UMaterialInstanceDynamic* UBorder::GetDynamicMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Border.GetDynamicMaterial");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBorder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBorder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Border");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BorderSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBorderSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetVerticalAlignment");
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BorderSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBorderSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetPadding");
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BorderSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBorderSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetHorizontalAlignment");
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBorderSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBorderSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.BorderSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.BrushBinding.GetValue
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UBrushBinding::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.BrushBinding.GetValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBrushBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBrushBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.BrushBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Button.SetTouchMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EButtonTouchMethod                                 InTouchMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UButton::SetTouchMethod(EButtonTouchMethod InTouchMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Button.SetTouchMethod");
		
		struct
		{
			EButtonTouchMethod                                 InTouchMethod;
		} params;
		params.InTouchMethod = InTouchMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Button.SetStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FButtonStyle                                InStyle                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UButton::SetStyle(const struct FButtonStyle& InStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Button.SetStyle");
		
		struct
		{
			struct FButtonStyle                                InStyle;
		} params;
		params.InStyle = InStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Button.SetPressMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EButtonPressMethod                                 InPressMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UButton::SetPressMethod(EButtonPressMethod InPressMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Button.SetPressMethod");
		
		struct
		{
			EButtonPressMethod                                 InPressMethod;
		} params;
		params.InPressMethod = InPressMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Button.SetColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColorAndOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UButton::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Button.SetColorAndOpacity");
		
		struct
		{
			struct FLinearColor                                InColorAndOpacity;
		} params;
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Button.SetClickMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EButtonClickMethod                                 InClickMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UButton::SetClickMethod(EButtonClickMethod InClickMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Button.SetClickMethod");
		
		struct
		{
			EButtonClickMethod                                 InClickMethod;
		} params;
		params.InClickMethod = InClickMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Button.SetBackgroundColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InBackgroundColor                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UButton::SetBackgroundColor(const struct FLinearColor& InBackgroundColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Button.SetBackgroundColor");
		
		struct
		{
			struct FLinearColor                                InBackgroundColor;
		} params;
		params.InBackgroundColor = InBackgroundColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Button.IsPressed
	 * 		Flags  -> ()
	 */
	bool UButton::IsPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Button.IsPressed");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Button");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ButtonSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UButtonSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetVerticalAlignment");
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ButtonSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UButtonSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetPadding");
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ButtonSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UButtonSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetHorizontalAlignment");
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UButtonSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButtonSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ButtonSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanel.AddChildToCanvas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCanvasPanelSlot* UCanvasPanel::AddChildToCanvas(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanel.AddChildToCanvas");
		
		struct
		{
			class UWidget*                                     Content;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCanvasPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCanvasPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.CanvasPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetZOrder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InZOrder                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCanvasPanelSlot::SetZOrder(int32_t InZOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetZOrder");
		
		struct
		{
			int32_t                                            InZOrder;
		} params;
		params.InZOrder = InZOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InSize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCanvasPanelSlot::SetSize(const struct FVector2D& InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetSize");
		
		struct
		{
			struct FVector2D                                   InSize;
		} params;
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InPosition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCanvasPanelSlot::SetPosition(const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetPosition");
		
		struct
		{
			struct FVector2D                                   InPosition;
		} params;
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetOffsets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InOffset                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCanvasPanelSlot::SetOffsets(const struct FMargin& InOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetOffsets");
		
		struct
		{
			struct FMargin                                     InOffset;
		} params;
		params.InOffset = InOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetMinimum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InMinimumAnchors                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCanvasPanelSlot::SetMinimum(const struct FVector2D& InMinimumAnchors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMinimum");
		
		struct
		{
			struct FVector2D                                   InMinimumAnchors;
		} params;
		params.InMinimumAnchors = InMinimumAnchors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetMaximum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InMaximumAnchors                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCanvasPanelSlot::SetMaximum(const struct FVector2D& InMaximumAnchors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMaximum");
		
		struct
		{
			struct FVector2D                                   InMaximumAnchors;
		} params;
		params.InMaximumAnchors = InMaximumAnchors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetLayout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAnchorData                                 InLayoutData                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCanvasPanelSlot::SetLayout(const struct FAnchorData& InLayoutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetLayout");
		
		struct
		{
			struct FAnchorData                                 InLayoutData;
		} params;
		params.InLayoutData = InLayoutData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetAutoSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InbAutoSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCanvasPanelSlot::SetAutoSize(bool InbAutoSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAutoSize");
		
		struct
		{
			bool                                               InbAutoSize;
		} params;
		params.InbAutoSize = InbAutoSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetAnchors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAnchors                                    InAnchors                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCanvasPanelSlot::SetAnchors(const struct FAnchors& InAnchors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAnchors");
		
		struct
		{
			struct FAnchors                                    InAnchors;
		} params;
		params.InAnchors = InAnchors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.SetAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InAlignment                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCanvasPanelSlot::SetAlignment(const struct FVector2D& InAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAlignment");
		
		struct
		{
			struct FVector2D                                   InAlignment;
		} params;
		params.InAlignment = InAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.GetZOrder
	 * 		Flags  -> ()
	 */
	int32_t UCanvasPanelSlot::GetZOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetZOrder");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.GetSize
	 * 		Flags  -> ()
	 */
	struct FVector2D UCanvasPanelSlot::GetSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetSize");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.GetPosition
	 * 		Flags  -> ()
	 */
	struct FVector2D UCanvasPanelSlot::GetPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetPosition");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.GetOffsets
	 * 		Flags  -> ()
	 */
	struct FMargin UCanvasPanelSlot::GetOffsets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetOffsets");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.GetLayout
	 * 		Flags  -> ()
	 */
	struct FAnchorData UCanvasPanelSlot::GetLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetLayout");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.GetAutoSize
	 * 		Flags  -> ()
	 */
	bool UCanvasPanelSlot::GetAutoSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAutoSize");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.GetAnchors
	 * 		Flags  -> ()
	 */
	struct FAnchors UCanvasPanelSlot::GetAnchors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAnchors");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CanvasPanelSlot.GetAlignment
	 * 		Flags  -> ()
	 */
	struct FVector2D UCanvasPanelSlot::GetAlignment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAlignment");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCanvasPanelSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCanvasPanelSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.CanvasPanelSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CheckBox.SetTouchMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EButtonTouchMethod                                 InTouchMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCheckBox::SetTouchMethod(EButtonTouchMethod InTouchMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetTouchMethod");
		
		struct
		{
			EButtonTouchMethod                                 InTouchMethod;
		} params;
		params.InTouchMethod = InTouchMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CheckBox.SetPressMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EButtonPressMethod                                 InPressMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCheckBox::SetPressMethod(EButtonPressMethod InPressMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetPressMethod");
		
		struct
		{
			EButtonPressMethod                                 InPressMethod;
		} params;
		params.InPressMethod = InPressMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CheckBox.SetIsChecked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsChecked                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCheckBox::SetIsChecked(bool InIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetIsChecked");
		
		struct
		{
			bool                                               InIsChecked;
		} params;
		params.InIsChecked = InIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CheckBox.SetClickMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EButtonClickMethod                                 InClickMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCheckBox::SetClickMethod(EButtonClickMethod InClickMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetClickMethod");
		
		struct
		{
			EButtonClickMethod                                 InClickMethod;
		} params;
		params.InClickMethod = InClickMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CheckBox.SetCheckedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECheckBoxState                                     InCheckedState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCheckBox::SetCheckedState(ECheckBoxState InCheckedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetCheckedState");
		
		struct
		{
			ECheckBoxState                                     InCheckedState;
		} params;
		params.InCheckedState = InCheckedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CheckBox.IsPressed
	 * 		Flags  -> ()
	 */
	bool UCheckBox::IsPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.IsPressed");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CheckBox.IsChecked
	 * 		Flags  -> ()
	 */
	bool UCheckBox::IsChecked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.IsChecked");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CheckBox.GetCheckedState
	 * 		Flags  -> ()
	 */
	ECheckBoxState UCheckBox::GetCheckedState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.GetCheckedState");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCheckBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCheckBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.CheckBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CheckedStateBinding.GetValue
	 * 		Flags  -> ()
	 */
	ECheckBoxState UCheckedStateBinding::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CheckedStateBinding.GetValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCheckedStateBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCheckedStateBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.CheckedStateBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CircularThrobber.SetRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InRadius                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCircularThrobber::SetRadius(float InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetRadius");
		
		struct
		{
			float                                              InRadius;
		} params;
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CircularThrobber.SetPeriod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InPeriod                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCircularThrobber::SetPeriod(float InPeriod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetPeriod");
		
		struct
		{
			float                                              InPeriod;
		} params;
		params.InPeriod = InPeriod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.CircularThrobber.SetNumberOfPieces
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InNumberOfPieces                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCircularThrobber::SetNumberOfPieces(int32_t InNumberOfPieces)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetNumberOfPieces");
		
		struct
		{
			int32_t                                            InNumberOfPieces;
		} params;
		params.InNumberOfPieces = InNumberOfPieces;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCircularThrobber.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCircularThrobber::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.CircularThrobber");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ColorBinding.GetSlateValue
	 * 		Flags  -> ()
	 */
	struct FSlateColor UColorBinding::GetSlateValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ColorBinding.GetSlateValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ColorBinding.GetLinearValue
	 * 		Flags  -> ()
	 */
	struct FLinearColor UColorBinding::GetLinearValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ColorBinding.GetLinearValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UColorBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UColorBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ColorBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UComboBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComboBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ComboBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.SetSelectedOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Option                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComboBoxString::SetSelectedOption(const class FString& Option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.SetSelectedOption");
		
		struct
		{
			class FString                                      Option;
		} params;
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.SetSelectedIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComboBoxString::SetSelectedIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.SetSelectedIndex");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.RemoveOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Option                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UComboBoxString::RemoveOption(const class FString& Option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RemoveOption");
		
		struct
		{
			class FString                                      Option;
		} params;
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.RefreshOptions
	 * 		Flags  -> ()
	 */
	void UComboBoxString::RefreshOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RefreshOptions");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESelectInfo                                        SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature");
		
		struct
		{
			class FString                                      SelectedItem;
			ESelectInfo                                        SelectionType;
		} params;
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UComboBoxString::OnOpeningEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.IsOpen
	 * 		Flags  -> ()
	 */
	bool UComboBoxString::IsOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.IsOpen");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.GetSelectedOption
	 * 		Flags  -> ()
	 */
	class FString UComboBoxString::GetSelectedOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetSelectedOption");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.GetSelectedIndex
	 * 		Flags  -> ()
	 */
	int32_t UComboBoxString::GetSelectedIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetSelectedIndex");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.GetOptionCount
	 * 		Flags  -> ()
	 */
	int32_t UComboBoxString::GetOptionCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionCount");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.GetOptionAtIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UComboBoxString::GetOptionAtIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionAtIndex");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.FindOptionIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Option                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UComboBoxString::FindOptionIndex(const class FString& Option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.FindOptionIndex");
		
		struct
		{
			class FString                                      Option;
		} params;
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.ClearSelection
	 * 		Flags  -> ()
	 */
	void UComboBoxString::ClearSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearSelection");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.ClearOptions
	 * 		Flags  -> ()
	 */
	void UComboBoxString::ClearOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearOptions");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ComboBoxString.AddOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Option                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComboBoxString::AddOption(const class FString& Option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.AddOption");
		
		struct
		{
			class FString                                      Option;
		} params;
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UComboBoxString.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComboBoxString::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ComboBoxString");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DragDropOperation.Drop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDragDropOperation::Drop(const struct FPointerEvent& PointerEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Drop");
		
		struct
		{
			struct FPointerEvent                               PointerEvent;
		} params;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DragDropOperation.Dragged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDragDropOperation::Dragged(const struct FPointerEvent& PointerEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Dragged");
		
		struct
		{
			struct FPointerEvent                               PointerEvent;
		} params;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DragDropOperation.DragCancelled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDragDropOperation::DragCancelled(const struct FPointerEvent& PointerEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.DragCancelled");
		
		struct
		{
			struct FPointerEvent                               PointerEvent;
		} params;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDragDropOperation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDragDropOperation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.DragDropOperation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DynamicEntryBoxBase.SetRadialSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRadialBoxSettings                          InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamicEntryBoxBase::SetRadialSettings(const struct FRadialBoxSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.SetRadialSettings");
		
		struct
		{
			struct FRadialBoxSettings                          InSettings;
		} params;
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DynamicEntryBoxBase.SetEntrySpacing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InEntrySpacing                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDynamicEntryBoxBase::SetEntrySpacing(const struct FVector2D& InEntrySpacing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.SetEntrySpacing");
		
		struct
		{
			struct FVector2D                                   InEntrySpacing;
		} params;
		params.InEntrySpacing = InEntrySpacing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DynamicEntryBoxBase.GetNumEntries
	 * 		Flags  -> ()
	 */
	int32_t UDynamicEntryBoxBase::GetNumEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.GetNumEntries");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DynamicEntryBoxBase.GetAllEntries
	 * 		Flags  -> ()
	 */
	TArray<class UUserWidget*> UDynamicEntryBoxBase::GetAllEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.GetAllEntries");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDynamicEntryBoxBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicEntryBoxBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.DynamicEntryBoxBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DynamicEntryBox.Reset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDeleteWidgets                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDynamicEntryBox::Reset(bool bDeleteWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.Reset");
		
		struct
		{
			bool                                               bDeleteWidgets;
		} params;
		params.bDeleteWidgets = bDeleteWidgets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DynamicEntryBox.RemoveEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 EntryWidget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDynamicEntryBox::RemoveEntry(class UUserWidget* EntryWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.RemoveEntry");
		
		struct
		{
			class UUserWidget*                                 EntryWidget;
		} params;
		params.EntryWidget = EntryWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      EntryClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* UDynamicEntryBox::BP_CreateEntryOfClass(class UClass* EntryClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.BP_CreateEntryOfClass");
		
		struct
		{
			class UClass*                                      EntryClass;
		} params;
		params.EntryClass = EntryClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.DynamicEntryBox.BP_CreateEntry
	 * 		Flags  -> ()
	 */
	class UUserWidget* UDynamicEntryBox::BP_CreateEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.BP_CreateEntry");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDynamicEntryBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicEntryBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.DynamicEntryBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableText.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UEditableText::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetText");
		
		struct
		{
			class FText                                        InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableText.SetJustification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETextJustify                                       InJustification                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableText::SetJustification(ETextJustify InJustification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetJustification");
		
		struct
		{
			ETextJustify                                       InJustification;
		} params;
		params.InJustification = InJustification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableText.SetIsReadOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InbIsReadyOnly                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableText::SetIsReadOnly(bool InbIsReadyOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsReadOnly");
		
		struct
		{
			bool                                               InbIsReadyOnly;
		} params;
		params.InbIsReadyOnly = InbIsReadyOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableText.SetIsPassword
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InbIsPassword                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableText::SetIsPassword(bool InbIsPassword)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsPassword");
		
		struct
		{
			bool                                               InbIsPassword;
		} params;
		params.InbIsPassword = InbIsPassword;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableText.SetHintText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InHintText                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void UEditableText::SetHintText(const class FText& InHintText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetHintText");
		
		struct
		{
			class FText                                        InHintText;
		} params;
		params.InHintText = InHintText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableText::OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature");
		
		struct
		{
			class FText                                        Text;
			ETextCommit                                        CommitMethod;
		} params;
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableText::OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature");
		
		struct
		{
			class FText                                        Text;
		} params;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableText.GetText
	 * 		Flags  -> ()
	 */
	class FText UEditableText::GetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.EditableText.GetText");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditableText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.EditableText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableTextBox.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UEditableTextBox::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetText");
		
		struct
		{
			class FText                                        InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableTextBox.SetJustification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETextJustify                                       InJustification                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableTextBox::SetJustification(ETextJustify InJustification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetJustification");
		
		struct
		{
			ETextJustify                                       InJustification;
		} params;
		params.InJustification = InJustification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableTextBox.SetIsReadOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReadOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableTextBox::SetIsReadOnly(bool bReadOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetIsReadOnly");
		
		struct
		{
			bool                                               bReadOnly;
		} params;
		params.bReadOnly = bReadOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableTextBox.SetIsPassword
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsPassword                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableTextBox::SetIsPassword(bool bIsPassword)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetIsPassword");
		
		struct
		{
			bool                                               bIsPassword;
		} params;
		params.bIsPassword = bIsPassword;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableTextBox.SetHintText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UEditableTextBox::SetHintText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetHintText");
		
		struct
		{
			class FText                                        InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableTextBox.SetError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InError                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void UEditableTextBox::SetError(const class FText& InError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetError");
		
		struct
		{
			class FText                                        InError;
		} params;
		params.InError = InError;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		struct
		{
			class FText                                        Text;
			ETextCommit                                        CommitMethod;
		} params;
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature");
		
		struct
		{
			class FText                                        Text;
		} params;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableTextBox.HasError
	 * 		Flags  -> ()
	 */
	bool UEditableTextBox::HasError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.HasError");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableTextBox.GetText
	 * 		Flags  -> ()
	 */
	class FText UEditableTextBox::GetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.GetText");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.EditableTextBox.ClearError
	 * 		Flags  -> ()
	 */
	void UEditableTextBox::ClearError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.ClearError");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditableTextBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableTextBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.EditableTextBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ExpandableArea.SetIsExpanded_Animated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsExpanded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UExpandableArea::SetIsExpanded_Animated(bool IsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.SetIsExpanded_Animated");
		
		struct
		{
			bool                                               IsExpanded;
		} params;
		params.IsExpanded = IsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ExpandableArea.SetIsExpanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsExpanded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UExpandableArea::SetIsExpanded(bool IsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.SetIsExpanded");
		
		struct
		{
			bool                                               IsExpanded;
		} params;
		params.IsExpanded = IsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ExpandableArea.GetIsExpanded
	 * 		Flags  -> ()
	 */
	bool UExpandableArea::GetIsExpanded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.GetIsExpanded");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UExpandableArea.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExpandableArea::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ExpandableArea");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.FloatBinding.GetValue
	 * 		Flags  -> ()
	 */
	float UFloatBinding::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.FloatBinding.GetValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFloatBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFloatBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.FloatBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridPanel.SetRowFill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ColumnIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Coefficient                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGridPanel::SetRowFill(int32_t ColumnIndex, float Coefficient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.SetRowFill");
		
		struct
		{
			int32_t                                            ColumnIndex;
			float                                              Coefficient;
		} params;
		params.ColumnIndex = ColumnIndex;
		params.Coefficient = Coefficient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridPanel.SetColumnFill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ColumnIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Coefficient                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGridPanel::SetColumnFill(int32_t ColumnIndex, float Coefficient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.SetColumnFill");
		
		struct
		{
			int32_t                                            ColumnIndex;
			float                                              Coefficient;
		} params;
		params.ColumnIndex = ColumnIndex;
		params.Coefficient = Coefficient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridPanel.AddChildToGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InRow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InColumn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGridSlot* UGridPanel::AddChildToGrid(class UWidget* Content, int32_t InRow, int32_t InColumn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.AddChildToGrid");
		
		struct
		{
			class UWidget*                                     Content;
			int32_t                                            InRow;
			int32_t                                            InColumn;
		} params;
		params.Content = Content;
		params.InRow = InRow;
		params.InColumn = InColumn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGridPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGridPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.GridPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGridSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetVerticalAlignment");
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridSlot.SetRowSpan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRowSpan                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGridSlot::SetRowSpan(int32_t InRowSpan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRowSpan");
		
		struct
		{
			int32_t                                            InRowSpan;
		} params;
		params.InRowSpan = InRowSpan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridSlot.SetRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGridSlot::SetRow(int32_t InRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRow");
		
		struct
		{
			int32_t                                            InRow;
		} params;
		params.InRow = InRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGridSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetPadding");
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridSlot.SetNudge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InNudge                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGridSlot::SetNudge(const struct FVector2D& InNudge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetNudge");
		
		struct
		{
			struct FVector2D                                   InNudge;
		} params;
		params.InNudge = InNudge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridSlot.SetLayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGridSlot::SetLayer(int32_t InLayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetLayer");
		
		struct
		{
			int32_t                                            InLayer;
		} params;
		params.InLayer = InLayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGridSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetHorizontalAlignment");
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridSlot.SetColumnSpan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InColumnSpan                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGridSlot::SetColumnSpan(int32_t InColumnSpan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumnSpan");
		
		struct
		{
			int32_t                                            InColumnSpan;
		} params;
		params.InColumnSpan = InColumnSpan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.GridSlot.SetColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InColumn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGridSlot::SetColumn(int32_t InColumn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumn");
		
		struct
		{
			int32_t                                            InColumn;
		} params;
		params.InColumn = InColumn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGridSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGridSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.GridSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.HorizontalBox.AddChildToHorizontalBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBox.AddChildToHorizontalBox");
		
		struct
		{
			class UWidget*                                     Content;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHorizontalBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHorizontalBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.HorizontalBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.HorizontalBoxSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHorizontalBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetVerticalAlignment");
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.HorizontalBoxSlot.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateChildSize                             InSize                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHorizontalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetSize");
		
		struct
		{
			struct FSlateChildSize                             InSize;
		} params;
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.HorizontalBoxSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHorizontalBoxSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetPadding");
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHorizontalBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetHorizontalAlignment");
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHorizontalBoxSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHorizontalBoxSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.HorizontalBoxSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InOpacity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UImage::SetOpacity(float InOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Image.SetOpacity");
		
		struct
		{
			float                                              InOpacity;
		} params;
		params.InOpacity = InOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColorAndOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UImage::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Image.SetColorAndOpacity");
		
		struct
		{
			struct FLinearColor                                InColorAndOpacity;
		} params;
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushTintColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 TintColor                                                  (Parm, NativeAccessSpecifierPublic)
	 */
	void UImage::SetBrushTintColor(const struct FSlateColor& TintColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushTintColor");
		
		struct
		{
			struct FSlateColor                                 TintColor;
		} params;
		params.TintColor = TintColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   DesiredSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UImage::SetBrushSize(const struct FVector2D& DesiredSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushSize");
		
		struct
		{
			struct FVector2D                                   DesiredSize;
		} params;
		params.DesiredSize = DesiredSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushResourceObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ResourceObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UImage::SetBrushResourceObject(class UObject* ResourceObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushResourceObject");
		
		struct
		{
			class UObject*                                     ResourceObject;
		} params;
		params.ResourceObject = ResourceObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushFromTextureDynamic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UImage::SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromTextureDynamic");
		
		struct
		{
			class UTexture2DDynamic*                           Texture;
			bool                                               bMatchSize;
		} params;
		params.Texture = Texture;
		params.bMatchSize = bMatchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushFromTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UImage::SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromTexture");
		
		struct
		{
			class UTexture2D*                                  Texture;
			bool                                               bMatchSize;
		} params;
		params.Texture = Texture;
		params.bMatchSize = bMatchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushFromSoftTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UImage::SetBrushFromSoftTexture(bool bMatchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromSoftTexture");
		
		struct
		{
			bool                                               bMatchSize;
		} params;
		params.bMatchSize = bMatchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushFromSoftMaterial
	 * 		Flags  -> ()
	 */
	void UImage::SetBrushFromSoftMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromSoftMaterial");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushFromMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UImage::SetBrushFromMaterial(class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromMaterial");
		
		struct
		{
			class UMaterialInterface*                          Material;
		} params;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushFromAtlasInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UImage::SetBrushFromAtlasInterface(bool bMatchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromAtlasInterface");
		
		struct
		{
			bool                                               bMatchSize;
		} params;
		params.bMatchSize = bMatchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrushFromAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USlateBrushAsset*                            Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UImage::SetBrushFromAsset(class USlateBrushAsset* Asset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromAsset");
		
		struct
		{
			class USlateBrushAsset*                            Asset;
		} params;
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.SetBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 InBrush                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UImage::SetBrush(const struct FSlateBrush& InBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrush");
		
		struct
		{
			struct FSlateBrush                                 InBrush;
		} params;
		params.InBrush = InBrush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Image.GetDynamicMaterial
	 * 		Flags  -> ()
	 */
	class UMaterialInstanceDynamic* UImage::GetDynamicMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Image.GetDynamicMaterial");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Image");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InputKeySelector.SetTextBlockVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputKeySelector::SetTextBlockVisibility(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetTextBlockVisibility");
		
		struct
		{
			ESlateVisibility                                   InVisibility;
		} params;
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InputKeySelector.SetSelectedKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InSelectedKey                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputKeySelector::SetSelectedKey(const struct FInputChord& InSelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetSelectedKey");
		
		struct
		{
			struct FInputChord                                 InSelectedKey;
		} params;
		params.InSelectedKey = InSelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InputKeySelector.SetNoKeySpecifiedText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InNoKeySpecifiedText                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void UInputKeySelector::SetNoKeySpecifiedText(const class FText& InNoKeySpecifiedText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetNoKeySpecifiedText");
		
		struct
		{
			class FText                                        InNoKeySpecifiedText;
		} params;
		params.InNoKeySpecifiedText = InNoKeySpecifiedText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InputKeySelector.SetKeySelectionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InKeySelectionText                                         (Parm, NativeAccessSpecifierPublic)
	 */
	void UInputKeySelector::SetKeySelectionText(const class FText& InKeySelectionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetKeySelectionText");
		
		struct
		{
			class FText                                        InKeySelectionText;
		} params;
		params.InKeySelectionText = InKeySelectionText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InputKeySelector.SetEscapeKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FKey>                                InKeys                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInputKeySelector::SetEscapeKeys(TArray<struct FKey> InKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetEscapeKeys");
		
		struct
		{
			TArray<struct FKey>                                InKeys;
		} params;
		params.InKeys = InKeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InputKeySelector.SetAllowModifierKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAllowModifierKeys                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetAllowModifierKeys");
		
		struct
		{
			bool                                               bInAllowModifierKeys;
		} params;
		params.bInAllowModifierKeys = bInAllowModifierKeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InputKeySelector.SetAllowGamepadKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAllowGamepadKeys                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputKeySelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetAllowGamepadKeys");
		
		struct
		{
			bool                                               bInAllowGamepadKeys;
		} params;
		params.bInAllowGamepadKeys = bInAllowGamepadKeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputKeySelector::OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature");
		
		struct
		{
			struct FInputChord                                 SelectedKey;
		} params;
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInputKeySelector::OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InputKeySelector.GetIsSelectingKey
	 * 		Flags  -> ()
	 */
	bool UInputKeySelector::GetIsSelectingKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.GetIsSelectingKey");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInputKeySelector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputKeySelector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.InputKeySelector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Int32Binding.GetValue
	 * 		Flags  -> ()
	 */
	int32_t UInt32Binding::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Int32Binding.GetValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInt32Binding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInt32Binding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Int32Binding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InvalidationBox.SetCanCache
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanCache                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInvalidationBox::SetCanCache(bool CanCache)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.SetCanCache");
		
		struct
		{
			bool                                               CanCache;
		} params;
		params.CanCache = CanCache;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InvalidationBox.InvalidateCache
	 * 		Flags  -> ()
	 */
	void UInvalidationBox::InvalidateCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.InvalidateCache");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.InvalidationBox.GetCanCache
	 * 		Flags  -> ()
	 */
	bool UInvalidationBox::GetCanCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.GetCanCache");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInvalidationBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInvalidationBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.InvalidationBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserListEntry.BP_OnItemSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserListEntry::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserListEntry.BP_OnItemSelectionChanged");
		
		struct
		{
			bool                                               bIsSelected;
		} params;
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserListEntry.BP_OnItemExpansionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserListEntry::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserListEntry.BP_OnItemExpansionChanged");
		
		struct
		{
			bool                                               bIsExpanded;
		} params;
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserListEntry.BP_OnEntryReleased
	 * 		Flags  -> ()
	 */
	void UUserListEntry::BP_OnEntryReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserListEntry.BP_OnEntryReleased");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUserListEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUserListEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.UserListEntry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserListEntryLibrary.IsListItemSelected
	 * 		Flags  -> ()
	 */
	bool UUserListEntryLibrary::IsListItemSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserListEntryLibrary.IsListItemSelected");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserListEntryLibrary.IsListItemExpanded
	 * 		Flags  -> ()
	 */
	bool UUserListEntryLibrary::IsListItemExpanded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserListEntryLibrary.IsListItemExpanded");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserListEntryLibrary.GetOwningListView
	 * 		Flags  -> ()
	 */
	class UListViewBase* UUserListEntryLibrary::GetOwningListView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserListEntryLibrary.GetOwningListView");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUserListEntryLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUserListEntryLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.UserListEntryLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserObjectListEntry.OnListItemObjectSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserObjectListEntry::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserObjectListEntry.OnListItemObjectSet");
		
		struct
		{
			class UObject*                                     ListItemObject;
		} params;
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUserObjectListEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUserObjectListEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.UserObjectListEntry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UserObjectListEntryLibrary.GetListItemObject
	 * 		Flags  -> ()
	 */
	class UObject* UUserObjectListEntryLibrary::GetListItemObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UserObjectListEntryLibrary.GetListItemObject");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUserObjectListEntryLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUserObjectListEntryLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.UserObjectListEntryLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListViewBase.SetWheelScrollMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewWheelScrollMultiplier                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetWheelScrollMultiplier");
		
		struct
		{
			float                                              NewWheelScrollMultiplier;
		} params;
		params.NewWheelScrollMultiplier = NewWheelScrollMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListViewBase.SetScrollOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InScrollOffset                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UListViewBase::SetScrollOffset(float InScrollOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetScrollOffset");
		
		struct
		{
			float                                              InScrollOffset;
		} params;
		params.InScrollOffset = InScrollOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListViewBase.SetScrollbarVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UListViewBase::SetScrollbarVisibility(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetScrollbarVisibility");
		
		struct
		{
			ESlateVisibility                                   InVisibility;
		} params;
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListViewBase.ScrollToTop
	 * 		Flags  -> ()
	 */
	void UListViewBase::ScrollToTop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.ScrollToTop");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListViewBase.ScrollToBottom
	 * 		Flags  -> ()
	 */
	void UListViewBase::ScrollToBottom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.ScrollToBottom");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListViewBase.RequestRefresh
	 * 		Flags  -> ()
	 */
	void UListViewBase::RequestRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.RequestRefresh");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListViewBase.RegenerateAllEntries
	 * 		Flags  -> ()
	 */
	void UListViewBase::RegenerateAllEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.RegenerateAllEntries");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListViewBase.GetDisplayedEntryWidgets
	 * 		Flags  -> ()
	 */
	TArray<class UUserWidget*> UListViewBase::GetDisplayedEntryWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.GetDisplayedEntryWidgets");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UListViewBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UListViewBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ListViewBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.SetSelectionMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESelectionMode                                     SelectionMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UListView::SetSelectionMode(ESelectionMode SelectionMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.SetSelectionMode");
		
		struct
		{
			ESelectionMode                                     SelectionMode;
		} params;
		params.SelectionMode = SelectionMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.SetSelectedIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UListView::SetSelectedIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.SetSelectedIndex");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.ScrollIndexIntoView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UListView::ScrollIndexIntoView(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.ScrollIndexIntoView");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.RemoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UListView::RemoveItem(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.RemoveItem");
		
		struct
		{
			class UObject*                                     Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.NavigateToIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UListView::NavigateToIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.NavigateToIndex");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.IsRefreshPending
	 * 		Flags  -> ()
	 */
	bool UListView::IsRefreshPending()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.IsRefreshPending");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.GetNumItems
	 * 		Flags  -> ()
	 */
	int32_t UListView::GetNumItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetNumItems");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.GetListItems
	 * 		Flags  -> ()
	 */
	TArray<class UObject*> UListView::GetListItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetListItems");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.GetItemAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UListView::GetItemAt(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetItemAt");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.GetIndexForItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UListView::GetIndexForItem(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetIndexForItem");
		
		struct
		{
			class UObject*                                     Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.ClearListItems
	 * 		Flags  -> ()
	 */
	void UListView::ClearListItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.ClearListItems");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_SetSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UListView::BP_SetSelectedItem(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetSelectedItem");
		
		struct
		{
			class UObject*                                     Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_SetListItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             InListItems                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UListView::BP_SetListItems(TArray<class UObject*> InListItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetListItems");
		
		struct
		{
			TArray<class UObject*>                             InListItems;
		} params;
		params.InListItems = InListItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_SetItemSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelected                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UListView::BP_SetItemSelection(class UObject* Item, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetItemSelection");
		
		struct
		{
			class UObject*                                     Item;
			bool                                               bSelected;
		} params;
		params.Item = Item;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_ScrollItemIntoView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UListView::BP_ScrollItemIntoView(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_ScrollItemIntoView");
		
		struct
		{
			class UObject*                                     Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_NavigateToItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UListView::BP_NavigateToItem(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_NavigateToItem");
		
		struct
		{
			class UObject*                                     Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_IsItemVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UListView::BP_IsItemVisible(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_IsItemVisible");
		
		struct
		{
			class UObject*                                     Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_GetSelectedItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             Items                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UListView::BP_GetSelectedItems(TArray<class UObject*>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetSelectedItems");
		
		struct
		{
			TArray<class UObject*>                             Items;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_GetSelectedItem
	 * 		Flags  -> ()
	 */
	class UObject* UListView::BP_GetSelectedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetSelectedItem");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_GetNumItemsSelected
	 * 		Flags  -> ()
	 */
	int32_t UListView::BP_GetNumItemsSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetNumItemsSelected");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_ClearSelection
	 * 		Flags  -> ()
	 */
	void UListView::BP_ClearSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_ClearSelection");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.BP_CancelScrollIntoView
	 * 		Flags  -> ()
	 */
	void UListView::BP_CancelScrollIntoView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_CancelScrollIntoView");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ListView.AddItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UListView::AddItem(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ListView.AddItem");
		
		struct
		{
			class UObject*                                     Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UListView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UListView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ListView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UListViewDesignerPreviewItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UListViewDesignerPreviewItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ListViewDesignerPreviewItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MenuAnchor.ToggleOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFocusOnOpen                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuAnchor::ToggleOpen(bool bFocusOnOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ToggleOpen");
		
		struct
		{
			bool                                               bFocusOnOpen;
		} params;
		params.bFocusOnOpen = bFocusOnOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MenuAnchor.ShouldOpenDueToClick
	 * 		Flags  -> ()
	 */
	bool UMenuAnchor::ShouldOpenDueToClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ShouldOpenDueToClick");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MenuAnchor.SetPlacement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMenuPlacement                                     InPlacement                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuAnchor::SetPlacement(EMenuPlacement InPlacement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.SetPlacement");
		
		struct
		{
			EMenuPlacement                                     InPlacement;
		} params;
		params.InPlacement = InPlacement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MenuAnchor.Open
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFocusMenu                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuAnchor::Open(bool bFocusMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Open");
		
		struct
		{
			bool                                               bFocusMenu;
		} params;
		params.bFocusMenu = bFocusMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MenuAnchor.IsOpen
	 * 		Flags  -> ()
	 */
	bool UMenuAnchor::IsOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.IsOpen");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MenuAnchor.HasOpenSubMenus
	 * 		Flags  -> ()
	 */
	bool UMenuAnchor::HasOpenSubMenus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.HasOpenSubMenus");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature
	 * 		Flags  -> ()
	 */
	class UUserWidget* UMenuAnchor::GetUserWidget__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MenuAnchor.GetMenuPosition
	 * 		Flags  -> ()
	 */
	struct FVector2D UMenuAnchor::GetMenuPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.GetMenuPosition");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MenuAnchor.FitInWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuAnchor::FitInWindow(bool bFit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.FitInWindow");
		
		struct
		{
			bool                                               bFit;
		} params;
		params.bFit = bFit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MenuAnchor.Close
	 * 		Flags  -> ()
	 */
	void UMenuAnchor::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Close");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMenuAnchor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuAnchor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.MenuAnchor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MouseCursorBinding.GetValue
	 * 		Flags  -> ()
	 */
	EMouseCursor UMouseCursorBinding::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MouseCursorBinding.GetValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMouseCursorBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMouseCursorBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.MouseCursorBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScene2DTransformPropertySystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene2DTransformPropertySystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.MovieScene2DTransformPropertySystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScene2DTransformSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene2DTransformSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieScene2DTransformTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene2DTransformTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneMarginSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneMarginSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.MovieSceneMarginSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneMarginTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneMarginTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMovieSceneWidgetMaterialTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneWidgetMaterialTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.MovieSceneWidgetMaterialTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextLayoutWidget.SetJustification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETextJustify                                       InJustification                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTextLayoutWidget::SetJustification(ETextJustify InJustification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TextLayoutWidget.SetJustification");
		
		struct
		{
			ETextJustify                                       InJustification;
		} params;
		params.InJustification = InJustification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTextLayoutWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextLayoutWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.TextLayoutWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableText.SetWidgetStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTextBlockStyle                             InWidgetStyle                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMultiLineEditableText::SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetWidgetStyle");
		
		struct
		{
			struct FTextBlockStyle                             InWidgetStyle;
		} params;
		params.InWidgetStyle = InWidgetStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableText.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UMultiLineEditableText::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetText");
		
		struct
		{
			class FText                                        InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableText.SetIsReadOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReadOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiLineEditableText::SetIsReadOnly(bool bReadOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetIsReadOnly");
		
		struct
		{
			bool                                               bReadOnly;
		} params;
		params.bReadOnly = bReadOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableText.SetHintText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InHintText                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void UMultiLineEditableText::SetHintText(const class FText& InHintText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetHintText");
		
		struct
		{
			class FText                                        InHintText;
		} params;
		params.InHintText = InHintText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature");
		
		struct
		{
			class FText                                        Text;
			ETextCommit                                        CommitMethod;
		} params;
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature");
		
		struct
		{
			class FText                                        Text;
		} params;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableText.GetText
	 * 		Flags  -> ()
	 */
	class FText UMultiLineEditableText::GetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.GetText");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableText.GetHintText
	 * 		Flags  -> ()
	 */
	class FText UMultiLineEditableText::GetHintText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.GetHintText");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMultiLineEditableText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiLineEditableText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.MultiLineEditableText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableTextBox.SetTextStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTextBlockStyle                             InTextStyle                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMultiLineEditableTextBox::SetTextStyle(const struct FTextBlockStyle& InTextStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetTextStyle");
		
		struct
		{
			struct FTextBlockStyle                             InTextStyle;
		} params;
		params.InTextStyle = InTextStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableTextBox.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UMultiLineEditableTextBox::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetText");
		
		struct
		{
			class FText                                        InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableTextBox.SetIsReadOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReadOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiLineEditableTextBox::SetIsReadOnly(bool bReadOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetIsReadOnly");
		
		struct
		{
			bool                                               bReadOnly;
		} params;
		params.bReadOnly = bReadOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableTextBox.SetHintText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InHintText                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void UMultiLineEditableTextBox::SetHintText(const class FText& InHintText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetHintText");
		
		struct
		{
			class FText                                        InHintText;
		} params;
		params.InHintText = InHintText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableTextBox.SetError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InError                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void UMultiLineEditableTextBox::SetError(const class FText& InError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetError");
		
		struct
		{
			class FText                                        InError;
		} params;
		params.InError = InError;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");
		
		struct
		{
			class FText                                        Text;
			ETextCommit                                        CommitMethod;
		} params;
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");
		
		struct
		{
			class FText                                        Text;
		} params;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableTextBox.GetText
	 * 		Flags  -> ()
	 */
	class FText UMultiLineEditableTextBox::GetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.GetText");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.MultiLineEditableTextBox.GetHintText
	 * 		Flags  -> ()
	 */
	class FText UMultiLineEditableTextBox::GetHintText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.GetHintText");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMultiLineEditableTextBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiLineEditableTextBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNamedSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNamedSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.NamedSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNamedSlotInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNamedSlotInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.NamedSlotInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNativeWidgetHost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNativeWidgetHost::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.NativeWidgetHost");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Overlay.AddChildToOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOverlaySlot* UOverlay::AddChildToOverlay(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Overlay.AddChildToOverlay");
		
		struct
		{
			class UWidget*                                     Content;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOverlay.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOverlay::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Overlay");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.OverlaySlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOverlaySlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetVerticalAlignment");
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.OverlaySlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOverlaySlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetPadding");
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.OverlaySlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOverlaySlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetHorizontalAlignment");
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOverlaySlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOverlaySlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.OverlaySlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ProgressBar.SetPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InPercent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProgressBar::SetPercent(float InPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetPercent");
		
		struct
		{
			float                                              InPercent;
		} params;
		params.InPercent = InPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ProgressBar.SetIsMarquee
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InbIsMarquee                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProgressBar::SetIsMarquee(bool InbIsMarquee)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetIsMarquee");
		
		struct
		{
			bool                                               InbIsMarquee;
		} params;
		params.InbIsMarquee = InbIsMarquee;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ProgressBar.SetFillColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProgressBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetFillColorAndOpacity");
		
		struct
		{
			struct FLinearColor                                InColor;
		} params;
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProgressBar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProgressBar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ProgressBar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RetainerBox.SetTextureParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TextureParameter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URetainerBox::SetTextureParameter(const class FName& TextureParameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetTextureParameter");
		
		struct
		{
			class FName                                        TextureParameter;
		} params;
		params.TextureParameter = TextureParameter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RetainerBox.SetRetainRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInRetainRendering                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URetainerBox::SetRetainRendering(bool bInRetainRendering)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetRetainRendering");
		
		struct
		{
			bool                                               bInRetainRendering;
		} params;
		params.bInRetainRendering = bInRetainRendering;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RetainerBox.SetRenderingPhase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RenderPhase                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TotalPhases                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URetainerBox::SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetRenderingPhase");
		
		struct
		{
			int32_t                                            RenderPhase;
			int32_t                                            TotalPhases;
		} params;
		params.RenderPhase = RenderPhase;
		params.TotalPhases = TotalPhases;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RetainerBox.SetEffectMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          EffectMaterial                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URetainerBox::SetEffectMaterial(class UMaterialInterface* EffectMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetEffectMaterial");
		
		struct
		{
			class UMaterialInterface*                          EffectMaterial;
		} params;
		params.EffectMaterial = EffectMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RetainerBox.RequestRender
	 * 		Flags  -> ()
	 */
	void URetainerBox::RequestRender()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.RequestRender");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RetainerBox.GetEffectMaterial
	 * 		Flags  -> ()
	 */
	class UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.GetEffectMaterial");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URetainerBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URetainerBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.RetainerBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetTextTransformPolicy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETextTransformPolicy                               InTransformPolicy                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URichTextBlock::SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetTextTransformPolicy");
		
		struct
		{
			ETextTransformPolicy                               InTransformPolicy;
		} params;
		params.InTransformPolicy = InTransformPolicy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetTextStyleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  NewTextStyleSet                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URichTextBlock::SetTextStyleSet(class UDataTable* NewTextStyleSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetTextStyleSet");
		
		struct
		{
			class UDataTable*                                  NewTextStyleSet;
		} params;
		params.NewTextStyleSet = NewTextStyleSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void URichTextBlock::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetText");
		
		struct
		{
			class FText                                        InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetMinDesiredWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMinDesiredWidth                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URichTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetMinDesiredWidth");
		
		struct
		{
			float                                              InMinDesiredWidth;
		} params;
		params.InMinDesiredWidth = InMinDesiredWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetDefaultTextStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTextBlockStyle                             InDefaultTextStyle                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void URichTextBlock::SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultTextStyle");
		
		struct
		{
			struct FTextBlockStyle                             InDefaultTextStyle;
		} params;
		params.InDefaultTextStyle = InDefaultTextStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetDefaultStrikeBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 InStrikeBrush                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void URichTextBlock::SetDefaultStrikeBrush(struct FSlateBrush* InStrikeBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultStrikeBrush");
		
		struct
		{
			struct FSlateBrush                                 InStrikeBrush;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InStrikeBrush != nullptr)
			*InStrikeBrush = params.InStrikeBrush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetDefaultShadowOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InShadowOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URichTextBlock::SetDefaultShadowOffset(const struct FVector2D& InShadowOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultShadowOffset");
		
		struct
		{
			struct FVector2D                                   InShadowOffset;
		} params;
		params.InShadowOffset = InShadowOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InShadowColorAndOpacity                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URichTextBlock::SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity");
		
		struct
		{
			struct FLinearColor                                InShadowColorAndOpacity;
		} params;
		params.InShadowColorAndOpacity = InShadowColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetDefaultFont
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateFontInfo                              InFontInfo                                                 (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URichTextBlock::SetDefaultFont(const struct FSlateFontInfo& InFontInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultFont");
		
		struct
		{
			struct FSlateFontInfo                              InFontInfo;
		} params;
		params.InFontInfo = InFontInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetDefaultColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (Parm, NativeAccessSpecifierPublic)
	 */
	void URichTextBlock::SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultColorAndOpacity");
		
		struct
		{
			struct FSlateColor                                 InColorAndOpacity;
		} params;
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.SetAutoWrapText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InAutoTextWrap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URichTextBlock::SetAutoWrapText(bool InAutoTextWrap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetAutoWrapText");
		
		struct
		{
			bool                                               InAutoTextWrap;
		} params;
		params.InAutoTextWrap = InAutoTextWrap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.GetText
	 * 		Flags  -> ()
	 */
	class FText URichTextBlock::GetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.GetText");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.GetDecoratorByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      DecoratorClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URichTextBlockDecorator* URichTextBlock::GetDecoratorByClass(class UClass* DecoratorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.GetDecoratorByClass");
		
		struct
		{
			class UClass*                                      DecoratorClass;
		} params;
		params.DecoratorClass = DecoratorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
	 * 		Flags  -> ()
	 */
	void URichTextBlock::ClearAllDefaultStyleOverrides()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URichTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URichTextBlock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.RichTextBlock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URichTextBlockDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URichTextBlockDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.RichTextBlockDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URichTextBlockImageDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URichTextBlockImageDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.RichTextBlockImageDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SafeZone.SetSidesToPad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InPadLeft                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InPadRight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InPadTop                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InPadBottom                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USafeZone::SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SafeZone.SetSidesToPad");
		
		struct
		{
			bool                                               InPadLeft;
			bool                                               InPadRight;
			bool                                               InPadTop;
			bool                                               InPadBottom;
		} params;
		params.InPadLeft = InPadLeft;
		params.InPadRight = InPadRight;
		params.InPadTop = InPadTop;
		params.InPadBottom = InPadBottom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USafeZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USafeZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.SafeZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USafeZoneSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USafeZoneSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.SafeZoneSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScaleBox.SetUserSpecifiedScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InUserSpecifiedScale                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetUserSpecifiedScale");
		
		struct
		{
			float                                              InUserSpecifiedScale;
		} params;
		params.InUserSpecifiedScale = InUserSpecifiedScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScaleBox.SetStretchDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStretchDirection                                  InStretchDirection                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScaleBox::SetStretchDirection(EStretchDirection InStretchDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetStretchDirection");
		
		struct
		{
			EStretchDirection                                  InStretchDirection;
		} params;
		params.InStretchDirection = InStretchDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScaleBox.SetStretch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStretch                                           InStretch                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScaleBox::SetStretch(EStretch InStretch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetStretch");
		
		struct
		{
			EStretch                                           InStretch;
		} params;
		params.InStretch = InStretch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScaleBox.SetIgnoreInheritedScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIgnoreInheritedScale                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScaleBox::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetIgnoreInheritedScale");
		
		struct
		{
			bool                                               bInIgnoreInheritedScale;
		} params;
		params.bInIgnoreInheritedScale = bInIgnoreInheritedScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UScaleBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScaleBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ScaleBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScaleBoxSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScaleBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetVerticalAlignment");
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScaleBoxSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScaleBoxSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetPadding");
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScaleBoxSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScaleBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetHorizontalAlignment");
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UScaleBoxSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScaleBoxSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ScaleBoxSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBar.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InOffsetFraction                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InThumbSizeFraction                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBar.SetState");
		
		struct
		{
			float                                              InOffsetFraction;
			float                                              InThumbSizeFraction;
		} params;
		params.InOffsetFraction = InOffsetFraction;
		params.InThumbSizeFraction = InThumbSizeFraction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UScrollBar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScrollBar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ScrollBar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetWheelScrollMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewWheelScrollMultiplier                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScrollBox::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetWheelScrollMultiplier");
		
		struct
		{
			float                                              NewWheelScrollMultiplier;
		} params;
		params.NewWheelScrollMultiplier = NewWheelScrollMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetScrollOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewScrollOffset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScrollBox::SetScrollOffset(float NewScrollOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollOffset");
		
		struct
		{
			float                                              NewScrollOffset;
		} params;
		params.NewScrollOffset = NewScrollOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetScrollbarVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   NewScrollBarVisibility                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScrollBox::SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarVisibility");
		
		struct
		{
			ESlateVisibility                                   NewScrollBarVisibility;
		} params;
		params.NewScrollBarVisibility = NewScrollBarVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetScrollbarThickness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NewScrollbarThickness                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScrollBox::SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarThickness");
		
		struct
		{
			struct FVector2D                                   NewScrollbarThickness;
		} params;
		params.NewScrollbarThickness = NewScrollbarThickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetScrollbarPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     NewScrollbarPadding                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScrollBox::SetScrollbarPadding(const struct FMargin& NewScrollbarPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarPadding");
		
		struct
		{
			struct FMargin                                     NewScrollbarPadding;
		} params;
		params.NewScrollbarPadding = NewScrollbarPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetOrientation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOrientation                                       NewOrientation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScrollBox::SetOrientation(EOrientation NewOrientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetOrientation");
		
		struct
		{
			EOrientation                                       NewOrientation;
		} params;
		params.NewOrientation = NewOrientation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetConsumeMouseWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConsumeMouseWheel                                 NewConsumeMouseWheel                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScrollBox::SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetConsumeMouseWheel");
		
		struct
		{
			EConsumeMouseWheel                                 NewConsumeMouseWheel;
		} params;
		params.NewConsumeMouseWheel = NewConsumeMouseWheel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetAnimateWheelScrolling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldAnimateWheelScrolling                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScrollBox::SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAnimateWheelScrolling");
		
		struct
		{
			bool                                               bShouldAnimateWheelScrolling;
		} params;
		params.bShouldAnimateWheelScrolling = bShouldAnimateWheelScrolling;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetAlwaysShowScrollbar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewAlwaysShowScrollbar                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAlwaysShowScrollbar");
		
		struct
		{
			bool                                               NewAlwaysShowScrollbar;
		} params;
		params.NewAlwaysShowScrollbar = NewAlwaysShowScrollbar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.SetAllowOverscroll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewAllowOverscroll                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScrollBox::SetAllowOverscroll(bool NewAllowOverscroll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAllowOverscroll");
		
		struct
		{
			bool                                               NewAllowOverscroll;
		} params;
		params.NewAllowOverscroll = NewAllowOverscroll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.ScrollWidgetIntoView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     WidgetToFind                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               AnimateScroll                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDescendantScrollDestination                       ScrollDestination                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Padding                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScrollBox::ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollWidgetIntoView");
		
		struct
		{
			class UWidget*                                     WidgetToFind;
			bool                                               AnimateScroll;
			EDescendantScrollDestination                       ScrollDestination;
			float                                              Padding;
		} params;
		params.WidgetToFind = WidgetToFind;
		params.AnimateScroll = AnimateScroll;
		params.ScrollDestination = ScrollDestination;
		params.Padding = Padding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.ScrollToStart
	 * 		Flags  -> ()
	 */
	void UScrollBox::ScrollToStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToStart");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.ScrollToEnd
	 * 		Flags  -> ()
	 */
	void UScrollBox::ScrollToEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToEnd");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.GetViewOffsetFraction
	 * 		Flags  -> ()
	 */
	float UScrollBox::GetViewOffsetFraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetViewOffsetFraction");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.GetScrollOffsetOfEnd
	 * 		Flags  -> ()
	 */
	float UScrollBox::GetScrollOffsetOfEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetScrollOffsetOfEnd");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.GetScrollOffset
	 * 		Flags  -> ()
	 */
	float UScrollBox::GetScrollOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetScrollOffset");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBox.EndInertialScrolling
	 * 		Flags  -> ()
	 */
	void UScrollBox::EndInertialScrolling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.EndInertialScrolling");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UScrollBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScrollBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ScrollBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBoxSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScrollBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetVerticalAlignment");
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBoxSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScrollBoxSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetPadding");
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.ScrollBoxSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScrollBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetHorizontalAlignment");
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UScrollBoxSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScrollBoxSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.ScrollBoxSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.SetWidthOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InWidthOverride                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USizeBox::SetWidthOverride(float InWidthOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetWidthOverride");
		
		struct
		{
			float                                              InWidthOverride;
		} params;
		params.InWidthOverride = InWidthOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.SetMinDesiredWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMinDesiredWidth                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USizeBox::SetMinDesiredWidth(float InMinDesiredWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredWidth");
		
		struct
		{
			float                                              InMinDesiredWidth;
		} params;
		params.InMinDesiredWidth = InMinDesiredWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.SetMinDesiredHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMinDesiredHeight                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredHeight");
		
		struct
		{
			float                                              InMinDesiredHeight;
		} params;
		params.InMinDesiredHeight = InMinDesiredHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.SetMinAspectRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMinAspectRatio                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USizeBox::SetMinAspectRatio(float InMinAspectRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinAspectRatio");
		
		struct
		{
			float                                              InMinAspectRatio;
		} params;
		params.InMinAspectRatio = InMinAspectRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.SetMaxDesiredWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMaxDesiredWidth                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredWidth");
		
		struct
		{
			float                                              InMaxDesiredWidth;
		} params;
		params.InMaxDesiredWidth = InMaxDesiredWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.SetMaxDesiredHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMaxDesiredHeight                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredHeight");
		
		struct
		{
			float                                              InMaxDesiredHeight;
		} params;
		params.InMaxDesiredHeight = InMaxDesiredHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.SetMaxAspectRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMaxAspectRatio                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USizeBox::SetMaxAspectRatio(float InMaxAspectRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxAspectRatio");
		
		struct
		{
			float                                              InMaxAspectRatio;
		} params;
		params.InMaxAspectRatio = InMaxAspectRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.SetHeightOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InHeightOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USizeBox::SetHeightOverride(float InHeightOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetHeightOverride");
		
		struct
		{
			float                                              InHeightOverride;
		} params;
		params.InHeightOverride = InHeightOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.ClearWidthOverride
	 * 		Flags  -> ()
	 */
	void USizeBox::ClearWidthOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearWidthOverride");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.ClearMinDesiredWidth
	 * 		Flags  -> ()
	 */
	void USizeBox::ClearMinDesiredWidth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredWidth");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.ClearMinDesiredHeight
	 * 		Flags  -> ()
	 */
	void USizeBox::ClearMinDesiredHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredHeight");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.ClearMinAspectRatio
	 * 		Flags  -> ()
	 */
	void USizeBox::ClearMinAspectRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinAspectRatio");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.ClearMaxDesiredWidth
	 * 		Flags  -> ()
	 */
	void USizeBox::ClearMaxDesiredWidth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredWidth");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.ClearMaxDesiredHeight
	 * 		Flags  -> ()
	 */
	void USizeBox::ClearMaxDesiredHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredHeight");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.ClearMaxAspectRatio
	 * 		Flags  -> ()
	 */
	void USizeBox::ClearMaxAspectRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxAspectRatio");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBox.ClearHeightOverride
	 * 		Flags  -> ()
	 */
	void USizeBox::ClearHeightOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearHeightOverride");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USizeBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USizeBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.SizeBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBoxSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USizeBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetVerticalAlignment");
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBoxSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USizeBoxSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetPadding");
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SizeBoxSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USizeBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetHorizontalAlignment");
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USizeBoxSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USizeBoxSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.SizeBoxSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   LocalVector                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USlateBlueprintLibrary::TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute");
		
		struct
		{
			struct FGeometry                                   Geometry;
			struct FVector2D                                   LocalVector;
		} params;
		params.Geometry = Geometry;
		params.LocalVector = LocalVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   AbsoluteVector                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USlateBlueprintLibrary::TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal");
		
		struct
		{
			struct FGeometry                                   Geometry;
			struct FVector2D                                   AbsoluteVector;
		} params;
		params.Geometry = Geometry;
		params.AbsoluteVector = AbsoluteVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              LocalScalar                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USlateBlueprintLibrary::TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute");
		
		struct
		{
			struct FGeometry                                   Geometry;
			float                                              LocalScalar;
		} params;
		params.Geometry = Geometry;
		params.LocalScalar = LocalScalar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              AbsoluteScalar                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USlateBlueprintLibrary::TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal");
		
		struct
		{
			struct FGeometry                                   Geometry;
			float                                              AbsoluteScalar;
		} params;
		params.Geometry = Geometry;
		params.AbsoluteScalar = AbsoluteScalar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   ScreenPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   LocalCoordinate                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeWindowPosition                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USlateBlueprintLibrary::ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate, bool bIncludeWindowPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FGeometry                                   Geometry;
			struct FVector2D                                   ScreenPosition;
			struct FVector2D                                   LocalCoordinate;
			bool                                               bIncludeWindowPosition;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Geometry = Geometry;
		params.ScreenPosition = ScreenPosition;
		params.bIncludeWindowPosition = bIncludeWindowPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocalCoordinate != nullptr)
			*LocalCoordinate = params.LocalCoordinate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   ScreenPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   AbsoluteCoordinate                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeWindowPosition                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USlateBlueprintLibrary::ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate, bool bIncludeWindowPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector2D                                   ScreenPosition;
			struct FVector2D                                   AbsoluteCoordinate;
			bool                                               bIncludeWindowPosition;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ScreenPosition = ScreenPosition;
		params.bIncludeWindowPosition = bIncludeWindowPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AbsoluteCoordinate != nullptr)
			*AbsoluteCoordinate = params.AbsoluteCoordinate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.ScreenToViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   ScreenPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   ViewportPosition                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USlateBlueprintLibrary::ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.ScreenToViewport");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector2D                                   ScreenPosition;
			struct FVector2D                                   ViewportPosition;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ScreenPosition = ScreenPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ViewportPosition != nullptr)
			*ViewportPosition = params.ViewportPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.LocalToViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   LocalCoordinate                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   PixelPosition                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   ViewportPosition                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USlateBlueprintLibrary::LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.LocalToViewport");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FGeometry                                   Geometry;
			struct FVector2D                                   LocalCoordinate;
			struct FVector2D                                   PixelPosition;
			struct FVector2D                                   ViewportPosition;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Geometry = Geometry;
		params.LocalCoordinate = LocalCoordinate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PixelPosition != nullptr)
			*PixelPosition = params.PixelPosition;
		if (ViewportPosition != nullptr)
			*ViewportPosition = params.ViewportPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.LocalToAbsolute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   LocalCoordinate                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USlateBlueprintLibrary::LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.LocalToAbsolute");
		
		struct
		{
			struct FGeometry                                   Geometry;
			struct FVector2D                                   LocalCoordinate;
		} params;
		params.Geometry = Geometry;
		params.LocalCoordinate = LocalCoordinate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.IsUnderLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   AbsoluteCoordinate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USlateBlueprintLibrary::IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.IsUnderLocation");
		
		struct
		{
			struct FGeometry                                   Geometry;
			struct FVector2D                                   AbsoluteCoordinate;
		} params;
		params.Geometry = Geometry;
		params.AbsoluteCoordinate = AbsoluteCoordinate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USlateBlueprintLibrary::GetLocalTopLeft(const struct FGeometry& Geometry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.GetLocalTopLeft");
		
		struct
		{
			struct FGeometry                                   Geometry;
		} params;
		params.Geometry = Geometry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.GetLocalSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USlateBlueprintLibrary::GetLocalSize(const struct FGeometry& Geometry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.GetLocalSize");
		
		struct
		{
			struct FGeometry                                   Geometry;
		} params;
		params.Geometry = Geometry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USlateBlueprintLibrary::GetAbsoluteSize(const struct FGeometry& Geometry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.GetAbsoluteSize");
		
		struct
		{
			struct FGeometry                                   Geometry;
		} params;
		params.Geometry = Geometry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSlateBrush                                 B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool USlateBlueprintLibrary::EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush");
		
		struct
		{
			struct FSlateBrush                                 A;
			struct FSlateBrush                                 B;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   AbsoluteDesktopCoordinate                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   PixelPosition                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   ViewportPosition                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USlateBlueprintLibrary::AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.AbsoluteToViewport");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector2D                                   AbsoluteDesktopCoordinate;
			struct FVector2D                                   PixelPosition;
			struct FVector2D                                   ViewportPosition;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.AbsoluteDesktopCoordinate = AbsoluteDesktopCoordinate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PixelPosition != nullptr)
			*PixelPosition = params.PixelPosition;
		if (ViewportPosition != nullptr)
			*ViewportPosition = params.ViewportPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   AbsoluteCoordinate                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USlateBlueprintLibrary::AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.AbsoluteToLocal");
		
		struct
		{
			struct FGeometry                                   Geometry;
			struct FVector2D                                   AbsoluteCoordinate;
		} params;
		params.Geometry = Geometry;
		params.AbsoluteCoordinate = AbsoluteCoordinate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USlateBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlateBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USlateVectorArtData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlateVectorArtData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.SlateVectorArtData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USlateAccessibleWidgetData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlateAccessibleWidgetData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.SlateAccessibleWidgetData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Slider.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USlider::SetValue(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetValue");
		
		struct
		{
			float                                              InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Slider.SetStepSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USlider::SetStepSize(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetStepSize");
		
		struct
		{
			float                                              InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Slider.SetSliderHandleColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USlider::SetSliderHandleColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetSliderHandleColor");
		
		struct
		{
			struct FLinearColor                                InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Slider.SetSliderBarColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USlider::SetSliderBarColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetSliderBarColor");
		
		struct
		{
			struct FLinearColor                                InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Slider.SetMinValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USlider::SetMinValue(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetMinValue");
		
		struct
		{
			float                                              InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Slider.SetMaxValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USlider::SetMaxValue(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetMaxValue");
		
		struct
		{
			float                                              InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Slider.SetLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USlider::SetLocked(bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetLocked");
		
		struct
		{
			bool                                               InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Slider.SetIndentHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USlider::SetIndentHandle(bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetIndentHandle");
		
		struct
		{
			bool                                               InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Slider.GetValue
	 * 		Flags  -> ()
	 */
	float USlider::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Slider.GetValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Slider.GetNormalizedValue
	 * 		Flags  -> ()
	 */
	float USlider::GetNormalizedValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Slider.GetNormalizedValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USlider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Slider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Spacer.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InSize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpacer::SetSize(const struct FVector2D& InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Spacer.SetSize");
		
		struct
		{
			struct FVector2D                                   InSize;
		} params;
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USpacer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpacer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Spacer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpinBox::SetValue(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetValue");
		
		struct
		{
			float                                              NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetMinValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpinBox::SetMinValue(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinValue");
		
		struct
		{
			float                                              NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetMinSliderValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpinBox::SetMinSliderValue(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinSliderValue");
		
		struct
		{
			float                                              NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetMinFractionalDigits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpinBox::SetMinFractionalDigits(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinFractionalDigits");
		
		struct
		{
			int32_t                                            NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetMaxValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpinBox::SetMaxValue(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxValue");
		
		struct
		{
			float                                              NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetMaxSliderValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpinBox::SetMaxSliderValue(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxSliderValue");
		
		struct
		{
			float                                              NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetMaxFractionalDigits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpinBox::SetMaxFractionalDigits(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxFractionalDigits");
		
		struct
		{
			int32_t                                            NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetForegroundColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InForegroundColor                                          (Parm, NativeAccessSpecifierPublic)
	 */
	void USpinBox::SetForegroundColor(const struct FSlateColor& InForegroundColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetForegroundColor");
		
		struct
		{
			struct FSlateColor                                 InForegroundColor;
		} params;
		params.InForegroundColor = InForegroundColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetDelta
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpinBox::SetDelta(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetDelta");
		
		struct
		{
			float                                              NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpinBox::SetAlwaysUsesDeltaSnap(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetAlwaysUsesDeltaSnap");
		
		struct
		{
			bool                                               bNewValue;
		} params;
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		struct
		{
			float                                              InValue;
			ETextCommit                                        CommitMethod;
		} params;
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature");
		
		struct
		{
			float                                              InValue;
		} params;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.GetValue
	 * 		Flags  -> ()
	 */
	float USpinBox::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.GetMinValue
	 * 		Flags  -> ()
	 */
	float USpinBox::GetMinValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.GetMinSliderValue
	 * 		Flags  -> ()
	 */
	float USpinBox::GetMinSliderValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinSliderValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.GetMinFractionalDigits
	 * 		Flags  -> ()
	 */
	int32_t USpinBox::GetMinFractionalDigits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinFractionalDigits");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.GetMaxValue
	 * 		Flags  -> ()
	 */
	float USpinBox::GetMaxValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.GetMaxSliderValue
	 * 		Flags  -> ()
	 */
	float USpinBox::GetMaxSliderValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxSliderValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.GetMaxFractionalDigits
	 * 		Flags  -> ()
	 */
	int32_t USpinBox::GetMaxFractionalDigits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxFractionalDigits");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.GetDelta
	 * 		Flags  -> ()
	 */
	float USpinBox::GetDelta()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetDelta");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
	 * 		Flags  -> ()
	 */
	bool USpinBox::GetAlwaysUsesDeltaSnap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetAlwaysUsesDeltaSnap");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.ClearMinValue
	 * 		Flags  -> ()
	 */
	void USpinBox::ClearMinValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.ClearMinSliderValue
	 * 		Flags  -> ()
	 */
	void USpinBox::ClearMinSliderValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinSliderValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.ClearMaxValue
	 * 		Flags  -> ()
	 */
	void USpinBox::ClearMaxValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.SpinBox.ClearMaxSliderValue
	 * 		Flags  -> ()
	 */
	void USpinBox::ClearMaxSliderValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxSliderValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USpinBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpinBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.SpinBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBinding.GetTextValue
	 * 		Flags  -> ()
	 */
	class FText UTextBinding::GetTextValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TextBinding.GetTextValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBinding.GetStringValue
	 * 		Flags  -> ()
	 */
	class FString UTextBinding::GetStringValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TextBinding.GetStringValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTextBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.TextBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetTextTransformPolicy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETextTransformPolicy                               InTransformPolicy                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTextBlock::SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetTextTransformPolicy");
		
		struct
		{
			ETextTransformPolicy                               InTransformPolicy;
		} params;
		params.InTransformPolicy = InTransformPolicy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UTextBlock::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetText");
		
		struct
		{
			class FText                                        InText;
		} params;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetStrikeBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 InStrikeBrush                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UTextBlock::SetStrikeBrush(const struct FSlateBrush& InStrikeBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetStrikeBrush");
		
		struct
		{
			struct FSlateBrush                                 InStrikeBrush;
		} params;
		params.InStrikeBrush = InStrikeBrush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetShadowOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InShadowOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTextBlock::SetShadowOffset(const struct FVector2D& InShadowOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowOffset");
		
		struct
		{
			struct FVector2D                                   InShadowOffset;
		} params;
		params.InShadowOffset = InShadowOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetShadowColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InShadowColorAndOpacity                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTextBlock::SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowColorAndOpacity");
		
		struct
		{
			struct FLinearColor                                InShadowColorAndOpacity;
		} params;
		params.InShadowColorAndOpacity = InShadowColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InOpacity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTextBlock::SetOpacity(float InOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetOpacity");
		
		struct
		{
			float                                              InOpacity;
		} params;
		params.InOpacity = InOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetMinDesiredWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMinDesiredWidth                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetMinDesiredWidth");
		
		struct
		{
			float                                              InMinDesiredWidth;
		} params;
		params.InMinDesiredWidth = InMinDesiredWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetFont
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateFontInfo                              InFontInfo                                                 (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTextBlock::SetFont(const struct FSlateFontInfo& InFontInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetFont");
		
		struct
		{
			struct FSlateFontInfo                              InFontInfo;
		} params;
		params.InFontInfo = InFontInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (Parm, NativeAccessSpecifierPublic)
	 */
	void UTextBlock::SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetColorAndOpacity");
		
		struct
		{
			struct FSlateColor                                 InColorAndOpacity;
		} params;
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.SetAutoWrapText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InAutoTextWrap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTextBlock::SetAutoWrapText(bool InAutoTextWrap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetAutoWrapText");
		
		struct
		{
			bool                                               InAutoTextWrap;
		} params;
		params.InAutoTextWrap = InAutoTextWrap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.GetText
	 * 		Flags  -> ()
	 */
	class FText UTextBlock::GetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetText");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.GetDynamicOutlineMaterial
	 * 		Flags  -> ()
	 */
	class UMaterialInstanceDynamic* UTextBlock::GetDynamicOutlineMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetDynamicOutlineMaterial");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TextBlock.GetDynamicFontMaterial
	 * 		Flags  -> ()
	 */
	class UMaterialInstanceDynamic* UTextBlock::GetDynamicFontMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetDynamicFontMaterial");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextBlock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.TextBlock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Throbber.SetNumberOfPieces
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InNumberOfPieces                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThrobber::SetNumberOfPieces(int32_t InNumberOfPieces)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetNumberOfPieces");
		
		struct
		{
			int32_t                                            InNumberOfPieces;
		} params;
		params.InNumberOfPieces = InNumberOfPieces;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Throbber.SetAnimateVertically
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAnimateVertically                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThrobber::SetAnimateVertically(bool bInAnimateVertically)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateVertically");
		
		struct
		{
			bool                                               bInAnimateVertically;
		} params;
		params.bInAnimateVertically = bInAnimateVertically;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Throbber.SetAnimateOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAnimateOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThrobber::SetAnimateOpacity(bool bInAnimateOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateOpacity");
		
		struct
		{
			bool                                               bInAnimateOpacity;
		} params;
		params.bInAnimateOpacity = bInAnimateOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Throbber.SetAnimateHorizontally
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAnimateHorizontally                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThrobber::SetAnimateHorizontally(bool bInAnimateHorizontally)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateHorizontally");
		
		struct
		{
			bool                                               bInAnimateHorizontally;
		} params;
		params.bInAnimateHorizontally = bInAnimateHorizontally;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UThrobber.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThrobber::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Throbber");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TileView.SetEntryWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewWidth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTileView::SetEntryWidth(float NewWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TileView.SetEntryWidth");
		
		struct
		{
			float                                              NewWidth;
		} params;
		params.NewWidth = NewWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TileView.SetEntryHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewHeight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTileView::SetEntryHeight(float NewHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TileView.SetEntryHeight");
		
		struct
		{
			float                                              NewHeight;
		} params;
		params.NewHeight = NewHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TileView.GetEntryWidth
	 * 		Flags  -> ()
	 */
	float UTileView::GetEntryWidth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TileView.GetEntryWidth");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TileView.GetEntryHeight
	 * 		Flags  -> ()
	 */
	float UTileView::GetEntryHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TileView.GetEntryHeight");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTileView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTileView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.TileView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TreeView.SetItemExpansion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bExpandItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTreeView::SetItemExpansion(class UObject* Item, bool bExpandItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TreeView.SetItemExpansion");
		
		struct
		{
			class UObject*                                     Item;
			bool                                               bExpandItem;
		} params;
		params.Item = Item;
		params.bExpandItem = bExpandItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TreeView.ExpandAll
	 * 		Flags  -> ()
	 */
	void UTreeView::ExpandAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TreeView.ExpandAll");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.TreeView.CollapseAll
	 * 		Flags  -> ()
	 */
	void UTreeView::CollapseAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.TreeView.CollapseAll");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTreeView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTreeView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.TreeView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UMGSequencePlayer.SetUserTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InUserTag                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUMGSequencePlayer::SetUserTag(const class FName& InUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UMGSequencePlayer.SetUserTag");
		
		struct
		{
			class FName                                        InUserTag;
		} params;
		params.InUserTag = InUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UMGSequencePlayer.GetUserTag
	 * 		Flags  -> ()
	 */
	class FName UUMGSequencePlayer::GetUserTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UMGSequencePlayer.GetUserTag");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUMGSequencePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGSequencePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.UMGSequencePlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUMGSequenceTickManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMGSequenceTickManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.UMGSequenceTickManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UniformGridPanel.SetSlotPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InSlotPadding                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUniformGridPanel::SetSlotPadding(const struct FMargin& InSlotPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetSlotPadding");
		
		struct
		{
			struct FMargin                                     InSlotPadding;
		} params;
		params.InSlotPadding = InSlotPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMinDesiredSlotWidth                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotWidth");
		
		struct
		{
			float                                              InMinDesiredSlotWidth;
		} params;
		params.InMinDesiredSlotWidth = InMinDesiredSlotWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMinDesiredSlotHeight                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotHeight");
		
		struct
		{
			float                                              InMinDesiredSlotHeight;
		} params;
		params.InMinDesiredSlotHeight = InMinDesiredSlotHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UniformGridPanel.AddChildToUniformGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InRow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InColumn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(class UWidget* Content, int32_t InRow, int32_t InColumn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.AddChildToUniformGrid");
		
		struct
		{
			class UWidget*                                     Content;
			int32_t                                            InRow;
			int32_t                                            InColumn;
		} params;
		params.Content = Content;
		params.InRow = InRow;
		params.InColumn = InColumn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUniformGridPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUniformGridPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.UniformGridPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UniformGridSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUniformGridSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetVerticalAlignment");
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UniformGridSlot.SetRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUniformGridSlot::SetRow(int32_t InRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetRow");
		
		struct
		{
			int32_t                                            InRow;
		} params;
		params.InRow = InRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UniformGridSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUniformGridSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetHorizontalAlignment");
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.UniformGridSlot.SetColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InColumn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUniformGridSlot::SetColumn(int32_t InColumn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetColumn");
		
		struct
		{
			int32_t                                            InColumn;
		} params;
		params.InColumn = InColumn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUniformGridSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUniformGridSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.UniformGridSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.VerticalBox.AddChildToVerticalBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.VerticalBox.AddChildToVerticalBox");
		
		struct
		{
			class UWidget*                                     Content;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVerticalBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVerticalBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.VerticalBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.VerticalBoxSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVerticalBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetVerticalAlignment");
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.VerticalBoxSlot.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateChildSize                             InSize                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVerticalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetSize");
		
		struct
		{
			struct FSlateChildSize                             InSize;
		} params;
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.VerticalBoxSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVerticalBoxSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetPadding");
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.VerticalBoxSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVerticalBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetHorizontalAlignment");
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVerticalBoxSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVerticalBoxSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.VerticalBoxSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Viewport.Spawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UViewport::Spawn(class UClass* ActorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Viewport.Spawn");
		
		struct
		{
			class UClass*                                      ActorClass;
		} params;
		params.ActorClass = ActorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Viewport.SetViewRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UViewport::SetViewRotation(const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewRotation");
		
		struct
		{
			struct FRotator                                    Rotation;
		} params;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Viewport.SetViewLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UViewport::SetViewLocation(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewLocation");
		
		struct
		{
			struct FVector                                     Location;
		} params;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Viewport.GetViewRotation
	 * 		Flags  -> ()
	 */
	struct FRotator UViewport::GetViewRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewRotation");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Viewport.GetViewportWorld
	 * 		Flags  -> ()
	 */
	class UWorld* UViewport::GetViewportWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewportWorld");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.Viewport.GetViewLocation
	 * 		Flags  -> ()
	 */
	struct FVector UViewport::GetViewLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewLocation");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UViewport.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UViewport::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.Viewport");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.VisibilityBinding.GetValue
	 * 		Flags  -> ()
	 */
	ESlateVisibility UVisibilityBinding::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.VisibilityBinding.GetValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVisibilityBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisibilityBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.VisibilityBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetAnimation.UnbindFromAnimationStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWidgetAnimation::UnbindFromAnimationStarted(class UUserWidget* Widget, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindFromAnimationStarted");
		
		struct
		{
			class UUserWidget*                                 Widget;
			class FScriptDelegate                              Delegate;
		} params;
		params.Widget = Widget;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetAnimation.UnbindFromAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWidgetAnimation::UnbindFromAnimationFinished(class UUserWidget* Widget, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindFromAnimationFinished");
		
		struct
		{
			class UUserWidget*                                 Widget;
			class FScriptDelegate                              Delegate;
		} params;
		params.Widget = Widget;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetAnimation::UnbindAllFromAnimationStarted(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted");
		
		struct
		{
			class UUserWidget*                                 Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetAnimation::UnbindAllFromAnimationFinished(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished");
		
		struct
		{
			class UUserWidget*                                 Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetAnimation.GetStartTime
	 * 		Flags  -> ()
	 */
	float UWidgetAnimation::GetStartTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetStartTime");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetAnimation.GetEndTime
	 * 		Flags  -> ()
	 */
	float UWidgetAnimation::GetEndTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetEndTime");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetAnimation.BindToAnimationStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWidgetAnimation::BindToAnimationStarted(class UUserWidget* Widget, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.BindToAnimationStarted");
		
		struct
		{
			class UUserWidget*                                 Widget;
			class FScriptDelegate                              Delegate;
		} params;
		params.Widget = Widget;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetAnimation.BindToAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWidgetAnimation::BindToAnimationFinished(class UUserWidget* Widget, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.BindToAnimationFinished");
		
		struct
		{
			class UUserWidget*                                 Widget;
			class FScriptDelegate                              Delegate;
		} params;
		params.Widget = Widget;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWidgetAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidgetAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWidgetAnimationDelegateBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidgetAnimationDelegateBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetAnimationDelegateBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMGSequencePlayer*                          Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidgetAnimation*                            InAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartAtTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndAtTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumLoopsToPlay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUMGSequencePlayMode                               PlayMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject");
		
		struct
		{
			class UUMGSequencePlayer*                          Result;
			class UUserWidget*                                 Widget;
			class UWidgetAnimation*                            InAnimation;
			float                                              StartAtTime;
			float                                              EndAtTime;
			int32_t                                            NumLoopsToPlay;
			EUMGSequencePlayMode                               PlayMode;
			float                                              PlaybackSpeed;
		} params;
		params.Widget = Widget;
		params.InAnimation = InAnimation;
		params.StartAtTime = StartAtTime;
		params.EndAtTime = EndAtTime;
		params.NumLoopsToPlay = NumLoopsToPlay;
		params.PlayMode = PlayMode;
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMGSequencePlayer*                          Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidgetAnimation*                            InAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartAtTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumLoopsToPlay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUMGSequencePlayMode                               PlayMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject");
		
		struct
		{
			class UUMGSequencePlayer*                          Result;
			class UUserWidget*                                 Widget;
			class UWidgetAnimation*                            InAnimation;
			float                                              StartAtTime;
			int32_t                                            NumLoopsToPlay;
			EUMGSequencePlayMode                               PlayMode;
			float                                              PlaybackSpeed;
		} params;
		params.Widget = Widget;
		params.InAnimation = InAnimation;
		params.StartAtTime = StartAtTime;
		params.NumLoopsToPlay = NumLoopsToPlay;
		params.PlayMode = PlayMode;
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWidgetAnimationPlayCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidgetAnimationPlayCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetAnimationPlayCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBinding.GetValue
	 * 		Flags  -> ()
	 */
	class UWidget* UWidgetBinding::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBinding.GetValue");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWidgetBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidgetBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWidgetBlueprintGeneratedClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidgetBlueprintGeneratedClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.UnlockMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::UnlockMouse(struct FEventReply* Reply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.UnlockMouse");
		
		struct
		{
			struct FEventReply                                 Reply;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.Unhandled
	 * 		Flags  -> ()
	 */
	struct FEventReply UWidgetBlueprintLibrary::Unhandled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Unhandled");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     TitleBarContent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWindowTitleBarMode                                Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTitleBarDragEnabled                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWindowButtonsVisible                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTitleBarVisible                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetBlueprintLibrary::SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState");
		
		struct
		{
			class UWidget*                                     TitleBarContent;
			EWindowTitleBarMode                                Mode;
			bool                                               bTitleBarDragEnabled;
			bool                                               bWindowButtonsVisible;
			bool                                               bTitleBarVisible;
		} params;
		params.TitleBarContent = TitleBarContent;
		params.Mode = Mode;
		params.bTitleBarDragEnabled = bTitleBarDragEnabled;
		params.bWindowButtonsVisible = bWindowButtonsVisible;
		params.bTitleBarVisible = bTitleBarVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWidgetBlueprintLibrary::SetWindowTitleBarOnCloseClickedDelegate(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate");
		
		struct
		{
			class FScriptDelegate                              Delegate;
		} params;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive");
		
		struct
		{
			bool                                               bActive;
		} params;
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetUserFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     FocusWidget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInAllUsers                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::SetUserFocus(struct FEventReply* Reply, class UWidget* FocusWidget, bool bInAllUsers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetUserFocus");
		
		struct
		{
			struct FEventReply                                 Reply;
			class UWidget*                                     FocusWidget;
			bool                                               bInAllUsers;
		} params;
		params.FocusWidget = FocusWidget;
		params.bInAllUsers = bInAllUsers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetMousePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   NewMousePosition                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::SetMousePosition(struct FEventReply* Reply, const struct FVector2D& NewMousePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetMousePosition");
		
		struct
		{
			struct FEventReply                                 Reply;
			struct FVector2D                                   NewMousePosition;
		} params;
		params.NewMousePosition = NewMousePosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     InWidgetToFocus                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMouseLockMode                                     InMouseLockMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx");
		
		struct
		{
			class APlayerController*                           PlayerController;
			class UWidget*                                     InWidgetToFocus;
			EMouseLockMode                                     InMouseLockMode;
		} params;
		params.PlayerController = PlayerController;
		params.InWidgetToFocus = InWidgetToFocus;
		params.InMouseLockMode = InMouseLockMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     InWidgetToFocus                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLockMouseToViewport                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetBlueprintLibrary::SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly");
		
		struct
		{
			class APlayerController*                           Target;
			class UWidget*                                     InWidgetToFocus;
			bool                                               bLockMouseToViewport;
		} params;
		params.Target = Target;
		params.InWidgetToFocus = InWidgetToFocus;
		params.bLockMouseToViewport = bLockMouseToViewport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetBlueprintLibrary::SetInputMode_GameOnly(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly");
		
		struct
		{
			class APlayerController*                           PlayerController;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     InWidgetToFocus                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMouseLockMode                                     InMouseLockMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideCursorDuringCapture                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx");
		
		struct
		{
			class APlayerController*                           PlayerController;
			class UWidget*                                     InWidgetToFocus;
			EMouseLockMode                                     InMouseLockMode;
			bool                                               bHideCursorDuringCapture;
		} params;
		params.PlayerController = PlayerController;
		params.InWidgetToFocus = InWidgetToFocus;
		params.InMouseLockMode = InMouseLockMode;
		params.bHideCursorDuringCapture = bHideCursorDuringCapture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     InWidgetToFocus                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLockMouseToViewport                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideCursorDuringCapture                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetBlueprintLibrary::SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI");
		
		struct
		{
			class APlayerController*                           Target;
			class UWidget*                                     InWidgetToFocus;
			bool                                               bLockMouseToViewport;
			bool                                               bHideCursorDuringCapture;
		} params;
		params.Target = Target;
		params.InWidgetToFocus = InWidgetToFocus;
		params.bLockMouseToViewport = bLockMouseToViewport;
		params.bHideCursorDuringCapture = bHideCursorDuringCapture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMouseCursor                                       CursorShape                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        CursorName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   HotSpot                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetBlueprintLibrary::SetHardwareCursor(class UObject* WorldContextObject, EMouseCursor CursorShape, const class FName& CursorName, const struct FVector2D& HotSpot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetHardwareCursor");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			EMouseCursor                                       CursorShape;
			class FName                                        CursorName;
			struct FVector2D                                   HotSpot;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.CursorShape = CursorShape;
		params.CursorName = CursorName;
		params.HotSpot = HotSpot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
	 * 		Flags  -> ()
	 */
	void UWidgetBlueprintLibrary::SetFocusToGameViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EColorVisionDeficiency                             Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Severity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CorrectDeficiency                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ShowCorrectionWithDeficiency                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetBlueprintLibrary::SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType");
		
		struct
		{
			EColorVisionDeficiency                             Type;
			float                                              Severity;
			bool                                               CorrectDeficiency;
			bool                                               ShowCorrectionWithDeficiency;
		} params;
		params.Type = Type;
		params.Severity = Severity;
		params.CorrectDeficiency = CorrectDeficiency;
		params.ShowCorrectionWithDeficiency = ShowCorrectionWithDeficiency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetBlueprintLibrary::SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture");
		
		struct
		{
			struct FSlateBrush                                 Brush;
			class UTexture2D*                                  Texture;
		} params;
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetBlueprintLibrary::SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial");
		
		struct
		{
			struct FSlateBrush                                 Brush;
			class UMaterialInterface*                          Material;
		} params;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
	 * 		Flags  -> ()
	 */
	void UWidgetBlueprintLibrary::RestorePreviousWindowTitleBarState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::ReleaseMouseCapture(struct FEventReply* Reply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture");
		
		struct
		{
			struct FEventReply                                 Reply;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bInAllJoysticks                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture");
		
		struct
		{
			struct FEventReply                                 Reply;
			bool                                               bInAllJoysticks;
		} params;
		params.bInAllJoysticks = bInAllJoysticks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWidgetBlueprintLibrary::OnGameWindowCloseButtonClickedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.NoResourceBrush
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UWidgetBlueprintLibrary::NoResourceBrush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.NoResourceBrush");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromTexture(class UTexture2D* Texture, int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture");
		
		struct
		{
			class UTexture2D*                                  Texture;
			int32_t                                            Width;
			int32_t                                            Height;
		} params;
		params.Texture = Texture;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromMaterial(class UMaterialInterface* Material, int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial");
		
		struct
		{
			class UMaterialInterface*                          Material;
			int32_t                                            Width;
			int32_t                                            Height;
		} params;
		params.Material = Material;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USlateBrushAsset*                            BrushAsset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromAsset(class USlateBrushAsset* BrushAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset");
		
		struct
		{
			class USlateBrushAsset*                            BrushAsset;
		} params;
		params.BrushAsset = BrushAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.LockMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     CapturingWidget                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::LockMouse(struct FEventReply* Reply, class UWidget* CapturingWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.LockMouse");
		
		struct
		{
			struct FEventReply                                 Reply;
			class UWidget*                                     CapturingWidget;
		} params;
		params.CapturingWidget = CapturingWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.IsDragDropping
	 * 		Flags  -> ()
	 */
	bool UWidgetBlueprintLibrary::IsDragDropping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.IsDragDropping");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.Handled
	 * 		Flags  -> ()
	 */
	struct FEventReply UWidgetBlueprintLibrary::Handled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Handled");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    SafePadding                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   SafePaddingScale                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    SpillOverPadding                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetBlueprintLibrary::GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector4                                    SafePadding;
			struct FVector2D                                   SafePaddingScale;
			struct FVector4                                    SpillOverPadding;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SafePadding != nullptr)
			*SafePadding = params.SafePadding;
		if (SafePaddingScale != nullptr)
			*SafePaddingScale = params.SafePaddingScale;
		if (SpillOverPadding != nullptr)
			*SpillOverPadding = params.SpillOverPadding;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAnalogInputEvent                           Event                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FKeyEvent UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent");
		
		struct
		{
			struct FAnalogInputEvent                           Event;
		} params;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               Event                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(const struct FPointerEvent& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent");
		
		struct
		{
			struct FPointerEvent                               Event;
		} params;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNavigationEvent                            Event                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent");
		
		struct
		{
			struct FNavigationEvent                            Event;
		} params;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   Event                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(const struct FKeyEvent& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent");
		
		struct
		{
			struct FKeyEvent                                   Event;
		} params;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterEvent                             Event                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent");
		
		struct
		{
			struct FCharacterEvent                             Event;
		} params;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UMaterialInstanceDynamic* UWidgetBlueprintLibrary::GetDynamicMaterial(struct FSlateBrush* Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial");
		
		struct
		{
			struct FSlateBrush                                 Brush;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
	 * 		Flags  -> ()
	 */
	class UDragDropOperation* UWidgetBlueprintLibrary::GetDragDroppingContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D");
		
		struct
		{
			struct FSlateBrush                                 Brush;
		} params;
		params.Brush = Brush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UMaterialInterface* UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(const struct FSlateBrush& Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial");
		
		struct
		{
			struct FSlateBrush                                 Brush;
		} params;
		params.Brush = Brush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetBrushResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UObject* UWidgetBlueprintLibrary::GetBrushResource(const struct FSlateBrush& Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResource");
		
		struct
		{
			struct FSlateBrush                                 Brush;
		} params;
		params.Brush = Brush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UUserWidget*>                         FoundWidgets                                               (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Interface                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TopLevelOnly                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* Interface, bool TopLevelOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<class UUserWidget*>                         FoundWidgets;
			class UClass*                                      Interface;
			bool                                               TopLevelOnly;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Interface = Interface;
		params.TopLevelOnly = TopLevelOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundWidgets != nullptr)
			*FoundWidgets = params.FoundWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UUserWidget*>                         FoundWidgets                                               (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TopLevelOnly                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetBlueprintLibrary::GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<class UUserWidget*>                         FoundWidgets;
			class UClass*                                      WidgetClass;
			bool                                               TopLevelOnly;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.WidgetClass = WidgetClass;
		params.TopLevelOnly = TopLevelOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundWidgets != nullptr)
			*FoundWidgets = params.FoundWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.EndDragDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::EndDragDrop(struct FEventReply* Reply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.EndDragDrop");
		
		struct
		{
			struct FEventReply                                 Reply;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFont*                                       Font                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FontSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FontTypeFace                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetBlueprintLibrary::DrawTextFormatted(struct FPaintContext* Context, const class FText& Text, const struct FVector2D& Position, class UFont* Font, int32_t FontSize, const class FName& FontTypeFace, const struct FLinearColor& Tint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawTextFormatted");
		
		struct
		{
			struct FPaintContext                               Context;
			class FText                                        Text;
			struct FVector2D                                   Position;
			class UFont*                                       Font;
			int32_t                                            FontSize;
			class FName                                        FontTypeFace;
			struct FLinearColor                                Tint;
		} params;
		params.Text = Text;
		params.Position = Position;
		params.Font = Font;
		params.FontSize = FontSize;
		params.FontTypeFace = FontTypeFace;
		params.Tint = Tint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.DrawText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetBlueprintLibrary::DrawText(struct FPaintContext* Context, const class FString& inString, const struct FVector2D& Position, const struct FLinearColor& Tint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawText");
		
		struct
		{
			struct FPaintContext                               Context;
			class FString                                      inString;
			struct FVector2D                                   Position;
			struct FLinearColor                                Tint;
		} params;
		params.inString = inString;
		params.Position = Position;
		params.Tint = Tint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.DrawLines
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           Points                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAntiAlias                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetBlueprintLibrary::DrawLines(struct FPaintContext* Context, TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawLines");
		
		struct
		{
			struct FPaintContext                               Context;
			TArray<struct FVector2D>                           Points;
			struct FLinearColor                                Tint;
			bool                                               bAntiAlias;
			float                                              Thickness;
		} params;
		params.Points = Points;
		params.Tint = Tint;
		params.bAntiAlias = bAntiAlias;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.DrawLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   PositionA                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   PositionB                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAntiAlias                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetBlueprintLibrary::DrawLine(struct FPaintContext* Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawLine");
		
		struct
		{
			struct FPaintContext                               Context;
			struct FVector2D                                   PositionA;
			struct FVector2D                                   PositionB;
			struct FLinearColor                                Tint;
			bool                                               bAntiAlias;
			float                                              Thickness;
		} params;
		params.PositionA = PositionA;
		params.PositionB = PositionB;
		params.Tint = Tint;
		params.bAntiAlias = bAntiAlias;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.DrawBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USlateBrushAsset*                            Brush                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetBlueprintLibrary::DrawBox(struct FPaintContext* Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawBox");
		
		struct
		{
			struct FPaintContext                               Context;
			struct FVector2D                                   Position;
			struct FVector2D                                   Size;
			class USlateBrushAsset*                            Brush;
			struct FLinearColor                                Tint;
		} params;
		params.Position = Position;
		params.Size = Size;
		params.Brush = Brush;
		params.Tint = Tint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.DismissAllMenus
	 * 		Flags  -> ()
	 */
	void UWidgetBlueprintLibrary::DismissAllMenus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DismissAllMenus");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     WidgetDetectingDrag                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        DragKey                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed");
		
		struct
		{
			struct FPointerEvent                               PointerEvent;
			class UWidget*                                     WidgetDetectingDrag;
			struct FKey                                        DragKey;
		} params;
		params.PointerEvent = PointerEvent;
		params.WidgetDetectingDrag = WidgetDetectingDrag;
		params.DragKey = DragKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.DetectDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     WidgetDetectingDrag                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        DragKey                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::DetectDrag(struct FEventReply* Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DetectDrag");
		
		struct
		{
			struct FEventReply                                 Reply;
			class UWidget*                                     WidgetDetectingDrag;
			struct FKey                                        DragKey;
		} params;
		params.WidgetDetectingDrag = WidgetDetectingDrag;
		params.DragKey = DragKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      OperationClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDragDropOperation* UWidgetBlueprintLibrary::CreateDragDropOperation(class UClass* OperationClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation");
		
		struct
		{
			class UClass*                                      OperationClass;
		} params;
		params.OperationClass = OperationClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.Create
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      WidgetType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* UWidgetBlueprintLibrary::Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Create");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UClass*                                      WidgetType;
			class APlayerController*                           OwningPlayer;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.WidgetType = WidgetType;
		params.OwningPlayer = OwningPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.ClearUserFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bInAllUsers                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::ClearUserFocus(struct FEventReply* Reply, bool bInAllUsers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ClearUserFocus");
		
		struct
		{
			struct FEventReply                                 Reply;
			bool                                               bInAllUsers;
		} params;
		params.bInAllUsers = bInAllUsers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.CaptureMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     CapturingWidget                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::CaptureMouse(struct FEventReply* Reply, class UWidget* CapturingWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CaptureMouse");
		
		struct
		{
			struct FEventReply                                 Reply;
			class UWidget*                                     CapturingWidget;
		} params;
		params.CapturingWidget = CapturingWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.CaptureJoystick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     CapturingWidget                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInAllJoysticks                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UWidgetBlueprintLibrary::CaptureJoystick(struct FEventReply* Reply, class UWidget* CapturingWidget, bool bInAllJoysticks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CaptureJoystick");
		
		struct
		{
			struct FEventReply                                 Reply;
			class UWidget*                                     CapturingWidget;
			bool                                               bInAllJoysticks;
		} params;
		params.CapturingWidget = CapturingWidget;
		params.bInAllJoysticks = bInAllJoysticks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.CancelDragDrop
	 * 		Flags  -> ()
	 */
	void UWidgetBlueprintLibrary::CancelDragDrop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CancelDragDrop");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWidgetBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidgetBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetWindowVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWindowVisibility                                  InVisibility                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetComponent::SetWindowVisibility(EWindowVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWindowVisibility");
		
		struct
		{
			EWindowVisibility                                  InVisibility;
		} params;
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetWindowFocusable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInWindowFocusable                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetComponent::SetWindowFocusable(bool bInWindowFocusable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWindowFocusable");
		
		struct
		{
			bool                                               bInWindowFocusable;
		} params;
		params.bInWindowFocusable = bInWindowFocusable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetWidgetSpace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWidgetSpace                                       NewSpace                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetComponent::SetWidgetSpace(EWidgetSpace NewSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWidgetSpace");
		
		struct
		{
			EWidgetSpace                                       NewSpace;
		} params;
		params.NewSpace = NewSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetComponent::SetWidget(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWidget");
		
		struct
		{
			class UUserWidget*                                 Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetTwoSided
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWantTwoSided                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetComponent::SetTwoSided(bool bWantTwoSided)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTwoSided");
		
		struct
		{
			bool                                               bWantTwoSided;
		} params;
		params.bWantTwoSided = bWantTwoSided;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetTintColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NewTintColorAndOpacity                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetComponent::SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTintColorAndOpacity");
		
		struct
		{
			struct FLinearColor                                NewTintColorAndOpacity;
		} params;
		params.NewTintColorAndOpacity = NewTintColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetTickWhenOffscreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWantTickWhenOffscreen                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetComponent::SetTickWhenOffscreen(bool bWantTickWhenOffscreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTickWhenOffscreen");
		
		struct
		{
			bool                                               bWantTickWhenOffscreen;
		} params;
		params.bWantTickWhenOffscreen = bWantTickWhenOffscreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetTickMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETickMode                                          InTickMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetComponent::SetTickMode(ETickMode InTickMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTickMode");
		
		struct
		{
			ETickMode                                          InTickMode;
		} params;
		params.InTickMode = InTickMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetRedrawTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InRedrawTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetComponent::SetRedrawTime(float InRedrawTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetRedrawTime");
		
		struct
		{
			float                                              InRedrawTime;
		} params;
		params.InRedrawTime = InRedrawTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetPivot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InPivot                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetComponent::SetPivot(const struct FVector2D& InPivot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetPivot");
		
		struct
		{
			struct FVector2D                                   InPivot;
		} params;
		params.InPivot = InPivot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetOwnerPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULocalPlayer*                                LocalPlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetComponent::SetOwnerPlayer(class ULocalPlayer* LocalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetOwnerPlayer");
		
		struct
		{
			class ULocalPlayer*                                LocalPlayer;
		} params;
		params.LocalPlayer = LocalPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetManuallyRedraw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseManualRedraw                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetComponent::SetManuallyRedraw(bool bUseManualRedraw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetManuallyRedraw");
		
		struct
		{
			bool                                               bUseManualRedraw;
		} params;
		params.bUseManualRedraw = bUseManualRedraw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetGeometryMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWidgetGeometryMode                                InGeometryMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetComponent::SetGeometryMode(EWidgetGeometryMode InGeometryMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetGeometryMode");
		
		struct
		{
			EWidgetGeometryMode                                InGeometryMode;
		} params;
		params.InGeometryMode = InGeometryMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetDrawSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetComponent::SetDrawSize(const struct FVector2D& Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetDrawSize");
		
		struct
		{
			struct FVector2D                                   Size;
		} params;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetDrawAtDesiredSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInDrawAtDesiredSize                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetComponent::SetDrawAtDesiredSize(bool bInDrawAtDesiredSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetDrawAtDesiredSize");
		
		struct
		{
			bool                                               bInDrawAtDesiredSize;
		} params;
		params.bInDrawAtDesiredSize = bInDrawAtDesiredSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetCylinderArcAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InCylinderArcAngle                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetComponent::SetCylinderArcAngle(float InCylinderArcAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetCylinderArcAngle");
		
		struct
		{
			float                                              InCylinderArcAngle;
		} params;
		params.InCylinderArcAngle = InCylinderArcAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.SetBackgroundColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NewBackgroundColor                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetComponent::SetBackgroundColor(const struct FLinearColor& NewBackgroundColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetBackgroundColor");
		
		struct
		{
			struct FLinearColor                                NewBackgroundColor;
		} params;
		params.NewBackgroundColor = NewBackgroundColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.RequestRedraw
	 * 		Flags  -> ()
	 */
	void UWidgetComponent::RequestRedraw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.RequestRedraw");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.IsWidgetVisible
	 * 		Flags  -> ()
	 */
	bool UWidgetComponent::IsWidgetVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.IsWidgetVisible");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetWindowVisiblility
	 * 		Flags  -> ()
	 */
	EWindowVisibility UWidgetComponent::GetWindowVisiblility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWindowVisiblility");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetWindowFocusable
	 * 		Flags  -> ()
	 */
	bool UWidgetComponent::GetWindowFocusable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWindowFocusable");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetWidgetSpace
	 * 		Flags  -> ()
	 */
	EWidgetSpace UWidgetComponent::GetWidgetSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWidgetSpace");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetWidget
	 * 		Flags  -> ()
	 */
	class UUserWidget* UWidgetComponent::GetWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWidget");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetUserWidgetObject
	 * 		Flags  -> ()
	 */
	class UUserWidget* UWidgetComponent::GetUserWidgetObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetUserWidgetObject");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetTwoSided
	 * 		Flags  -> ()
	 */
	bool UWidgetComponent::GetTwoSided()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetTwoSided");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetTickWhenOffscreen
	 * 		Flags  -> ()
	 */
	bool UWidgetComponent::GetTickWhenOffscreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetTickWhenOffscreen");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetRenderTarget
	 * 		Flags  -> ()
	 */
	class UTextureRenderTarget2D* UWidgetComponent::GetRenderTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetRenderTarget");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetRedrawTime
	 * 		Flags  -> ()
	 */
	float UWidgetComponent::GetRedrawTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetRedrawTime");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetPivot
	 * 		Flags  -> ()
	 */
	struct FVector2D UWidgetComponent::GetPivot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetPivot");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetOwnerPlayer
	 * 		Flags  -> ()
	 */
	class ULocalPlayer* UWidgetComponent::GetOwnerPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetOwnerPlayer");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetMaterialInstance
	 * 		Flags  -> ()
	 */
	class UMaterialInstanceDynamic* UWidgetComponent::GetMaterialInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetMaterialInstance");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetManuallyRedraw
	 * 		Flags  -> ()
	 */
	bool UWidgetComponent::GetManuallyRedraw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetManuallyRedraw");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetGeometryMode
	 * 		Flags  -> ()
	 */
	EWidgetGeometryMode UWidgetComponent::GetGeometryMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetGeometryMode");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetDrawSize
	 * 		Flags  -> ()
	 */
	struct FVector2D UWidgetComponent::GetDrawSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetDrawSize");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetDrawAtDesiredSize
	 * 		Flags  -> ()
	 */
	bool UWidgetComponent::GetDrawAtDesiredSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetDrawAtDesiredSize");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetCylinderArcAngle
	 * 		Flags  -> ()
	 */
	float UWidgetComponent::GetCylinderArcAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetCylinderArcAngle");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetComponent.GetCurrentDrawSize
	 * 		Flags  -> ()
	 */
	struct FVector2D UWidgetComponent::GetCurrentDrawSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetCurrentDrawSize");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWidgetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidgetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.SetFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     FocusWidget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetInteractionComponent::SetFocus(class UWidget* FocusWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SetFocus");
		
		struct
		{
			class UWidget*                                     FocusWidget;
		} params;
		params.FocusWidget = FocusWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.SetCustomHitResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UWidgetInteractionComponent::SetCustomHitResult(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SetCustomHitResult");
		
		struct
		{
			struct FHitResult                                  HitResult;
		} params;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.SendKeyChar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Characters                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRepeat                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetInteractionComponent::SendKeyChar(const class FString& Characters, bool bRepeat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SendKeyChar");
		
		struct
		{
			class FString                                      Characters;
			bool                                               bRepeat;
		} params;
		params.Characters = Characters;
		params.bRepeat = bRepeat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.ScrollWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ScrollDelta                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetInteractionComponent::ScrollWheel(float ScrollDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ScrollWheel");
		
		struct
		{
			float                                              ScrollDelta;
		} params;
		params.ScrollDelta = ScrollDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.ReleasePointerKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetInteractionComponent::ReleasePointerKey(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ReleasePointerKey");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.ReleaseKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetInteractionComponent::ReleaseKey(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ReleaseKey");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.PressPointerKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetInteractionComponent::PressPointerKey(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressPointerKey");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.PressKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRepeat                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetInteractionComponent::PressKey(const struct FKey& Key, bool bRepeat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressKey");
		
		struct
		{
			struct FKey                                        Key;
			bool                                               bRepeat;
		} params;
		params.Key = Key;
		params.bRepeat = bRepeat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.PressAndReleaseKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetInteractionComponent::PressAndReleaseKey(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressAndReleaseKey");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
	 * 		Flags  -> ()
	 */
	bool UWidgetInteractionComponent::IsOverInteractableWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverInteractableWidget");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
	 * 		Flags  -> ()
	 */
	bool UWidgetInteractionComponent::IsOverHitTestVisibleWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
	 * 		Flags  -> ()
	 */
	bool UWidgetInteractionComponent::IsOverFocusableWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverFocusableWidget");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.GetLastHitResult
	 * 		Flags  -> ()
	 */
	struct FHitResult UWidgetInteractionComponent::GetLastHitResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.GetLastHitResult");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
	 * 		Flags  -> ()
	 */
	class UWidgetComponent* UWidgetInteractionComponent::GetHoveredWidgetComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetInteractionComponent.Get2DHitLocation
	 * 		Flags  -> ()
	 */
	struct FVector2D UWidgetInteractionComponent::Get2DHitLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.Get2DHitLocation");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWidgetInteractionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidgetInteractionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetInteractionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWrapBoxSlot* UWidgetLayoutLibrary::SlotAsWrapBoxSlot(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot");
		
		struct
		{
			class UWidget*                                     Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidgetSwitcherSlot* UWidgetLayoutLibrary::SlotAsWidgetSwitcherSlot(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot");
		
		struct
		{
			class UWidget*                                     Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVerticalBoxSlot* UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot");
		
		struct
		{
			class UWidget*                                     Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUniformGridSlot* UWidgetLayoutLibrary::SlotAsUniformGridSlot(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot");
		
		struct
		{
			class UWidget*                                     Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USizeBoxSlot* UWidgetLayoutLibrary::SlotAsSizeBoxSlot(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot");
		
		struct
		{
			class UWidget*                                     Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UScrollBoxSlot* UWidgetLayoutLibrary::SlotAsScrollBoxSlot(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot");
		
		struct
		{
			class UWidget*                                     Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UScaleBoxSlot* UWidgetLayoutLibrary::SlotAsScaleBoxSlot(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot");
		
		struct
		{
			class UWidget*                                     Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USafeZoneSlot* UWidgetLayoutLibrary::SlotAsSafeBoxSlot(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot");
		
		struct
		{
			class UWidget*                                     Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOverlaySlot* UWidgetLayoutLibrary::SlotAsOverlaySlot(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot");
		
		struct
		{
			class UWidget*                                     Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UHorizontalBoxSlot* UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot");
		
		struct
		{
			class UWidget*                                     Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGridSlot* UWidgetLayoutLibrary::SlotAsGridSlot(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsGridSlot");
		
		struct
		{
			class UWidget*                                     Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCanvasPanelSlot* UWidgetLayoutLibrary::SlotAsCanvasSlot(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot");
		
		struct
		{
			class UWidget*                                     Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UBorderSlot* UWidgetLayoutLibrary::SlotAsBorderSlot(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot");
		
		struct
		{
			class UWidget*                                     Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetLayoutLibrary::RemoveAllWidgets(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.RemoveAllWidgets");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   ScreenPosition                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPlayerViewportRelative                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition");
		
		struct
		{
			class APlayerController*                           PlayerController;
			struct FVector                                     WorldLocation;
			struct FVector2D                                   ScreenPosition;
			bool                                               bPlayerViewportRelative;
		} params;
		params.PlayerController = PlayerController;
		params.WorldLocation = WorldLocation;
		params.bPlayerViewportRelative = bPlayerViewportRelative;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScreenPosition != nullptr)
			*ScreenPosition = params.ScreenPosition;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGeometry UWidgetLayoutLibrary::GetViewportWidgetGeometry(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.GetViewportSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UWidgetLayoutLibrary::GetViewportSize(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportSize");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.GetViewportScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UWidgetLayoutLibrary::GetViewportScale(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportScale");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGeometry UWidgetLayoutLibrary::GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry");
		
		struct
		{
			class APlayerController*                           PlayerController;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LocationX                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LocationY                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWidgetLayoutLibrary::GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI");
		
		struct
		{
			class APlayerController*                           Player;
			float                                              LocationX;
			float                                              LocationY;
		} params;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocationX != nullptr)
			*LocationX = params.LocationX;
		if (LocationY != nullptr)
			*LocationY = params.LocationY;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnViewport(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
	 * 		Flags  -> ()
	 */
	struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWidgetLayoutLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidgetLayoutLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWidgetNavigation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidgetNavigation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetNavigation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetSwitcher.SetActiveWidgetIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetSwitcher::SetActiveWidgetIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidgetIndex");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetSwitcher.SetActiveWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetSwitcher::SetActiveWidget(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidget");
		
		struct
		{
			class UWidget*                                     Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetSwitcher.GetWidgetAtIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidget* UWidgetSwitcher::GetWidgetAtIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetWidgetAtIndex");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetSwitcher.GetNumWidgets
	 * 		Flags  -> ()
	 */
	int32_t UWidgetSwitcher::GetNumWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetNumWidgets");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetSwitcher.GetActiveWidgetIndex
	 * 		Flags  -> ()
	 */
	int32_t UWidgetSwitcher::GetActiveWidgetIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetActiveWidgetIndex");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetSwitcher.GetActiveWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UWidgetSwitcher::GetActiveWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetActiveWidget");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWidgetSwitcher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidgetSwitcher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetSwitcher");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetSwitcherSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetVerticalAlignment");
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetSwitcherSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWidgetSwitcherSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetPadding");
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWidgetSwitcherSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment");
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWidgetSwitcherSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidgetSwitcherSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetSwitcherSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWidgetTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidgetTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WindowTitleBarArea.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWindowTitleBarArea::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetVerticalAlignment");
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WindowTitleBarArea.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWindowTitleBarArea::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetPadding");
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WindowTitleBarArea.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWindowTitleBarArea::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetHorizontalAlignment");
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWindowTitleBarArea.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWindowTitleBarArea::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WindowTitleBarArea");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWindowTitleBarAreaSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment");
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WindowTitleBarAreaSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWindowTitleBarAreaSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetPadding");
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWindowTitleBarAreaSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment");
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWindowTitleBarAreaSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWindowTitleBarAreaSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WindowTitleBarAreaSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WrapBox.SetInnerSlotPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWrapBox::SetInnerSlotPadding(const struct FVector2D& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WrapBox.SetInnerSlotPadding");
		
		struct
		{
			struct FVector2D                                   InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WrapBox.AddChildToWrapBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWrapBoxSlot* UWrapBox::AddChildToWrapBox(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WrapBox.AddChildToWrapBox");
		
		struct
		{
			class UWidget*                                     Content;
		} params;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWrapBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWrapBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WrapBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WrapBoxSlot.SetVerticalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWrapBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetVerticalAlignment");
		
		struct
		{
			EVerticalAlignment                                 InVerticalAlignment;
		} params;
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WrapBoxSlot.SetPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWrapBoxSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetPadding");
		
		struct
		{
			struct FMargin                                     InPadding;
		} params;
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WrapBoxSlot.SetHorizontalAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWrapBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetHorizontalAlignment");
		
		struct
		{
			EHorizontalAlignment                               InHorizontalAlignment;
		} params;
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFillSpanWhenLessThan                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan");
		
		struct
		{
			float                                              InFillSpanWhenLessThan;
		} params;
		params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG.WrapBoxSlot.SetFillEmptySpace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InbFillEmptySpace                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillEmptySpace");
		
		struct
		{
			bool                                               InbFillEmptySpace;
		} params;
		params.InbFillEmptySpace = InbFillEmptySpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWrapBoxSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWrapBoxSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UMG.WrapBoxSlot");
		return ptr;
	}

}


