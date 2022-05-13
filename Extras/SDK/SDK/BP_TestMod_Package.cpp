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
	 * 		Name   -> Function BP_TestMod.BP_TestMod_C.OnModStartup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_ModLoaderConfig                          Loader_Config                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TestMod_C::OnModStartup(struct FS_ModLoaderConfig* Loader_Config)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TestMod.BP_TestMod_C.OnModStartup");
		
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
	 * 		Name   -> Function BP_TestMod.BP_TestMod_C.RegisterItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_Item>                             Items                                                      (Parm, OutParm)
	 */
	void ABP_TestMod_C::RegisterItems(TArray<struct FS_Item>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TestMod.BP_TestMod_C.RegisterItems");
		
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
	 * 		Name   -> Function BP_TestMod.BP_TestMod_C.RegisterStoreItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_StoreItem>                        Items                                                      (Parm, OutParm)
	 */
	void ABP_TestMod_C::RegisterStoreItems(TArray<struct FS_StoreItem>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TestMod.BP_TestMod_C.RegisterStoreItems");
		
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
	 * 		Name   -> PredefindFunction ABP_TestMod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TestMod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TestMod.BP_TestMod_C");
		return ptr;
	}

}


