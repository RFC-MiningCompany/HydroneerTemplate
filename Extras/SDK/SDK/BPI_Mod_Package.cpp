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
	 * 		Name   -> Function BPI_Mod.BPI_Mod_C.RegisterStoreItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_StoreItem>                        Items                                                      (Parm, OutParm)
	 */
	void UBPI_Mod_C::RegisterStoreItems(TArray<struct FS_StoreItem>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Mod.BPI_Mod_C.RegisterStoreItems");
		
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
	 * 		Name   -> Function BPI_Mod.BPI_Mod_C.ModsLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ModTypes                                         ModTypes                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Mod_C::ModsLoaded(E_ModTypes ModTypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Mod.BPI_Mod_C.ModsLoaded");
		
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
	 * 		Name   -> Function BPI_Mod.BPI_Mod_C.RegisterItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_Item>                             Items                                                      (Parm, OutParm)
	 */
	void UBPI_Mod_C::RegisterItems(TArray<struct FS_Item>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Mod.BPI_Mod_C.RegisterItems");
		
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
	 * 		Name   -> Function BPI_Mod.BPI_Mod_C.ModStartup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_Mod                                      ModInfo                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		struct FS_ModLoaderConfig                          ModLoader_Config                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Mod_C::ModStartup(const struct FS_Mod& ModInfo, const struct FS_ModLoaderConfig& ModLoader_Config)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Mod.BPI_Mod_C.ModStartup");
		
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
	 * 		Name   -> PredefindFunction UBPI_Mod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Mod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Mod.BPI_Mod_C");
		return ptr;
	}

}


