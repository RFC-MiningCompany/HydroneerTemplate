/**
 * Name: Hydroneer
<<<<<<<< HEAD:Extras/SDK/SDK/BP_Rake_Package.cpp
 * Version: 2.0.2
========
 * Version: 2.0.6
>>>>>>>> origin/development:Extras/SDK/SDK/BP_ParentPickaxe_Package.cpp
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
	 * 		Name   -> Function BP_ParentPickaxe.BP_ParentPickaxe_C.DigTimer
	 * 		Flags  -> ()
	 */
	void ABP_ParentPickaxe_C::DigTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentPickaxe.BP_ParentPickaxe_C.DigTimer");
		
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
	 * 		Name   -> Function BP_ParentPickaxe.BP_ParentPickaxe_C.Dig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentPickaxe_C::Dig(class ABP_GameController_C* Controller, class AActor* HitActor, const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentPickaxe.BP_ParentPickaxe_C.Dig");
		
		struct
		{
			class ABP_GameController_C*                        Controller;
			class AActor*                                      HitActor;
			struct FVector                                     HitLocation;
		} params;
		params.Controller = Controller;
		params.HitActor = HitActor;
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

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
<<<<<<<< HEAD:Extras/SDK/SDK/BP_Rake_Package.cpp
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.LMBDownWhileCarrying");
========
			fn = UObject::FindObject<UFunction>("Function BP_ParentPickaxe.BP_ParentPickaxe_C.LMBDownWhileCarrying");
>>>>>>>> origin/development:Extras/SDK/SDK/BP_ParentPickaxe_Package.cpp
		
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
	 * 		Name   -> Function BP_ParentPickaxe.BP_ParentPickaxe_C.Animate
	 * 		Flags  -> ()
	 */
	void ABP_ParentPickaxe_C::Animate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
<<<<<<<< HEAD:Extras/SDK/SDK/BP_Rake_Package.cpp
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.TestIfCanUse");
========
			fn = UObject::FindObject<UFunction>("Function BP_ParentPickaxe.BP_ParentPickaxe_C.Animate");
>>>>>>>> origin/development:Extras/SDK/SDK/BP_ParentPickaxe_Package.cpp
		
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
<<<<<<<< HEAD:Extras/SDK/SDK/BP_Rake_Package.cpp
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.OverridePickedup
========
	 * 		Name   -> Function BP_ParentPickaxe.BP_ParentPickaxe_C.LMBUpWhileCarrying
>>>>>>>> origin/development:Extras/SDK/SDK/BP_ParentPickaxe_Package.cpp
	 * 		Flags  -> ()
	 */
	void ABP_ParentPickaxe_C::LMBUpWhileCarrying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
<<<<<<<< HEAD:Extras/SDK/SDK/BP_Rake_Package.cpp
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.OverridePickedup");
========
			fn = UObject::FindObject<UFunction>("Function BP_ParentPickaxe.BP_ParentPickaxe_C.LMBUpWhileCarrying");
>>>>>>>> origin/development:Extras/SDK/SDK/BP_ParentPickaxe_Package.cpp
		
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
<<<<<<<< HEAD:Extras/SDK/SDK/BP_Rake_Package.cpp
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
	 * 		Name   -> Function BP_Rake.BP_Rake_C.LocationTimer
	 * 		Flags  -> ()
	 */
	void ABP_Rake_C::LocationTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.LocationTimer");
		
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
	 * 		Name   -> Function BP_Rake.BP_Rake_C.OverrideAnimFinished
	 * 		Flags  -> ()
	 */
	void ABP_Rake_C::OverrideAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.OverrideAnimFinished");
		
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
	 * 		Name   -> Function BP_Rake.BP_Rake_C.ExecuteUbergraph_BP_Rake
========
	 * 		Name   -> Function BP_ParentPickaxe.BP_ParentPickaxe_C.ExecuteUbergraph_BP_ParentPickaxe
>>>>>>>> origin/development:Extras/SDK/SDK/BP_ParentPickaxe_Package.cpp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentPickaxe_C::ExecuteUbergraph_BP_ParentPickaxe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
<<<<<<<< HEAD:Extras/SDK/SDK/BP_Rake_Package.cpp
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.ExecuteUbergraph_BP_Rake");
========
			fn = UObject::FindObject<UFunction>("Function BP_ParentPickaxe.BP_ParentPickaxe_C.ExecuteUbergraph_BP_ParentPickaxe");
>>>>>>>> origin/development:Extras/SDK/SDK/BP_ParentPickaxe_Package.cpp
		
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
	 * 		Name   -> PredefindFunction ABP_ParentPickaxe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentPickaxe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
<<<<<<<< HEAD:Extras/SDK/SDK/BP_Rake_Package.cpp
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Rake.BP_Rake_C");
========
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentPickaxe.BP_ParentPickaxe_C");
>>>>>>>> origin/development:Extras/SDK/SDK/BP_ParentPickaxe_Package.cpp
		return ptr;
	}

}


