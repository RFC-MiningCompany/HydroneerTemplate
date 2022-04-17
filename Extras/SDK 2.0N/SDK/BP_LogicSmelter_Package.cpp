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
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.ComponentsToSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     Components                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_LogicSmelter_C::ComponentsToSave(TArray<class UActorComponent*>* Components)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.ComponentsToSave"));
		
		ABP_LogicSmelter_C_ComponentsToSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Components != nullptr)
			*Components = params.Components;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.SetNewLiquidType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MetalType                                        InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicSmelter_C::SetNewLiquidType(E_MetalType InputPin)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.SetNewLiquidType"));
		
		ABP_LogicSmelter_C_SetNewLiquidType_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.FindLiquidClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentResource_C*                        NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_MetalType                                        Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicSmelter_C::FindLiquidClass(class ABP_ParentResource_C* NewParam, E_MetalType* Type)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.FindLiquidClass"));
		
		ABP_LogicSmelter_C_FindLiquidClass_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.SetLiquidHeight
	 * 		Flags  -> ()
	 */
	void ABP_LogicSmelter_C::SetLiquidHeight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.SetLiquidHeight"));
		
		ABP_LogicSmelter_C_SetLiquidHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_LogicSmelter_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_0__FinishedFunc"));
		
		ABP_LogicSmelter_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_LogicSmelter_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_0__UpdateFunc"));
		
		ABP_LogicSmelter_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_0__Create Bar__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_LogicSmelter_C::Timeline_0__Create_Bar__EventFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_0__Create Bar__EventFunc"));
		
		ABP_LogicSmelter_C_Timeline_0__Create_Bar__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_LogicSmelter_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_1__FinishedFunc"));
		
		ABP_LogicSmelter_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_LogicSmelter_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_1__UpdateFunc"));
		
		ABP_LogicSmelter_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.BndEvt__OreBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_LogicSmelter_C::BndEvt__OreBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.BndEvt__OreBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
		
		ABP_LogicSmelter_C_BndEvt__OreBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.NewItemInPot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentResource_C*                        Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicSmelter_C::NewItemInPot(class ABP_ParentResource_C* Item)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.NewItemInPot"));
		
		ABP_LogicSmelter_C_NewItemInPot_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.RotateDoors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Open_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LogicSmelter_C::RotateDoors(bool Open_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.RotateDoors"));
		
		ABP_LogicSmelter_C_RotateDoors_Params params {};
		params.Open_ = Open_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.CreateBar
	 * 		Flags  -> ()
	 */
	void ABP_LogicSmelter_C::CreateBar()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.CreateBar"));
		
		ABP_LogicSmelter_C_CreateBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.TipBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Up_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LogicSmelter_C::TipBar(bool Up_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.TipBar"));
		
		ABP_LogicSmelter_C_TipBar_Params params {};
		params.Up_ = Up_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.PourParticles
	 * 		Flags  -> ()
	 */
	void ABP_LogicSmelter_C::PourParticles()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.PourParticles"));
		
		ABP_LogicSmelter_C_PourParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.OverrideLoaded
	 * 		Flags  -> ()
	 */
	void ABP_LogicSmelter_C::OverrideLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.OverrideLoaded"));
		
		ABP_LogicSmelter_C_OverrideLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.ToggleFlame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LogicSmelter_C::ToggleFlame(bool On_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.ToggleFlame"));
		
		ABP_LogicSmelter_C_ToggleFlame_Params params {};
		params.On_ = On_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.DropBar
	 * 		Flags  -> ()
	 */
	void ABP_LogicSmelter_C::DropBar()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.DropBar"));
		
		ABP_LogicSmelter_C_DropBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.OverridePickedup
	 * 		Flags  -> ()
	 */
	void ABP_LogicSmelter_C::OverridePickedup()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.OverridePickedup"));
		
		ABP_LogicSmelter_C_OverridePickedup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.TestForSparks
	 * 		Flags  -> ()
	 */
	void ABP_LogicSmelter_C::TestForSparks()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.TestForSparks"));
		
		ABP_LogicSmelter_C_TestForSparks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.ReturnDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DurabilityAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicSmelter_C::ReturnDurability(float DurabilityAmount)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.ReturnDurability"));
		
		ABP_LogicSmelter_C_ReturnDurability_Params params {};
		params.DurabilityAmount = DurabilityAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.TryRepair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            RepairingTool                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicSmelter_C::TryRepair(class ABP_ParentItem_C* RepairingTool)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.TryRepair"));
		
		ABP_LogicSmelter_C_TryRepair_Params params {};
		params.RepairingTool = RepairingTool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.DoneRepair
	 * 		Flags  -> ()
	 */
	void ABP_LogicSmelter_C::DoneRepair()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.DoneRepair"));
		
		ABP_LogicSmelter_C_DoneRepair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.FindDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicSmelter_C::FindDurability(class ABP_ParentItem_C* Item)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.FindDurability"));
		
		ABP_LogicSmelter_C_FindDurability_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.OverrideLogicIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicSmelter_C::OverrideLogicIn(class USceneComponent* Component)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.OverrideLogicIn"));
		
		ABP_LogicSmelter_C_OverrideLogicIn_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.OverridePlacedDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicSmelter_C::OverridePlacedDown(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.OverridePlacedDown"));
		
		ABP_LogicSmelter_C_OverridePlacedDown_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.ExecuteUbergraph_BP_LogicSmelter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicSmelter_C::ExecuteUbergraph_BP_LogicSmelter(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicSmelter.BP_LogicSmelter_C.ExecuteUbergraph_BP_LogicSmelter"));
		
		ABP_LogicSmelter_C_ExecuteUbergraph_BP_LogicSmelter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_LogicSmelter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LogicSmelter_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_LogicSmelter.BP_LogicSmelter_C"));
		return ptr;
	}

}


