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
	 * Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.CreateAndSetRenderTarget
	 */
	struct UUI_PlayerThumbnail_C_CreateAndSetRenderTarget_Params
	{
	};

	/**
	 * Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.SetBarColor
	 */
	struct UUI_PlayerThumbnail_C_SetBarColor_Params
	{
	};

	/**
	 * Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.PreConstruct
	 */
	struct UUI_PlayerThumbnail_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.BndEvt__UI_CharacterThumbnail_Button_Player_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_PlayerThumbnail_C_BndEvt__UI_CharacterThumbnail_Button_Player_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.Construct
	 */
	struct UUI_PlayerThumbnail_C_Construct_Params
	{
	};

	/**
	 * Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.OnPlayerDestroyed
	 */
	struct UUI_PlayerThumbnail_C_OnPlayerDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.Tick
	 */
	struct UUI_PlayerThumbnail_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.BndEvt__UI_PlayerThumbnail_Button_Player_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_PlayerThumbnail_C_BndEvt__UI_PlayerThumbnail_Button_Player_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.BndEvt__UI_PlayerThumbnail_Button_Player_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_PlayerThumbnail_C_BndEvt__UI_PlayerThumbnail_Button_Player_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.ExecuteUbergraph_UI_PlayerThumbnail
	 */
	struct UUI_PlayerThumbnail_C_ExecuteUbergraph_UI_PlayerThumbnail_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_PlayerThumbnail.UI_PlayerThumbnail_C.OnThumbnailSelected__DelegateSignature
	 */
	struct UUI_PlayerThumbnail_C_OnThumbnailSelected__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SessionID;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
