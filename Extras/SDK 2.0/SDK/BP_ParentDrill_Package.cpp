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
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.ComponentsToSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     Components                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_ParentDrill_C::ComponentsToSave(TArray<class UActorComponent*>* Components)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.ComponentsToSave");
		
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
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.CalcDrillCooldown
	 * 		Flags  -> ()
	 */
	float ABP_ParentDrill_C::CalcDrillCooldown()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.CalcDrillCooldown");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.CalcNewDurability
	 * 		Flags  -> ()
	 */
	float ABP_ParentDrill_C::CalcNewDurability()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.CalcNewDurability");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.DirtHitCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HitDirt_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            DQA                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentDrill_C::DirtHitCheck(bool* HitDirt_, int32_t* DQA)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.DirtHitCheck");
		
		struct
		{
			bool                                               HitDirt_;
			int32_t                                            DQA;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitDirt_ != nullptr)
			*HitDirt_ = params.HitDirt_;
		if (DQA != nullptr)
			*DQA = params.DQA;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.TryRepair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            RepairingTool                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentDrill_C::TryRepair(class ABP_ParentItem_C* RepairingTool)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.TryRepair");
		
		struct
		{
			class ABP_ParentItem_C*                            RepairingTool;
		} params;
		params.RepairingTool = RepairingTool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.FindDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentDrill_C::FindDurability(class ABP_ParentItem_C* Item)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.FindDurability");
		
		struct
		{
			class ABP_ParentItem_C*                            Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.LMBDownIsTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_ParentItem_C*                            CarryingItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_GameController_C*                        Insigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentDrill_C::LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.LMBDownIsTarget");
		
		struct
		{
			class UPrimitiveComponent*                         Component;
			class ABP_ParentItem_C*                            CarryingItem;
			class ABP_GameController_C*                        Insigator;
		} params;
		params.Component = Component;
		params.CarryingItem = CarryingItem;
		params.Insigator = Insigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.OverrideWaterIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RootPressure                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentDrill_C::OverrideWaterIn(class USceneComponent* Component, float RootPressure)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.OverrideWaterIn");
		
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
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.DrillCooldown
	 * 		Flags  -> ()
	 */
	void ABP_ParentDrill_C::DrillCooldown()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.DrillCooldown");
		
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
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.OverridePlayOneShotAnim
	 * 		Flags  -> ()
	 */
	void ABP_ParentDrill_C::OverridePlayOneShotAnim()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.OverridePlayOneShotAnim");
		
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
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.ToggleLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentDrill_C::ToggleLight(bool On_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.ToggleLight");
		
		struct
		{
			bool                                               On_;
		} params;
		params.On_ = On_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.OverridePickedup
	 * 		Flags  -> ()
	 */
	void ABP_ParentDrill_C::OverridePickedup()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.OverridePickedup");
		
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
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.ReturnDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DurabilityAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentDrill_C::ReturnDurability(float DurabilityAmount)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.ReturnDurability");
		
		struct
		{
			float                                              DurabilityAmount;
		} params;
		params.DurabilityAmount = DurabilityAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.SpawnDirt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DirtQuality                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Weight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentDrill_C::SpawnDirt(int32_t DirtQuality, float Weight)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.SpawnDirt");
		
		struct
		{
			int32_t                                            DirtQuality;
			float                                              Weight;
		} params;
		params.DirtQuality = DirtQuality;
		params.Weight = Weight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.DoneRepair
	 * 		Flags  -> ()
	 */
	void ABP_ParentDrill_C::DoneRepair()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.DoneRepair");
		
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
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.OverrideDrillStop
	 * 		Flags  -> ()
	 */
	void ABP_ParentDrill_C::OverrideDrillStop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.OverrideDrillStop");
		
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
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.OverrideDrillStart
	 * 		Flags  -> ()
	 */
	void ABP_ParentDrill_C::OverrideDrillStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.OverrideDrillStart");
		
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
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.OverrideEmptyWaterPipe
	 * 		Flags  -> ()
	 */
	void ABP_ParentDrill_C::OverrideEmptyWaterPipe()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.OverrideEmptyWaterPipe");
		
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
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_ParentDrill_C::ActorLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.ActorLoaded");
		
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
	 * 		Name   -> Function BP_ParentDrill.BP_ParentDrill_C.ExecuteUbergraph_BP_ParentDrill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentDrill_C::ExecuteUbergraph_BP_ParentDrill(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDrill.BP_ParentDrill_C.ExecuteUbergraph_BP_ParentDrill");
		
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
	 * 		Name   -> PredefindFunction ABP_ParentDrill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentDrill_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentDrill.BP_ParentDrill_C");
		return ptr;
	}

}


