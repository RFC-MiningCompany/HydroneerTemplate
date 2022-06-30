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
	 * 		Name   -> Function BP_ThrownTNT.BP_ThrownTNT_C.LMBDownWhileCarrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ConsumeInput_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ThrownTNT_C::LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, const struct FVector& HitLocation, bool* ConsumeInput_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ThrownTNT.BP_ThrownTNT_C.LMBDownWhileCarrying");
		
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
	 * 		Name   -> Function BP_ThrownTNT.BP_ThrownTNT_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ThrownTNT_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ThrownTNT.BP_ThrownTNT_C.UserConstructionScript");
		
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
	 * 		Name   -> Function BP_ThrownTNT.BP_ThrownTNT_C.Explode Timer
	 * 		Flags  -> ()
	 */
	void ABP_ThrownTNT_C::Explode_Timer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ThrownTNT.BP_ThrownTNT_C.Explode Timer");
		
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
	 * 		Name   -> Function BP_ThrownTNT.BP_ThrownTNT_C.Throw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ThrownTNT_C::Throw(class ABP_GameController_C* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ThrownTNT.BP_ThrownTNT_C.Throw");
		
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
	 * 		Name   -> Function BP_ThrownTNT.BP_ThrownTNT_C.ExecuteUbergraph_BP_ThrownTNT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ThrownTNT_C::ExecuteUbergraph_BP_ThrownTNT(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ThrownTNT.BP_ThrownTNT_C.ExecuteUbergraph_BP_ThrownTNT");
		
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
	 * 		Name   -> PredefindFunction ABP_ThrownTNT_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ThrownTNT_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ThrownTNT.BP_ThrownTNT_C");
		return ptr;
	}

}


