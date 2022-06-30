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
	 * WidgetBlueprintGeneratedClass StyledSliderSetting.StyledSliderSetting_C
	 * Size -> 0x0018 (FullSize[0x02E0] - InheritedSize[0x02C8])
	 */
	class UStyledSliderSetting_C : public UNativeSliderSetting
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UEditableTextBox*                                    TextBox;                                                 // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      LabelMultiplier;                                         // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    LabelFractionalDigits;                                   // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void Construct();
		void TextCommitted(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__StyledSliderSetting_HSlider_C_63_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void ExecuteUbergraph_StyledSliderSetting(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
