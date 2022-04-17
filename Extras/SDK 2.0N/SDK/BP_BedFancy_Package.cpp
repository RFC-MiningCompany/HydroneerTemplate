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
	 * 		Name   -> Function BP_BedFancy.BP_BedFancy_C.Dummy
	 * 		Flags  -> ()
	 */
	void ABP_BedFancy_C::Dummy()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BedFancy.BP_BedFancy_C.Dummy"));
		
		ABP_BedFancy_C_Dummy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BedFancy.BP_BedFancy_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BedFancy_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BedFancy.BP_BedFancy_C.ReceiveBeginPlay"));
		
		ABP_BedFancy_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BedFancy.BP_BedFancy_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BedFancy_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BedFancy.BP_BedFancy_C.ReceiveActorBeginOverlap"));
		
		ABP_BedFancy_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BedFancy.BP_BedFancy_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BedFancy_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BedFancy.BP_BedFancy_C.ReceiveTick"));
		
		ABP_BedFancy_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BedFancy.BP_BedFancy_C.ExecuteUbergraph_BP_BedFancy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BedFancy_C::ExecuteUbergraph_BP_BedFancy(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_BedFancy.BP_BedFancy_C.ExecuteUbergraph_BP_BedFancy"));
		
		ABP_BedFancy_C_ExecuteUbergraph_BP_BedFancy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_BedFancy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BedFancy_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_BedFancy.BP_BedFancy_C"));
		return ptr;
	}

}


