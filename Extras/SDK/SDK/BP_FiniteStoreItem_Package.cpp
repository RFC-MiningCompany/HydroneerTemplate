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
	 * 		Name   -> Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ComponentsToSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     Components                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_FiniteStoreItem_C::ComponentsToSave(TArray<class UActorComponent*>* Components)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ComponentsToSave");
		
		struct
		{
			TArray<class UActorComponent*>                     Components;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Components != nullptr)
			*Components = params.Components;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ActorPreSave
	 * 		Flags  -> ()
	 */
	void ABP_FiniteStoreItem_C::ActorPreSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ActorPreSave");
		
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
	 * 		Name   -> Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ActorSaved
	 * 		Flags  -> ()
	 */
	void ABP_FiniteStoreItem_C::ActorSaved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ActorSaved");
		
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
	 * 		Name   -> Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ItemStored
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FiniteStoreItem_C::ItemStored(class ABP_ParentItem_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ItemStored");
		
		struct
		{
			class ABP_ParentItem_C*                            Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_FiniteStoreItem_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ReceiveBeginPlay");
		
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
	 * 		Name   -> Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.StoredItemPickedUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            ItemPickedUp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FiniteStoreItem_C::StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.StoredItemPickedUp");
		
		struct
		{
			class ABP_ParentItem_C*                            ItemPickedUp;
		} params;
		params.ItemPickedUp = ItemPickedUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.RestockItem
	 * 		Flags  -> ()
	 */
	void ABP_FiniteStoreItem_C::RestockItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.RestockItem");
		
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
	 * 		Name   -> Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.CheckIfItemSold
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABP_ParentItem_C*>                    Items                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_FiniteStoreItem_C::CheckIfItemSold(TArray<class ABP_ParentItem_C*> Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.CheckIfItemSold");
		
		struct
		{
			TArray<class ABP_ParentItem_C*>                    Items;
		} params;
		params.Items = Items;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_FiniteStoreItem_C::ActorLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ActorLoaded");
		
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
	 * 		Name   -> Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ExecuteUbergraph_BP_FiniteStoreItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FiniteStoreItem_C::ExecuteUbergraph_BP_FiniteStoreItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ExecuteUbergraph_BP_FiniteStoreItem");
		
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
	 * 		Name   -> PredefindFunction ABP_FiniteStoreItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FiniteStoreItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FiniteStoreItem.BP_FiniteStoreItem_C");
		return ptr;
	}

}


