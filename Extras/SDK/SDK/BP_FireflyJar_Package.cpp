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
	 * 		Name   -> Function BP_FireflyJar.BP_FireflyJar_C.LMBDownWhileCarrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ConsumeInput_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FireflyJar_C::LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, const struct FVector& HitLocation, bool* ConsumeInput_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireflyJar.BP_FireflyJar_C.LMBDownWhileCarrying");
		
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
	 * 		Name   -> Function BP_FireflyJar.BP_FireflyJar_C.CreateProxyItem
	 * 		Flags  -> ()
	 */
	void ABP_FireflyJar_C::CreateProxyItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireflyJar.BP_FireflyJar_C.CreateProxyItem");
		
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
	 * 		Name   -> Function BP_FireflyJar.BP_FireflyJar_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_FireflyJar_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireflyJar.BP_FireflyJar_C.UserConstructionScript");
		
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
	 * 		Name   -> Function BP_FireflyJar.BP_FireflyJar_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_FireflyJar_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireflyJar.BP_FireflyJar_C.Timeline_1__FinishedFunc");
		
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
	 * 		Name   -> Function BP_FireflyJar.BP_FireflyJar_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_FireflyJar_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireflyJar.BP_FireflyJar_C.Timeline_1__UpdateFunc");
		
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
	 * 		Name   -> Function BP_FireflyJar.BP_FireflyJar_C.InWater
	 * 		Flags  -> ()
	 */
	void ABP_FireflyJar_C::InWater()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireflyJar.BP_FireflyJar_C.InWater");
		
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
	 * 		Name   -> Function BP_FireflyJar.BP_FireflyJar_C.WaterParticleHit
	 * 		Flags  -> ()
	 */
	void ABP_FireflyJar_C::WaterParticleHit()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireflyJar.BP_FireflyJar_C.WaterParticleHit");
		
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
	 * 		Name   -> Function BP_FireflyJar.BP_FireflyJar_C.OverrideLoaded
	 * 		Flags  -> ()
	 */
	void ABP_FireflyJar_C::OverrideLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireflyJar.BP_FireflyJar_C.OverrideLoaded");
		
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
	 * 		Name   -> Function BP_FireflyJar.BP_FireflyJar_C.ToggleLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FireflyJar_C::ToggleLight(bool TurnOn_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireflyJar.BP_FireflyJar_C.ToggleLight");
		
		struct
		{
			bool                                               TurnOn_;
		} params;
		params.TurnOn_ = TurnOn_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FireflyJar.BP_FireflyJar_C.ExecuteUbergraph_BP_FireflyJar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FireflyJar_C::ExecuteUbergraph_BP_FireflyJar(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireflyJar.BP_FireflyJar_C.ExecuteUbergraph_BP_FireflyJar");
		
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
	 * 		Name   -> PredefindFunction ABP_FireflyJar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FireflyJar_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FireflyJar.BP_FireflyJar_C");
		return ptr;
	}

}


