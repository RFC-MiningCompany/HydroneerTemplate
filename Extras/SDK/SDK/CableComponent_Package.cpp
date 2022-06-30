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
	 * 		Name   -> PredefindFunction ACableActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACableActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CableComponent.CableActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CableComponent.CableComponent.SetAttachEndToComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCableComponent::SetAttachEndToComponent(class USceneComponent* Component, const class FName& SocketName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.SetAttachEndToComponent");
		
		struct
		{
			class USceneComponent*                             Component;
			class FName                                        SocketName;
		} params;
		params.Component = Component;
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CableComponent.CableComponent.SetAttachEndTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ComponentProperty                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCableComponent::SetAttachEndTo(class AActor* Actor, const class FName& ComponentProperty, const class FName& SocketName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.SetAttachEndTo");
		
		struct
		{
			class AActor*                                      Actor;
			class FName                                        ComponentProperty;
			class FName                                        SocketName;
		} params;
		params.Actor = Actor;
		params.ComponentProperty = ComponentProperty;
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CableComponent.CableComponent.GetCableParticleLocations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             Locations                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UCableComponent::GetCableParticleLocations(TArray<struct FVector>* Locations)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetCableParticleLocations");
		
		struct
		{
			TArray<struct FVector>                             Locations;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Locations != nullptr)
			*Locations = params.Locations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CableComponent.CableComponent.GetAttachedComponent
	 * 		Flags  -> ()
	 */
	class USceneComponent* UCableComponent::GetAttachedComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedComponent");
		
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
	 * 		Name   -> Function CableComponent.CableComponent.GetAttachedActor
	 * 		Flags  -> ()
	 */
	class AActor* UCableComponent::GetAttachedActor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedActor");
		
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
	 * 		Name   -> PredefindFunction UCableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCableComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CableComponent.CableComponent");
		return ptr;
	}

}


