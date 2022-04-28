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
	 * 		Name   -> Function BP_HydroTruck.BP_HydroTruck_C.SetStoredItemMass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MassInKg                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HydroTruck_C::SetStoredItemMass(class ABP_ParentItem_C* Item, float MassInKg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.SetStoredItemMass");
		
		ABP_HydroTruck_C_SetStoredItemMass_Params params {};
		params.Item = Item;
		params.MassInKg = MassInKg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HydroTruck.BP_HydroTruck_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HydroTruck_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.ReceiveTick");
		
		ABP_HydroTruck_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HydroTruck.BP_HydroTruck_C.CB_StartUnwedging
	 * 		Flags  -> ()
	 */
	void ABP_HydroTruck_C::CB_StartUnwedging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.CB_StartUnwedging");
		
		ABP_HydroTruck_C_CB_StartUnwedging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HydroTruck.BP_HydroTruck_C.CB_StopUnwedging
	 * 		Flags  -> ()
	 */
	void ABP_HydroTruck_C::CB_StopUnwedging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.CB_StopUnwedging");
		
		ABP_HydroTruck_C_CB_StopUnwedging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HydroTruck.BP_HydroTruck_C.CB_StartUnbeaching
	 * 		Flags  -> ()
	 */
	void ABP_HydroTruck_C::CB_StartUnbeaching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.CB_StartUnbeaching");
		
		ABP_HydroTruck_C_CB_StartUnbeaching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HydroTruck.BP_HydroTruck_C.BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HydroTruck_C::BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_HydroTruck_C_BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HydroTruck.BP_HydroTruck_C.BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_HydroTruck_C::BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_HydroTruck_C_BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_HydroTruck.BP_HydroTruck_C.EnterVehicle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HydroTruck_C::EnterVehicle(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.EnterVehicle");
		
		ABP_HydroTruck_C_EnterVehicle_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HydroTruck.BP_HydroTruck_C.BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_0_ItemAttached__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_HydroTruck_C::BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_0_ItemAttached__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_0_ItemAttached__DelegateSignature");
		
		ABP_HydroTruck_C_BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_0_ItemAttached__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HydroTruck.BP_HydroTruck_C.BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_1_ItemDetached__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_HydroTruck_C::BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_1_ItemDetached__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_1_ItemDetached__DelegateSignature");
		
		ABP_HydroTruck_C_BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_1_ItemDetached__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HydroTruck.BP_HydroTruck_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_HydroTruck_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.ReceiveBeginPlay");
		
		ABP_HydroTruck_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HydroTruck.BP_HydroTruck_C.ExecuteUbergraph_BP_HydroTruck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HydroTruck_C::ExecuteUbergraph_BP_HydroTruck(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.ExecuteUbergraph_BP_HydroTruck");
		
		ABP_HydroTruck_C_ExecuteUbergraph_BP_HydroTruck_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_HydroTruck_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HydroTruck_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HydroTruck.BP_HydroTruck_C");
		return ptr;
	}

}


