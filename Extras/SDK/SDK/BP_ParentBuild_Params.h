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
	 * Function BP_ParentBuild.BP_ParentBuild_C.FindTracePivots
	 */
	struct ABP_ParentBuild_C_FindTracePivots_Params
	{
	public:
		TArray<struct FVector>                                     Pivots;                                                  // 0x0000(0x0010)  (Parm, OutParm)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.IsSpecificHookable
	 */
	struct ABP_ParentBuild_C_IsSpecificHookable_Params
	{
	public:
		bool                                                       CanPlace_;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.IsHookable
	 */
	struct ABP_ParentBuild_C_IsHookable_Params
	{
	public:
		bool                                                       CanPlace_;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.IsClipping
	 */
	struct ABP_ParentBuild_C_IsClipping_Params
	{
	public:
		bool                                                       CanPlace_;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.ItemIsPlacing
	 */
	struct ABP_ParentBuild_C_ItemIsPlacing_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.ItemIsBuilt
	 */
	struct ABP_ParentBuild_C_ItemIsBuilt_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.UnderGroundTest
	 */
	struct ABP_ParentBuild_C_UnderGroundTest_Params
	{
	public:
		bool                                                       CanPlace_;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.TouchVoxelTest
	 */
	struct ABP_ParentBuild_C_TouchVoxelTest_Params
	{
	public:
		bool                                                       TouchingSomething;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.TouchAnythingTest
	 */
	struct ABP_ParentBuild_C_TouchAnythingTest_Params
	{
	public:
		bool                                                       TouchingSomething;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.LMBUpWhileCarrying
	 */
	struct ABP_ParentBuild_C_LMBUpWhileCarrying_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.RMBDownWhileCarrying
	 */
	struct ABP_ParentBuild_C_RMBDownWhileCarrying_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.RMBDownIsTarget
	 */
	struct ABP_ParentBuild_C_RMBDownIsTarget_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_ParentItem_C*                                    CarryingItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_GameController_C*                                Instigator;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.LMBDownIsTarget
	 */
	struct ABP_ParentBuild_C_LMBDownIsTarget_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_ParentItem_C*                                    CarryingItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_GameController_C*                                Insigator;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.OverrideDroppedItem
	 */
	struct ABP_ParentBuild_C_OverrideDroppedItem_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.OverridePlacedDown
	 */
	struct ABP_ParentBuild_C_OverridePlacedDown_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.LockItem
	 */
	struct ABP_ParentBuild_C_LockItem_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.OverridePickedup
	 */
	struct ABP_ParentBuild_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.OverrideStartPlacing
	 */
	struct ABP_ParentBuild_C_OverrideStartPlacing_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.PlacementCheck
	 */
	struct ABP_ParentBuild_C_PlacementCheck_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.LMBDownWhileCarrying
	 */
	struct ABP_ParentBuild_C_LMBDownWhileCarrying_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.ReceiveBeginPlay
	 */
	struct ABP_ParentBuild_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.AttachPart
	 */
	struct ABP_ParentBuild_C_AttachPart_Params
	{
	public:
		class ABP_ParentHook_C*                                    Hook;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.RemovePart
	 */
	struct ABP_ParentBuild_C_RemovePart_Params
	{
	public:
		class ABP_ParentHook_C*                                    Hook;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.ActorLoaded
	 */
	struct ABP_ParentBuild_C_ActorLoaded_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.ExecuteUbergraph_BP_ParentBuild
	 */
	struct ABP_ParentBuild_C_ExecuteUbergraph_BP_ParentBuild_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
