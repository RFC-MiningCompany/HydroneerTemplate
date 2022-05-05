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
	 * 		Name   -> Function BP_RelicSpawner.BP_RelicSpawner_C.ComponentsToSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     Components                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_RelicSpawner_C::ComponentsToSave(TArray<class UActorComponent*>* Components)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RelicSpawner.BP_RelicSpawner_C.ComponentsToSave");
		
		struct
		{
			TArray<class UActorComponent*>                     Components;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Components != nullptr)
			*Components = params.Components;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RelicSpawner.BP_RelicSpawner_C.ActorPreSave
	 * 		Flags  -> ()
	 */
	void ABP_RelicSpawner_C::ActorPreSave()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RelicSpawner.BP_RelicSpawner_C.ActorPreSave");
		
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
	 * 		Name   -> Function BP_RelicSpawner.BP_RelicSpawner_C.ActorSaved
	 * 		Flags  -> ()
	 */
	void ABP_RelicSpawner_C::ActorSaved()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RelicSpawner.BP_RelicSpawner_C.ActorSaved");
		
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
	 * 		Name   -> Function BP_RelicSpawner.BP_RelicSpawner_C.SpawnRelic
	 * 		Flags  -> ()
	 */
	void ABP_RelicSpawner_C::SpawnRelic()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RelicSpawner.BP_RelicSpawner_C.SpawnRelic");
		
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
	 * 		Name   -> Function BP_RelicSpawner.BP_RelicSpawner_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_RelicSpawner_C::ActorLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RelicSpawner.BP_RelicSpawner_C.ActorLoaded");
		
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
	 * 		Name   -> Function BP_RelicSpawner.BP_RelicSpawner_C.ExecuteUbergraph_BP_RelicSpawner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RelicSpawner_C::ExecuteUbergraph_BP_RelicSpawner(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RelicSpawner.BP_RelicSpawner_C.ExecuteUbergraph_BP_RelicSpawner");
		
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
	 * 		Name   -> PredefindFunction ABP_RelicSpawner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RelicSpawner_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_RelicSpawner.BP_RelicSpawner_C");
		return ptr;
	}

}


