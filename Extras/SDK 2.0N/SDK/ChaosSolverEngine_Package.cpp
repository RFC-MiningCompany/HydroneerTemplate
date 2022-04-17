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
	 * 		Name   -> PredefindFunction UChaosDebugDrawComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosDebugDrawComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class ChaosSolverEngine.ChaosDebugDrawComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UChaosEventListenerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosEventListenerComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class ChaosSolverEngine.ChaosEventListenerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UChaosGameplayEventDispatcher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosGameplayEventDispatcher::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class ChaosSolverEngine.ChaosGameplayEventDispatcher"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UChaosNotifyHandlerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosNotifyHandlerInterface::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class ChaosSolverEngine.ChaosNotifyHandlerInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FChaosPhysicsCollisionInfo                  PhysicsCollision                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FHitResult UChaosSolverEngineBlueprintLibrary::ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult"));
		
		UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UChaosSolverEngineBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosSolverEngineBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UChaosSolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosSolver::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class ChaosSolverEngine.ChaosSolver"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AChaosSolverActor::SetSolverActive(bool bActive)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive"));
		
		AChaosSolverActor_SetSolverActive_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
	 * 		Flags  -> ()
	 */
	void AChaosSolverActor::SetAsCurrentWorldSolver()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver"));
		
		AChaosSolverActor_SetAsCurrentWorldSolver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AChaosSolverActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChaosSolverActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class ChaosSolverEngine.ChaosSolverActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UChaosSolverSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosSolverSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class ChaosSolverEngine.ChaosSolverSettings"));
		return ptr;
	}

}


