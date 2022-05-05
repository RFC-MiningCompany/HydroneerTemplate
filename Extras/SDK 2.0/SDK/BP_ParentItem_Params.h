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
	 * Function BP_ParentItem.BP_ParentItem_C.ComponentsToSave
	 */
	struct ABP_ParentItem_C_ComponentsToSave_Params
	{
	public:
		TArray<class UActorComponent*>                             Components;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ToggleHighlight
	 */
	struct ABP_ParentItem_C_ToggleHighlight_Params
	{
	public:
		bool                                                       Highlight_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.PlaySecondaryUseAnim
	 */
	struct ABP_ParentItem_C_PlaySecondaryUseAnim_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.PlayPrimaryUseAnim
	 */
	struct ABP_ParentItem_C_PlayPrimaryUseAnim_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ToggleOnlyOwnerSee
	 */
	struct ABP_ParentItem_C_ToggleOnlyOwnerSee_Params
	{
	public:
		bool                                                       OnlyOwnerSee;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.SetProxyCollisionVisibility
	 */
	struct ABP_ParentItem_C_SetProxyCollisionVisibility_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ToggleProxyItem
	 */
	struct ABP_ParentItem_C_ToggleProxyItem_Params
	{
	public:
		bool                                                       Enabled_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.CreateProxyItem
	 */
	struct ABP_ParentItem_C_CreateProxyItem_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.SetMeshPhysicalReaction
	 */
	struct ABP_ParentItem_C_SetMeshPhysicalReaction_Params
	{
	public:
		E_PhyReact_E_PhyReact                                      New_Reaction;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMeshComponent*                                Mesh;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.RevertMaterials
	 */
	struct ABP_ParentItem_C_RevertMaterials_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ChangeMaterials
	 */
	struct ABP_ParentItem_C_ChangeMaterials_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Temporary_;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.LockPhysics
	 */
	struct ABP_ParentItem_C_LockPhysics_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.PhysicsLockTimer
	 */
	struct ABP_ParentItem_C_PhysicsLockTimer_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.Set Item Physical Reactions
	 */
	struct ABP_ParentItem_C_Set_Item_Physical_Reactions_Params
	{
	public:
		E_PhyReact_E_PhyReact                                      New_Reaction;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.SetAllResponseToChannel
	 */
	struct ABP_ParentItem_C_SetAllResponseToChannel_Params
	{
	public:
		Engine_ECollisionResponse                                  NewResponse;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		Engine_ECollisionChannel                                   Channel;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ScanForDropCollision
	 */
	struct ABP_ParentItem_C_ScanForDropCollision_Params
	{
	public:
		bool                                                       Can_Drop_;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.Scan for Items on Top
	 */
	struct ABP_ParentItem_C_Scan_for_Items_on_Top_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverrideLoaded
	 */
	struct ABP_ParentItem_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverridePickedup
	 */
	struct ABP_ParentItem_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ItemPrecisionPlace
	 */
	struct ABP_ParentItem_C_ItemPrecisionPlace_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverrideHighlighted
	 */
	struct ABP_ParentItem_C_OverrideHighlighted_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverrideUnhighlighted
	 */
	struct ABP_ParentItem_C_OverrideUnhighlighted_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverrideDroppedItem
	 */
	struct ABP_ParentItem_C_OverrideDroppedItem_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.TriggerPhysics
	 */
	struct ABP_ParentItem_C_TriggerPhysics_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverrideLockedPhysics
	 */
	struct ABP_ParentItem_C_OverrideLockedPhysics_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.FlashRed
	 */
	struct ABP_ParentItem_C_FlashRed_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.FlashRedTimer
	 */
	struct ABP_ParentItem_C_FlashRedTimer_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ItemDropped
	 */
	struct ABP_ParentItem_C_ItemDropped_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.Cooldown
	 */
	struct ABP_ParentItem_C_Cooldown_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_ParentItem_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ItemPickedUp
	 */
	struct ABP_ParentItem_C_ItemPickedUp_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverrideAnimFinished
	 */
	struct ABP_ParentItem_C_OverrideAnimFinished_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverrideHit
	 */
	struct ABP_ParentItem_C_OverrideHit_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ShelfItem
	 */
	struct ABP_ParentItem_C_ShelfItem_Params
	{
	public:
		class AActor*                                              BeingStoredBy;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ActorSaved
	 */
	struct ABP_ParentItem_C_ActorSaved_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ReceiveBeginPlay
	 */
	struct ABP_ParentItem_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.PaidForItem
	 */
	struct ABP_ParentItem_C_PaidForItem_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ActorPreSave
	 */
	struct ABP_ParentItem_C_ActorPreSave_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ActorLoaded
	 */
	struct ABP_ParentItem_C_ActorLoaded_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ReceiveDestroyed
	 */
	struct ABP_ParentItem_C_ReceiveDestroyed_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.BndEvt__BP_ParentItem_AC_Highlight_K2Node_ComponentBoundEvent_0_OnHighlighted__DelegateSignature
	 */
	struct ABP_ParentItem_C_BndEvt__BP_ParentItem_AC_Highlight_K2Node_ComponentBoundEvent_0_OnHighlighted__DelegateSignature_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.BndEvt__BP_ParentItem_AC_Highlight_K2Node_ComponentBoundEvent_1_OnUnhighlighted__DelegateSignature
	 */
	struct ABP_ParentItem_C_BndEvt__BP_ParentItem_AC_Highlight_K2Node_ComponentBoundEvent_1_OnUnhighlighted__DelegateSignature_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ExecuteUbergraph_BP_ParentItem
	 */
	struct ABP_ParentItem_C_ExecuteUbergraph_BP_ParentItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
