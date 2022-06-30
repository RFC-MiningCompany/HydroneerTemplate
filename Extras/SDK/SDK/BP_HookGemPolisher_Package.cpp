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
	 * 		Name   -> Function BP_HookGemPolisher.BP_HookGemPolisher_C.SpawnGem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      GemClass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Weight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_ParentItem_C*                            OldUncut                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HookGemPolisher_C::SpawnGem(class UClass* GemClass, float Weight, class ABP_ParentItem_C* OldUncut)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HookGemPolisher.BP_HookGemPolisher_C.SpawnGem");
		
		struct
		{
			class UClass*                                      GemClass;
			float                                              Weight;
			class ABP_ParentItem_C*                            OldUncut;
		} params;
		params.GemClass = GemClass;
		params.Weight = Weight;
		params.OldUncut = OldUncut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HookGemPolisher.BP_HookGemPolisher_C.PolishTimer
	 * 		Flags  -> ()
	 */
	void ABP_HookGemPolisher_C::PolishTimer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HookGemPolisher.BP_HookGemPolisher_C.PolishTimer");
		
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
	 * 		Name   -> Function BP_HookGemPolisher.BP_HookGemPolisher_C.HookFunctionality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            HookedTo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanPass_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HookGemPolisher_C::HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool* CanPass_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HookGemPolisher.BP_HookGemPolisher_C.HookFunctionality");
		
		struct
		{
			class ABP_ParentItem_C*                            HookedTo;
			class USceneComponent*                             Component;
			bool                                               CanPass_;
		} params;
		params.HookedTo = HookedTo;
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
	 * 		Name   -> Function BP_HookGemPolisher.BP_HookGemPolisher_C.OverridePickedup
	 * 		Flags  -> ()
	 */
	void ABP_HookGemPolisher_C::OverridePickedup()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HookGemPolisher.BP_HookGemPolisher_C.OverridePickedup");
		
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
	 * 		Name   -> Function BP_HookGemPolisher.BP_HookGemPolisher_C.OverrideParentNoWater
	 * 		Flags  -> ()
	 */
	void ABP_HookGemPolisher_C::OverrideParentNoWater()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HookGemPolisher.BP_HookGemPolisher_C.OverrideParentNoWater");
		
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
	 * 		Name   -> Function BP_HookGemPolisher.BP_HookGemPolisher_C.BndEvt__ShredBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_HookGemPolisher_C::BndEvt__ShredBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HookGemPolisher.BP_HookGemPolisher_C.BndEvt__ShredBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		struct
		{
			class UPrimitiveComponent*                         OverlappedComponent;
			class AActor*                                      OtherActor;
			class UPrimitiveComponent*                         OtherComp;
			int32_t                                            OtherBodyIndex;
			bool                                               bFromSweep;
			struct FHitResult                                  SweepResult;
		} params;
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HookGemPolisher.BP_HookGemPolisher_C.ExecuteUbergraph_BP_HookGemPolisher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HookGemPolisher_C::ExecuteUbergraph_BP_HookGemPolisher(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HookGemPolisher.BP_HookGemPolisher_C.ExecuteUbergraph_BP_HookGemPolisher");
		
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
	 * 		Name   -> PredefindFunction ABP_HookGemPolisher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HookGemPolisher_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HookGemPolisher.BP_HookGemPolisher_C");
		return ptr;
	}

}


