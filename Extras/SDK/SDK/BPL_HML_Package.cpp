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
	 * 		Name   -> Function BPL_HML.BPL_HML_C.RegisterMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPL_HML_C::RegisterMod(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_HML.BPL_HML_C.RegisterMod");
		
		struct
		{
			class UObject*                                     __WorldContext;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_HML.BPL_HML_C.Set Loader Config
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_ModLoaderConfig                          Mod_Loader_Config                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPL_HML_C::Set_Loader_Config(const struct FS_ModLoaderConfig& Mod_Loader_Config, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_HML.BPL_HML_C.Set Loader Config");
		
		struct
		{
			struct FS_ModLoaderConfig                          Mod_Loader_Config;
			class UObject*                                     __WorldContext;
		} params;
		params.Mod_Loader_Config = Mod_Loader_Config;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_HML.BPL_HML_C.GetLoaderConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FS_ModLoaderConfig                          ModLoaderConfig                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPL_HML_C::GetLoaderConfig(class UObject* __WorldContext, struct FS_ModLoaderConfig* ModLoaderConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_HML.BPL_HML_C.GetLoaderConfig");
		
		struct
		{
			class UObject*                                     __WorldContext;
			struct FS_ModLoaderConfig                          ModLoaderConfig;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModLoaderConfig != nullptr)
			*ModLoaderConfig = params.ModLoaderConfig;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_HML.BPL_HML_C.GetLoadedMods
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FS_Mod>                              LoadedMods                                                 (Parm, OutParm)
	 */
	void UBPL_HML_C::GetLoadedMods(class UObject* __WorldContext, TArray<struct FS_Mod>* LoadedMods)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_HML.BPL_HML_C.GetLoadedMods");
		
		struct
		{
			class UObject*                                     __WorldContext;
			TArray<struct FS_Mod>                              LoadedMods;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LoadedMods != nullptr)
			*LoadedMods = params.LoadedMods;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_HML.BPL_HML_C.GeModsItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FS_Item>                             Items                                                      (Parm, OutParm)
	 */
	void UBPL_HML_C::GeModsItems(class UObject* __WorldContext, TArray<struct FS_Item>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_HML.BPL_HML_C.GeModsItems");
		
		struct
		{
			class UObject*                                     __WorldContext;
			TArray<struct FS_Item>                             Items;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_HML.BPL_HML_C.GetModsStoreItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FS_StoreItem>                        Items                                                      (Parm, OutParm)
	 */
	void UBPL_HML_C::GetModsStoreItems(class UObject* __WorldContext, TArray<struct FS_StoreItem>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_HML.BPL_HML_C.GetModsStoreItems");
		
		struct
		{
			class UObject*                                     __WorldContext;
			TArray<struct FS_StoreItem>                        Items;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPL_HML.BPL_HML_C.WriteLog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LineLog                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPL_HML_C::WriteLog(const class FString& LineLog, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_HML.BPL_HML_C.WriteLog");
		
		struct
		{
			class FString                                      LineLog;
			class UObject*                                     __WorldContext;
		} params;
		params.LineLog = LineLog;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBPL_HML_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPL_HML_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPL_HML.BPL_HML_C");
		return ptr;
	}

}


