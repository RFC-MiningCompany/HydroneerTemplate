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
	 * 		Name   -> Function BP_ParentPipe.BP_ParentPipe_C.Pressure Check
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentPipe_C*                            Pipe                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PressureToPass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             WaterOut                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentPipe_C::Pressure_Check(class ABP_ParentPipe_C* Pipe, float PressureToPass, class USceneComponent* WaterOut)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentPipe.BP_ParentPipe_C.Pressure Check");
		
		struct
		{
			class ABP_ParentPipe_C*                            Pipe;
			float                                              PressureToPass;
			class USceneComponent*                             WaterOut;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentPipe.BP_ParentPipe_C.AttachmentFunctionalityCheck");
		
		struct
		{
			class USceneComponent*                             Component;
			bool                                               CanPass_;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentPipe.BP_ParentPipe_C.OverrideWaterIn");
		
		struct
		{
			class USceneComponent*                             Component;
			float                                              RootPressure;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentPipe.BP_ParentPipe_C.SpawnWater");
		
		struct
		{
			struct FVector                                     SpawnLocation;
			struct FRotator                                    SpawnRotation;
		} params;
		params.SpawnLocation = SpawnLocation;
		params.SpawnRotation = SpawnRotation;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentPipe.BP_ParentPipe_C.StackOverflowPrevention");
		
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
	 * 		Name   -> Function BP_ParentPipe.BP_ParentPipe_C.TimerTillEmpty
	 * 		Flags  -> ()
	 */
	void ABP_ParentPipe_C::TimerTillEmpty()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentPipe.BP_ParentPipe_C.TimerTillEmpty");
		
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
	 * 		Name   -> Function BP_ParentPipe.BP_ParentPipe_C.OverrideEmptyWaterPipe
	 * 		Flags  -> ()
	 */
	void ABP_ParentPipe_C::OverrideEmptyWaterPipe()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentPipe.BP_ParentPipe_C.OverrideEmptyWaterPipe");
		
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
	 * 		Name   -> Function BP_ParentPipe.BP_ParentPipe_C.WaterIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RootPressure                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentPipe_C::WaterIn(class USceneComponent* Component, float RootPressure)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentPipe.BP_ParentPipe_C.WaterIn");
		
		struct
		{
			class USceneComponent*                             Component;
			float                                              RootPressure;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentPipe.BP_ParentPipe_C.CastWaterOut");
		
		struct
		{
			class USceneComponent*                             OutComponent;
			int32_t                                            Quality;
			float                                              Pressure;
			float                                              RootPressure;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentPipe.BP_ParentPipe_C.ExecuteUbergraph_BP_ParentPipe");
		
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
	 * 		Name   -> PredefindFunction ABP_ParentPipe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentPipe_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentPipe.BP_ParentPipe_C");
		return ptr;
	}

}


