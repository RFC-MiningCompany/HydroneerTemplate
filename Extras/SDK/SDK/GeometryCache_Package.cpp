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
	 * 		Name   -> PredefindFunction UGeometryCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCache::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCache");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	 * 		Flags  -> ()
	 */
	class UGeometryCacheComponent* AGeometryCacheActor::GetGeometryCacheComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent");
		
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
	 * 		Name   -> PredefindFunction AGeometryCacheActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGeometryCacheActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGeometryCacheCodecBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheCodecBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheCodecBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGeometryCacheCodecRaw.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheCodecRaw::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheCodecRaw");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGeometryCacheCodecV1.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheCodecV1::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheCodecV1");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.TickAtThisTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInIsRunning                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInBackwards                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInIsLooping                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheComponent::TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.TickAtThisTime");
		
		struct
		{
			float                                              Time;
			bool                                               bInIsRunning;
			bool                                               bInBackwards;
			bool                                               bInIsLooping;
		} params;
		params.Time = Time;
		params.bInIsRunning = bInIsRunning;
		params.bInBackwards = bInBackwards;
		params.bInIsLooping = bInIsLooping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.Stop
	 * 		Flags  -> ()
	 */
	void UGeometryCacheComponent::Stop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Stop");
		
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
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewStartTimeOffset                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheComponent::SetStartTimeOffset(float NewStartTimeOffset)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset");
		
		struct
		{
			float                                              NewStartTimeOffset;
		} params;
		params.NewStartTimeOffset = NewStartTimeOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewPlaybackSpeed                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheComponent::SetPlaybackSpeed(float NewPlaybackSpeed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed");
		
		struct
		{
			float                                              NewPlaybackSpeed;
		} params;
		params.NewPlaybackSpeed = NewPlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.SetLooping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewLooping                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheComponent::SetLooping(bool bNewLooping)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetLooping");
		
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
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.SetGeometryCache
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeometryCache*                              NewGeomCache                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeometryCacheComponent::SetGeometryCache(class UGeometryCache* NewGeomCache)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetGeometryCache");
		
		struct
		{
			class UGeometryCache*                              NewGeomCache;
		} params;
		params.NewGeomCache = NewGeomCache;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	 * 		Flags  -> ()
	 */
	void UGeometryCacheComponent::PlayReversedFromEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd");
		
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
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.PlayReversed
	 * 		Flags  -> ()
	 */
	void UGeometryCacheComponent::PlayReversed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayReversed");
		
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
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.PlayFromStart
	 * 		Flags  -> ()
	 */
	void UGeometryCacheComponent::PlayFromStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayFromStart");
		
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
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.Play
	 * 		Flags  -> ()
	 */
	void UGeometryCacheComponent::Play()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Play");
		
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
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.Pause
	 * 		Flags  -> ()
	 */
	void UGeometryCacheComponent::Pause()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Pause");
		
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
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
	 * 		Flags  -> ()
	 */
	bool UGeometryCacheComponent::IsPlayingReversed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsPlayingReversed");
		
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
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.IsPlaying
	 * 		Flags  -> ()
	 */
	bool UGeometryCacheComponent::IsPlaying()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsPlaying");
		
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
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.IsLooping
	 * 		Flags  -> ()
	 */
	bool UGeometryCacheComponent::IsLooping()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsLooping");
		
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
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	 * 		Flags  -> ()
	 */
	float UGeometryCacheComponent::GetStartTimeOffset()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset");
		
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
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	 * 		Flags  -> ()
	 */
	float UGeometryCacheComponent::GetPlaybackSpeed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed");
		
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
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	 * 		Flags  -> ()
	 */
	float UGeometryCacheComponent::GetPlaybackDirection()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection");
		
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
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	 * 		Flags  -> ()
	 */
	int32_t UGeometryCacheComponent::GetNumberOfFrames()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames");
		
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
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.GetDuration
	 * 		Flags  -> ()
	 */
	float UGeometryCacheComponent::GetDuration()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetDuration");
		
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
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.GetAnimationTime
	 * 		Flags  -> ()
	 */
	float UGeometryCacheComponent::GetAnimationTime()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetAnimationTime");
		
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
	 * 		Name   -> PredefindFunction UGeometryCacheComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGeometryCacheTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheTrack::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometryCacheMeshData                      MeshData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              SampleTime                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheTrack_FlipbookAnimation::AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample");
		
		struct
		{
			struct FGeometryCacheMeshData                      MeshData;
			float                                              SampleTime;
		} params;
		params.MeshData = MeshData;
		params.SampleTime = SampleTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGeometryCacheTrack_FlipbookAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheTrack_FlipbookAnimation::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_FlipbookAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGeometryCacheTrackStreamable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheTrackStreamable::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrackStreamable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometryCacheMeshData                      NewMeshData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheTrack_TransformAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh");
		
		struct
		{
			struct FGeometryCacheMeshData                      NewMeshData;
		} params;
		params.NewMeshData = NewMeshData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGeometryCacheTrack_TransformAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheTrack_TransformAnimation::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometryCacheMeshData                      NewMeshData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheTrack_TransformGroupAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh");
		
		struct
		{
			struct FGeometryCacheMeshData                      NewMeshData;
		} params;
		params.NewMeshData = NewMeshData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGeometryCacheTrack_TransformGroupAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheTrack_TransformGroupAnimation::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation");
		return ptr;
	}

}


