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
	 * 		Name   -> Function Footstep_AnimNotify.Footstep_AnimNotify_C.FindFootstepType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      CharacterMesh                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFootstep_AnimNotify_C::FindFootstepType(class USkeletalMeshComponent* CharacterMesh, int32_t* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Footstep_AnimNotify.Footstep_AnimNotify_C.FindFootstepType");
		
		struct
		{
			class USkeletalMeshComponent*                      CharacterMesh;
			int32_t                                            Type;
		} params;
		params.CharacterMesh = CharacterMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Footstep_AnimNotify.Footstep_AnimNotify_C.Received_Notify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UFootstep_AnimNotify_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Footstep_AnimNotify.Footstep_AnimNotify_C.Received_Notify");
		
		struct
		{
			class USkeletalMeshComponent*                      MeshComp;
			class UAnimSequenceBase*                           Animation;
		} params;
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFootstep_AnimNotify_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFootstep_AnimNotify_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Footstep_AnimNotify.Footstep_AnimNotify_C");
		return ptr;
	}

}


