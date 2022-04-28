#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0R
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
	 * Function UI_Menu_ModItem.UI_Menu_ModItem_C.On_Border_Body_MouseButtonDown_1
	 */
	struct UUI_Menu_ModItem_C_On_Border_Body_MouseButtonDown_1_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Menu_ModItem.UI_Menu_ModItem_C.HasDiscrepancy?
	 */
	struct UUI_Menu_ModItem_C_HasDiscrepancy__Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_ModItem.UI_Menu_ModItem_C.CheckMountStatus
	 */
	struct UUI_Menu_ModItem_C_CheckMountStatus_Params
	{
	public:
		bool                                                       Mounted_;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_ModItem.UI_Menu_ModItem_C.UpdateBorder
	 */
	struct UUI_Menu_ModItem_C_UpdateBorder_Params
	{	};

	/**
	 * Function UI_Menu_ModItem.UI_Menu_ModItem_C.InitEnabledCheckState
	 */
	struct UUI_Menu_ModItem_C_InitEnabledCheckState_Params
	{	};

	/**
	 * Function UI_Menu_ModItem.UI_Menu_ModItem_C.GetModPreviewImage
	 */
	struct UUI_Menu_ModItem_C_GetModPreviewImage_Params
	{	};

	/**
	 * Function UI_Menu_ModItem.UI_Menu_ModItem_C.UpdateSubscribeText
	 */
	struct UUI_Menu_ModItem_C_UpdateSubscribeText_Params
	{	};

	/**
	 * Function UI_Menu_ModItem.UI_Menu_ModItem_C.SubscribeResult
	 */
	struct UUI_Menu_ModItem_C_SubscribeResult_Params
	{
	public:
		struct FRemoteStorageSubscribePublishedFileResult          Data;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_ModItem.UI_Menu_ModItem_C.UnsubscribeResult
	 */
	struct UUI_Menu_ModItem_C_UnsubscribeResult_Params
	{
	public:
		struct FRemoteStorageSubscribePublishedFileResult          Data;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_ModItem.UI_Menu_ModItem_C.BndEvt__UI_Menu_ModItem_H_ButtonMetal2_Sub_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Menu_ModItem_C_BndEvt__UI_Menu_ModItem_H_ButtonMetal2_Sub_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Menu_ModItem.UI_Menu_ModItem_C.Construct
	 */
	struct UUI_Menu_ModItem_C_Construct_Params
	{	};

	/**
	 * Function UI_Menu_ModItem.UI_Menu_ModItem_C.BndEvt__UI_Menu_ModItem_HCheckbox_C_Enabled_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_Menu_ModItem_C_BndEvt__UI_Menu_ModItem_HCheckbox_C_Enabled_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_ModItem.UI_Menu_ModItem_C.ExecuteUbergraph_UI_Menu_ModItem
	 */
	struct UUI_Menu_ModItem_C_ExecuteUbergraph_UI_Menu_ModItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_ModItem.UI_Menu_ModItem_C.OnClicked__DelegateSignature
	 */
	struct UUI_Menu_ModItem_C_OnClicked__DelegateSignature_Params
	{
	public:
		struct FSteamUGCDetails                                    ModDetails;                                              // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_Menu_ModItem.UI_Menu_ModItem_C.OnUpdate__DelegateSignature
	 */
	struct UUI_Menu_ModItem_C_OnUpdate__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Menu_ModItem.UI_Menu_ModItem_C.Unsubscribe__DelegateSignature
	 */
	struct UUI_Menu_ModItem_C_Unsubscribe__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Menu_ModItem.UI_Menu_ModItem_C.Subscribe__DelegateSignature
	 */
	struct UUI_Menu_ModItem_C_Subscribe__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
