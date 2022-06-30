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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_Menu_ModItem.UI_Menu_ModItem_C
	 * Size -> 0x0160 (FullSize[0x03C0] - InheritedSize[0x0260])
	 */
	class UUI_Menu_ModItem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    ModWarning;                                              // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_Body;                                             // 0x0270(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_Status;                                           // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_ButtonMetal2_C*                                   H_ButtonMetal2_Sub;                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_TextSubTitle_C*                                   H_TextSubTitle_C_Subscribe;                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_TextTitle_C*                                      H_TextTitle_C_ModName;                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHCheckbox_C*                                        HCheckbox_C_Enabled;                                     // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Background;                                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_ModWarning;                                        // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Preview;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             Subscribe;                                               // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Unsubscribe;                                             // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSteamUGCDetails                                    ModDetails;                                              // 0x02D8(0x00A8) Edit, BlueprintVisible, ExposeOnSpawn
		struct FTimerHandle                                        CheckDownloadTimer;                                      // 0x0380(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          ModTexture;                                              // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       Subscribed_;                                             // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper
		bool                                                       Installed_;                                              // 0x0391(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       Initialized_;                                            // 0x0392(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LX73[0x5];                                   // 0x0393(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnUpdate;                                                // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       Mounted_;                                                // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Enabled_;                                                // 0x03A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PODC[0x6];                                   // 0x03AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		struct FEventReply On_Border_Body_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		bool HasDiscrepancy_();
		void CheckMountStatus(bool* Mounted_);
		void UpdateBorder();
		void InitEnabledCheckState();
		void GetModPreviewImage();
		void UpdateSubscribeText();
		void SubscribeResult(const struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
		void UnsubscribeResult(const struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
		void BndEvt__UI_Menu_ModItem_H_ButtonMetal2_Sub_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void BndEvt__UI_Menu_ModItem_HCheckbox_C_Enabled_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void ExecuteUbergraph_UI_Menu_ModItem(int32_t EntryPoint);
		void OnClicked__DelegateSignature(const struct FSteamUGCDetails& ModDetails);
		void OnUpdate__DelegateSignature();
		void Unsubscribe__DelegateSignature();
		void Subscribe__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
