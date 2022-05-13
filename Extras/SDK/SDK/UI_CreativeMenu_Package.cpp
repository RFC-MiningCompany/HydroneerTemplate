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
	 * 		Name   -> Function UI_CreativeMenu.UI_CreativeMenu_C.Get_DirtSettings_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_CreativeMenu_C::Get_DirtSettings_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CreativeMenu.UI_CreativeMenu_C.Get_DirtSettings_Visibility_1");
		
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
	 * 		Name   -> Function UI_CreativeMenu.UI_CreativeMenu_C.Get_DevResourceSettings_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_CreativeMenu_C::Get_DevResourceSettings_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CreativeMenu.UI_CreativeMenu_C.Get_DevResourceSettings_Visibility_1");
		
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
	 * 		Name   -> Function UI_CreativeMenu.UI_CreativeMenu_C.SearchItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Term                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<struct FS_Item>                             Items                                                      (Parm, OutParm)
	 */
	void UUI_CreativeMenu_C::SearchItems(const class FString& Term, TArray<struct FS_Item>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CreativeMenu.UI_CreativeMenu_C.SearchItems");
		
		struct
		{
			class FString                                      Term;
			TArray<struct FS_Item>                             Items;
		} params;
		params.Term = Term;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CreativeMenu.UI_CreativeMenu_C.GetItemsByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<struct FS_Item>                             Items                                                      (Parm, OutParm)
	 */
	void UUI_CreativeMenu_C::GetItemsByName(const class FString& ItemName, TArray<struct FS_Item>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CreativeMenu.UI_CreativeMenu_C.GetItemsByName");
		
		struct
		{
			class FString                                      ItemName;
			TArray<struct FS_Item>                             Items;
		} params;
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CreativeMenu.UI_CreativeMenu_C.SetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_Item                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_CreativeMenu_C::SetItem(const struct FS_Item& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CreativeMenu.UI_CreativeMenu_C.SetItem");
		
		struct
		{
			struct FS_Item                                     Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CreativeMenu.UI_CreativeMenu_C.ClearSelected
	 * 		Flags  -> ()
	 */
	void UUI_CreativeMenu_C::ClearSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CreativeMenu.UI_CreativeMenu_C.ClearSelected");
		
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
	 * 		Name   -> Function UI_CreativeMenu.UI_CreativeMenu_C.SpawnItem
	 * 		Flags  -> ()
	 */
	void UUI_CreativeMenu_C::SpawnItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CreativeMenu.UI_CreativeMenu_C.SpawnItem");
		
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
	 * 		Name   -> Function UI_CreativeMenu.UI_CreativeMenu_C.GetItemsByTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<struct FS_Item>                             Items                                                      (Parm, OutParm)
	 */
	void UUI_CreativeMenu_C::GetItemsByTag(const class FString& Tag, TArray<struct FS_Item>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CreativeMenu.UI_CreativeMenu_C.GetItemsByTag");
		
		struct
		{
			class FString                                      Tag;
			TArray<struct FS_Item>                             Items;
		} params;
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CreativeMenu.UI_CreativeMenu_C.GetAllUniqueTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              ItemTags                                                   (Parm, OutParm)
	 */
	void UUI_CreativeMenu_C::GetAllUniqueTags(TArray<class FString>* ItemTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CreativeMenu.UI_CreativeMenu_C.GetAllUniqueTags");
		
		struct
		{
			TArray<class FString>                              ItemTags;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemTags != nullptr)
			*ItemTags = params.ItemTags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CreativeMenu.UI_CreativeMenu_C.Get_ResourcePanel_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_CreativeMenu_C::Get_ResourcePanel_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CreativeMenu.UI_CreativeMenu_C.Get_ResourcePanel_Visibility_1");
		
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
	 * 		Name   -> Function UI_CreativeMenu.UI_CreativeMenu_C.BndEvt__UI_CreativeMenu_CategorySelector_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreativeMenu_C::BndEvt__UI_CreativeMenu_CategorySelector_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CreativeMenu.UI_CreativeMenu_C.BndEvt__UI_CreativeMenu_CategorySelector_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_CreativeMenu.UI_CreativeMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_CreativeMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CreativeMenu.UI_CreativeMenu_C.Construct");
		
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
	 * 		Name   -> Function UI_CreativeMenu.UI_CreativeMenu_C.BndEvt__UI_CreativeMenu_ResourceAmount_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreativeMenu_C::BndEvt__UI_CreativeMenu_ResourceAmount_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CreativeMenu.UI_CreativeMenu_C.BndEvt__UI_CreativeMenu_ResourceAmount_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_CreativeMenu.UI_CreativeMenu_C.BndEvt__UI_CreativeMenu_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreativeMenu_C::BndEvt__UI_CreativeMenu_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CreativeMenu.UI_CreativeMenu_C.BndEvt__UI_CreativeMenu_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_CreativeMenu.UI_CreativeMenu_C.BndEvt__UI_CreativeMenu_DevResouceWeight_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreativeMenu_C::BndEvt__UI_CreativeMenu_DevResouceWeight_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CreativeMenu.UI_CreativeMenu_C.BndEvt__UI_CreativeMenu_DevResouceWeight_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_CreativeMenu.UI_CreativeMenu_C.BndEvt__UI_CreativeMenu_DevResourceTypeSelector_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreativeMenu_C::BndEvt__UI_CreativeMenu_DevResourceTypeSelector_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CreativeMenu.UI_CreativeMenu_C.BndEvt__UI_CreativeMenu_DevResourceTypeSelector_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_CreativeMenu.UI_CreativeMenu_C.BndEvt__UI_CreativeMenu_DirtQualityTextBox_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreativeMenu_C::BndEvt__UI_CreativeMenu_DirtQualityTextBox_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CreativeMenu.UI_CreativeMenu_C.BndEvt__UI_CreativeMenu_DirtQualityTextBox_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_CreativeMenu.UI_CreativeMenu_C.ExecuteUbergraph_UI_CreativeMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreativeMenu_C::ExecuteUbergraph_UI_CreativeMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CreativeMenu.UI_CreativeMenu_C.ExecuteUbergraph_UI_CreativeMenu");
		
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
	 * 		Name   -> Function UI_CreativeMenu.UI_CreativeMenu_C.ToggleVisibility__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreativeMenu_C::ToggleVisibility__DelegateSignature(bool NewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CreativeMenu.UI_CreativeMenu_C.ToggleVisibility__DelegateSignature");
		
		struct
		{
			bool                                               NewVisibility;
		} params;
		params.NewVisibility = NewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_CreativeMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CreativeMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CreativeMenu.UI_CreativeMenu_C");
		return ptr;
	}

}


