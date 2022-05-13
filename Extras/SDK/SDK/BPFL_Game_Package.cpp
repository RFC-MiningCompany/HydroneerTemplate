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
	 * 		Name   -> Function BPFL_Game.BPFL_Game_C.GetPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SessionID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      PlayerName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPFL_Game_C::GetPlayerName(int32_t SessionID, class UObject* __WorldContext, class FString* PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Game.BPFL_Game_C.GetPlayerName");
		
		struct
		{
			int32_t                                            SessionID;
			class UObject*                                     __WorldContext;
			class FString                                      PlayerName;
		} params;
		params.SessionID = SessionID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerName != nullptr)
			*PlayerName = params.PlayerName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Game.BPFL_Game_C.FindMetadata
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Version                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Title                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Description                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPFL_Game_C::FindMetadata(const class FString& Directory, class UObject* __WorldContext, class FString* Version, class FString* Title, class FString* Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Game.BPFL_Game_C.FindMetadata");
		
		struct
		{
			class FString                                      Directory;
			class UObject*                                     __WorldContext;
			class FString                                      Version;
			class FString                                      Title;
			class FString                                      Description;
		} params;
		params.Directory = Directory;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Version != nullptr)
			*Version = params.Version;
		if (Title != nullptr)
			*Title = params.Title;
		if (Description != nullptr)
			*Description = params.Description;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Game.BPFL_Game_C.GetAllAttachedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        StaticMesh                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              AttachedActors                                             (Parm, OutParm)
	 */
	void UBPFL_Game_C::GetAllAttachedActors(class UStaticMeshComponent* StaticMesh, class UObject* __WorldContext, TArray<class AActor*>* AttachedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Game.BPFL_Game_C.GetAllAttachedActors");
		
		struct
		{
			class UStaticMeshComponent*                        StaticMesh;
			class UObject*                                     __WorldContext;
			TArray<class AActor*>                              AttachedActors;
		} params;
		params.StaticMesh = StaticMesh;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttachedActors != nullptr)
			*AttachedActors = params.AttachedActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Game.BPFL_Game_C.GetSaveGameUserData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USaveGame_UserData_C*                        UserData                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UBPFL_Game_C::GetSaveGameUserData(class UObject* __WorldContext, class USaveGame_UserData_C** UserData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Game.BPFL_Game_C.GetSaveGameUserData");
		
		struct
		{
			class UObject*                                     __WorldContext;
			class USaveGame_UserData_C*                        UserData;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UserData != nullptr)
			*UserData = params.UserData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Game.BPFL_Game_C.GetBP_GameController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_GameController_C*                        Controller                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Game_C::GetBP_GameController(int32_t PlayerIndex, class UObject* __WorldContext, class ABP_GameController_C** Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Game.BPFL_Game_C.GetBP_GameController");
		
		struct
		{
			int32_t                                            PlayerIndex;
			class UObject*                                     __WorldContext;
			class ABP_GameController_C*                        Controller;
		} params;
		params.PlayerIndex = PlayerIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Game.BPFL_Game_C.GetBP_GameState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_GameState_C*                             GameState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Game_C::GetBP_GameState(class UObject* __WorldContext, class ABP_GameState_C** GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Game.BPFL_Game_C.GetBP_GameState");
		
		struct
		{
			class UObject*                                     __WorldContext;
			class ABP_GameState_C*                             GameState;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameState != nullptr)
			*GameState = params.GameState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Game.BPFL_Game_C.GetBP_GameInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_GameInstance_C*                          GameInstance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Game_C::GetBP_GameInstance(class UObject* __WorldContext, class UBP_GameInstance_C** GameInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Game.BPFL_Game_C.GetBP_GameInstance");
		
		struct
		{
			class UObject*                                     __WorldContext;
			class UBP_GameInstance_C*                          GameInstance;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameInstance != nullptr)
			*GameInstance = params.GameInstance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Game.BPFL_Game_C.GetGM_Hydroneer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGM_Hydroneer_C*                             GM_Hydroneer                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UBPFL_Game_C::GetGM_Hydroneer(class UObject* __WorldContext, class AGM_Hydroneer_C** GM_Hydroneer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Game.BPFL_Game_C.GetGM_Hydroneer");
		
		struct
		{
			class UObject*                                     __WorldContext;
			class AGM_Hydroneer_C*                             GM_Hydroneer;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GM_Hydroneer != nullptr)
			*GM_Hydroneer = params.GM_Hydroneer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBPFL_Game_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_Game_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_Game.BPFL_Game_C");
		return ptr;
	}

}


