#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GM_Hydroneer.GM_Hydroneer_C.SpawnInitialItems
	 */
	struct AGM_Hydroneer_C_SpawnInitialItems_Params
	{
	};

	/**
	 * Function GM_Hydroneer.GM_Hydroneer_C.Try Load Creative Mode
	 */
	struct AGM_Hydroneer_C_Try_Load_Creative_Mode_Params
	{
	};

	/**
	 * Function GM_Hydroneer.GM_Hydroneer_C.AddDebugPlayer
	 */
	struct AGM_Hydroneer_C_AddDebugPlayer_Params
	{
	public:
		bool                                                       Add_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GM_Hydroneer.GM_Hydroneer_C.RemovePlayer
	 */
	struct AGM_Hydroneer_C_RemovePlayer_Params
	{
	public:
		struct FSteamRemotePlaySessionDisconnected                 Data;                                                    // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

	};

	/**
	 * Function GM_Hydroneer.GM_Hydroneer_C.AddPlayer
	 */
	struct AGM_Hydroneer_C_AddPlayer_Params
	{
	public:
		struct FSteamRemotePlaySessionConnected                    Data;                                                    // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

	};

	/**
	 * Function GM_Hydroneer.GM_Hydroneer_C.MultiplayerStart
	 */
	struct AGM_Hydroneer_C_MultiplayerStart_Params
	{
	};

	/**
	 * Function GM_Hydroneer.GM_Hydroneer_C.InitGameplay
	 */
	struct AGM_Hydroneer_C_InitGameplay_Params
	{
	public:
		bool                                                       UseCameraLerp_;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GM_Hydroneer.GM_Hydroneer_C.InitMainMenu
	 */
	struct AGM_Hydroneer_C_InitMainMenu_Params
	{
	public:
		bool                                                       SkipMainMenu_;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GM_Hydroneer.GM_Hydroneer_C.OnCompleted_04443C294CDB96DED26005BF09499B5C
	 */
	struct AGM_Hydroneer_C_OnCompleted_04443C294CDB96DED26005BF09499B5C_Params
	{
	};

	/**
	 * Function GM_Hydroneer.GM_Hydroneer_C.OnCompleted_3F15BCF84DC8092F8F59C584D5404462
	 */
	struct AGM_Hydroneer_C_OnCompleted_3F15BCF84DC8092F8F59C584D5404462_Params
	{
	};

	/**
	 * Function GM_Hydroneer.GM_Hydroneer_C.ContinueGame
	 */
	struct AGM_Hydroneer_C_ContinueGame_Params
	{
	public:
		bool                                                       Creative_;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CloudSaving_;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GM_Hydroneer.GM_Hydroneer_C.NewGame
	 */
	struct AGM_Hydroneer_C_NewGame_Params
	{
	};

	/**
	 * Function GM_Hydroneer.GM_Hydroneer_C.DevNewGame
	 */
	struct AGM_Hydroneer_C_DevNewGame_Params
	{
	};

	/**
	 * Function GM_Hydroneer.GM_Hydroneer_C.ReceiveBeginPlay
	 */
	struct AGM_Hydroneer_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function GM_Hydroneer.GM_Hydroneer_C.ExecuteUbergraph_GM_Hydroneer
	 */
	struct AGM_Hydroneer_C_ExecuteUbergraph_GM_Hydroneer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
