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
	 * 		Name   -> Function BP_ConstructionHammer.BP_ConstructionHammer_C.ConstructItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentBuild_C*                           Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConstructionHammer_C::ConstructItem(class ABP_ParentBuild_C* Item, class ABP_GameController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConstructionHammer.BP_ConstructionHammer_C.ConstructItem");
		
		struct
		{
			class ABP_ParentBuild_C*                           Item;
			class ABP_GameController_C*                        Controller;
		} params;
		params.Item = Item;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ConstructionHammer.BP_ConstructionHammer_C.SwingTimer
	 * 		Flags  -> ()
	 */
	void ABP_ConstructionHammer_C::SwingTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConstructionHammer.BP_ConstructionHammer_C.SwingTimer");
		
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
	 * 		Name   -> Function BP_ConstructionHammer.BP_ConstructionHammer_C.LMBDownWhileCarrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ConsumeInput_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ConstructionHammer_C::LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, const struct FVector& HitLocation, bool* ConsumeInput_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConstructionHammer.BP_ConstructionHammer_C.LMBDownWhileCarrying");
		
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
	 * 		Name   -> Function BP_ConstructionHammer.BP_ConstructionHammer_C.LMBUpWhileCarrying
	 * 		Flags  -> ()
	 */
	void ABP_ConstructionHammer_C::LMBUpWhileCarrying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConstructionHammer.BP_ConstructionHammer_C.LMBUpWhileCarrying");
		
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
	 * 		Name   -> Function BP_ConstructionHammer.BP_ConstructionHammer_C.ExecuteUbergraph_BP_ConstructionHammer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ConstructionHammer_C::ExecuteUbergraph_BP_ConstructionHammer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ConstructionHammer.BP_ConstructionHammer_C.ExecuteUbergraph_BP_ConstructionHammer");
		
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
	 * 		Name   -> PredefindFunction ABP_ConstructionHammer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ConstructionHammer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ConstructionHammer.BP_ConstructionHammer_C");
		return ptr;
	}

}


