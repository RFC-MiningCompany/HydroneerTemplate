/**
 * Name: Hydroneer
 * Version: 2.0N
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
	 * 		Name   -> Function BP_Lantern.BP_Lantern_C.LMBDownWhileCarrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ConsumeInput_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Lantern_C::LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, const struct FVector& HitLocation, bool* ConsumeInput_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.LMBDownWhileCarrying"));
		
		ABP_Lantern_C_LMBDownWhileCarrying_Params params {};
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
	 * 		Name   -> Function BP_Lantern.BP_Lantern_C.CreateProxyItem
	 * 		Flags  -> ()
	 */
	void ABP_Lantern_C::CreateProxyItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.CreateProxyItem"));
		
		ABP_Lantern_C_CreateProxyItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lantern.BP_Lantern_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Lantern_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.UserConstructionScript"));
		
		ABP_Lantern_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lantern.BP_Lantern_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Lantern_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.Timeline_1__FinishedFunc"));
		
		ABP_Lantern_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lantern.BP_Lantern_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Lantern_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.Timeline_1__UpdateFunc"));
		
		ABP_Lantern_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lantern.BP_Lantern_C.WaterParticleHit
	 * 		Flags  -> ()
	 */
	void ABP_Lantern_C::WaterParticleHit()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.WaterParticleHit"));
		
		ABP_Lantern_C_WaterParticleHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lantern.BP_Lantern_C.OverrideLoaded
	 * 		Flags  -> ()
	 */
	void ABP_Lantern_C::OverrideLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.OverrideLoaded"));
		
		ABP_Lantern_C_OverrideLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lantern.BP_Lantern_C.InWater
	 * 		Flags  -> ()
	 */
	void ABP_Lantern_C::InWater()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.InWater"));
		
		ABP_Lantern_C_InWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lantern.BP_Lantern_C.ToggleLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Lantern_C::ToggleLight(bool TurnOn_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.ToggleLight"));
		
		ABP_Lantern_C_ToggleLight_Params params {};
		params.TurnOn_ = TurnOn_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lantern.BP_Lantern_C.ExecuteUbergraph_BP_Lantern
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Lantern_C::ExecuteUbergraph_BP_Lantern(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.ExecuteUbergraph_BP_Lantern"));
		
		ABP_Lantern_C_ExecuteUbergraph_BP_Lantern_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Lantern_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Lantern_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Lantern.BP_Lantern_C"));
		return ptr;
	}

}


