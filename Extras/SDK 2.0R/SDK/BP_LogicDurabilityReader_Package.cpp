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
	 * 		Name   -> Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.TryRepair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            RepairingTool                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicDurabilityReader_C::TryRepair(class ABP_ParentItem_C* RepairingTool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.TryRepair");
		
		ABP_LogicDurabilityReader_C_TryRepair_Params params {};
		params.RepairingTool = RepairingTool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.DoneRepair
	 * 		Flags  -> ()
	 */
	void ABP_LogicDurabilityReader_C::DoneRepair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.DoneRepair");
		
		ABP_LogicDurabilityReader_C_DoneRepair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.FindDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicDurabilityReader_C::FindDurability(class ABP_ParentItem_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.FindDurability");
		
		ABP_LogicDurabilityReader_C_FindDurability_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.OverridePlacedDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicDurabilityReader_C::OverridePlacedDown(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.OverridePlacedDown");
		
		ABP_LogicDurabilityReader_C_OverridePlacedDown_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.OverridePickedup
	 * 		Flags  -> ()
	 */
	void ABP_LogicDurabilityReader_C::OverridePickedup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.OverridePickedup");
		
		ABP_LogicDurabilityReader_C_OverridePickedup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.OverrideLoaded
	 * 		Flags  -> ()
	 */
	void ABP_LogicDurabilityReader_C::OverrideLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.OverrideLoaded");
		
		ABP_LogicDurabilityReader_C_OverrideLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.ReadTime
	 * 		Flags  -> ()
	 */
	void ABP_LogicDurabilityReader_C::ReadTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.ReadTime");
		
		ABP_LogicDurabilityReader_C_ReadTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.ReturnDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DurabilityAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicDurabilityReader_C::ReturnDurability(float DurabilityAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.ReturnDurability");
		
		ABP_LogicDurabilityReader_C_ReturnDurability_Params params {};
		params.DurabilityAmount = DurabilityAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.ExecuteUbergraph_BP_LogicDurabilityReader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicDurabilityReader_C::ExecuteUbergraph_BP_LogicDurabilityReader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.ExecuteUbergraph_BP_LogicDurabilityReader");
		
		ABP_LogicDurabilityReader_C_ExecuteUbergraph_BP_LogicDurabilityReader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_LogicDurabilityReader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LogicDurabilityReader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LogicDurabilityReader.BP_LogicDurabilityReader_C");
		return ptr;
	}

}


