/**
 * Name: Hydroneer
<<<<<<<< HEAD:Extras/SDK/SDK/BP_ParentPickaxe_Package.cpp
 * Version: 2.0.2
========
 * Version: 2.0.6
>>>>>>>> origin/development:Extras/SDK/SDK/BP_ParentSeedBag_Package.cpp
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
	 * 		Name   -> Function BP_ParentSeedBag.BP_ParentSeedBag_C.LMBDownWhileCarrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ConsumeInput_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentSeedBag_C::LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, const struct FVector& HitLocation, bool* ConsumeInput_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
<<<<<<<< HEAD:Extras/SDK/SDK/BP_ParentPickaxe_Package.cpp
			fn = UObject::FindObject<UFunction>("Function BP_ParentPickaxe.BP_ParentPickaxe_C.LMBDownWhileCarrying");
========
			fn = UObject::FindObject<UFunction>("Function BP_ParentSeedBag.BP_ParentSeedBag_C.LMBDownWhileCarrying");
>>>>>>>> origin/development:Extras/SDK/SDK/BP_ParentSeedBag_Package.cpp
		
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
	 * 		Name   -> Function BP_ParentSeedBag.BP_ParentSeedBag_C.TraceTimer
	 * 		Flags  -> ()
	 */
	void ABP_ParentSeedBag_C::TraceTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
<<<<<<<< HEAD:Extras/SDK/SDK/BP_ParentPickaxe_Package.cpp
			fn = UObject::FindObject<UFunction>("Function BP_ParentPickaxe.BP_ParentPickaxe_C.Animate");
========
			fn = UObject::FindObject<UFunction>("Function BP_ParentSeedBag.BP_ParentSeedBag_C.TraceTimer");
>>>>>>>> origin/development:Extras/SDK/SDK/BP_ParentSeedBag_Package.cpp
		
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
	 * 		Name   -> Function BP_ParentSeedBag.BP_ParentSeedBag_C.OverrideDroppedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentSeedBag_C::OverrideDroppedItem(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentSeedBag.BP_ParentSeedBag_C.OverrideDroppedItem");
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentSeedBag.BP_ParentSeedBag_C.LMBUpWhileCarrying
	 * 		Flags  -> ()
	 */
	void ABP_ParentSeedBag_C::LMBUpWhileCarrying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentSeedBag.BP_ParentSeedBag_C.LMBUpWhileCarrying");
		
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
	 * 		Name   -> Function BP_ParentSeedBag.BP_ParentSeedBag_C.ExecuteUbergraph_BP_ParentSeedBag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentSeedBag_C::ExecuteUbergraph_BP_ParentSeedBag(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
<<<<<<<< HEAD:Extras/SDK/SDK/BP_ParentPickaxe_Package.cpp
			fn = UObject::FindObject<UFunction>("Function BP_ParentPickaxe.BP_ParentPickaxe_C.ExecuteUbergraph_BP_ParentPickaxe");
========
			fn = UObject::FindObject<UFunction>("Function BP_ParentSeedBag.BP_ParentSeedBag_C.ExecuteUbergraph_BP_ParentSeedBag");
>>>>>>>> origin/development:Extras/SDK/SDK/BP_ParentSeedBag_Package.cpp
		
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
	 * 		Name   -> PredefindFunction ABP_ParentSeedBag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentSeedBag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
<<<<<<<< HEAD:Extras/SDK/SDK/BP_ParentPickaxe_Package.cpp
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentPickaxe.BP_ParentPickaxe_C");
========
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentSeedBag.BP_ParentSeedBag_C");
>>>>>>>> origin/development:Extras/SDK/SDK/BP_ParentSeedBag_Package.cpp
		return ptr;
	}

}


