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
	 * 		Name   -> Function BP_ParentPickaxe.BP_ParentPickaxe_C.LMBDownWhileCarrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ConsumeInput_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentPickaxe_C::LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, const struct FVector& HitLocation, bool* ConsumeInput_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentPickaxe.BP_ParentPickaxe_C.LMBDownWhileCarrying");
		
		ABP_ParentPickaxe_C_LMBDownWhileCarrying_Params params {};
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
	 * 		Name   -> Function BP_ParentPickaxe.BP_ParentPickaxe_C.Animate
	 * 		Flags  -> ()
	 */
	void ABP_ParentPickaxe_C::Animate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentPickaxe.BP_ParentPickaxe_C.Animate");
		
		ABP_ParentPickaxe_C_Animate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentPickaxe.BP_ParentPickaxe_C.ExecuteUbergraph_BP_ParentPickaxe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentPickaxe_C::ExecuteUbergraph_BP_ParentPickaxe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentPickaxe.BP_ParentPickaxe_C.ExecuteUbergraph_BP_ParentPickaxe");
		
		ABP_ParentPickaxe_C_ExecuteUbergraph_BP_ParentPickaxe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ParentPickaxe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentPickaxe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentPickaxe.BP_ParentPickaxe_C");
		return ptr;
	}

}


