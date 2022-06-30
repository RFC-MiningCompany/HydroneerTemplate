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
	 * 		Name   -> Function BP_ParentLogic.BP_ParentLogic_C.AttachmentFunctionalityCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanPass_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentLogic_C::AttachmentFunctionalityCheck(class USceneComponent* Component, bool* CanPass_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentLogic.BP_ParentLogic_C.AttachmentFunctionalityCheck");
		
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
	 * 		Name   -> Function BP_ParentLogic.BP_ParentLogic_C.CastLogicOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             OutComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Logic                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_ParentLogic_C::CastLogicOut(class USceneComponent* OutComponent, const class FString& Logic)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentLogic.BP_ParentLogic_C.CastLogicOut");
		
		struct
		{
			class USceneComponent*                             OutComponent;
			class FString                                      Logic;
		} params;
		params.OutComponent = OutComponent;
		params.Logic = Logic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentLogic.BP_ParentLogic_C.OverrideLogicIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentLogic_C::OverrideLogicIn(class USceneComponent* Component)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentLogic.BP_ParentLogic_C.OverrideLogicIn");
		
		struct
		{
			class USceneComponent*                             Component;
		} params;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentLogic.BP_ParentLogic_C.SpawnLogic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     SpawnLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    SpawnRotation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentLogic_C::SpawnLogic(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentLogic.BP_ParentLogic_C.SpawnLogic");
		
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
	 * 		Name   -> Function BP_ParentLogic.BP_ParentLogic_C.StackOverflowPrevention
	 * 		Flags  -> ()
	 */
	void ABP_ParentLogic_C::StackOverflowPrevention()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentLogic.BP_ParentLogic_C.StackOverflowPrevention");
		
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
	 * 		Name   -> Function BP_ParentLogic.BP_ParentLogic_C.LogicIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Logic                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_ParentLogic_C::LogicIn(class USceneComponent* Component, const class FString& Logic)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentLogic.BP_ParentLogic_C.LogicIn");
		
		struct
		{
			class USceneComponent*                             Component;
			class FString                                      Logic;
		} params;
		params.Component = Component;
		params.Logic = Logic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentLogic.BP_ParentLogic_C.OverrideWaterIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Quality                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Pressure                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentLogic_C::OverrideWaterIn(class USceneComponent* Component, int32_t Quality, float Pressure)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentLogic.BP_ParentLogic_C.OverrideWaterIn");
		
		struct
		{
			class USceneComponent*                             Component;
			int32_t                                            Quality;
			float                                              Pressure;
		} params;
		params.Component = Component;
		params.Quality = Quality;
		params.Pressure = Pressure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentLogic.BP_ParentLogic_C.ExecuteUbergraph_BP_ParentLogic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentLogic_C::ExecuteUbergraph_BP_ParentLogic(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentLogic.BP_ParentLogic_C.ExecuteUbergraph_BP_ParentLogic");
		
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
	 * 		Name   -> PredefindFunction ABP_ParentLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentLogic_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentLogic.BP_ParentLogic_C");
		return ptr;
	}

}


