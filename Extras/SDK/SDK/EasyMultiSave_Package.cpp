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
	 * 		Name   -> Function EasyMultiSave.EMSActorSaveInterface.ComponentsToSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     Components                                                 (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UEMSActorSaveInterface::ComponentsToSave(TArray<class UActorComponent*>* Components)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSActorSaveInterface.ComponentsToSave");
		
		struct
		{
			TArray<class UActorComponent*>                     Components;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Components != nullptr)
			*Components = params.Components;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSActorSaveInterface.ActorSaved
	 * 		Flags  -> ()
	 */
	void UEMSActorSaveInterface::ActorSaved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSActorSaveInterface.ActorSaved");
		
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
	 * 		Name   -> Function EasyMultiSave.EMSActorSaveInterface.ActorPreSave
	 * 		Flags  -> ()
	 */
	void UEMSActorSaveInterface::ActorPreSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSActorSaveInterface.ActorPreSave");
		
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
	 * 		Name   -> Function EasyMultiSave.EMSActorSaveInterface.ActorLoaded
	 * 		Flags  -> ()
	 */
	void UEMSActorSaveInterface::ActorLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSActorSaveInterface.ActorLoaded");
		
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
	 * 		Name   -> PredefindFunction UEMSActorSaveInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEMSActorSaveInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyMultiSave.EMSActorSaveInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSAsyncLoadGame.AsyncLoadActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFullReload                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEMSAsyncLoadGame* UEMSAsyncLoadGame::AsyncLoadActors(class UObject* WorldContextObject, int32_t Data, bool bFullReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSAsyncLoadGame.AsyncLoadActors");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            Data;
			bool                                               bFullReload;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Data = Data;
		params.bFullReload = bFullReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEMSAsyncLoadGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEMSAsyncLoadGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyMultiSave.EMSAsyncLoadGame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSAsyncSaveGame.AsyncSaveActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEMSAsyncSaveGame* UEMSAsyncSaveGame::AsyncSaveActors(class UObject* WorldContextObject, int32_t Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSAsyncSaveGame.AsyncSaveActors");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            Data;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEMSAsyncSaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEMSAsyncSaveGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyMultiSave.EMSAsyncSaveGame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSAsyncWait.AsyncWaitForOperation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEMSAsyncWait* UEMSAsyncWait::AsyncWaitForOperation(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSAsyncWait.AsyncWaitForOperation");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEMSAsyncWait.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEMSAsyncWait::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyMultiSave.EMSAsyncWait");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEMSCustomSaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEMSCustomSaveGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyMultiSave.EMSCustomSaveGame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.SetCurrentSaveUserName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Username                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEMSFunctionLibrary::SetCurrentSaveUserName(class UObject* WorldContextObject, const class FString& Username)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.SetCurrentSaveUserName");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Username;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Username = Username;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.SetCurrentSaveGameName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SaveGameName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEMSFunctionLibrary::SetCurrentSaveGameName(class UObject* WorldContextObject, const class FString& SaveGameName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.SetCurrentSaveGameName");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      SaveGameName;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SaveGameName = SaveGameName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.SetActorSaveProperties
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSkipSave                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPersistent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSkipTransform                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEMSFunctionLibrary::SetActorSaveProperties(class UObject* WorldContextObject, bool bSkipSave, bool bPersistent, bool bSkipTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.SetActorSaveProperties");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			bool                                               bSkipSave;
			bool                                               bPersistent;
			bool                                               bSkipTransform;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.bSkipSave = bSkipSave;
		params.bPersistent = bPersistent;
		params.bSkipTransform = bSkipTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.SavePersistentObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEMSFunctionLibrary::SavePersistentObject(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.SavePersistentObject");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.SaveLocalProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEMSFunctionLibrary::SaveLocalProfile(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.SaveLocalProfile");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.SaveCustom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UEMSCustomSaveGame*                          SaveGame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEMSFunctionLibrary::SaveCustom(class UObject* WorldContextObject, class UEMSCustomSaveGame* SaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.SaveCustom");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UEMSCustomSaveGame*                          SaveGame;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SaveGame = SaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.IsSavingOrLoading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEMSFunctionLibrary::IsSavingOrLoading(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.IsSavingOrLoading");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.ImportSaveThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SaveGameName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UEMSFunctionLibrary::ImportSaveThumbnail(class UObject* WorldContextObject, const class FString& SaveGameName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.ImportSaveThumbnail");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      SaveGameName;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SaveGameName = SaveGameName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.GetSortedSaveSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UEMSFunctionLibrary::GetSortedSaveSlots(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.GetSortedSaveSlots");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.GetSlotInfoSaveGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SaveGameName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEMSInfoSaveGame* UEMSFunctionLibrary::GetSlotInfoSaveGame(class UObject* WorldContextObject, class FString* SaveGameName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.GetSlotInfoSaveGame");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      SaveGameName;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SaveGameName != nullptr)
			*SaveGameName = params.SaveGameName;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.GetPersistentSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEMSPersistentSaveGame* UEMSFunctionLibrary::GetPersistentSave(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.GetPersistentSave");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.GetNamedSlotInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SaveGameName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEMSInfoSaveGame* UEMSFunctionLibrary::GetNamedSlotInfo(class UObject* WorldContextObject, const class FString& SaveGameName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.GetNamedSlotInfo");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      SaveGameName;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SaveGameName = SaveGameName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.GetLocalProfileSaveGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEMSProfileSaveGame* UEMSFunctionLibrary::GetLocalProfileSaveGame(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.GetLocalProfileSaveGame");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.GetCustomSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      SaveGameClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEMSCustomSaveGame* UEMSFunctionLibrary::GetCustomSave(class UObject* WorldContextObject, class UClass* SaveGameClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.GetCustomSave");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UClass*                                      SaveGameClass;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SaveGameClass = SaveGameClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.GetAllSaveUsers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UEMSFunctionLibrary::GetAllSaveUsers(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.GetAllSaveUsers");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.ExportSaveThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTextureRenderTarget2D*                      TextureRenderTarget                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SaveGameName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEMSFunctionLibrary::ExportSaveThumbnail(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, const class FString& SaveGameName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.ExportSaveThumbnail");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UTextureRenderTarget2D*                      TextureRenderTarget;
			class FString                                      SaveGameName;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.TextureRenderTarget = TextureRenderTarget;
		params.SaveGameName = SaveGameName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.DoesSaveSlotExist
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SaveGameName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEMSFunctionLibrary::DoesSaveSlotExist(class UObject* WorldContextObject, const class FString& SaveGameName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.DoesSaveSlotExist");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      SaveGameName;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SaveGameName = SaveGameName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.DeleteSaveUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Username                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEMSFunctionLibrary::DeleteSaveUser(class UObject* WorldContextObject, const class FString& Username)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.DeleteSaveUser");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Username;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Username = Username;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.DeleteLocalProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEMSFunctionLibrary::DeleteLocalProfile(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.DeleteLocalProfile");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.DeleteCustomSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UEMSCustomSaveGame*                          SaveGame                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEMSFunctionLibrary::DeleteCustomSave(class UObject* WorldContextObject, class UEMSCustomSaveGame* SaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.DeleteCustomSave");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UEMSCustomSaveGame*                          SaveGame;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SaveGame = SaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSFunctionLibrary.DeleteAllSaveDataForSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SaveGameName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEMSFunctionLibrary::DeleteAllSaveDataForSlot(class UObject* WorldContextObject, const class FString& SaveGameName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSFunctionLibrary.DeleteAllSaveDataForSlot");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      SaveGameName;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SaveGameName = SaveGameName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEMSFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEMSFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyMultiSave.EMSFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEMSInfoSaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEMSInfoSaveGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyMultiSave.EMSInfoSaveGame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EasyMultiSave.EMSObject.OuterActorEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEMSObject::OuterActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyMultiSave.EMSObject.OuterActorEndPlay");
		
		struct
		{
			class AActor*                                      Actor;
			EEndPlayReason                                     EndPlayReason;
		} params;
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEMSObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEMSObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyMultiSave.EMSObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEMSPersistentSaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEMSPersistentSaveGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyMultiSave.EMSPersistentSaveGame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEMSPluginSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEMSPluginSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyMultiSave.EMSPluginSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEMSProfileSaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEMSProfileSaveGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyMultiSave.EMSProfileSaveGame");
		return ptr;
	}

}


