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
	 * 		Name   -> Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              Actors                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAnimSharingStateInstance::GetInstancedActors(TArray<class AActor*>* Actors)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors");
		
		struct
		{
			TArray<class AActor*>                              Actors;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actors != nullptr)
			*Actors = params.Actors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimSharingStateInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimSharingStateInstance::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationSharing.AnimSharingStateInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimSharingTransitionInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimSharingTransitionInstance::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationSharing.AnimSharingTransitionInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimSharingAdditiveInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimSharingAdditiveInstance::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationSharing.AnimSharingAdditiveInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimSharingInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimSharingInstance::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationSharing.AnimSharingInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeleton*                                   SharingSkeleton                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimationSharingManager::RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP");
		
		struct
		{
			class AActor*                                      InActor;
			class USkeleton*                                   SharingSkeleton;
		} params;
		params.InActor = InActor;
		params.SharingSkeleton = SharingSkeleton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAnimationSharingManager* UAnimationSharingManager::GetAnimationSharingManager(class UObject* WorldContextObject)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimationSharingSetup*                      Setup                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAnimationSharingManager::CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UAnimationSharingSetup*                      Setup;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Setup = Setup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
	 * 		Flags  -> ()
	 */
	bool UAnimationSharingManager::AnimationSharingEnabled()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled");
		
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
	 * 		Name   -> PredefindFunction UAnimationSharingManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationSharingManager::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimationSharingSetup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationSharingSetup::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingSetup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutState                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      CurrentState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      OnDemandState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShouldProcess                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimationSharingStateProcessor::ProcessActorState(int32_t* OutState, class AActor* InActor, unsigned char CurrentState, unsigned char OnDemandState, bool* bShouldProcess)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState");
		
		struct
		{
			int32_t                                            OutState;
			class AActor*                                      InActor;
			unsigned char                                      CurrentState;
			unsigned char                                      OnDemandState;
			bool                                               bShouldProcess;
		} params;
		params.InActor = InActor;
		params.CurrentState = CurrentState;
		params.OnDemandState = OnDemandState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutState != nullptr)
			*OutState = params.OutState;
		if (bShouldProcess != nullptr)
			*bShouldProcess = params.bShouldProcess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
	 * 		Flags  -> ()
	 */
	class UEnum* UAnimationSharingStateProcessor::GetAnimationStateEnum()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum");
		
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
	 * 		Name   -> PredefindFunction UAnimationSharingStateProcessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationSharingStateProcessor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingStateProcessor");
		return ptr;
	}

}


