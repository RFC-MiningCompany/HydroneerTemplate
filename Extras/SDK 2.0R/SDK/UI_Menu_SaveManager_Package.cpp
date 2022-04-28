/**
 * Name: Hydroneer
 * Version: 2.0R
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
	 * 		Name   -> Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.ShowCloudSaveConflictWarning?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        CloudTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        LocalTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_Menu_SaveManager_C::ShowCloudSaveConflictWarning_(bool Show_, const class FText& CloudTime, const class FText& LocalTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.ShowCloudSaveConflictWarning?");
		
		UUI_Menu_SaveManager_C_ShowCloudSaveConflictWarning__Params params {};
		params.Show_ = Show_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.OnCompleted_C53FDA2E40F890A4277525AEB4F182D7
	 * 		Flags  -> ()
	 */
	void UUI_Menu_SaveManager_C::OnCompleted_C53FDA2E40F890A4277525AEB4F182D7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.OnCompleted_C53FDA2E40F890A4277525AEB4F182D7");
		
		UUI_Menu_SaveManager_C_OnCompleted_C53FDA2E40F890A4277525AEB4F182D7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Menu_SaveManager_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.Construct");
		
		UUI_Menu_SaveManager_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.SaveSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Save                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_SaveManager_C::SaveSelected(const class FString& Save)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.SaveSelected");
		
		UUI_Menu_SaveManager_C_SaveSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.RefreshList
	 * 		Flags  -> ()
	 */
	void UUI_Menu_SaveManager_C::RefreshList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.RefreshList");
		
		UUI_Menu_SaveManager_C_RefreshList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.AnimateText
	 * 		Flags  -> ()
	 */
	void UUI_Menu_SaveManager_C::AnimateText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.AnimateText");
		
		UUI_Menu_SaveManager_C_AnimateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.RestoreDelete Button
	 * 		Flags  -> ()
	 */
	void UUI_Menu_SaveManager_C::RestoreDelete_Button()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.RestoreDelete Button");
		
		UUI_Menu_SaveManager_C_RestoreDelete_Button_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.BndEvt__UI_Menu_SaveManager_BackupVisibility_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Menu_SaveManager_C::BndEvt__UI_Menu_SaveManager_BackupVisibility_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.BndEvt__UI_Menu_SaveManager_BackupVisibility_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_Menu_SaveManager_C_BndEvt__UI_Menu_SaveManager_BackupVisibility_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.BndEvt__UI_Menu_SaveManager_H_ButtonMetal1_C_2_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_SaveManager_C::BndEvt__UI_Menu_SaveManager_H_ButtonMetal1_C_2_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.BndEvt__UI_Menu_SaveManager_H_ButtonMetal1_C_2_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
		
		UUI_Menu_SaveManager_C_BndEvt__UI_Menu_SaveManager_H_ButtonMetal1_C_2_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.BndEvt__UI_Menu_SaveManager_ButtonDeleteSave_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_SaveManager_C::BndEvt__UI_Menu_SaveManager_ButtonDeleteSave_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.BndEvt__UI_Menu_SaveManager_ButtonDeleteSave_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature");
		
		UUI_Menu_SaveManager_C_BndEvt__UI_Menu_SaveManager_ButtonDeleteSave_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.BndEvt__UI_Menu_SaveManager_H_ButtonMetal2_C_1_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_SaveManager_C::BndEvt__UI_Menu_SaveManager_H_ButtonMetal2_C_1_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.BndEvt__UI_Menu_SaveManager_H_ButtonMetal2_C_1_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");
		
		UUI_Menu_SaveManager_C_BndEvt__UI_Menu_SaveManager_H_ButtonMetal2_C_1_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.BndEvt__UI_Menu_SaveManager_H_ButtonMetal1_KeepLocal_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_SaveManager_C::BndEvt__UI_Menu_SaveManager_H_ButtonMetal1_KeepLocal_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.BndEvt__UI_Menu_SaveManager_H_ButtonMetal1_KeepLocal_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Menu_SaveManager_C_BndEvt__UI_Menu_SaveManager_H_ButtonMetal1_KeepLocal_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.BndEvt__UI_Menu_SaveManager_H_ButtonMetal1_KeepCloud_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_SaveManager_C::BndEvt__UI_Menu_SaveManager_H_ButtonMetal1_KeepCloud_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.BndEvt__UI_Menu_SaveManager_H_ButtonMetal1_KeepCloud_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Menu_SaveManager_C_BndEvt__UI_Menu_SaveManager_H_ButtonMetal1_KeepCloud_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.ExecuteUbergraph_UI_Menu_SaveManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_SaveManager_C::ExecuteUbergraph_UI_Menu_SaveManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_SaveManager.UI_Menu_SaveManager_C.ExecuteUbergraph_UI_Menu_SaveManager");
		
		UUI_Menu_SaveManager_C_ExecuteUbergraph_UI_Menu_SaveManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_Menu_SaveManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Menu_SaveManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Menu_SaveManager.UI_Menu_SaveManager_C");
		return ptr;
	}

}


