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
	 * 		Name   -> Function AC_Explosive.AC_Explosive_C.GetRandomSpaceInRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Explosive_C::GetRandomSpaceInRadius(struct FVector* Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AC_Explosive.AC_Explosive_C.GetRandomSpaceInRadius");
		
		struct
		{
			struct FVector                                     Location;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Explosive.AC_Explosive_C.TraceForVoxelWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_HydroVoxelWorld_C*                       VoxWorld                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Explosive_C::TraceForVoxelWorld(class ABP_HydroVoxelWorld_C** VoxWorld)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AC_Explosive.AC_Explosive_C.TraceForVoxelWorld");
		
		struct
		{
			class ABP_HydroVoxelWorld_C*                       VoxWorld;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VoxWorld != nullptr)
			*VoxWorld = params.VoxWorld;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Explosive.AC_Explosive_C.CreateHoles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Explosive_C::CreateHoles(int32_t Amount)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AC_Explosive.AC_Explosive_C.CreateHoles");
		
		struct
		{
			int32_t                                            Amount;
		} params;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Explosive.AC_Explosive_C.FindOverlappingActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABP_ParentItem_C*>                    Items                                                      (Parm, OutParm)
	 */
	void UAC_Explosive_C::FindOverlappingActors(TArray<class ABP_ParentItem_C*>* Items)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AC_Explosive.AC_Explosive_C.FindOverlappingActors");
		
		struct
		{
			TArray<class ABP_ParentItem_C*>                    Items;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Explosive.AC_Explosive_C.SpawnScrap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Explosive_C::SpawnScrap(const struct FVector& Location, float Size)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AC_Explosive.AC_Explosive_C.SpawnScrap");
		
		struct
		{
			struct FVector                                     Location;
			float                                              Size;
		} params;
		params.Location = Location;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Explosive.AC_Explosive_C.CheckOverlaps
	 * 		Flags  -> ()
	 */
	void UAC_Explosive_C::CheckOverlaps()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AC_Explosive.AC_Explosive_C.CheckOverlaps");
		
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
	 * 		Name   -> Function AC_Explosive.AC_Explosive_C.LoopForItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Explosive_C::LoopForItems(class AActor* Object)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AC_Explosive.AC_Explosive_C.LoopForItems");
		
		struct
		{
			class AActor*                                      Object;
		} params;
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Explosive.AC_Explosive_C.Explode
	 * 		Flags  -> ()
	 */
	void UAC_Explosive_C::Explode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AC_Explosive.AC_Explosive_C.Explode");
		
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
	 * 		Name   -> Function AC_Explosive.AC_Explosive_C.ExecuteUbergraph_AC_Explosive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Explosive_C::ExecuteUbergraph_AC_Explosive(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AC_Explosive.AC_Explosive_C.ExecuteUbergraph_AC_Explosive");
		
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
	 * 		Name   -> PredefindFunction UAC_Explosive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAC_Explosive_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AC_Explosive.AC_Explosive_C");
		return ptr;
	}

}


