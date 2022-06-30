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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_GetHighlightArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    HighlightArray                                             (Parm, OutParm)
	 */
	void ABP_ParentVehicle_C::BPI_GetHighlightArray(TArray<int32_t>* HighlightArray)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_GetHighlightArray");
		
		struct
		{
			TArray<int32_t>                                    HighlightArray;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HighlightArray != nullptr)
			*HighlightArray = params.HighlightArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_SetHighlightArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    HighlightArray                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentVehicle_C::BPI_SetHighlightArray(TArray<int32_t>* HighlightArray, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_SetHighlightArray");
		
		struct
		{
			TArray<int32_t>                                    HighlightArray;
			bool                                               Result;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HighlightArray != nullptr)
			*HighlightArray = params.HighlightArray;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_GetCanHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanHighlight_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentVehicle_C::BPI_GetCanHighlight(bool* CanHighlight_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_GetCanHighlight");
		
		struct
		{
			bool                                               CanHighlight_;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanHighlight_ != nullptr)
			*CanHighlight_ = params.CanHighlight_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ComponentsToSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     Components                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_ParentVehicle_C::ComponentsToSave(TArray<class UActorComponent*>* Components)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ComponentsToSave");
		
		struct
		{
			TArray<class UActorComponent*>                     Components;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Components != nullptr)
			*Components = params.Components;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.FindExitPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::FindExitPoint(struct FVector* NewParam)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.FindExitPoint");
		
		struct
		{
			struct FVector                                     NewParam;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.CanEnter?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentVehicle_C::CanEnter_(bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.CanEnter?");
		
		struct
		{
			bool                                               Result;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.FreezePhysics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentVehicle_C::FreezePhysics(bool bNewState)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.FreezePhysics");
		
		struct
		{
			bool                                               bNewState;
		} params;
		params.bNewState = bNewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ForceWheelsToRestLength
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ForceWheelsToRestLength()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ForceWheelsToRestLength");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyFriction
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ApplyFriction()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyFriction");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.RecalculateCargoWeight
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::RecalculateCargoWeight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.RecalculateCargoWeight");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyCargoWeight
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ApplyCargoWeight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyCargoWeight");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.RemoveCargo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_CargoType                                        Cargo_Type                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::RemoveCargo(E_CargoType Cargo_Type, int32_t Amount)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.RemoveCargo");
		
		struct
		{
			E_CargoType                                        Cargo_Type;
			int32_t                                            Amount;
		} params;
		params.Cargo_Type = Cargo_Type;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.AddCargo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_CargoType                                        Cargo_Type                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::AddCargo(E_CargoType Cargo_Type, int32_t Amount)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.AddCargo");
		
		struct
		{
			E_CargoType                                        Cargo_Type;
			int32_t                                            Amount;
		} params;
		params.Cargo_Type = Cargo_Type;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.OnLand
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::OnLand()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.OnLand");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.TickCameraZoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::TickCameraZoom(float DeltaTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.TickCameraZoom");
		
		struct
		{
			float                                              DeltaTime;
		} params;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.DetachPawnFromVehicle
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::DetachPawnFromVehicle()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.DetachPawnFromVehicle");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.AttachPawnToVehicle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::AttachPawnToVehicle(class APawn* Pawn, int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.AttachPawnToVehicle");
		
		struct
		{
			class APawn*                                       Pawn;
			int32_t                                            Index;
		} params;
		params.Pawn = Pawn;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.SetHeadlights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentVehicle_C::SetHeadlights(bool NewValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.SetHeadlights");
		
		struct
		{
			bool                                               NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ToggleHeadlights
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ToggleHeadlights()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ToggleHeadlights");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.DrawDebugForces
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::DrawDebugForces()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.DrawDebugForces");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyWheelRotation
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ApplyWheelRotation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyWheelRotation");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyTireForce
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ApplyTireForce()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyTireForce");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.GetTireForce
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::GetTireForce()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.GetTireForce");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.GetWheelLinearVelocityLocal
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::GetWheelLinearVelocityLocal()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.GetWheelLinearVelocityLocal");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.UpdateWheelLocation
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::UpdateWheelLocation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.UpdateWheelLocation");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ApplySuspensionForce
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ApplySuspensionForce()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ApplySuspensionForce");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.GetSuspensionForce
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::GetSuspensionForce()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.GetSuspensionForce");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.UpdateSuspensionLength
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::UpdateSuspensionLength()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.UpdateSuspensionLength");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.SuspensionInit
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::SuspensionInit()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.SuspensionInit");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.SetupReferences
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::SetupReferences()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.SetupReferences");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.RayInit
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::RayInit()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.RayInit");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.RayCast
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::RayCast()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.RayCast");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.UserConstructionScript");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.TurnOnHeadlights__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::TurnOnHeadlights__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.TurnOnHeadlights__FinishedFunc");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.TurnOnHeadlights__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::TurnOnHeadlights__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.TurnOnHeadlights__UpdateFunc");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.BlendFuelSFX__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::BlendFuelSFX__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.BlendFuelSFX__FinishedFunc");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.BlendFuelSFX__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::BlendFuelSFX__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.BlendFuelSFX__UpdateFunc");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.Fuel Light Bleep__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::Fuel_Light_Bleep__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.Fuel Light Bleep__FinishedFunc");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.Fuel Light Bleep__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::Fuel_Light_Bleep__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.Fuel Light Bleep__UpdateFunc");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.CamTransition__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::CamTransition__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.CamTransition__FinishedFunc");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.CamTransition__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::CamTransition__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.CamTransition__UpdateFunc");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.InpActEvt_Jump_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::InpActEvt_Jump_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.InpActEvt_Jump_K2Node_InputActionEvent_3");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.InpActEvt_Jump_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::InpActEvt_Jump_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.InpActEvt_Jump_K2Node_InputActionEvent_2");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.InpActEvt_LMB_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::InpActEvt_LMB_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.InpActEvt_LMB_K2Node_InputActionEvent_1");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ReceiveBeginPlay");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ReceiveTick");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2");
		
		struct
		{
			float                                              AxisValue;
		} params;
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ActorSaved
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ActorSaved()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ActorSaved");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ActorPreSave
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ActorPreSave()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ActorPreSave");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.HornFinishCooldown
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::HornFinishCooldown()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.HornFinishCooldown");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.EnterVehicle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::EnterVehicle(class APawn* Pawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.EnterVehicle");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_Unhighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::BPI_Unhighlight(class ABP_GameController_C* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_Unhighlight");
		
		struct
		{
			class ABP_GameController_C*                        Controller;
		} params;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_Highlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::BPI_Highlight(class ABP_GameController_C* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_Highlight");
		
		struct
		{
			class ABP_GameController_C*                        Controller;
		} params;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.StartCamTransition
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::StartCamTransition()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.StartCamTransition");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1");
		
		struct
		{
			float                                              AxisValue;
		} params;
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ExitVehicle
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ExitVehicle()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ExitVehicle");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.Yeet
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::Yeet()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.Yeet");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MouseUp_K2Node_InputAxisEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::InpAxisEvt_MouseUp_K2Node_InputAxisEvent_5(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MouseUp_K2Node_InputAxisEvent_5");
		
		struct
		{
			float                                              AxisValue;
		} params;
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MouseRight_K2Node_InputAxisEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::InpAxisEvt_MouseRight_K2Node_InputAxisEvent_6(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MouseRight_K2Node_InputAxisEvent_6");
		
		struct
		{
			float                                              AxisValue;
		} params;
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ActorLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ActorLoaded");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_Accelerate_K2Node_InputAxisEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::InpAxisEvt_Accelerate_K2Node_InputAxisEvent_3(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_Accelerate_K2Node_InputAxisEvent_3");
		
		struct
		{
			float                                              AxisValue;
		} params;
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.FOVChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::FOVChanged(float NewValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.FOVChanged");
		
		struct
		{
			float                                              NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.BndEvt__BP_ParentVehicle_RefuelBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_ParentVehicle_C::BndEvt__BP_ParentVehicle_RefuelBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.BndEvt__BP_ParentVehicle_RefuelBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.FuelVisualHeight
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::FuelVisualHeight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.FuelVisualHeight");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.Loaded
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::Loaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.Loaded");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_4(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_4");
		
		struct
		{
			float                                              AxisValue;
		} params;
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_ToggleLookAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LookingAt_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentVehicle_C::BPI_ToggleLookAt(class ABP_GameController_C* Controller, bool LookingAt_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_ToggleLookAt");
		
		struct
		{
			class ABP_GameController_C*                        Controller;
			bool                                               LookingAt_;
		} params;
		params.Controller = Controller;
		params.LookingAt_ = LookingAt_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ExecuteUbergraph_BP_ParentVehicle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::ExecuteUbergraph_BP_ParentVehicle(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ExecuteUbergraph_BP_ParentVehicle");
		
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
	 * 		Name   -> PredefindFunction ABP_ParentVehicle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentVehicle_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentVehicle.BP_ParentVehicle_C");
		return ptr;
	}

}


