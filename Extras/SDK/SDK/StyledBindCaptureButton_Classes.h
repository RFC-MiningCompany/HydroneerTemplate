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
	 * WidgetBlueprintGeneratedClass StyledBindCaptureButton.StyledBindCaptureButton_C
	 * Size -> 0x0018 (FullSize[0x02A8] - InheritedSize[0x0290])
	 */
	class UStyledBindCaptureButton_C : public UBindCaptureButton
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UButton*                                             Button_1;                                                // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          Content;                                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_StyledBindCaptureButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
