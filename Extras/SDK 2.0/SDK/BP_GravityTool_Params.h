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
	 * Function BP_GravityTool.BP_GravityTool_C.UserConstructionScript
	 */
	struct ABP_GravityTool_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_GravityTool.BP_GravityTool_C.Timeline_1__FinishedFunc
	 */
	struct ABP_GravityTool_C_Timeline_1__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_GravityTool.BP_GravityTool_C.Timeline_1__UpdateFunc
	 */
	struct ABP_GravityTool_C_Timeline_1__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_GravityTool.BP_GravityTool_C.Animate
	 */
	struct ABP_GravityTool_C_Animate_Params
	{
	};

	/**
	 * Function BP_GravityTool.BP_GravityTool_C.OverrideDroppedItem
	 */
	struct ABP_GravityTool_C_OverrideDroppedItem_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GravityTool.BP_GravityTool_C.GravTimer
	 */
	struct ABP_GravityTool_C_GravTimer_Params
	{
	};

	/**
	 * Function BP_GravityTool.BP_GravityTool_C.StopLiftingObject
	 */
	struct ABP_GravityTool_C_StopLiftingObject_Params
	{
	public:
		bool                                                       Add_Velocity_;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_GravityTool.BP_GravityTool_C.StartLiftingObject
	 */
	struct ABP_GravityTool_C_StartLiftingObject_Params
	{
	public:
		class AActor*                                              Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GravityTool.BP_GravityTool_C.TurnOnHeat
	 */
	struct ABP_GravityTool_C_TurnOnHeat_Params
	{
	public:
		bool                                                       Heat_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_GravityTool.BP_GravityTool_C.LMBDownWhileCarrying
	 */
	struct ABP_GravityTool_C_LMBDownWhileCarrying_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GravityTool.BP_GravityTool_C.RMBDownWhileCarrying
	 */
	struct ABP_GravityTool_C_RMBDownWhileCarrying_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GravityTool.BP_GravityTool_C.ExecuteUbergraph_BP_GravityTool
	 */
	struct ABP_GravityTool_C_ExecuteUbergraph_BP_GravityTool_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
