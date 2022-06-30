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
	 * Function AC_Magnet.AC_Magnet_C.NewItem
	 */
	struct UAC_Magnet_C_NewItem_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_Magnet.AC_Magnet_C.RemoveItem
	 */
	struct UAC_Magnet_C_RemoveItem_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_Magnet.AC_Magnet_C.StartMagnet
	 */
	struct UAC_Magnet_C_StartMagnet_Params
	{
	public:
		class USceneComponent*                                     AttractLocation;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_Magnet.AC_Magnet_C.StopMagnet
	 */
	struct UAC_Magnet_C_StopMagnet_Params
	{
	};

	/**
	 * Function AC_Magnet.AC_Magnet_C.MagnetTimer
	 */
	struct UAC_Magnet_C_MagnetTimer_Params
	{
	};

	/**
	 * Function AC_Magnet.AC_Magnet_C.PrepItemsMag
	 */
	struct UAC_Magnet_C_PrepItemsMag_Params
	{
	};

	/**
	 * Function AC_Magnet.AC_Magnet_C.PrepItemsDrop
	 */
	struct UAC_Magnet_C_PrepItemsDrop_Params
	{
	};

	/**
	 * Function AC_Magnet.AC_Magnet_C.ExecuteUbergraph_AC_Magnet
	 */
	struct UAC_Magnet_C_ExecuteUbergraph_AC_Magnet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
