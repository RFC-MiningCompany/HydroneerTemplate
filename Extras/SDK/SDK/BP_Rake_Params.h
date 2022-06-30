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
	 * Function BP_Rake.BP_Rake_C.TestIfCanUse
	 */
	struct ABP_Rake_C_TestIfCanUse_Params
	{
	};

	/**
	 * Function BP_Rake.BP_Rake_C.Box Tracing
	 */
	struct ABP_Rake_C_Box_Tracing_Params
	{
	public:
		TArray<struct FHitResult>                                  OutHits;                                                 // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
		int32_t                                                    Direction;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Rake.BP_Rake_C.OverridePickedup
	 */
	struct ABP_Rake_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_Rake.BP_Rake_C.OverrideDroppedItem
	 */
	struct ABP_Rake_C_OverrideDroppedItem_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Rake.BP_Rake_C.LocationTimer
	 */
	struct ABP_Rake_C_LocationTimer_Params
	{
	};

	/**
	 * Function BP_Rake.BP_Rake_C.LMBDownWhileCarrying
	 */
	struct ABP_Rake_C_LMBDownWhileCarrying_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Rake.BP_Rake_C.OverrideAnimFinished
	 */
	struct ABP_Rake_C_OverrideAnimFinished_Params
	{
	};

	/**
	 * Function BP_Rake.BP_Rake_C.ExecuteUbergraph_BP_Rake
	 */
	struct ABP_Rake_C_ExecuteUbergraph_BP_Rake_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
