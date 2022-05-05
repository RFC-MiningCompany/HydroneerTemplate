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
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.SpawnDummy
	 */
	struct UUI_CustomisationMenu_C_SpawnDummy_Params
	{
	public:
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.SetDisplayName
	 */
	struct UUI_CustomisationMenu_C_SetDisplayName_Params
	{
	public:
		int32_t                                                    SessionID;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.OpenMenu
	 */
	struct UUI_CustomisationMenu_C_OpenMenu_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SessionID;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.UpdateTargetCharacterStyle
	 */
	struct UUI_CustomisationMenu_C_UpdateTargetCharacterStyle_Params
	{
	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.InitDefaultStyleOptions
	 */
	struct UUI_CustomisationMenu_C_InitDefaultStyleOptions_Params
	{
	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.Finished_DDC461F0456D8CA100CA1FA61D25A4F0
	 */
	struct UUI_CustomisationMenu_C_Finished_DDC461F0456D8CA100CA1FA61D25A4F0_Params
	{
	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Face_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Face_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Hair_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 */
	struct UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Hair_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Shirt_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
	 */
	struct UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Shirt_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Pants_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
	 */
	struct UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Pants_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Hair_K2Node_ComponentBoundEvent_5_OnUpdateStyle__DelegateSignature
	 */
	struct UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_StylePanel_Hair_K2Node_ComponentBoundEvent_5_OnUpdateStyle__DelegateSignature_Params
	{
	public:
		int32_t                                                    StyleIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Face_K2Node_ComponentBoundEvent_6_OnUpdateStyle__DelegateSignature
	 */
	struct UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_StylePanel_Face_K2Node_ComponentBoundEvent_6_OnUpdateStyle__DelegateSignature_Params
	{
	public:
		int32_t                                                    StyleIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_FacialHair_K2Node_ComponentBoundEvent_7_OnUpdateStyle__DelegateSignature
	 */
	struct UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_StylePanel_FacialHair_K2Node_ComponentBoundEvent_7_OnUpdateStyle__DelegateSignature_Params
	{
	public:
		int32_t                                                    StyleIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Shirt_K2Node_ComponentBoundEvent_8_OnUpdateStyle__DelegateSignature
	 */
	struct UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_StylePanel_Shirt_K2Node_ComponentBoundEvent_8_OnUpdateStyle__DelegateSignature_Params
	{
	public:
		int32_t                                                    StyleIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_StylePanel_Pants_K2Node_ComponentBoundEvent_9_OnUpdateStyle__DelegateSignature
	 */
	struct UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_StylePanel_Pants_K2Node_ComponentBoundEvent_9_OnUpdateStyle__DelegateSignature_Params
	{
	public:
		int32_t                                                    StyleIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_C_143_K2Node_ComponentBoundEvent_10_OnUpdate__DelegateSignature
	 */
	struct UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_SwatchPanel_C_143_K2Node_ComponentBoundEvent_10_OnUpdate__DelegateSignature_Params
	{
	public:
		class FName                                                ColorID;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_HairColor_K2Node_ComponentBoundEvent_11_OnUpdate__DelegateSignature
	 */
	struct UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_SwatchPanel_HairColor_K2Node_ComponentBoundEvent_11_OnUpdate__DelegateSignature_Params
	{
	public:
		class FName                                                ColorID;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_ShirtColor_K2Node_ComponentBoundEvent_12_OnUpdate__DelegateSignature
	 */
	struct UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_SwatchPanel_ShirtColor_K2Node_ComponentBoundEvent_12_OnUpdate__DelegateSignature_Params
	{
	public:
		class FName                                                ColorID;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.BndEvt__UI_CustomizationMenu_UI_SwatchPanel_PantsColor_K2Node_ComponentBoundEvent_16_OnUpdate__DelegateSignature
	 */
	struct UUI_CustomisationMenu_C_BndEvt__UI_CustomizationMenu_UI_SwatchPanel_PantsColor_K2Node_ComponentBoundEvent_16_OnUpdate__DelegateSignature_Params
	{
	public:
		class FName                                                ColorID;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.Destruct
	 */
	struct UUI_CustomisationMenu_C_Destruct_Params
	{
	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.CloseMenu
	 */
	struct UUI_CustomisationMenu_C_CloseMenu_Params
	{
	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.Construct
	 */
	struct UUI_CustomisationMenu_C_Construct_Params
	{
	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.VisibilityChanged
	 */
	struct UUI_CustomisationMenu_C_VisibilityChanged_Params
	{
	public:
		UMG_ESlateVisibility                                       InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_CustomisationMenu.UI_CustomisationMenu_C.ExecuteUbergraph_UI_CustomisationMenu
	 */
	struct UUI_CustomisationMenu_C_ExecuteUbergraph_UI_CustomisationMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
