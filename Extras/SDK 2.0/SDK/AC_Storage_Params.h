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
	 * Function AC_Storage.AC_Storage_C.ReturnAllContents
	 */
	struct UAC_Storage_C_ReturnAllContents_Params
	{
	public:
		TArray<class ABP_ParentItem_C*>                            AllItemsInside;                                          // 0x0000(0x0010)  (Parm, OutParm)

	};

	/**
	 * Function AC_Storage.AC_Storage_C.ItemStored
	 */
	struct UAC_Storage_C_ItemStored_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_Storage.AC_Storage_C.StoredItemPickedUp
	 */
	struct UAC_Storage_C_StoredItemPickedUp_Params
	{
	public:
		class ABP_ParentItem_C*                                    ItemPickedUp;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_Storage.AC_Storage_C.AddItemToStorage
	 */
	struct UAC_Storage_C_AddItemToStorage_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_Storage.AC_Storage_C.StorageTimer
	 */
	struct UAC_Storage_C_StorageTimer_Params
	{
	};

	/**
	 * Function AC_Storage.AC_Storage_C.ItemIsAttached
	 */
	struct UAC_Storage_C_ItemIsAttached_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_Storage.AC_Storage_C.LockAllIn
	 */
	struct UAC_Storage_C_LockAllIn_Params
	{
	};

	/**
	 * Function AC_Storage.AC_Storage_C.RemoveItemFromStorage
	 */
	struct UAC_Storage_C_RemoveItemFromStorage_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_Storage.AC_Storage_C.ItemLeftStorageZone
	 */
	struct UAC_Storage_C_ItemLeftStorageZone_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_Storage.AC_Storage_C.DetachStorageItem
	 */
	struct UAC_Storage_C_DetachStorageItem_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_Storage.AC_Storage_C.ExecuteUbergraph_AC_Storage
	 */
	struct UAC_Storage_C_ExecuteUbergraph_AC_Storage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_Storage.AC_Storage_C.ItemDetached__DelegateSignature
	 */
	struct UAC_Storage_C_ItemDetached__DelegateSignature_Params
	{
	};

	/**
	 * Function AC_Storage.AC_Storage_C.ItemAttached__DelegateSignature
	 */
	struct UAC_Storage_C_ItemAttached__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
