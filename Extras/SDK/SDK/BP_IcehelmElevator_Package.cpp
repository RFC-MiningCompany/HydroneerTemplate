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
	 * 		Name   -> Function BP_IcehelmElevator.BP_IcehelmElevator_C.SetCableLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Lerp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IcehelmElevator_C::SetCableLength(float Lerp)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_IcehelmElevator.BP_IcehelmElevator_C.SetCableLength");
		
		struct
		{
			float                                              Lerp;
		} params;
		params.Lerp = Lerp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IcehelmElevator.BP_IcehelmElevator_C.Movement__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_IcehelmElevator_C::Movement__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_IcehelmElevator.BP_IcehelmElevator_C.Movement__FinishedFunc");
		
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
	 * 		Name   -> Function BP_IcehelmElevator.BP_IcehelmElevator_C.Movement__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_IcehelmElevator_C::Movement__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_IcehelmElevator.BP_IcehelmElevator_C.Movement__UpdateFunc");
		
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
	 * 		Name   -> Function BP_IcehelmElevator.BP_IcehelmElevator_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_IcehelmElevator_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_IcehelmElevator.BP_IcehelmElevator_C.ReceiveBeginPlay");
		
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
	 * 		Name   -> Function BP_IcehelmElevator.BP_IcehelmElevator_C.MovePlatform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_IcehelmElevator_C::MovePlatform(bool Direction)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_IcehelmElevator.BP_IcehelmElevator_C.MovePlatform");
		
		struct
		{
			bool                                               Direction;
		} params;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IcehelmElevator.BP_IcehelmElevator_C.ExecuteUbergraph_BP_IcehelmElevator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IcehelmElevator_C::ExecuteUbergraph_BP_IcehelmElevator(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_IcehelmElevator.BP_IcehelmElevator_C.ExecuteUbergraph_BP_IcehelmElevator");
		
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
	 * 		Name   -> PredefindFunction ABP_IcehelmElevator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_IcehelmElevator_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_IcehelmElevator.BP_IcehelmElevator_C");
		return ptr;
	}

}


