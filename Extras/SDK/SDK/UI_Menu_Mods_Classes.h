#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_Menu_Mods.UI_Menu_Mods_C
	 * Size -> 0x01A0 (FullSize[0x0400] - InheritedSize[0x0260])
	 */
	class UUI_Menu_Mods_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UH_ButtonMetal2_C*                                   Button_UploadUpdate;                                     // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_Uploading;                                   // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_EditableText_C*                                   EditableText_ChangeNotes;                                // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_EditableText_C*                                   EditableText_ModDirectory;                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_EditableText_C*                                   EditableText_ModID;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_EditableText_C*                                   EditableText_ModTitle;                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_EditableText_C*                                   EditableText_Tags;                                       // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_EditableText_C*                                   EditableText_ThumbnailImage;                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_Background1000x700_C*                             H_Background1000x700_C;                                  // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_ButtonWood1_C*                                    H_ButtonWood1_ReloadMods;                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_ComboBox_C*                                       H_ComboBox_C_Tags;                                       // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_ComboBox_C*                                       H_ComboBox_C_Visibility;                                 // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_Midground400x40_C*                                H_Midground400x40_C;                                     // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_Midground400x40_C*                                H_Midground400x40_C_2;                                   // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_Midground400x40_C*                                H_Midground400x40_C_3;                                   // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_Midground400x40_C*                                H_Midground400x40_C_4;                                   // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_Midground400x40_C*                                H_Midground400x40_C_5;                                   // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_Midground400x40_C*                                H_Midground400x40_C_6;                                   // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_Midground400x40_C*                                H_Midground400x40_C_7;                                   // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_TextMultiLine_C*                                  H_TextMultiLine_InstalledModDetailsDescription;          // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_TextMultiLine_C*                                  H_TextMultiLine_ModDetailsDescription;                   // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_TextSubTitle_C*                                   H_TextSubTitle_C_ModDirectory_Error;                     // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_TextSubTitle_C*                                   H_TextSubTitle_C_UploadStatus;                           // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_TextSubTitle_C*                                   H_TextSubTitle_ModDescription;                           // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_TextSubTitle_C*                                   H_TextSubTitle_ModTitle;                                 // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_TextTitle_C*                                      H_TextTitle_InstalledModDetailsTitle;                    // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_TextTitle_C*                                      H_TextTitle_ModDetailsTitle;                             // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_TextTitle_C*                                      H_TextTitle_UploaderTitle;                               // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_ButtonSettingsTab_C*                              HButton_InstalledMods;                                   // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_ButtonSettingsTab_C*                              HButton_PopularMods;                                     // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_ButtonSettingsTab_C*                              HButton_UploadMod;                                       // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_TextSubTitle_C*                                   HTextBlock_C_1_UploadUpdateModText;                      // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_MainMenuPreview;                                   // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Thumbnail;                                         // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMultiLineEditableText*                              MultiLineEditableText_ModDescription;                    // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        ProgressBar_UploadStatus;                                // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UThrobber*                                           Throbber_Uploading;                                      // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_ModTabs;                                  // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                            WrapBox_InstalledMods;                                   // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                            WrapBox_Mods;                                            // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FString>                                      ModFolderList;                                           // 0x03A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    Total_Matching_Results;                                  // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KSWG[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UploadingMod;                                            // 0x03C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       OnInstallPage_;                                          // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BTKJ[0x7];                                   // 0x03D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUGCQueryHandle                                     UGC_Query_Handle;                                        // 0x03D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FUGCUpdateHandle                                    UGC_Update_Handle;                                       // 0x03E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       ValidModPath;                                            // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ValidImagePath;                                          // 0x03E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsUploading_;                                            // 0x03EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QOEE[0x5];                                   // 0x03EB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        CheckUpdateTimer;                                        // 0x03F0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FPublishedFileID                                    ModPublishedFileID;                                      // 0x03F8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateSelectedTab(class UH_ButtonSettingsTab_C* Tab);
		void UpdateModDetails(const struct FSteamUGCDetails& ModDetails);
		void UpdateInstalledModDetails(const struct FSteamUGCDetails& ModDetails);
		void CheckInstalledModDiscrepancies();
		void SetTextColor(bool invalidEntry_, class UTextBlock* Text);
		void CheckUpdate();
		class FText LimitCharacterCount(const class FText& InText, int32_t Count);
		class UTexture2D* FindThumbnail(const class FString& Directory);
		void SetModFileID(const struct FPublishedFileID& FileID);
		void GenerateMetadata();
		void CheckImagePath(const class FString& Path, bool* Valid_, class UTexture2D** ImageTexture);
		void InitComboBox_Visibility();
		void EvaluateUpload();
		void SetModVisibility();
		void SetModPreview();
		void SetModTags();
		void SetModDescription();
		void SetModTitle();
		void QueryReceived(const struct FSteamUGCQueryCompleted& Data, bool bWasSuccessful, class UPanelWidget* Target);
		void Init();
		void OnCallback_50E16AF84B7BEC154FE5C5B55718BB72(const struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
		void RefreshUGC();
		void CB_CreateItem(const struct FCreateItemResult& Data, bool bWasSuccessful);
		void RefreshInstalledMods();
		void Construct();
		void ItemUpdated(const struct FSubmitItemUpdateResult& Data, bool bWasSuccessful);
		void UGCRequest_Callback(const struct FSteamUGCQueryCompleted& Data, bool bWasSuccessful);
		void BndEvt__UI_Menu_Mods_H_ComboBox_C_106_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__UI_Menu_Mods_EditableText_ThumbnailImage_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__UI_Menu_Mods_ButtonLoadSave_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_Menu_Mods_EditableText_ModDirectory_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__UI_Menu_Mods_EditableText_ModName_1_K2Node_ComponentBoundEvent_7_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__UI_Menu_Mods_MultiLineEditableText_ModDescription_K2Node_ComponentBoundEvent_8_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__UI_Menu_Mods_EditableText_ModTitle_K2Node_ComponentBoundEvent_10_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__UI_Menu_Mods_MultiLineEditableText_ModDescription_K2Node_ComponentBoundEvent_11_OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__UI_Menu_Mods_EditableText_ModID_K2Node_ComponentBoundEvent_12_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void UpdateMod(const struct FPublishedFileID& PublishedFileID);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__UI_Menu_Mods_H_ComboBox_C_Visibility_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__UI_Menu_Mods_H_ButtonWood1_ReloadMods_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_Menu_Mods_VideoButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_Menu_Mods_HButton_InstalledMods_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_Menu_Mods_HButton_UploadMod_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_UI_Menu_Mods(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
