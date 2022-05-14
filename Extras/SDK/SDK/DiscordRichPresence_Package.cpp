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
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.TickDiscord
	 * 		Flags  -> ()
	 */
	void UDiscordInterface::TickDiscord()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.TickDiscord");
		
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
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.ShutdownDiscord
	 * 		Flags  -> ()
	 */
	void UDiscordInterface::ShutdownDiscord()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.ShutdownDiscord");
		
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
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.SetActivity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDiscordActivityInfo                        Activity                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	void UDiscordInterface::SetActivity(const struct FDiscordActivityInfo& Activity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.SetActivity");
		
		struct
		{
			struct FDiscordActivityInfo                        Activity;
		} params;
		params.Activity = Activity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.RegisterApplicationSteam
	 * 		Flags  -> ()
	 */
	void UDiscordInterface::RegisterApplicationSteam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.RegisterApplicationSteam");
		
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
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.RegisterApplication
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordInterface::RegisterApplication(const class FString& Command)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.RegisterApplication");
		
		struct
		{
			class FString                                      Command;
		} params;
		params.Command = Command;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.InitializeDiscord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ClientId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDiscordInterface::InitializeDiscord(const class FString& ClientId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.InitializeDiscord");
		
		struct
		{
			class FString                                      ClientId;
		} params;
		params.ClientId = ClientId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.ClearActivity
	 * 		Flags  -> ()
	 */
	void UDiscordInterface::ClearActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.ClearActivity");
		
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
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.BindOnUserSpectate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              OnDiscordUserSpectate                                      (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDiscordInterface::BindOnUserSpectate(const class FScriptDelegate& OnDiscordUserSpectate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.BindOnUserSpectate");
		
		struct
		{
			class FScriptDelegate                              OnDiscordUserSpectate;
		} params;
		params.OnDiscordUserSpectate = OnDiscordUserSpectate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.BindOnUserJoinRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              OnDiscordUserJoinRequest                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDiscordInterface::BindOnUserJoinRequest(const class FScriptDelegate& OnDiscordUserJoinRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.BindOnUserJoinRequest");
		
		struct
		{
			class FScriptDelegate                              OnDiscordUserJoinRequest;
		} params;
		params.OnDiscordUserJoinRequest = OnDiscordUserJoinRequest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.BindOnUserJoin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              OnDiscordUserJoin                                          (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDiscordInterface::BindOnUserJoin(const class FScriptDelegate& OnDiscordUserJoin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.BindOnUserJoin");
		
		struct
		{
			class FScriptDelegate                              OnDiscordUserJoin;
		} params;
		params.OnDiscordUserJoin = OnDiscordUserJoin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.BindOnUserInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              OnDiscordInvite                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDiscordInterface::BindOnUserInvite(const class FScriptDelegate& OnDiscordInvite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.BindOnUserInvite");
		
		struct
		{
			class FScriptDelegate                              OnDiscordInvite;
		} params;
		params.OnDiscordInvite = OnDiscordInvite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.BindEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              OnDiscordUserJoin                                          (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnDiscordUserSpectate                                      (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnDiscordUserJoinRequest                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnDiscordInvite                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDiscordInterface::BindEvents(const class FScriptDelegate& OnDiscordUserJoin, const class FScriptDelegate& OnDiscordUserSpectate, const class FScriptDelegate& OnDiscordUserJoinRequest, const class FScriptDelegate& OnDiscordInvite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.BindEvents");
		
		struct
		{
			class FScriptDelegate                              OnDiscordUserJoin;
			class FScriptDelegate                              OnDiscordUserSpectate;
			class FScriptDelegate                              OnDiscordUserJoinRequest;
			class FScriptDelegate                              OnDiscordInvite;
		} params;
		params.OnDiscordUserJoin = OnDiscordUserJoin;
		params.OnDiscordUserSpectate = OnDiscordUserSpectate;
		params.OnDiscordUserJoinRequest = OnDiscordUserJoinRequest;
		params.OnDiscordInvite = OnDiscordInvite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDiscordInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscordInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DiscordRichPresence.DiscordInterface");
		return ptr;
	}

}


