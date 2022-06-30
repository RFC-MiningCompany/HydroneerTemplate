/**
 * Name: Hydroneer
 * Version: 2.0
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.UpdateSelectedTab");
		
		struct
		{
			class UH_ButtonSettingsTab_C*                      Tab;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.UpdateModDetails");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.UpdateInstalledModDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamUGCDetails                            ModDetails                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_Menu_Mods_C::UpdateInstalledModDetails(const struct FSteamUGCDetails& ModDetails)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.UpdateInstalledModDetails");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.CheckInstalledModDiscrepancies
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::CheckInstalledModDiscrepancies()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.CheckInstalledModDiscrepancies");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               invalidEntry_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::SetTextColor(bool invalidEntry_, class UTextBlock* Text)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.SetTextColor");
		
		struct
		{
			bool                                               invalidEntry_;
			class UTextBlock*                                  Text;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.CheckUpdate");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.LimitCharacterCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UUI_Menu_Mods_C::LimitCharacterCount(const class FText& InText, int32_t Count)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.LimitCharacterCount");
		
		struct
		{
			class FText                                        InText;
			int32_t                                            Count;
		} params;
		params.InText = InText;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.FindThumbnail");
		
		struct
		{
			class FString                                      Directory;
		} params;
		params.Directory = Directory;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.SetModFileID");
		
		struct
		{
			struct FPublishedFileID                            FileID;
		} params;
		params.FileID = FileID;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.GenerateMetadata");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.CheckImagePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Valid_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  ImageTexture                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::CheckImagePath(const class FString& Path, bool* Valid_, class UTexture2D** ImageTexture)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.CheckImagePath");
		
		struct
		{
			class FString                                      Path;
			bool                                               Valid_;
			class UTexture2D*                                  ImageTexture;
		} params;
		params.Path = Path;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.InitComboBox_Visibility");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.EvaluateUpload
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::EvaluateUpload()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.EvaluateUpload");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.SetModVisibility
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::SetModVisibility()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.SetModVisibility");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.SetModPreview
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::SetModPreview()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.SetModPreview");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.SetModTags
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::SetModTags()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.SetModTags");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.SetModDescription
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::SetModDescription()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.SetModDescription");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.SetModTitle
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::SetModTitle()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.SetModTitle");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.QueryReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamUGCQueryCompleted                     Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPanelWidget*                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::QueryReceived(const struct FSteamUGCQueryCompleted& Data, bool bWasSuccessful, class UPanelWidget* Target)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.QueryReceived");
		
		struct
		{
			struct FSteamUGCQueryCompleted                     Data;
			bool                                               bWasSuccessful;
			class UPanelWidget*                                Target;
		} params;
		params.Data = Data;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.Init");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.OnCallback_50E16AF84B7BEC154FE5C5B55718BB72
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRemoteStorageSubscribePublishedFileResult  Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Menu_Mods_C::OnCallback_50E16AF84B7BEC154FE5C5B55718BB72(const struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.OnCallback_50E16AF84B7BEC154FE5C5B55718BB72");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.RefreshUGC
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::RefreshUGC()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.RefreshUGC");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.CB_CreateItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCreateItemResult                           Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Menu_Mods_C::CB_CreateItem(const struct FCreateItemResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.CB_CreateItem");
		
		struct
		{
			struct FCreateItemResult                           Data;
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.RefreshInstalledMods
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::RefreshInstalledMods()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.RefreshInstalledMods");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.Construct");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.ItemUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubmitItemUpdateResult                     Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Menu_Mods_C::ItemUpdated(const struct FSubmitItemUpdateResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.ItemUpdated");
		
		struct
		{
			struct FSubmitItemUpdateResult                     Data;
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.UGCRequest Callback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamUGCQueryCompleted                     Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Menu_Mods_C::UGCRequest_Callback(const struct FSteamUGCQueryCompleted& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.UGCRequest Callback");
		
		struct
		{
			struct FSteamUGCQueryCompleted                     Data;
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_H_ComboBox_C_106_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_H_ComboBox_C_106_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_H_ComboBox_C_106_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");
		
		struct
		{
			class FString                                      SelectedItem;
			ESelectInfo                                        SelectionType;
		} params;
		params.SelectedItem = SelectedItem;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ThumbnailImage_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature");
		
		struct
		{
			class FText                                        Text;
			ETextCommit                                        CommitMethod;
		} params;
		params.Text = Text;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_ButtonLoadSave_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ModDirectory_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_EditableText_ModDirectory_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ModDirectory_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature");
		
		struct
		{
			class FText                                        Text;
			ETextCommit                                        CommitMethod;
		} params;
		params.Text = Text;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ModName_1_K2Node_ComponentBoundEvent_7_OnEditableTextCommittedEvent__DelegateSignature");
		
		struct
		{
			class FText                                        Text;
			ETextCommit                                        CommitMethod;
		} params;
		params.Text = Text;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_MultiLineEditableText_ModDescription_K2Node_ComponentBoundEvent_8_OnMultiLineEditableTextCommittedEvent__DelegateSignature");
		
		struct
		{
			class FText                                        Text;
			ETextCommit                                        CommitMethod;
		} params;
		params.Text = Text;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ModTitle_K2Node_ComponentBoundEvent_10_OnEditableTextChangedEvent__DelegateSignature");
		
		struct
		{
			class FText                                        Text;
		} params;
		params.Text = Text;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_MultiLineEditableText_ModDescription_K2Node_ComponentBoundEvent_11_OnMultiLineEditableTextChangedEvent__DelegateSignature");
		
		struct
		{
			class FText                                        Text;
		} params;
		params.Text = Text;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_EditableText_ModID_K2Node_ComponentBoundEvent_12_OnEditableTextChangedEvent__DelegateSignature");
		
		struct
		{
			class FText                                        Text;
		} params;
		params.Text = Text;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.UpdateMod");
		
		struct
		{
			struct FPublishedFileID                            PublishedFileID;
		} params;
		params.PublishedFileID = PublishedFileID;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.PreConstruct");
		
		struct
		{
			bool                                               IsDesignTime;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_H_ComboBox_C_Visibility_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature");
		
		struct
		{
			class FString                                      SelectedItem;
			ESelectInfo                                        SelectionType;
		} params;
		params.SelectedItem = SelectedItem;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_H_ButtonWood1_ReloadMods_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_VideoButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_VideoButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_VideoButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_HButton_InstalledMods_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_HButton_InstalledMods_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_HButton_InstalledMods_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_HButton_UploadMod_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Menu_Mods_C::BndEvt__UI_Menu_Mods_HButton_UploadMod_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_HButton_UploadMod_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_Menu_Mods.UI_Menu_Mods_C.ExecuteUbergraph_UI_Menu_Mods
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_Mods_C::ExecuteUbergraph_UI_Menu_Mods(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Mods.UI_Menu_Mods_C.ExecuteUbergraph_UI_Menu_Mods");
		
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
	 * 		Name   -> PredefindFunction UUI_Menu_Mods_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Menu_Mods_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Menu_Mods.UI_Menu_Mods_C");
		return ptr;
	}

}


