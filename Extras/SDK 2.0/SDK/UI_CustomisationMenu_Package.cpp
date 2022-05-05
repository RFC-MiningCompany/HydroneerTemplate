/**
 * Name: Hydroneer
 * Version: 2.0
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.SpawnDummy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomisationMenu_C::SpawnDummy(class UTextureRenderTarget2D* RenderTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.SpawnDummy");
		
		UUI_CustomisationMenu_C_SpawnDummy_Params params {};
		params.RenderTarget = RenderTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.SetDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SessionID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomisationMenu_C::SetDisplayName(int32_t SessionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.SetDisplayName");
		
		UUI_CustomisationMenu_C_SetDisplayName_Params params {};
		params.SessionID = SessionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.OpenMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SessionID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomisationMenu_C::OpenMenu(class APlayerController* PlayerController, int32_t SessionID, class UTextureRenderTarget2D* RenderTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.OpenMenu");
		
		UUI_CustomisationMenu_C_OpenMenu_Params params {};
		params.PlayerController = PlayerController;
		params.SessionID = SessionID;
		params.RenderTarget = RenderTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.UpdateTargetCharacterStyle
	 * 		Flags  -> ()
	 */
	void UUI_CustomisationMenu_C::UpdateTargetCharacterStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.UpdateTargetCharacterStyle");
		
		UUI_CustomisationMenu_C_UpdateTargetCharacterStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.InitDefaultStyleOptions
	 * 		Flags  -> ()
	 */
	void UUI_CustomisationMenu_C::InitDefaultStyleOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.InitDefaultStyleOptions");
		
		UUI_CustomisationMenu_C_InitDefaultStyleOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.Finished_DDC461F0456D8CA100CA1FA61D25A4F0
	 * 		Flags  -> ()
	 */
	void UUI_CustomisationMenu_C::Finished_DDC461F0456D8CA100CA1FA61D25A4F0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.Finished_DDC461F0456D8CA100CA1FA61D25A4F0");
		
		UUI_CustomisationMenu_C_Finished_DDC461F0456D8CA100CA1FA61D25A4F0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Face_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomisationMenu_C::BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Face_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Face_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Face_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Hair_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomisationMenu_C::BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Hair_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Hair_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");
		
		UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Hair_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Shirt_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomisationMenu_C::BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Shirt_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Shirt_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature");
		
		UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Shirt_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Pants_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomisationMenu_C::BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Pants_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Pants_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature");
		
		UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Pants_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Hair_K2Node_ComponentBoundEvent_5_OnUpdateStyle__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StyleIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomisationMenu_C::BndEvt__UI_CustomizationMenu_UI_StylePanel_Hair_K2Node_ComponentBoundEvent_5_OnUpdateStyle__DelegateSignature(int32_t StyleIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Hair_K2Node_ComponentBoundEvent_5_OnUpdateStyle__DelegateSignature");
		
		UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_StylePanel_Hair_K2Node_ComponentBoundEvent_5_OnUpdateStyle__DelegateSignature_Params params {};
		params.StyleIndex = StyleIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Face_K2Node_ComponentBoundEvent_6_OnUpdateStyle__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StyleIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomisationMenu_C::BndEvt__UI_CustomizationMenu_UI_StylePanel_Face_K2Node_ComponentBoundEvent_6_OnUpdateStyle__DelegateSignature(int32_t StyleIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Face_K2Node_ComponentBoundEvent_6_OnUpdateStyle__DelegateSignature");
		
		UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_StylePanel_Face_K2Node_ComponentBoundEvent_6_OnUpdateStyle__DelegateSignature_Params params {};
		params.StyleIndex = StyleIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_FacialHair_K2Node_ComponentBoundEvent_7_OnUpdateStyle__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StyleIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomisationMenu_C::BndEvt__UI_CustomizationMenu_UI_StylePanel_FacialHair_K2Node_ComponentBoundEvent_7_OnUpdateStyle__DelegateSignature(int32_t StyleIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_FacialHair_K2Node_ComponentBoundEvent_7_OnUpdateStyle__DelegateSignature");
		
		UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_StylePanel_FacialHair_K2Node_ComponentBoundEvent_7_OnUpdateStyle__DelegateSignature_Params params {};
		params.StyleIndex = StyleIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Shirt_K2Node_ComponentBoundEvent_8_OnUpdateStyle__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StyleIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomisationMenu_C::BndEvt__UI_CustomizationMenu_UI_StylePanel_Shirt_K2Node_ComponentBoundEvent_8_OnUpdateStyle__DelegateSignature(int32_t StyleIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Shirt_K2Node_ComponentBoundEvent_8_OnUpdateStyle__DelegateSignature");
		
		UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_StylePanel_Shirt_K2Node_ComponentBoundEvent_8_OnUpdateStyle__DelegateSignature_Params params {};
		params.StyleIndex = StyleIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Pants_K2Node_ComponentBoundEvent_9_OnUpdateStyle__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StyleIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomisationMenu_C::BndEvt__UI_CustomizationMenu_UI_StylePanel_Pants_K2Node_ComponentBoundEvent_9_OnUpdateStyle__DelegateSignature(int32_t StyleIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Pants_K2Node_ComponentBoundEvent_9_OnUpdateStyle__DelegateSignature");
		
		UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_StylePanel_Pants_K2Node_ComponentBoundEvent_9_OnUpdateStyle__DelegateSignature_Params params {};
		params.StyleIndex = StyleIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_C_143_K2Node_ComponentBoundEvent_10_OnUpdate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ColorID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomisationMenu_C::BndEvt__UI_CustomizationMenu_UI_SwatchPanel_C_143_K2Node_ComponentBoundEvent_10_OnUpdate__DelegateSignature(const class FName& ColorID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_C_143_K2Node_ComponentBoundEvent_10_OnUpdate__DelegateSignature");
		
		UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_SwatchPanel_C_143_K2Node_ComponentBoundEvent_10_OnUpdate__DelegateSignature_Params params {};
		params.ColorID = ColorID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_HairColor_K2Node_ComponentBoundEvent_11_OnUpdate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ColorID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomisationMenu_C::BndEvt__UI_CustomizationMenu_UI_SwatchPanel_HairColor_K2Node_ComponentBoundEvent_11_OnUpdate__DelegateSignature(const class FName& ColorID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_HairColor_K2Node_ComponentBoundEvent_11_OnUpdate__DelegateSignature");
		
		UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_SwatchPanel_HairColor_K2Node_ComponentBoundEvent_11_OnUpdate__DelegateSignature_Params params {};
		params.ColorID = ColorID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_ShirtColor_K2Node_ComponentBoundEvent_12_OnUpdate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ColorID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomisationMenu_C::BndEvt__UI_CustomizationMenu_UI_SwatchPanel_ShirtColor_K2Node_ComponentBoundEvent_12_OnUpdate__DelegateSignature(const class FName& ColorID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_ShirtColor_K2Node_ComponentBoundEvent_12_OnUpdate__DelegateSignature");
		
		UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_SwatchPanel_ShirtColor_K2Node_ComponentBoundEvent_12_OnUpdate__DelegateSignature_Params params {};
		params.ColorID = ColorID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_PantsColor_K2Node_ComponentBoundEvent_16_OnUpdate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ColorID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomisationMenu_C::BndEvt__UI_CustomizationMenu_UI_SwatchPanel_PantsColor_K2Node_ComponentBoundEvent_16_OnUpdate__DelegateSignature(const class FName& ColorID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_PantsColor_K2Node_ComponentBoundEvent_16_OnUpdate__DelegateSignature");
		
		UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_SwatchPanel_PantsColor_K2Node_ComponentBoundEvent_16_OnUpdate__DelegateSignature_Params params {};
		params.ColorID = ColorID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_CustomisationMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.Destruct");
		
		UUI_CustomisationMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.CloseMenu
	 * 		Flags  -> ()
	 */
	void UUI_CustomisationMenu_C::CloseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.CloseMenu");
		
		UUI_CustomisationMenu_C_CloseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_CustomisationMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.Construct");
		
		UUI_CustomisationMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.VisibilityChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		UMG_ESlateVisibility                               InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomisationMenu_C::VisibilityChanged(UMG_ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.VisibilityChanged");
		
		UUI_CustomisationMenu_C_VisibilityChanged_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_CustomisationMenu.UI_CustomisationMenu_C.ExecuteUbergraph_UI_CustomisationMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomisationMenu_C::ExecuteUbergraph_UI_CustomisationMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomisationMenu.UI_CustomisationMenu_C.ExecuteUbergraph_UI_CustomisationMenu");
		
		UUI_CustomisationMenu_C_ExecuteUbergraph_UI_CustomisationMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_CustomisationMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CustomisationMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CustomisationMenu.UI_CustomisationMenu_C");
		return ptr;
	}

}


