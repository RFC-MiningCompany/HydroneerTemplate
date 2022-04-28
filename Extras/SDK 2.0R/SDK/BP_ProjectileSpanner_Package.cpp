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
	 * 		Name   -> Function BP_ProjectileSpanner.BP_ProjectileSpanner_C.TryRepair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            RepairingTool                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProjectileSpanner_C::TryRepair(class ABP_ParentItem_C* RepairingTool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileSpanner.BP_ProjectileSpanner_C.TryRepair");
		
		ABP_ProjectileSpanner_C_TryRepair_Params params {};
		params.RepairingTool = RepairingTool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileSpanner.BP_ProjectileSpanner_C.DoneRepair
	 * 		Flags  -> ()
	 */
	void ABP_ProjectileSpanner_C::DoneRepair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileSpanner.BP_ProjectileSpanner_C.DoneRepair");
		
		ABP_ProjectileSpanner_C_DoneRepair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileSpanner.BP_ProjectileSpanner_C.FindDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProjectileSpanner_C::FindDurability(class ABP_ParentItem_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileSpanner.BP_ProjectileSpanner_C.FindDurability");
		
		ABP_ProjectileSpanner_C_FindDurability_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileSpanner.BP_ProjectileSpanner_C.ReturnDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DurabilityAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProjectileSpanner_C::ReturnDurability(float DurabilityAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileSpanner.BP_ProjectileSpanner_C.ReturnDurability");
		
		ABP_ProjectileSpanner_C_ReturnDurability_Params params {};
		params.DurabilityAmount = DurabilityAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileSpanner.BP_ProjectileSpanner_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_ProjectileSpanner_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileSpanner.BP_ProjectileSpanner_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		ABP_ProjectileSpanner_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_ProjectileSpanner.BP_ProjectileSpanner_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ProjectileSpanner_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileSpanner.BP_ProjectileSpanner_C.ReceiveBeginPlay");
		
		ABP_ProjectileSpanner_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileSpanner.BP_ProjectileSpanner_C.ExecuteUbergraph_BP_ProjectileSpanner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProjectileSpanner_C::ExecuteUbergraph_BP_ProjectileSpanner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileSpanner.BP_ProjectileSpanner_C.ExecuteUbergraph_BP_ProjectileSpanner");
		
		ABP_ProjectileSpanner_C_ExecuteUbergraph_BP_ProjectileSpanner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ProjectileSpanner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ProjectileSpanner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileSpanner.BP_ProjectileSpanner_C");
		return ptr;
	}

}


