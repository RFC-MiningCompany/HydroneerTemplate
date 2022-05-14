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
	 * WidgetBlueprintGeneratedClass UI_PlayerShelf.UI_PlayerShelf_C
	 * Size -> 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
	 */
	class UUI_PlayerShelf_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UButton*                                             Button_AddPlayer;                                        // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_Thumbnails;                                // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuAnchor*                                         MenuAnchor_AddPlayer;                                    // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnThumbnailSelected;                                     // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void ThumbnailSelected(class APlayerController* PlayerController, int32_t SessionID, class UTextureRenderTarget2D* RenderTarget);
		void AddPlayer(class APlayerController* PlayerController, int32_t SessionID);
		void BndEvt__UI_MenuPlayers_Button_AddPlayer_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void Construct();
		void ExecuteUbergraph_UI_PlayerShelf(int32_t EntryPoint);
		void OnThumbnailSelected__DelegateSignature(class APlayerController* PlayerController, int32_t SessionID, class UTextureRenderTarget2D* RenderTarget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
