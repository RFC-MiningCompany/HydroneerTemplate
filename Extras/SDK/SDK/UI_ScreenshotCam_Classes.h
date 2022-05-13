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
	 * WidgetBlueprintGeneratedClass UI_ScreenshotCam.UI_ScreenshotCam_C
	 * Size -> 0x00A0 (FullSize[0x0300] - InheritedSize[0x0260])
	 */
	class UUI_ScreenshotCam_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UH_ButtonParent_C*                                   B_CameraFilter_Next;                                     // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_ButtonParent_C*                                   B_CameraFilter_Previous;                                 // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_ButtonParent_C*                                   B_CameraFOV_Next;                                        // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_ButtonParent_C*                                   B_CameraFOV_Previous;                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_ButtonParent_C*                                   B_CameraSpeed_Next;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_ButtonParent_C*                                   B_CameraSpeed_Previous;                                  // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_ButtonParent_C*                                   B_CameraTime_Next;                                       // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_ButtonParent_C*                                   B_CameraTime_Previous;                                   // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHTextBlockDELETE_C*                                 CamSpeedAmount;                                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDefaultActionLabel_C*                               DefaultActionLabel;                                      // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDefaultActionLabel_C*                               DefaultActionLabel_2;                                    // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHTextBlockDELETE_C*                                 FilterText;                                              // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHTextBlockDELETE_C*                                 FOVAmount;                                               // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_ButtonMetal2_C*                                   GreenScreenButton;                                       // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHTextBlockDELETE_C*                                 HideUIText;                                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHTextBlockDELETE_C*                                 HoldEText;                                               // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHTextBlockDELETE_C*                                 HTextBlock_C_166;                                        // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_ButtonMetal2_C*                                   ToggleCinematicBars;                                     // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void BndEvt__ToggleCinematicBars_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void NewFilterText(E_CameraFilters New_Filter);
		void NewSpeedText(int32_t Speed);
		void NewFOVAmount(int32_t FOV);
		void ToggleVisibility();
		void BndEvt__GreenScreenButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_ScreenshotCam_B_CameraTime_Next_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_ScreenshotCam_B_CameraTime_Previous_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_ScreenshotCam_B_CameraFilter_Previous_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_ScreenshotCam_B_CameraFilter_Next_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_ScreenshotCam_B_CameraSpeed_Next_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_ScreenshotCam_B_CameraSpeed_Previous_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_ScreenshotCam_B_CameraFOV_Next_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_ScreenshotCam_B_CameraFOV_Previous_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_UI_ScreenshotCam(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
