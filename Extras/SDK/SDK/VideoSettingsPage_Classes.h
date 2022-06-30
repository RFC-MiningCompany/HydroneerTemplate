#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.6
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
	 * WidgetBlueprintGeneratedClass VideoSettingsPage.VideoSettingsPage_C
	 * Size -> 0x0012 (FullSize[0x0272] - InheritedSize[0x0260])
	 */
	class UVideoSettingsPage_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UH_ButtonWood1_C*                                    H_ButtonWood1_C_157;                                     // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       autosave;                                                // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AutoApply;                                               // 0x0271(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool Get_AutoApplyCheckbox_bIsEnabled_1();
		bool Get_ApplyButton_bIsEnabled_1();
		bool Get_SaveButton_bIsEnabled_1();
		void BndEvt__VideoSettingsPage_H_ButtonWood1_C_156_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_VideoSettingsPage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
