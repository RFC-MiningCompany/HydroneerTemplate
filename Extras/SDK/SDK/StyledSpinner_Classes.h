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
	 * WidgetBlueprintGeneratedClass StyledSpinner.StyledSpinner_C
	 * Size -> 0x0030 (FullSize[0x02C0] - InheritedSize[0x0290])
	 */
	class UStyledSpinner_C : public FAutoSettings_USpinner
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UTextBlock*                                          LabelTextBlock;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LeftArrow;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             LeftButton;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RightArrow;                                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RightButton;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnSelectionChanged(const struct FSettingOption& SelectedOption);
		struct FLinearColor GetRightArrowColorAndOpacity();
		struct FLinearColor GetLeftArrowColorAndOpacity();
		class FText GetLabelText();
		void BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_StyledSpinner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
