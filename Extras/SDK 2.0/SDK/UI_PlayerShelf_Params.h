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
	 * Function UI_PlayerShelf.UI_PlayerShelf_C.ThumbnailSelected
	 */
	struct UUI_PlayerShelf_C_ThumbnailSelected_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SessionID;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_PlayerShelf.UI_PlayerShelf_C.AddPlayer
	 */
	struct UUI_PlayerShelf_C_AddPlayer_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SessionID;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_PlayerShelf.UI_PlayerShelf_C.BndEvt__UI_MenuPlayers_Button_AddPlayer_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUI_PlayerShelf_C_BndEvt__UI_MenuPlayers_Button_AddPlayer_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function UI_PlayerShelf.UI_PlayerShelf_C.Construct
	 */
	struct UUI_PlayerShelf_C_Construct_Params
	{
	};

	/**
	 * Function UI_PlayerShelf.UI_PlayerShelf_C.ExecuteUbergraph_UI_PlayerShelf
	 */
	struct UUI_PlayerShelf_C_ExecuteUbergraph_UI_PlayerShelf_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_PlayerShelf.UI_PlayerShelf_C.OnThumbnailSelected__DelegateSignature
	 */
	struct UUI_PlayerShelf_C_OnThumbnailSelected__DelegateSignature_Params
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
