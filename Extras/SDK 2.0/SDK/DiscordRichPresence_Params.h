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
	 * Function DiscordRichPresence.DiscordInterface.TickDiscord
	 */
	struct UDiscordInterface_TickDiscord_Params
	{
	};

	/**
	 * Function DiscordRichPresence.DiscordInterface.ShutdownDiscord
	 */
	struct UDiscordInterface_ShutdownDiscord_Params
	{
	};

	/**
	 * Function DiscordRichPresence.DiscordInterface.SetActivity
	 */
	struct UDiscordInterface_SetActivity_Params
	{
	public:
		struct FDiscordActivityInfo                                Activity;                                                // 0x0000(0x00A8)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function DiscordRichPresence.DiscordInterface.RegisterApplicationSteam
	 */
	struct UDiscordInterface_RegisterApplicationSteam_Params
	{
	};

	/**
	 * Function DiscordRichPresence.DiscordInterface.RegisterApplication
	 */
	struct UDiscordInterface_RegisterApplication_Params
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function DiscordRichPresence.DiscordInterface.InitializeDiscord
	 */
	struct UDiscordInterface_InitializeDiscord_Params
	{
	public:
		class FString                                              ClientId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function DiscordRichPresence.DiscordInterface.ClearActivity
	 */
	struct UDiscordInterface_ClearActivity_Params
	{
	};

	/**
	 * Function DiscordRichPresence.DiscordInterface.BindOnUserSpectate
	 */
	struct UDiscordInterface_BindOnUserSpectate_Params
	{
	public:
		class FScriptDelegate                                      OnDiscordUserSpectate;                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function DiscordRichPresence.DiscordInterface.BindOnUserJoinRequest
	 */
	struct UDiscordInterface_BindOnUserJoinRequest_Params
	{
	public:
		class FScriptDelegate                                      OnDiscordUserJoinRequest;                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function DiscordRichPresence.DiscordInterface.BindOnUserJoin
	 */
	struct UDiscordInterface_BindOnUserJoin_Params
	{
	public:
		class FScriptDelegate                                      OnDiscordUserJoin;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function DiscordRichPresence.DiscordInterface.BindOnUserInvite
	 */
	struct UDiscordInterface_BindOnUserInvite_Params
	{
	public:
		class FScriptDelegate                                      OnDiscordInvite;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function DiscordRichPresence.DiscordInterface.BindEvents
	 */
	struct UDiscordInterface_BindEvents_Params
	{
	public:
		class FScriptDelegate                                      OnDiscordUserJoin;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnDiscordUserSpectate;                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnDiscordUserJoinRequest;                                // 0x0020(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnDiscordInvite;                                         // 0x0030(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
