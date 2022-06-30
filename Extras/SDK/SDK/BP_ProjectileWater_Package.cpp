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
	 * 		Name   -> Function BP_ProjectileWater.BP_ProjectileWater_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_ProjectileWater_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProjectileWater.BP_ProjectileWater_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
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
	 * 		Name   -> Function BP_ProjectileWater.BP_ProjectileWater_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ProjectileWater_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProjectileWater.BP_ProjectileWater_C.ReceiveBeginPlay");
		
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
	 * 		Name   -> Function BP_ProjectileWater.BP_ProjectileWater_C.ExecuteUbergraph_BP_ProjectileWater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProjectileWater_C::ExecuteUbergraph_BP_ProjectileWater(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProjectileWater.BP_ProjectileWater_C.ExecuteUbergraph_BP_ProjectileWater");
		
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
	 * 		Name   -> PredefindFunction ABP_ProjectileWater_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ProjectileWater_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileWater.BP_ProjectileWater_C");
		return ptr;
	}

}


