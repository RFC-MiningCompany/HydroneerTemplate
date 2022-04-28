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
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.LMBDownWhileCarrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ConsumeInput_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentBuild_C::LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, const struct FVector& HitLocation, bool* ConsumeInput_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.LMBDownWhileCarrying");
		
		ABP_ParentBuild_C_LMBDownWhileCarrying_Params params {};
		params.Controller = Controller;
		params.HitActor = HitActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConsumeInput_ != nullptr)
			*ConsumeInput_ = params.ConsumeInput_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.StopPlacingItem
	 * 		Flags  -> ()
	 */
	void ABP_ParentBuild_C::StopPlacingItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.StopPlacingItem");
		
		ABP_ParentBuild_C_StopPlacingItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.BPI_GetCanHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanHighlight_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentBuild_C::BPI_GetCanHighlight(bool* CanHighlight_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.BPI_GetCanHighlight");
		
		ABP_ParentBuild_C_BPI_GetCanHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanHighlight_ != nullptr)
			*CanHighlight_ = params.CanHighlight_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.FindTracePivots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             Pivots                                                     (Parm, OutParm)
	 */
	void ABP_ParentBuild_C::FindTracePivots(TArray<struct FVector>* Pivots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.FindTracePivots");
		
		ABP_ParentBuild_C_FindTracePivots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pivots != nullptr)
			*Pivots = params.Pivots;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.IsSpecificHookable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanPlace_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentBuild_C::IsSpecificHookable(bool* CanPlace_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.IsSpecificHookable");
		
		ABP_ParentBuild_C_IsSpecificHookable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanPlace_ != nullptr)
			*CanPlace_ = params.CanPlace_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.IsHookable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanPlace_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentBuild_C::IsHookable(bool* CanPlace_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.IsHookable");
		
		ABP_ParentBuild_C_IsHookable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanPlace_ != nullptr)
			*CanPlace_ = params.CanPlace_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.IsClipping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanPlace_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentBuild_C::IsClipping(bool* CanPlace_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.IsClipping");
		
		ABP_ParentBuild_C_IsClipping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanPlace_ != nullptr)
			*CanPlace_ = params.CanPlace_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.ItemIsPlacing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentBuild_C::ItemIsPlacing(class ABP_GameController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.ItemIsPlacing");
		
		ABP_ParentBuild_C_ItemIsPlacing_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.ItemIsBuilt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentBuild_C::ItemIsBuilt(class ABP_GameController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.ItemIsBuilt");
		
		ABP_ParentBuild_C_ItemIsBuilt_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.UnderGroundTest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanPlace_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentBuild_C::UnderGroundTest(bool* CanPlace_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.UnderGroundTest");
		
		ABP_ParentBuild_C_UnderGroundTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanPlace_ != nullptr)
			*CanPlace_ = params.CanPlace_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.TouchVoxelTest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TouchingSomething                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentBuild_C::TouchVoxelTest(bool* TouchingSomething)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.TouchVoxelTest");
		
		ABP_ParentBuild_C_TouchVoxelTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TouchingSomething != nullptr)
			*TouchingSomething = params.TouchingSomething;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.TouchAnythingTest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TouchingSomething                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentBuild_C::TouchAnythingTest(bool* TouchingSomething)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.TouchAnythingTest");
		
		ABP_ParentBuild_C_TouchAnythingTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TouchingSomething != nullptr)
			*TouchingSomething = params.TouchingSomething;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.LMBUpWhileCarrying
	 * 		Flags  -> ()
	 */
	void ABP_ParentBuild_C::LMBUpWhileCarrying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.LMBUpWhileCarrying");
		
		ABP_ParentBuild_C_LMBUpWhileCarrying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.RMBDownWhileCarrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Hit_Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentBuild_C::RMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* Hit_Actor, const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.RMBDownWhileCarrying");
		
		ABP_ParentBuild_C_RMBDownWhileCarrying_Params params {};
		params.Controller = Controller;
		params.Hit_Actor = Hit_Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.RMBDownIsTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_ParentItem_C*                            CarryingItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_GameController_C*                        Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentBuild_C::RMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.RMBDownIsTarget");
		
		ABP_ParentBuild_C_RMBDownIsTarget_Params params {};
		params.Component = Component;
		params.CarryingItem = CarryingItem;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.LMBDownIsTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_ParentItem_C*                            CarryingItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_GameController_C*                        Insigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentBuild_C::LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.LMBDownIsTarget");
		
		ABP_ParentBuild_C_LMBDownIsTarget_Params params {};
		params.Component = Component;
		params.CarryingItem = CarryingItem;
		params.Insigator = Insigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.OverrideDroppedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentBuild_C::OverrideDroppedItem(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.OverrideDroppedItem");
		
		ABP_ParentBuild_C_OverrideDroppedItem_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.OverridePlacedDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentBuild_C::OverridePlacedDown(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.OverridePlacedDown");
		
		ABP_ParentBuild_C_OverridePlacedDown_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.LockItem
	 * 		Flags  -> ()
	 */
	void ABP_ParentBuild_C::LockItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.LockItem");
		
		ABP_ParentBuild_C_LockItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.OverridePickedup
	 * 		Flags  -> ()
	 */
	void ABP_ParentBuild_C::OverridePickedup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.OverridePickedup");
		
		ABP_ParentBuild_C_OverridePickedup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.OverrideStartPlacing
	 * 		Flags  -> ()
	 */
	void ABP_ParentBuild_C::OverrideStartPlacing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.OverrideStartPlacing");
		
		ABP_ParentBuild_C_OverrideStartPlacing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.PlacementCheck
	 * 		Flags  -> ()
	 */
	void ABP_ParentBuild_C::PlacementCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.PlacementCheck");
		
		ABP_ParentBuild_C_PlacementCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ParentBuild_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.ReceiveBeginPlay");
		
		ABP_ParentBuild_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.AttachPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentHook_C*                            Hook                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentBuild_C::AttachPart(class ABP_ParentHook_C* Hook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.AttachPart");
		
		ABP_ParentBuild_C_AttachPart_Params params {};
		params.Hook = Hook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.RemovePart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentHook_C*                            Hook                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentBuild_C::RemovePart(class ABP_ParentHook_C* Hook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.RemovePart");
		
		ABP_ParentBuild_C_RemovePart_Params params {};
		params.Hook = Hook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.CancelPlacement
	 * 		Flags  -> ()
	 */
	void ABP_ParentBuild_C::CancelPlacement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.CancelPlacement");
		
		ABP_ParentBuild_C_CancelPlacement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuild.BP_ParentBuild_C.ExecuteUbergraph_BP_ParentBuild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentBuild_C::ExecuteUbergraph_BP_ParentBuild(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuild.BP_ParentBuild_C.ExecuteUbergraph_BP_ParentBuild");
		
		ABP_ParentBuild_C_ExecuteUbergraph_BP_ParentBuild_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ParentBuild_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentBuild_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentBuild.BP_ParentBuild_C");
		return ptr;
	}

}


