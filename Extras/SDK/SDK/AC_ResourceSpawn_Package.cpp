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
	 * 		Name   -> Function AC_ResourceSpawn.AC_ResourceSpawn_C.BalanceResources
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DQA_In                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DQA_Out                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_ResourceSpawn_C::BalanceResources(float DQA_In, float* DQA_Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_ResourceSpawn.AC_ResourceSpawn_C.BalanceResources");
		
		struct
		{
			float                                              DQA_In;
			float                                              DQA_Out;
		} params;
		params.DQA_In = DQA_In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DQA_Out != nullptr)
			*DQA_Out = params.DQA_Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_ResourceSpawn.AC_ResourceSpawn_C.GetDirtDepth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AtLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_HydroVoxelWorld_C*                       VoxelWorld                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            QualityValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_ResourceSpawn_C::GetDirtDepth(const struct FVector& AtLocation, class ABP_HydroVoxelWorld_C* VoxelWorld, int32_t* QualityValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_ResourceSpawn.AC_ResourceSpawn_C.GetDirtDepth");
		
		struct
		{
			struct FVector                                     AtLocation;
			class ABP_HydroVoxelWorld_C*                       VoxelWorld;
			int32_t                                            QualityValue;
		} params;
		params.AtLocation = AtLocation;
		params.VoxelWorld = VoxelWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QualityValue != nullptr)
			*QualityValue = params.QualityValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_ResourceSpawn.AC_ResourceSpawn_C.SpawnActorDontUsethis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              Weight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Impulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_ResourceSpawn_C::SpawnActorDontUsethis(class UClass* Class, const struct FTransform& SpawnTransform, float Weight, float Impulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_ResourceSpawn.AC_ResourceSpawn_C.SpawnActorDontUsethis");
		
		struct
		{
			class UClass*                                      Class;
			struct FTransform                                  SpawnTransform;
			float                                              Weight;
			float                                              Impulse;
		} params;
		params.Class = Class;
		params.SpawnTransform = SpawnTransform;
		params.Weight = Weight;
		params.Impulse = Impulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_ResourceSpawn.AC_ResourceSpawn_C.CalcDQA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             VoxelWorld                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             DiggingComp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Z_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            DirtQualityAverage                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_ResourceSpawn_C::CalcDQA(class USceneComponent* VoxelWorld, class USceneComponent* DiggingComp, bool Z_, int32_t* DirtQualityAverage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_ResourceSpawn.AC_ResourceSpawn_C.CalcDQA");
		
		struct
		{
			class USceneComponent*                             VoxelWorld;
			class USceneComponent*                             DiggingComp;
			bool                                               Z_;
			int32_t                                            DirtQualityAverage;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.DiggingComp = DiggingComp;
		params.Z_ = Z_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DirtQualityAverage != nullptr)
			*DirtQualityAverage = params.DirtQualityAverage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_ResourceSpawn.AC_ResourceSpawn_C.SpawnFish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Spawn_Transform_Location                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Luck                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_CaughtFish_C*                            Fish                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_ResourceSpawn_C::SpawnFish(const struct FVector& Spawn_Transform_Location, int32_t Luck, class ABP_CaughtFish_C** Fish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_ResourceSpawn.AC_ResourceSpawn_C.SpawnFish");
		
		struct
		{
			struct FVector                                     Spawn_Transform_Location;
			int32_t                                            Luck;
			class ABP_CaughtFish_C*                            Fish;
		} params;
		params.Spawn_Transform_Location = Spawn_Transform_Location;
		params.Luck = Luck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Fish != nullptr)
			*Fish = params.Fish;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_ResourceSpawn.AC_ResourceSpawn_C.SpawnResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DirtLoads                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DirtQualityAverage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  SpawnTrans                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              Impulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_ResourceSpawn_C::SpawnResource(int32_t DirtLoads, int32_t DirtQualityAverage, const struct FTransform& SpawnTrans, float Impulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_ResourceSpawn.AC_ResourceSpawn_C.SpawnResource");
		
		struct
		{
			int32_t                                            DirtLoads;
			int32_t                                            DirtQualityAverage;
			struct FTransform                                  SpawnTrans;
			float                                              Impulse;
		} params;
		params.DirtLoads = DirtLoads;
		params.DirtQualityAverage = DirtQualityAverage;
		params.SpawnTrans = SpawnTrans;
		params.Impulse = Impulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAC_ResourceSpawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAC_ResourceSpawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AC_ResourceSpawn.AC_ResourceSpawn_C");
		return ptr;
	}

}


