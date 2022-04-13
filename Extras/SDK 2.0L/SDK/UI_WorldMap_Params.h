#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0L
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
	 * Function UI_WorldMap.UI_WorldMap_C.UpdateSelection
	 */
	struct UUI_WorldMap_C_UpdateSelection_Params
	{
	public:
		bool                                                       InUse_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_WorldMap.UI_WorldMap_C.Loop
	 */
	struct UUI_WorldMap_C_Loop_Params
	{	};

	/**
	 * Function UI_WorldMap.UI_WorldMap_C.Activate
	 */
	struct UUI_WorldMap_C_Activate_Params
	{
	public:
		int32_t                                                    PlayerIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WorldMap.UI_WorldMap_C.Deactivate
	 */
	struct UUI_WorldMap_C_Deactivate_Params
	{	};

	/**
	 * Function UI_WorldMap.UI_WorldMap_C.ExecuteUbergraph_UI_WorldMap
	 */
	struct UUI_WorldMap_C_ExecuteUbergraph_UI_WorldMap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
