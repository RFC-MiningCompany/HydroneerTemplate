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
	 * 		Name   -> Function BPI_Storage.BPI_Storage_C.StoredItemPickedUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            ItemPickedUp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Storage_C::StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Storage.BPI_Storage_C.StoredItemPickedUp");
		
		UBPI_Storage_C_StoredItemPickedUp_Params params {};
		params.ItemPickedUp = ItemPickedUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Storage.BPI_Storage_C.ItemStored
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Storage_C::ItemStored(class ABP_ParentItem_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Storage.BPI_Storage_C.ItemStored");
		
		UBPI_Storage_C_ItemStored_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBPI_Storage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Storage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Storage.BPI_Storage_C");
		return ptr;
	}

}


