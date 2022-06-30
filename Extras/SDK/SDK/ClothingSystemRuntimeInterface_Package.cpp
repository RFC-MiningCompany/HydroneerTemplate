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
	 * 		Name   -> PredefindFunction UClothConfigBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothConfigBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothConfigBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UClothingSimulationFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothingSimulationFactory::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingSimulationFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InStiffness                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UClothingSimulationInteractor::SetAnimDriveSpringStiffness(float InStiffness)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness");
		
		struct
		{
			float                                              InStiffness;
		} params;
		params.InStiffness = InStiffness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
	 * 		Flags  -> ()
	 */
	void UClothingSimulationInteractor::PhysicsAssetUpdated()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated");
		
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
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
	 * 		Flags  -> ()
	 */
	float UClothingSimulationInteractor::GetSimulationTime()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
	 * 		Flags  -> ()
	 */
	int32_t UClothingSimulationInteractor::GetNumSubsteps()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
	 * 		Flags  -> ()
	 */
	int32_t UClothingSimulationInteractor::GetNumKinematicParticles()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
	 * 		Flags  -> ()
	 */
	int32_t UClothingSimulationInteractor::GetNumIterations()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
	 * 		Flags  -> ()
	 */
	int32_t UClothingSimulationInteractor::GetNumDynamicParticles()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
	 * 		Flags  -> ()
	 */
	int32_t UClothingSimulationInteractor::GetNumCloths()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InVector                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UClothingSimulationInteractor::EnableGravityOverride(const struct FVector& InVector)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride");
		
		struct
		{
			struct FVector                                     InVector;
		} params;
		params.InVector = InVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
	 * 		Flags  -> ()
	 */
	void UClothingSimulationInteractor::DisableGravityOverride()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride");
		
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
	 * 		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
	 * 		Flags  -> ()
	 */
	void UClothingSimulationInteractor::ClothConfigUpdated()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated");
		
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
	 * 		Name   -> PredefindFunction UClothingSimulationInteractor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothingSimulationInteractor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UClothSharedSimConfigBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothSharedSimConfigBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UClothingAssetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothingAssetBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingAssetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UClothPhysicalMeshDataBase_Legacy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothPhysicalMeshDataBase_Legacy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy");
		return ptr;
	}

}


