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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.LMBDownWhileCarrying");
		
		ABP_Rake_C_LMBDownWhileCarrying_Params params {};
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
	 * 		Name   -> Function BP_Rake.BP_Rake_C.TestIfCanUse
	 * 		Flags  -> ()
	 */
	void ABP_Rake_C::TestIfCanUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.TestIfCanUse");
		
		ABP_Rake_C_TestIfCanUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.Box Tracing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FHitResult>                          OutHits                                                    (Parm, OutParm, ContainsInstancedReference)
	 * 		int32_t                                            Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Rake_C::Box_Tracing(TArray<struct FHitResult>* OutHits, int32_t* Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.Box Tracing");
		
		ABP_Rake_C_Box_Tracing_Params params {};
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.OverridePickedup
	 * 		Flags  -> ()
	 */
	void ABP_Rake_C::OverridePickedup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.OverridePickedup");
		
		ABP_Rake_C_OverridePickedup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.OverrideDroppedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Rake_C::OverrideDroppedItem(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.OverrideDroppedItem");
		
		ABP_Rake_C_OverrideDroppedItem_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.LocationTimer
	 * 		Flags  -> ()
	 */
	void ABP_Rake_C::LocationTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.LocationTimer");
		
		ABP_Rake_C_LocationTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.OverrideAnimFinished
	 * 		Flags  -> ()
	 */
	void ABP_Rake_C::OverrideAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.OverrideAnimFinished");
		
		ABP_Rake_C_OverrideAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.ExecuteUbergraph_BP_Rake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Rake_C::ExecuteUbergraph_BP_Rake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.ExecuteUbergraph_BP_Rake");
		
		ABP_Rake_C_ExecuteUbergraph_BP_Rake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Rake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Rake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Rake.BP_Rake_C");
		return ptr;
	}

}


