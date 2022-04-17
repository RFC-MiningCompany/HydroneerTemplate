/**
 * Name: Hydroneer
 * Version: 2.0N
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
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBlueprintGameplayTagLibrary::RemoveGameplayTag(struct FGameplayTagContainer* TagContainer, const struct FGameplayTag& Tag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag"));
		
		UBlueprintGameplayTagLibrary_RemoveGameplayTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TagContainer != nullptr)
			*TagContainer = params.TagContainer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBlueprintGameplayTagLibrary::NotEqual_TagTag(const struct FGameplayTag& A, const class FString& B)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag"));
		
		UBlueprintGameplayTagLibrary_NotEqual_TagTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       A                                                          (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBlueprintGameplayTagLibrary::NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const class FString& B)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer"));
		
		UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer"));
		
		UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag"));
		
		UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                TagOne                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                TagTwo                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bExactMatch                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBlueprintGameplayTagLibrary::MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag"));
		
		UBlueprintGameplayTagLibrary_MatchesTag_Params params {};
		params.bExactMatch = bExactMatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                TagOne                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       OtherContainer                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bExactMatch                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBlueprintGameplayTagLibrary::MatchesAnyTags(const struct FGameplayTag& TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags"));
		
		UBlueprintGameplayTagLibrary_MatchesAnyTags_Params params {};
		params.bExactMatch = bExactMatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer"));
		
		UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Value                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayTag UBlueprintGameplayTagLibrary::MakeLiteralGameplayTag(const struct FGameplayTag& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag"));
		
		UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagQuery                           TagQuery                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	struct FGameplayTagQuery UBlueprintGameplayTagLibrary::MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery"));
		
		UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                SingleTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag"));
		
		UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGameplayTag>                        GameplayTags                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag> GameplayTags)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray"));
		
		UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Params params {};
		params.GameplayTags = GameplayTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagQuery                           TagQuery                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UBlueprintGameplayTagLibrary::IsTagQueryEmpty(const struct FGameplayTagQuery& TagQuery)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty"));
		
		UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBlueprintGameplayTagLibrary::IsGameplayTagValid(const struct FGameplayTag& GameplayTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid"));
		
		UBlueprintGameplayTagLibrary_IsGameplayTagValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bExactMatch                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBlueprintGameplayTagLibrary::HasTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.HasTag"));
		
		UBlueprintGameplayTagLibrary_HasTag_Params params {};
		params.bExactMatch = bExactMatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       OtherContainer                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bExactMatch                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBlueprintGameplayTagLibrary::HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags"));
		
		UBlueprintGameplayTagLibrary_HasAnyTags_Params params {};
		params.bExactMatch = bExactMatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       OtherContainer                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bExactMatch                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBlueprintGameplayTagLibrary::HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags"));
		
		UBlueprintGameplayTagLibrary_HasAllTags_Params params {};
		params.bExactMatch = bExactMatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       OtherContainer                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UBlueprintGameplayTagLibrary::HasAllMatchingGameplayTags(const struct FGameplayTagContainer& OtherContainer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags"));
		
		UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UBlueprintGameplayTagLibrary::GetTagName(const struct FGameplayTag& GameplayTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName"));
		
		UBlueprintGameplayTagLibrary_GetTagName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UBlueprintGameplayTagLibrary::GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer"));
		
		UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer"));
		
		UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag"));
		
		UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagQuery                           GameplayTagQuery                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              OutActors                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UBlueprintGameplayTagLibrary::GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, const struct FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery"));
		
		UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UBlueprintGameplayTagLibrary::EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer"));
		
		UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBlueprintGameplayTagLibrary::EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag"));
		
		UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag(const struct FGameplayTag& Tag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag"));
		
		UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagQuery                           TagQuery                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UBlueprintGameplayTagLibrary::DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery"));
		
		UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       GameplayTagContainer                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGameplayTag>                        GameplayTags                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer"));
		
		UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameplayTags != nullptr)
			*GameplayTags = params.GameplayTags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       InOutTagContainer                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       InTagContainer                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UBlueprintGameplayTagLibrary::AppendGameplayTagContainers(struct FGameplayTagContainer* InOutTagContainer, const struct FGameplayTagContainer& InTagContainer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers"));
		
		UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InOutTagContainer != nullptr)
			*InOutTagContainer = params.InOutTagContainer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlueprintGameplayTagLibrary::AddGameplayTag(struct FGameplayTagContainer* TagContainer, const struct FGameplayTag& Tag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag"));
		
		UBlueprintGameplayTagLibrary_AddGameplayTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TagContainer != nullptr)
			*TagContainer = params.TagContainer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlueprintGameplayTagLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlueprintGameplayTagLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.BlueprintGameplayTagLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                TagToCheck                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameplayTagAssetInterface::HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag"));
		
		UGameplayTagAssetInterface_HasMatchingGameplayTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UGameplayTagAssetInterface::HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags"));
		
		UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UGameplayTagAssetInterface::HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags"));
		
		UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UGameplayTagAssetInterface::GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags"));
		
		UGameplayTagAssetInterface_GetOwnedGameplayTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TagContainer != nullptr)
			*TagContainer = params.TagContainer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGameplayTagAssetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTagAssetInterface::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.GameplayTagAssetInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditableGameplayTagQuery.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableGameplayTagQuery::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.EditableGameplayTagQuery"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditableGameplayTagQueryExpression.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableGameplayTagQueryExpression::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.EditableGameplayTagQueryExpression"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditableGameplayTagQueryExpression_AnyTagsMatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditableGameplayTagQueryExpression_AllTagsMatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditableGameplayTagQueryExpression_NoTagsMatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditableGameplayTagQueryExpression_AnyExprMatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditableGameplayTagQueryExpression_AllExprMatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditableGameplayTagQueryExpression_NoExprMatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGameplayTagsManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTagsManager::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.GameplayTagsManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGameplayTagsList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTagsList::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.GameplayTagsList"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URestrictedGameplayTagsList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URestrictedGameplayTagsList::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.RestrictedGameplayTagsList"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGameplayTagsSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTagsSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.GameplayTagsSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGameplayTagsDeveloperSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTagsDeveloperSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.GameplayTagsDeveloperSettings"));
		return ptr;
	}

}


