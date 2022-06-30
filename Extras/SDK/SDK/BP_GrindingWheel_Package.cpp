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
	 * 		Name   -> Function BP_GrindingWheel.BP_GrindingWheel_C.GrindGem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentResource_C*                        UncutGem                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrindingWheel_C::GrindGem(class ABP_ParentResource_C* UncutGem)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GrindingWheel.BP_GrindingWheel_C.GrindGem");
		
		struct
		{
			class ABP_ParentResource_C*                        UncutGem;
		} params;
		params.UncutGem = UncutGem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrindingWheel.BP_GrindingWheel_C.SpinWheel
	 * 		Flags  -> ()
	 */
	void ABP_GrindingWheel_C::SpinWheel()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GrindingWheel.BP_GrindingWheel_C.SpinWheel");
		
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
	 * 		Name   -> Function BP_GrindingWheel.BP_GrindingWheel_C.LMBDownIsTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_ParentItem_C*                            CarryingItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_GameController_C*                        Insigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrindingWheel_C::LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GrindingWheel.BP_GrindingWheel_C.LMBDownIsTarget");
		
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
	 * 		Name   -> Function BP_GrindingWheel.BP_GrindingWheel_C.ExecuteUbergraph_BP_GrindingWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrindingWheel_C::ExecuteUbergraph_BP_GrindingWheel(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GrindingWheel.BP_GrindingWheel_C.ExecuteUbergraph_BP_GrindingWheel");
		
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
	 * 		Name   -> PredefindFunction ABP_GrindingWheel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GrindingWheel_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_GrindingWheel.BP_GrindingWheel_C");
		return ptr;
	}

}


