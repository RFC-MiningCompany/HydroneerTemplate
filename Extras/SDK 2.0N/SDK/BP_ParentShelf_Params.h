#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0N
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
	 * Function BP_ParentShelf.BP_ParentShelf_C.ContainsSpecial?
	 */
	struct ABP_ParentShelf_C_ContainsSpecial__Params
	{
	public:
		struct FS_SavedShelfItem                                   ItemInfo;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Contains_;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ParentShelf.BP_ParentShelf_C.Attach Item
	 */
	struct ABP_ParentShelf_C_Attach_Item_Params
	{
	public:
		class USceneComponent*                                     ShelfLocation;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FS_ShelfItem                                        S_ShelfItem;                                             // 0x0010(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ParentShelf.BP_ParentShelf_C.Shelf Trace
	 */
	struct ABP_ParentShelf_C_Shelf_Trace_Params
	{
	public:
		TArray<struct FHitResult>                                  Hits;                                                    // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_ParentShelf.BP_ParentShelf_C.TraceForStoredItems
	 */
	struct ABP_ParentShelf_C_TraceForStoredItems_Params
	{	};

	/**
	 * Function BP_ParentShelf.BP_ParentShelf_C.CanStore?
	 */
	struct ABP_ParentShelf_C_CanStore__Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanStore_;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USC_ShelfLocation_C*                                 Location;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FS_ShelfItem                                        ItemData;                                                // 0x0020(0x0040)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ParentShelf.BP_ParentShelf_C.OnCompleted_671D6CD54910B7E9A078748F04436CA4
	 */
	struct ABP_ParentShelf_C_OnCompleted_671D6CD54910B7E9A078748F04436CA4_Params
	{	};

	/**
	 * Function BP_ParentShelf.BP_ParentShelf_C.NewItemToShelf
	 */
	struct ABP_ParentShelf_C_NewItemToShelf_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ParentShelf.BP_ParentShelf_C.ActorLoaded
	 */
	struct ABP_ParentShelf_C_ActorLoaded_Params
	{	};

	/**
	 * Function BP_ParentShelf.BP_ParentShelf_C.ActorPreSave
	 */
	struct ABP_ParentShelf_C_ActorPreSave_Params
	{	};

	/**
	 * Function BP_ParentShelf.BP_ParentShelf_C.LoadItemToShelf
	 */
	struct ABP_ParentShelf_C_LoadItemToShelf_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     Location;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ParentShelf.BP_ParentShelf_C.ExecuteUbergraph_BP_ParentShelf
	 */
	struct ABP_ParentShelf_C_ExecuteUbergraph_BP_ParentShelf_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
