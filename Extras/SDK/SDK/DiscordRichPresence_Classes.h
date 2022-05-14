#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class DiscordRichPresence.DiscordInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDiscordInterface : public UBlueprintFunctionLibrary
	{
	public:
		void TickDiscord();
		void ShutdownDiscord();
		void SetActivity(const struct FDiscordActivityInfo& Activity);
		void RegisterApplicationSteam();
		void RegisterApplication(const class FString& Command);
		bool InitializeDiscord(const class FString& ClientId);
		void ClearActivity();
		void BindOnUserSpectate(const class FScriptDelegate& OnDiscordUserSpectate);
		void BindOnUserJoinRequest(const class FScriptDelegate& OnDiscordUserJoinRequest);
		void BindOnUserJoin(const class FScriptDelegate& OnDiscordUserJoin);
		void BindOnUserInvite(const class FScriptDelegate& OnDiscordInvite);
		void BindEvents(const class FScriptDelegate& OnDiscordUserJoin, const class FScriptDelegate& OnDiscordUserSpectate, const class FScriptDelegate& OnDiscordUserJoinRequest, const class FScriptDelegate& OnDiscordInvite);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
