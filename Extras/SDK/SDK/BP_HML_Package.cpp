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
	 * 		Name   -> Function BP_HML.BP_HML_C.LoadWorkhopMods
	 * 		Flags  -> ()
	 */
	void ABP_HML_C::LoadWorkhopMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HML.BP_HML_C.LoadWorkhopMods");
		
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
	 * 		Name   -> Function BP_HML.BP_HML_C.RegisterMod
	 * 		Flags  -> ()
	 */
	void ABP_HML_C::RegisterMod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HML.BP_HML_C.RegisterMod");
		
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
	 * 		Name   -> Function BP_HML.BP_HML_C.SpawnStoreItems
	 * 		Flags  -> ()
	 */
	void ABP_HML_C::SpawnStoreItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HML.BP_HML_C.SpawnStoreItems");
		
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
	 * 		Name   -> Function BP_HML.BP_HML_C.RegisterModStoreItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_Mod                                      Mod                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_HML_C::RegisterModStoreItems(const struct FS_Mod& Mod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HML.BP_HML_C.RegisterModStoreItems");
		
		struct
		{
			struct FS_Mod                                      Mod;
		} params;
		params.Mod = Mod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HML.BP_HML_C.GetStoreItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_StoreItem>                        StoreItems                                                 (Parm, OutParm)
	 */
	void ABP_HML_C::GetStoreItems(TArray<struct FS_StoreItem>* StoreItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HML.BP_HML_C.GetStoreItems");
		
		struct
		{
			TArray<struct FS_StoreItem>                        StoreItems;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StoreItems != nullptr)
			*StoreItems = params.StoreItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HML.BP_HML_C.GetRegistedItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_Item>                             Items                                                      (Parm, OutParm)
	 */
	void ABP_HML_C::GetRegistedItems(TArray<struct FS_Item>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HML.BP_HML_C.GetRegistedItems");
		
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
	 * 		Name   -> Function BP_HML.BP_HML_C.GetLoadedMods
	 * 		Flags  -> ()
	 */
	void ABP_HML_C::GetLoadedMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HML.BP_HML_C.GetLoadedMods");
		
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
	 * 		Name   -> Function BP_HML.BP_HML_C.RegisterModItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_Mod                                      Mod                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_HML_C::RegisterModItems(const struct FS_Mod& Mod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HML.BP_HML_C.RegisterModItems");
		
		struct
		{
			struct FS_Mod                                      Mod;
		} params;
		params.Mod = Mod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HML.BP_HML_C.LoadMods
	 * 		Flags  -> ()
	 */
	void ABP_HML_C::LoadMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HML.BP_HML_C.LoadMods");
		
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
	 * 		Name   -> Function BP_HML.BP_HML_C.WriteLog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Line                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_HML_C::WriteLog(const class FString& Line)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HML.BP_HML_C.WriteLog");
		
		struct
		{
			class FString                                      Line;
		} params;
		params.Line = Line;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HML.BP_HML_C.InpActEvt_F6_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HML_C::InpActEvt_F6_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HML.BP_HML_C.InpActEvt_F6_K2Node_InputKeyEvent_2");
		
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
	 * 		Name   -> Function BP_HML.BP_HML_C.InpActEvt_J_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HML_C::InpActEvt_J_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HML.BP_HML_C.InpActEvt_J_K2Node_InputKeyEvent_1");
		
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
	 * 		Name   -> Function BP_HML.BP_HML_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_HML_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HML.BP_HML_C.ReceiveBeginPlay");
		
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
	 * 		Name   -> Function BP_HML.BP_HML_C.ExecuteUbergraph_BP_HML
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HML_C::ExecuteUbergraph_BP_HML(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HML.BP_HML_C.ExecuteUbergraph_BP_HML");
		
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
	 * 		Name   -> Function BP_HML.BP_HML_C.ResetRegisterTimout__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_HML_C::ResetRegisterTimout__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HML.BP_HML_C.ResetRegisterTimout__DelegateSignature");
		
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
	 * 		Name   -> PredefindFunction ABP_HML_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HML_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HML.BP_HML_C");
		return ptr;
	}

}


