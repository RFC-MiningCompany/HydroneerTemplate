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
	 * Function BP_ParentShelf.BP_ParentShelf_C.NewItemToShelf
	 */
	struct ABP_ParentShelf_C_NewItemToShelf_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

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
