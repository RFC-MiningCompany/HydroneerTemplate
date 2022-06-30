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
	 * WidgetBlueprintGeneratedClass UI_SwatchPanel.UI_SwatchPanel_C
	 * Size -> 0x0048 (FullSize[0x02A8] - InheritedSize[0x0260])
	 */
	class UUI_SwatchPanel_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UTextBlock*                                          Text_Description;                                        // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                            WrapBox_Swatches;                                        // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnUpdate;                                                // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FS_Customization_SwatchPanel                        SwatchPanel;                                             // 0x0288(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash

	public:
		void Init();
		void UpdateSelectionColor(const class FName& ColorID);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_SwatchPanel(int32_t EntryPoint);
		void OnUpdate__DelegateSignature(const class FName& ColorID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
