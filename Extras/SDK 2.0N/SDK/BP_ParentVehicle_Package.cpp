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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_GetHighlightArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    HighlightArray                                             (Parm, OutParm)
	 */
	void ABP_ParentVehicle_C::BPI_GetHighlightArray(TArray<int32_t>* HighlightArray)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_GetHighlightArray"));
		
		ABP_ParentVehicle_C_BPI_GetHighlightArray_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_SetHighlightArray"));
		
		ABP_ParentVehicle_C_BPI_SetHighlightArray_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_GetCanHighlight"));
		
		ABP_ParentVehicle_C_BPI_GetCanHighlight_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.ComponentsToSave"));
		
		ABP_ParentVehicle_C_ComponentsToSave_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.FindExitPoint"));
		
		ABP_ParentVehicle_C_FindExitPoint_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.CanEnter?"));
		
		ABP_ParentVehicle_C_CanEnter__Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.FreezePhysics"));
		
		ABP_ParentVehicle_C_FreezePhysics_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.ForceWheelsToRestLength"));
		
		ABP_ParentVehicle_C_ForceWheelsToRestLength_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyFriction"));
		
		ABP_ParentVehicle_C_ApplyFriction_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.RecalculateCargoWeight"));
		
		ABP_ParentVehicle_C_RecalculateCargoWeight_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyCargoWeight"));
		
		ABP_ParentVehicle_C_ApplyCargoWeight_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.RemoveCargo"));
		
		ABP_ParentVehicle_C_RemoveCargo_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.AddCargo"));
		
		ABP_ParentVehicle_C_AddCargo_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.OnLand"));
		
		ABP_ParentVehicle_C_OnLand_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.TickCameraZoom"));
		
		ABP_ParentVehicle_C_TickCameraZoom_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.DetachPawnFromVehicle"));
		
		ABP_ParentVehicle_C_DetachPawnFromVehicle_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.AttachPawnToVehicle"));
		
		ABP_ParentVehicle_C_AttachPawnToVehicle_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.SetHeadlights"));
		
		ABP_ParentVehicle_C_SetHeadlights_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.ToggleHeadlights"));
		
		ABP_ParentVehicle_C_ToggleHeadlights_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.DrawDebugForces"));
		
		ABP_ParentVehicle_C_DrawDebugForces_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyWheelRotation"));
		
		ABP_ParentVehicle_C_ApplyWheelRotation_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyTireForce"));
		
		ABP_ParentVehicle_C_ApplyTireForce_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.GetTireForce"));
		
		ABP_ParentVehicle_C_GetTireForce_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.GetWheelLinearVelocityLocal"));
		
		ABP_ParentVehicle_C_GetWheelLinearVelocityLocal_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.UpdateWheelLocation"));
		
		ABP_ParentVehicle_C_UpdateWheelLocation_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.ApplySuspensionForce"));
		
		ABP_ParentVehicle_C_ApplySuspensionForce_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.GetSuspensionForce"));
		
		ABP_ParentVehicle_C_GetSuspensionForce_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.UpdateSuspensionLength"));
		
		ABP_ParentVehicle_C_UpdateSuspensionLength_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.SuspensionInit"));
		
		ABP_ParentVehicle_C_SuspensionInit_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.SetupReferences"));
		
		ABP_ParentVehicle_C_SetupReferences_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.RayInit"));
		
		ABP_ParentVehicle_C_RayInit_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.RayCast"));
		
		ABP_ParentVehicle_C_RayCast_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.UserConstructionScript"));
		
		ABP_ParentVehicle_C_UserConstructionScript_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.TurnOnHeadlights__FinishedFunc"));
		
		ABP_ParentVehicle_C_TurnOnHeadlights__FinishedFunc_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.TurnOnHeadlights__UpdateFunc"));
		
		ABP_ParentVehicle_C_TurnOnHeadlights__UpdateFunc_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.BlendFuelSFX__FinishedFunc"));
		
		ABP_ParentVehicle_C_BlendFuelSFX__FinishedFunc_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.BlendFuelSFX__UpdateFunc"));
		
		ABP_ParentVehicle_C_BlendFuelSFX__UpdateFunc_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.Fuel Light Bleep__FinishedFunc"));
		
		ABP_ParentVehicle_C_Fuel_Light_Bleep__FinishedFunc_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.Fuel Light Bleep__UpdateFunc"));
		
		ABP_ParentVehicle_C_Fuel_Light_Bleep__UpdateFunc_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.CamTransition__FinishedFunc"));
		
		ABP_ParentVehicle_C_CamTransition__FinishedFunc_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.CamTransition__UpdateFunc"));
		
		ABP_ParentVehicle_C_CamTransition__UpdateFunc_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.InpActEvt_Jump_K2Node_InputActionEvent_3"));
		
		ABP_ParentVehicle_C_InpActEvt_Jump_K2Node_InputActionEvent_3_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.InpActEvt_Jump_K2Node_InputActionEvent_2"));
		
		ABP_ParentVehicle_C_InpActEvt_Jump_K2Node_InputActionEvent_2_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.InpActEvt_LMB_K2Node_InputActionEvent_1"));
		
		ABP_ParentVehicle_C_InpActEvt_LMB_K2Node_InputActionEvent_1_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.ReceiveBeginPlay"));
		
		ABP_ParentVehicle_C_ReceiveBeginPlay_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.HornFinishCooldown"));
		
		ABP_ParentVehicle_C_HornFinishCooldown_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.EnterVehicle"));
		
		ABP_ParentVehicle_C_EnterVehicle_Params params {};
		params.Pawn = Pawn;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.ReceiveTick"));
		
		ABP_ParentVehicle_C_ReceiveTick_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2"));
		
		ABP_ParentVehicle_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1"));
		
		ABP_ParentVehicle_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.ActorSaved"));
		
		ABP_ParentVehicle_C_ActorSaved_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.ActorPreSave"));
		
		ABP_ParentVehicle_C_ActorPreSave_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.StartCamTransition"));
		
		ABP_ParentVehicle_C_StartCamTransition_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1"));
		
		ABP_ParentVehicle_C_InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.ExitVehicle"));
		
		ABP_ParentVehicle_C_ExitVehicle_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.Yeet"));
		
		ABP_ParentVehicle_C_Yeet_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MouseUp_K2Node_InputAxisEvent_5"));
		
		ABP_ParentVehicle_C_InpAxisEvt_MouseUp_K2Node_InputAxisEvent_5_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MouseRight_K2Node_InputAxisEvent_6"));
		
		ABP_ParentVehicle_C_InpAxisEvt_MouseRight_K2Node_InputAxisEvent_6_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.ActorLoaded"));
		
		ABP_ParentVehicle_C_ActorLoaded_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_Accelerate_K2Node_InputAxisEvent_3"));
		
		ABP_ParentVehicle_C_InpAxisEvt_Accelerate_K2Node_InputAxisEvent_3_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.FOVChanged"));
		
		ABP_ParentVehicle_C_FOVChanged_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.BndEvt__BP_ParentVehicle_RefuelBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature"));
		
		ABP_ParentVehicle_C_BndEvt__BP_ParentVehicle_RefuelBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.FuelVisualHeight
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::FuelVisualHeight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.FuelVisualHeight"));
		
		ABP_ParentVehicle_C_FuelVisualHeight_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.Loaded"));
		
		ABP_ParentVehicle_C_Loaded_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_Highlight"));
		
		ABP_ParentVehicle_C_BPI_Highlight_Params params {};
		params.Controller = Controller;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_Unhighlight"));
		
		ABP_ParentVehicle_C_BPI_Unhighlight_Params params {};
		params.Controller = Controller;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentVehicle.BP_ParentVehicle_C.ExecuteUbergraph_BP_ParentVehicle"));
		
		ABP_ParentVehicle_C_ExecuteUbergraph_BP_ParentVehicle_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ParentVehicle.BP_ParentVehicle_C"));
		return ptr;
	}

}


