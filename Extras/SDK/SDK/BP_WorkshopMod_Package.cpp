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
	 * 		Name   -> Function BP_WorkshopMod.BP_WorkshopMod_C.RegisterItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_Item>                             Items                                                      (Parm, OutParm)
	 */
	void ABP_WorkshopMod_C::RegisterItems(TArray<struct FS_Item>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WorkshopMod.BP_WorkshopMod_C.RegisterItems");
		
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
	 * 		Name   -> Function BP_WorkshopMod.BP_WorkshopMod_C.RegisterStoreItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_StoreItem>                        Items                                                      (Parm, OutParm)
	 */
	void ABP_WorkshopMod_C::RegisterStoreItems(TArray<struct FS_StoreItem>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WorkshopMod.BP_WorkshopMod_C.RegisterStoreItems");
		
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
	 * 		Name   -> Function BP_WorkshopMod.BP_WorkshopMod_C.OnModStartup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_ModLoaderConfig                          Loader_Config                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WorkshopMod_C::OnModStartup(struct FS_ModLoaderConfig* Loader_Config)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WorkshopMod.BP_WorkshopMod_C.OnModStartup");
		
		struct
		{
			struct FS_ModLoaderConfig                          Loader_Config;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Loader_Config != nullptr)
			*Loader_Config = params.Loader_Config;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WorkshopMod.BP_WorkshopMod_C.ModsLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ModTypes                                         ModTypes                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WorkshopMod_C::ModsLoaded(E_ModTypes ModTypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WorkshopMod.BP_WorkshopMod_C.ModsLoaded");
		
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
	 * 		Name   -> Function BP_WorkshopMod.BP_WorkshopMod_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_WorkshopMod_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WorkshopMod.BP_WorkshopMod_C.ReceiveBeginPlay");
		
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
	 * 		Name   -> Function BP_WorkshopMod.BP_WorkshopMod_C.ModStartup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_Mod                                      ModInfo                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		struct FS_ModLoaderConfig                          ModLoader_Config                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WorkshopMod_C::ModStartup(const struct FS_Mod& ModInfo, const struct FS_ModLoaderConfig& ModLoader_Config)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WorkshopMod.BP_WorkshopMod_C.ModStartup");
		
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
	 * 		Name   -> Function BP_WorkshopMod.BP_WorkshopMod_C.ExecuteUbergraph_BP_WorkshopMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WorkshopMod_C::ExecuteUbergraph_BP_WorkshopMod(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WorkshopMod.BP_WorkshopMod_C.ExecuteUbergraph_BP_WorkshopMod");
		
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
	 * 		Name   -> PredefindFunction ABP_WorkshopMod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WorkshopMod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WorkshopMod.BP_WorkshopMod_C");
		return ptr;
	}

}


