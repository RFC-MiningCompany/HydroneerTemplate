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
	 * 		Name   -> Function BP_ActorCapture.BP_ActorCapture_C.GetActorExtends
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Extent_Origin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Max_Extends                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ActorCapture_C::GetActorExtends(class ABP_ParentItem_C* Actor, struct FVector* Extent_Origin, float* Max_Extends)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ActorCapture.BP_ActorCapture_C.GetActorExtends");
		
		struct
		{
			class ABP_ParentItem_C*                            Actor;
			struct FVector                                     Extent_Origin;
			float                                              Max_Extends;
		} params;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Extent_Origin != nullptr)
			*Extent_Origin = params.Extent_Origin;
		if (Max_Extends != nullptr)
			*Max_Extends = params.Max_Extends;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ActorCapture.BP_ActorCapture_C.GetSnapshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstance*                           Snapshot                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ActorCapture_C::GetSnapshot(class UClass* Item, class UMaterialInstance** Snapshot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ActorCapture.BP_ActorCapture_C.GetSnapshot");
		
		struct
		{
			class UClass*                                      Item;
			class UMaterialInstance*                           Snapshot;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Snapshot != nullptr)
			*Snapshot = params.Snapshot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ActorCapture_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ActorCapture_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ActorCapture.BP_ActorCapture_C");
		return ptr;
	}

}


