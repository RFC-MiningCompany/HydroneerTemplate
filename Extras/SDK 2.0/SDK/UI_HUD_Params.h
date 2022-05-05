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
	 * Function UI_HUD.UI_HUD_C.AddBadges
	 */
	struct UUI_HUD_C_AddBadges_Params
	{
	public:
		TArray<E_Badges_E_Badges>                                  Badges;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UPanelWidget*                                        Target;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_HUD.UI_HUD_C.SetPriceBox
	 */
	struct UUI_HUD_C_SetPriceBox_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_ParentItem_C*                                    StoreItem;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_HUD.UI_HUD_C.NewItemPickedUp
	 */
	struct UUI_HUD_C_NewItemPickedUp_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Description;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<E_Badges_E_Badges>                                  Badges;                                                  // 0x0030(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function UI_HUD.UI_HUD_C.ItemDropped
	 */
	struct UUI_HUD_C_ItemDropped_Params
	{
	};

	/**
	 * Function UI_HUD.UI_HUD_C.VehicleTipBoxShow
	 */
	struct UUI_HUD_C_VehicleTipBoxShow_Params
	{
	public:
		bool                                                       Show_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_HUD.UI_HUD_C.SetCrosshair
	 */
	struct UUI_HUD_C_SetCrosshair_Params
	{
	public:
		E_Crosshairs_E_Crosshairs                                  Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_HUD.UI_HUD_C.Saving?
	 */
	struct UUI_HUD_C_Saving__Params
	{
	public:
		bool                                                       Saving_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_HUD.UI_HUD_C.ToggleCrosshair
	 */
	struct UUI_HUD_C_ToggleCrosshair_Params
	{
	public:
		bool                                                       Show_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_HUD.UI_HUD_C.ExecuteUbergraph_UI_HUD
	 */
	struct UUI_HUD_C_ExecuteUbergraph_UI_HUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
