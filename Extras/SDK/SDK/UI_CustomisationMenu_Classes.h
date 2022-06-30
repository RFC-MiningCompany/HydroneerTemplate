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
	 * WidgetBlueprintGeneratedClass UI_CustomisationMenu.UI_CustomisationMenu_C
	 * Size -> 0x0138 (FullSize[0x0398] - InheritedSize[0x0260])
	 */
	class UUI_CustomisationMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    EaseIn;                                                  // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Image_151;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_CharacterPlaceholder;                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_PlayerName;                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CustomizationTab_C*                              UI_CustomizationOption_Face;                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CustomizationTab_C*                              UI_CustomizationOption_Hair;                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CustomizationTab_C*                              UI_CustomizationOption_Pants;                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CustomizationTab_C*                              UI_CustomizationOption_Shirt;                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_StylePanel_C*                                    UI_StylePanel_Face;                                      // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_StylePanel_C*                                    UI_StylePanel_FacialHair;                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_StylePanel_C*                                    UI_StylePanel_Hair;                                      // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_StylePanel_C*                                    UI_StylePanel_Pants;                                     // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_StylePanel_C*                                    UI_StylePanel_Shirt;                                     // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_SwatchPanel_C*                                   UI_SwatchPanel_EyeColor;                                 // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_SwatchPanel_C*                                   UI_SwatchPanel_HairColor;                                // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_SwatchPanel_C*                                   UI_SwatchPanel_PantsColor;                               // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_SwatchPanel_C*                                   UI_SwatchPanel_ShirtColor;                               // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_SwatchPanel_C*                                   UI_SwatchPanel_SkinColor;                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_CustomizationOptionPanels;                // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ABP_Dummy_HydroGuy_C*                                Dummy;                                                   // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HB09[0x8];                                   // 0x0308(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          DummyTransform;                                          // 0x0310(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper
		struct FS_CharacterStyle                                   Style;                                                   // 0x0340(0x004C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y4JK[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Character_HydroGuy_C*                            TargetCharacter;                                         // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnDummy(class UTextureRenderTarget2D* RenderTarget);
		void SetDisplayName(int32_t SessionID);
		void OpenMenu(class APlayerController* PlayerController, int32_t SessionID, class UTextureRenderTarget2D* RenderTarget);
		void UpdateTargetCharacterStyle();
		void InitDefaultStyleOptions();
		void Finished_DDC461F0456D8CA100CA1FA61D25A4F0();
		void BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Face_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
		void BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Hair_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
		void BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Shirt_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature();
		void BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Pants_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature();
		void BndEvt__UI_CustomizationMenu_UI_StylePanel_Hair_K2Node_ComponentBoundEvent_5_OnUpdateStyle__DelegateSignature(int32_t StyleIndex);
		void BndEvt__UI_CustomizationMenu_UI_StylePanel_Face_K2Node_ComponentBoundEvent_6_OnUpdateStyle__DelegateSignature(int32_t StyleIndex);
		void BndEvt__UI_CustomizationMenu_UI_StylePanel_FacialHair_K2Node_ComponentBoundEvent_7_OnUpdateStyle__DelegateSignature(int32_t StyleIndex);
		void BndEvt__UI_CustomizationMenu_UI_StylePanel_Shirt_K2Node_ComponentBoundEvent_8_OnUpdateStyle__DelegateSignature(int32_t StyleIndex);
		void BndEvt__UI_CustomizationMenu_UI_StylePanel_Pants_K2Node_ComponentBoundEvent_9_OnUpdateStyle__DelegateSignature(int32_t StyleIndex);
		void BndEvt__UI_CustomizationMenu_UI_SwatchPanel_C_143_K2Node_ComponentBoundEvent_10_OnUpdate__DelegateSignature(const class FName& ColorID);
		void BndEvt__UI_CustomizationMenu_UI_SwatchPanel_HairColor_K2Node_ComponentBoundEvent_11_OnUpdate__DelegateSignature(const class FName& ColorID);
		void BndEvt__UI_CustomizationMenu_UI_SwatchPanel_ShirtColor_K2Node_ComponentBoundEvent_12_OnUpdate__DelegateSignature(const class FName& ColorID);
		void BndEvt__UI_CustomizationMenu_UI_SwatchPanel_PantsColor_K2Node_ComponentBoundEvent_16_OnUpdate__DelegateSignature(const class FName& ColorID);
		void Destruct();
		void CloseMenu();
		void Construct();
		void VisibilityChanged(UMG_ESlateVisibility InVisibility);
		void ExecuteUbergraph_UI_CustomisationMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
