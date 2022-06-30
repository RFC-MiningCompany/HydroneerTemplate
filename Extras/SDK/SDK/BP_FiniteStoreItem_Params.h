#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ComponentsToSave
	 */
	struct ABP_FiniteStoreItem_C_ComponentsToSave_Params
	{
	public:
		TArray<class UActorComponent*>                             Components;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)

	};

	/**
	 * Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ActorPreSave
	 */
	struct ABP_FiniteStoreItem_C_ActorPreSave_Params
	{
	};

	/**
	 * Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ActorSaved
	 */
	struct ABP_FiniteStoreItem_C_ActorSaved_Params
	{
	};

	/**
	 * Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ItemStored
	 */
	struct ABP_FiniteStoreItem_C_ItemStored_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ReceiveBeginPlay
	 */
	struct ABP_FiniteStoreItem_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.StoredItemPickedUp
	 */
	struct ABP_FiniteStoreItem_C_StoredItemPickedUp_Params
	{
	public:
		class ABP_ParentItem_C*                                    ItemPickedUp;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.RestockItem
	 */
	struct ABP_FiniteStoreItem_C_RestockItem_Params
	{
	};

	/**
	 * Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.CheckIfItemSold
	 */
	struct ABP_FiniteStoreItem_C_CheckIfItemSold_Params
	{
	public:
		TArray<class ABP_ParentItem_C*>                            Items;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ActorLoaded
	 */
	struct ABP_FiniteStoreItem_C_ActorLoaded_Params
	{
	};

	/**
	 * Function BP_FiniteStoreItem.BP_FiniteStoreItem_C.ExecuteUbergraph_BP_FiniteStoreItem
	 */
	struct ABP_FiniteStoreItem_C_ExecuteUbergraph_BP_FiniteStoreItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
