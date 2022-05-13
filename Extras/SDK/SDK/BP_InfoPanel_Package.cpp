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
	 * 		Name   -> Function BP_InfoPanel.BP_InfoPanel_C.RegisterItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_Item>                             Items                                                      (Parm, OutParm)
	 */
	void ABP_InfoPanel_C::RegisterItems(TArray<struct FS_Item>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InfoPanel.BP_InfoPanel_C.RegisterItems");
		
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
	 * 		Name   -> Function BP_InfoPanel.BP_InfoPanel_C.RegisterStoreItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_StoreItem>                        Items                                                      (Parm, OutParm)
	 */
	void ABP_InfoPanel_C::RegisterStoreItems(TArray<struct FS_StoreItem>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InfoPanel.BP_InfoPanel_C.RegisterStoreItems");
		
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
	 * 		Name   -> Function BP_InfoPanel.BP_InfoPanel_C.ModStartup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_Mod                                      ModInfo                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		struct FS_ModLoaderConfig                          ModLoader_Config                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_InfoPanel_C::ModStartup(const struct FS_Mod& ModInfo, const struct FS_ModLoaderConfig& ModLoader_Config)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InfoPanel.BP_InfoPanel_C.ModStartup");
		
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
	 * 		Name   -> Function BP_InfoPanel.BP_InfoPanel_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_InfoPanel_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InfoPanel.BP_InfoPanel_C.ReceiveTick");
		
		struct
		{
			float                                              DeltaSeconds;
		} params;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InfoPanel.BP_InfoPanel_C.ModsLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ModTypes                                         ModTypes                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_InfoPanel_C::ModsLoaded(E_ModTypes ModTypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InfoPanel.BP_InfoPanel_C.ModsLoaded");
		
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
	 * 		Name   -> Function BP_InfoPanel.BP_InfoPanel_C.ExecuteUbergraph_BP_InfoPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_InfoPanel_C::ExecuteUbergraph_BP_InfoPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InfoPanel.BP_InfoPanel_C.ExecuteUbergraph_BP_InfoPanel");
		
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
	 * 		Name   -> PredefindFunction ABP_InfoPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_InfoPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InfoPanel.BP_InfoPanel_C");
		return ptr;
	}

}


