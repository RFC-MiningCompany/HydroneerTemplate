﻿/**
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.UpdateMPC_Highlight
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::UpdateMPC_Highlight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GM_Hydroneer.GM_Hydroneer_C.UpdateMPC_Highlight"));
		
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.SpawnInitialItems
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::SpawnInitialItems()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GM_Hydroneer.GM_Hydroneer_C.SpawnInitialItems"));
		
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.Try Load Creative Mode
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::Try_Load_Creative_Mode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GM_Hydroneer.GM_Hydroneer_C.Try Load Creative Mode"));
		
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.AddDebugPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Add_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGM_Hydroneer_C::AddDebugPlayer(bool Add_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GM_Hydroneer.GM_Hydroneer_C.AddDebugPlayer"));
		
		struct
		{
			bool                                               Add_;
		} params;
		params.Add_ = Add_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.RemovePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamRemotePlaySessionDisconnected         Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void AGM_Hydroneer_C::RemovePlayer(const struct FSteamRemotePlaySessionDisconnected& Data)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GM_Hydroneer.GM_Hydroneer_C.RemovePlayer"));
		
		struct
		{
			struct FSteamRemotePlaySessionDisconnected         Data;
		} params;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.AddPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamRemotePlaySessionConnected            Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void AGM_Hydroneer_C::AddPlayer(const struct FSteamRemotePlaySessionConnected& Data)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GM_Hydroneer.GM_Hydroneer_C.AddPlayer"));
		
		struct
		{
			struct FSteamRemotePlaySessionConnected            Data;
		} params;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.MultiplayerStart
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::MultiplayerStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GM_Hydroneer.GM_Hydroneer_C.MultiplayerStart"));
		
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.InitGameplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseCameraLerp_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGM_Hydroneer_C::InitGameplay(bool UseCameraLerp_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GM_Hydroneer.GM_Hydroneer_C.InitGameplay"));
		
		struct
		{
			bool                                               UseCameraLerp_;
		} params;
		params.UseCameraLerp_ = UseCameraLerp_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.InitMainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SkipMainMenu_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGM_Hydroneer_C::InitMainMenu(bool SkipMainMenu_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GM_Hydroneer.GM_Hydroneer_C.InitMainMenu"));
		
		struct
		{
			bool                                               SkipMainMenu_;
		} params;
		params.SkipMainMenu_ = SkipMainMenu_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.OnCompleted_04443C294CDB96DED26005BF09499B5C
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::OnCompleted_04443C294CDB96DED26005BF09499B5C()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GM_Hydroneer.GM_Hydroneer_C.OnCompleted_04443C294CDB96DED26005BF09499B5C"));
		
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.OnCompleted_3F15BCF84DC8092F8F59C584D5404462
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::OnCompleted_3F15BCF84DC8092F8F59C584D5404462()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GM_Hydroneer.GM_Hydroneer_C.OnCompleted_3F15BCF84DC8092F8F59C584D5404462"));
		
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.ContinueGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Creative_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CloudSaving_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGM_Hydroneer_C::ContinueGame(bool Creative_, bool CloudSaving_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GM_Hydroneer.GM_Hydroneer_C.ContinueGame"));
		
		struct
		{
			bool                                               Creative_;
			bool                                               CloudSaving_;
		} params;
		params.Creative_ = Creative_;
		params.CloudSaving_ = CloudSaving_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.NewGame
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::NewGame()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GM_Hydroneer.GM_Hydroneer_C.NewGame"));
		
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.DevNewGame
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::DevNewGame()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GM_Hydroneer.GM_Hydroneer_C.DevNewGame"));
		
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GM_Hydroneer.GM_Hydroneer_C.ReceiveBeginPlay"));
		
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.ExecuteUbergraph_GM_Hydroneer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Hydroneer_C::ExecuteUbergraph_GM_Hydroneer(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GM_Hydroneer.GM_Hydroneer_C.ExecuteUbergraph_GM_Hydroneer"));
		
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
	 * 		Name   -> PredefindFunction AGM_Hydroneer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGM_Hydroneer_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass GM_Hydroneer.GM_Hydroneer_C"));
		return ptr;
	}

}


