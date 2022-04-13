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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.UpdateSelectedTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UH_ButtonSettingsTab_C*                      Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::UpdateSelectedTab(class UH_ButtonSettingsTab_C* Tab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.UpdateSelectedTab");
		
		UUI_Menu_Mods_C_UpdateSelectedTab_Params params {};
		params.Tab = Tab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.UpdateModDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamUGCDetails                            ModDetails                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_Menu_Mods_C::UpdateModDetails(const struct FSteamUGCDetails& ModDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.UpdateModDetails");
		
		UUI_Menu_Mods_C_UpdateModDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.UpdateInstalledModDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamUGCDetails                            ModDetails                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_Menu_Mods_C::UpdateInstalledModDetails(const struct FSteamUGCDetails& ModDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.UpdateInstalledModDetails");
		
		UUI_Menu_Mods_C_UpdateInstalledModDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.CheckInstalledModDiscrepancies
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::CheckInstalledModDiscrepancies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.CheckInstalledModDiscrepancies");
		
		UUI_Menu_Mods_C_CheckInstalledModDiscrepancies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               invalidEntry_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::SetTextColor(bool invalidEntry_, class UTextBlock* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.SetTextColor");
		
		UUI_Menu_Mods_C_SetTextColor_Params params {};
		params.invalidEntry_ = invalidEntry_;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.CheckUpdate
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::CheckUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.CheckUpdate");
		
		UUI_Menu_Mods_C_CheckUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.LimitCharacterCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UUI_Menu_Mods_C::LimitCharacterCount(const class FText& InText, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.LimitCharacterCount");
		
		UUI_Menu_Mods_C_LimitCharacterCount_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.FindThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UTexture2D* UUI_Menu_Mods_C::FindThumbnail(const class FString& Directory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.FindThumbnail");
		
		UUI_Menu_Mods_C_FindThumbnail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.SetModFileID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPublishedFileID                            FileID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::SetModFileID(const struct FPublishedFileID& FileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.SetModFileID");
		
		UUI_Menu_Mods_C_SetModFileID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.GenerateMetadata
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::GenerateMetadata()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.GenerateMetadata");
		
		UUI_Menu_Mods_C_GenerateMetadata_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.CheckImagePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Valid_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  ImageTexture                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::CheckImagePath(const class FString& Path, bool* Valid_, class UTexture2D** ImageTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.CheckImagePath");
		
		UUI_Menu_Mods_C_CheckImagePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid_ != nullptr)
			*Valid_ = params.Valid_;
		if (ImageTexture != nullptr)
			*ImageTexture = params.ImageTexture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.InitComboBox_Visibility
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::InitComboBox_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.InitComboBox_Visibility");
		
		UUI_Menu_Mods_C_InitComboBox_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.EvaluateUpload
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::EvaluateUpload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.EvaluateUpload");
		
		UUI_Menu_Mods_C_EvaluateUpload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.SetModVisibility
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::SetModVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.SetModVisibility");
		
		UUI_Menu_Mods_C_SetModVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.SetModPreview
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::SetModPreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.SetModPreview");
		
		UUI_Menu_Mods_C_SetModPreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.SetModTags
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::SetModTags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.SetModTags");
		
		UUI_Menu_Mods_C_SetModTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.SetModDescription
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::SetModDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.SetModDescription");
		
		UUI_Menu_Mods_C_SetModDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.SetModTitle
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::SetModTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.SetModTitle");
		
		UUI_Menu_Mods_C_SetModTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.QueryReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamUGCQueryCompleted                     Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPanelWidget*                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::QueryReceived(const struct FSteamUGCQueryCompleted& Data, bool bWasSuccessful, class UPanelWidget* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.QueryReceived");
		
		UUI_Menu_Mods_C_QueryReceived_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.Init
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.Init");
		
		UUI_Menu_Mods_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.OnCallback_50E16AF84B7BEC154FE5C5B55718BB72
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRemoteStorageSubscribePublishedFileResult  Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Menu_Mods_C::OnCallback_50E16AF84B7BEC154FE5C5B55718BB72(const struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.OnCallback_50E16AF84B7BEC154FE5C5B55718BB72");
		
		UUI_Menu_Mods_C_OnCallback_50E16AF84B7BEC154FE5C5B55718BB72_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.RefreshUGC
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::RefreshUGC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.RefreshUGC");
		
		UUI_Menu_Mods_C_RefreshUGC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.CB_CreateItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCreateItemResult                           Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Menu_Mods_C::CB_CreateItem(const struct FCreateItemResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.CB_CreateItem");
		
		UUI_Menu_Mods_C_CB_CreateItem_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.RefreshInstalledMods
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::RefreshInstalledMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.RefreshInstalledMods");
		
		UUI_Menu_Mods_C_RefreshInstalledMods_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.Construct");
		
		UUI_Menu_Mods_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.ItemUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubmitItemUpdateResult                     Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Menu_Mods_C::ItemUpdated(const struct FSubmitItemUpdateResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.ItemUpdated");
		
		UUI_Menu_Mods_C_ItemUpdated_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.UGCRequest Callback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamUGCQueryCompleted                     Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Menu_Mods_C::UGCRequest_Callback(const struct FSteamUGCQueryCompleted& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.UGCRequest Callback");
		
		UUI_Menu_Mods_C_UGCRequest_Callback_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_H_ComboBox_C_106_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_H_ComboBox_C_106_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_H_ComboBox_C_106_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");
		
		UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_H_ComboBox_C_106_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ThumbnailImage_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_EditableText_ThumbnailImage_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ThumbnailImage_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature");
		
		UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_EditableText_ThumbnailImage_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_ButtonLoadSave_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_ButtonLoadSave_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_ButtonLoadSave_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_ButtonLoadSave_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ModDirectory_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_EditableText_ModDirectory_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ModDirectory_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature");
		
		UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_EditableText_ModDirectory_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ModName_1_K2Node_ComponentBoundEvent_7_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_EditableText_ModName_1_K2Node_ComponentBoundEvent_7_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ModName_1_K2Node_ComponentBoundEvent_7_OnEditableTextCommittedEvent__DelegateSignature");
		
		UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_EditableText_ModName_1_K2Node_ComponentBoundEvent_7_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_MultiLineEditableText_ModDescription_K2Node_ComponentBoundEvent_8_OnMultiLineEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_MultiLineEditableText_ModDescription_K2Node_ComponentBoundEvent_8_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_MultiLineEditableText_ModDescription_K2Node_ComponentBoundEvent_8_OnMultiLineEditableTextCommittedEvent__DelegateSignature");
		
		UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_MultiLineEditableText_ModDescription_K2Node_ComponentBoundEvent_8_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ModTitle_K2Node_ComponentBoundEvent_10_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_EditableText_ModTitle_K2Node_ComponentBoundEvent_10_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ModTitle_K2Node_ComponentBoundEvent_10_OnEditableTextChangedEvent__DelegateSignature");
		
		UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_EditableText_ModTitle_K2Node_ComponentBoundEvent_10_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_MultiLineEditableText_ModDescription_K2Node_ComponentBoundEvent_11_OnMultiLineEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_MultiLineEditableText_ModDescription_K2Node_ComponentBoundEvent_11_OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_MultiLineEditableText_ModDescription_K2Node_ComponentBoundEvent_11_OnMultiLineEditableTextChangedEvent__DelegateSignature");
		
		UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_MultiLineEditableText_ModDescription_K2Node_ComponentBoundEvent_11_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ModID_K2Node_ComponentBoundEvent_12_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_EditableText_ModID_K2Node_ComponentBoundEvent_12_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ModID_K2Node_ComponentBoundEvent_12_OnEditableTextChangedEvent__DelegateSignature");
		
		UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_EditableText_ModID_K2Node_ComponentBoundEvent_12_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.UpdateMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPublishedFileID                            PublishedFileID                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::UpdateMod(const struct FPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.UpdateMod");
		
		UUI_Menu_Mods_C_UpdateMod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Menu_Mods_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.PreConstruct");
		
		UUI_Menu_Mods_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_H_ComboBox_C_Visibility_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_H_ComboBox_C_Visibility_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_H_ComboBox_C_Visibility_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature");
		
		UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_H_ComboBox_C_Visibility_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_H_ButtonWood1_ReloadMods_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_H_ButtonWood1_ReloadMods_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_H_ButtonWood1_ReloadMods_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_H_ButtonWood1_ReloadMods_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_VideoButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_VideoButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_VideoButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_VideoButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_HButton_InstalledMods_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_HButton_InstalledMods_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_HButton_InstalledMods_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_HButton_InstalledMods_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_HButton_UploadMod_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_HButton_UploadMod_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_HButton_UploadMod_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_HButton_UploadMod_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.ExecuteUbergraph_UI_Menu_Mods
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::ExecuteUbergraph_UI_Menu_Mods(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.ExecuteUbergraph_UI_Menu_Mods");
		
		UUI_Menu_Mods_C_ExecuteUbergraph_UI_Menu_Mods_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_Menu_Mods_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Menu_Mods_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Menu_Mods.UI_Menu_Mods_C");
		return ptr;
	}

}


