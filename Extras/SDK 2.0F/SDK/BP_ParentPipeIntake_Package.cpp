/**
 * Name: Hydroneer
 * Version: 2.0F
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.TrySetDevMaterial
	 * 		Flags  -> ()
	 */
	void ABP_ParentPipeIntake_C::TrySetDevMaterial()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.TrySetDevMaterial"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.CreateProxyItem
	 * 		Flags  -> ()
	 */
	void ABP_ParentPipeIntake_C::CreateProxyItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.CreateProxyItem"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ParentPipeIntake_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.UserConstructionScript"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.OverrideLoaded
	 * 		Flags  -> ()
	 */
	void ABP_ParentPipeIntake_C::OverrideLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.OverrideLoaded"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.WaterFlow
	 * 		Flags  -> ()
	 */
	void ABP_ParentPipeIntake_C::WaterFlow()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.WaterFlow"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.OverridePickedup
	 * 		Flags  -> ()
	 */
	void ABP_ParentPipeIntake_C::OverridePickedup()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.OverridePickedup"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.OverridePlacedDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentPipeIntake_C::OverridePlacedDown(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.OverridePlacedDown"));
		
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.ExecuteUbergraph_BP_ParentPipeIntake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentPipeIntake_C::ExecuteUbergraph_BP_ParentPipeIntake(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPipeIntake.BP_ParentPipeIntake_C.ExecuteUbergraph_BP_ParentPipeIntake"));
		
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ParentPipeIntake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentPipeIntake_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ParentPipeIntake.BP_ParentPipeIntake_C"));
		return ptr;
	}

}


