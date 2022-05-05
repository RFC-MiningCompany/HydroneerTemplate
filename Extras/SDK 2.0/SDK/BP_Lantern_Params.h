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
	 * Function BP_Lantern.BP_Lantern_C.CreateProxyItem
	 */
	struct ABP_Lantern_C_CreateProxyItem_Params
	{
	};

	/**
	 * Function BP_Lantern.BP_Lantern_C.UserConstructionScript
	 */
	struct ABP_Lantern_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_Lantern.BP_Lantern_C.Timeline_1__FinishedFunc
	 */
	struct ABP_Lantern_C_Timeline_1__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Lantern.BP_Lantern_C.Timeline_1__UpdateFunc
	 */
	struct ABP_Lantern_C_Timeline_1__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Lantern.BP_Lantern_C.WaterParticleHit
	 */
	struct ABP_Lantern_C_WaterParticleHit_Params
	{
	};

	/**
	 * Function BP_Lantern.BP_Lantern_C.OverrideLoaded
	 */
	struct ABP_Lantern_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_Lantern.BP_Lantern_C.LMBDownWhileCarrying
	 */
	struct ABP_Lantern_C_LMBDownWhileCarrying_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Lantern.BP_Lantern_C.InWater
	 */
	struct ABP_Lantern_C_InWater_Params
	{
	};

	/**
	 * Function BP_Lantern.BP_Lantern_C.ToggleLight
	 */
	struct ABP_Lantern_C_ToggleLight_Params
	{
	public:
		bool                                                       TurnOn_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Lantern.BP_Lantern_C.ExecuteUbergraph_BP_Lantern
	 */
	struct ABP_Lantern_C_ExecuteUbergraph_BP_Lantern_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
