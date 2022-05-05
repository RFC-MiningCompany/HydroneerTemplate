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
	 * Function BP_ParentCart.BP_ParentCart_C.CalculateWheelTurn
	 */
	struct ABP_ParentCart_C_CalculateWheelTurn_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentCart.BP_ParentCart_C.ScanForDropCollision
	 */
	struct ABP_ParentCart_C_ScanForDropCollision_Params
	{
	public:
		bool                                                       Can_Drop_;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentCart.BP_ParentCart_C.ToggleProxyItem
	 */
	struct ABP_ParentCart_C_ToggleProxyItem_Params
	{
	public:
		bool                                                       Enabled_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentCart.BP_ParentCart_C.CustomEvent
	 */
	struct ABP_ParentCart_C_CustomEvent_Params
	{
	};

	/**
	 * Function BP_ParentCart.BP_ParentCart_C.UserConstructionScript
	 */
	struct ABP_ParentCart_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_ParentCart.BP_ParentCart_C.ItemStored
	 */
	struct ABP_ParentCart_C_ItemStored_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentCart.BP_ParentCart_C.Movement Sound
	 */
	struct ABP_ParentCart_C_Movement_Sound_Params
	{
	};

	/**
	 * Function BP_ParentCart.BP_ParentCart_C.ToggleMovementSound
	 */
	struct ABP_ParentCart_C_ToggleMovementSound_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentCart.BP_ParentCart_C.BndEvt__StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_ParentCart_C_BndEvt__StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_ParentCart.BP_ParentCart_C.OverridePickedup
	 */
	struct ABP_ParentCart_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_ParentCart.BP_ParentCart_C.OverrideDroppedItem
	 */
	struct ABP_ParentCart_C_OverrideDroppedItem_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentCart.BP_ParentCart_C.OverrideLockedPhysics
	 */
	struct ABP_ParentCart_C_OverrideLockedPhysics_Params
	{
	};

	/**
	 * Function BP_ParentCart.BP_ParentCart_C.ChangeAttachedReactionss
	 */
	struct ABP_ParentCart_C_ChangeAttachedReactionss_Params
	{
	public:
		E_PhyReact_E_PhyReact                                      New_Reaction;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentCart.BP_ParentCart_C.BndEvt__BP_ParentCart_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_ParentCart_C_BndEvt__BP_ParentCart_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentCart.BP_ParentCart_C.StoredItemPickedUp
	 */
	struct ABP_ParentCart_C_StoredItemPickedUp_Params
	{
	public:
		class ABP_ParentItem_C*                                    ItemPickedUp;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentCart.BP_ParentCart_C.ReceiveDestroyed
	 */
	struct ABP_ParentCart_C_ReceiveDestroyed_Params
	{
	};

	/**
	 * Function BP_ParentCart.BP_ParentCart_C.ReceiveTick
	 */
	struct ABP_ParentCart_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentCart.BP_ParentCart_C.ExecuteUbergraph_BP_ParentCart
	 */
	struct ABP_ParentCart_C_ExecuteUbergraph_BP_ParentCart_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
