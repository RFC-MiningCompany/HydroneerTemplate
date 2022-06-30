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
	 * Function SteamCore.Inventory.TriggerItemDrop
	 */
	struct UInventory_TriggerItemDrop_Params
	{
	public:
		struct FSteamInventoryResult                               Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamItemDef                                       ListDefinition;                                          // 0x0004(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.TransferItemQuantity
	 */
	struct UInventory_TransferItemQuantity_Params
	{
	public:
		struct FSteamInventoryResult                               Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamItemInstanceID                                ItemIDSource;                                            // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Quantity;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamItemInstanceID                                ItemIDDest;                                              // 0x0018(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.SubmitUpdateProperties
	 */
	struct UInventory_SubmitUpdateProperties_Params
	{
	public:
		struct FSteamInventoryUpdateHandle                         Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamInventoryResult                               ResultHandle;                                            // 0x0008(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.StartUpdateProperties
	 */
	struct UInventory_StartUpdateProperties_Params
	{
	public:
		struct FSteamInventoryUpdateHandle                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.StartPurchase
	 */
	struct UInventory_StartPurchase_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		TArray<struct FSteamItemDef>                               ItemDefs;                                                // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            Quantity;                                                // 0x0020(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.SetPropertyString
	 */
	struct UInventory_SetPropertyString_Params
	{
	public:
		struct FSteamInventoryUpdateHandle                         Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamItemInstanceID                                ItemId;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PropertyName;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.SetPropertyInt
	 */
	struct UInventory_SetPropertyInt_Params
	{
	public:
		struct FSteamInventoryUpdateHandle                         Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamItemInstanceID                                ItemId;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PropertyName;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.SetPropertyFloat
	 */
	struct UInventory_SetPropertyFloat_Params
	{
	public:
		struct FSteamInventoryUpdateHandle                         Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamItemInstanceID                                ItemId;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PropertyName;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.SetPropertyBool
	 */
	struct UInventory_SetPropertyBool_Params
	{
	public:
		struct FSteamInventoryUpdateHandle                         Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamItemInstanceID                                ItemId;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PropertyName;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bValue;                                                  // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.SerializeResult
	 */
	struct UInventory_SerializeResult_Params
	{
	public:
		struct FSteamInventoryResult                               Handle;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      Buffer;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.RequestPrices
	 */
	struct UInventory_RequestPrices_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.RequestEligiblePromoItemDefinitionsIDs
	 */
	struct UInventory_RequestEligiblePromoItemDefinitionsIDs_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FSteamID                                            SteamID;                                                 // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.RemoveProperty
	 */
	struct UInventory_RemoveProperty_Params
	{
	public:
		struct FSteamInventoryUpdateHandle                         Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamItemInstanceID                                ItemId;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PropertyName;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.LoadItemDefinitions
	 */
	struct UInventory_LoadItemDefinitions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.GrantPromoItems
	 */
	struct UInventory_GrantPromoItems_Params
	{
	public:
		struct FSteamInventoryResult                               Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.GetResultTimestamp
	 */
	struct UInventory_GetResultTimestamp_Params
	{
	public:
		struct FSteamInventoryResult                               Handle;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.GetResultStatus
	 */
	struct UInventory_GetResultStatus_Params
	{
	public:
		struct FSteamInventoryResult                               Handle;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamResult                                     ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.GetResultItems
	 */
	struct UInventory_GetResultItems_Params
	{
	public:
		struct FSteamInventoryResult                               Handle;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSteamItemDetails>                           Items;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.GetResultItemProperty
	 */
	struct UInventory_GetResultItemProperty_Params
	{
	public:
		struct FSteamInventoryResult                               Handle;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ItemIndex;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PropertyName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.GetNumItemsWithPrices
	 */
	struct UInventory_GetNumItemsWithPrices_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.GetItemsWithPrices
	 */
	struct UInventory_GetItemsWithPrices_Params
	{
	public:
		TArray<struct FSteamItemDef>                               ItemDefs;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            Prices;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            BasePrices;                                              // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.GetItemsByID
	 */
	struct UInventory_GetItemsByID_Params
	{
	public:
		struct FSteamInventoryResult                               InventoryResult;                                         // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSteamItemInstanceID>                        InstanceIDs;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.GetItemPrice
	 */
	struct UInventory_GetItemPrice_Params
	{
	public:
		struct FSteamItemDef                                       ItemDef;                                                 // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Price;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    BasePrice;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.GetItemDefinitionProperty
	 */
	struct UInventory_GetItemDefinitionProperty_Params
	{
	public:
		struct FSteamItemDef                                       ItemDef;                                                 // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PropertyName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.GetItemDefinitionIDs
	 */
	struct UInventory_GetItemDefinitionIDs_Params
	{
	public:
		TArray<struct FSteamItemDef>                               ItemDefs;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.GetEligiblePromoItemDefinitionIDs
	 */
	struct UInventory_GetEligiblePromoItemDefinitionIDs_Params
	{
	public:
		struct FSteamID                                            SteamID;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSteamItemDef>                               ItemDefs;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.GetAllItems
	 */
	struct UInventory_GetAllItems_Params
	{
	public:
		struct FSteamInventoryResult                               Handle;                                                  // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.GenerateItems
	 */
	struct UInventory_GenerateItems_Params
	{
	public:
		struct FSteamInventoryResult                               Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSteamItemDef>                               ItemDefs;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            Quantity;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.ExchangeItems
	 */
	struct UInventory_ExchangeItems_Params
	{
	public:
		struct FSteamInventoryResult                               Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSteamItemDef>                               ArrayGenerate;                                           // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            ArrayGenerateQuantity;                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FSteamItemInstanceID>                        ArrayDestroy;                                            // 0x0028(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            ArrayDestroyQuantity;                                    // 0x0038(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.DestroyResult
	 */
	struct UInventory_DestroyResult_Params
	{
	public:
		struct FSteamInventoryResult                               Handle;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.DeserializeResult
	 */
	struct UInventory_DeserializeResult_Params
	{
	public:
		struct FSteamInventoryResult                               Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      Buffer;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bReservedMustBeFalse;                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.ConsumeItem
	 */
	struct UInventory_ConsumeItem_Params
	{
	public:
		struct FSteamInventoryResult                               Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamItemInstanceID                                ItemConsume;                                             // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Quantity;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.CheckResultSteamID
	 */
	struct UInventory_CheckResultSteamID_Params
	{
	public:
		struct FSteamInventoryResult                               Handle;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamID                                            SteamIDExpected;                                         // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.AddPromoItems
	 */
	struct UInventory_AddPromoItems_Params
	{
	public:
		struct FSteamInventoryResult                               OutResult;                                               // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSteamItemDef>                               ItemDefs;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Inventory.AddPromoItem
	 */
	struct UInventory_AddPromoItem_Params
	{
	public:
		struct FSteamInventoryResult                               Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamItemDef                                       ItemDef;                                                 // 0x0004(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.HandleCallback
	 */
	struct USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Params
	{
	public:
		struct FCreateLobbyData                                    Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.CreateLobbyAsync
	 */
	struct USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamLobbyType                                  LobbyType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxMembers;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreMatchmakingAsyncActionCreateLobby*         ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.RequestLobbyListAsync
	 */
	struct USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreMatchmakingAsyncActionRequestLobbyList*    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.HandleCallback
	 */
	struct USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Params
	{
	public:
		struct FLobbyMatchList                                     Data;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.JoinLobbyAsync
	 */
	struct USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamID                                            SteamIDLobby;                                            // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreMatchmakingAsyncActionJoinLobby*           ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.HandleCallback
	 */
	struct USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Params
	{
	public:
		struct FJoinLobbyData                                      Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreCreateSession.CreateSteamCoreSession
	 */
	struct USteamCoreCreateSession_CreateSteamCoreSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, struct FSteamSessionSetting>           SessionSettings;                                         // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              SessionName;                                             // 0x0058(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxPlayers;                                              // 0x0068(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseLAN;                                                 // 0x006C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowInvites;                                           // 0x006D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUsesPresence;                                           // 0x006E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowJoinViaPresence;                                   // 0x006F(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowJoinViaPresenceFriendsOnly;                        // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAntiCheatProtected;                                     // 0x0071(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUsesStats;                                              // 0x0072(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShouldAdvertise;                                        // 0x0073(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseLobbiesVoiceChatIfAvailable;                         // 0x0074(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0078(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreCreateSession*                             ReturnValue;                                             // 0x0080(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreFindSession.OnCompleted
	 */
	struct USteamCoreFindSession_OnCompleted_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreFindSession.FindSteamCoreSessions
	 */
	struct USteamCoreFindSession_FindSteamCoreSessions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, struct FSteamSessionSearchSetting>     SearchSettings;                                          // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    MaxResults;                                              // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseLAN;                                                 // 0x005C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamSessionFindType                            ServerType;                                              // 0x005D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEmptyServersOnly;                                       // 0x005E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSecureServersOnly;                                      // 0x005F(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreFindSession*                               ReturnValue;                                             // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.PingServerAsync
	 */
	struct USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              IP;                                                      // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Port;                                                    // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreMatchmakingServersAsyncActionPingServer*   ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.HandleCallback
	 */
	struct USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Params
	{
	public:
		struct FGameServerItem                                     Data;                                                    // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x00B0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestSpectatorServerListAsync
	 */
	struct USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AppID;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxResults;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnoreNonResponsive;                                    // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UServerFilter*                                       ServerFilter;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestLANServerListAsync
	 */
	struct USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AppID;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxResults;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnoreNonResponsive;                                    // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UServerFilter*                                       ServerFilter;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestInternetServerListAsync
	 */
	struct USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AppID;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxResults;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnoreNonResponsive;                                    // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UServerFilter*                                       ServerFilter;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestHistoryServerListAsync
	 */
	struct USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AppID;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxResults;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnoreNonResponsive;                                    // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UServerFilter*                                       ServerFilter;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFriendsServerListAsync
	 */
	struct USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AppID;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxResults;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnoreNonResponsive;                                    // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UServerFilter*                                       ServerFilter;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFavoritesServerListAsync
	 */
	struct USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AppID;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxResults;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnoreNonResponsive;                                    // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UServerFilter*                                       ServerFilter;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleServerListFinished
	 */
	struct USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Params
	{
	};

	/**
	 * Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleCallback
	 */
	struct USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Params
	{
	public:
		struct FGameServerItem                                     Data;                                                    // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.ServerRulesAsync
	 */
	struct USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              IP;                                                      // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    QueryPort;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreMatchmakingServersAsyncActionServerRules*  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.HandleCallback
	 */
	struct USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Params
	{
	public:
		TArray<struct FGameServerRule>                             Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Networking.SendP2PPacket
	 */
	struct UNetworking_SendP2PPacket_Params
	{
	public:
		struct FSteamID                                            SteamIDRemote;                                           // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      Data;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		SteamCore_ESteamP2PSend                                    P2PSendType;                                             // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Channel;                                                 // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Networking.ReadP2PPacket
	 */
	struct UNetworking_ReadP2PPacket_Params
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FSteamID                                            OutSteamIdRemote;                                        // 0x0010(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MessageSize;                                             // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Channel;                                                 // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Networking.IsP2PPacketAvailable
	 */
	struct UNetworking_IsP2PPacketAvailable_Params
	{
	public:
		int32_t                                                    MessageSize;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Channel;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Networking.GetP2PSessionState
	 */
	struct UNetworking_GetP2PSessionState_Params
	{
	public:
		struct FSteamID                                            SteamIDRemote;                                           // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamP2PSessionState                               ConnectionState;                                         // 0x0008(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Networking.CloseP2PSessionWithUser
	 */
	struct UNetworking_CloseP2PSessionWithUser_Params
	{
	public:
		struct FSteamID                                            SteamIDRemote;                                           // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Networking.CloseP2PChannelWithUser
	 */
	struct UNetworking_CloseP2PChannelWithUser_Params
	{
	public:
		struct FSteamID                                            SteamIDRemote;                                           // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Channel;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Networking.AllowP2PPacketRelay
	 */
	struct UNetworking_AllowP2PPacketRelay_Params
	{
	public:
		bool                                                       bAllow;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.Networking.AcceptP2PSessionWithUser
	 */
	struct UNetworking_AcceptP2PSessionWithUser_Params
	{
	public:
		struct FSteamID                                            SteamIDRemote;                                           // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.ParentalSettings.BIsParentalLockLocked
	 */
	struct UParentalSettings_BIsParentalLockLocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.ParentalSettings.BIsParentalLockEnabled
	 */
	struct UParentalSettings_BIsParentalLockEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.ParentalSettings.BIsFeatureInBlockList
	 */
	struct UParentalSettings_BIsFeatureInBlockList_Params
	{
	public:
		SteamCore_ESteamParentalFeature                            Feature;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.ParentalSettings.BIsFeatureBlocked
	 */
	struct UParentalSettings_BIsFeatureBlocked_Params
	{
	public:
		SteamCore_ESteamParentalFeature                            Feature;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.ParentalSettings.BIsAppInBlockList
	 */
	struct UParentalSettings_BIsAppInBlockList_Params
	{
	public:
		int32_t                                                    AppID;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.ParentalSettings.BIsAppBlocked
	 */
	struct UParentalSettings_BIsAppBlocked_Params
	{
	public:
		int32_t                                                    AppID;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamParties.OnReservationCompleted
	 */
	struct USteamParties_OnReservationCompleted_Params
	{
	public:
		struct FPartyBeaconID                                      BeaconID;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamID                                            SteamIDUser;                                             // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamParties.JoinParty
	 */
	struct USteamParties_JoinParty_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FPartyBeaconID                                      BeaconID;                                                // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamParties.GetNumAvailableBeaconLocations
	 */
	struct USteamParties_GetNumAvailableBeaconLocations_Params
	{
	public:
		int32_t                                                    NumLocations;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamParties.GetNumActiveBeacons
	 */
	struct USteamParties_GetNumActiveBeacons_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamParties.GetBeaconLocationData
	 */
	struct USteamParties_GetBeaconLocationData_Params
	{
	public:
		struct FSteamPartyBeaconLocation                           BeaconLocation;                                          // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		SteamCore_ESteamPartiesBeaconLocationData                  EData;                                                   // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PCHDataStringOut;                                        // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamParties.GetBeaconDetails
	 */
	struct USteamParties_GetBeaconDetails_Params
	{
	public:
		struct FPartyBeaconID                                      BeaconID;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamID                                            SteamIDBeaconOwner;                                      // 0x0008(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamPartyBeaconLocation                           Location;                                                // 0x0010(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FString                                              OutMetadata;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamParties.GetBeaconByIndex
	 */
	struct USteamParties_GetBeaconByIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPartyBeaconID                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamParties.GetAvailableBeaconLocations
	 */
	struct USteamParties_GetAvailableBeaconLocations_Params
	{
	public:
		TArray<struct FSteamPartyBeaconLocation>                   LocationList;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    MaxNumLocations;                                         // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamParties.DestroyBeacon
	 */
	struct USteamParties_DestroyBeacon_Params
	{
	public:
		struct FPartyBeaconID                                      BeaconID;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamParties.CreateBeacon
	 */
	struct USteamParties_CreateBeacon_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    OpenSlots;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamPartyBeaconLocation                           BeaconLocation;                                          // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              ConnectString;                                           // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MetaData;                                                // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamParties.ChangeNumOpenSlots
	 */
	struct USteamParties_ChangeNumOpenSlots_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FPartyBeaconID                                      BeaconID;                                                // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OpenSlots;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamParties.CancelReservation
	 */
	struct USteamParties_CancelReservation_Params
	{
	public:
		struct FPartyBeaconID                                      BeaconID;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamID                                            SteamIDUser;                                             // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemotePlay.GetSessionSteamID
	 */
	struct URemotePlay_GetSessionSteamID_Params
	{
	public:
		int32_t                                                    SessionID;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamID                                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemotePlay.GetSessionID
	 */
	struct URemotePlay_GetSessionID_Params
	{
	public:
		int32_t                                                    SessionIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemotePlay.GetSessionCount
	 */
	struct URemotePlay_GetSessionCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemotePlay.GetSessionClientName
	 */
	struct URemotePlay_GetSessionClientName_Params
	{
	public:
		int32_t                                                    SessionID;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemotePlay.GetSessionClientFormFactor
	 */
	struct URemotePlay_GetSessionClientFormFactor_Params
	{
	public:
		int32_t                                                    SessionID;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamCoreDeviceFormFactor                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemotePlay.BSendRemotePlayTogetherInvite
	 */
	struct URemotePlay_BSendRemotePlayTogetherInvite_Params
	{
	public:
		struct FSteamID                                            SteamIDFriend;                                           // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemotePlay.BGetSessionClientResolution
	 */
	struct URemotePlay_BGetSessionClientResolution_Params
	{
	public:
		int32_t                                                    SessionID;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ResolutionX;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ResolutionY;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.UGCRead
	 */
	struct URemoteStorage_UGCRead_Params
	{
	public:
		struct FSteamUGCHandle                                     Content;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      OutData;                                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    DataToRead;                                              // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Offset;                                                  // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamUGCReadAction                              Action;                                                  // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.UGCDownloadToLocation
	 */
	struct URemoteStorage_UGCDownloadToLocation_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FSteamUGCHandle                                     Content;                                                 // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Location;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Priority;                                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.UGCDownload
	 */
	struct URemoteStorage_UGCDownload_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FSteamUGCHandle                                     Content;                                                 // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Priority;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.SetSyncPlatforms
	 */
	struct URemoteStorage_SetSyncPlatforms_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamRemoteStoragePlatform                      RemoteStoragePlatform;                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.SetCloudEnabledForApp
	 */
	struct URemoteStorage_SetCloudEnabledForApp_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.IsCloudEnabledForApp
	 */
	struct URemoteStorage_IsCloudEnabledForApp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.IsCloudEnabledForAccount
	 */
	struct URemoteStorage_IsCloudEnabledForAccount_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.GetUGCDownloadProgress
	 */
	struct URemoteStorage_GetUGCDownloadProgress_Params
	{
	public:
		struct FSteamUGCHandle                                     Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    BytesDownloaded;                                         // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    BytesExpected;                                           // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.GetUGCDetails
	 */
	struct URemoteStorage_GetUGCDetails_Params
	{
	public:
		struct FSteamUGCHandle                                     Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AppID;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FileSizeInBytes;                                         // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamID                                            SteamIDOwner;                                            // 0x0028(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.GetSyncPlatforms
	 */
	struct URemoteStorage_GetSyncPlatforms_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamRemoteStoragePlatform                      ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.GetQuota
	 */
	struct URemoteStorage_GetQuota_Params
	{
	public:
		int32_t                                                    TotalBytes;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AvailableBytes;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.GetFileTimestamp
	 */
	struct URemoteStorage_GetFileTimestamp_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.GetFileSize
	 */
	struct URemoteStorage_GetFileSize_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.GetFileNameAndSize
	 */
	struct URemoteStorage_GetFileNameAndSize_Params
	{
	public:
		int32_t                                                    File;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FileSizeInBytes;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.GetFileCount
	 */
	struct URemoteStorage_GetFileCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.GetCachedUGCHandle
	 */
	struct URemoteStorage_GetCachedUGCHandle_Params
	{
	public:
		int32_t                                                    ICachedContent;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamUGCHandle                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.GetCachedUGCCount
	 */
	struct URemoteStorage_GetCachedUGCCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.FileWriteStreamWriteChunk
	 */
	struct URemoteStorage_FileWriteStreamWriteChunk_Params
	{
	public:
		struct FUGCFileWriteStreamHandle                           Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      Data;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.FileWriteStreamOpen
	 */
	struct URemoteStorage_FileWriteStreamOpen_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FUGCFileWriteStreamHandle                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.FileWriteStreamClose
	 */
	struct URemoteStorage_FileWriteStreamClose_Params
	{
	public:
		struct FUGCFileWriteStreamHandle                           Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.FileWriteStreamCancel
	 */
	struct URemoteStorage_FileWriteStreamCancel_Params
	{
	public:
		struct FUGCFileWriteStreamHandle                           Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.FileWriteAsync
	 */
	struct URemoteStorage_FileWriteAsync_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              File;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      Data;                                                    // 0x0020(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.FileWrite
	 */
	struct URemoteStorage_FileWrite_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      Data;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.FileShare
	 */
	struct URemoteStorage_FileShare_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              File;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.FileReadAsyncComplete
	 */
	struct URemoteStorage_FileReadAsyncComplete_Params
	{
	public:
		struct FRemoteStorageFileReadAsyncComplete                 ReadCall;                                                // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      Buffer;                                                  // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    BytesToRead;                                             // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.FileReadAsync
	 */
	struct URemoteStorage_FileReadAsync_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              File;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Offset;                                                  // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    BytesToRead;                                             // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.FileRead
	 */
	struct URemoteStorage_FileRead_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      Buffer;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    DataToRead;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.FilePersisted
	 */
	struct URemoteStorage_FilePersisted_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.FileForget
	 */
	struct URemoteStorage_FileForget_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.FileExists
	 */
	struct URemoteStorage_FileExists_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.RemoteStorage.FileDelete
	 */
	struct URemoteStorage_FileDelete_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.StopPlaytimeTrackingForAllItemsAsync
	 */
	struct USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems_StopPlaytimeTrackingForAllItemsAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.HandleCallback
	 */
	struct USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems_HandleCallback_Params
	{
	public:
		struct FStopPlaytimeTrackingResult                         Data;                                                    // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.StopPlaytimeTrackingAsync
	 */
	struct USteamCoreUGCAsyncActionStopPlaytimeTracking_StopPlaytimeTrackingAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPublishedFileID>                            PublishedFileIDs;                                        // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUGCAsyncActionStopPlaytimeTracking*        ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.HandleCallback
	 */
	struct USteamCoreUGCAsyncActionStopPlaytimeTracking_HandleCallback_Params
	{
	public:
		struct FStopPlaytimeTrackingResult                         Data;                                                    // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.StartPlaytimeTrackingAsync
	 */
	struct USteamCoreUGCAsyncActionStartPlaytimeTracking_StartPlaytimeTrackingAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPublishedFileID>                            PublishedFileIDs;                                        // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUGCAsyncActionStartPlaytimeTracking*       ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.HandleCallback
	 */
	struct USteamCoreUGCAsyncActionStartPlaytimeTracking_HandleCallback_Params
	{
	public:
		struct FStartPlaytimeTrackingResult                        Data;                                                    // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.UnsubscribeItemAsync
	 */
	struct USteamCoreUGCAsyncActionUnsubscribeItem_UnsubscribeItemAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPublishedFileID                                    PublishedFileIDs;                                        // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUGCAsyncActionUnsubscribeItem*             ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.HandleCallback
	 */
	struct USteamCoreUGCAsyncActionUnsubscribeItem_HandleCallback_Params
	{
	public:
		struct FRemoteStorageSubscribePublishedFileResult          Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionSubscribeItem.SubscribeItemAsync
	 */
	struct USteamCoreUGCAsyncActionSubscribeItem_SubscribeItemAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPublishedFileID                                    PublishedFileIDs;                                        // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUGCAsyncActionSubscribeItem*               ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionSubscribeItem.HandleCallback
	 */
	struct USteamCoreUGCAsyncActionSubscribeItem_HandleCallback_Params
	{
	public:
		struct FRemoteStorageSubscribePublishedFileResult          Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.RemoveItemFromFavoritesAsync
	 */
	struct USteamCoreUGCAsyncActionRemoveItemFromFavorites_RemoveItemFromFavoritesAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AppID;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUGCAsyncActionRemoveItemFromFavorites*     ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.HandleCallback
	 */
	struct USteamCoreUGCAsyncActionRemoveItemFromFavorites_HandleCallback_Params
	{
	public:
		struct FUserFavoriteItemsListChanged                       Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.HandleCallback
	 */
	struct USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Params
	{
	public:
		struct FUserFavoriteItemsListChanged                       Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.AddItemToFavoritesAsync
	 */
	struct USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AppID;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUGCAsyncActionAddItemToFavorites*          ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.HandleCallback
	 */
	struct USteamCoreUGCAsyncActionGetUserItemVote_HandleCallback_Params
	{
	public:
		struct FGetUserItemVoteResult                              Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.GetUserItemVoteAsync
	 */
	struct USteamCoreUGCAsyncActionGetUserItemVote_GetUserItemVoteAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUGCAsyncActionGetUserItemVote*             ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.SetUserItemVoteAsync
	 */
	struct USteamCoreUGCAsyncActionSetUserItemVote_SetUserItemVoteAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVoteUp;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUGCAsyncActionSetUserItemVote*             ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.HandleCallback
	 */
	struct USteamCoreUGCAsyncActionSetUserItemVote_HandleCallback_Params
	{
	public:
		struct FSetUserItemVoteResult                              Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.SubmitItemUpdateAsync
	 */
	struct USteamCoreUGCAsyncActionSubmitItemUpdate_SubmitItemUpdateAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FUGCUpdateHandle                                    Handle;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              ChangeNote;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUGCAsyncActionSubmitItemUpdate*            ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.HandleCallback
	 */
	struct USteamCoreUGCAsyncActionSubmitItemUpdate_HandleCallback_Params
	{
	public:
		struct FSubmitItemUpdateResult                             Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionCreateItem.HandleCallback
	 */
	struct USteamCoreUGCAsyncActionCreateItem_HandleCallback_Params
	{
	public:
		struct FCreateItemResult                                   Data;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionCreateItem.CreateItemAsync
	 */
	struct USteamCoreUGCAsyncActionCreateItem_CreateItemAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ConsumerAppID;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamWorkshopFileType                           FileType;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUGCAsyncActionCreateItem*                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.RemoveAppDependencyAsync
	 */
	struct USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AppID;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUGCAsyncActionRemoveAppDependency*         ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.HandleCallback
	 */
	struct USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Params
	{
	public:
		struct FRemoveAppDependencyResult                          Data;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionDeleteItem.HandleCallback
	 */
	struct USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Params
	{
	public:
		struct FUGCDeleteItemResult                                Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionDeleteItem.DeleteItemAsync
	 */
	struct USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUGCAsyncActionDeleteItem*                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.HandleCallback
	 */
	struct USteamCoreUGCAsyncActionGetAppDependencies_HandleCallback_Params
	{
	public:
		struct FGetAppDependenciesResult                           Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.GetAppDependenciesAsync
	 */
	struct USteamCoreUGCAsyncActionGetAppDependencies_GetAppDependenciesAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUGCAsyncActionGetAppDependencies*          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionDownloadItem.HandleCallback
	 */
	struct USteamCoreUGCAsyncActionDownloadItem_HandleCallback_Params
	{
	public:
		struct FDownloadItemResult                                 Data;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUGCAsyncActionDownloadItem.DownloadItemAsync
	 */
	struct USteamCoreUGCAsyncActionDownloadItem_DownloadItemAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHighPriority;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUGCAsyncActionDownloadItem*                ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.UserHasLicenseForApp
	 */
	struct UUser_UserHasLicenseForApp_Params
	{
	public:
		struct FSteamID                                            SteamID;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AppID;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamUserHasLicenseForAppResult                 ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.StopVoiceRecording
	 */
	struct UUser_StopVoiceRecording_Params
	{
	};

	/**
	 * Function SteamCore.User.StartVoiceRecording
	 */
	struct UUser_StartVoiceRecording_Params
	{
	};

	/**
	 * Function SteamCore.User.RequestStoreAuthURL
	 */
	struct UUser_RequestStoreAuthURL_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              RedirectURL;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.RequestEncryptedAppTicket
	 */
	struct UUser_RequestEncryptedAppTicket_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      DataToInclude;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.GetVoiceOptimalSampleRate
	 */
	struct UUser_GetVoiceOptimalSampleRate_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.GetVoice
	 */
	struct UUser_GetVoice_Params
	{
	public:
		TArray<unsigned char>                                      DestBuffer;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    BytesWritten;                                            // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamVoiceResult                                ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.GetSteamID_Pure
	 */
	struct UUser_GetSteamID_Pure_Params
	{
	public:
		struct FSteamID                                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.GetSteamID
	 */
	struct UUser_GetSteamID_Params
	{
	public:
		struct FSteamID                                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.GetPlayerSteamLevel
	 */
	struct UUser_GetPlayerSteamLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.GetGameBadgeLevel
	 */
	struct UUser_GetGameBadgeLevel_Params
	{
	public:
		int32_t                                                    Series;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFoil;                                                   // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.GetEncryptedAppTicket
	 */
	struct UUser_GetEncryptedAppTicket_Params
	{
	public:
		TArray<unsigned char>                                      Ticket;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.GetAvailableVoice
	 */
	struct UUser_GetAvailableVoice_Params
	{
	public:
		int32_t                                                    CompressedBytes;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UncompressedBytes;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UncompressedVoiceDesiredSampleRate;                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamVoiceResult                                ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.GetAuthSessionTicket
	 */
	struct UUser_GetAuthSessionTicket_Params
	{
	public:
		TArray<unsigned char>                                      Ticket;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FSteamTicketHandle                                  ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.EndAuthSession
	 */
	struct UUser_EndAuthSession_Params
	{
	public:
		struct FSteamID                                            SteamID;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.DecompressVoice
	 */
	struct UUser_DecompressVoice_Params
	{
	public:
		TArray<unsigned char>                                      CompressedBuffer;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    DesiredSampleRate;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      DestBuffer;                                              // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		SteamCore_ESteamVoiceResult                                ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.CancelAuthTicket
	 */
	struct UUser_CancelAuthTicket_Params
	{
	public:
		struct FSteamTicketHandle                                  TicketHandle;                                            // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.BLoggedOn
	 */
	struct UUser_BLoggedOn_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.BIsTwoFactorEnabled
	 */
	struct UUser_BIsTwoFactorEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.BIsPhoneVerified
	 */
	struct UUser_BIsPhoneVerified_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.BIsPhoneRequiringVerification
	 */
	struct UUser_BIsPhoneRequiringVerification_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.BIsPhoneIdentifying
	 */
	struct UUser_BIsPhoneIdentifying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.BIsBehindNAT
	 */
	struct UUser_BIsBehindNAT_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.BeginAuthSession
	 */
	struct UUser_BeginAuthSession_Params
	{
	public:
		TArray<unsigned char>                                      Ticket;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FSteamID                                            SteamID;                                                 // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamBeginAuthSessionResult                     ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.User.AdvertiseGame
	 */
	struct UUser_AdvertiseGame_Params
	{
	public:
		struct FSteamID                                            SteamIDGameServer;                                       // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ServerIP;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ServerPort;                                              // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.HandleCallback
	 */
	struct USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Params
	{
	public:
		struct FLeaderboardFindResult                              Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.FindLeaderboardAsync
	 */
	struct USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              LeaderboardName;                                         // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUserStatsAsyncActionFindLeaderboard*       ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.HandleCallback
	 */
	struct USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Params
	{
	public:
		struct FLeaderboardScoresDownloaded                        Data;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.DownloadLeaderboardEntriesAsync
	 */
	struct USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamLeaderboard                                   SteamLeaderboard;                                        // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamLeaderboardDataRequest                     Request;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RangeStart;                                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RangeEnd;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.RequestGlobalStatsAsync
	 */
	struct USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    HistoryDays;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.HandleCallback
	 */
	struct USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Params
	{
	public:
		struct FGlobalStatsReceived                                Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.RequestGlobalAchievementPercentagesAsync
	 */
	struct USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.HandleCallback
	 */
	struct USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Params
	{
	public:
		struct FGlobalAchievementPercentagesReady                  Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.HandleCallback
	 */
	struct USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Params
	{
	public:
		struct FNumberOfCurrentPlayers                             Data;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync
	 */
	struct USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.UploadLeaderboardScoreAsync
	 */
	struct USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamLeaderboard                                   SteamLeaderboard;                                        // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamLeaderboardUploadScoreMethod               UploadScoreMethod;                                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Score;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            ScoreDetails;                                            // 0x0018(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.HandleCallback
	 */
	struct USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Params
	{
	public:
		struct FLeaderboardScoreUploaded                           Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.RequestUserStatsAsync
	 */
	struct USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamID                                            SteamID;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreUserStatsAsyncActionRequestUserStats*      ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.HandleCallback
	 */
	struct USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Params
	{
	public:
		struct FRequestUserStatsData                               Data;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreVoice.DestroySteamCoreVoice
	 */
	struct USteamCoreVoice_DestroySteamCoreVoice_Params
	{
	public:
		class USteamCoreVoice*                                     Obj;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreVoice.ConstructSteamCoreVoice
	 */
	struct USteamCoreVoice_ConstructSteamCoreVoice_Params
	{
	public:
		int32_t                                                    AudioSampleRate;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamCoreVoice*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamCoreVoice.AddAudioBuffer
	 */
	struct USteamCoreVoice_AddAudioBuffer_Params
	{
	public:
		TArray<unsigned char>                                      Buffer;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.WriteBytesToFile
	 */
	struct USteamUtilities_WriteBytesToFile_Params
	{
	public:
		bool                                                       bOverwriteIfExists;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AbsoluteFilePath;                                        // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      DataBuffer;                                              // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.SteamItemInstanceID_Equals_Exec
	 */
	struct USteamUtilities_SteamItemInstanceID_Equals_Exec_Params
	{
	public:
		struct FSteamItemInstanceID                                A;                                                       // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamItemInstanceID                                B;                                                       // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamCoreIdentical                              Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.SteamItemInstanceID_Equals
	 */
	struct USteamUtilities_SteamItemInstanceID_Equals_Params
	{
	public:
		struct FSteamItemInstanceID                                A;                                                       // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamItemInstanceID                                B;                                                       // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.ReleaseRequest
	 */
	struct USteamUtilities_ReleaseRequest_Params
	{
	};

	/**
	 * Function SteamCore.SteamUtilities.ReadFileToBytes
	 */
	struct USteamUtilities_ReadFileToBytes_Params
	{
	public:
		class FString                                              AbsoluteFilePath;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.PublishedFileID_NotEquals
	 */
	struct USteamUtilities_PublishedFileID_NotEquals_Params
	{
	public:
		struct FPublishedFileID                                    A;                                                       // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPublishedFileID                                    B;                                                       // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.PublishedFileID_Equals_Exec
	 */
	struct USteamUtilities_PublishedFileID_Equals_Exec_Params
	{
	public:
		struct FPublishedFileID                                    A;                                                       // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPublishedFileID                                    B;                                                       // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamCoreIdentical                              Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.PublishedFileID_Equals
	 */
	struct USteamUtilities_PublishedFileID_Equals_Params
	{
	public:
		struct FPublishedFileID                                    A;                                                       // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPublishedFileID                                    B;                                                       // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.NotEqual
	 */
	struct USteamUtilities_NotEqual_Params
	{
	public:
		struct FSteamID                                            A;                                                       // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamID                                            B;                                                       // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.MakeUGCHandle
	 */
	struct USteamUtilities_MakeUGCHandle_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamUGCHandle                                     ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.MakeTicketHandle
	 */
	struct USteamUtilities_MakeTicketHandle_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamTicketHandle                                  ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.MakeString
	 */
	struct USteamUtilities_MakeString_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamSessionSetting                                ReturnValue;                                             // 0x0010(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.MakeSteamID
	 */
	struct USteamUtilities_MakeSteamID_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamID                                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.MakeSteamGameID
	 */
	struct USteamUtilities_MakeSteamGameID_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamGameID                                        ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.MakeSearchString
	 */
	struct USteamUtilities_MakeSearchString_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamSessionSearchSetting                          ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.MakeSearchInteger
	 */
	struct USteamUtilities_MakeSearchInteger_Params
	{
	public:
		SteamCore_ESteamComparisonOp                               ComparisonOperator;                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamSessionSearchSetting                          ReturnValue;                                             // 0x0008(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.MakeSearchBool
	 */
	struct USteamUtilities_MakeSearchBool_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamSessionSearchSetting                          ReturnValue;                                             // 0x0008(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.MakePublishedFileID
	 */
	struct USteamUtilities_MakePublishedFileID_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPublishedFileID                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.MakeInventoryUpdateHandle
	 */
	struct USteamUtilities_MakeInventoryUpdateHandle_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamInventoryUpdateHandle                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.MakeInteger
	 */
	struct USteamUtilities_MakeInteger_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamSessionSetting                                ReturnValue;                                             // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.MakeBool
	 */
	struct USteamUtilities_MakeBool_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamSessionSetting                                ReturnValue;                                             // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.ListenForSteamMessages
	 */
	struct USteamUtilities_ListenForSteamMessages_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.IsValid
	 */
	struct USteamUtilities_IsValid_Params
	{
	public:
		struct FSteamID                                            SteamID;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.IsUsingP2PRelays
	 */
	struct USteamUtilities_IsUsingP2PRelays_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.IsUGCHandleValid_Exec
	 */
	struct USteamUtilities_IsUGCHandleValid_Exec_Params
	{
	public:
		struct FSteamUGCHandle                                     Handle;                                                  // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamCoreValid                                  Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.IsUGCHandleValid
	 */
	struct USteamUtilities_IsUGCHandleValid_Params
	{
	public:
		struct FSteamUGCHandle                                     Handle;                                                  // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.IsSteamTicketHandleValid_Exec
	 */
	struct USteamUtilities_IsSteamTicketHandleValid_Exec_Params
	{
	public:
		struct FSteamTicketHandle                                  Handle;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamCoreValid                                  Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.IsSteamTicketHandleValid
	 */
	struct USteamUtilities_IsSteamTicketHandleValid_Params
	{
	public:
		struct FSteamTicketHandle                                  Handle;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.IsSteamServerInitialized
	 */
	struct USteamUtilities_IsSteamServerInitialized_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid_Exec
	 */
	struct USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Params
	{
	public:
		struct FSteamInventoryUpdateHandle                         Handle;                                                  // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamCoreValid                                  Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid
	 */
	struct USteamUtilities_IsSteamInventoryUpdateHandleValid_Params
	{
	public:
		struct FSteamInventoryUpdateHandle                         Handle;                                                  // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.IsSteamIDValid_Exec
	 */
	struct USteamUtilities_IsSteamIDValid_Exec_Params
	{
	public:
		struct FSteamID                                            SteamID;                                                 // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamCoreValid                                  Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.IsSteamAvailable
	 */
	struct USteamUtilities_IsSteamAvailable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.IsRecalculatingPing
	 */
	struct USteamUtilities_IsRecalculatingPing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.IsPublishedFileIDValid_Exec
	 */
	struct USteamUtilities_IsPublishedFileIDValid_Exec_Params
	{
	public:
		struct FPublishedFileID                                    Handle;                                                  // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamCoreValid                                  Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.IsPublishedFileIDValid
	 */
	struct USteamUtilities_IsPublishedFileIDValid_Params
	{
	public:
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.IsLobby
	 */
	struct USteamUtilities_IsLobby_Params
	{
	public:
		struct FSteamID                                            SteamID;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.IsGameIDValid_Exec
	 */
	struct USteamUtilities_IsGameIDValid_Exec_Params
	{
	public:
		struct FSteamGameID                                        GameID;                                                  // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamCoreValid                                  Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.IsGameIDValid
	 */
	struct USteamUtilities_IsGameIDValid_Params
	{
	public:
		struct FSteamGameID                                        GameID;                                                  // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.GetString
	 */
	struct USteamUtilities_GetString_Params
	{
	public:
		struct FSteamSessionSetting                                Settings;                                                // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.GetSteamIdFromPlayerState
	 */
	struct USteamUtilities_GetSteamIdFromPlayerState_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamID                                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.GetPublicIp
	 */
	struct USteamUtilities_GetPublicIp_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.GetPingFromHostData
	 */
	struct USteamUtilities_GetPingFromHostData_Params
	{
	public:
		struct FHostPingData                                       Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.GetInteger
	 */
	struct USteamUtilities_GetInteger_Params
	{
	public:
		struct FSteamSessionSetting                                Settings;                                                // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.GetHostPingData
	 */
	struct USteamUtilities_GetHostPingData_Params
	{
	public:
		struct FHostPingData                                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.GetBool
	 */
	struct USteamUtilities_GetBool_Params
	{
	public:
		struct FSteamSessionSetting                                Settings;                                                // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.GetAccountType
	 */
	struct USteamUtilities_GetAccountType_Params
	{
	public:
		struct FSteamID                                            SteamID;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamAccountType                                ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.FromUnixTimestamp
	 */
	struct USteamUtilities_FromUnixTimestamp_Params
	{
	public:
		class FString                                              Timestamp;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDateTime                                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.Equal_Exec
	 */
	struct USteamUtilities_Equal_Exec_Params
	{
	public:
		struct FSteamID                                            A;                                                       // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamID                                            B;                                                       // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SteamCore_ESteamCoreIdentical                              Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.Equal
	 */
	struct USteamUtilities_Equal_Params
	{
	public:
		struct FSteamID                                            A;                                                       // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSteamID                                            B;                                                       // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.EncryptString
	 */
	struct USteamUtilities_EncryptString_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.ConstructServerFilter
	 */
	struct USteamUtilities_ConstructServerFilter_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UServerFilter*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.CancelQuery
	 */
	struct USteamUtilities_CancelQuery_Params
	{
	};

	/**
	 * Function SteamCore.SteamUtilities.BreakUGCHandle
	 */
	struct USteamUtilities_BreakUGCHandle_Params
	{
	public:
		struct FSteamUGCHandle                                     Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.BreakTicketHandle
	 */
	struct USteamUtilities_BreakTicketHandle_Params
	{
	public:
		struct FSteamTicketHandle                                  Handle;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.BreakSteamID
	 */
	struct USteamUtilities_BreakSteamID_Params
	{
	public:
		struct FSteamID                                            SteamID;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.BreakSteamGameID
	 */
	struct USteamUtilities_BreakSteamGameID_Params
	{
	public:
		struct FSteamGameID                                        SteamID;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.BreakPublishedFileID
	 */
	struct USteamUtilities_BreakPublishedFileID_Params
	{
	public:
		struct FPublishedFileID                                    FileID;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.BreakInventoryUpdateHandle
	 */
	struct USteamUtilities_BreakInventoryUpdateHandle_Params
	{
	public:
		struct FSteamInventoryUpdateHandle                         Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.BP_StringToBytes
	 */
	struct USteamUtilities_BP_StringToBytes_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SteamCore.SteamUtilities.BP_BytesToString
	 */
	struct USteamUtilities_BP_BytesToString_Params
	{
	public:
		TArray<unsigned char>                                      Array;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
