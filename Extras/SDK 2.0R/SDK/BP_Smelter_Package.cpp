/**
 * Name: Hydroneer
 * Version: 2.0R
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
	 * 		Name   -> Function BP_Smelter.BP_Smelter_C.CreateBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Bar                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Smelter_C::CreateBar(class UClass* Bar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Smelter.BP_Smelter_C.CreateBar");
		
		ABP_Smelter_C_CreateBar_Params params {};
		params.Bar = Bar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Smelter.BP_Smelter_C.SetLiquidHeight
	 * 		Flags  -> ()
	 */
	void ABP_Smelter_C::SetLiquidHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Smelter.BP_Smelter_C.SetLiquidHeight");
		
		ABP_Smelter_C_SetLiquidHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Smelter.BP_Smelter_C.SetNewLiquidType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MetalType                                        Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OreContent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Smelter_C::SetNewLiquidType(E_MetalType Type, float OreContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Smelter.BP_Smelter_C.SetNewLiquidType");
		
		ABP_Smelter_C_SetNewLiquidType_Params params {};
		params.Type = Type;
		params.OreContent = OreContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Smelter.BP_Smelter_C.FindLiquidClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentResource_C*                        Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_MetalType                                        Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Smelter_C::FindLiquidClass(class ABP_ParentResource_C* Resource, E_MetalType* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Smelter.BP_Smelter_C.FindLiquidClass");
		
		ABP_Smelter_C_FindLiquidClass_Params params {};
		params.Resource = Resource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Smelter.BP_Smelter_C.OverridePickedup
	 * 		Flags  -> ()
	 */
	void ABP_Smelter_C::OverridePickedup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Smelter.BP_Smelter_C.OverridePickedup");
		
		ABP_Smelter_C_OverridePickedup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Smelter.BP_Smelter_C.OverrideLoaded
	 * 		Flags  -> ()
	 */
	void ABP_Smelter_C::OverrideLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Smelter.BP_Smelter_C.OverrideLoaded");
		
		ABP_Smelter_C_OverrideLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Smelter.BP_Smelter_C.NewItemInPot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentResource_C*                        Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Smelter_C::NewItemInPot(class ABP_ParentResource_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Smelter.BP_Smelter_C.NewItemInPot");
		
		ABP_Smelter_C_NewItemInPot_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Smelter.BP_Smelter_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Smelter_C::BndEvt__Cylinder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Smelter.BP_Smelter_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_Smelter_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_Smelter.BP_Smelter_C.SpawnBar
	 * 		Flags  -> ()
	 */
	void ABP_Smelter_C::SpawnBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Smelter.BP_Smelter_C.SpawnBar");
		
		ABP_Smelter_C_SpawnBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Smelter.BP_Smelter_C.PlayPourAnim
	 * 		Flags  -> ()
	 */
	void ABP_Smelter_C::PlayPourAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Smelter.BP_Smelter_C.PlayPourAnim");
		
		ABP_Smelter_C_PlayPourAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Smelter.BP_Smelter_C.LMBDownIsTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_ParentItem_C*                            CarryingItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_GameController_C*                        Insigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Smelter_C::LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Smelter.BP_Smelter_C.LMBDownIsTarget");
		
		ABP_Smelter_C_LMBDownIsTarget_Params params {};
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
	 * 		Name   -> Function BP_Smelter.BP_Smelter_C.OverridePlacedDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Smelter_C::OverridePlacedDown(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Smelter.BP_Smelter_C.OverridePlacedDown");
		
		ABP_Smelter_C_OverridePlacedDown_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Smelter.BP_Smelter_C.OverrideDroppedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Smelter_C::OverrideDroppedItem(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Smelter.BP_Smelter_C.OverrideDroppedItem");
		
		ABP_Smelter_C_OverrideDroppedItem_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Smelter.BP_Smelter_C.ExecuteUbergraph_BP_Smelter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Smelter_C::ExecuteUbergraph_BP_Smelter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Smelter.BP_Smelter_C.ExecuteUbergraph_BP_Smelter");
		
		ABP_Smelter_C_ExecuteUbergraph_BP_Smelter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Smelter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Smelter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Smelter.BP_Smelter_C");
		return ptr;
	}

}


