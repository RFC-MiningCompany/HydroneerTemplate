/**
 * Name: Hydroneer
 * Version: 2.0.6
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
	 * 		Name   -> Function BP_ParentCutVeg.BP_ParentCutVeg_C.InWater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WaterBody_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentCutVeg_C::InWater(bool WaterBody_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCutVeg.BP_ParentCutVeg_C.InWater");
		
		struct
		{
			bool                                               WaterBody_;
		} params;
		params.WaterBody_ = WaterBody_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentCutVeg.BP_ParentCutVeg_C.WaterParticleHit
	 * 		Flags  -> ()
	 */
	void ABP_ParentCutVeg_C::WaterParticleHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCutVeg.BP_ParentCutVeg_C.WaterParticleHit");
		
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
	 * 		Name   -> Function BP_ParentCutVeg.BP_ParentCutVeg_C.HeatUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Heat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentCutVeg_C::HeatUpdated(float Heat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCutVeg.BP_ParentCutVeg_C.HeatUpdated");
		
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
	 * 		Name   -> Function BP_ParentCutVeg.BP_ParentCutVeg_C.FullHeat
	 * 		Flags  -> ()
	 */
	void ABP_ParentCutVeg_C::FullHeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCutVeg.BP_ParentCutVeg_C.FullHeat");
		
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
	 * 		Name   -> Function BP_ParentCutVeg.BP_ParentCutVeg_C.InFire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SlowBurn_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentCutVeg_C::InFire(bool SlowBurn_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCutVeg.BP_ParentCutVeg_C.InFire");
		
		struct
		{
			bool                                               SlowBurn_;
		} params;
		params.SlowBurn_ = SlowBurn_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentCutVeg.BP_ParentCutVeg_C.OutOfFire
	 * 		Flags  -> ()
	 */
	void ABP_ParentCutVeg_C::OutOfFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCutVeg.BP_ParentCutVeg_C.OutOfFire");
		
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
	 * 		Name   -> Function BP_ParentCutVeg.BP_ParentCutVeg_C.ReceiveHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MyComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Other                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelfMoved                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitNormal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_ParentCutVeg_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCutVeg.BP_ParentCutVeg_C.ReceiveHit");
		
		struct
		{
			class UPrimitiveComponent*                         MyComp;
			class AActor*                                      Other;
			class UPrimitiveComponent*                         OtherComp;
			bool                                               bSelfMoved;
			struct FVector                                     HitLocation;
			struct FVector                                     HitNormal;
			struct FVector                                     NormalImpulse;
			struct FHitResult                                  Hit;
		} params;
		params.MyComp = MyComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.bSelfMoved = bSelfMoved;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentCutVeg.BP_ParentCutVeg_C.ExecuteUbergraph_BP_ParentCutVeg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentCutVeg_C::ExecuteUbergraph_BP_ParentCutVeg(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCutVeg.BP_ParentCutVeg_C.ExecuteUbergraph_BP_ParentCutVeg");
		
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
	 * 		Name   -> PredefindFunction ABP_ParentCutVeg_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentCutVeg_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentCutVeg.BP_ParentCutVeg_C");
		return ptr;
	}

}


