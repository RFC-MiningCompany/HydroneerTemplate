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
	 * 		Name   -> Function BP_Crucible.BP_Crucible_C.LMBDownWhileCarrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ConsumeInput_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Crucible_C::LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, const struct FVector& HitLocation, bool* ConsumeInput_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crucible.BP_Crucible_C.LMBDownWhileCarrying");
		
		struct
		{
			class ABP_GameController_C*                        Controller;
			class AActor*                                      HitActor;
			struct FVector                                     HitLocation;
			bool                                               ConsumeInput_;
		} params;
		params.Controller = Controller;
		params.HitActor = HitActor;
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConsumeInput_ != nullptr)
			*ConsumeInput_ = params.ConsumeInput_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Crucible.BP_Crucible_C.LoopResourcesForTargets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Ore                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Bar                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ABP_ParentResource_C*>                Items                                                      (Parm, OutParm)
	 */
	void ABP_Crucible_C::LoopResourcesForTargets(class UClass* Ore, class UClass* Bar, TArray<class ABP_ParentResource_C*>* Items)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crucible.BP_Crucible_C.LoopResourcesForTargets");
		
		struct
		{
			class UClass*                                      Ore;
			class UClass*                                      Bar;
			TArray<class ABP_ParentResource_C*>                Items;
		} params;
		params.Ore = Ore;
		params.Bar = Bar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Crucible.BP_Crucible_C.FindTestClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MetalType                                        CurrentMoltenType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ABP_ParentResource_C*>                Class                                                      (Parm, OutParm)
	 * 		int32_t                                            BarOut                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Crucible_C::FindTestClass(E_MetalType CurrentMoltenType, TArray<class ABP_ParentResource_C*>* Class, int32_t* BarOut)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crucible.BP_Crucible_C.FindTestClass");
		
		struct
		{
			E_MetalType                                        CurrentMoltenType;
			TArray<class ABP_ParentResource_C*>                Class;
			int32_t                                            BarOut;
		} params;
		params.CurrentMoltenType = CurrentMoltenType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Class != nullptr)
			*Class = params.Class;
		if (BarOut != nullptr)
			*BarOut = params.BarOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Crucible.BP_Crucible_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Crucible_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crucible.BP_Crucible_C.UserConstructionScript");
		
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
	 * 		Name   -> Function BP_Crucible.BP_Crucible_C.StoredItemPickedUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            ItemPickedUp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Crucible_C::StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crucible.BP_Crucible_C.StoredItemPickedUp");
		
		struct
		{
			class ABP_ParentItem_C*                            ItemPickedUp;
		} params;
		params.ItemPickedUp = ItemPickedUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Crucible.BP_Crucible_C.WaterParticleHit
	 * 		Flags  -> ()
	 */
	void ABP_Crucible_C::WaterParticleHit()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crucible.BP_Crucible_C.WaterParticleHit");
		
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
	 * 		Name   -> Function BP_Crucible.BP_Crucible_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Crucible_C::BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crucible.BP_Crucible_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		struct
		{
			class UPrimitiveComponent*                         OverlappedComponent;
			class AActor*                                      OtherActor;
			class UPrimitiveComponent*                         OtherComp;
			int32_t                                            OtherBodyIndex;
			bool                                               bFromSweep;
			struct FHitResult                                  SweepResult;
		} params;
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Crucible.BP_Crucible_C.SpawnBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Mould_C*                                 Mould                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Crucible_C::SpawnBar(class ABP_Mould_C* Mould)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crucible.BP_Crucible_C.SpawnBar");
		
		struct
		{
			class ABP_Mould_C*                                 Mould;
		} params;
		params.Mould = Mould;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Crucible.BP_Crucible_C.PlayPourAnim
	 * 		Flags  -> ()
	 */
	void ABP_Crucible_C::PlayPourAnim()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crucible.BP_Crucible_C.PlayPourAnim");
		
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
	 * 		Name   -> Function BP_Crucible.BP_Crucible_C.OverrideLoaded
	 * 		Flags  -> ()
	 */
	void ABP_Crucible_C::OverrideLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crucible.BP_Crucible_C.OverrideLoaded");
		
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
	 * 		Name   -> Function BP_Crucible.BP_Crucible_C.UpdateVisuals
	 * 		Flags  -> ()
	 */
	void ABP_Crucible_C::UpdateVisuals()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crucible.BP_Crucible_C.UpdateVisuals");
		
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
	 * 		Name   -> Function BP_Crucible.BP_Crucible_C.HeatUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Heat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Crucible_C::HeatUpdated(float Heat)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crucible.BP_Crucible_C.HeatUpdated");
		
		struct
		{
			float                                              Heat;
		} params;
		params.Heat = Heat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Crucible.BP_Crucible_C.FullHeat
	 * 		Flags  -> ()
	 */
	void ABP_Crucible_C::FullHeat()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crucible.BP_Crucible_C.FullHeat");
		
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
	 * 		Name   -> Function BP_Crucible.BP_Crucible_C.InFire
	 * 		Flags  -> ()
	 */
	void ABP_Crucible_C::InFire()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crucible.BP_Crucible_C.InFire");
		
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
	 * 		Name   -> Function BP_Crucible.BP_Crucible_C.OutOfFire
	 * 		Flags  -> ()
	 */
	void ABP_Crucible_C::OutOfFire()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crucible.BP_Crucible_C.OutOfFire");
		
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
	 * 		Name   -> Function BP_Crucible.BP_Crucible_C.InWater
	 * 		Flags  -> ()
	 */
	void ABP_Crucible_C::InWater()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crucible.BP_Crucible_C.InWater");
		
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
	 * 		Name   -> Function BP_Crucible.BP_Crucible_C.ItemStored
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Crucible_C::ItemStored(class ABP_ParentItem_C* Item)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crucible.BP_Crucible_C.ItemStored");
		
		struct
		{
			class ABP_ParentItem_C*                            Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Crucible.BP_Crucible_C.BndEvt__BP_Crucible_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Crucible_C::BndEvt__BP_Crucible_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crucible.BP_Crucible_C.BndEvt__BP_Crucible_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		struct
		{
			class UPrimitiveComponent*                         OverlappedComponent;
			class AActor*                                      OtherActor;
			class UPrimitiveComponent*                         OtherComp;
			int32_t                                            OtherBodyIndex;
		} params;
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Crucible.BP_Crucible_C.ExecuteUbergraph_BP_Crucible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Crucible_C::ExecuteUbergraph_BP_Crucible(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crucible.BP_Crucible_C.ExecuteUbergraph_BP_Crucible");
		
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
	 * 		Name   -> PredefindFunction ABP_Crucible_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Crucible_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Crucible.BP_Crucible_C");
		return ptr;
	}

}


