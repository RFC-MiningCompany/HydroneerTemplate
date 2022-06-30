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
	 * 		Name   -> Function BP_HydroTruck.BP_HydroTruck_C.SetStoredItemMass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MassInKg                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HydroTruck_C::SetStoredItemMass(class ABP_ParentItem_C* Item, float MassInKg)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.SetStoredItemMass");
		
		struct
		{
			class ABP_ParentItem_C*                            Item;
			float                                              MassInKg;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.ReceiveTick");
		
		struct
		{
			float                                              DeltaSeconds;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.CB_StartUnwedging");
		
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
	 * 		Name   -> Function BP_HydroTruck.BP_HydroTruck_C.CB_StopUnwedging
	 * 		Flags  -> ()
	 */
	void ABP_HydroTruck_C::CB_StopUnwedging()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.CB_StopUnwedging");
		
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
	 * 		Name   -> Function BP_HydroTruck.BP_HydroTruck_C.CB_StartUnbeaching
	 * 		Flags  -> ()
	 */
	void ABP_HydroTruck_C::CB_StartUnbeaching()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.CB_StartUnbeaching");
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		struct
		{
			class UPrimitiveComponent*                         OverlappedComponent;
			class AActor*                                      OtherActor;
			class UPrimitiveComponent*                         OtherComp;
			int32_t                                            OtherBodyIndex;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		struct
		{
			class UPrimitiveComponent*                         OverlappedComponent;
			class AActor*                                      OtherActor;
			class UPrimitiveComponent*                         OtherComp;
			int32_t                                            OtherBodyIndex;
			bool                                               bFromSweep;
			struct FHitResult                                  SweepResult;
		} params;
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.EnterVehicle");
		
		struct
		{
			class APawn*                                       Pawn;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_0_ItemAttached__DelegateSignature");
		
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
	 * 		Name   -> Function BP_HydroTruck.BP_HydroTruck_C.BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_1_ItemDetached__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_HydroTruck_C::BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_1_ItemDetached__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_1_ItemDetached__DelegateSignature");
		
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
	 * 		Name   -> Function BP_HydroTruck.BP_HydroTruck_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_HydroTruck_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.ReceiveBeginPlay");
		
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
	 * 		Name   -> Function BP_HydroTruck.BP_HydroTruck_C.ExecuteUbergraph_BP_HydroTruck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HydroTruck_C::ExecuteUbergraph_BP_HydroTruck(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HydroTruck.BP_HydroTruck_C.ExecuteUbergraph_BP_HydroTruck");
		
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
	 * 		Name   -> PredefindFunction ABP_HydroTruck_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HydroTruck_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HydroTruck.BP_HydroTruck_C");
		return ptr;
	}

}


