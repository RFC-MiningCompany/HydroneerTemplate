/**
 * Name: Hydroneer
 * Version: 2.0R
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.CanAddPlayer?
	 * 		Flags  -> ()
	 */
	bool AGM_Hydroneer_C::CanAddPlayer_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.CanAddPlayer?");
		
		AGM_Hydroneer_C_CanAddPlayer__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.SpawnDefaultPawnAtTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  SpawnTransform                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	class APawn* AGM_Hydroneer_C::SpawnDefaultPawnAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.SpawnDefaultPawnAtTransform");
		
		AGM_Hydroneer_C_SpawnDefaultPawnAtTransform_Params params {};
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.SpawnHydroguy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, UObjectWrapper)
	 * 		class AController*                                 PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class ABP_Character_HydroGuy_C* AGM_Hydroneer_C::SpawnHydroguy(const struct FTransform& SpawnTransform, class AController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.SpawnHydroguy");
		
		AGM_Hydroneer_C_SpawnHydroguy_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.SpawnDefaultPawnFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      StartSpot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class APawn* AGM_Hydroneer_C::SpawnDefaultPawnFor(class AController* NewPlayer, class AActor* StartSpot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.SpawnDefaultPawnFor");
		
		AGM_Hydroneer_C_SpawnDefaultPawnFor_Params params {};
		params.NewPlayer = NewPlayer;
		params.StartSpot = StartSpot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.UpdateMPC_Highlight
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::UpdateMPC_Highlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.UpdateMPC_Highlight");
		
		AGM_Hydroneer_C_UpdateMPC_Highlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.SpawnInitialItems
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::SpawnInitialItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.SpawnInitialItems");
		
		AGM_Hydroneer_C_SpawnInitialItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.Try Load Creative Mode
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::Try_Load_Creative_Mode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.Try Load Creative Mode");
		
		AGM_Hydroneer_C_Try_Load_Creative_Mode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.AddDebugPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Add_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGM_Hydroneer_C::AddDebugPlayer(bool Add_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.AddDebugPlayer");
		
		AGM_Hydroneer_C_AddDebugPlayer_Params params {};
		params.Add_ = Add_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.RemovePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamRemotePlaySessionDisconnected         Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void AGM_Hydroneer_C::RemovePlayer(const struct FSteamRemotePlaySessionDisconnected& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.RemovePlayer");
		
		AGM_Hydroneer_C_RemovePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.RemoveLocalPlayer
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::RemoveLocalPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.RemoveLocalPlayer");
		
		AGM_Hydroneer_C_RemoveLocalPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.AddLocalPlayer
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::AddLocalPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.AddLocalPlayer");
		
		AGM_Hydroneer_C_AddLocalPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.AddRemotePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamRemotePlaySessionConnected            Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void AGM_Hydroneer_C::AddRemotePlayer(const struct FSteamRemotePlaySessionConnected& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.AddRemotePlayer");
		
		AGM_Hydroneer_C_AddRemotePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.AddPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamRemotePlaySessionConnected            Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               isRemote                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_GameController_C*                        PlayerController                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AGM_Hydroneer_C::AddPlayer(const struct FSteamRemotePlaySessionConnected& Data, bool isRemote, class ABP_GameController_C** PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.AddPlayer");
		
		AGM_Hydroneer_C_AddPlayer_Params params {};
		params.isRemote = isRemote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerController != nullptr)
			*PlayerController = params.PlayerController;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.MultiplayerStart
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::MultiplayerStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.MultiplayerStart");
		
		AGM_Hydroneer_C_MultiplayerStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.InitGameplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseCameraLerp_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGM_Hydroneer_C::InitGameplay(bool UseCameraLerp_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.InitGameplay");
		
		AGM_Hydroneer_C_InitGameplay_Params params {};
		params.UseCameraLerp_ = UseCameraLerp_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.InitMainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SkipMainMenu_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGM_Hydroneer_C::InitMainMenu(bool SkipMainMenu_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.InitMainMenu");
		
		AGM_Hydroneer_C_InitMainMenu_Params params {};
		params.SkipMainMenu_ = SkipMainMenu_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.OnCompleted_04443C294CDB96DED26005BF09499B5C
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::OnCompleted_04443C294CDB96DED26005BF09499B5C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.OnCompleted_04443C294CDB96DED26005BF09499B5C");
		
		AGM_Hydroneer_C_OnCompleted_04443C294CDB96DED26005BF09499B5C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.OnCompleted_3F15BCF84DC8092F8F59C584D5404462
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::OnCompleted_3F15BCF84DC8092F8F59C584D5404462()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.OnCompleted_3F15BCF84DC8092F8F59C584D5404462");
		
		AGM_Hydroneer_C_OnCompleted_3F15BCF84DC8092F8F59C584D5404462_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.ContinueGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Creative_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CloudSaving_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGM_Hydroneer_C::ContinueGame(bool Creative_, bool CloudSaving_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.ContinueGame");
		
		AGM_Hydroneer_C_ContinueGame_Params params {};
		params.Creative_ = Creative_;
		params.CloudSaving_ = CloudSaving_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.NewGame
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::NewGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.NewGame");
		
		AGM_Hydroneer_C_NewGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.DevNewGame
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::DevNewGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.DevNewGame");
		
		AGM_Hydroneer_C_DevNewGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.ReceiveBeginPlay");
		
		AGM_Hydroneer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.ExecuteUbergraph_GM_Hydroneer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Hydroneer_C::ExecuteUbergraph_GM_Hydroneer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.ExecuteUbergraph_GM_Hydroneer");
		
		AGM_Hydroneer_C_ExecuteUbergraph_GM_Hydroneer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.OnPlayerRemoved__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::OnPlayerRemoved__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.OnPlayerRemoved__DelegateSignature");
		
		AGM_Hydroneer_C_OnPlayerRemoved__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.OnPlayerAdded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::OnPlayerAdded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.OnPlayerAdded__DelegateSignature");
		
		AGM_Hydroneer_C_OnPlayerAdded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AGM_Hydroneer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGM_Hydroneer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GM_Hydroneer.GM_Hydroneer_C");
		return ptr;
	}

}


