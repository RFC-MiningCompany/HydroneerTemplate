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
	 * WidgetBlueprintGeneratedClass UI_AddPlayer.UI_AddPlayer_C
	 * Size -> 0x0028 (FullSize[0x0288] - InheritedSize[0x0260])
	 */
	class UUI_AddPlayer_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UH_ButtonWood1_C*                                    H_ButtonWood1_InvitePlayer;                              // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_ButtonWood2_C*                                    H_ButtonWood2_AddLocalPlayer;                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UH_ButtonWood2_C*                                    H_ButtonWood2_RemoteLocalPlayer;                         // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_AddRemoveLocalPlayer;                     // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void CheckCanEnable();
		void Construct();
		void BndEvt__UI_AddPlayer_H_ButtonWood1_C_112_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_AddPlayer_H_ButtonWood2_C_82_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__UI_AddPlayer_H_ButtonWood2_RemoteLocalPlayer_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_UI_AddPlayer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
