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
	 * 		Name   -> Function BPI_Durability.BPI_Durability_C.ReturnDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DurabilityAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Durability_C::ReturnDurability(float DurabilityAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Durability.BPI_Durability_C.ReturnDurability");
		
		UBPI_Durability_C_ReturnDurability_Params params {};
		params.DurabilityAmount = DurabilityAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Durability.BPI_Durability_C.FindDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Durability_C::FindDurability(class ABP_ParentItem_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Durability.BPI_Durability_C.FindDurability");
		
		UBPI_Durability_C_FindDurability_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Durability.BPI_Durability_C.DoneRepair
	 * 		Flags  -> ()
	 */
	void UBPI_Durability_C::DoneRepair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Durability.BPI_Durability_C.DoneRepair");
		
		UBPI_Durability_C_DoneRepair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Durability.BPI_Durability_C.TryRepair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            RepairingTool                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Durability_C::TryRepair(class ABP_ParentItem_C* RepairingTool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Durability.BPI_Durability_C.TryRepair");
		
		UBPI_Durability_C_TryRepair_Params params {};
		params.RepairingTool = RepairingTool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBPI_Durability_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Durability_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Durability.BPI_Durability_C");
		return ptr;
	}

}


