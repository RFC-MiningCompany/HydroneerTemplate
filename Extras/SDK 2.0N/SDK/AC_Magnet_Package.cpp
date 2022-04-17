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
	 * 		Name   -> Function AC_Magnet.AC_Magnet_C.NewItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Magnet_C::NewItem(class ABP_ParentItem_C* Item)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Magnet.AC_Magnet_C.NewItem"));
		
		UAC_Magnet_C_NewItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Magnet.AC_Magnet_C.RemoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Magnet_C::RemoveItem(class ABP_ParentItem_C* Item)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Magnet.AC_Magnet_C.RemoveItem"));
		
		UAC_Magnet_C_RemoveItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Magnet.AC_Magnet_C.StartMagnet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             AttractLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Magnet_C::StartMagnet(class USceneComponent* AttractLocation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Magnet.AC_Magnet_C.StartMagnet"));
		
		UAC_Magnet_C_StartMagnet_Params params {};
		params.AttractLocation = AttractLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Magnet.AC_Magnet_C.StopMagnet
	 * 		Flags  -> ()
	 */
	void UAC_Magnet_C::StopMagnet()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Magnet.AC_Magnet_C.StopMagnet"));
		
		UAC_Magnet_C_StopMagnet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Magnet.AC_Magnet_C.MagnetTimer
	 * 		Flags  -> ()
	 */
	void UAC_Magnet_C::MagnetTimer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Magnet.AC_Magnet_C.MagnetTimer"));
		
		UAC_Magnet_C_MagnetTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Magnet.AC_Magnet_C.PrepItemsMag
	 * 		Flags  -> ()
	 */
	void UAC_Magnet_C::PrepItemsMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Magnet.AC_Magnet_C.PrepItemsMag"));
		
		UAC_Magnet_C_PrepItemsMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Magnet.AC_Magnet_C.PrepItemsDrop
	 * 		Flags  -> ()
	 */
	void UAC_Magnet_C::PrepItemsDrop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Magnet.AC_Magnet_C.PrepItemsDrop"));
		
		UAC_Magnet_C_PrepItemsDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Magnet.AC_Magnet_C.ExecuteUbergraph_AC_Magnet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Magnet_C::ExecuteUbergraph_AC_Magnet(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Magnet.AC_Magnet_C.ExecuteUbergraph_AC_Magnet"));
		
		UAC_Magnet_C_ExecuteUbergraph_AC_Magnet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAC_Magnet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAC_Magnet_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass AC_Magnet.AC_Magnet_C"));
		return ptr;
	}

}


