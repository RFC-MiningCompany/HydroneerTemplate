/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * 		Name   -> PredefindFunction UBodySetupCore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBodySetupCore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysicsCore.BodySetupCore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UChaosPhysicalMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosPhysicalMaterial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysicsCore.ChaosPhysicalMaterial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPhysicalMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicalMaterial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysicsCore.PhysicalMaterial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPhysicalMaterialPropertyBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicalMaterialPropertyBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysicsCore.PhysicalMaterialPropertyBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPhysicsSettingsCore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicsSettingsCore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysicsCore.PhysicsSettingsCore");
		return ptr;
	}

}


