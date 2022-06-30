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
	 * Function BP_Pan.BP_Pan_C.GetRandXY
	 */
	struct ABP_Pan_C_GetRandXY_Params
	{
	public:
		float                                                      ReturnValue_X;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue_Y;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Pan.BP_Pan_C.OverlappedDirtParticle
	 */
	struct ABP_Pan_C_OverlappedDirtParticle_Params
	{
	public:
		class ABP_DirtResource_C*                                  Dirt;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Pan.BP_Pan_C.GenerateGems
	 */
	struct ABP_Pan_C_GenerateGems_Params
	{
	};

	/**
	 * Function BP_Pan.BP_Pan_C.AddDirt
	 */
	struct ABP_Pan_C_AddDirt_Params
	{
	public:
		int32_t                                                    DirtQualityAverage;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DirtLoads;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Pan.BP_Pan_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Pan_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_Pan.BP_Pan_C.EmptyWater
	 */
	struct ABP_Pan_C_EmptyWater_Params
	{
	};

	/**
	 * Function BP_Pan.BP_Pan_C.DevTest
	 */
	struct ABP_Pan_C_DevTest_Params
	{
	};

	/**
	 * Function BP_Pan.BP_Pan_C.InWater
	 */
	struct ABP_Pan_C_InWater_Params
	{
	};

	/**
	 * Function BP_Pan.BP_Pan_C.WaterParticleHit
	 */
	struct ABP_Pan_C_WaterParticleHit_Params
	{
	};

	/**
	 * Function BP_Pan.BP_Pan_C.LMBDownWhileCarrying
	 */
	struct ABP_Pan_C_LMBDownWhileCarrying_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Pan.BP_Pan_C.EmptyDirt
	 */
	struct ABP_Pan_C_EmptyDirt_Params
	{
	};

	/**
	 * Function BP_Pan.BP_Pan_C.Scrubbed
	 */
	struct ABP_Pan_C_Scrubbed_Params
	{
	};

	/**
	 * Function BP_Pan.BP_Pan_C.BndEvt__BP_Pan_Cylinder_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_Pan_C_BndEvt__BP_Pan_Cylinder_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Pan.BP_Pan_C.ExecuteUbergraph_BP_Pan
	 */
	struct ABP_Pan_C_ExecuteUbergraph_BP_Pan_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
