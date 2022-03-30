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
	 * 		Name   -> Function BP_MasterworkDesign.BP_MasterworkDesign_C.InitDesign
	 * 		Flags  -> ()
	 */
	void ABP_MasterworkDesign_C::InitDesign()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterworkDesign.BP_MasterworkDesign_C.InitDesign"));
		
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
	 * 		Name   -> Function BP_MasterworkDesign.BP_MasterworkDesign_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_MasterworkDesign_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterworkDesign.BP_MasterworkDesign_C.UserConstructionScript"));
		
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
	 * 		Name   -> Function BP_MasterworkDesign.BP_MasterworkDesign_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_MasterworkDesign_C::ActorLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterworkDesign.BP_MasterworkDesign_C.ActorLoaded"));
		
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
	 * 		Name   -> Function BP_MasterworkDesign.BP_MasterworkDesign_C.ExecuteUbergraph_BP_MasterworkDesign
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MasterworkDesign_C::ExecuteUbergraph_BP_MasterworkDesign(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterworkDesign.BP_MasterworkDesign_C.ExecuteUbergraph_BP_MasterworkDesign"));
		
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
	 * 		Name   -> PredefindFunction ABP_MasterworkDesign_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MasterworkDesign_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_MasterworkDesign.BP_MasterworkDesign_C"));
		return ptr;
	}

}


