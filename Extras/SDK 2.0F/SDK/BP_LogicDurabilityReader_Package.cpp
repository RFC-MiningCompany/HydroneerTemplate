/**
 * Name: Hydroneer
 * Version: 2.0F
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.TryRepair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            RepairingTool                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicDurabilityReader_C::TryRepair(class ABP_ParentItem_C* RepairingTool)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.TryRepair"));
		
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.DoneRepair
	 * 		Flags  -> ()
	 */
	void ABP_LogicDurabilityReader_C::DoneRepair()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.DoneRepair"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.FindDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicDurabilityReader_C::FindDurability(class ABP_ParentItem_C* Item)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.FindDurability"));
		
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.OverridePlacedDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicDurabilityReader_C::OverridePlacedDown(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.OverridePlacedDown"));
		
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.OverridePickedup
	 * 		Flags  -> ()
	 */
	void ABP_LogicDurabilityReader_C::OverridePickedup()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.OverridePickedup"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.OverrideLoaded
	 * 		Flags  -> ()
	 */
	void ABP_LogicDurabilityReader_C::OverrideLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.OverrideLoaded"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.ReadTime
	 * 		Flags  -> ()
	 */
	void ABP_LogicDurabilityReader_C::ReadTime()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.ReadTime"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.ReturnDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DurabilityAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicDurabilityReader_C::ReturnDurability(float DurabilityAmount)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.ReturnDurability"));
		
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.ExecuteUbergraph_BP_LogicDurabilityReader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicDurabilityReader_C::ExecuteUbergraph_BP_LogicDurabilityReader(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicDurabilityReader.BP_LogicDurabilityReader_C.ExecuteUbergraph_BP_LogicDurabilityReader"));
		
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_LogicDurabilityReader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LogicDurabilityReader_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_LogicDurabilityReader.BP_LogicDurabilityReader_C"));
		return ptr;
	}

}


