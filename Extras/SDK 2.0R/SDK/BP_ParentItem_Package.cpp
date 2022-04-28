/**
 * Name: Hydroneer
 * Version: 2.0R
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.BPI_GetCanHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanHighlight_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentItem_C::BPI_GetCanHighlight(bool* CanHighlight_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.BPI_GetCanHighlight");
		
		ABP_ParentItem_C_BPI_GetCanHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanHighlight_ != nullptr)
			*CanHighlight_ = params.CanHighlight_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.BPI_GetHighlightArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    HighlightArray                                             (Parm, OutParm)
	 */
	void ABP_ParentItem_C::BPI_GetHighlightArray(TArray<int32_t>* HighlightArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.BPI_GetHighlightArray");
		
		ABP_ParentItem_C_BPI_GetHighlightArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HighlightArray != nullptr)
			*HighlightArray = params.HighlightArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.BPI_SetHighlightArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    HighlightArray                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentItem_C::BPI_SetHighlightArray(TArray<int32_t>* HighlightArray, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.BPI_SetHighlightArray");
		
		ABP_ParentItem_C_BPI_SetHighlightArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HighlightArray != nullptr)
			*HighlightArray = params.HighlightArray;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ComponentsToSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     Components                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_ParentItem_C::ComponentsToSave(TArray<class UActorComponent*>* Components)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ComponentsToSave");
		
		ABP_ParentItem_C_ComponentsToSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Components != nullptr)
			*Components = params.Components;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ToggleHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Highlight_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentItem_C::ToggleHighlight(bool Highlight_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ToggleHighlight");
		
		ABP_ParentItem_C_ToggleHighlight_Params params {};
		params.Highlight_ = Highlight_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.PlaySecondaryUseAnim
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::PlaySecondaryUseAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.PlaySecondaryUseAnim");
		
		ABP_ParentItem_C_PlaySecondaryUseAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.PlayPrimaryUseAnim
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::PlayPrimaryUseAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.PlayPrimaryUseAnim");
		
		ABP_ParentItem_C_PlayPrimaryUseAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ToggleOnlyOwnerSee
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnlyOwnerSee                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentItem_C::ToggleOnlyOwnerSee(bool OnlyOwnerSee)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ToggleOnlyOwnerSee");
		
		ABP_ParentItem_C_ToggleOnlyOwnerSee_Params params {};
		params.OnlyOwnerSee = OnlyOwnerSee;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.SetProxyCollisionVisibility
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::SetProxyCollisionVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.SetProxyCollisionVisibility");
		
		ABP_ParentItem_C_SetProxyCollisionVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ToggleProxyItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentItem_C::ToggleProxyItem(bool Enabled_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ToggleProxyItem");
		
		ABP_ParentItem_C_ToggleProxyItem_Params params {};
		params.Enabled_ = Enabled_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.CreateProxyItem
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::CreateProxyItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.CreateProxyItem");
		
		ABP_ParentItem_C_CreateProxyItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.SetMeshPhysicalReaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_PhyReact                                         New_Reaction                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::SetMeshPhysicalReaction(E_PhyReact New_Reaction, class UStaticMeshComponent* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.SetMeshPhysicalReaction");
		
		ABP_ParentItem_C_SetMeshPhysicalReaction_Params params {};
		params.New_Reaction = New_Reaction;
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.RevertMaterials
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::RevertMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.RevertMaterials");
		
		ABP_ParentItem_C_RevertMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.Change Materials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Temporary_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentItem_C::Change_Materials(class UMaterialInterface* Material, bool Temporary_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.Change Materials");
		
		ABP_ParentItem_C_Change_Materials_Params params {};
		params.Material = Material;
		params.Temporary_ = Temporary_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.LockPhysics
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::LockPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.LockPhysics");
		
		ABP_ParentItem_C_LockPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.PhysicsLockTimer
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::PhysicsLockTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.PhysicsLockTimer");
		
		ABP_ParentItem_C_PhysicsLockTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.Set Item Physical Reactions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_PhyReact                                         New_Reaction                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::Set_Item_Physical_Reactions(E_PhyReact New_Reaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.Set Item Physical Reactions");
		
		ABP_ParentItem_C_Set_Item_Physical_Reactions_Params params {};
		params.New_Reaction = New_Reaction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.SetAllResponseToChannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECollisionResponse                                 NewResponse                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECollisionChannel                                  Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::SetAllResponseToChannel(ECollisionResponse NewResponse, ECollisionChannel Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.SetAllResponseToChannel");
		
		ABP_ParentItem_C_SetAllResponseToChannel_Params params {};
		params.NewResponse = NewResponse;
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ScanForDropCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Can_Drop_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentItem_C::ScanForDropCollision(bool* Can_Drop_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ScanForDropCollision");
		
		ABP_ParentItem_C_ScanForDropCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Can_Drop_ != nullptr)
			*Can_Drop_ = params.Can_Drop_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.Scan for Items on Top
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::Scan_for_Items_on_Top()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.Scan for Items on Top");
		
		ABP_ParentItem_C_Scan_for_Items_on_Top_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.UserConstructionScript");
		
		ABP_ParentItem_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverrideLoaded
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::OverrideLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideLoaded");
		
		ABP_ParentItem_C_OverrideLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverridePickedup
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::OverridePickedup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverridePickedup");
		
		ABP_ParentItem_C_OverridePickedup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ItemPrecisionPlace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::ItemPrecisionPlace(class ABP_GameCharacter_C* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ItemPrecisionPlace");
		
		ABP_ParentItem_C_ItemPrecisionPlace_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverrideHighlighted
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::OverrideHighlighted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideHighlighted");
		
		ABP_ParentItem_C_OverrideHighlighted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverrideUnhighlighted
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::OverrideUnhighlighted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideUnhighlighted");
		
		ABP_ParentItem_C_OverrideUnhighlighted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverrideDroppedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::OverrideDroppedItem(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideDroppedItem");
		
		ABP_ParentItem_C_OverrideDroppedItem_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.TriggerPhysics
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::TriggerPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.TriggerPhysics");
		
		ABP_ParentItem_C_TriggerPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverrideLockedPhysics
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::OverrideLockedPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideLockedPhysics");
		
		ABP_ParentItem_C_OverrideLockedPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.FlashRed
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::FlashRed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.FlashRed");
		
		ABP_ParentItem_C_FlashRed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.FlashRedTimer
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::FlashRedTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.FlashRedTimer");
		
		ABP_ParentItem_C_FlashRedTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ItemDropped
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::ItemDropped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ItemDropped");
		
		ABP_ParentItem_C_ItemDropped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.Cooldown
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::Cooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.Cooldown");
		
		ABP_ParentItem_C_Cooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_ParentItem_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		ABP_ParentItem_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ItemPickedUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::ItemPickedUp(class ABP_GameCharacter_C* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ItemPickedUp");
		
		ABP_ParentItem_C_ItemPickedUp_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverrideAnimFinished
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::OverrideAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideAnimFinished");
		
		ABP_ParentItem_C_OverrideAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverrideHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::OverrideHit(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideHit");
		
		ABP_ParentItem_C_OverrideHit_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ShelfItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      BeingStoredBy                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::ShelfItem(class AActor* BeingStoredBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ShelfItem");
		
		ABP_ParentItem_C_ShelfItem_Params params {};
		params.BeingStoredBy = BeingStoredBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ActorSaved
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::ActorSaved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ActorSaved");
		
		ABP_ParentItem_C_ActorSaved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ReceiveBeginPlay");
		
		ABP_ParentItem_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.PaidForItem
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::PaidForItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.PaidForItem");
		
		ABP_ParentItem_C_PaidForItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ActorPreSave
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::ActorPreSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ActorPreSave");
		
		ABP_ParentItem_C_ActorPreSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::ActorLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ActorLoaded");
		
		ABP_ParentItem_C_ActorLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ReceiveDestroyed");
		
		ABP_ParentItem_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.BPI_Unhighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::BPI_Unhighlight(class ABP_GameController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.BPI_Unhighlight");
		
		ABP_ParentItem_C_BPI_Unhighlight_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.BPI_Highlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::BPI_Highlight(class ABP_GameController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.BPI_Highlight");
		
		ABP_ParentItem_C_BPI_Highlight_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ExecuteUbergraph_BP_ParentItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::ExecuteUbergraph_BP_ParentItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ExecuteUbergraph_BP_ParentItem");
		
		ABP_ParentItem_C_ExecuteUbergraph_BP_ParentItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ParentItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentItem.BP_ParentItem_C");
		return ptr;
	}

}


