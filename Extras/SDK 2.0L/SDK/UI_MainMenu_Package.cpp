/**
 * Name: Hydroneer
 * Version: 2.0L
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.OpenPersistentWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MainMenu_C::OpenPersistentWidget(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OpenPersistentWidget");
		
		UUI_MainMenu_C_OpenPersistentWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.CloseUI
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::CloseUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.CloseUI");
		
		UUI_MainMenu_C_CloseUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.OpenSpawnedWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MainMenu_C::OpenSpawnedWidget(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OpenSpawnedWidget");
		
		UUI_MainMenu_C_OpenSpawnedWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__FutureUpdatesButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__FutureUpdatesButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__FutureUpdatesButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__FutureUpdatesButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__YTButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__YTButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__YTButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__YTButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__TwitterButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__TwitterButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__TwitterButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__TwitterButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UKButton_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UKButton_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UKButton_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UKButton_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__RUButton_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__RUButton_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__RUButton_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__RUButton_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__PirateButton_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__PirateButton_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__PirateButton_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__PirateButton_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__PTButton_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__PTButton_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__PTButton_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__PTButton_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__DEButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__DEButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__DEButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__DEButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__FRButton_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__FRButton_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__FRButton_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__FRButton_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__TRButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__TRButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__TRButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__TRButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__NLButton_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__NLButton_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__NLButton_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__NLButton_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__PLButton_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__PLButton_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__PLButton_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__PLButton_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__WikiButton_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__WikiButton_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__WikiButton_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__WikiButton_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__CZButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__CZButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__CZButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__CZButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__ZHButton_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__ZHButton_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__ZHButton_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__ZHButton_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__RoButton_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__RoButton_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__RoButton_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__RoButton_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__TWButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__TWButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__TWButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__TWButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__KOButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__KOButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__KOButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__KOButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Construct");
		
		UUI_MainMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__ItButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__ItButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__ItButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__ItButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__ModsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__ModsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__ModsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__ModsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__ARButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__ARButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__ARButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__ARButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__QuitPanelButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__QuitPanelButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__QuitPanelButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__QuitPanelButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__DiscordButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__DiscordButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__DiscordButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__DiscordButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__SettingsPanelButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__SettingsPanelButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__SettingsPanelButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__SettingsPanelButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_ContinueButton_1_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_ContinueButton_1_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_ContinueButton_1_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_ContinueButton_1_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Destruct");
		
		UUI_MainMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__PatchNotesButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__PatchNotesButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__PatchNotesButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__PatchNotesButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_PlayerShelf_K2Node_ComponentBoundEvent_1_OnThumbnailSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SessionID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_UI_PlayerShelf_K2Node_ComponentBoundEvent_1_OnThumbnailSelected__DelegateSignature(class APlayerController* PlayerController, int32_t SessionID, class UTextureRenderTarget2D* RenderTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_UI_PlayerShelf_K2Node_ComponentBoundEvent_1_OnThumbnailSelected__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_UI_PlayerShelf_K2Node_ComponentBoundEvent_1_OnThumbnailSelected__DelegateSignature_Params params {};
		params.PlayerController = PlayerController;
		params.SessionID = SessionID;
		params.RenderTarget = RenderTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_NewGameCancelButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_NewGameCancelButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_NewGameCancelButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_NewGameCancelButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_NewGameConfirmButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_NewGameConfirmButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_NewGameConfirmButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_NewGameConfirmButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__NewGameButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__NewGameButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__NewGameButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__NewGameButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_MerchButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_MainMenu_C::BndEvt__UI_MainMenu_MerchButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_MerchButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MainMenu_C_BndEvt__UI_MainMenu_MerchButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MainMenu.UI_MainMenu_C.ExecuteUbergraph_UI_MainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MainMenu_C::ExecuteUbergraph_UI_MainMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.ExecuteUbergraph_UI_MainMenu");
		
		UUI_MainMenu_C_ExecuteUbergraph_UI_MainMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_MainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MainMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MainMenu.UI_MainMenu_C");
		return ptr;
	}

}


