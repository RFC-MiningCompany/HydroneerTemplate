/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.On_Border_Body_MouseButtonDown_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUI_Menu_ModItem_C::On_Border_Body_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.On_Border_Body_MouseButtonDown_1");
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			struct FPointerEvent                               MouseEvent;
		} params;
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.HasDiscrepancy?
	 * 		Flags  -> ()
	 */
	bool UUI_Menu_ModItem_C::HasDiscrepancy_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.HasDiscrepancy?");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.CheckMountStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Mounted_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Menu_ModItem_C::CheckMountStatus(bool* Mounted_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.CheckMountStatus");
		
		struct
		{
			bool                                               Mounted_;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mounted_ != nullptr)
			*Mounted_ = params.Mounted_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.UpdateBorder
	 * 		Flags  -> ()
	 */
	void UUI_Menu_ModItem_C::UpdateBorder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.UpdateBorder");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.InitEnabledCheckState
	 * 		Flags  -> ()
	 */
	void UUI_Menu_ModItem_C::InitEnabledCheckState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.InitEnabledCheckState");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.GetModPreviewImage
	 * 		Flags  -> ()
	 */
	void UUI_Menu_ModItem_C::GetModPreviewImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.GetModPreviewImage");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.UpdateSubscribeText
	 * 		Flags  -> ()
	 */
	void UUI_Menu_ModItem_C::UpdateSubscribeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.UpdateSubscribeText");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.SubscribeResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRemoteStorageSubscribePublishedFileResult  Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Menu_ModItem_C::SubscribeResult(const struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.SubscribeResult");
		
		struct
		{
			struct FRemoteStorageSubscribePublishedFileResult  Data;
			bool                                               bWasSuccessful;
		} params;
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.UnsubscribeResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRemoteStorageSubscribePublishedFileResult  Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Menu_ModItem_C::UnsubscribeResult(const struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.UnsubscribeResult");
		
		struct
		{
			struct FRemoteStorageSubscribePublishedFileResult  Data;
			bool                                               bWasSuccessful;
		} params;
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.BndEvt__UI_Menu_ModItem_H_ButtonMetal2_Sub_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_ModItem_C::BndEvt__UI_Menu_ModItem_H_ButtonMetal2_Sub_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.BndEvt__UI_Menu_ModItem_H_ButtonMetal2_Sub_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Menu_ModItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.Construct");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.BndEvt__UI_Menu_ModItem_HCheckbox_C_Enabled_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Menu_ModItem_C::BndEvt__UI_Menu_ModItem_HCheckbox_C_Enabled_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.BndEvt__UI_Menu_ModItem_HCheckbox_C_Enabled_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		struct
		{
			bool                                               bIsChecked;
		} params;
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.ExecuteUbergraph_UI_Menu_ModItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_ModItem_C::ExecuteUbergraph_UI_Menu_ModItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.ExecuteUbergraph_UI_Menu_ModItem");
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamUGCDetails                            ModDetails                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_Menu_ModItem_C::OnClicked__DelegateSignature(const struct FSteamUGCDetails& ModDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.OnClicked__DelegateSignature");
		
		struct
		{
			struct FSteamUGCDetails                            ModDetails;
		} params;
		params.ModDetails = ModDetails;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.OnUpdate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_ModItem_C::OnUpdate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.OnUpdate__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.Unsubscribe__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_ModItem_C::Unsubscribe__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.Unsubscribe__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_ModItem.UI_Menu_ModItem_C.Subscribe__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_ModItem_C::Subscribe__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_ModItem.UI_Menu_ModItem_C.Subscribe__DelegateSignature");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_Menu_ModItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Menu_ModItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Menu_ModItem.UI_Menu_ModItem_C");
		return ptr;
	}

}


