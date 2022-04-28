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
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.UpdateSelectedTab
	 */
	struct UUI_Menu_Mods_C_UpdateSelectedTab_Params
	{
	public:
		class UH_ButtonSettingsTab_C*                              Tab;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.UpdateModDetails
	 */
	struct UUI_Menu_Mods_C_UpdateModDetails_Params
	{
	public:
		struct FSteamUGCDetails                                    ModDetails;                                              // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.UpdateInstalledModDetails
	 */
	struct UUI_Menu_Mods_C_UpdateInstalledModDetails_Params
	{
	public:
		struct FSteamUGCDetails                                    ModDetails;                                              // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.CheckInstalledModDiscrepancies
	 */
	struct UUI_Menu_Mods_C_CheckInstalledModDiscrepancies_Params
	{	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.SetTextColor
	 */
	struct UUI_Menu_Mods_C_SetTextColor_Params
	{
	public:
		bool                                                       invalidEntry_;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTextBlock*                                          Text;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.CheckUpdate
	 */
	struct UUI_Menu_Mods_C_CheckUpdate_Params
	{	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.LimitCharacterCount
	 */
	struct UUI_Menu_Mods_C_LimitCharacterCount_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    Count;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.FindThumbnail
	 */
	struct UUI_Menu_Mods_C_FindThumbnail_Params
	{
	public:
		class FString                                              Directory;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UTexture2D*                                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.SetModFileID
	 */
	struct UUI_Menu_Mods_C_SetModFileID_Params
	{
	public:
		struct FPublishedFileID                                    FileID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.GenerateMetadata
	 */
	struct UUI_Menu_Mods_C_GenerateMetadata_Params
	{	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.CheckImagePath
	 */
	struct UUI_Menu_Mods_C_CheckImagePath_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Valid_;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTexture2D*                                          ImageTexture;                                            // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.InitComboBox_Visibility
	 */
	struct UUI_Menu_Mods_C_InitComboBox_Visibility_Params
	{	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.EvaluateUpload
	 */
	struct UUI_Menu_Mods_C_EvaluateUpload_Params
	{	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.SetModVisibility
	 */
	struct UUI_Menu_Mods_C_SetModVisibility_Params
	{	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.SetModPreview
	 */
	struct UUI_Menu_Mods_C_SetModPreview_Params
	{	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.SetModTags
	 */
	struct UUI_Menu_Mods_C_SetModTags_Params
	{	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.SetModDescription
	 */
	struct UUI_Menu_Mods_C_SetModDescription_Params
	{	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.SetModTitle
	 */
	struct UUI_Menu_Mods_C_SetModTitle_Params
	{	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.QueryReceived
	 */
	struct UUI_Menu_Mods_C_QueryReceived_Params
	{
	public:
		struct FSteamUGCQueryCompleted                             Data;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       bWasSuccessful;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPanelWidget*                                        Target;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.Init
	 */
	struct UUI_Menu_Mods_C_Init_Params
	{	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.OnCallback_50E16AF84B7BEC154FE5C5B55718BB72
	 */
	struct UUI_Menu_Mods_C_OnCallback_50E16AF84B7BEC154FE5C5B55718BB72_Params
	{
	public:
		struct FRemoteStorageSubscribePublishedFileResult          Data;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.RefreshUGC
	 */
	struct UUI_Menu_Mods_C_RefreshUGC_Params
	{	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.CB_CreateItem
	 */
	struct UUI_Menu_Mods_C_CB_CreateItem_Params
	{
	public:
		struct FCreateItemResult                                   Data;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       bWasSuccessful;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.RefreshInstalledMods
	 */
	struct UUI_Menu_Mods_C_RefreshInstalledMods_Params
	{	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.Construct
	 */
	struct UUI_Menu_Mods_C_Construct_Params
	{	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.ItemUpdated
	 */
	struct UUI_Menu_Mods_C_ItemUpdated_Params
	{
	public:
		struct FSubmitItemUpdateResult                             Data;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.UGCRequest Callback
	 */
	struct UUI_Menu_Mods_C_UGCRequest_Callback_Params
	{
	public:
		struct FSteamUGCQueryCompleted                             Data;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       bWasSuccessful;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_H_ComboBox_C_106_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_H_ComboBox_C_106_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ThumbnailImage_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_EditableText_ThumbnailImage_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_ButtonLoadSave_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_ButtonLoadSave_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ModDirectory_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_EditableText_ModDirectory_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ModName_1_K2Node_ComponentBoundEvent_7_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_EditableText_ModName_1_K2Node_ComponentBoundEvent_7_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_MultiLineEditableText_ModDescription_K2Node_ComponentBoundEvent_8_OnMultiLineEditableTextCommittedEvent__DelegateSignature
	 */
	struct UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_MultiLineEditableText_ModDescription_K2Node_ComponentBoundEvent_8_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ModTitle_K2Node_ComponentBoundEvent_10_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_EditableText_ModTitle_K2Node_ComponentBoundEvent_10_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_MultiLineEditableText_ModDescription_K2Node_ComponentBoundEvent_11_OnMultiLineEditableTextChangedEvent__DelegateSignature
	 */
	struct UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_MultiLineEditableText_ModDescription_K2Node_ComponentBoundEvent_11_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ModID_K2Node_ComponentBoundEvent_12_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_EditableText_ModID_K2Node_ComponentBoundEvent_12_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.UpdateMod
	 */
	struct UUI_Menu_Mods_C_UpdateMod_Params
	{
	public:
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.PreConstruct
	 */
	struct UUI_Menu_Mods_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_H_ComboBox_C_Visibility_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_H_ComboBox_C_Visibility_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_H_ButtonWood1_ReloadMods_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_H_ButtonWood1_ReloadMods_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_VideoButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_VideoButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_HButton_InstalledMods_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_HButton_InstalledMods_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_HButton_UploadMod_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_HButton_UploadMod_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.ExecuteUbergraph_UI_Menu_Mods
	 */
	struct UUI_Menu_Mods_C_ExecuteUbergraph_UI_Menu_Mods_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
