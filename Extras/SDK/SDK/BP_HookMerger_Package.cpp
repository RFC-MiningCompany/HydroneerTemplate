/**
 * Name: Hydroneer
<<<<<<<< HEAD:Extras/SDK/SDK/BP_VehicleStore_Package.cpp
 * Version: 2.0.2
========
 * Version: 2.0.6
>>>>>>>> origin/development:Extras/SDK/SDK/BP_HookMerger_Package.cpp
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
	 * 		Name   -> Function BP_HookMerger.BP_HookMerger_C.ChangeBeltSpeed
	 * 		Flags  -> ()
	 */
	void ABP_HookMerger_C::ChangeBeltSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
<<<<<<<< HEAD:Extras/SDK/SDK/BP_VehicleStore_Package.cpp
			fn = UObject::FindObject<UFunction>("Function BP_VehicleStore.BP_VehicleStore_C.SpawnVehicle");
========
			fn = UObject::FindObject<UFunction>("Function BP_HookMerger.BP_HookMerger_C.ChangeBeltSpeed");
>>>>>>>> origin/development:Extras/SDK/SDK/BP_HookMerger_Package.cpp
		
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
<<<<<<<< HEAD:Extras/SDK/SDK/BP_VehicleStore_Package.cpp
	 * 		Name   -> Function BP_VehicleStore.BP_VehicleStore_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_VehicleStore_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleStore.BP_VehicleStore_C.UserConstructionScript");
		
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
	 * 		Name   -> Function BP_VehicleStore.BP_VehicleStore_C.OverrideMouseClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VehicleStore_C::OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleStore.BP_VehicleStore_C.OverrideMouseClicked");
		
		struct
		{
			class UActorComponent*                             Component;
			class ABP_GameController_C*                        Controller;
		} params;
		params.Component = Component;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VehicleStore.BP_VehicleStore_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
========
	 * 		Name   -> Function BP_HookMerger.BP_HookMerger_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
>>>>>>>> origin/development:Extras/SDK/SDK/BP_HookMerger_Package.cpp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_HookMerger_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
<<<<<<<< HEAD:Extras/SDK/SDK/BP_VehicleStore_Package.cpp
			fn = UObject::FindObject<UFunction>("Function BP_VehicleStore.BP_VehicleStore_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
========
			fn = UObject::FindObject<UFunction>("Function BP_HookMerger.BP_HookMerger_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
>>>>>>>> origin/development:Extras/SDK/SDK/BP_HookMerger_Package.cpp
		
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
	 * 		Name   -> Function BP_HookMerger.BP_HookMerger_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HookMerger_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
<<<<<<<< HEAD:Extras/SDK/SDK/BP_VehicleStore_Package.cpp
			fn = UObject::FindObject<UFunction>("Function BP_VehicleStore.BP_VehicleStore_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
========
			fn = UObject::FindObject<UFunction>("Function BP_HookMerger.BP_HookMerger_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
>>>>>>>> origin/development:Extras/SDK/SDK/BP_HookMerger_Package.cpp
		
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
	 * 		Name   -> Function BP_HookMerger.BP_HookMerger_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HookMerger_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HookMerger.BP_HookMerger_C.ReceiveTick");
		
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
	 * 		Name   -> Function BP_HookMerger.BP_HookMerger_C.ExecuteUbergraph_BP_HookMerger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HookMerger_C::ExecuteUbergraph_BP_HookMerger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
<<<<<<<< HEAD:Extras/SDK/SDK/BP_VehicleStore_Package.cpp
			fn = UObject::FindObject<UFunction>("Function BP_VehicleStore.BP_VehicleStore_C.ExecuteUbergraph_BP_VehicleStore");
========
			fn = UObject::FindObject<UFunction>("Function BP_HookMerger.BP_HookMerger_C.ExecuteUbergraph_BP_HookMerger");
>>>>>>>> origin/development:Extras/SDK/SDK/BP_HookMerger_Package.cpp
		
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
	 * 		Name   -> PredefindFunction ABP_HookMerger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HookMerger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
<<<<<<<< HEAD:Extras/SDK/SDK/BP_VehicleStore_Package.cpp
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleStore.BP_VehicleStore_C");
========
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HookMerger.BP_HookMerger_C");
>>>>>>>> origin/development:Extras/SDK/SDK/BP_HookMerger_Package.cpp
		return ptr;
	}

}


