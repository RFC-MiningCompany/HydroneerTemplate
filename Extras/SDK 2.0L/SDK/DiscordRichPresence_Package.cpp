/**
 * Name: Hydroneer
 * Version: 2.0L
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
		
		UDiscordInterface_TickDiscord_Params params {};
		
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
		
		UDiscordInterface_ShutdownDiscord_Params params {};
		
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
		
		UDiscordInterface_SetActivity_Params params {};
		
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
		
		UDiscordInterface_RegisterApplicationSteam_Params params {};
		
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
		
		UDiscordInterface_RegisterApplication_Params params {};
		
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
		
		UDiscordInterface_InitializeDiscord_Params params {};
		
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
		
		UDiscordInterface_ClearActivity_Params params {};
		
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
		
		UDiscordInterface_BindOnUserSpectate_Params params {};
		
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
		
		UDiscordInterface_BindOnUserJoinRequest_Params params {};
		
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
		
		UDiscordInterface_BindOnUserJoin_Params params {};
		
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
		
		UDiscordInterface_BindOnUserInvite_Params params {};
		
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
		
		UDiscordInterface_BindEvents_Params params {};
		
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


