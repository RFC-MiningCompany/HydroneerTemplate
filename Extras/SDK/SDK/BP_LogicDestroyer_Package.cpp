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
	 * 		Name   -> Function BP_LogicDestroyer.BP_LogicDestroyer_C.OverrideLoaded
	 * 		Flags  -> ()
	 */
	void ABP_LogicDestroyer_C::OverrideLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LogicDestroyer.BP_LogicDestroyer_C.OverrideLoaded");
		
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
	 * 		Name   -> Function BP_LogicDestroyer.BP_LogicDestroyer_C.OverridePickedup
	 * 		Flags  -> ()
	 */
	void ABP_LogicDestroyer_C::OverridePickedup()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LogicDestroyer.BP_LogicDestroyer_C.OverridePickedup");
		
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
	 * 		Name   -> Function BP_LogicDestroyer.BP_LogicDestroyer_C.OverrideLogicIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicDestroyer_C::OverrideLogicIn(class USceneComponent* Component)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LogicDestroyer.BP_LogicDestroyer_C.OverrideLogicIn");
		
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
	 * 		Name   -> Function BP_LogicDestroyer.BP_LogicDestroyer_C.Spinner
	 * 		Flags  -> ()
	 */
	void ABP_LogicDestroyer_C::Spinner()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LogicDestroyer.BP_LogicDestroyer_C.Spinner");
		
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
	 * 		Name   -> Function BP_LogicDestroyer.BP_LogicDestroyer_C.BndEvt__BP_LogicDestroyer_DestroyBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_LogicDestroyer_C::BndEvt__BP_LogicDestroyer_DestroyBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LogicDestroyer.BP_LogicDestroyer_C.BndEvt__BP_LogicDestroyer_DestroyBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
		
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
	 * 		Name   -> Function BP_LogicDestroyer.BP_LogicDestroyer_C.StopSpinning
	 * 		Flags  -> ()
	 */
	void ABP_LogicDestroyer_C::StopSpinning()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LogicDestroyer.BP_LogicDestroyer_C.StopSpinning");
		
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
	 * 		Name   -> Function BP_LogicDestroyer.BP_LogicDestroyer_C.OverridePlacedDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicDestroyer_C::OverridePlacedDown(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LogicDestroyer.BP_LogicDestroyer_C.OverridePlacedDown");
		
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
	 * 		Name   -> Function BP_LogicDestroyer.BP_LogicDestroyer_C.StartSpinning
	 * 		Flags  -> ()
	 */
	void ABP_LogicDestroyer_C::StartSpinning()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LogicDestroyer.BP_LogicDestroyer_C.StartSpinning");
		
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
	 * 		Name   -> Function BP_LogicDestroyer.BP_LogicDestroyer_C.ExecuteUbergraph_BP_LogicDestroyer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicDestroyer_C::ExecuteUbergraph_BP_LogicDestroyer(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LogicDestroyer.BP_LogicDestroyer_C.ExecuteUbergraph_BP_LogicDestroyer");
		
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
	 * 		Name   -> PredefindFunction ABP_LogicDestroyer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LogicDestroyer_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_LogicDestroyer.BP_LogicDestroyer_C");
		return ptr;
	}

}


