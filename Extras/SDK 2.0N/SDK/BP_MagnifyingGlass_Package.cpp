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
	 * 		Name   -> Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.TryRepair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            RepairingTool                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagnifyingGlass_C::TryRepair(class ABP_ParentItem_C* RepairingTool)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.TryRepair"));
		
		ABP_MagnifyingGlass_C_TryRepair_Params params {};
		params.RepairingTool = RepairingTool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.DoneRepair
	 * 		Flags  -> ()
	 */
	void ABP_MagnifyingGlass_C::DoneRepair()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.DoneRepair"));
		
		ABP_MagnifyingGlass_C_DoneRepair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.FindDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagnifyingGlass_C::FindDurability(class ABP_ParentItem_C* Item)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.FindDurability"));
		
		ABP_MagnifyingGlass_C_FindDurability_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.OverridePickedup
	 * 		Flags  -> ()
	 */
	void ABP_MagnifyingGlass_C::OverridePickedup()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.OverridePickedup"));
		
		ABP_MagnifyingGlass_C_OverridePickedup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.LineTracer
	 * 		Flags  -> ()
	 */
	void ABP_MagnifyingGlass_C::LineTracer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.LineTracer"));
		
		ABP_MagnifyingGlass_C_LineTracer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.OverrideDroppedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagnifyingGlass_C::OverrideDroppedItem(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.OverrideDroppedItem"));
		
		ABP_MagnifyingGlass_C_OverrideDroppedItem_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.ReturnDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DurabilityAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagnifyingGlass_C::ReturnDurability(float DurabilityAmount)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.ReturnDurability"));
		
		ABP_MagnifyingGlass_C_ReturnDurability_Params params {};
		params.DurabilityAmount = DurabilityAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.ExecuteUbergraph_BP_MagnifyingGlass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagnifyingGlass_C::ExecuteUbergraph_BP_MagnifyingGlass(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.ExecuteUbergraph_BP_MagnifyingGlass"));
		
		ABP_MagnifyingGlass_C_ExecuteUbergraph_BP_MagnifyingGlass_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_MagnifyingGlass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MagnifyingGlass_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_MagnifyingGlass.BP_MagnifyingGlass_C"));
		return ptr;
	}

}


