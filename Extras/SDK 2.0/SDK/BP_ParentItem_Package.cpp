/**
 * Name: Hydroneer
 * Version: 2.0
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.BPI_GetCanHighlight");
		
		struct
		{
			bool                                               CanHighlight_;
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.BPI_GetHighlightArray");
		
		struct
		{
			TArray<int32_t>                                    HighlightArray;
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.BPI_SetHighlightArray");
		
		struct
		{
			TArray<int32_t>                                    HighlightArray;
			bool                                               Result;
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ComponentsToSave");
		
		struct
		{
			TArray<class UActorComponent*>                     Components;
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ToggleHighlight");
		
		struct
		{
			bool                                               Highlight_;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.PlaySecondaryUseAnim");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.PlayPrimaryUseAnim");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ToggleOnlyOwnerSee");
		
		struct
		{
			bool                                               OnlyOwnerSee;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.SetProxyCollisionVisibility");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ToggleProxyItem");
		
		struct
		{
			bool                                               Enabled_;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.CreateProxyItem");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.SetMeshPhysicalReaction");
		
		struct
		{
			E_PhyReact                                         New_Reaction;
			class UStaticMeshComponent*                        Mesh;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.RevertMaterials");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.Change Materials");
		
		struct
		{
			class UMaterialInterface*                          Material;
			bool                                               Temporary_;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.LockPhysics");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.PhysicsLockTimer");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.Set Item Physical Reactions");
		
		struct
		{
			E_PhyReact                                         New_Reaction;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.SetAllResponseToChannel");
		
		struct
		{
			ECollisionResponse                                 NewResponse;
			ECollisionChannel                                  Channel;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ScanForDropCollision");
		
		struct
		{
			bool                                               Can_Drop_;
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.Scan for Items on Top");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.UserConstructionScript");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideDroppedItem");
		
		struct
		{
			class ABP_GameCharacter_C*                         Character;
		} params;
		params.Character = Character;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideLoaded");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverridePickedup");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ItemPrecisionPlace");
		
		struct
		{
			class ABP_GameCharacter_C*                         Player;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideHighlighted");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideUnhighlighted");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ItemDropped");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ItemPickedUp");
		
		struct
		{
			class ABP_GameCharacter_C*                         Player;
		} params;
		params.Player = Player;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.TriggerPhysics");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideLockedPhysics");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.FlashRed");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.FlashRedTimer");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ActorSaved");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ActorPreSave");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.Cooldown");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		struct
		{
			class UPrimitiveComponent*                         HitComponent;
			class AActor*                                      OtherActor;
			class UPrimitiveComponent*                         OtherComp;
			struct FVector                                     NormalImpulse;
			struct FHitResult                                  Hit;
		} params;
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.BPI_ToggleLookAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LookingAt_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentItem_C::BPI_ToggleLookAt(class ABP_GameController_C* Controller, bool LookingAt_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.BPI_ToggleLookAt");
		
		struct
		{
			class ABP_GameController_C*                        Controller;
			bool                                               LookingAt_;
		} params;
		params.Controller = Controller;
		params.LookingAt_ = LookingAt_;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideAnimFinished");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideHit");
		
		struct
		{
			class AActor*                                      OtherActor;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ShelfItem");
		
		struct
		{
			class AActor*                                      BeingStoredBy;
		} params;
		params.BeingStoredBy = BeingStoredBy;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ReceiveBeginPlay");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.PaidForItem");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ActorLoaded");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ReceiveDestroyed");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.BPI_Unhighlight");
		
		struct
		{
			class ABP_GameController_C*                        Controller;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.BPI_Highlight");
		
		struct
		{
			class ABP_GameController_C*                        Controller;
		} params;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.TriggerPhysicsKeepReact
	 * 		Flags  -> ()
	 */
	void ABP_ParentItem_C::TriggerPhysicsKeepReact()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.TriggerPhysicsKeepReact");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ExecuteUbergraph_BP_ParentItem");
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
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
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentItem.BP_ParentItem_C");
		return ptr;
	}

}


