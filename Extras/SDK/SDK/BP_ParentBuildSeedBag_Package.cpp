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
	 * 		Name   -> Function BP_ParentBuildSeedBag.BP_ParentBuildSeedBag_C.OverridePlacedDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentBuildSeedBag_C::OverridePlacedDown(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentBuildSeedBag.BP_ParentBuildSeedBag_C.OverridePlacedDown");
		
		struct
		{
			class ABP_GameCharacter_C*                         Character;
		} params;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuildSeedBag.BP_ParentBuildSeedBag_C.ExecuteUbergraph_BP_ParentBuildSeedBag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentBuildSeedBag_C::ExecuteUbergraph_BP_ParentBuildSeedBag(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentBuildSeedBag.BP_ParentBuildSeedBag_C.ExecuteUbergraph_BP_ParentBuildSeedBag");
		
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
	 * 		Name   -> PredefindFunction ABP_ParentBuildSeedBag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentBuildSeedBag_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentBuildSeedBag.BP_ParentBuildSeedBag_C");
		return ptr;
	}

}


