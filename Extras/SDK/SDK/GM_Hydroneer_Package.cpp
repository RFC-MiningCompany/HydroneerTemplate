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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.CanAddPlayer?
	 * 		Flags  -> ()
	 */
	bool AGM_Hydroneer_C::CanAddPlayer_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.CanAddPlayer?");
		
		struct
		{
		} params;
		
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
		
		struct
		{
			class AController*                                 NewPlayer;
			struct FTransform                                  SpawnTransform;
		} params;
		params.NewPlayer = NewPlayer;
		params.SpawnTransform = SpawnTransform;
		
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
		
		struct
		{
			struct FTransform                                  SpawnTransform;
			class AController*                                 PlayerController;
		} params;
		params.SpawnTransform = SpawnTransform;
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
		
		struct
		{
			class AController*                                 NewPlayer;
			class AActor*                                      StartSpot;
		} params;
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.SpawnInitialItems
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::SpawnInitialItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.SpawnInitialItems");
		
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.Try Load Creative Mode
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::Try_Load_Creative_Mode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.Try Load Creative Mode");
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.RemoveLocalPlayer
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::RemoveLocalPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.RemoveLocalPlayer");
		
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.AddLocalPlayer
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::AddLocalPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.AddLocalPlayer");
		
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
		
		struct
		{
			struct FSteamRemotePlaySessionConnected            Data;
			bool                                               isRemote;
			class ABP_GameController_C*                        PlayerController;
		} params;
		params.Data = Data;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.OnCompleted_04443C294CDB96DED26005BF09499B5C
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::OnCompleted_04443C294CDB96DED26005BF09499B5C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.OnCompleted_04443C294CDB96DED26005BF09499B5C");
		
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.OnCompleted_3F15BCF84DC8092F8F59C584D5404462
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::OnCompleted_3F15BCF84DC8092F8F59C584D5404462()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.OnCompleted_3F15BCF84DC8092F8F59C584D5404462");
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.NewGame
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::NewGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.NewGame");
		
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.DevNewGame
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::DevNewGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.DevNewGame");
		
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.ReceiveBeginPlay");
		
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGM_Hydroneer_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.ReceiveTick");
		
		struct
		{
			float                                              DeltaSeconds;
		} params;
		params.DeltaSeconds = DeltaSeconds;
		
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.OnPlayerRemoved__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::OnPlayerRemoved__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.OnPlayerRemoved__DelegateSignature");
		
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
	 * 		Name   -> Function GM_Hydroneer.GM_Hydroneer_C.OnPlayerAdded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AGM_Hydroneer_C::OnPlayerAdded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GM_Hydroneer.GM_Hydroneer_C.OnPlayerAdded__DelegateSignature");
		
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


