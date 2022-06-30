/**
 * Name: Hydroneer
 * Version: 2.0
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
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.GetSteamID
	 * 		Flags  -> ()
	 */
	void UUI_CustomizationMenu_C::GetSteamID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.GetSteamID");
		
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
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.SetDummyVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizationMenu_C::SetDummyVisibility(ESlateVisibility Visibility)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.SetDummyVisibility");
		
		struct
		{
			ESlateVisibility                                   Visibility;
		} params;
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.SpawnDummy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizationMenu_C::SpawnDummy(class UTextureRenderTarget2D* RenderTarget)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.SpawnDummy");
		
		struct
		{
			class UTextureRenderTarget2D*                      RenderTarget;
		} params;
		params.RenderTarget = RenderTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.SetDisplayName
	 * 		Flags  -> ()
	 */
	void UUI_CustomizationMenu_C::SetDisplayName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.SetDisplayName");
		
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
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.OpenMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SessionID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizationMenu_C::OpenMenu(class APlayerController* PlayerController, int32_t SessionID, class UTextureRenderTarget2D* RenderTarget)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.OpenMenu");
		
		struct
		{
			class APlayerController*                           PlayerController;
			int32_t                                            SessionID;
			class UTextureRenderTarget2D*                      RenderTarget;
		} params;
		params.PlayerController = PlayerController;
		params.SessionID = SessionID;
		params.RenderTarget = RenderTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.UpdateTargetCharacterStyle
	 * 		Flags  -> ()
	 */
	void UUI_CustomizationMenu_C::UpdateTargetCharacterStyle()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.UpdateTargetCharacterStyle");
		
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
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.InitDefaultStyleOptions
	 * 		Flags  -> ()
	 */
	void UUI_CustomizationMenu_C::InitDefaultStyleOptions()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.InitDefaultStyleOptions");
		
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
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.Finished_DDC461F0456D8CA100CA1FA61D25A4F0
	 * 		Flags  -> ()
	 */
	void UUI_CustomizationMenu_C::Finished_DDC461F0456D8CA100CA1FA61D25A4F0()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.Finished_DDC461F0456D8CA100CA1FA61D25A4F0");
		
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
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Face_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomizationMenu_C::BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Face_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Face_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
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
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Hair_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomizationMenu_C::BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Hair_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Hair_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");
		
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
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Shirt_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomizationMenu_C::BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Shirt_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Shirt_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature");
		
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
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Pants_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomizationMenu_C::BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Pants_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Pants_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature");
		
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
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Hair_K2Node_ComponentBoundEvent_5_OnUpdateStyle__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StyleIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizationMenu_C::BndEvt__UI_CustomizationMenu_UI_StylePanel_Hair_K2Node_ComponentBoundEvent_5_OnUpdateStyle__DelegateSignature(int32_t StyleIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Hair_K2Node_ComponentBoundEvent_5_OnUpdateStyle__DelegateSignature");
		
		struct
		{
			int32_t                                            StyleIndex;
		} params;
		params.StyleIndex = StyleIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Face_K2Node_ComponentBoundEvent_6_OnUpdateStyle__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StyleIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizationMenu_C::BndEvt__UI_CustomizationMenu_UI_StylePanel_Face_K2Node_ComponentBoundEvent_6_OnUpdateStyle__DelegateSignature(int32_t StyleIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Face_K2Node_ComponentBoundEvent_6_OnUpdateStyle__DelegateSignature");
		
		struct
		{
			int32_t                                            StyleIndex;
		} params;
		params.StyleIndex = StyleIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_FacialHair_K2Node_ComponentBoundEvent_7_OnUpdateStyle__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StyleIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizationMenu_C::BndEvt__UI_CustomizationMenu_UI_StylePanel_FacialHair_K2Node_ComponentBoundEvent_7_OnUpdateStyle__DelegateSignature(int32_t StyleIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_FacialHair_K2Node_ComponentBoundEvent_7_OnUpdateStyle__DelegateSignature");
		
		struct
		{
			int32_t                                            StyleIndex;
		} params;
		params.StyleIndex = StyleIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Shirt_K2Node_ComponentBoundEvent_8_OnUpdateStyle__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StyleIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizationMenu_C::BndEvt__UI_CustomizationMenu_UI_StylePanel_Shirt_K2Node_ComponentBoundEvent_8_OnUpdateStyle__DelegateSignature(int32_t StyleIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Shirt_K2Node_ComponentBoundEvent_8_OnUpdateStyle__DelegateSignature");
		
		struct
		{
			int32_t                                            StyleIndex;
		} params;
		params.StyleIndex = StyleIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Pants_K2Node_ComponentBoundEvent_9_OnUpdateStyle__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StyleIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizationMenu_C::BndEvt__UI_CustomizationMenu_UI_StylePanel_Pants_K2Node_ComponentBoundEvent_9_OnUpdateStyle__DelegateSignature(int32_t StyleIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Pants_K2Node_ComponentBoundEvent_9_OnUpdateStyle__DelegateSignature");
		
		struct
		{
			int32_t                                            StyleIndex;
		} params;
		params.StyleIndex = StyleIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_C_143_K2Node_ComponentBoundEvent_10_OnUpdate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ColorID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizationMenu_C::BndEvt__UI_CustomizationMenu_UI_SwatchPanel_C_143_K2Node_ComponentBoundEvent_10_OnUpdate__DelegateSignature(const class FName& ColorID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_C_143_K2Node_ComponentBoundEvent_10_OnUpdate__DelegateSignature");
		
		struct
		{
			class FName                                        ColorID;
		} params;
		params.ColorID = ColorID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_HairColor_K2Node_ComponentBoundEvent_11_OnUpdate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ColorID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizationMenu_C::BndEvt__UI_CustomizationMenu_UI_SwatchPanel_HairColor_K2Node_ComponentBoundEvent_11_OnUpdate__DelegateSignature(const class FName& ColorID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_HairColor_K2Node_ComponentBoundEvent_11_OnUpdate__DelegateSignature");
		
		struct
		{
			class FName                                        ColorID;
		} params;
		params.ColorID = ColorID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_ShirtColor_K2Node_ComponentBoundEvent_12_OnUpdate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ColorID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizationMenu_C::BndEvt__UI_CustomizationMenu_UI_SwatchPanel_ShirtColor_K2Node_ComponentBoundEvent_12_OnUpdate__DelegateSignature(const class FName& ColorID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_ShirtColor_K2Node_ComponentBoundEvent_12_OnUpdate__DelegateSignature");
		
		struct
		{
			class FName                                        ColorID;
		} params;
		params.ColorID = ColorID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_PantsColor_K2Node_ComponentBoundEvent_16_OnUpdate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ColorID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizationMenu_C::BndEvt__UI_CustomizationMenu_UI_SwatchPanel_PantsColor_K2Node_ComponentBoundEvent_16_OnUpdate__DelegateSignature(const class FName& ColorID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_PantsColor_K2Node_ComponentBoundEvent_16_OnUpdate__DelegateSignature");
		
		struct
		{
			class FName                                        ColorID;
		} params;
		params.ColorID = ColorID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_CustomizationMenu_C::Destruct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.Destruct");
		
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
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.CloseMenu
	 * 		Flags  -> ()
	 */
	void UUI_CustomizationMenu_C::CloseMenu()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.CloseMenu");
		
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
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_CustomizationMenu_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.Construct");
		
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
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.VisibilityChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizationMenu_C::VisibilityChanged(ESlateVisibility InVisibility)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.VisibilityChanged");
		
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
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_HSlider_C_274_K2Node_ComponentBoundEvent_13_OnMouseCaptureEndEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomizationMenu_C::BndEvt__UI_CustomizationMenu_HSlider_C_274_K2Node_ComponentBoundEvent_13_OnMouseCaptureEndEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_HSlider_C_274_K2Node_ComponentBoundEvent_13_OnMouseCaptureEndEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_HSlider_VoicePitch_K2Node_ComponentBoundEvent_14_OnControllerCaptureEndEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomizationMenu_C::BndEvt__UI_CustomizationMenu_HSlider_VoicePitch_K2Node_ComponentBoundEvent_14_OnControllerCaptureEndEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.BndEvt__UI_CustomizationMenu_HSlider_VoicePitch_K2Node_ComponentBoundEvent_14_OnControllerCaptureEndEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_CustomizationMenu.UI_CustomizationMenu_C.ExecuteUbergraph_UI_CustomizationMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizationMenu_C::ExecuteUbergraph_UI_CustomizationMenu(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CustomizationMenu.UI_CustomizationMenu_C.ExecuteUbergraph_UI_CustomizationMenu");
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_CustomizationMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CustomizationMenu_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CustomizationMenu.UI_CustomizationMenu_C");
		return ptr;
	}

}


