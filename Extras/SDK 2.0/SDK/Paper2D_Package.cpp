/**
 * Name: Hydroneer
 * Version: 2.0
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
	 * 		Name   -> PredefindFunction UMaterialExpressionSpriteTextureSampler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionSpriteTextureSampler::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.MaterialExpressionSpriteTextureSampler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction APaperCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APaperCharacter::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperFlipbook::IsValidKeyFrameIndex(int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbook.GetTotalDuration
	 * 		Flags  -> ()
	 */
	float UPaperFlipbook::GetTotalDuration()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetTotalDuration");
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbook.GetSpriteAtTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bClampToEnds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPaperSprite* UPaperFlipbook::GetSpriteAtTime(float Time, bool bClampToEnds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtTime");
		
		struct
		{
			float                                              Time;
			bool                                               bClampToEnds;
		} params;
		params.Time = Time;
		params.bClampToEnds = bClampToEnds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbook.GetSpriteAtFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FrameIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPaperSprite* UPaperFlipbook::GetSpriteAtFrame(int32_t FrameIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtFrame");
		
		struct
		{
			int32_t                                            FrameIndex;
		} params;
		params.FrameIndex = FrameIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbook.GetNumKeyFrames
	 * 		Flags  -> ()
	 */
	int32_t UPaperFlipbook::GetNumKeyFrames()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumKeyFrames");
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbook.GetNumFrames
	 * 		Flags  -> ()
	 */
	int32_t UPaperFlipbook::GetNumFrames()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumFrames");
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bClampToEnds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPaperFlipbook::GetKeyFrameIndexAtTime(float Time, bool bClampToEnds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime");
		
		struct
		{
			float                                              Time;
			bool                                               bClampToEnds;
		} params;
		params.Time = Time;
		params.bClampToEnds = bClampToEnds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPaperFlipbook.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperFlipbook::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperFlipbook");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction APaperFlipbookActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APaperFlipbookActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperFlipbookActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.Stop
	 * 		Flags  -> ()
	 */
	void UPaperFlipbookComponent::Stop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Stop");
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.SetSpriteColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NewColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperFlipbookComponent::SetSpriteColor(const struct FLinearColor& NewColor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetSpriteColor");
		
		struct
		{
			struct FLinearColor                                NewColor;
		} params;
		params.NewColor = NewColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.SetPlayRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewRate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperFlipbookComponent::SetPlayRate(float NewRate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlayRate");
		
		struct
		{
			float                                              NewRate;
		} params;
		params.NewRate = NewRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewFramePosition                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFireEvents                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperFlipbookComponent::SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames");
		
		struct
		{
			int32_t                                            NewFramePosition;
			bool                                               bFireEvents;
		} params;
		params.NewFramePosition = NewFramePosition;
		params.bFireEvents = bFireEvents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewPosition                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFireEvents                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperFlipbookComponent::SetPlaybackPosition(float NewPosition, bool bFireEvents)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition");
		
		struct
		{
			float                                              NewPosition;
			bool                                               bFireEvents;
		} params;
		params.NewPosition = NewPosition;
		params.bFireEvents = bFireEvents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.SetNewTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperFlipbookComponent::SetNewTime(float NewTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetNewTime");
		
		struct
		{
			float                                              NewTime;
		} params;
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.SetLooping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewLooping                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperFlipbookComponent::SetLooping(bool bNewLooping)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetLooping");
		
		struct
		{
			bool                                               bNewLooping;
		} params;
		params.bNewLooping = bNewLooping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.SetFlipbook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperFlipbook*                              NewFlipbook                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperFlipbookComponent::SetFlipbook(class UPaperFlipbook* NewFlipbook)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetFlipbook");
		
		struct
		{
			class UPaperFlipbook*                              NewFlipbook;
		} params;
		params.NewFlipbook = NewFlipbook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
	 * 		Flags  -> ()
	 */
	void UPaperFlipbookComponent::ReverseFromEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.ReverseFromEnd");
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.Reverse
	 * 		Flags  -> ()
	 */
	void UPaperFlipbookComponent::Reverse()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Reverse");
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.PlayFromStart
	 * 		Flags  -> ()
	 */
	void UPaperFlipbookComponent::PlayFromStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.PlayFromStart");
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.Play
	 * 		Flags  -> ()
	 */
	void UPaperFlipbookComponent::Play()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Play");
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperFlipbook*                              OldFlipbook                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperFlipbookComponent::OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook");
		
		struct
		{
			class UPaperFlipbook*                              OldFlipbook;
		} params;
		params.OldFlipbook = OldFlipbook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.IsReversing
	 * 		Flags  -> ()
	 */
	bool UPaperFlipbookComponent::IsReversing()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsReversing");
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.IsPlaying
	 * 		Flags  -> ()
	 */
	bool UPaperFlipbookComponent::IsPlaying()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsPlaying");
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.IsLooping
	 * 		Flags  -> ()
	 */
	bool UPaperFlipbookComponent::IsLooping()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsLooping");
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.GetSpriteColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UPaperFlipbookComponent::GetSpriteColor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetSpriteColor");
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.GetPlayRate
	 * 		Flags  -> ()
	 */
	float UPaperFlipbookComponent::GetPlayRate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlayRate");
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
	 * 		Flags  -> ()
	 */
	int32_t UPaperFlipbookComponent::GetPlaybackPositionInFrames()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames");
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
	 * 		Flags  -> ()
	 */
	float UPaperFlipbookComponent::GetPlaybackPosition()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition");
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
	 * 		Flags  -> ()
	 */
	int32_t UPaperFlipbookComponent::GetFlipbookLengthInFrames()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames");
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
	 * 		Flags  -> ()
	 */
	float UPaperFlipbookComponent::GetFlipbookLength()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLength");
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
	 * 		Flags  -> ()
	 */
	float UPaperFlipbookComponent::GetFlipbookFramerate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate");
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.GetFlipbook
	 * 		Flags  -> ()
	 */
	class UPaperFlipbook* UPaperFlipbookComponent::GetFlipbook()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbook");
		
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
	 * 		Name   -> PredefindFunction UPaperFlipbookComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperFlipbookComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperFlipbookComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction APaperGroupedSpriteActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APaperGroupedSpriteActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperGroupedSpriteActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InstanceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  NewInstanceTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMarkRenderStateDirty                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperGroupedSpriteComponent::UpdateInstanceTransform(int32_t InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform");
		
		struct
		{
			int32_t                                            InstanceIndex;
			struct FTransform                                  NewInstanceTransform;
			bool                                               bWorldSpace;
			bool                                               bMarkRenderStateDirty;
			bool                                               bTeleport;
		} params;
		params.InstanceIndex = InstanceIndex;
		params.NewInstanceTransform = NewInstanceTransform;
		params.bWorldSpace = bWorldSpace;
		params.bMarkRenderStateDirty = bMarkRenderStateDirty;
		params.bTeleport = bTeleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InstanceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                NewInstanceColor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMarkRenderStateDirty                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperGroupedSpriteComponent::UpdateInstanceColor(int32_t InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor");
		
		struct
		{
			int32_t                                            InstanceIndex;
			struct FLinearColor                                NewInstanceColor;
			bool                                               bMarkRenderStateDirty;
		} params;
		params.InstanceIndex = InstanceIndex;
		params.NewInstanceColor = NewInstanceColor;
		params.bMarkRenderStateDirty = bMarkRenderStateDirty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldSpaceSortAxis                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperGroupedSpriteComponent::SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis");
		
		struct
		{
			struct FVector                                     WorldSpaceSortAxis;
		} params;
		params.WorldSpaceSortAxis = WorldSpaceSortAxis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InstanceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperGroupedSpriteComponent::RemoveInstance(int32_t InstanceIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance");
		
		struct
		{
			int32_t                                            InstanceIndex;
		} params;
		params.InstanceIndex = InstanceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InstanceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  OutInstanceTransform                                       (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperGroupedSpriteComponent::GetInstanceTransform(int32_t InstanceIndex, struct FTransform* OutInstanceTransform, bool bWorldSpace)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform");
		
		struct
		{
			int32_t                                            InstanceIndex;
			struct FTransform                                  OutInstanceTransform;
			bool                                               bWorldSpace;
		} params;
		params.InstanceIndex = InstanceIndex;
		params.bWorldSpace = bWorldSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInstanceTransform != nullptr)
			*OutInstanceTransform = params.OutInstanceTransform;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
	 * 		Flags  -> ()
	 */
	int32_t UPaperGroupedSpriteComponent::GetInstanceCount()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount");
		
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
	 * 		Name   -> Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
	 * 		Flags  -> ()
	 */
	void UPaperGroupedSpriteComponent::ClearInstances()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.ClearInstances");
		
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
	 * 		Name   -> Function Paper2D.PaperGroupedSpriteComponent.AddInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPaperSprite*                                Sprite                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPaperGroupedSpriteComponent::AddInstance(const struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.AddInstance");
		
		struct
		{
			struct FTransform                                  Transform;
			class UPaperSprite*                                Sprite;
			bool                                               bWorldSpace;
			struct FLinearColor                                Color;
		} params;
		params.Transform = Transform;
		params.Sprite = Sprite;
		params.bWorldSpace = bWorldSpace;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPaperGroupedSpriteComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperGroupedSpriteComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperGroupedSpriteComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPaperRuntimeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperRuntimeSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperRuntimeSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPaperSprite.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperSprite::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperSprite");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction APaperSpriteActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APaperSpriteActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperSpriteActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPaperSpriteAtlas.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperSpriteAtlas::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperSpriteAtlas");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperSprite*                                Sprite                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSlateBrush UPaperSpriteBlueprintLibrary::MakeBrushFromSprite(class UPaperSprite* Sprite, int32_t Width, int32_t Height)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite");
		
		struct
		{
			class UPaperSprite*                                Sprite;
			int32_t                                            Width;
			int32_t                                            Height;
		} params;
		params.Sprite = Sprite;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPaperSpriteBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperSpriteBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperSpriteBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperSpriteComponent.SetSpriteColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NewColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperSpriteComponent::SetSpriteColor(const struct FLinearColor& NewColor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSpriteColor");
		
		struct
		{
			struct FLinearColor                                NewColor;
		} params;
		params.NewColor = NewColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperSpriteComponent.SetSprite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperSprite*                                NewSprite                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperSpriteComponent::SetSprite(class UPaperSprite* NewSprite)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSprite");
		
		struct
		{
			class UPaperSprite*                                NewSprite;
		} params;
		params.NewSprite = NewSprite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperSpriteComponent.GetSprite
	 * 		Flags  -> ()
	 */
	class UPaperSprite* UPaperSpriteComponent::GetSprite()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.GetSprite");
		
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
	 * 		Name   -> PredefindFunction UPaperSpriteComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperSpriteComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperSpriteComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction APaperTerrainActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APaperTerrainActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperTerrainActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTerrainComponent.SetTerrainColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NewColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperTerrainComponent::SetTerrainColor(const struct FLinearColor& NewColor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTerrainComponent.SetTerrainColor");
		
		struct
		{
			struct FLinearColor                                NewColor;
		} params;
		params.NewColor = NewColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPaperTerrainComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperTerrainComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperTerrainComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPaperTerrainMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperTerrainMaterial::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperTerrainMaterial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPaperTerrainSplineComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperTerrainSplineComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperTerrainSplineComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPaperTileLayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperTileLayer::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperTileLayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPaperTileMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperTileMap::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperTileMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction APaperTileMapActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APaperTileMapActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperTileMapActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.SetTileMapColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NewColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperTileMapComponent::SetTileMapColor(const struct FLinearColor& NewColor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMapColor");
		
		struct
		{
			struct FLinearColor                                NewColor;
		} params;
		params.NewColor = NewColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.SetTileMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperTileMap*                               NewTileMap                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperTileMapComponent::SetTileMap(class UPaperTileMap* NewTileMap)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMap");
		
		struct
		{
			class UPaperTileMap*                               NewTileMap;
		} params;
		params.NewTileMap = NewTileMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.SetTile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Layer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPaperTileInfo                              NewValue                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPaperTileMapComponent::SetTile(int32_t X, int32_t Y, int32_t Layer, const struct FPaperTileInfo& NewValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTile");
		
		struct
		{
			int32_t                                            X;
			int32_t                                            Y;
			int32_t                                            Layer;
			struct FPaperTileInfo                              NewValue;
		} params;
		params.X = X;
		params.Y = Y;
		params.Layer = Layer;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.SetLayerColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NewColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Layer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperTileMapComponent::SetLayerColor(const struct FLinearColor& NewColor, int32_t Layer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerColor");
		
		struct
		{
			struct FLinearColor                                NewColor;
			int32_t                                            Layer;
		} params;
		params.NewColor = NewColor;
		params.Layer = Layer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.SetLayerCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Layer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasCollision                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideThickness                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CustomThickness                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideOffset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CustomOffset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRebuildCollision                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperTileMapComponent::SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerCollision");
		
		struct
		{
			int32_t                                            Layer;
			bool                                               bHasCollision;
			bool                                               bOverrideThickness;
			float                                              CustomThickness;
			bool                                               bOverrideOffset;
			float                                              CustomOffset;
			bool                                               bRebuildCollision;
		} params;
		params.Layer = Layer;
		params.bHasCollision = bHasCollision;
		params.bOverrideThickness = bOverrideThickness;
		params.CustomThickness = CustomThickness;
		params.bOverrideOffset = bOverrideOffset;
		params.CustomOffset = CustomOffset;
		params.bRebuildCollision = bRebuildCollision;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRebuildCollision                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperTileMapComponent::SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness");
		
		struct
		{
			float                                              Thickness;
			bool                                               bRebuildCollision;
		} params;
		params.Thickness = Thickness;
		params.bRebuildCollision = bRebuildCollision;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.ResizeMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewWidthInTiles                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewHeightInTiles                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperTileMapComponent::ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.ResizeMap");
		
		struct
		{
			int32_t                                            NewWidthInTiles;
			int32_t                                            NewHeightInTiles;
		} params;
		params.NewWidthInTiles = NewWidthInTiles;
		params.NewHeightInTiles = NewHeightInTiles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.RebuildCollision
	 * 		Flags  -> ()
	 */
	void UPaperTileMapComponent::RebuildCollision()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.RebuildCollision");
		
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
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.OwnsTileMap
	 * 		Flags  -> ()
	 */
	bool UPaperTileMapComponent::OwnsTileMap()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.OwnsTileMap");
		
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
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
	 * 		Flags  -> ()
	 */
	void UPaperTileMapComponent::MakeTileMapEditable()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.MakeTileMapEditable");
		
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
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.GetTilePolygon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TileX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TileY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Points                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LayerIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperTileMapComponent::GetTilePolygon(int32_t TileX, int32_t TileY, TArray<struct FVector>* Points, int32_t LayerIndex, bool bWorldSpace)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTilePolygon");
		
		struct
		{
			int32_t                                            TileX;
			int32_t                                            TileY;
			TArray<struct FVector>                             Points;
			int32_t                                            LayerIndex;
			bool                                               bWorldSpace;
		} params;
		params.TileX = TileX;
		params.TileY = TileY;
		params.LayerIndex = LayerIndex;
		params.bWorldSpace = bWorldSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Points != nullptr)
			*Points = params.Points;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.GetTileMapColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UPaperTileMapComponent::GetTileMapColor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileMapColor");
		
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
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TileX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TileY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LayerIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UPaperTileMapComponent::GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCornerPosition");
		
		struct
		{
			int32_t                                            TileX;
			int32_t                                            TileY;
			int32_t                                            LayerIndex;
			bool                                               bWorldSpace;
		} params;
		params.TileX = TileX;
		params.TileY = TileY;
		params.LayerIndex = LayerIndex;
		params.bWorldSpace = bWorldSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TileX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TileY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LayerIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UPaperTileMapComponent::GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCenterPosition");
		
		struct
		{
			int32_t                                            TileX;
			int32_t                                            TileY;
			int32_t                                            LayerIndex;
			bool                                               bWorldSpace;
		} params;
		params.TileX = TileX;
		params.TileY = TileY;
		params.LayerIndex = LayerIndex;
		params.bWorldSpace = bWorldSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.GetTile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Layer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPaperTileInfo UPaperTileMapComponent::GetTile(int32_t X, int32_t Y, int32_t Layer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTile");
		
		struct
		{
			int32_t                                            X;
			int32_t                                            Y;
			int32_t                                            Layer;
		} params;
		params.X = X;
		params.Y = Y;
		params.Layer = Layer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.GetMapSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MapWidth                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MapHeight                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumLayers                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperTileMapComponent::GetMapSize(int32_t* MapWidth, int32_t* MapHeight, int32_t* NumLayers)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetMapSize");
		
		struct
		{
			int32_t                                            MapWidth;
			int32_t                                            MapHeight;
			int32_t                                            NumLayers;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapWidth != nullptr)
			*MapWidth = params.MapWidth;
		if (MapHeight != nullptr)
			*MapHeight = params.MapHeight;
		if (NumLayers != nullptr)
			*NumLayers = params.NumLayers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.GetLayerColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Layer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UPaperTileMapComponent::GetLayerColor(int32_t Layer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetLayerColor");
		
		struct
		{
			int32_t                                            Layer;
		} params;
		params.Layer = Layer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.CreateNewTileMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MapWidth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MapHeight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TileWidth                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TileHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PixelsPerUnrealUnit                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateLayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperTileMapComponent::CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.CreateNewTileMap");
		
		struct
		{
			int32_t                                            MapWidth;
			int32_t                                            MapHeight;
			int32_t                                            TileWidth;
			int32_t                                            TileHeight;
			float                                              PixelsPerUnrealUnit;
			bool                                               bCreateLayer;
		} params;
		params.MapWidth = MapWidth;
		params.MapHeight = MapHeight;
		params.TileWidth = TileWidth;
		params.TileHeight = TileHeight;
		params.PixelsPerUnrealUnit = PixelsPerUnrealUnit;
		params.bCreateLayer = bCreateLayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.AddNewLayer
	 * 		Flags  -> ()
	 */
	class UPaperTileLayer* UPaperTileMapComponent::AddNewLayer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.AddNewLayer");
		
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
	 * 		Name   -> PredefindFunction UPaperTileMapComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperTileMapComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperTileMapComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPaperTileSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperTileSet::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.PaperTileSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.TileMapBlueprintLibrary.MakeTile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TileIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPaperTileSet*                               TileSet                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFlipH                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFlipV                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFlipD                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPaperTileInfo UTileMapBlueprintLibrary::MakeTile(int32_t TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.MakeTile");
		
		struct
		{
			int32_t                                            TileIndex;
			class UPaperTileSet*                               TileSet;
			bool                                               bFlipH;
			bool                                               bFlipV;
			bool                                               bFlipD;
		} params;
		params.TileIndex = TileIndex;
		params.TileSet = TileSet;
		params.bFlipH = bFlipH;
		params.bFlipV = bFlipV;
		params.bFlipD = bFlipD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPaperTileInfo                              Tile                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FName UTileMapBlueprintLibrary::GetTileUserData(const struct FPaperTileInfo& Tile)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.GetTileUserData");
		
		struct
		{
			struct FPaperTileInfo                              Tile;
		} params;
		params.Tile = Tile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPaperTileInfo                              Tile                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FTransform UTileMapBlueprintLibrary::GetTileTransform(const struct FPaperTileInfo& Tile)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.GetTileTransform");
		
		struct
		{
			struct FPaperTileInfo                              Tile;
		} params;
		params.Tile = Tile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.TileMapBlueprintLibrary.BreakTile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPaperTileInfo                              Tile                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TileIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPaperTileSet*                               TileSet                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFlipH                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFlipV                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFlipD                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTileMapBlueprintLibrary::BreakTile(const struct FPaperTileInfo& Tile, int32_t* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.BreakTile");
		
		struct
		{
			struct FPaperTileInfo                              Tile;
			int32_t                                            TileIndex;
			class UPaperTileSet*                               TileSet;
			bool                                               bFlipH;
			bool                                               bFlipV;
			bool                                               bFlipD;
		} params;
		params.Tile = Tile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TileIndex != nullptr)
			*TileIndex = params.TileIndex;
		if (TileSet != nullptr)
			*TileSet = params.TileSet;
		if (bFlipH != nullptr)
			*bFlipH = params.bFlipH;
		if (bFlipV != nullptr)
			*bFlipV = params.bFlipV;
		if (bFlipD != nullptr)
			*bFlipD = params.bFlipD;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTileMapBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTileMapBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Paper2D.TileMapBlueprintLibrary");
		return ptr;
	}

}


