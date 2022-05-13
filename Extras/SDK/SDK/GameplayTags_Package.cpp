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
	 * 		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       TagContainer                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBlueprintGameplayTagLibrary::RemoveGameplayTag(struct FGameplayTagContainer* TagContainer, const struct FGameplayTag& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag");
		
		struct
		{
			struct FGameplayTagContainer                       TagContainer;
			struct FGameplayTag                                Tag;
		} params;
		params.Tag = Tag;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag");
		
		struct
		{
			struct FGameplayTag                                A;
			class FString                                      B;
		} params;
		params.A = A;
		params.B = B;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer");
		
		struct
		{
			struct FGameplayTagContainer                       A;
			class FString                                      B;
		} params;
		params.A = A;
		params.B = B;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer");
		
		struct
		{
			struct FGameplayTagContainer                       A;
			struct FGameplayTagContainer                       B;
		} params;
		params.A = A;
		params.B = B;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag");
		
		struct
		{
			struct FGameplayTag                                A;
			struct FGameplayTag                                B;
		} params;
		params.A = A;
		params.B = B;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag");
		
		struct
		{
			struct FGameplayTag                                TagOne;
			struct FGameplayTag                                TagTwo;
			bool                                               bExactMatch;
		} params;
		params.TagOne = TagOne;
		params.TagTwo = TagTwo;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags");
		
		struct
		{
			struct FGameplayTag                                TagOne;
			struct FGameplayTagContainer                       OtherContainer;
			bool                                               bExactMatch;
		} params;
		params.TagOne = TagOne;
		params.OtherContainer = OtherContainer;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer");
		
		struct
		{
			struct FGameplayTagContainer                       Value;
		} params;
		params.Value = Value;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag");
		
		struct
		{
			struct FGameplayTag                                Value;
		} params;
		params.Value = Value;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery");
		
		struct
		{
			struct FGameplayTagQuery                           TagQuery;
		} params;
		params.TagQuery = TagQuery;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag");
		
		struct
		{
			struct FGameplayTag                                SingleTag;
		} params;
		params.SingleTag = SingleTag;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray");
		
		struct
		{
			TArray<struct FGameplayTag>                        GameplayTags;
		} params;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty");
		
		struct
		{
			struct FGameplayTagQuery                           TagQuery;
		} params;
		params.TagQuery = TagQuery;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid");
		
		struct
		{
			struct FGameplayTag                                GameplayTag;
		} params;
		params.GameplayTag = GameplayTag;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasTag");
		
		struct
		{
			struct FGameplayTagContainer                       TagContainer;
			struct FGameplayTag                                Tag;
			bool                                               bExactMatch;
		} params;
		params.TagContainer = TagContainer;
		params.Tag = Tag;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags");
		
		struct
		{
			struct FGameplayTagContainer                       TagContainer;
			struct FGameplayTagContainer                       OtherContainer;
			bool                                               bExactMatch;
		} params;
		params.TagContainer = TagContainer;
		params.OtherContainer = OtherContainer;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags");
		
		struct
		{
			struct FGameplayTagContainer                       TagContainer;
			struct FGameplayTagContainer                       OtherContainer;
			bool                                               bExactMatch;
		} params;
		params.TagContainer = TagContainer;
		params.OtherContainer = OtherContainer;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags");
		
		struct
		{
			struct FGameplayTagContainer                       OtherContainer;
		} params;
		params.OtherContainer = OtherContainer;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName");
		
		struct
		{
			struct FGameplayTag                                GameplayTag;
		} params;
		params.GameplayTag = GameplayTag;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer");
		
		struct
		{
			struct FGameplayTagContainer                       TagContainer;
		} params;
		params.TagContainer = TagContainer;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer");
		
		struct
		{
			struct FGameplayTagContainer                       TagContainer;
		} params;
		params.TagContainer = TagContainer;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag");
		
		struct
		{
			struct FGameplayTag                                GameplayTag;
		} params;
		params.GameplayTag = GameplayTag;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UClass*                                      ActorClass;
			struct FGameplayTagQuery                           GameplayTagQuery;
			TArray<class AActor*>                              OutActors;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		params.GameplayTagQuery = GameplayTagQuery;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer");
		
		struct
		{
			struct FGameplayTagContainer                       A;
			struct FGameplayTagContainer                       B;
		} params;
		params.A = A;
		params.B = B;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag");
		
		struct
		{
			struct FGameplayTag                                A;
			struct FGameplayTag                                B;
		} params;
		params.A = A;
		params.B = B;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag");
		
		struct
		{
			struct FGameplayTag                                Tag;
		} params;
		params.Tag = Tag;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery");
		
		struct
		{
			struct FGameplayTagContainer                       TagContainer;
			struct FGameplayTagQuery                           TagQuery;
		} params;
		params.TagContainer = TagContainer;
		params.TagQuery = TagQuery;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer");
		
		struct
		{
			struct FGameplayTagContainer                       GameplayTagContainer;
			TArray<struct FGameplayTag>                        GameplayTags;
		} params;
		params.GameplayTagContainer = GameplayTagContainer;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers");
		
		struct
		{
			struct FGameplayTagContainer                       InOutTagContainer;
			struct FGameplayTagContainer                       InTagContainer;
		} params;
		params.InTagContainer = InTagContainer;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag");
		
		struct
		{
			struct FGameplayTagContainer                       TagContainer;
			struct FGameplayTag                                Tag;
		} params;
		params.Tag = Tag;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.BlueprintGameplayTagLibrary");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag");
		
		struct
		{
			struct FGameplayTag                                TagToCheck;
		} params;
		params.TagToCheck = TagToCheck;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags");
		
		struct
		{
			struct FGameplayTagContainer                       TagContainer;
		} params;
		params.TagContainer = TagContainer;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags");
		
		struct
		{
			struct FGameplayTagContainer                       TagContainer;
		} params;
		params.TagContainer = TagContainer;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags");
		
		struct
		{
			struct FGameplayTagContainer                       TagContainer;
		} params;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.GameplayTagAssetInterface");
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQuery");
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression");
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch");
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch");
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch");
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch");
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch");
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch");
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.GameplayTagsManager");
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.GameplayTagsList");
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.RestrictedGameplayTagsList");
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.GameplayTagsSettings");
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayTags.GameplayTagsDeveloperSettings");
		return ptr;
	}

}


