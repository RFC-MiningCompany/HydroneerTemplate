/**
 * Name: Hydroneer
 * Version: 2.0N
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ComponentsToSave"));
		
		ABP_FiniteStoreItem_C_ComponentsToSave_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ActorPreSave"));
		
		ABP_FiniteStoreItem_C_ActorPreSave_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ActorSaved"));
		
		ABP_FiniteStoreItem_C_ActorSaved_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ItemStored"));
		
		ABP_FiniteStoreItem_C_ItemStored_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ReceiveBeginPlay"));
		
		ABP_FiniteStoreItem_C_ReceiveBeginPlay_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.StoredItemPickedUp"));
		
		ABP_FiniteStoreItem_C_StoredItemPickedUp_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.RestockItem"));
		
		ABP_FiniteStoreItem_C_RestockItem_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.CheckIfItemSold"));
		
		ABP_FiniteStoreItem_C_CheckIfItemSold_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ActorLoaded"));
		
		ABP_FiniteStoreItem_C_ActorLoaded_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ExecuteUbergraph_BP_FiniteStoreItem"));
		
		ABP_FiniteStoreItem_C_ExecuteUbergraph_BP_FiniteStoreItem_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_FiniteStoreItem.BP_FiniteStoreItem_C"));
		return ptr;
	}

}


