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
	 * 		Name   -> Function BP_ParentPipe.BP_ParentPipe_C.Pressure Check
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentPipe_C*                            Pipe                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PressureToPass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             WaterOut                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentPipe_C::Pressure_Check(class ABP_ParentPipe_C* Pipe, float PressureToPass, class USceneComponent* WaterOut)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPipe.BP_ParentPipe_C.Pressure Check"));
		
		ABP_ParentPipe_C_Pressure_Check_Params params {};
		params.Pipe = Pipe;
		params.PressureToPass = PressureToPass;
		params.WaterOut = WaterOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentPipe.BP_ParentPipe_C.AttachmentFunctionalityCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanPass_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentPipe_C::AttachmentFunctionalityCheck(class USceneComponent* Component, bool* CanPass_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPipe.BP_ParentPipe_C.AttachmentFunctionalityCheck"));
		
		ABP_ParentPipe_C_AttachmentFunctionalityCheck_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanPass_ != nullptr)
			*CanPass_ = params.CanPass_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentPipe.BP_ParentPipe_C.OverrideWaterIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RootPressure                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentPipe_C::OverrideWaterIn(class USceneComponent* Component, float RootPressure)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPipe.BP_ParentPipe_C.OverrideWaterIn"));
		
		ABP_ParentPipe_C_OverrideWaterIn_Params params {};
		params.Component = Component;
		params.RootPressure = RootPressure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentPipe.BP_ParentPipe_C.SpawnWater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     SpawnLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    SpawnRotation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentPipe_C::SpawnWater(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPipe.BP_ParentPipe_C.SpawnWater"));
		
		ABP_ParentPipe_C_SpawnWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentPipe.BP_ParentPipe_C.StackOverflowPrevention
	 * 		Flags  -> ()
	 */
	void ABP_ParentPipe_C::StackOverflowPrevention()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPipe.BP_ParentPipe_C.StackOverflowPrevention"));
		
		ABP_ParentPipe_C_StackOverflowPrevention_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentPipe.BP_ParentPipe_C.TimerTillEmpty
	 * 		Flags  -> ()
	 */
	void ABP_ParentPipe_C::TimerTillEmpty()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPipe.BP_ParentPipe_C.TimerTillEmpty"));
		
		ABP_ParentPipe_C_TimerTillEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentPipe.BP_ParentPipe_C.OverrideEmptyWaterPipe
	 * 		Flags  -> ()
	 */
	void ABP_ParentPipe_C::OverrideEmptyWaterPipe()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPipe.BP_ParentPipe_C.OverrideEmptyWaterPipe"));
		
		ABP_ParentPipe_C_OverrideEmptyWaterPipe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentPipe.BP_ParentPipe_C.WaterIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RootPressure                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentPipe_C::WaterIn(class USceneComponent* Component, float RootPressure)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPipe.BP_ParentPipe_C.WaterIn"));
		
		ABP_ParentPipe_C_WaterIn_Params params {};
		params.Component = Component;
		params.RootPressure = RootPressure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentPipe.BP_ParentPipe_C.CastWaterOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             OutComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Quality                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Pressure                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RootPressure                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentPipe_C::CastWaterOut(class USceneComponent* OutComponent, int32_t Quality, float Pressure, float RootPressure)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPipe.BP_ParentPipe_C.CastWaterOut"));
		
		ABP_ParentPipe_C_CastWaterOut_Params params {};
		params.OutComponent = OutComponent;
		params.Quality = Quality;
		params.Pressure = Pressure;
		params.RootPressure = RootPressure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentPipe.BP_ParentPipe_C.ExecuteUbergraph_BP_ParentPipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentPipe_C::ExecuteUbergraph_BP_ParentPipe(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPipe.BP_ParentPipe_C.ExecuteUbergraph_BP_ParentPipe"));
		
		ABP_ParentPipe_C_ExecuteUbergraph_BP_ParentPipe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ParentPipe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentPipe_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ParentPipe.BP_ParentPipe_C"));
		return ptr;
	}

}


