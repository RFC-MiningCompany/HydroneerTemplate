﻿/**
 * Name: Hydroneer
 * Version: 2.0F
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.LMBDownWhileCarrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ConsumeInput_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Rake_C::LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, const struct FVector& HitLocation, bool* ConsumeInput_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Rake.BP_Rake_C.LMBDownWhileCarrying"));
		
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.TestIfCanUse
	 * 		Flags  -> ()
	 */
	void ABP_Rake_C::TestIfCanUse()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Rake.BP_Rake_C.TestIfCanUse"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.Box Tracing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FHitResult>                          OutHits                                                    (Parm, OutParm, ContainsInstancedReference)
	 * 		int32_t                                            Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Rake_C::Box_Tracing(TArray<struct FHitResult>* OutHits, int32_t* Direction)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Rake.BP_Rake_C.Box Tracing"));
		
		struct
		{
			TArray<struct FHitResult>                          OutHits;
			int32_t                                            Direction;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHits != nullptr)
			*OutHits = params.OutHits;
		if (Direction != nullptr)
			*Direction = params.Direction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.OverridePickedup
	 * 		Flags  -> ()
	 */
	void ABP_Rake_C::OverridePickedup()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Rake.BP_Rake_C.OverridePickedup"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.OverrideDroppedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Rake_C::OverrideDroppedItem(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Rake.BP_Rake_C.OverrideDroppedItem"));
		
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.LocationTimer
	 * 		Flags  -> ()
	 */
	void ABP_Rake_C::LocationTimer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Rake.BP_Rake_C.LocationTimer"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.OverrideAnimFinished
	 * 		Flags  -> ()
	 */
	void ABP_Rake_C::OverrideAnimFinished()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Rake.BP_Rake_C.OverrideAnimFinished"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.ExecuteUbergraph_BP_Rake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Rake_C::ExecuteUbergraph_BP_Rake(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Rake.BP_Rake_C.ExecuteUbergraph_BP_Rake"));
		
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Rake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Rake_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Rake.BP_Rake_C"));
		return ptr;
	}

}


