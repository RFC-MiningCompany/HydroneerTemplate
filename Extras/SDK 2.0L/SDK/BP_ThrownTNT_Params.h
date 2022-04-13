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
	 * Function BP_ThrownTNT.BP_ThrownTNT_C.LMBDownWhileCarrying
	 */
	struct ABP_ThrownTNT_C_LMBDownWhileCarrying_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ConsumeInput_;                                           // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ThrownTNT.BP_ThrownTNT_C.UserConstructionScript
	 */
	struct ABP_ThrownTNT_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ThrownTNT.BP_ThrownTNT_C.Explode Timer
	 */
	struct ABP_ThrownTNT_C_Explode_Timer_Params
	{	};

	/**
	 * Function BP_ThrownTNT.BP_ThrownTNT_C.Throw
	 */
	struct ABP_ThrownTNT_C_Throw_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ThrownTNT.BP_ThrownTNT_C.ExecuteUbergraph_BP_ThrownTNT
	 */
	struct ABP_ThrownTNT_C_ExecuteUbergraph_BP_ThrownTNT_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
