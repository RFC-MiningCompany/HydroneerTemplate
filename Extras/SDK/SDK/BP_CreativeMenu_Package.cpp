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
	 * 		Name   -> Function BP_CreativeMenu.BP_CreativeMenu_C.RegisterItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_Item>                             Items                                                      (Parm, OutParm)
	 */
	void ABP_CreativeMenu_C::RegisterItems(TArray<struct FS_Item>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CreativeMenu.BP_CreativeMenu_C.RegisterItems");
		
		struct
		{
			TArray<struct FS_Item>                             Items;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CreativeMenu.BP_CreativeMenu_C.RegisterStoreItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_StoreItem>                        Items                                                      (Parm, OutParm)
	 */
	void ABP_CreativeMenu_C::RegisterStoreItems(TArray<struct FS_StoreItem>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CreativeMenu.BP_CreativeMenu_C.RegisterStoreItems");
		
		struct
		{
			TArray<struct FS_StoreItem>                        Items;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CreativeMenu.BP_CreativeMenu_C.SetUIVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CreativeMenu_C::SetUIVisibility(bool bIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CreativeMenu.BP_CreativeMenu_C.SetUIVisibility");
		
		struct
		{
			bool                                               bIsVisible;
		} params;
		params.bIsVisible = bIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CreativeMenu.BP_CreativeMenu_C.GetItemByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FS_Item                                     Item                                                       (Parm, OutParm, HasGetValueTypeHash)
	 */
	void ABP_CreativeMenu_C::GetItemByClass(class UClass* ItemClass, struct FS_Item* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CreativeMenu.BP_CreativeMenu_C.GetItemByClass");
		
		struct
		{
			class UClass*                                      ItemClass;
			struct FS_Item                                     Item;
		} params;
		params.ItemClass = ItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CreativeMenu.BP_CreativeMenu_C.DestroyActor
	 * 		Flags  -> ()
	 */
	void ABP_CreativeMenu_C::DestroyActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CreativeMenu.BP_CreativeMenu_C.DestroyActor");
		
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
	 * 		Name   -> Function BP_CreativeMenu.BP_CreativeMenu_C.LoadModItems
	 * 		Flags  -> ()
	 */
	void ABP_CreativeMenu_C::LoadModItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CreativeMenu.BP_CreativeMenu_C.LoadModItems");
		
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
	 * 		Name   -> Function BP_CreativeMenu.BP_CreativeMenu_C.GetTagBasedOnItemParent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              Tags                                                       (Parm, OutParm)
	 */
	void ABP_CreativeMenu_C::GetTagBasedOnItemParent(class UClass* Item, TArray<class FString>* Tags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CreativeMenu.BP_CreativeMenu_C.GetTagBasedOnItemParent");
		
		struct
		{
			class UClass*                                      Item;
			TArray<class FString>                              Tags;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tags != nullptr)
			*Tags = params.Tags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CreativeMenu.BP_CreativeMenu_C.LoadGameItems
	 * 		Flags  -> ()
	 */
	void ABP_CreativeMenu_C::LoadGameItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CreativeMenu.BP_CreativeMenu_C.LoadGameItems");
		
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
	 * 		Name   -> Function BP_CreativeMenu.BP_CreativeMenu_C.LoadAllItems
	 * 		Flags  -> ()
	 */
	void ABP_CreativeMenu_C::LoadAllItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CreativeMenu.BP_CreativeMenu_C.LoadAllItems");
		
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
	 * 		Name   -> Function BP_CreativeMenu.BP_CreativeMenu_C.InpActEvt_F7_K2Node_InputKeyEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_CreativeMenu_C::InpActEvt_F7_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CreativeMenu.BP_CreativeMenu_C.InpActEvt_F7_K2Node_InputKeyEvent_4");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CreativeMenu.BP_CreativeMenu_C.InpActEvt_Ctrl_MiddleMouseButton_K2Node_InputKeyEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_CreativeMenu_C::InpActEvt_Ctrl_MiddleMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CreativeMenu.BP_CreativeMenu_C.InpActEvt_Ctrl_MiddleMouseButton_K2Node_InputKeyEvent_3");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CreativeMenu.BP_CreativeMenu_C.InpActEvt_EscMenu_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_CreativeMenu_C::InpActEvt_EscMenu_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CreativeMenu.BP_CreativeMenu_C.InpActEvt_EscMenu_K2Node_InputActionEvent_1");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CreativeMenu.BP_CreativeMenu_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_CreativeMenu_C::InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CreativeMenu.BP_CreativeMenu_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_2");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CreativeMenu.BP_CreativeMenu_C.InpActEvt_Ctrl_C_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_CreativeMenu_C::InpActEvt_Ctrl_C_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CreativeMenu.BP_CreativeMenu_C.InpActEvt_Ctrl_C_K2Node_InputKeyEvent_1");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CreativeMenu.BP_CreativeMenu_C.ModStartup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_Mod                                      ModInfo                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		struct FS_ModLoaderConfig                          ModLoader_Config                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CreativeMenu_C::ModStartup(const struct FS_Mod& ModInfo, const struct FS_ModLoaderConfig& ModLoader_Config)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CreativeMenu.BP_CreativeMenu_C.ModStartup");
		
		struct
		{
			struct FS_Mod                                      ModInfo;
			struct FS_ModLoaderConfig                          ModLoader_Config;
		} params;
		params.ModInfo = ModInfo;
		params.ModLoader_Config = ModLoader_Config;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CreativeMenu.BP_CreativeMenu_C.ModsLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ModTypes                                         ModTypes                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CreativeMenu_C::ModsLoaded(E_ModTypes ModTypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CreativeMenu.BP_CreativeMenu_C.ModsLoaded");
		
		struct
		{
			E_ModTypes                                         ModTypes;
		} params;
		params.ModTypes = ModTypes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CreativeMenu.BP_CreativeMenu_C.ExecuteUbergraph_BP_CreativeMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CreativeMenu_C::ExecuteUbergraph_BP_CreativeMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CreativeMenu.BP_CreativeMenu_C.ExecuteUbergraph_BP_CreativeMenu");
		
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
	 * 		Name   -> PredefindFunction ABP_CreativeMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CreativeMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CreativeMenu.BP_CreativeMenu_C");
		return ptr;
	}

}


