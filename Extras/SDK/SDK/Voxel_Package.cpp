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
	 * 		Name   -> PredefindFunction UAssetActorPrimitiveComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetActorPrimitiveComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.AssetActorPrimitiveComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelPlaceableItemActor.K2_GetPriority
	 * 		Flags  -> ()
	 */
	int32_t AVoxelPlaceableItemActor::K2_GetPriority()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelPlaceableItemActor.K2_GetPriority");
		
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
	 * 		Name   -> Function Voxel.VoxelPlaceableItemActor.K2_AddItemToWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVoxelPlaceableItemActor::K2_AddItemToWorld(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelPlaceableItemActor.K2_AddItemToWorld");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AVoxelPlaceableItemActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVoxelPlaceableItemActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelPlaceableItemActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AVoxelAssetActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVoxelAssetActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelAssetActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelAssetTools.SetDataAssetMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVoxelDataAsset*                             Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVoxelDataAsset*                             NewAsset                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelMaterial                              Material                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVoxelAssetTools::SetDataAssetMaterial(class UVoxelDataAsset* Asset, class UVoxelDataAsset** NewAsset, const struct FVoxelMaterial& Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelAssetTools.SetDataAssetMaterial");
		
		struct
		{
			class UVoxelDataAsset*                             Asset;
			class UVoxelDataAsset*                             NewAsset;
			struct FVoxelMaterial                              Material;
		} params;
		params.Asset = Asset;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewAsset != nullptr)
			*NewAsset = params.NewAsset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelAssetTools.InvertDataAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVoxelDataAsset*                             Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVoxelDataAsset*                             InvertedAsset                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelAssetTools::InvertDataAsset(class UVoxelDataAsset* Asset, class UVoxelDataAsset** InvertedAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelAssetTools.InvertDataAsset");
		
		struct
		{
			class UVoxelDataAsset*                             Asset;
			class UVoxelDataAsset*                             InvertedAsset;
		} params;
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InvertedAsset != nullptr)
			*InvertedAsset = params.InvertedAsset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelAssetTools.ImportModifierAssetAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVoxelTransformableGeneratorInstanceWrapper* Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bModifyValues                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bModifyMaterials                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLockEntireWorld                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelAssetTools::ImportModifierAssetAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, const struct FTransform& Transform, const struct FVoxelIntBox& Bounds, bool bModifyValues, bool bModifyMaterials, bool bLockEntireWorld, bool bConvertToVoxelSpace, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelAssetTools.ImportModifierAssetAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class AVoxelWorld*                                 World;
			class UVoxelTransformableGeneratorInstanceWrapper* Asset;
			struct FTransform                                  Transform;
			struct FVoxelIntBox                                Bounds;
			bool                                               bModifyValues;
			bool                                               bModifyMaterials;
			bool                                               bLockEntireWorld;
			bool                                               bConvertToVoxelSpace;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Asset = Asset;
		params.Transform = Transform;
		params.Bounds = Bounds;
		params.bModifyValues = bModifyValues;
		params.bModifyMaterials = bModifyMaterials;
		params.bLockEntireWorld = bLockEntireWorld;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelAssetTools.ImportModifierAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVoxelTransformableGeneratorInstanceWrapper* Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bModifyValues                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bModifyMaterials                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLockEntireWorld                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelAssetTools::ImportModifierAsset(class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, const struct FTransform& Transform, const struct FVoxelIntBox& Bounds, bool bModifyValues, bool bModifyMaterials, bool bLockEntireWorld, bool bConvertToVoxelSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelAssetTools.ImportModifierAsset");
		
		struct
		{
			class AVoxelWorld*                                 World;
			class UVoxelTransformableGeneratorInstanceWrapper* Asset;
			struct FTransform                                  Transform;
			struct FVoxelIntBox                                Bounds;
			bool                                               bModifyValues;
			bool                                               bModifyMaterials;
			bool                                               bLockEntireWorld;
			bool                                               bConvertToVoxelSpace;
		} params;
		params.World = World;
		params.Asset = Asset;
		params.Transform = Transform;
		params.Bounds = Bounds;
		params.bModifyValues = bModifyValues;
		params.bModifyMaterials = bModifyMaterials;
		params.bLockEntireWorld = bLockEntireWorld;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelAssetTools.ImportDataAssetFastAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVoxelDataAsset*                             Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelAssetMergeMode                               MergeMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelAssetTools::ImportDataAssetFastAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, class UVoxelDataAsset* Asset, const struct FVector& Position, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelAssetTools.ImportDataAssetFastAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class AVoxelWorld*                                 World;
			class UVoxelDataAsset*                             Asset;
			struct FVector                                     Position;
			EVoxelAssetMergeMode                               MergeMode;
			bool                                               bConvertToVoxelSpace;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Asset = Asset;
		params.Position = Position;
		params.MergeMode = MergeMode;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelAssetTools.ImportDataAssetFast
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVoxelDataAsset*                             Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelAssetMergeMode                               MergeMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelAssetTools::ImportDataAssetFast(class AVoxelWorld* World, class UVoxelDataAsset* Asset, const struct FVector& Position, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelAssetTools.ImportDataAssetFast");
		
		struct
		{
			class AVoxelWorld*                                 World;
			class UVoxelDataAsset*                             Asset;
			struct FVector                                     Position;
			EVoxelAssetMergeMode                               MergeMode;
			bool                                               bConvertToVoxelSpace;
		} params;
		params.World = World;
		params.Asset = Asset;
		params.Position = Position;
		params.MergeMode = MergeMode;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelAssetTools.ImportAssetAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVoxelTransformableGeneratorInstanceWrapper* Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSubtractive                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelAssetMergeMode                               MergeMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelAssetTools::ImportAssetAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, const struct FTransform& Transform, const struct FVoxelIntBox& Bounds, bool bSubtractive, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelAssetTools.ImportAssetAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class AVoxelWorld*                                 World;
			class UVoxelTransformableGeneratorInstanceWrapper* Asset;
			struct FTransform                                  Transform;
			struct FVoxelIntBox                                Bounds;
			bool                                               bSubtractive;
			EVoxelAssetMergeMode                               MergeMode;
			bool                                               bConvertToVoxelSpace;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Asset = Asset;
		params.Transform = Transform;
		params.Bounds = Bounds;
		params.bSubtractive = bSubtractive;
		params.MergeMode = MergeMode;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelAssetTools.ImportAssetAsReferenceAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelAssetItemReference                    Reference                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVoxelTransformableGeneratorInstanceWrapper* Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelAssetTools::ImportAssetAsReferenceAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelAssetItemReference* Reference, class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, const struct FTransform& Transform, const struct FVoxelIntBox& Bounds, int32_t Priority, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelAssetTools.ImportAssetAsReferenceAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			struct FVoxelAssetItemReference                    Reference;
			class AVoxelWorld*                                 World;
			class UVoxelTransformableGeneratorInstanceWrapper* Asset;
			struct FTransform                                  Transform;
			struct FVoxelIntBox                                Bounds;
			int32_t                                            Priority;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Asset = Asset;
		params.Transform = Transform;
		params.Bounds = Bounds;
		params.Priority = Priority;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reference != nullptr)
			*Reference = params.Reference;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelAssetTools.ImportAssetAsReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelAssetItemReference                    Reference                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVoxelTransformableGeneratorInstanceWrapper* Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelAssetTools::ImportAssetAsReference(struct FVoxelAssetItemReference* Reference, class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, const struct FTransform& Transform, const struct FVoxelIntBox& Bounds, int32_t Priority, bool bConvertToVoxelSpace, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelAssetTools.ImportAssetAsReference");
		
		struct
		{
			struct FVoxelAssetItemReference                    Reference;
			class AVoxelWorld*                                 World;
			class UVoxelTransformableGeneratorInstanceWrapper* Asset;
			struct FTransform                                  Transform;
			struct FVoxelIntBox                                Bounds;
			int32_t                                            Priority;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
		} params;
		params.World = World;
		params.Asset = Asset;
		params.Transform = Transform;
		params.Bounds = Bounds;
		params.Priority = Priority;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reference != nullptr)
			*Reference = params.Reference;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelAssetTools.ImportAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVoxelTransformableGeneratorInstanceWrapper* Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSubtractive                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelAssetMergeMode                               MergeMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelAssetTools::ImportAsset(class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, const struct FTransform& Transform, const struct FVoxelIntBox& Bounds, bool bSubtractive, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelAssetTools.ImportAsset");
		
		struct
		{
			class AVoxelWorld*                                 World;
			class UVoxelTransformableGeneratorInstanceWrapper* Asset;
			struct FTransform                                  Transform;
			struct FVoxelIntBox                                Bounds;
			bool                                               bSubtractive;
			EVoxelAssetMergeMode                               MergeMode;
			bool                                               bConvertToVoxelSpace;
		} params;
		params.World = World;
		params.Asset = Asset;
		params.Transform = Transform;
		params.Bounds = Bounds;
		params.bSubtractive = bSubtractive;
		params.MergeMode = MergeMode;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelAssetTools.CreateDataAssetFromWorldSection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCopyMaterials                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVoxelDataAsset* UVoxelAssetTools::CreateDataAssetFromWorldSection(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bCopyMaterials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelAssetTools.CreateDataAssetFromWorldSection");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bCopyMaterials;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		params.bCopyMaterials = bCopyMaterials;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelAssetTools.AddDisableEditsBoxAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelDisableEditsBoxItemReference          Reference                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelAssetTools::AddDisableEditsBoxAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelDisableEditsBoxItemReference* Reference, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelAssetTools.AddDisableEditsBoxAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			struct FVoxelDisableEditsBoxItemReference          Reference;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Bounds = Bounds;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reference != nullptr)
			*Reference = params.Reference;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelAssetTools.AddDisableEditsBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelDisableEditsBoxItemReference          Reference                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelAssetTools::AddDisableEditsBox(struct FVoxelDisableEditsBoxItemReference* Reference, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelAssetTools.AddDisableEditsBox");
		
		struct
		{
			struct FVoxelDisableEditsBoxItemReference          Reference;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reference != nullptr)
			*Reference = params.Reference;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelAssetTools.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelAssetTools::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelAssetTools");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelMaterialCollectionBase.GetMaterials
	 * 		Flags  -> ()
	 */
	TArray<struct FVoxelMaterialCollectionMaterialInfo> UVoxelMaterialCollectionBase::GetMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelMaterialCollectionBase.GetMaterials");
		
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
	 * 		Name   -> Function Voxel.VoxelMaterialCollectionBase.GetMaterialIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVoxelMaterialCollectionBase::GetMaterialIndex(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelMaterialCollectionBase.GetMaterialIndex");
		
		struct
		{
			class FName                                        Name;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelMaterialCollectionBase.GetIndexMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterialInterface* UVoxelMaterialCollectionBase::GetIndexMaterial(unsigned char Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelMaterialCollectionBase.GetIndexMaterial");
		
		struct
		{
			unsigned char                                      Index;
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
	 * 		Name   -> PredefindFunction UVoxelMaterialCollectionBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMaterialCollectionBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelMaterialCollectionBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelBasicMaterialCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelBasicMaterialCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelBasicMaterialCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.UpdatePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::UpdatePosition(class AVoxelWorld* World, const struct FIntVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.UpdatePosition");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FIntVector                                  Position;
		} params;
		params.World = World;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.UpdateBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::UpdateBounds(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.UpdateBounds");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.UpdateAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::UpdateAll(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.UpdateAll");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.Undo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVoxelIntBox>                        OutUpdatedBounds                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UVoxelBlueprintLibrary::Undo(class AVoxelWorld* World, TArray<struct FVoxelIntBox>* OutUpdatedBounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.Undo");
		
		struct
		{
			class AVoxelWorld*                                 World;
			TArray<struct FVoxelIntBox>                        OutUpdatedBounds;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutUpdatedBounds != nullptr)
			*OutUpdatedBounds = params.OutUpdatedBounds;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.TransformVoxelBoxToGlobalBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBox UVoxelBlueprintLibrary::TransformVoxelBoxToGlobalBox(class AVoxelWorld* World, const struct FVoxelIntBox& Box)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.TransformVoxelBoxToGlobalBox");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Box;
		} params;
		params.World = World;
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.TransformGlobalBoxToVoxelBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelBlueprintLibrary::TransformGlobalBoxToVoxelBox(class AVoxelWorld* World, const struct FBox& Box)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.TransformGlobalBoxToVoxelBox");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FBox                                        Box;
		} params;
		params.World = World;
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.Substract_IntVectorIntVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntVector                                  Left                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntVector UVoxelBlueprintLibrary::Substract_IntVectorIntVector(const struct FIntVector& Left, const struct FIntVector& Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.Substract_IntVectorIntVector");
		
		struct
		{
			struct FIntVector                                  Left;
			struct FIntVector                                  Right;
		} params;
		params.Left = Left;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.SetToolRenderingMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelToolRenderingRef                      Ref                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::SetToolRenderingMaterial(class AVoxelWorld* World, const struct FVoxelToolRenderingRef& Ref, class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.SetToolRenderingMaterial");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelToolRenderingRef                      Ref;
			class UMaterialInterface*                          Material;
		} params;
		params.World = World;
		params.Ref = Ref;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.SetToolRenderingEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelToolRenderingRef                      Ref                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::SetToolRenderingEnabled(class AVoxelWorld* World, const struct FVoxelToolRenderingRef& Ref, bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.SetToolRenderingEnabled");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelToolRenderingRef                      Ref;
			bool                                               bEnabled;
		} params;
		params.World = World;
		params.Ref = Ref;
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.SetToolRenderingBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelToolRenderingRef                      Ref                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        Bounds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::SetToolRenderingBounds(class AVoxelWorld* World, const struct FVoxelToolRenderingRef& Ref, const struct FBox& Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.SetToolRenderingBounds");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelToolRenderingRef                      Ref;
			struct FBox                                        Bounds;
		} params;
		params.World = World;
		params.Ref = Ref;
		params.Bounds = Bounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.SetNumberOfVoxelThreads
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::SetNumberOfVoxelThreads(int32_t Number)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.SetNumberOfVoxelThreads");
		
		struct
		{
			int32_t                                            Number;
		} params;
		params.Number = Number;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.ScaleData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Scale                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::ScaleData(class AVoxelWorld* World, const struct FVector& Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.ScaleData");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVector                                     Scale;
		} params;
		params.World = World;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.SaveFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::SaveFrame(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.SaveFrame");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.RegenerateSpawners
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::RegenerateSpawners(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.RegenerateSpawners");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.Redo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVoxelIntBox>                        OutUpdatedBounds                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UVoxelBlueprintLibrary::Redo(class AVoxelWorld* World, TArray<struct FVoxelIntBox>* OutUpdatedBounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.Redo");
		
		struct
		{
			class AVoxelWorld*                                 World;
			TArray<struct FVoxelIntBox>                        OutUpdatedBounds;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutUpdatedBounds != nullptr)
			*OutUpdatedBounds = params.OutUpdatedBounds;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.RecreateSpawners
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::RecreateSpawners(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.RecreateSpawners");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.RecreateRender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::RecreateRender(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.RecreateRender");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.Recreate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSaveData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::Recreate(class AVoxelWorld* World, bool bSaveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.Recreate");
		
		struct
		{
			class AVoxelWorld*                                 World;
			bool                                               bSaveData;
		} params;
		params.World = World;
		params.bSaveData = bSaveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.RecomputeComponentPositions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::RecomputeComponentPositions(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.RecomputeComponentPositions");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.RaiseWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::RaiseWarning(const class FString& Message, class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.RaiseWarning");
		
		struct
		{
			class FString                                      Message;
			class UObject*                                     Object;
		} params;
		params.Message = Message;
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.RaiseInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::RaiseInfo(const class FString& Message, class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.RaiseInfo");
		
		struct
		{
			class FString                                      Message;
			class UObject*                                     Object;
		} params;
		params.Message = Message;
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.RaiseError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::RaiseError(const class FString& Message, class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.RaiseError");
		
		struct
		{
			class FString                                      Message;
			class UObject*                                     Object;
		} params;
		params.Message = Message;
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.NumberOfCores
	 * 		Flags  -> ()
	 */
	int32_t UVoxelBlueprintLibrary::NumberOfCores()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.NumberOfCores");
		
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
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.Multiply_IntVectorIntVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntVector                                  Left                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntVector UVoxelBlueprintLibrary::Multiply_IntVectorIntVector(const struct FIntVector& Left, const struct FIntVector& Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.Multiply_IntVectorIntVector");
		
		struct
		{
			struct FIntVector                                  Left;
			struct FIntVector                                  Right;
		} params;
		params.Left = Left;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.Multiply_IntVectorInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntVector                                  Left                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntVector UVoxelBlueprintLibrary::Multiply_IntVectorInt(const struct FIntVector& Left, int32_t Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.Multiply_IntVectorInt");
		
		struct
		{
			struct FIntVector                                  Left;
			int32_t                                            Right;
		} params;
		params.Left = Left;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.Multiply_IntIntVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Left                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntVector UVoxelBlueprintLibrary::Multiply_IntIntVector(int32_t Left, const struct FIntVector& Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.Multiply_IntIntVector");
		
		struct
		{
			int32_t                                            Left;
			struct FIntVector                                  Right;
		} params;
		params.Left = Left;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.MarkSpawnersDirty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::MarkSpawnersDirty(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.MarkSpawnersDirty");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.MakeSingleIndexMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelMaterial UVoxelBlueprintLibrary::MakeSingleIndexMaterial(unsigned char Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.MakeSingleIndexMaterial");
		
		struct
		{
			unsigned char                                      Index;
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
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.MakeRawMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      R                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      G                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      U0                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      V0                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      U1                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      v1                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      U2                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      v2                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      U3                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      V3                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelMaterial UVoxelBlueprintLibrary::MakeRawMaterial(unsigned char R, unsigned char G, unsigned char B, unsigned char A, unsigned char U0, unsigned char V0, unsigned char U1, unsigned char v1, unsigned char U2, unsigned char v2, unsigned char U3, unsigned char V3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.MakeRawMaterial");
		
		struct
		{
			unsigned char                                      R;
			unsigned char                                      G;
			unsigned char                                      B;
			unsigned char                                      A;
			unsigned char                                      U0;
			unsigned char                                      V0;
			unsigned char                                      U1;
			unsigned char                                      v1;
			unsigned char                                      U2;
			unsigned char                                      v2;
			unsigned char                                      U3;
			unsigned char                                      V3;
		} params;
		params.R = R;
		params.G = G;
		params.B = B;
		params.A = A;
		params.U0 = U0;
		params.V0 = V0;
		params.U1 = U1;
		params.v1 = v1;
		params.U2 = U2;
		params.v2 = v2;
		params.U3 = U3;
		params.V3 = V3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.MakeMaterialMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               R                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               G                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               U0                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               V0                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               U1                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               v1                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               U2                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               v2                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               U3                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               V3                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVoxelBlueprintLibrary::MakeMaterialMask(bool R, bool G, bool B, bool A, bool U0, bool V0, bool U1, bool v1, bool U2, bool v2, bool U3, bool V3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.MakeMaterialMask");
		
		struct
		{
			bool                                               R;
			bool                                               G;
			bool                                               B;
			bool                                               A;
			bool                                               U0;
			bool                                               V0;
			bool                                               U1;
			bool                                               v1;
			bool                                               U2;
			bool                                               v2;
			bool                                               U3;
			bool                                               V3;
		} params;
		params.R = R;
		params.G = G;
		params.B = B;
		params.A = A;
		params.U0 = U0;
		params.V0 = V0;
		params.U1 = U1;
		params.v1 = v1;
		params.U2 = U2;
		params.v2 = v2;
		params.U3 = U3;
		params.V3 = V3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.MakeIntBoxFromGlobalPositionAndRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     GlobalPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelBlueprintLibrary::MakeIntBoxFromGlobalPositionAndRadius(class AVoxelWorld* World, const struct FVector& GlobalPosition, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.MakeIntBoxFromGlobalPositionAndRadius");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVector                                     GlobalPosition;
			float                                              Radius;
		} params;
		params.World = World;
		params.GlobalPosition = GlobalPosition;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.MakeColorMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelMaterial UVoxelBlueprintLibrary::MakeColorMaterial(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.MakeColorMaterial");
		
		struct
		{
			struct FLinearColor                                Color;
		} params;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.LogMemoryStats
	 * 		Flags  -> ()
	 */
	void UVoxelBlueprintLibrary::LogMemoryStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.LogMemoryStats");
		
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
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.IsVoxelWorldMeshLoading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelBlueprintLibrary::IsVoxelWorldMeshLoading(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.IsVoxelWorldMeshLoading");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.IsVoxelWorldFoliageLoading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelBlueprintLibrary::IsVoxelWorldFoliageLoading(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.IsVoxelWorldFoliageLoading");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.IsVoxelPluginPro
	 * 		Flags  -> ()
	 */
	bool UVoxelBlueprintLibrary::IsVoxelPluginPro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.IsVoxelPluginPro");
		
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
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.IsVoxelFloatTextureValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelFloatTexture                          Texture                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	bool UVoxelBlueprintLibrary::IsVoxelFloatTextureValid(const struct FVoxelFloatTexture& Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.IsVoxelFloatTextureValid");
		
		struct
		{
			struct FVoxelFloatTexture                          Texture;
		} params;
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.IsVoxelColorTextureValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelFloatTexture                          Texture                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	bool UVoxelBlueprintLibrary::IsVoxelColorTextureValid(const struct FVoxelFloatTexture& Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.IsVoxelColorTextureValid");
		
		struct
		{
			struct FVoxelFloatTexture                          Texture;
		} params;
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.IsValidRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelToolRenderingRef                      Ref                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UVoxelBlueprintLibrary::IsValidRef(class AVoxelWorld* World, const struct FVoxelToolRenderingRef& Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.IsValidRef");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelToolRenderingRef                      Ref;
		} params;
		params.World = World;
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.IntervalContains_Int32
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelInt32Interval                         Interval                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelBlueprintLibrary::IntervalContains_Int32(const struct FVoxelInt32Interval& Interval, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.IntervalContains_Int32");
		
		struct
		{
			struct FVoxelInt32Interval                         Interval;
			int32_t                                            Value;
		} params;
		params.Interval = Interval;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.IntervalContains_Float
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelFloatInterval                         Interval                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelBlueprintLibrary::IntervalContains_Float(const struct FVoxelFloatInterval& Interval, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.IntervalContains_Float");
		
		struct
		{
			struct FVoxelFloatInterval                         Interval;
			float                                              Value;
		} params;
		params.Interval = Interval;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.HasValueData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelBlueprintLibrary::HasValueData(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.HasValueData");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.HasMaterialData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelBlueprintLibrary::HasMaterialData(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.HasMaterialData");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetVoxelWorldOverlappingBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class AVoxelWorld* UVoxelBlueprintLibrary::GetVoxelWorldOverlappingBox(class UObject* WorldContextObject, const struct FBox& Box)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetVoxelWorldOverlappingBox");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FBox                                        Box;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetVoxelWorldOverlappingActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AVoxelWorld* UVoxelBlueprintLibrary::GetVoxelWorldOverlappingActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetVoxelWorldOverlappingActor");
		
		struct
		{
			class AActor*                                      Actor;
		} params;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetVoxelWorldContainingPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AVoxelWorld* UVoxelBlueprintLibrary::GetVoxelWorldContainingPosition(class UObject* WorldContextObject, const struct FVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetVoxelWorldContainingPosition");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                                     Position;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetVoxelFloatTextureSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelFloatTexture                          Texture                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	struct FIntPoint UVoxelBlueprintLibrary::GetVoxelFloatTextureSize(const struct FVoxelFloatTexture& Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetVoxelFloatTextureSize");
		
		struct
		{
			struct FVoxelFloatTexture                          Texture;
		} params;
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetVoxelColorTextureSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelColorTexture                          Texture                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	struct FIntPoint UVoxelBlueprintLibrary::GetVoxelColorTextureSize(const struct FVoxelColorTexture& Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetVoxelColorTextureSize");
		
		struct
		{
			struct FVoxelColorTexture                          Texture;
		} params;
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetUV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelMaterial                              Material                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UVoxelBlueprintLibrary::GetUV(const struct FVoxelMaterial& Material, int32_t Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetUV");
		
		struct
		{
			struct FVoxelMaterial                              Material;
			int32_t                                            Channel;
		} params;
		params.Material = Material;
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetTaskCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVoxelBlueprintLibrary::GetTaskCount(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetTaskCount");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetSingleIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelMaterial                              Material                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	unsigned char UVoxelBlueprintLibrary::GetSingleIndex(const struct FVoxelMaterial& Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetSingleIndex");
		
		struct
		{
			struct FVoxelMaterial                              Material;
		} params;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetRenderBoundsOverlappingDataBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                DataBounds                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LOD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelBlueprintLibrary::GetRenderBoundsOverlappingDataBounds(class AVoxelWorld* World, const struct FVoxelIntBox& DataBounds, int32_t LOD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetRenderBoundsOverlappingDataBounds");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                DataBounds;
			int32_t                                            LOD;
		} params;
		params.World = World;
		params.DataBounds = DataBounds;
		params.LOD = LOD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetRawMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelMaterial                              Material                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      R                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      G                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      B                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      A                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      U0                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      V0                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      U1                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      v1                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      U2                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      v2                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      U3                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      V3                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::GetRawMaterial(const struct FVoxelMaterial& Material, unsigned char* R, unsigned char* G, unsigned char* B, unsigned char* A, unsigned char* U0, unsigned char* V0, unsigned char* U1, unsigned char* v1, unsigned char* U2, unsigned char* v2, unsigned char* U3, unsigned char* V3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetRawMaterial");
		
		struct
		{
			struct FVoxelMaterial                              Material;
			unsigned char                                      R;
			unsigned char                                      G;
			unsigned char                                      B;
			unsigned char                                      A;
			unsigned char                                      U0;
			unsigned char                                      V0;
			unsigned char                                      U1;
			unsigned char                                      v1;
			unsigned char                                      U2;
			unsigned char                                      v2;
			unsigned char                                      U3;
			unsigned char                                      V3;
		} params;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (R != nullptr)
			*R = params.R;
		if (G != nullptr)
			*G = params.G;
		if (B != nullptr)
			*B = params.B;
		if (A != nullptr)
			*A = params.A;
		if (U0 != nullptr)
			*U0 = params.U0;
		if (V0 != nullptr)
			*V0 = params.V0;
		if (U1 != nullptr)
			*U1 = params.U1;
		if (v1 != nullptr)
			*v1 = params.v1;
		if (U2 != nullptr)
			*U2 = params.U2;
		if (v2 != nullptr)
			*v2 = params.v2;
		if (U3 != nullptr)
			*U3 = params.U3;
		if (V3 != nullptr)
			*V3 = params.V3;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetPeakMemoryUsageInMB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVoxelMemoryUsageType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVoxelBlueprintLibrary::GetPeakMemoryUsageInMB(EVoxelMemoryUsageType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetPeakMemoryUsageInMB");
		
		struct
		{
			EVoxelMemoryUsageType                              Type;
		} params;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetNumberOfVoxelThreads
	 * 		Flags  -> ()
	 */
	int32_t UVoxelBlueprintLibrary::GetNumberOfVoxelThreads()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetNumberOfVoxelThreads");
		
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
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetNormal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UVoxelBlueprintLibrary::GetNormal(class AVoxelWorld* World, const struct FIntVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetNormal");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FIntVector                                  Position;
		} params;
		params.World = World;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetMultiIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelMaterial                              Material                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bSortByStrength                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Strength0                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Index0                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Strength1                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Index1                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Strength2                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Index2                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Strength3                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Index3                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Wetness                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::GetMultiIndex(const struct FVoxelMaterial& Material, bool bSortByStrength, float* Strength0, unsigned char* Index0, float* Strength1, unsigned char* Index1, float* Strength2, unsigned char* Index2, float* Strength3, unsigned char* Index3, float* Wetness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetMultiIndex");
		
		struct
		{
			struct FVoxelMaterial                              Material;
			bool                                               bSortByStrength;
			float                                              Strength0;
			unsigned char                                      Index0;
			float                                              Strength1;
			unsigned char                                      Index1;
			float                                              Strength2;
			unsigned char                                      Index2;
			float                                              Strength3;
			unsigned char                                      Index3;
			float                                              Wetness;
		} params;
		params.Material = Material;
		params.bSortByStrength = bSortByStrength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Strength0 != nullptr)
			*Strength0 = params.Strength0;
		if (Index0 != nullptr)
			*Index0 = params.Index0;
		if (Strength1 != nullptr)
			*Strength1 = params.Strength1;
		if (Index1 != nullptr)
			*Index1 = params.Index1;
		if (Strength2 != nullptr)
			*Strength2 = params.Strength2;
		if (Index2 != nullptr)
			*Index2 = params.Index2;
		if (Strength3 != nullptr)
			*Strength3 = params.Strength3;
		if (Index3 != nullptr)
			*Index3 = params.Index3;
		if (Wetness != nullptr)
			*Wetness = params.Wetness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetMin_Intvector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntVector                                  Vector                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVoxelBlueprintLibrary::GetMin_Intvector(const struct FIntVector& Vector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetMin_Intvector");
		
		struct
		{
			struct FIntVector                                  Vector;
		} params;
		params.Vector = Vector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetMemoryUsageInMB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVoxelMemoryUsageType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVoxelBlueprintLibrary::GetMemoryUsageInMB(EVoxelMemoryUsageType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetMemoryUsageInMB");
		
		struct
		{
			EVoxelMemoryUsageType                              Type;
		} params;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetMax_Intvector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntVector                                  Vector                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVoxelBlueprintLibrary::GetMax_Intvector(const struct FIntVector& Vector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetMax_Intvector");
		
		struct
		{
			struct FIntVector                                  Vector;
		} params;
		params.Vector = Vector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetIntOutput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Z                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVoxelBlueprintLibrary::GetIntOutput(class AVoxelWorld* World, const class FName& Name, float X, float Y, float Z, int32_t DefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetIntOutput");
		
		struct
		{
			class AVoxelWorld*                                 World;
			class FName                                        Name;
			float                                              X;
			float                                              Y;
			float                                              Z;
			int32_t                                            DefaultValue;
		} params;
		params.World = World;
		params.Name = Name;
		params.X = X;
		params.Y = Y;
		params.Z = Z;
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetHistoryPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVoxelBlueprintLibrary::GetHistoryPosition(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetHistoryPosition");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetFloatOutput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Z                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVoxelBlueprintLibrary::GetFloatOutput(class AVoxelWorld* World, const class FName& Name, float X, float Y, float Z, float DefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetFloatOutput");
		
		struct
		{
			class AVoxelWorld*                                 World;
			class FName                                        Name;
			float                                              X;
			float                                              Y;
			float                                              Z;
			float                                              DefaultValue;
		} params;
		params.World = World;
		params.Name = Name;
		params.X = X;
		params.Y = Y;
		params.Z = Z;
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetEstimatedCollisionsMemoryUsageInMB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVoxelBlueprintLibrary::GetEstimatedCollisionsMemoryUsageInMB(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetEstimatedCollisionsMemoryUsageInMB");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelMaterial                              Material                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UVoxelBlueprintLibrary::GetColor(const struct FVoxelMaterial& Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetColor");
		
		struct
		{
			struct FVoxelMaterial                              Material;
		} params;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelBlueprintLibrary::GetBounds(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetBounds");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetAllVoxelWorldsOverlappingBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	TArray<class AVoxelWorld*> UVoxelBlueprintLibrary::GetAllVoxelWorldsOverlappingBox(class UObject* WorldContextObject, const struct FBox& Box)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetAllVoxelWorldsOverlappingBox");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FBox                                        Box;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetAllVoxelWorldsOverlappingActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class AVoxelWorld*> UVoxelBlueprintLibrary::GetAllVoxelWorldsOverlappingActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetAllVoxelWorldsOverlappingActor");
		
		struct
		{
			class AActor*                                      Actor;
		} params;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.GetAllVoxelWorldsContainingPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class AVoxelWorld*> UVoxelBlueprintLibrary::GetAllVoxelWorldsContainingPosition(class UObject* WorldContextObject, const struct FVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetAllVoxelWorldsContainingPosition");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                                     Position;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.Divide_IntVectorInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntVector                                  Left                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntVector UVoxelBlueprintLibrary::Divide_IntVectorInt(const struct FIntVector& Left, int32_t Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.Divide_IntVectorInt");
		
		struct
		{
			struct FIntVector                                  Left;
			int32_t                                            Right;
		} params;
		params.Left = Left;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.DestroyToolRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelToolRenderingRef                      Ref                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::DestroyToolRendering(class AVoxelWorld* World, const struct FVoxelToolRenderingRef& Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.DestroyToolRendering");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelToolRenderingRef                      Ref;
		} params;
		params.World = World;
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateVoxelFloatTextureFromTextureChannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelRGBA                                         Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelFloatTexture UVoxelBlueprintLibrary::CreateVoxelFloatTextureFromTextureChannel(class UTexture2D* Texture, EVoxelRGBA Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateVoxelFloatTextureFromTextureChannel");
		
		struct
		{
			class UTexture2D*                                  Texture;
			EVoxelRGBA                                         Channel;
		} params;
		params.Texture = Texture;
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateVoxelColorTextureFromVoxelFloatTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelFloatTexture                          Texture                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		EVoxelRGBA                                         Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNormalize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelColorTexture UVoxelBlueprintLibrary::CreateVoxelColorTextureFromVoxelFloatTexture(const struct FVoxelFloatTexture& Texture, EVoxelRGBA Channel, bool bNormalize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateVoxelColorTextureFromVoxelFloatTexture");
		
		struct
		{
			struct FVoxelFloatTexture                          Texture;
			EVoxelRGBA                                         Channel;
			bool                                               bNormalize;
		} params;
		params.Texture = Texture;
		params.Channel = Channel;
		params.bNormalize = bNormalize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateUVPaintMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelPaintMaterialUV                       UV                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVoxelPaintMaterial UVoxelBlueprintLibrary::CreateUVPaintMaterial(const struct FVoxelPaintMaterialUV& UV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateUVPaintMaterial");
		
		struct
		{
			struct FVoxelPaintMaterialUV                       UV;
		} params;
		params.UV = UV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateToolRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelToolRenderingRef UVoxelBlueprintLibrary::CreateToolRendering(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateToolRendering");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateTextureFromVoxelFloatTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelFloatTexture                          VoxelTexture                                               (Parm, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UVoxelBlueprintLibrary::CreateTextureFromVoxelFloatTexture(const struct FVoxelFloatTexture& VoxelTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateTextureFromVoxelFloatTexture");
		
		struct
		{
			struct FVoxelFloatTexture                          VoxelTexture;
		} params;
		params.VoxelTexture = VoxelTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateTextureFromVoxelColorTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelColorTexture                          VoxelTexture                                               (Parm, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UVoxelBlueprintLibrary::CreateTextureFromVoxelColorTexture(const struct FVoxelColorTexture& VoxelTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateTextureFromVoxelColorTexture");
		
		struct
		{
			struct FVoxelColorTexture                          VoxelTexture;
		} params;
		params.VoxelTexture = VoxelTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateSingleIndexPaintMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelPaintMaterialSingleIndex              SingleIndex                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVoxelPaintMaterial UVoxelBlueprintLibrary::CreateSingleIndexPaintMaterial(const struct FVoxelPaintMaterialSingleIndex& SingleIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateSingleIndexPaintMaterial");
		
		struct
		{
			struct FVoxelPaintMaterialSingleIndex              SingleIndex;
		} params;
		params.SingleIndex = SingleIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateOrUpdateTextureFromVoxelFloatTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelFloatTexture                          VoxelTexture                                               (Parm, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  Texture                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UVoxelBlueprintLibrary::CreateOrUpdateTextureFromVoxelFloatTexture(const struct FVoxelFloatTexture& VoxelTexture, class UTexture2D** Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateOrUpdateTextureFromVoxelFloatTexture");
		
		struct
		{
			struct FVoxelFloatTexture                          VoxelTexture;
			class UTexture2D*                                  Texture;
		} params;
		params.VoxelTexture = VoxelTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Texture != nullptr)
			*Texture = params.Texture;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateOrUpdateTextureFromVoxelColorTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelColorTexture                          VoxelTexture                                               (Parm, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  Texture                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UVoxelBlueprintLibrary::CreateOrUpdateTextureFromVoxelColorTexture(const struct FVoxelColorTexture& VoxelTexture, class UTexture2D** Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateOrUpdateTextureFromVoxelColorTexture");
		
		struct
		{
			struct FVoxelColorTexture                          VoxelTexture;
			class UTexture2D*                                  Texture;
		} params;
		params.VoxelTexture = VoxelTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Texture != nullptr)
			*Texture = params.Texture;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateMultiIndexWetnessPaintMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelPaintMaterialMultiIndexWetness        MultiIndexWetness                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVoxelPaintMaterial UVoxelBlueprintLibrary::CreateMultiIndexWetnessPaintMaterial(const struct FVoxelPaintMaterialMultiIndexWetness& MultiIndexWetness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateMultiIndexWetnessPaintMaterial");
		
		struct
		{
			struct FVoxelPaintMaterialMultiIndexWetness        MultiIndexWetness;
		} params;
		params.MultiIndexWetness = MultiIndexWetness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateMultiIndexRawPaintMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelPaintMaterialMultiIndexRaw            MultiIndexRaw                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVoxelPaintMaterial UVoxelBlueprintLibrary::CreateMultiIndexRawPaintMaterial(const struct FVoxelPaintMaterialMultiIndexRaw& MultiIndexRaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateMultiIndexRawPaintMaterial");
		
		struct
		{
			struct FVoxelPaintMaterialMultiIndexRaw            MultiIndexRaw;
		} params;
		params.MultiIndexRaw = MultiIndexRaw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateMultiIndexPaintMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelPaintMaterialMultiIndex               MultiIndex                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	struct FVoxelPaintMaterial UVoxelBlueprintLibrary::CreateMultiIndexPaintMaterial(const struct FVoxelPaintMaterialMultiIndex& MultiIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateMultiIndexPaintMaterial");
		
		struct
		{
			struct FVoxelPaintMaterialMultiIndex               MultiIndex;
		} params;
		params.MultiIndex = MultiIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateFiveWayBlendPaintMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelPaintMaterialFiveWayBlend             FiveWayBlend                                               (Parm, NativeAccessSpecifierPublic)
	 */
	struct FVoxelPaintMaterial UVoxelBlueprintLibrary::CreateFiveWayBlendPaintMaterial(const struct FVoxelPaintMaterialFiveWayBlend& FiveWayBlend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateFiveWayBlendPaintMaterial");
		
		struct
		{
			struct FVoxelPaintMaterialFiveWayBlend             FiveWayBlend;
		} params;
		params.FiveWayBlend = FiveWayBlend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateColorPaintMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelPaintMaterialColor                    Color                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVoxelPaintMaterial UVoxelBlueprintLibrary::CreateColorPaintMaterial(const struct FVoxelPaintMaterialColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateColorPaintMaterial");
		
		struct
		{
			struct FVoxelPaintMaterialColor                    Color;
		} params;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.CompactVoxelTexturePool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::CompactVoxelTexturePool(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CompactVoxelTexturePool");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.ClearValueData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::ClearValueData(class AVoxelWorld* World, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.ClearValueData");
		
		struct
		{
			class AVoxelWorld*                                 World;
			bool                                               bUpdateRender;
		} params;
		params.World = World;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.ClearMaterialData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::ClearMaterialData(class AVoxelWorld* World, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.ClearMaterialData");
		
		struct
		{
			class AVoxelWorld*                                 World;
			bool                                               bUpdateRender;
		} params;
		params.World = World;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.ClearFrames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::ClearFrames(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.ClearFrames");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.ClearDirtyData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::ClearDirtyData(class AVoxelWorld* World, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.ClearDirtyData");
		
		struct
		{
			class AVoxelWorld*                                 World;
			bool                                               bUpdateRender;
		} params;
		params.World = World;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.ClearAllData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::ClearAllData(class AVoxelWorld* World, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.ClearAllData");
		
		struct
		{
			class AVoxelWorld*                                 World;
			bool                                               bUpdateRender;
		} params;
		params.World = World;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.BindVoxelGenerationEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnGenerate                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bFireExistingOnes                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ChunkSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GenerationDistanceInChunks                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::BindVoxelGenerationEvent(class AVoxelWorld* World, const class FScriptDelegate& OnGenerate, bool bFireExistingOnes, int32_t ChunkSize, int32_t GenerationDistanceInChunks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.BindVoxelGenerationEvent");
		
		struct
		{
			class AVoxelWorld*                                 World;
			class FScriptDelegate                              OnGenerate;
			bool                                               bFireExistingOnes;
			int32_t                                            ChunkSize;
			int32_t                                            GenerationDistanceInChunks;
		} params;
		params.World = World;
		params.OnGenerate = OnGenerate;
		params.bFireExistingOnes = bFireExistingOnes;
		params.ChunkSize = ChunkSize;
		params.GenerationDistanceInChunks = GenerationDistanceInChunks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.BindVoxelChunkEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnActivate                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnDeactivate                                               (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bFireExistingOnes                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ChunkSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ActivationDistanceInChunks                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::BindVoxelChunkEvents(class AVoxelWorld* World, const class FScriptDelegate& OnActivate, const class FScriptDelegate& OnDeactivate, bool bFireExistingOnes, int32_t ChunkSize, int32_t ActivationDistanceInChunks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.BindVoxelChunkEvents");
		
		struct
		{
			class AVoxelWorld*                                 World;
			class FScriptDelegate                              OnActivate;
			class FScriptDelegate                              OnDeactivate;
			bool                                               bFireExistingOnes;
			int32_t                                            ChunkSize;
			int32_t                                            ActivationDistanceInChunks;
		} params;
		params.World = World;
		params.OnActivate = OnActivate;
		params.OnDeactivate = OnDeactivate;
		params.bFireExistingOnes = bFireExistingOnes;
		params.ChunkSize = ChunkSize;
		params.ActivationDistanceInChunks = ActivationDistanceInChunks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.AreCollisionsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LOD                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelBlueprintLibrary::AreCollisionsEnabled(class AVoxelWorld* World, const struct FVector& Position, int32_t* LOD, bool bConvertToVoxelSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.AreCollisionsEnabled");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVector                                     Position;
			int32_t                                            LOD;
			bool                                               bConvertToVoxelSpace;
		} params;
		params.World = World;
		params.Position = Position;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LOD != nullptr)
			*LOD = params.LOD;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.ApplyPaintMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelMaterial                              Material                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelPaintMaterial                         PaintMaterial                                              (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelMaterial UVoxelBlueprintLibrary::ApplyPaintMaterial(const struct FVoxelMaterial& Material, const struct FVoxelPaintMaterial& PaintMaterial, float Strength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.ApplyPaintMaterial");
		
		struct
		{
			struct FVoxelMaterial                              Material;
			struct FVoxelPaintMaterial                         PaintMaterial;
			float                                              Strength;
		} params;
		params.Material = Material;
		params.PaintMaterial = PaintMaterial;
		params.Strength = Strength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.ApplyNewMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::ApplyNewMaterials(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.ApplyNewMaterials");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.ApplyLODSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBlueprintLibrary::ApplyLODSettings(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.ApplyLODSettings");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.AddNeighborsToSet
	 * 		Flags  -> ()
	 */
	void UVoxelBlueprintLibrary::AddNeighborsToSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.AddNeighborsToSet");
		
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
	 * 		Name   -> Function Voxel.VoxelBlueprintLibrary.Add_IntVectorIntVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntVector                                  Left                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntVector UVoxelBlueprintLibrary::Add_IntVectorIntVector(const struct FIntVector& Left, const struct FIntVector& Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.Add_IntVectorIntVector");
		
		struct
		{
			struct FIntVector                                  Left;
			struct FIntVector                                  Right;
		} params;
		params.Left = Left;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintMaterialCollectionInterface.InitializeCollection
	 * 		Flags  -> ()
	 */
	void UVoxelBlueprintMaterialCollectionInterface::InitializeCollection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintMaterialCollectionInterface.InitializeCollection");
		
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
	 * 		Name   -> Function Voxel.VoxelBlueprintMaterialCollectionInterface.GetMaterials
	 * 		Flags  -> ()
	 */
	TArray<struct FVoxelMaterialCollectionMaterialInfo> UVoxelBlueprintMaterialCollectionInterface::GetMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintMaterialCollectionInterface.GetMaterials");
		
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
	 * 		Name   -> Function Voxel.VoxelBlueprintMaterialCollectionInterface.GetMaterialForIndices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Indices                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UMaterialInterface* UVoxelBlueprintMaterialCollectionInterface::GetMaterialForIndices(TArray<unsigned char> Indices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintMaterialCollectionInterface.GetMaterialForIndices");
		
		struct
		{
			TArray<unsigned char>                              Indices;
		} params;
		params.Indices = Indices;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBlueprintMaterialCollectionInterface.GetMaterialForIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelCubicFace                                    Face                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterialInterface* UVoxelBlueprintMaterialCollectionInterface::GetMaterialForIndex(int32_t Index, EVoxelCubicFace Face)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintMaterialCollectionInterface.GetMaterialForIndex");
		
		struct
		{
			int32_t                                            Index;
			EVoxelCubicFace                                    Face;
		} params;
		params.Index = Index;
		params.Face = Face;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelBlueprintMaterialCollectionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelBlueprintMaterialCollectionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelBlueprintMaterialCollectionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelCachedMaterialCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelCachedMaterialCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelCachedMaterialCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelBlueprintMaterialCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelBlueprintMaterialCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelBlueprintMaterialCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelToolsBase.GetModifiedVoxelValuesBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedVoxels                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelToolsBase::GetModifiedVoxelValuesBounds(TArray<struct FModifiedVoxelValue> ModifiedVoxels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolsBase.GetModifiedVoxelValuesBounds");
		
		struct
		{
			TArray<struct FModifiedVoxelValue>                 ModifiedVoxels;
		} params;
		params.ModifiedVoxels = ModifiedVoxels;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelToolsBase.GetModifiedVoxelMaterialsBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelMaterial>              ModifiedVoxels                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelToolsBase::GetModifiedVoxelMaterialsBounds(TArray<struct FModifiedVoxelMaterial> ModifiedVoxels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolsBase.GetModifiedVoxelMaterialsBounds");
		
		struct
		{
			TArray<struct FModifiedVoxelMaterial>              ModifiedVoxels;
		} params;
		params.ModifiedVoxels = ModifiedVoxels;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelToolsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelToolsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelToolsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBoxTools.SetValueBoxAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBoxTools::SetValueBoxAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelIntBox& Bounds, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBoxTools.SetValueBoxAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVoxelIntBox                                Bounds;
			float                                              Value;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.Bounds = Bounds;
		params.Value = Value;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBoxTools.SetValueBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBoxTools::SetValueBox(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelIntBox& Bounds, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBoxTools.SetValueBox");
		
		struct
		{
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVoxelIntBox                                Bounds;
			float                                              Value;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.Bounds = Bounds;
		params.Value = Value;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBoxTools.SetMaterialBoxAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelPaintMaterial                         PaintMaterial                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedMaterials                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBoxTools::SetMaterialBoxAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelIntBox& Bounds, const struct FVoxelPaintMaterial& PaintMaterial, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBoxTools.SetMaterialBoxAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVoxelIntBox                                Bounds;
			struct FVoxelPaintMaterial                         PaintMaterial;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedMaterials;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.Bounds = Bounds;
		params.PaintMaterial = PaintMaterial;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedMaterials = bRecordModifiedMaterials;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedMaterials != nullptr)
			*ModifiedMaterials = params.ModifiedMaterials;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBoxTools.SetMaterialBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelPaintMaterial                         PaintMaterial                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedMaterials                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBoxTools::SetMaterialBox(TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelIntBox& Bounds, const struct FVoxelPaintMaterial& PaintMaterial, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBoxTools.SetMaterialBox");
		
		struct
		{
			TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVoxelIntBox                                Bounds;
			struct FVoxelPaintMaterial                         PaintMaterial;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedMaterials;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.Bounds = Bounds;
		params.PaintMaterial = PaintMaterial;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedMaterials = bRecordModifiedMaterials;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedMaterials != nullptr)
			*ModifiedMaterials = params.ModifiedMaterials;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBoxTools.RemoveBoxAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBoxTools::RemoveBoxAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBoxTools.RemoveBoxAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVoxelIntBox                                Bounds;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.Bounds = Bounds;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBoxTools.RemoveBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBoxTools::RemoveBox(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBoxTools.RemoveBox");
		
		struct
		{
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVoxelIntBox                                Bounds;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.Bounds = Bounds;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBoxTools.AddBoxAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBoxTools::AddBoxAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBoxTools.AddBoxAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVoxelIntBox                                Bounds;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.Bounds = Bounds;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelBoxTools.AddBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelBoxTools::AddBox(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBoxTools.AddBox");
		
		struct
		{
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVoxelIntBox                                Bounds;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.Bounds = Bounds;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelBoxTools.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelBoxTools::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelBoxTools");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AVoxelCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVoxelCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSubsystemProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelSubsystemProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelStaticSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelStaticSubsystemProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelStaticSubsystemProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelChunksSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelChunksSubsystemProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelChunksSubsystemProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelChunkGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelChunkGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelChunkGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelCookingLibrary.MakeVoxelCookingSettingsFromVoxelWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelCookingSettings UVoxelCookingLibrary::MakeVoxelCookingSettingsFromVoxelWorld(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelCookingLibrary.MakeVoxelCookingSettingsFromVoxelWorld");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelCookingLibrary.LoadCookedVoxelData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelCookedData                            CookedData                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelCookingLibrary::LoadCookedVoxelData(const struct FVoxelCookedData& CookedData, class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelCookingLibrary.LoadCookedVoxelData");
		
		struct
		{
			struct FVoxelCookedData                            CookedData;
			class AVoxelWorld*                                 World;
		} params;
		params.CookedData = CookedData;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelCookingLibrary.CookVoxelDataWithSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelCookingSettings                       Settings                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVoxelUncompressedWorldSave                 Save                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	struct FVoxelCookedData UVoxelCookingLibrary::CookVoxelDataWithSave(const struct FVoxelCookingSettings& Settings, const struct FVoxelUncompressedWorldSave& Save)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelCookingLibrary.CookVoxelDataWithSave");
		
		struct
		{
			struct FVoxelCookingSettings                       Settings;
			struct FVoxelUncompressedWorldSave                 Save;
		} params;
		params.Settings = Settings;
		params.Save = Save;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelCookingLibrary.CookVoxelData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelCookingSettings                       Settings                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	struct FVoxelCookedData UVoxelCookingLibrary::CookVoxelData(const struct FVoxelCookingSettings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelCookingLibrary.CookVoxelData");
		
		struct
		{
			struct FVoxelCookingSettings                       Settings;
		} params;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelCookingLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelCookingLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelCookingLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelCubicLibrary.SetCubicVoxelValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelCubicLibrary::SetCubicVoxelValue(class AVoxelWorld* World, const struct FIntVector& Position, bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelCubicLibrary.SetCubicVoxelValue");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FIntVector                                  Position;
			bool                                               bValue;
		} params;
		params.World = World;
		params.Position = Position;
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelCubicLibrary.GetCubicVoxelValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelCubicLibrary::GetCubicVoxelValue(class AVoxelWorld* World, const struct FIntVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelCubicLibrary.GetCubicVoxelValue");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FIntVector                                  Position;
		} params;
		params.World = World;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelCubicLibrary.GetCubicVoxelPositionFromHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitPosition                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitNormal                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelectVoxelOutside                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntVector UVoxelCubicLibrary::GetCubicVoxelPositionFromHit(class AVoxelWorld* World, const struct FVector& HitPosition, const struct FVector& HitNormal, bool bSelectVoxelOutside)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelCubicLibrary.GetCubicVoxelPositionFromHit");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVector                                     HitPosition;
			struct FVector                                     HitNormal;
			bool                                               bSelectVoxelOutside;
		} params;
		params.World = World;
		params.HitPosition = HitPosition;
		params.HitNormal = HitNormal;
		params.bSelectVoxelOutside = bSelectVoxelOutside;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelCubicLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelCubicLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelCubicLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelTransformableGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelTransformableGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelTransformableGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelTransformableGeneratorWithBounds.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelTransformableGeneratorWithBounds::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelTransformableGeneratorWithBounds");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataAsset.GetSize
	 * 		Flags  -> ()
	 */
	struct FIntVector UVoxelDataAsset::GetSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataAsset.GetSize");
		
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
	 * 		Name   -> Function Voxel.VoxelDataAsset.GetBounds
	 * 		Flags  -> ()
	 */
	struct FVoxelIntBox UVoxelDataAsset::GetBounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataAsset.GetBounds");
		
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
	 * 		Name   -> PredefindFunction UVoxelDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataItemActor.ScheduleRefresh
	 * 		Flags  -> ()
	 */
	void AVoxelDataItemActor::ScheduleRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataItemActor.ScheduleRefresh");
		
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
	 * 		Name   -> Function Voxel.VoxelDataItemActor.K2_AddItemToWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVoxelDataItemActor::K2_AddItemToWorld(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataItemActor.K2_AddItemToWorld");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AVoxelDataItemActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVoxelDataItemActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelDataItemActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelDataSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelDataSubsystemProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelDataSubsystemProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.SetValueAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::SetValueAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FIntVector& Position, float Value, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.SetValueAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class AVoxelWorld*                                 World;
			struct FIntVector                                  Position;
			float                                              Value;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Position = Position;
		params.Value = Value;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::SetValue(class AVoxelWorld* World, const struct FIntVector& Position, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.SetValue");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FIntVector                                  Position;
			float                                              Value;
		} params;
		params.World = World;
		params.Position = Position;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.SetMaterialAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelMaterial                              Material                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::SetMaterialAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FIntVector& Position, const struct FVoxelMaterial& Material, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.SetMaterialAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class AVoxelWorld*                                 World;
			struct FIntVector                                  Position;
			struct FVoxelMaterial                              Material;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Position = Position;
		params.Material = Material;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.SetMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelMaterial                              Material                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Mask                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::SetMaterial(class AVoxelWorld* World, const struct FIntVector& Position, const struct FVoxelMaterial& Material, int32_t Mask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.SetMaterial");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FIntVector                                  Position;
			struct FVoxelMaterial                              Material;
			int32_t                                            Mask;
		} params;
		params.World = World;
		params.Position = Position;
		params.Material = Material;
		params.Mask = Mask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.SetBoxAsDirtyAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDirtyValues                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDirtyMaterials                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::SetBoxAsDirtyAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bDirtyValues, bool bDirtyMaterials, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.SetBoxAsDirtyAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bDirtyValues;
			bool                                               bDirtyMaterials;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Bounds = Bounds;
		params.bDirtyValues = bDirtyValues;
		params.bDirtyMaterials = bDirtyMaterials;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.SetBoxAsDirty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDirtyValues                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDirtyMaterials                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::SetBoxAsDirty(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bDirtyValues, bool bDirtyMaterials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.SetBoxAsDirty");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bDirtyValues;
			bool                                               bDirtyMaterials;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		params.bDirtyValues = bDirtyValues;
		params.bDirtyMaterials = bDirtyMaterials;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.RoundVoxelsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::RoundVoxelsAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.RoundVoxelsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Bounds = Bounds;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.RoundVoxels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::RoundVoxels(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.RoundVoxels");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.RoundToGeneratorAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPreserveNormals                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::RoundToGeneratorAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bPreserveNormals, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.RoundToGeneratorAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bPreserveNormals;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Bounds = Bounds;
		params.bPreserveNormals = bPreserveNormals;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.RoundToGenerator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPreserveNormals                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::RoundToGenerator(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bPreserveNormals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.RoundToGenerator");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bPreserveNormals;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		params.bPreserveNormals = bPreserveNormals;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.LoadFromSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelUncompressedWorldSave                 Save                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UVoxelDataTools::LoadFromSave(class AVoxelWorld* World, const struct FVoxelUncompressedWorldSave& Save)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.LoadFromSave");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelUncompressedWorldSave                 Save;
		} params;
		params.World = World;
		params.Save = Save;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.LoadFromCompressedSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelCompressedWorldSave                   Save                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UVoxelDataTools::LoadFromCompressedSave(class AVoxelWorld* World, const struct FVoxelCompressedWorldSave& Save)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.LoadFromCompressedSave");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelCompressedWorldSave                   Save;
		} params;
		params.World = World;
		params.Save = Save;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.GetVoxelsValueAndMaterialAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVoxelValueMaterial>                 Voxels                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FIntVector>                          Positions                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::GetVoxelsValueAndMaterialAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FVoxelValueMaterial>* Voxels, class AVoxelWorld* World, TArray<struct FIntVector> Positions, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.GetVoxelsValueAndMaterialAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FVoxelValueMaterial>                 Voxels;
			class AVoxelWorld*                                 World;
			TArray<struct FIntVector>                          Positions;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Positions = Positions;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Voxels != nullptr)
			*Voxels = params.Voxels;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.GetVoxelsValueAndMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVoxelValueMaterial>                 Voxels                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FIntVector>                          Positions                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::GetVoxelsValueAndMaterial(TArray<struct FVoxelValueMaterial>* Voxels, class AVoxelWorld* World, TArray<struct FIntVector> Positions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.GetVoxelsValueAndMaterial");
		
		struct
		{
			TArray<struct FVoxelValueMaterial>                 Voxels;
			class AVoxelWorld*                                 World;
			TArray<struct FIntVector>                          Positions;
		} params;
		params.World = World;
		params.Positions = Positions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Voxels != nullptr)
			*Voxels = params.Voxels;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.GetValueAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::GetValueAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float* Value, class AVoxelWorld* World, const struct FIntVector& Position, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.GetValueAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			float                                              Value;
			class AVoxelWorld*                                 World;
			struct FIntVector                                  Position;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Position = Position;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.GetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::GetValue(float* Value, class AVoxelWorld* World, const struct FIntVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.GetValue");
		
		struct
		{
			float                                              Value;
			class AVoxelWorld*                                 World;
			struct FIntVector                                  Position;
		} params;
		params.World = World;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.GetSaveAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelUncompressedWorldSave                 OutSave                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::GetSaveAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, struct FVoxelUncompressedWorldSave* OutSave, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.GetSaveAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class AVoxelWorld*                                 World;
			struct FVoxelUncompressedWorldSave                 OutSave;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSave != nullptr)
			*OutSave = params.OutSave;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.GetSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelUncompressedWorldSave                 OutSave                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::GetSave(class AVoxelWorld* World, struct FVoxelUncompressedWorldSave* OutSave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.GetSave");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelUncompressedWorldSave                 OutSave;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSave != nullptr)
			*OutSave = params.OutSave;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.GetMaterialAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelMaterial                              Material                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::GetMaterialAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelMaterial* Material, class AVoxelWorld* World, const struct FIntVector& Position, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.GetMaterialAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			struct FVoxelMaterial                              Material;
			class AVoxelWorld*                                 World;
			struct FIntVector                                  Position;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Position = Position;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Material != nullptr)
			*Material = params.Material;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.GetMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelMaterial                              Material                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::GetMaterial(struct FVoxelMaterial* Material, class AVoxelWorld* World, const struct FIntVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.GetMaterial");
		
		struct
		{
			struct FVoxelMaterial                              Material;
			class AVoxelWorld*                                 World;
			struct FIntVector                                  Position;
		} params;
		params.World = World;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Material != nullptr)
			*Material = params.Material;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.GetInterpolatedValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::GetInterpolatedValue(float* Value, class AVoxelWorld* World, const struct FVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.GetInterpolatedValue");
		
		struct
		{
			float                                              Value;
			class AVoxelWorld*                                 World;
			struct FVector                                     Position;
		} params;
		params.World = World;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.GetDataMemoryUsageInMB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelDataMemoryUsageInMB UVoxelDataTools::GetDataMemoryUsageInMB(class AVoxelWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.GetDataMemoryUsageInMB");
		
		struct
		{
			class AVoxelWorld*                                 World;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.GetCompressedSaveAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelCompressedWorldSave                   OutSave                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::GetCompressedSaveAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, struct FVoxelCompressedWorldSave* OutSave, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.GetCompressedSaveAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class AVoxelWorld*                                 World;
			struct FVoxelCompressedWorldSave                   OutSave;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSave != nullptr)
			*OutSave = params.OutSave;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.GetCompressedSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelCompressedWorldSave                   OutSave                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::GetCompressedSave(class AVoxelWorld* World, struct FVoxelCompressedWorldSave* OutSave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.GetCompressedSave");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelCompressedWorldSave                   OutSave;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSave != nullptr)
			*OutSave = params.OutSave;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.FindClosestNonEmptyVoxelAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelFindClosestNonEmptyVoxelResult        Result                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReadMaterial                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::FindClosestNonEmptyVoxelAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelFindClosestNonEmptyVoxelResult* Result, class AVoxelWorld* World, const struct FVector& Position, bool bReadMaterial, bool bConvertToVoxelSpace, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.FindClosestNonEmptyVoxelAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			struct FVoxelFindClosestNonEmptyVoxelResult        Result;
			class AVoxelWorld*                                 World;
			struct FVector                                     Position;
			bool                                               bReadMaterial;
			bool                                               bConvertToVoxelSpace;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Position = Position;
		params.bReadMaterial = bReadMaterial;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.FindClosestNonEmptyVoxel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelFindClosestNonEmptyVoxelResult        Result                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReadMaterial                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::FindClosestNonEmptyVoxel(struct FVoxelFindClosestNonEmptyVoxelResult* Result, class AVoxelWorld* World, const struct FVector& Position, bool bReadMaterial, bool bConvertToVoxelSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.FindClosestNonEmptyVoxel");
		
		struct
		{
			struct FVoxelFindClosestNonEmptyVoxelResult        Result;
			class AVoxelWorld*                                 World;
			struct FVector                                     Position;
			bool                                               bReadMaterial;
			bool                                               bConvertToVoxelSpace;
		} params;
		params.World = World;
		params.Position = Position;
		params.bReadMaterial = bReadMaterial;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.CompressIntoHeightmap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVoxelHeightmapAsset*                        HeightmapAsset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHeightmapAssetMatchesWorld                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::CompressIntoHeightmap(class AVoxelWorld* World, class UVoxelHeightmapAsset* HeightmapAsset, bool bHeightmapAssetMatchesWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.CompressIntoHeightmap");
		
		struct
		{
			class AVoxelWorld*                                 World;
			class UVoxelHeightmapAsset*                        HeightmapAsset;
			bool                                               bHeightmapAssetMatchesWorld;
		} params;
		params.World = World;
		params.HeightmapAsset = HeightmapAsset;
		params.bHeightmapAssetMatchesWorld = bHeightmapAssetMatchesWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.ClearUnusedMaterialsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::ClearUnusedMaterialsAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.ClearUnusedMaterialsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Bounds = Bounds;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.ClearUnusedMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::ClearUnusedMaterials(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.ClearUnusedMaterials");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.ClearCachedValuesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::ClearCachedValuesAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.ClearCachedValuesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Bounds = Bounds;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.ClearCachedValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::ClearCachedValues(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.ClearCachedValues");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.ClearCachedMaterialsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::ClearCachedMaterialsAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.ClearCachedMaterialsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Bounds = Bounds;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.ClearCachedMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::ClearCachedMaterials(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.ClearCachedMaterials");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.CheckIfSameAsGeneratorAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::CheckIfSameAsGeneratorAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.CheckIfSameAsGeneratorAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Bounds = Bounds;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.CheckIfSameAsGenerator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::CheckIfSameAsGenerator(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.CheckIfSameAsGenerator");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.CheckForSingleValuesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::CheckForSingleValuesAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.CheckForSingleValuesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Bounds = Bounds;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.CheckForSingleValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::CheckForSingleValues(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.CheckForSingleValues");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.CheckForSingleMaterialsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::CheckForSingleMaterialsAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.CheckForSingleMaterialsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Bounds = Bounds;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.CheckForSingleMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::CheckForSingleMaterials(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.CheckForSingleMaterials");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.CacheValuesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::CacheValuesAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.CacheValuesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Bounds = Bounds;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.CacheValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::CacheValues(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bMultiThreaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.CacheValues");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bMultiThreaded;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		params.bMultiThreaded = bMultiThreaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.CacheMaterialsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::CacheMaterialsAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.CacheMaterialsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Bounds = Bounds;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDataTools.CacheMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDataTools::CacheMaterials(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bMultiThreaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.CacheMaterials");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bMultiThreaded;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		params.bMultiThreaded = bMultiThreaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelDataTools.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelDataTools::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelDataTools");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelDebugSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelDebugSubsystemProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelDebugSubsystemProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDebugUtilities.DrawDebugIntBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		float                                              LifeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDebugUtilities::DrawDebugIntBox(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, const struct FTransform& Transform, float LifeTime, float Thickness, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDebugUtilities.DrawDebugIntBox");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			struct FTransform                                  Transform;
			float                                              LifeTime;
			float                                              Thickness;
			struct FLinearColor                                Color;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		params.Transform = Transform;
		params.LifeTime = LifeTime;
		params.Thickness = Thickness;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDebugUtilities.DrawDataOctree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelDataType                                     DataType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LifeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowSingle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowCached                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      SingleColor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      SingleDirtyColor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      CachedColor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      DirtyColor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDebugUtilities::DrawDataOctree(class AVoxelWorld* World, EVoxelDataType DataType, float LifeTime, bool bShowSingle, bool bShowCached, const struct FColor& SingleColor, const struct FColor& SingleDirtyColor, const struct FColor& CachedColor, const struct FColor& DirtyColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDebugUtilities.DrawDataOctree");
		
		struct
		{
			class AVoxelWorld*                                 World;
			EVoxelDataType                                     DataType;
			float                                              LifeTime;
			bool                                               bShowSingle;
			bool                                               bShowCached;
			struct FColor                                      SingleColor;
			struct FColor                                      SingleDirtyColor;
			struct FColor                                      CachedColor;
			struct FColor                                      DirtyColor;
		} params;
		params.World = World;
		params.DataType = DataType;
		params.LifeTime = LifeTime;
		params.bShowSingle = bShowSingle;
		params.bShowCached = bShowCached;
		params.SingleColor = SingleColor;
		params.SingleDirtyColor = SingleDirtyColor;
		params.CachedColor = CachedColor;
		params.DirtyColor = DirtyColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelDebugUtilities.DebugVoxelsInsideBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LifeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDebugDensities                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                TextColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelDebugUtilities::DebugVoxelsInsideBounds(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, const struct FLinearColor& Color, float LifeTime, float Thickness, bool bDebugDensities, const struct FLinearColor& TextColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDebugUtilities.DebugVoxelsInsideBounds");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			struct FLinearColor                                Color;
			float                                              LifeTime;
			float                                              Thickness;
			bool                                               bDebugDensities;
			struct FLinearColor                                TextColor;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		params.Color = Color;
		params.LifeTime = LifeTime;
		params.Thickness = Thickness;
		params.bDebugDensities = bDebugDensities;
		params.TextColor = TextColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelDebugUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelDebugUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelDebugUtilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelDynamicSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelDynamicSubsystemProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelDynamicSubsystemProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelLODSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelLODSubsystemProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelLODSubsystemProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelDefaultLODSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelDefaultLODSubsystemProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelDefaultLODSubsystemProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelRendererSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelRendererSubsystemProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelRendererSubsystemProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelDefaultRendererSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelDefaultRendererSubsystemProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelDefaultRendererSubsystemProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AVoxelDisableEditsBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVoxelDisableEditsBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelDisableEditsBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelEmptyGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelEmptyGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelEmptyGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelErosion.Step
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelErosion::Step(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelErosion.Step");
		
		struct
		{
			int32_t                                            Count;
		} params;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelErosion.IsInitialized
	 * 		Flags  -> ()
	 */
	bool UVoxelErosion::IsInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelErosion.IsInitialized");
		
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
	 * 		Name   -> Function Voxel.VoxelErosion.Initialize
	 * 		Flags  -> ()
	 */
	void UVoxelErosion::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelErosion.Initialize");
		
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
	 * 		Name   -> Function Voxel.VoxelErosion.GetWaterHeightTexture
	 * 		Flags  -> ()
	 */
	struct FVoxelFloatTexture UVoxelErosion::GetWaterHeightTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelErosion.GetWaterHeightTexture");
		
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
	 * 		Name   -> Function Voxel.VoxelErosion.GetTerrainHeightTexture
	 * 		Flags  -> ()
	 */
	struct FVoxelFloatTexture UVoxelErosion::GetTerrainHeightTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelErosion.GetTerrainHeightTexture");
		
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
	 * 		Name   -> Function Voxel.VoxelErosion.GetSedimentTexture
	 * 		Flags  -> ()
	 */
	struct FVoxelFloatTexture UVoxelErosion::GetSedimentTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelErosion.GetSedimentTexture");
		
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
	 * 		Name   -> PredefindFunction UVoxelErosion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelErosion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelErosion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelEventSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelEventSubsystemProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelEventSubsystemProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelFixedResolutionLODSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelFixedResolutionLODSubsystemProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelFixedResolutionLODSubsystemProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelFlatGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelFlatGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelFlatGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelTool.MakeVoxelToolTickData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEdit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FName, bool>                            Keys                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TMap<class FName, float>                           Axes                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   MousePosition                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     CameraDirection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECollisionChannel                                  CollisionChannel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelToolTickData UVoxelTool::MakeVoxelToolTickData(class APlayerController* PlayerController, bool bEdit, TMap<class FName, bool> Keys, TMap<class FName, float> Axes, const struct FVector2D& MousePosition, const struct FVector& CameraDirection, ECollisionChannel CollisionChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTool.MakeVoxelToolTickData");
		
		struct
		{
			class APlayerController*                           PlayerController;
			bool                                               bEdit;
			TMap<class FName, bool>                            Keys;
			TMap<class FName, float>                           Axes;
			struct FVector2D                                   MousePosition;
			struct FVector                                     CameraDirection;
			ECollisionChannel                                  CollisionChannel;
		} params;
		params.PlayerController = PlayerController;
		params.bEdit = bEdit;
		params.Keys = Keys;
		params.Axes = Axes;
		params.MousePosition = MousePosition;
		params.CameraDirection = CameraDirection;
		params.CollisionChannel = CollisionChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelTool.MakeVoxelTool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ToolClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVoxelTool* UVoxelTool::MakeVoxelTool(class UClass* ToolClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTool.MakeVoxelTool");
		
		struct
		{
			class UClass*                                      ToolClass;
		} params;
		params.ToolClass = ToolClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelTool.MakeToolKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAlternativeMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TMap<class FName, bool> UVoxelTool::MakeToolKeys(bool bAlternativeMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTool.MakeToolKeys");
		
		struct
		{
			bool                                               bAlternativeMode;
		} params;
		params.bAlternativeMode = bAlternativeMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelTool.MakeToolAxes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BrushSizeDelta                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FalloffDelta                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StrengthDelta                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TMap<class FName, float> UVoxelTool::MakeToolAxes(float BrushSizeDelta, float FalloffDelta, float StrengthDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTool.MakeToolAxes");
		
		struct
		{
			float                                              BrushSizeDelta;
			float                                              FalloffDelta;
			float                                              StrengthDelta;
		} params;
		params.BrushSizeDelta = BrushSizeDelta;
		params.FalloffDelta = FalloffDelta;
		params.StrengthDelta = StrengthDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelTool.K2_SimpleTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEdit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FName, bool>                            Keys                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TMap<class FName, float>                           Axes                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              DoEditOverride                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		ECollisionChannel                                  CollisionChannel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelTool::K2_SimpleTick(class APlayerController* PlayerController, bool bEdit, TMap<class FName, bool> Keys, TMap<class FName, float> Axes, const class FScriptDelegate& DoEditOverride, ECollisionChannel CollisionChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTool.K2_SimpleTick");
		
		struct
		{
			class APlayerController*                           PlayerController;
			bool                                               bEdit;
			TMap<class FName, bool>                            Keys;
			TMap<class FName, float>                           Axes;
			class FScriptDelegate                              DoEditOverride;
			ECollisionChannel                                  CollisionChannel;
		} params;
		params.PlayerController = PlayerController;
		params.bEdit = bEdit;
		params.Keys = Keys;
		params.Axes = Axes;
		params.DoEditOverride = DoEditOverride;
		params.CollisionChannel = CollisionChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelTool.K2_AdvancedTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelToolTickData                          TickData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              DoEditOverride                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	void UVoxelTool::K2_AdvancedTick(class UObject* WorldContextObject, const struct FVoxelToolTickData& TickData, const class FScriptDelegate& DoEditOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTool.K2_AdvancedTick");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVoxelToolTickData                          TickData;
			class FScriptDelegate                              DoEditOverride;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.TickData = TickData;
		params.DoEditOverride = DoEditOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelTool.IsKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelToolTickData                          TickData                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelTool::IsKeyDown(const struct FVoxelToolTickData& TickData, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTool.IsKeyDown");
		
		struct
		{
			struct FVoxelToolTickData                          TickData;
			class FName                                        Key;
		} params;
		params.TickData = TickData;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelTool.IsAlternativeMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelToolTickData                          TickData                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	bool UVoxelTool::IsAlternativeMode(const struct FVoxelToolTickData& TickData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTool.IsAlternativeMode");
		
		struct
		{
			struct FVoxelToolTickData                          TickData;
		} params;
		params.TickData = TickData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelTool.GetVoxelWorld
	 * 		Flags  -> ()
	 */
	class AVoxelWorld* UVoxelTool::GetVoxelWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTool.GetVoxelWorld");
		
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
	 * 		Name   -> Function Voxel.VoxelTool.GetToolName
	 * 		Flags  -> ()
	 */
	class FName UVoxelTool::GetToolName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTool.GetToolName");
		
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
	 * 		Name   -> Function Voxel.VoxelTool.GetRayOrigin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelToolTickData                          TickData                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	struct FVector UVoxelTool::GetRayOrigin(const struct FVoxelToolTickData& TickData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTool.GetRayOrigin");
		
		struct
		{
			struct FVoxelToolTickData                          TickData;
		} params;
		params.TickData = TickData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelTool.GetRayDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelToolTickData                          TickData                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	struct FVector UVoxelTool::GetRayDirection(const struct FVoxelToolTickData& TickData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTool.GetRayDirection");
		
		struct
		{
			struct FVoxelToolTickData                          TickData;
		} params;
		params.TickData = TickData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelTool.GetAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelToolTickData                          TickData                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		class FName                                        Axis                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVoxelTool::GetAxis(const struct FVoxelToolTickData& TickData, const class FName& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTool.GetAxis");
		
		struct
		{
			struct FVoxelToolTickData                          TickData;
			class FName                                        Axis;
		} params;
		params.TickData = TickData;
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelTool.EnableTool
	 * 		Flags  -> ()
	 */
	void UVoxelTool::EnableTool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTool.EnableTool");
		
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
	 * 		Name   -> DelegateFunction Voxel.VoxelTool.DoEditDynamicOverride__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelTool::DoEditDynamicOverride__DelegateSignature(const struct FVector& Position, const struct FVector& Normal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Voxel.VoxelTool.DoEditDynamicOverride__DelegateSignature");
		
		struct
		{
			struct FVector                                     Position;
			struct FVector                                     Normal;
		} params;
		params.Position = Position;
		params.Normal = Normal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelTool.DisableTool
	 * 		Flags  -> ()
	 */
	void UVoxelTool::DisableTool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTool.DisableTool");
		
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
	 * 		Name   -> Function Voxel.VoxelTool.Deproject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelToolTickData                          TickData                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   ScreenPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldPosition                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldDirection                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelTool::Deproject(const struct FVoxelToolTickData& TickData, const struct FVector2D& ScreenPosition, struct FVector* WorldPosition, struct FVector* WorldDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTool.Deproject");
		
		struct
		{
			struct FVoxelToolTickData                          TickData;
			struct FVector2D                                   ScreenPosition;
			struct FVector                                     WorldPosition;
			struct FVector                                     WorldDirection;
		} params;
		params.TickData = TickData;
		params.ScreenPosition = ScreenPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldPosition != nullptr)
			*WorldPosition = params.WorldPosition;
		if (WorldDirection != nullptr)
			*WorldDirection = params.WorldDirection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelTool.Apply
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FName, bool>                            Keys                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TMap<class FName, float>                           Axes                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVoxelTool::Apply(class AVoxelWorld* World, const struct FVector& Position, const struct FVector& Normal, TMap<class FName, bool> Keys, TMap<class FName, float> Axes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTool.Apply");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVector                                     Position;
			struct FVector                                     Normal;
			TMap<class FName, bool>                            Keys;
			TMap<class FName, float>                           Axes;
		} params;
		params.World = World;
		params.Position = Position;
		params.Normal = Normal;
		params.Keys = Keys;
		params.Axes = Axes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelToolBase.UpdateToolMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMesh*                                 Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelToolBase::UpdateToolMesh(class UStaticMesh* Mesh, class UMaterialInterface* Material, const struct FTransform& Transform, const class FName& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolBase.UpdateToolMesh");
		
		struct
		{
			class UStaticMesh*                                 Mesh;
			class UMaterialInterface*                          Material;
			struct FTransform                                  Transform;
			class FName                                        ID;
		} params;
		params.Mesh = Mesh;
		params.Material = Material;
		params.Transform = Transform;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelToolBase.SetToolOverlayBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBox                                        Bounds                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVoxelToolBase::SetToolOverlayBounds(const struct FBox& Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolBase.SetToolOverlayBounds");
		
		struct
		{
			struct FBox                                        Bounds;
		} params;
		params.Bounds = Bounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelToolBase.LastFrameCanEdit
	 * 		Flags  -> ()
	 */
	bool UVoxelToolBase::LastFrameCanEdit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolBase.LastFrameCanEdit");
		
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
	 * 		Name   -> Function Voxel.VoxelToolBase.K2_UpdateRender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    OverlayMaterialInstance                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInstanceDynamic*                    MeshMaterialInstance                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelToolBase::K2_UpdateRender(class UMaterialInstanceDynamic* OverlayMaterialInstance, class UMaterialInstanceDynamic* MeshMaterialInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolBase.K2_UpdateRender");
		
		struct
		{
			class UMaterialInstanceDynamic*                    OverlayMaterialInstance;
			class UMaterialInstanceDynamic*                    MeshMaterialInstance;
		} params;
		params.OverlayMaterialInstance = OverlayMaterialInstance;
		params.MeshMaterialInstance = MeshMaterialInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelToolBase.K2_Tick
	 * 		Flags  -> ()
	 */
	void UVoxelToolBase::K2_Tick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolBase.K2_Tick");
		
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
	 * 		Name   -> Function Voxel.VoxelToolBase.K2_GetToolConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelToolBaseConfig                        InConfig                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelToolBaseConfig                        OutConfig                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVoxelToolBase::K2_GetToolConfig(const struct FVoxelToolBaseConfig& InConfig, struct FVoxelToolBaseConfig* OutConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolBase.K2_GetToolConfig");
		
		struct
		{
			struct FVoxelToolBaseConfig                        InConfig;
			struct FVoxelToolBaseConfig                        OutConfig;
		} params;
		params.InConfig = InConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConfig != nullptr)
			*OutConfig = params.OutConfig;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelToolBase.K2_DoEdit
	 * 		Flags  -> ()
	 */
	struct FVoxelIntBoxWithValidity UVoxelToolBase::K2_DoEdit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolBase.K2_DoEdit");
		
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
	 * 		Name   -> Function Voxel.VoxelToolBase.GetValueAfterAxisInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AxisName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CurrentValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Min                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Max                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVoxelToolBase::GetValueAfterAxisInput(const class FName& AxisName, float CurrentValue, float Min, float Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolBase.GetValueAfterAxisInput");
		
		struct
		{
			class FName                                        AxisName;
			float                                              CurrentValue;
			float                                              Min;
			float                                              Max;
		} params;
		params.AxisName = AxisName;
		params.CurrentValue = CurrentValue;
		params.Min = Min;
		params.Max = Max;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelToolBase.GetToolPreviewPosition
	 * 		Flags  -> ()
	 */
	struct FVector UVoxelToolBase::GetToolPreviewPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolBase.GetToolPreviewPosition");
		
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
	 * 		Name   -> Function Voxel.VoxelToolBase.GetToolPosition
	 * 		Flags  -> ()
	 */
	struct FVector UVoxelToolBase::GetToolPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolBase.GetToolPosition");
		
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
	 * 		Name   -> Function Voxel.VoxelToolBase.GetToolNormal
	 * 		Flags  -> ()
	 */
	struct FVector UVoxelToolBase::GetToolNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolBase.GetToolNormal");
		
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
	 * 		Name   -> Function Voxel.VoxelToolBase.GetToolDirection
	 * 		Flags  -> ()
	 */
	struct FVector UVoxelToolBase::GetToolDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolBase.GetToolDirection");
		
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
	 * 		Name   -> Function Voxel.VoxelToolBase.GetTickData
	 * 		Flags  -> ()
	 */
	struct FVoxelToolTickData UVoxelToolBase::GetTickData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolBase.GetTickData");
		
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
	 * 		Name   -> Function Voxel.VoxelToolBase.GetMouseMovementSize
	 * 		Flags  -> ()
	 */
	float UVoxelToolBase::GetMouseMovementSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolBase.GetMouseMovementSize");
		
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
	 * 		Name   -> Function Voxel.VoxelToolBase.GetLastFrameTickData
	 * 		Flags  -> ()
	 */
	struct FVoxelToolTickData UVoxelToolBase::GetLastFrameTickData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolBase.GetLastFrameTickData");
		
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
	 * 		Name   -> Function Voxel.VoxelToolBase.GetDeltaTime
	 * 		Flags  -> ()
	 */
	float UVoxelToolBase::GetDeltaTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolBase.GetDeltaTime");
		
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
	 * 		Name   -> Function Voxel.VoxelToolBase.GetBoundsToCache
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Bounds                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelToolBase::GetBoundsToCache(const struct FVoxelIntBox& Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolBase.GetBoundsToCache");
		
		struct
		{
			struct FVoxelIntBox                                Bounds;
		} params;
		params.Bounds = Bounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelToolBase.CanEdit
	 * 		Flags  -> ()
	 */
	bool UVoxelToolBase::CanEdit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolBase.CanEdit");
		
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
	 * 		Name   -> PredefindFunction UVoxelToolBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelToolBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelToolBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelFlattenTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelFlattenTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelFlattenTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelFoliageBiomeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelFoliageBiomeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelFoliageBiomeBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelFoliageCollectionBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelFoliageCollectionBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelFoliageCollectionBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelFoliageInterfaceSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelFoliageInterfaceSubsystemProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelFoliageInterfaceSubsystemProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGeneratorCacheSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGeneratorCacheSubsystemProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelGeneratorCacheSubsystemProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelGeneratorCache.MakeTransformableGeneratorInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelTransformableGeneratorPicker          Picker                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVoxelTransformableGeneratorInstanceWrapper* UVoxelGeneratorCache::MakeTransformableGeneratorInstance(const struct FVoxelTransformableGeneratorPicker& Picker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelGeneratorCache.MakeTransformableGeneratorInstance");
		
		struct
		{
			struct FVoxelTransformableGeneratorPicker          Picker;
		} params;
		params.Picker = Picker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelGeneratorCache.MakeGeneratorInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelGeneratorPicker                       Picker                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVoxelGeneratorInstanceWrapper* UVoxelGeneratorCache::MakeGeneratorInstance(const struct FVoxelGeneratorPicker& Picker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelGeneratorCache.MakeGeneratorInstance");
		
		struct
		{
			struct FVoxelGeneratorPicker                       Picker;
		} params;
		params.Picker = Picker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGeneratorCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGeneratorCache::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelGeneratorCache");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelGeneratorInstanceWrapper.IsValid
	 * 		Flags  -> ()
	 */
	bool UVoxelGeneratorInstanceWrapper::IsValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelGeneratorInstanceWrapper.IsValid");
		
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
	 * 		Name   -> PredefindFunction UVoxelGeneratorInstanceWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGeneratorInstanceWrapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelGeneratorInstanceWrapper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelTransformableGeneratorInstanceWrapper.IsValid
	 * 		Flags  -> ()
	 */
	bool UVoxelTransformableGeneratorInstanceWrapper::IsValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTransformableGeneratorInstanceWrapper.IsValid");
		
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
	 * 		Name   -> PredefindFunction UVoxelTransformableGeneratorInstanceWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelTransformableGeneratorInstanceWrapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelTransformableGeneratorInstanceWrapper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelGeneratorTools.SetTransformableGeneratorParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelTransformableGeneratorPicker          Picker                                                     (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        UniqueName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelGeneratorTools::SetTransformableGeneratorParameter(const struct FVoxelTransformableGeneratorPicker& Picker, const class FName& UniqueName, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelGeneratorTools.SetTransformableGeneratorParameter");
		
		struct
		{
			struct FVoxelTransformableGeneratorPicker          Picker;
			class FName                                        UniqueName;
			int32_t                                            Value;
		} params;
		params.Picker = Picker;
		params.UniqueName = UniqueName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelGeneratorTools.SetGeneratorParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelGeneratorPicker                       Picker                                                     (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        UniqueName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelGeneratorTools::SetGeneratorParameter(const struct FVoxelGeneratorPicker& Picker, const class FName& UniqueName, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelGeneratorTools.SetGeneratorParameter");
		
		struct
		{
			struct FVoxelGeneratorPicker                       Picker;
			class FName                                        UniqueName;
			int32_t                                            Value;
		} params;
		params.Picker = Picker;
		params.UniqueName = UniqueName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelGeneratorTools.MakeTransformableGeneratorPickerFromObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVoxelTransformableGenerator*                Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelTransformableGeneratorPicker UVoxelGeneratorTools::MakeTransformableGeneratorPickerFromObject(class UVoxelTransformableGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelGeneratorTools.MakeTransformableGeneratorPickerFromObject");
		
		struct
		{
			class UVoxelTransformableGenerator*                Generator;
		} params;
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelGeneratorTools.MakeTransformableGeneratorPickerFromClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      GeneratorClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelTransformableGeneratorPicker UVoxelGeneratorTools::MakeTransformableGeneratorPickerFromClass(class UClass* GeneratorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelGeneratorTools.MakeTransformableGeneratorPickerFromClass");
		
		struct
		{
			class UClass*                                      GeneratorClass;
		} params;
		params.GeneratorClass = GeneratorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelGeneratorTools.MakeTransformableGeneratorInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelTransformableGeneratorPicker          GeneratorPicker                                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelGeneratorInit                         GeneratorInit                                              (Parm, NativeAccessSpecifierPublic)
	 */
	class UVoxelTransformableGeneratorInstanceWrapper* UVoxelGeneratorTools::MakeTransformableGeneratorInstance(const struct FVoxelTransformableGeneratorPicker& GeneratorPicker, const struct FVoxelGeneratorInit& GeneratorInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelGeneratorTools.MakeTransformableGeneratorInstance");
		
		struct
		{
			struct FVoxelTransformableGeneratorPicker          GeneratorPicker;
			struct FVoxelGeneratorInit                         GeneratorInit;
		} params;
		params.GeneratorPicker = GeneratorPicker;
		params.GeneratorInit = GeneratorInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelGeneratorTools.MakeGeneratorPickerFromObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVoxelGenerator*                             Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelGeneratorPicker UVoxelGeneratorTools::MakeGeneratorPickerFromObject(class UVoxelGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelGeneratorTools.MakeGeneratorPickerFromObject");
		
		struct
		{
			class UVoxelGenerator*                             Generator;
		} params;
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelGeneratorTools.MakeGeneratorPickerFromClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      GeneratorClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelGeneratorPicker UVoxelGeneratorTools::MakeGeneratorPickerFromClass(class UClass* GeneratorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelGeneratorTools.MakeGeneratorPickerFromClass");
		
		struct
		{
			class UClass*                                      GeneratorClass;
		} params;
		params.GeneratorClass = GeneratorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelGeneratorTools.MakeGeneratorInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelGeneratorPicker                       GeneratorPicker                                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelGeneratorInit                         GeneratorInit                                              (Parm, NativeAccessSpecifierPublic)
	 */
	class UVoxelGeneratorInstanceWrapper* UVoxelGeneratorTools::MakeGeneratorInstance(const struct FVoxelGeneratorPicker& GeneratorPicker, const struct FVoxelGeneratorInit& GeneratorInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelGeneratorTools.MakeGeneratorInstance");
		
		struct
		{
			struct FVoxelGeneratorPicker                       GeneratorPicker;
			struct FVoxelGeneratorInit                         GeneratorInit;
		} params;
		params.GeneratorPicker = GeneratorPicker;
		params.GeneratorInit = GeneratorInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelGeneratorTools.IsValid_TransformableGeneratorPicker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelTransformableGeneratorPicker          GeneratorPicker                                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelGeneratorTools::IsValid_TransformableGeneratorPicker(const struct FVoxelTransformableGeneratorPicker& GeneratorPicker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelGeneratorTools.IsValid_TransformableGeneratorPicker");
		
		struct
		{
			struct FVoxelTransformableGeneratorPicker          GeneratorPicker;
		} params;
		params.GeneratorPicker = GeneratorPicker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelGeneratorTools.IsValid_GeneratorPicker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelGeneratorPicker                       GeneratorPicker                                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelGeneratorTools::IsValid_GeneratorPicker(const struct FVoxelGeneratorPicker& GeneratorPicker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelGeneratorTools.IsValid_GeneratorPicker");
		
		struct
		{
			struct FVoxelGeneratorPicker                       GeneratorPicker;
		} params;
		params.GeneratorPicker = GeneratorPicker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelGeneratorTools.CreateFloatTextureFromGeneratorAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelFloatTexture                          OutTexture                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class UVoxelGeneratorInstanceWrapper*              Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OutputName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartX                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartY                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelGeneratorTools::CreateFloatTextureFromGeneratorAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelFloatTexture* OutTexture, class UVoxelGeneratorInstanceWrapper* Generator, const class FName& OutputName, int32_t SizeX, int32_t SizeY, float Scale, int32_t StartX, int32_t StartY, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelGeneratorTools.CreateFloatTextureFromGeneratorAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			struct FVoxelFloatTexture                          OutTexture;
			class UVoxelGeneratorInstanceWrapper*              Generator;
			class FName                                        OutputName;
			int32_t                                            SizeX;
			int32_t                                            SizeY;
			float                                              Scale;
			int32_t                                            StartX;
			int32_t                                            StartY;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Generator = Generator;
		params.OutputName = OutputName;
		params.SizeX = SizeX;
		params.SizeY = SizeY;
		params.Scale = Scale;
		params.StartX = StartX;
		params.StartY = StartY;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTexture != nullptr)
			*OutTexture = params.OutTexture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelGeneratorTools.CreateFloatTextureFromGenerator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelFloatTexture                          OutTexture                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class UVoxelGeneratorInstanceWrapper*              Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OutputName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartX                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartY                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelGeneratorTools::CreateFloatTextureFromGenerator(struct FVoxelFloatTexture* OutTexture, class UVoxelGeneratorInstanceWrapper* Generator, const class FName& OutputName, int32_t SizeX, int32_t SizeY, float Scale, int32_t StartX, int32_t StartY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelGeneratorTools.CreateFloatTextureFromGenerator");
		
		struct
		{
			struct FVoxelFloatTexture                          OutTexture;
			class UVoxelGeneratorInstanceWrapper*              Generator;
			class FName                                        OutputName;
			int32_t                                            SizeX;
			int32_t                                            SizeY;
			float                                              Scale;
			int32_t                                            StartX;
			int32_t                                            StartY;
		} params;
		params.Generator = Generator;
		params.OutputName = OutputName;
		params.SizeX = SizeX;
		params.SizeY = SizeY;
		params.Scale = Scale;
		params.StartX = StartX;
		params.StartY = StartY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTexture != nullptr)
			*OutTexture = params.OutTexture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelGeneratorTools.CreateColorTextureFromGeneratorAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelColorTexture                          OutTexture                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class UVoxelGeneratorInstanceWrapper*              Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OutputName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartX                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartY                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelGeneratorTools::CreateColorTextureFromGeneratorAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelColorTexture* OutTexture, class UVoxelGeneratorInstanceWrapper* Generator, const class FName& OutputName, int32_t SizeX, int32_t SizeY, float Scale, int32_t StartX, int32_t StartY, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelGeneratorTools.CreateColorTextureFromGeneratorAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			struct FVoxelColorTexture                          OutTexture;
			class UVoxelGeneratorInstanceWrapper*              Generator;
			class FName                                        OutputName;
			int32_t                                            SizeX;
			int32_t                                            SizeY;
			float                                              Scale;
			int32_t                                            StartX;
			int32_t                                            StartY;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Generator = Generator;
		params.OutputName = OutputName;
		params.SizeX = SizeX;
		params.SizeY = SizeY;
		params.Scale = Scale;
		params.StartX = StartX;
		params.StartY = StartY;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTexture != nullptr)
			*OutTexture = params.OutTexture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelGeneratorTools.CreateColorTextureFromGenerator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelColorTexture                          OutTexture                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class UVoxelGeneratorInstanceWrapper*              Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OutputName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartX                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartY                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelGeneratorTools::CreateColorTextureFromGenerator(struct FVoxelColorTexture* OutTexture, class UVoxelGeneratorInstanceWrapper* Generator, const class FName& OutputName, int32_t SizeX, int32_t SizeY, float Scale, int32_t StartX, int32_t StartY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelGeneratorTools.CreateColorTextureFromGenerator");
		
		struct
		{
			struct FVoxelColorTexture                          OutTexture;
			class UVoxelGeneratorInstanceWrapper*              Generator;
			class FName                                        OutputName;
			int32_t                                            SizeX;
			int32_t                                            SizeY;
			float                                              Scale;
			int32_t                                            StartX;
			int32_t                                            StartY;
		} params;
		params.Generator = Generator;
		params.OutputName = OutputName;
		params.SizeX = SizeX;
		params.SizeY = SizeY;
		params.Scale = Scale;
		params.StartX = StartX;
		params.StartY = StartY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTexture != nullptr)
			*OutTexture = params.OutTexture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelGeneratorTools.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelGeneratorTools::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelGeneratorTools");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelHeightmapAsset.GetWidth
	 * 		Flags  -> ()
	 */
	int32_t UVoxelHeightmapAsset::GetWidth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelHeightmapAsset.GetWidth");
		
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
	 * 		Name   -> Function Voxel.VoxelHeightmapAsset.GetHeight
	 * 		Flags  -> ()
	 */
	int32_t UVoxelHeightmapAsset::GetHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelHeightmapAsset.GetHeight");
		
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
	 * 		Name   -> PredefindFunction UVoxelHeightmapAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelHeightmapAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelHeightmapAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelHeightmapAssetFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelHeightmapAssetFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelHeightmapAssetFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelHeightmapAssetUINT16.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelHeightmapAssetUINT16::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelHeightmapAssetUINT16");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelInstancedMaterialCollectionTemplates.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelInstancedMaterialCollectionTemplates::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelInstancedMaterialCollectionTemplates");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelInstancedMaterialCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelInstancedMaterialCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelInstancedMaterialCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelInstancedMaterialCollectionInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelInstancedMaterialCollectionInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelInstancedMaterialCollectionInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.TranslateBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelIntBoxLibrary::TranslateBox(const struct FVoxelIntBox& Box, const struct FIntVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.TranslateBox");
		
		struct
		{
			struct FVoxelIntBox                                Box;
			struct FIntVector                                  Position;
		} params;
		params.Box = Box;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.Scale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelIntBoxLibrary::Scale(const struct FVoxelIntBox& Box, int32_t Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.Scale");
		
		struct
		{
			struct FVoxelIntBox                                Box;
			int32_t                                            Scale;
		} params;
		params.Box = Box;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.RemoveTranslation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelIntBoxLibrary::RemoveTranslation(const struct FVoxelIntBox& Box)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.RemoveTranslation");
		
		struct
		{
			struct FVoxelIntBox                                Box;
		} params;
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.Overlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelIntBoxLibrary::Overlap(const struct FVoxelIntBox& A, const struct FVoxelIntBox& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.Overlap");
		
		struct
		{
			struct FVoxelIntBox                                A;
			struct FVoxelIntBox                                B;
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
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.NotEqual_IntBoxIntBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelIntBoxLibrary::NotEqual_IntBoxIntBox(const struct FVoxelIntBox& A, const struct FVoxelIntBox& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.NotEqual_IntBoxIntBox");
		
		struct
		{
			struct FVoxelIntBox                                A;
			struct FVoxelIntBox                                B;
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
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.MakeIntBoxWithValidity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValid                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBoxWithValidity UVoxelIntBoxLibrary::MakeIntBoxWithValidity(const struct FVoxelIntBox& Box, bool bIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.MakeIntBoxWithValidity");
		
		struct
		{
			struct FVoxelIntBox                                Box;
			bool                                               bIsValid;
		} params;
		params.Box = Box;
		params.bIsValid = bIsValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.MakeIntBoxFromPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             Points                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelIntBoxLibrary::MakeIntBoxFromPoints(TArray<struct FVector> Points)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.MakeIntBoxFromPoints");
		
		struct
		{
			TArray<struct FVector>                             Points;
		} params;
		params.Points = Points;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.MakeIntBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntVector                                  Min                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Max                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelIntBoxLibrary::MakeIntBox(const struct FIntVector& Min, const struct FIntVector& Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.MakeIntBox");
		
		struct
		{
			struct FIntVector                                  Min;
			struct FIntVector                                  Max;
		} params;
		params.Min = Min;
		params.Max = Max;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.MakeBoxFromPositionAndRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelIntBoxLibrary::MakeBoxFromPositionAndRadius(const struct FVector& Position, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.MakeBoxFromPositionAndRadius");
		
		struct
		{
			struct FVector                                     Position;
			float                                              Radius;
		} params;
		params.Position = Position;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.MakeBoxFromLocalPositionAndRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelIntBoxLibrary::MakeBoxFromLocalPositionAndRadius(const struct FIntVector& Position, int32_t Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.MakeBoxFromLocalPositionAndRadius");
		
		struct
		{
			struct FIntVector                                  Position;
			int32_t                                            Radius;
		} params;
		params.Position = Position;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.IsVectorInsideBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelIntBoxLibrary::IsVectorInsideBox(const struct FVoxelIntBox& Box, const struct FVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.IsVectorInsideBox");
		
		struct
		{
			struct FVoxelIntBox                                Box;
			struct FVector                                     Position;
		} params;
		params.Box = Box;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.IsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelIntBoxLibrary::IsValid(const struct FVoxelIntBox& Box)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.IsValid");
		
		struct
		{
			struct FVoxelIntBox                                Box;
		} params;
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.IsIntVectorInsideBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelIntBoxLibrary::IsIntVectorInsideBox(const struct FVoxelIntBox& Box, const struct FIntVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.IsIntVectorInsideBox");
		
		struct
		{
			struct FVoxelIntBox                                Box;
			struct FIntVector                                  Position;
		} params;
		params.Box = Box;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.Intersect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Other                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelIntBoxLibrary::Intersect(const struct FVoxelIntBox& Box, const struct FVoxelIntBox& Other)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.Intersect");
		
		struct
		{
			struct FVoxelIntBox                                Box;
			struct FVoxelIntBox                                Other;
		} params;
		params.Box = Box;
		params.Other = Other;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.InfiniteBox
	 * 		Flags  -> ()
	 */
	struct FVoxelIntBox UVoxelIntBoxLibrary::InfiniteBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.InfiniteBox");
		
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
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.GetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntVector UVoxelIntBoxLibrary::GetSize(const struct FVoxelIntBox& Box)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.GetSize");
		
		struct
		{
			struct FVoxelIntBox                                Box;
		} params;
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.GetCorners
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FIntVector> UVoxelIntBoxLibrary::GetCorners(const struct FVoxelIntBox& Box)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.GetCorners");
		
		struct
		{
			struct FVoxelIntBox                                Box;
		} params;
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.GetCenter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UVoxelIntBoxLibrary::GetCenter(const struct FVoxelIntBox& Box)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.GetCenter");
		
		struct
		{
			struct FVoxelIntBox                                Box;
		} params;
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.Extend_IntVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelIntBoxLibrary::Extend_IntVector(const struct FVoxelIntBox& Box, const struct FIntVector& Extent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.Extend_IntVector");
		
		struct
		{
			struct FVoxelIntBox                                Box;
			struct FIntVector                                  Extent;
		} params;
		params.Box = Box;
		params.Extent = Extent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.Extend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelIntBoxLibrary::Extend(const struct FVoxelIntBox& Box, int32_t Extent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.Extend");
		
		struct
		{
			struct FVoxelIntBox                                Box;
			int32_t                                            Extent;
		} params;
		params.Box = Box;
		params.Extent = Extent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.EqualEqual_IntBoxIntBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelIntBoxLibrary::EqualEqual_IntBoxIntBox(const struct FVoxelIntBox& A, const struct FVoxelIntBox& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.EqualEqual_IntBoxIntBox");
		
		struct
		{
			struct FVoxelIntBox                                A;
			struct FVoxelIntBox                                B;
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
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.Conv_IntVectorToVoxelIntBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntVector                                  Vector                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelIntBoxLibrary::Conv_IntVectorToVoxelIntBox(const struct FIntVector& Vector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.Conv_IntVectorToVoxelIntBox");
		
		struct
		{
			struct FIntVector                                  Vector;
		} params;
		params.Vector = Vector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.Conv_IntBoxToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                IntBox                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVoxelIntBoxLibrary::Conv_IntBoxToString(const struct FVoxelIntBox& IntBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.Conv_IntBoxToString");
		
		struct
		{
			struct FVoxelIntBox                                IntBox;
		} params;
		params.IntBox = IntBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.Contains
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Other                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelIntBoxLibrary::Contains(const struct FVoxelIntBox& Box, const struct FVoxelIntBox& Other)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.Contains");
		
		struct
		{
			struct FVoxelIntBox                                Box;
			struct FVoxelIntBox                                Other;
		} params;
		params.Box = Box;
		params.Other = Other;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.Center
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelIntBoxLibrary::Center(const struct FVoxelIntBox& Box)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.Center");
		
		struct
		{
			struct FVoxelIntBox                                Box;
		} params;
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.BreakIntBoxWithValidity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBoxWithValidity                    BoxWithValidity                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelIntBoxLibrary::BreakIntBoxWithValidity(const struct FVoxelIntBoxWithValidity& BoxWithValidity, struct FVoxelIntBox* Box, bool* bIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.BreakIntBoxWithValidity");
		
		struct
		{
			struct FVoxelIntBoxWithValidity                    BoxWithValidity;
			struct FVoxelIntBox                                Box;
			bool                                               bIsValid;
		} params;
		params.BoxWithValidity = BoxWithValidity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Box != nullptr)
			*Box = params.Box;
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.BreakIntBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Min                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Max                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelIntBoxLibrary::BreakIntBox(const struct FVoxelIntBox& Box, struct FIntVector* Min, struct FIntVector* Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.BreakIntBox");
		
		struct
		{
			struct FVoxelIntBox                                Box;
			struct FIntVector                                  Min;
			struct FIntVector                                  Max;
		} params;
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Min != nullptr)
			*Min = params.Min;
		if (Max != nullptr)
			*Max = params.Max;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.ApplyTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelIntBoxLibrary::ApplyTransform(const struct FVoxelIntBox& Box, const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.ApplyTransform");
		
		struct
		{
			struct FVoxelIntBox                                Box;
			struct FTransform                                  Transform;
		} params;
		params.Box = Box;
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.AddPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelIntBoxLibrary::AddPoint(const struct FVoxelIntBox& Box, const struct FIntVector& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.AddPoint");
		
		struct
		{
			struct FVoxelIntBox                                Box;
			struct FIntVector                                  Point;
		} params;
		params.Box = Box;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelIntBoxLibrary.AddBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Box                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                BoxToAdd                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelIntBoxLibrary::AddBox(const struct FVoxelIntBox& Box, const struct FVoxelIntBox& BoxToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelIntBoxLibrary.AddBox");
		
		struct
		{
			struct FVoxelIntBox                                Box;
			struct FVoxelIntBox                                BoxToAdd;
		} params;
		params.Box = Box;
		params.BoxToAdd = BoxToAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelIntBoxLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelIntBoxLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelIntBoxLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelInvokerComponentBase.ShouldUseInvoker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelInvokerComponentBase::ShouldUseInvoker(class AVoxelWorld* VoxelWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelInvokerComponentBase.ShouldUseInvoker");
		
		struct
		{
			class AVoxelWorld*                                 VoxelWorld;
		} params;
		params.VoxelWorld = VoxelWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelInvokerComponentBase.RefreshAllVoxelInvokers
	 * 		Flags  -> ()
	 */
	void UVoxelInvokerComponentBase::RefreshAllVoxelInvokers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelInvokerComponentBase.RefreshAllVoxelInvokers");
		
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
	 * 		Name   -> Function Voxel.VoxelInvokerComponentBase.IsLocalInvoker
	 * 		Flags  -> ()
	 */
	bool UVoxelInvokerComponentBase::IsLocalInvoker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelInvokerComponentBase.IsLocalInvoker");
		
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
	 * 		Name   -> Function Voxel.VoxelInvokerComponentBase.GetInvokerVoxelPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntVector UVoxelInvokerComponentBase::GetInvokerVoxelPosition(class AVoxelWorld* VoxelWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelInvokerComponentBase.GetInvokerVoxelPosition");
		
		struct
		{
			class AVoxelWorld*                                 VoxelWorld;
		} params;
		params.VoxelWorld = VoxelWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelInvokerComponentBase.GetInvokerSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelInvokerSettings UVoxelInvokerComponentBase::GetInvokerSettings(class AVoxelWorld* VoxelWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelInvokerComponentBase.GetInvokerSettings");
		
		struct
		{
			class AVoxelWorld*                                 VoxelWorld;
		} params;
		params.VoxelWorld = VoxelWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelInvokerComponentBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelInvokerComponentBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelInvokerComponentBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSimpleInvokerComponent.GetInvokerGlobalPosition
	 * 		Flags  -> ()
	 */
	struct FVector UVoxelSimpleInvokerComponent::GetInvokerGlobalPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSimpleInvokerComponent.GetInvokerGlobalPosition");
		
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
	 * 		Name   -> PredefindFunction UVoxelSimpleInvokerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSimpleInvokerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelSimpleInvokerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelInvokerWithPredictionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelInvokerWithPredictionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelInvokerWithPredictionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelInvokerAutoCameraComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelInvokerAutoCameraComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelInvokerAutoCameraComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelVolumeInvokerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelVolumeInvokerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelVolumeInvokerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AVoxelLODVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVoxelLODVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelLODVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AVoxelLandscapeImporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVoxelLandscapeImporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelLandscapeImporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelLandscapeMaterialCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelLandscapeMaterialCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelLandscapeMaterialCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelLevelTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelLevelTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelLevelTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelLevelTools.LevelAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAdditive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelLevelTools::LevelAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float Falloff, float Height, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelLevelTools.LevelAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			float                                              Falloff;
			float                                              Height;
			bool                                               bAdditive;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.Falloff = Falloff;
		params.Height = Height;
		params.bAdditive = bAdditive;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelLevelTools.Level
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAdditive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelLevelTools::Level(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float Falloff, float Height, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelLevelTools.Level");
		
		struct
		{
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			float                                              Falloff;
			float                                              Height;
			bool                                               bAdditive;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.Falloff = Falloff;
		params.Height = Height;
		params.bAdditive = bAdditive;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelLevelTools.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelLevelTools::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelLevelTools");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelLineBatchComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelLineBatchComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelLineBatchComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelMagicaVoxScene.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMagicaVoxScene::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelMagicaVoxScene");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelMagicaVoxSceneActor.SetScene
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVoxelMagicaVoxScene*                        Scene                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVoxelMagicaVoxSceneActor::SetScene(class UVoxelMagicaVoxScene* Scene)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelMagicaVoxSceneActor.SetScene");
		
		struct
		{
			class UVoxelMagicaVoxScene*                        Scene;
		} params;
		params.Scene = Scene;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelMagicaVoxSceneActor.ApplyVoxelSize
	 * 		Flags  -> ()
	 */
	void AVoxelMagicaVoxSceneActor::ApplyVoxelSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelMagicaVoxSceneActor.ApplyVoxelSize");
		
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
	 * 		Name   -> PredefindFunction AVoxelMagicaVoxSceneActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVoxelMagicaVoxSceneActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelMagicaVoxSceneActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMaterialExpressionVoxelLandscapeLayerBlend.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionVoxelLandscapeLayerBlend::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.MaterialExpressionVoxelLandscapeLayerBlend");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMaterialExpressionVoxelLandscapeLayerSwitch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionVoxelLandscapeLayerSwitch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.MaterialExpressionVoxelLandscapeLayerSwitch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMaterialExpressionVoxelLandscapeLayerWeight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionVoxelLandscapeLayerWeight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.MaterialExpressionVoxelLandscapeLayerWeight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMaterialExpressionVoxelLandscapeLayerSample.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionVoxelLandscapeLayerSample::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.MaterialExpressionVoxelLandscapeLayerSample");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMaterialExpressionVoxelLandscapeVisibilityMask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionVoxelLandscapeVisibilityMask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.MaterialExpressionVoxelLandscapeVisibilityMask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelMathLibrary.ResetHaltonStream
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelHaltonStream                          Stream                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVoxelMathLibrary::ResetHaltonStream(const struct FVoxelHaltonStream& Stream)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelMathLibrary.ResetHaltonStream");
		
		struct
		{
			struct FVoxelHaltonStream                          Stream;
		} params;
		params.Stream = Stream;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelMathLibrary.MakeHaltonStream
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InitialSeed                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelHaltonStream UVoxelMathLibrary::MakeHaltonStream(int32_t InitialSeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelMathLibrary.MakeHaltonStream");
		
		struct
		{
			int32_t                                            InitialSeed;
		} params;
		params.InitialSeed = InitialSeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelMathLibrary.GetUnitVectorFromRandom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Random                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UVoxelMathLibrary::GetUnitVectorFromRandom(const struct FVector2D& Random)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelMathLibrary.GetUnitVectorFromRandom");
		
		struct
		{
			struct FVector2D                                   Random;
		} params;
		params.Random = Random;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelMathLibrary.GetHalton3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelHaltonStream                          Stream                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector UVoxelMathLibrary::GetHalton3D(const struct FVoxelHaltonStream& Stream)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelMathLibrary.GetHalton3D");
		
		struct
		{
			struct FVoxelHaltonStream                          Stream;
		} params;
		params.Stream = Stream;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelMathLibrary.GetHalton2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelHaltonStream                          Stream                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UVoxelMathLibrary::GetHalton2D(const struct FVoxelHaltonStream& Stream)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelMathLibrary.GetHalton2D");
		
		struct
		{
			struct FVoxelHaltonStream                          Stream;
		} params;
		params.Stream = Stream;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelMathLibrary.GetHalton1D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelHaltonStream                          Stream                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UVoxelMathLibrary::GetHalton1D(const struct FVoxelHaltonStream& Stream)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelMathLibrary.GetHalton1D");
		
		struct
		{
			struct FVoxelHaltonStream                          Stream;
		} params;
		params.Stream = Stream;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelMathLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMathLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelMathLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelMeshImporterInputData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMeshImporterInputData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelMeshImporterInputData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelMeshImporterLibrary.CreateTextureFromMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTextureRenderTarget2D* UVoxelMeshImporterLibrary::CreateTextureFromMaterial(class UObject* WorldContextObject, class UMaterialInterface* Material, int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelMeshImporterLibrary.CreateTextureFromMaterial");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UMaterialInterface*                          Material;
			int32_t                                            Width;
			int32_t                                            Height;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Material = Material;
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
	 * 		Name   -> Function Voxel.VoxelMeshImporterLibrary.CreateMeshDataFromStaticMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMesh*                                 StaticMesh                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVoxelMeshImporterInputData* UVoxelMeshImporterLibrary::CreateMeshDataFromStaticMesh(class UStaticMesh* StaticMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelMeshImporterLibrary.CreateMeshDataFromStaticMesh");
		
		struct
		{
			class UStaticMesh*                                 StaticMesh;
		} params;
		params.StaticMesh = StaticMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelMeshImporterLibrary.ConvertMeshToVoxels_NoMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVoxelMeshImporterInputData*                 Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bSubtractive                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelMeshImporterSettingsBase              Settings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UVoxelDataAsset*                             Asset                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumLeaks                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelMeshImporterLibrary::ConvertMeshToVoxels_NoMaterials(class UObject* WorldContextObject, class UVoxelMeshImporterInputData* Mesh, const struct FTransform& Transform, bool bSubtractive, const struct FVoxelMeshImporterSettingsBase& Settings, class UVoxelDataAsset** Asset, int32_t* NumLeaks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelMeshImporterLibrary.ConvertMeshToVoxels_NoMaterials");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UVoxelMeshImporterInputData*                 Mesh;
			struct FTransform                                  Transform;
			bool                                               bSubtractive;
			struct FVoxelMeshImporterSettingsBase              Settings;
			class UVoxelDataAsset*                             Asset;
			int32_t                                            NumLeaks;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Mesh = Mesh;
		params.Transform = Transform;
		params.bSubtractive = bSubtractive;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Asset != nullptr)
			*Asset = params.Asset;
		if (NumLeaks != nullptr)
			*NumLeaks = params.NumLeaks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelMeshImporterLibrary.ConvertMeshToVoxels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVoxelMeshImporterInputData*                 Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bSubtractive                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelMeshImporterSettings                  Settings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelMeshImporterRenderTargetCache         RenderTargetCache                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UVoxelDataAsset*                             Asset                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumLeaks                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelMeshImporterLibrary::ConvertMeshToVoxels(class UObject* WorldContextObject, class UVoxelMeshImporterInputData* Mesh, const struct FTransform& Transform, bool bSubtractive, const struct FVoxelMeshImporterSettings& Settings, struct FVoxelMeshImporterRenderTargetCache* RenderTargetCache, class UVoxelDataAsset** Asset, int32_t* NumLeaks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelMeshImporterLibrary.ConvertMeshToVoxels");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UVoxelMeshImporterInputData*                 Mesh;
			struct FTransform                                  Transform;
			bool                                               bSubtractive;
			struct FVoxelMeshImporterSettings                  Settings;
			struct FVoxelMeshImporterRenderTargetCache         RenderTargetCache;
			class UVoxelDataAsset*                             Asset;
			int32_t                                            NumLeaks;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Mesh = Mesh;
		params.Transform = Transform;
		params.bSubtractive = bSubtractive;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RenderTargetCache != nullptr)
			*RenderTargetCache = params.RenderTargetCache;
		if (Asset != nullptr)
			*Asset = params.Asset;
		if (NumLeaks != nullptr)
			*NumLeaks = params.NumLeaks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelMeshImporterLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMeshImporterLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelMeshImporterLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AVoxelMeshImporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVoxelMeshImporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelMeshImporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelToolWithAlignment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelToolWithAlignment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelToolWithAlignment");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelMeshTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMeshTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelMeshTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelMultiplayerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMultiplayerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelMultiplayerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelMultiplayerSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMultiplayerSubsystemProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelMultiplayerSubsystemProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelMultiplayerTcpInterface.StartServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutError                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelMultiplayerTcpInterface::StartServer(class FString* OutError, const class FString& IP, int32_t Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelMultiplayerTcpInterface.StartServer");
		
		struct
		{
			class FString                                      OutError;
			class FString                                      IP;
			int32_t                                            Port;
		} params;
		params.IP = IP;
		params.Port = Port;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutError != nullptr)
			*OutError = params.OutError;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelMultiplayerTcpInterface.ConnectToServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutError                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelMultiplayerTcpInterface::ConnectToServer(class FString* OutError, const class FString& IP, int32_t Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelMultiplayerTcpInterface.ConnectToServer");
		
		struct
		{
			class FString                                      OutError;
			class FString                                      IP;
			int32_t                                            Port;
		} params;
		params.IP = IP;
		params.Port = Port;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutError != nullptr)
			*OutError = params.OutError;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelMultiplayerTcpInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelMultiplayerTcpInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelMultiplayerTcpInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelNoClippingComponent.ShouldUseVoxelWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelNoClippingComponent::ShouldUseVoxelWorld(class AVoxelWorld* VoxelWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelNoClippingComponent.ShouldUseVoxelWorld");
		
		struct
		{
			class AVoxelWorld*                                 VoxelWorld;
		} params;
		params.VoxelWorld = VoxelWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Voxel.VoxelNoClippingComponent.OnTeleported__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UVoxelNoClippingComponent::OnTeleported__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Voxel.VoxelNoClippingComponent.OnTeleported__DelegateSignature");
		
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
	 * 		Name   -> DelegateFunction Voxel.VoxelNoClippingComponent.OnStopMovingTowardsSurface__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UVoxelNoClippingComponent::OnStopMovingTowardsSurface__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Voxel.VoxelNoClippingComponent.OnStopMovingTowardsSurface__DelegateSignature");
		
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
	 * 		Name   -> DelegateFunction Voxel.VoxelNoClippingComponent.OnMoveTowardsSurface__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UVoxelNoClippingComponent::OnMoveTowardsSurface__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Voxel.VoxelNoClippingComponent.OnMoveTowardsSurface__DelegateSignature");
		
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
	 * 		Name   -> PredefindFunction UVoxelNoClippingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelNoClippingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelNoClippingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelPhysicsTools.ApplyVoxelPhysics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinParts                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDebug                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelPhysicsTools::ApplyVoxelPhysics(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, int32_t MinParts, bool bDebug, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelPhysicsTools.ApplyVoxelPhysics");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			int32_t                                            MinParts;
			bool                                               bDebug;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Bounds = Bounds;
		params.MinParts = MinParts;
		params.bDebug = bDebug;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelPhysicsTools.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelPhysicsTools::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelPhysicsTools");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelPhysicsPartSpawnerResult_VoxelWorlds.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelPhysicsPartSpawnerResult_VoxelWorlds::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelPhysicsPartSpawnerResult_VoxelWorlds");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelPhysicsPartSpawner_VoxelWorlds.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelPhysicsPartSpawner_VoxelWorlds::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelPhysicsPartSpawner_VoxelWorlds");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelPhysicsPartSpawnerResult_Cubes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelPhysicsPartSpawnerResult_Cubes::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelPhysicsPartSpawnerResult_Cubes");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelPhysicsPartSpawner_Cubes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelPhysicsPartSpawner_Cubes::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelPhysicsPartSpawner_Cubes");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelPhysicsPartSpawnerResult_GetVoxels.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelPhysicsPartSpawnerResult_GetVoxels::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelPhysicsPartSpawnerResult_GetVoxels");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelPhysicsPartSpawner_GetVoxels.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelPhysicsPartSpawner_GetVoxels::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelPhysicsPartSpawner_GetVoxels");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelPhysicsPartSpawnerResult.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelPhysicsPartSpawnerResult::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelPhysicsPartSpawnerResult");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelPhysicsPartSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelPhysicsPartSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelPhysicsPartSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelPhysicsRelevancyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelPhysicsRelevancyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelPhysicsRelevancyComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AVoxelRuntimeActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVoxelRuntimeActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelRuntimeActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelWorld.SetWorldSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewWorldSizeInVoxel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVoxelWorld::SetWorldSize(int32_t NewWorldSizeInVoxel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.SetWorldSize");
		
		struct
		{
			int32_t                                            NewWorldSizeInVoxel;
		} params;
		params.NewWorldSizeInVoxel = NewWorldSizeInVoxel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelWorld.SetRenderOctreeDepth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewDepth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVoxelWorld::SetRenderOctreeDepth(int32_t NewDepth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.SetRenderOctreeDepth");
		
		struct
		{
			int32_t                                            NewDepth;
		} params;
		params.NewDepth = NewDepth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelWorld.SetRenderOctreeChunkSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewChunkSize                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVoxelWorld::SetRenderOctreeChunkSize(int32_t NewChunkSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.SetRenderOctreeChunkSize");
		
		struct
		{
			int32_t                                            NewChunkSize;
		} params;
		params.NewChunkSize = NewChunkSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelWorld.SetGeneratorObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVoxelGenerator*                             NewGenerator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVoxelWorld::SetGeneratorObject(class UVoxelGenerator* NewGenerator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.SetGeneratorObject");
		
		struct
		{
			class UVoxelGenerator*                             NewGenerator;
		} params;
		params.NewGenerator = NewGenerator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelWorld.SetGeneratorClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      NewGeneratorClass                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVoxelWorld::SetGeneratorClass(class UClass* NewGeneratorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.SetGeneratorClass");
		
		struct
		{
			class UClass*                                      NewGeneratorClass;
		} params;
		params.NewGeneratorClass = NewGeneratorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelWorld.SetCollisionResponseToChannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECollisionChannel                                  Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECollisionResponse                                 NewResponse                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVoxelWorld::SetCollisionResponseToChannel(ECollisionChannel Channel, ECollisionResponse NewResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.SetCollisionResponseToChannel");
		
		struct
		{
			ECollisionChannel                                  Channel;
			ECollisionResponse                                 NewResponse;
		} params;
		params.Channel = Channel;
		params.NewResponse = NewResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Voxel.VoxelWorld.OnWorldLoaded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AVoxelWorld::OnWorldLoaded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Voxel.VoxelWorld.OnWorldLoaded__DelegateSignature");
		
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
	 * 		Name   -> DelegateFunction Voxel.VoxelWorld.OnWorldDestroyed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AVoxelWorld::OnWorldDestroyed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Voxel.VoxelWorld.OnWorldDestroyed__DelegateSignature");
		
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
	 * 		Name   -> DelegateFunction Voxel.VoxelWorld.OnMaxFoliageInstancesReached__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AVoxelWorld::OnMaxFoliageInstancesReached__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Voxel.VoxelWorld.OnMaxFoliageInstancesReached__DelegateSignature");
		
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
	 * 		Name   -> DelegateFunction Voxel.VoxelWorld.OnGenerateWorld__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AVoxelWorld::OnGenerateWorld__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Voxel.VoxelWorld.OnGenerateWorld__DelegateSignature");
		
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
	 * 		Name   -> Function Voxel.VoxelWorld.LogCompressedSaveSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelCompressedWorldSave                   Save                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void AVoxelWorld::LogCompressedSaveSize(class AVoxelWorld* VoxelWorld, const struct FVoxelCompressedWorldSave& Save)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.LogCompressedSaveSize");
		
		struct
		{
			class AVoxelWorld*                                 VoxelWorld;
			struct FVoxelCompressedWorldSave                   Save;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.Save = Save;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelWorld.K2_LocalToGlobalFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector AVoxelWorld::K2_LocalToGlobalFloat(const struct FVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.K2_LocalToGlobalFloat");
		
		struct
		{
			struct FVector                                     Position;
		} params;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelWorld.K2_LocalToGlobalBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelIntBox                                Bounds                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBox AVoxelWorld::K2_LocalToGlobalBounds(const struct FVoxelIntBox& Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.K2_LocalToGlobalBounds");
		
		struct
		{
			struct FVoxelIntBox                                Bounds;
		} params;
		params.Bounds = Bounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelWorld.K2_LocalToGlobal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntVector                                  Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector AVoxelWorld::K2_LocalToGlobal(const struct FIntVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.K2_LocalToGlobal");
		
		struct
		{
			struct FIntVector                                  Position;
		} params;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelWorld.K2_GlobalToLocalFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector AVoxelWorld::K2_GlobalToLocalFloat(const struct FVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.K2_GlobalToLocalFloat");
		
		struct
		{
			struct FVector                                     Position;
		} params;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelWorld.K2_GlobalToLocalBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBox                                        Bounds                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox AVoxelWorld::K2_GlobalToLocalBounds(const struct FBox& Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.K2_GlobalToLocalBounds");
		
		struct
		{
			struct FBox                                        Bounds;
		} params;
		params.Bounds = Bounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelWorld.K2_GlobalToLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelWorldCoordinatesRounding                     Rounding                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntVector AVoxelWorld::K2_GlobalToLocal(const struct FVector& Position, EVoxelWorldCoordinatesRounding Rounding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.K2_GlobalToLocal");
		
		struct
		{
			struct FVector                                     Position;
			EVoxelWorldCoordinatesRounding                     Rounding;
		} params;
		params.Position = Position;
		params.Rounding = Rounding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelWorld.IsLoaded
	 * 		Flags  -> ()
	 */
	bool AVoxelWorld::IsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.IsLoaded");
		
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
	 * 		Name   -> Function Voxel.VoxelWorld.IsCreated
	 * 		Flags  -> ()
	 */
	bool AVoxelWorld::IsCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.IsCreated");
		
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
	 * 		Name   -> Function Voxel.VoxelWorld.GetNeighboringPositions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     GlobalPosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FIntVector> AVoxelWorld::GetNeighboringPositions(const struct FVector& GlobalPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.GetNeighboringPositions");
		
		struct
		{
			struct FVector                                     GlobalPosition;
		} params;
		params.GlobalPosition = GlobalPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelWorld.GetMultiplayerInterfaceInstance
	 * 		Flags  -> ()
	 */
	class UVoxelMultiplayerInterface* AVoxelWorld::GetMultiplayerInterfaceInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.GetMultiplayerInterfaceInstance");
		
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
	 * 		Name   -> Function Voxel.VoxelWorld.GetGeneratorInit
	 * 		Flags  -> ()
	 */
	struct FVoxelGeneratorInit AVoxelWorld::GetGeneratorInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.GetGeneratorInit");
		
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
	 * 		Name   -> Function Voxel.VoxelWorld.GetGeneratorCache
	 * 		Flags  -> ()
	 */
	class UVoxelGeneratorCache* AVoxelWorld::GetGeneratorCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.GetGeneratorCache");
		
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
	 * 		Name   -> Function Voxel.VoxelWorld.DestroyWorld
	 * 		Flags  -> ()
	 */
	void AVoxelWorld::DestroyWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.DestroyWorld");
		
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
	 * 		Name   -> Function Voxel.VoxelWorld.CreateWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelWorldCreateInfo                       Info                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void AVoxelWorld::CreateWorld(const struct FVoxelWorldCreateInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.CreateWorld");
		
		struct
		{
			struct FVoxelWorldCreateInfo                       Info;
		} params;
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelWorld.CreateMultiplayerInterfaceInstance
	 * 		Flags  -> ()
	 */
	class UVoxelMultiplayerInterface* AVoxelWorld::CreateMultiplayerInterfaceInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.CreateMultiplayerInterfaceInstance");
		
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
	 * 		Name   -> PredefindFunction AVoxelWorld.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVoxelWorld::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelWorld");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelPlaceableItemActorHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelPlaceableItemActorHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelPlaceableItemActorHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelPlaceableItemManager.OnGenerate
	 * 		Flags  -> ()
	 */
	void UVoxelPlaceableItemManager::OnGenerate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelPlaceableItemManager.OnGenerate");
		
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
	 * 		Name   -> Function Voxel.VoxelPlaceableItemManager.OnClear
	 * 		Flags  -> ()
	 */
	void UVoxelPlaceableItemManager::OnClear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelPlaceableItemManager.OnClear");
		
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
	 * 		Name   -> Function Voxel.VoxelPlaceableItemManager.GetGeneratorCache
	 * 		Flags  -> ()
	 */
	class UVoxelGeneratorCache* UVoxelPlaceableItemManager::GetGeneratorCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelPlaceableItemManager.GetGeneratorCache");
		
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
	 * 		Name   -> Function Voxel.VoxelPlaceableItemManager.DrawDebugPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelPlaceableItemManager::DrawDebugPoint(const struct FVector& Position, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelPlaceableItemManager.DrawDebugPoint");
		
		struct
		{
			struct FVector                                     Position;
			struct FLinearColor                                Color;
		} params;
		params.Position = Position;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelPlaceableItemManager.DrawDebugLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelPlaceableItemManager::DrawDebugLine(const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelPlaceableItemManager.DrawDebugLine");
		
		struct
		{
			struct FVector                                     Start;
			struct FVector                                     End;
			struct FLinearColor                                Color;
		} params;
		params.Start = Start;
		params.End = End;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelPlaceableItemManager.AddDataItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelDataItemConstructionInfo              Info                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelPlaceableItemManager::AddDataItem(const struct FVoxelDataItemConstructionInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelPlaceableItemManager.AddDataItem");
		
		struct
		{
			struct FVoxelDataItemConstructionInfo              Info;
		} params;
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelPlaceableItemManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelPlaceableItemManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelPlaceableItemManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelPlaceableItemsUtilities.AddWorms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              AddWorm                                                    (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelPerlinWormsSettings                   Settings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVoxelPlaceableItemsUtilities::AddWorms(const class FScriptDelegate& AddWorm, const struct FVoxelPerlinWormsSettings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelPlaceableItemsUtilities.AddWorms");
		
		struct
		{
			class FScriptDelegate                              AddWorm;
			struct FVoxelPerlinWormsSettings                   Settings;
		} params;
		params.AddWorm = AddWorm;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Voxel.VoxelPlaceableItemsUtilities.AddWorm__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelPlaceableItemsUtilities::AddWorm__DelegateSignature(const struct FVector& Start, const struct FVector& End, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Voxel.VoxelPlaceableItemsUtilities.AddWorm__DelegateSignature");
		
		struct
		{
			struct FVector                                     Start;
			struct FVector                                     End;
			float                                              Radius;
		} params;
		params.Start = Start;
		params.End = End;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelPlaceableItemsUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelPlaceableItemsUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelPlaceableItemsUtilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelPoolSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelPoolSubsystemProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelPoolSubsystemProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelProceduralMeshComponent.SetVoxelCollisionsFrozen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFrozen                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelProceduralMeshComponent::SetVoxelCollisionsFrozen(class AVoxelWorld* VoxelWorld, bool bFrozen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProceduralMeshComponent.SetVoxelCollisionsFrozen");
		
		struct
		{
			class AVoxelWorld*                                 VoxelWorld;
			bool                                               bFrozen;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.bFrozen = bFrozen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelProceduralMeshComponent.InitChunk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      ChunkLOD                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                ChunkBounds                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelProceduralMeshComponent::InitChunk(unsigned char ChunkLOD, const struct FVoxelIntBox& ChunkBounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProceduralMeshComponent.InitChunk");
		
		struct
		{
			unsigned char                                      ChunkLOD;
			struct FVoxelIntBox                                ChunkBounds;
		} params;
		params.ChunkLOD = ChunkLOD;
		params.ChunkBounds = ChunkBounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelProceduralMeshComponent.AreVoxelCollisionsFrozen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVoxelProceduralMeshComponent::AreVoxelCollisionsFrozen(class AVoxelWorld* VoxelWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProceduralMeshComponent.AreVoxelCollisionsFrozen");
		
		struct
		{
			class AVoxelWorld*                                 VoxelWorld;
		} params;
		params.VoxelWorld = VoxelWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelProceduralMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelProceduralMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelProceduralMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelProjectionTools.MakeVoxelLineTraceParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<ECollisionChannel>                          CollisionChannelsToIgnore                                  (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		ECollisionChannel                                  CollisionChannel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDrawDebugTrace                                    DrawDebugType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                TraceColor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                TraceHitColor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DrawTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelLineTraceParameters UVoxelProjectionTools::MakeVoxelLineTraceParameters(TArray<ECollisionChannel> CollisionChannelsToIgnore, TArray<class AActor*> ActorsToIgnore, ECollisionChannel CollisionChannel, EDrawDebugTrace DrawDebugType, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProjectionTools.MakeVoxelLineTraceParameters");
		
		struct
		{
			TArray<ECollisionChannel>                          CollisionChannelsToIgnore;
			TArray<class AActor*>                              ActorsToIgnore;
			ECollisionChannel                                  CollisionChannel;
			EDrawDebugTrace                                    DrawDebugType;
			struct FLinearColor                                TraceColor;
			struct FLinearColor                                TraceHitColor;
			float                                              DrawTime;
		} params;
		params.CollisionChannelsToIgnore = CollisionChannelsToIgnore;
		params.ActorsToIgnore = ActorsToIgnore;
		params.CollisionChannel = CollisionChannel;
		params.DrawDebugType = DrawDebugType;
		params.TraceColor = TraceColor;
		params.TraceHitColor = TraceHitColor;
		params.DrawTime = DrawTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelProjectionTools.GetHitsPositions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVoxelProjectionHit>                 Hits                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	TArray<struct FIntVector> UVoxelProjectionTools::GetHitsPositions(TArray<struct FVoxelProjectionHit> Hits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProjectionTools.GetHitsPositions");
		
		struct
		{
			TArray<struct FVoxelProjectionHit>                 Hits;
		} params;
		params.Hits = Hits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelProjectionTools.GetHitsAveragePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVoxelProjectionHit>                 Hits                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FVector UVoxelProjectionTools::GetHitsAveragePosition(TArray<struct FVoxelProjectionHit> Hits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProjectionTools.GetHitsAveragePosition");
		
		struct
		{
			TArray<struct FVoxelProjectionHit>                 Hits;
		} params;
		params.Hits = Hits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelProjectionTools.GetHitsAverageNormal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVoxelProjectionHit>                 Hits                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FVector UVoxelProjectionTools::GetHitsAverageNormal(TArray<struct FVoxelProjectionHit> Hits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProjectionTools.GetHitsAverageNormal");
		
		struct
		{
			TArray<struct FVoxelProjectionHit>                 Hits;
		} params;
		params.Hits = Hits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelProjectionTools.FindProjectionVoxelsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVoxelProjectionHit>                 Hits                                                       (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelLineTraceParameters                   Parameters                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelProjectionShape                              Shape                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NumRays                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVoxelProjectionTools::FindProjectionVoxelsAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FVoxelProjectionHit>* Hits, class AVoxelWorld* World, const struct FVoxelLineTraceParameters& Parameters, const struct FVector& Position, const struct FVector& Direction, float Radius, EVoxelProjectionShape Shape, float NumRays, float MaxDistance, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProjectionTools.FindProjectionVoxelsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FVoxelProjectionHit>                 Hits;
			class AVoxelWorld*                                 World;
			struct FVoxelLineTraceParameters                   Parameters;
			struct FVector                                     Position;
			struct FVector                                     Direction;
			float                                              Radius;
			EVoxelProjectionShape                              Shape;
			float                                              NumRays;
			float                                              MaxDistance;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Parameters = Parameters;
		params.Position = Position;
		params.Direction = Direction;
		params.Radius = Radius;
		params.Shape = Shape;
		params.NumRays = NumRays;
		params.MaxDistance = MaxDistance;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hits != nullptr)
			*Hits = params.Hits;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelProjectionTools.FindProjectionVoxels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVoxelProjectionHit>                 Hits                                                       (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelLineTraceParameters                   Parameters                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelProjectionShape                              Shape                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NumRays                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVoxelProjectionTools::FindProjectionVoxels(TArray<struct FVoxelProjectionHit>* Hits, class AVoxelWorld* World, const struct FVoxelLineTraceParameters& Parameters, const struct FVector& Position, const struct FVector& Direction, float Radius, EVoxelProjectionShape Shape, float NumRays, float MaxDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProjectionTools.FindProjectionVoxels");
		
		struct
		{
			TArray<struct FVoxelProjectionHit>                 Hits;
			class AVoxelWorld*                                 World;
			struct FVoxelLineTraceParameters                   Parameters;
			struct FVector                                     Position;
			struct FVector                                     Direction;
			float                                              Radius;
			EVoxelProjectionShape                              Shape;
			float                                              NumRays;
			float                                              MaxDistance;
		} params;
		params.World = World;
		params.Parameters = Parameters;
		params.Position = Position;
		params.Direction = Direction;
		params.Radius = Radius;
		params.Shape = Shape;
		params.NumRays = NumRays;
		params.MaxDistance = MaxDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hits != nullptr)
			*Hits = params.Hits;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelProjectionTools.CreateSurfaceVoxelsFromHitsWithExactValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVoxelProjectionHit>                 Hits                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FVoxelSurfaceEditsVoxels UVoxelProjectionTools::CreateSurfaceVoxelsFromHitsWithExactValues(class AVoxelWorld* World, TArray<struct FVoxelProjectionHit> Hits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProjectionTools.CreateSurfaceVoxelsFromHitsWithExactValues");
		
		struct
		{
			class AVoxelWorld*                                 World;
			TArray<struct FVoxelProjectionHit>                 Hits;
		} params;
		params.World = World;
		params.Hits = Hits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelProjectionTools.CreateSurfaceVoxelsFromHits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVoxelProjectionHit>                 Hits                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FVoxelSurfaceEditsVoxels UVoxelProjectionTools::CreateSurfaceVoxelsFromHits(TArray<struct FVoxelProjectionHit> Hits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProjectionTools.CreateSurfaceVoxelsFromHits");
		
		struct
		{
			TArray<struct FVoxelProjectionHit>                 Hits;
		} params;
		params.Hits = Hits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelProjectionTools.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelProjectionTools::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelProjectionTools");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelSphereToolBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSphereToolBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelSphereToolBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelRevertTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelRevertTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelRevertTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelWorldSaveObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelWorldSaveObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelWorldSaveObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSaveUtilities.DecompressVoxelSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelCompressedWorldSave                   CompressedSave                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVoxelUncompressedWorldSave                 OutUncompressedSave                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UVoxelSaveUtilities::DecompressVoxelSave(const struct FVoxelCompressedWorldSave& CompressedSave, struct FVoxelUncompressedWorldSave* OutUncompressedSave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSaveUtilities.DecompressVoxelSave");
		
		struct
		{
			struct FVoxelCompressedWorldSave                   CompressedSave;
			struct FVoxelUncompressedWorldSave                 OutUncompressedSave;
		} params;
		params.CompressedSave = CompressedSave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutUncompressedSave != nullptr)
			*OutUncompressedSave = params.OutUncompressedSave;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSaveUtilities.CompressVoxelSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelUncompressedWorldSave                 UncompressedSave                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVoxelCompressedWorldSave                   OutCompressedSave                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UVoxelSaveUtilities::CompressVoxelSave(const struct FVoxelUncompressedWorldSave& UncompressedSave, struct FVoxelCompressedWorldSave* OutCompressedSave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSaveUtilities.CompressVoxelSave");
		
		struct
		{
			struct FVoxelUncompressedWorldSave                 UncompressedSave;
			struct FVoxelCompressedWorldSave                   OutCompressedSave;
		} params;
		params.UncompressedSave = UncompressedSave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCompressedSave != nullptr)
			*OutCompressedSave = params.OutCompressedSave;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelSaveUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSaveUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelSaveUtilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelSmoothTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSmoothTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelSmoothTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelSphereTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSphereTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelSphereTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.TrimSphereAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAdditive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::TrimSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, const struct FVector& Normal, float Radius, float Falloff, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.TrimSphereAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			struct FVector                                     Normal;
			float                                              Radius;
			float                                              Falloff;
			bool                                               bAdditive;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Normal = Normal;
		params.Radius = Radius;
		params.Falloff = Falloff;
		params.bAdditive = bAdditive;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.TrimSphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAdditive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::TrimSphere(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, const struct FVector& Normal, float Radius, float Falloff, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.TrimSphere");
		
		struct
		{
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			struct FVector                                     Normal;
			float                                              Radius;
			float                                              Falloff;
			bool                                               bAdditive;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Normal = Normal;
		params.Radius = Radius;
		params.Falloff = Falloff;
		params.bAdditive = bAdditive;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.SmoothSphereAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumIterations                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelFalloff                                      FalloffType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::SmoothSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float Strength, int32_t NumIterations, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.SmoothSphereAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			float                                              Strength;
			int32_t                                            NumIterations;
			EVoxelFalloff                                      FalloffType;
			float                                              Falloff;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.Strength = Strength;
		params.NumIterations = NumIterations;
		params.FalloffType = FalloffType;
		params.Falloff = Falloff;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.SmoothSphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumIterations                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelFalloff                                      FalloffType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::SmoothSphere(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float Strength, int32_t NumIterations, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.SmoothSphere");
		
		struct
		{
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			float                                              Strength;
			int32_t                                            NumIterations;
			EVoxelFalloff                                      FalloffType;
			float                                              Falloff;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.Strength = Strength;
		params.NumIterations = NumIterations;
		params.FalloffType = FalloffType;
		params.Falloff = Falloff;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.SmoothMaterialSphereAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumIterations                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Mask                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelFalloff                                      FalloffType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedMaterials                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::SmoothMaterialSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float Strength, int32_t NumIterations, int32_t Mask, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.SmoothMaterialSphereAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			float                                              Strength;
			int32_t                                            NumIterations;
			int32_t                                            Mask;
			EVoxelFalloff                                      FalloffType;
			float                                              Falloff;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedMaterials;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.Strength = Strength;
		params.NumIterations = NumIterations;
		params.Mask = Mask;
		params.FalloffType = FalloffType;
		params.Falloff = Falloff;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedMaterials = bRecordModifiedMaterials;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedMaterials != nullptr)
			*ModifiedMaterials = params.ModifiedMaterials;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.SmoothMaterialSphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumIterations                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Mask                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelFalloff                                      FalloffType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedMaterials                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::SmoothMaterialSphere(TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float Strength, int32_t NumIterations, int32_t Mask, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.SmoothMaterialSphere");
		
		struct
		{
			TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			float                                              Strength;
			int32_t                                            NumIterations;
			int32_t                                            Mask;
			EVoxelFalloff                                      FalloffType;
			float                                              Falloff;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedMaterials;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.Strength = Strength;
		params.NumIterations = NumIterations;
		params.Mask = Mask;
		params.FalloffType = FalloffType;
		params.Falloff = Falloff;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedMaterials = bRecordModifiedMaterials;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedMaterials != nullptr)
			*ModifiedMaterials = params.ModifiedMaterials;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.SetValueSphereAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::SetValueSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.SetValueSphereAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			float                                              Value;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.Value = Value;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.SetValueSphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::SetValueSphere(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.SetValueSphere");
		
		struct
		{
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			float                                              Value;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.Value = Value;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.SetMaterialSphereAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelPaintMaterial                         PaintMaterial                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelFalloff                                      FalloffType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedMaterials                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::SetMaterialSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, const struct FVoxelPaintMaterial& PaintMaterial, float Strength, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.SetMaterialSphereAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			struct FVoxelPaintMaterial                         PaintMaterial;
			float                                              Strength;
			EVoxelFalloff                                      FalloffType;
			float                                              Falloff;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedMaterials;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.PaintMaterial = PaintMaterial;
		params.Strength = Strength;
		params.FalloffType = FalloffType;
		params.Falloff = Falloff;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedMaterials = bRecordModifiedMaterials;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedMaterials != nullptr)
			*ModifiedMaterials = params.ModifiedMaterials;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.SetMaterialSphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelPaintMaterial                         PaintMaterial                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelFalloff                                      FalloffType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedMaterials                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::SetMaterialSphere(TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, const struct FVoxelPaintMaterial& PaintMaterial, float Strength, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.SetMaterialSphere");
		
		struct
		{
			TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			struct FVoxelPaintMaterial                         PaintMaterial;
			float                                              Strength;
			EVoxelFalloff                                      FalloffType;
			float                                              Falloff;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedMaterials;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.PaintMaterial = PaintMaterial;
		params.Strength = Strength;
		params.FalloffType = FalloffType;
		params.Falloff = Falloff;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedMaterials = bRecordModifiedMaterials;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedMaterials != nullptr)
			*ModifiedMaterials = params.ModifiedMaterials;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.RevertSphereToGeneratorAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRevertValues                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRevertMaterials                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::RevertSphereToGeneratorAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.RevertSphereToGeneratorAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			bool                                               bRevertValues;
			bool                                               bRevertMaterials;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.bRevertValues = bRevertValues;
		params.bRevertMaterials = bRevertMaterials;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.RevertSphereToGenerator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRevertValues                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRevertMaterials                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::RevertSphereToGenerator(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.RevertSphereToGenerator");
		
		struct
		{
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			bool                                               bRevertValues;
			bool                                               bRevertMaterials;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.bRevertValues = bRevertValues;
		params.bRevertMaterials = bRevertMaterials;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.RevertSphereAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HistoryPosition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRevertValues                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRevertMaterials                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::RevertSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, int32_t HistoryPosition, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.RevertSphereAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			int32_t                                            HistoryPosition;
			bool                                               bRevertValues;
			bool                                               bRevertMaterials;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.HistoryPosition = HistoryPosition;
		params.bRevertValues = bRevertValues;
		params.bRevertMaterials = bRevertMaterials;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.RevertSphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HistoryPosition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRevertValues                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRevertMaterials                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::RevertSphere(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, int32_t HistoryPosition, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.RevertSphere");
		
		struct
		{
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			int32_t                                            HistoryPosition;
			bool                                               bRevertValues;
			bool                                               bRevertMaterials;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.HistoryPosition = HistoryPosition;
		params.bRevertValues = bRevertValues;
		params.bRevertMaterials = bRevertMaterials;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.RemoveSphereWithDurabilityAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelInt32Interval                         Interval                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::RemoveSphereWithDurabilityAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, const struct FVoxelInt32Interval& Interval, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.RemoveSphereWithDurabilityAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			struct FVoxelInt32Interval                         Interval;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.Interval = Interval;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.RemoveSphereWithDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelInt32Interval                         Interval                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::RemoveSphereWithDurability(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, const struct FVoxelInt32Interval& Interval, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.RemoveSphereWithDurability");
		
		struct
		{
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			struct FVoxelInt32Interval                         Interval;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.Interval = Interval;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.RemoveSphereAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::RemoveSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.RemoveSphereAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.RemoveSphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::RemoveSphere(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.RemoveSphere");
		
		struct
		{
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.ApplyMaterialKernelSphereAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CenterMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FirstDegreeNeighborMultiplier                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SecondDegreeNeighborMultiplier                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ThirdDegreeNeighborMultiplier                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumIterations                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Mask                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedMaterials                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::ApplyMaterialKernelSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32_t NumIterations, int32_t Mask, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.ApplyMaterialKernelSphereAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			float                                              CenterMultiplier;
			float                                              FirstDegreeNeighborMultiplier;
			float                                              SecondDegreeNeighborMultiplier;
			float                                              ThirdDegreeNeighborMultiplier;
			int32_t                                            NumIterations;
			int32_t                                            Mask;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedMaterials;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.CenterMultiplier = CenterMultiplier;
		params.FirstDegreeNeighborMultiplier = FirstDegreeNeighborMultiplier;
		params.SecondDegreeNeighborMultiplier = SecondDegreeNeighborMultiplier;
		params.ThirdDegreeNeighborMultiplier = ThirdDegreeNeighborMultiplier;
		params.NumIterations = NumIterations;
		params.Mask = Mask;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedMaterials = bRecordModifiedMaterials;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedMaterials != nullptr)
			*ModifiedMaterials = params.ModifiedMaterials;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.ApplyMaterialKernelSphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CenterMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FirstDegreeNeighborMultiplier                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SecondDegreeNeighborMultiplier                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ThirdDegreeNeighborMultiplier                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumIterations                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Mask                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedMaterials                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::ApplyMaterialKernelSphere(TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32_t NumIterations, int32_t Mask, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.ApplyMaterialKernelSphere");
		
		struct
		{
			TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			float                                              CenterMultiplier;
			float                                              FirstDegreeNeighborMultiplier;
			float                                              SecondDegreeNeighborMultiplier;
			float                                              ThirdDegreeNeighborMultiplier;
			int32_t                                            NumIterations;
			int32_t                                            Mask;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedMaterials;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.CenterMultiplier = CenterMultiplier;
		params.FirstDegreeNeighborMultiplier = FirstDegreeNeighborMultiplier;
		params.SecondDegreeNeighborMultiplier = SecondDegreeNeighborMultiplier;
		params.ThirdDegreeNeighborMultiplier = ThirdDegreeNeighborMultiplier;
		params.NumIterations = NumIterations;
		params.Mask = Mask;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedMaterials = bRecordModifiedMaterials;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedMaterials != nullptr)
			*ModifiedMaterials = params.ModifiedMaterials;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.ApplyKernelSphereAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CenterMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FirstDegreeNeighborMultiplier                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SecondDegreeNeighborMultiplier                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ThirdDegreeNeighborMultiplier                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumIterations                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::ApplyKernelSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32_t NumIterations, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.ApplyKernelSphereAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			float                                              CenterMultiplier;
			float                                              FirstDegreeNeighborMultiplier;
			float                                              SecondDegreeNeighborMultiplier;
			float                                              ThirdDegreeNeighborMultiplier;
			int32_t                                            NumIterations;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.CenterMultiplier = CenterMultiplier;
		params.FirstDegreeNeighborMultiplier = FirstDegreeNeighborMultiplier;
		params.SecondDegreeNeighborMultiplier = SecondDegreeNeighborMultiplier;
		params.ThirdDegreeNeighborMultiplier = ThirdDegreeNeighborMultiplier;
		params.NumIterations = NumIterations;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.ApplyKernelSphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CenterMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FirstDegreeNeighborMultiplier                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SecondDegreeNeighborMultiplier                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ThirdDegreeNeighborMultiplier                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumIterations                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::ApplyKernelSphere(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32_t NumIterations, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.ApplyKernelSphere");
		
		struct
		{
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			float                                              CenterMultiplier;
			float                                              FirstDegreeNeighborMultiplier;
			float                                              SecondDegreeNeighborMultiplier;
			float                                              ThirdDegreeNeighborMultiplier;
			int32_t                                            NumIterations;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.CenterMultiplier = CenterMultiplier;
		params.FirstDegreeNeighborMultiplier = FirstDegreeNeighborMultiplier;
		params.SecondDegreeNeighborMultiplier = SecondDegreeNeighborMultiplier;
		params.ThirdDegreeNeighborMultiplier = ThirdDegreeNeighborMultiplier;
		params.NumIterations = NumIterations;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.AddSphereAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::AddSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.AddSphereAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSphereTools.AddSphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSphereTools::AddSphere(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.AddSphere");
		
		struct
		{
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVector                                     Position;
			float                                              Radius;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bConvertToVoxelSpace;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.Position = Position;
		params.Radius = Radius;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelSphereTools.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSphereTools::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelSphereTools");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AVoxelStaticWorld.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVoxelStaticWorld::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelStaticWorld");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceEditTools.PropagateVoxelMaterialsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelSurfaceEditsProcessedVoxels           ProcessedVoxels                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedMaterials                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSurfaceEditTools::PropagateVoxelMaterialsAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceEditTools.PropagateVoxelMaterialsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVoxelSurfaceEditsProcessedVoxels           ProcessedVoxels;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedMaterials;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.ProcessedVoxels = ProcessedVoxels;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedMaterials = bRecordModifiedMaterials;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedMaterials != nullptr)
			*ModifiedMaterials = params.ModifiedMaterials;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceEditTools.PropagateVoxelMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelSurfaceEditsProcessedVoxels           ProcessedVoxels                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedMaterials                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSurfaceEditTools::PropagateVoxelMaterials(TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceEditTools.PropagateVoxelMaterials");
		
		struct
		{
			TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVoxelSurfaceEditsProcessedVoxels           ProcessedVoxels;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedMaterials;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.ProcessedVoxels = ProcessedVoxels;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedMaterials = bRecordModifiedMaterials;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedMaterials != nullptr)
			*ModifiedMaterials = params.ModifiedMaterials;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceEditTools.EditVoxelValuesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelSurfaceEditsProcessedVoxels           ProcessedVoxels                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              DistanceDivisor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSurfaceEditTools::EditVoxelValuesAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, float DistanceDivisor, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceEditTools.EditVoxelValuesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVoxelSurfaceEditsProcessedVoxels           ProcessedVoxels;
			float                                              DistanceDivisor;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.ProcessedVoxels = ProcessedVoxels;
		params.DistanceDivisor = DistanceDivisor;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceEditTools.EditVoxelValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelValue>                 ModifiedValues                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelSurfaceEditsProcessedVoxels           ProcessedVoxels                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              DistanceDivisor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSurfaceEditTools::EditVoxelValues(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, float DistanceDivisor, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceEditTools.EditVoxelValues");
		
		struct
		{
			TArray<struct FModifiedVoxelValue>                 ModifiedValues;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVoxelSurfaceEditsProcessedVoxels           ProcessedVoxels;
			float                                              DistanceDivisor;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedValues;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.ProcessedVoxels = ProcessedVoxels;
		params.DistanceDivisor = DistanceDivisor;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedValues = bRecordModifiedValues;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedValues != nullptr)
			*ModifiedValues = params.ModifiedValues;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceEditTools.EditVoxelMaterialsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelPaintMaterial                         PaintMaterial                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVoxelSurfaceEditsProcessedVoxels           ProcessedVoxels                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedMaterials                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSurfaceEditTools::EditVoxelMaterialsAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelPaintMaterial& PaintMaterial, const struct FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceEditTools.EditVoxelMaterialsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVoxelPaintMaterial                         PaintMaterial;
			struct FVoxelSurfaceEditsProcessedVoxels           ProcessedVoxels;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedMaterials;
			bool                                               bUpdateRender;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.VoxelWorld = VoxelWorld;
		params.PaintMaterial = PaintMaterial;
		params.ProcessedVoxels = ProcessedVoxels;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedMaterials = bRecordModifiedMaterials;
		params.bUpdateRender = bUpdateRender;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedMaterials != nullptr)
			*ModifiedMaterials = params.ModifiedMaterials;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceEditTools.EditVoxelMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                EditedBounds                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelPaintMaterial                         PaintMaterial                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVoxelSurfaceEditsProcessedVoxels           ProcessedVoxels                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecordModifiedMaterials                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSurfaceEditTools::EditVoxelMaterials(TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelPaintMaterial& PaintMaterial, const struct FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceEditTools.EditVoxelMaterials");
		
		struct
		{
			TArray<struct FModifiedVoxelMaterial>              ModifiedMaterials;
			struct FVoxelIntBox                                EditedBounds;
			class AVoxelWorld*                                 VoxelWorld;
			struct FVoxelPaintMaterial                         PaintMaterial;
			struct FVoxelSurfaceEditsProcessedVoxels           ProcessedVoxels;
			bool                                               bMultiThreaded;
			bool                                               bRecordModifiedMaterials;
			bool                                               bUpdateRender;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.PaintMaterial = PaintMaterial;
		params.ProcessedVoxels = ProcessedVoxels;
		params.bMultiThreaded = bMultiThreaded;
		params.bRecordModifiedMaterials = bRecordModifiedMaterials;
		params.bUpdateRender = bUpdateRender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedMaterials != nullptr)
			*ModifiedMaterials = params.ModifiedMaterials;
		if (EditedBounds != nullptr)
			*EditedBounds = params.EditedBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelSurfaceEditTools.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSurfaceEditTools::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelSurfaceEditTools");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelSurfaceTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSurfaceTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelSurfaceTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceTools.GetStrengthMaskScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ScaleX                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ScaleY                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelFloatTexture                          Mask                                                       (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              SizeX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SizeY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSurfaceTools::GetStrengthMaskScale(float* ScaleX, float* ScaleY, class AVoxelWorld* World, const struct FVoxelFloatTexture& Mask, float SizeX, float SizeY, bool bConvertToVoxelSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceTools.GetStrengthMaskScale");
		
		struct
		{
			float                                              ScaleX;
			float                                              ScaleY;
			class AVoxelWorld*                                 World;
			struct FVoxelFloatTexture                          Mask;
			float                                              SizeX;
			float                                              SizeY;
			bool                                               bConvertToVoxelSpace;
		} params;
		params.World = World;
		params.Mask = Mask;
		params.SizeX = SizeX;
		params.SizeY = SizeY;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScaleX != nullptr)
			*ScaleX = params.ScaleX;
		if (ScaleY != nullptr)
			*ScaleY = params.ScaleY;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceTools.GetBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelSurfaceEditsProcessedVoxels           Voxels                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	struct FVoxelIntBox UVoxelSurfaceTools::GetBounds(const struct FVoxelSurfaceEditsProcessedVoxels& Voxels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceTools.GetBounds");
		
		struct
		{
			struct FVoxelSurfaceEditsProcessedVoxels           Voxels;
		} params;
		params.Voxels = Voxels;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceTools.FindSurfaceVoxelsFromDistanceField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelSurfaceEditsVoxels                    Voxels                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMultiThreaded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelComputeDevice                                ComputeDevice                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSurfaceTools::FindSurfaceVoxelsFromDistanceField(struct FVoxelSurfaceEditsVoxels* Voxels, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bMultiThreaded, EVoxelComputeDevice ComputeDevice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceTools.FindSurfaceVoxelsFromDistanceField");
		
		struct
		{
			struct FVoxelSurfaceEditsVoxels                    Voxels;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bMultiThreaded;
			EVoxelComputeDevice                                ComputeDevice;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		params.bMultiThreaded = bMultiThreaded;
		params.ComputeDevice = ComputeDevice;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Voxels != nullptr)
			*Voxels = params.Voxels;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceTools.FindSurfaceVoxelsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelSurfaceEditsVoxels                    Voxels                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bComputeNormals                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSurfaceTools::FindSurfaceVoxelsAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelSurfaceEditsVoxels* Voxels, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bComputeNormals, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceTools.FindSurfaceVoxelsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			struct FVoxelSurfaceEditsVoxels                    Voxels;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bComputeNormals;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Bounds = Bounds;
		params.bComputeNormals = bComputeNormals;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Voxels != nullptr)
			*Voxels = params.Voxels;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceTools.FindSurfaceVoxels2DAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelSurfaceEditsVoxels                    Voxels                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bComputeNormals                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSurfaceTools::FindSurfaceVoxels2DAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelSurfaceEditsVoxels* Voxels, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bComputeNormals, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceTools.FindSurfaceVoxels2DAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			struct FVoxelSurfaceEditsVoxels                    Voxels;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bComputeNormals;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.World = World;
		params.Bounds = Bounds;
		params.bComputeNormals = bComputeNormals;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Voxels != nullptr)
			*Voxels = params.Voxels;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceTools.FindSurfaceVoxels2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelSurfaceEditsVoxels                    Voxels                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bComputeNormals                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSurfaceTools::FindSurfaceVoxels2D(struct FVoxelSurfaceEditsVoxels* Voxels, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bComputeNormals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceTools.FindSurfaceVoxels2D");
		
		struct
		{
			struct FVoxelSurfaceEditsVoxels                    Voxels;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bComputeNormals;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		params.bComputeNormals = bComputeNormals;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Voxels != nullptr)
			*Voxels = params.Voxels;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceTools.FindSurfaceVoxels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelSurfaceEditsVoxels                    Voxels                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bComputeNormals                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSurfaceTools::FindSurfaceVoxels(struct FVoxelSurfaceEditsVoxels* Voxels, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bComputeNormals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceTools.FindSurfaceVoxels");
		
		struct
		{
			struct FVoxelSurfaceEditsVoxels                    Voxels;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			bool                                               bComputeNormals;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		params.bComputeNormals = bComputeNormals;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Voxels != nullptr)
			*Voxels = params.Voxels;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceTools.DebugSurfaceVoxels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelSurfaceEditsProcessedVoxels           ProcessedVoxels                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              LifeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSurfaceTools::DebugSurfaceVoxels(class AVoxelWorld* World, const struct FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, float LifeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceTools.DebugSurfaceVoxels");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelSurfaceEditsProcessedVoxels           ProcessedVoxels;
			float                                              LifeTime;
		} params;
		params.World = World;
		params.ProcessedVoxels = ProcessedVoxels;
		params.LifeTime = LifeTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceTools.ApplyTerrace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TerraceHeightInVoxels                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Angle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ImmutableVoxels                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelSurfaceEditsStackElement UVoxelSurfaceTools::ApplyTerrace(int32_t TerraceHeightInVoxels, float Angle, int32_t ImmutableVoxels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceTools.ApplyTerrace");
		
		struct
		{
			int32_t                                            TerraceHeightInVoxels;
			float                                              Angle;
			int32_t                                            ImmutableVoxels;
		} params;
		params.TerraceHeightInVoxels = TerraceHeightInVoxels;
		params.Angle = Angle;
		params.ImmutableVoxels = ImmutableVoxels;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceTools.ApplyStrengthMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelFloatTexture                          Mask                                                       (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EditPosition                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ScaleX                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ScaleY                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     PlaneNormal                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     PlaneTangent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelSamplerMode                                  SamplerMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelSurfaceEditsStackElement UVoxelSurfaceTools::ApplyStrengthMask(class AVoxelWorld* World, const struct FVoxelFloatTexture& Mask, const struct FVector& EditPosition, float ScaleX, float ScaleY, const struct FVector& PlaneNormal, const struct FVector& PlaneTangent, EVoxelSamplerMode SamplerMode, bool bConvertToVoxelSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceTools.ApplyStrengthMask");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelFloatTexture                          Mask;
			struct FVector                                     EditPosition;
			float                                              ScaleX;
			float                                              ScaleY;
			struct FVector                                     PlaneNormal;
			struct FVector                                     PlaneTangent;
			EVoxelSamplerMode                                  SamplerMode;
			bool                                               bConvertToVoxelSpace;
		} params;
		params.World = World;
		params.Mask = Mask;
		params.EditPosition = EditPosition;
		params.ScaleX = ScaleX;
		params.ScaleY = ScaleY;
		params.PlaneNormal = PlaneNormal;
		params.PlaneTangent = PlaneTangent;
		params.SamplerMode = SamplerMode;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceTools.ApplyStrengthCurve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Center                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 StrengthCurve                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelSurfaceEditsStackElement UVoxelSurfaceTools::ApplyStrengthCurve(class AVoxelWorld* World, const struct FVector& Center, float Radius, class UCurveFloat* StrengthCurve, bool bConvertToVoxelSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceTools.ApplyStrengthCurve");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVector                                     Center;
			float                                              Radius;
			class UCurveFloat*                                 StrengthCurve;
			bool                                               bConvertToVoxelSpace;
		} params;
		params.World = World;
		params.Center = Center;
		params.Radius = Radius;
		params.StrengthCurve = StrengthCurve;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceTools.ApplyStackAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVoxelSurfaceEditsProcessedVoxels           ProcessedVoxels                                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FVoxelSurfaceEditsVoxels                    Voxels                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVoxelSurfaceEditsStack                     Stack                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideLatentWarnings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelSurfaceTools::ApplyStackAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelSurfaceEditsProcessedVoxels* ProcessedVoxels, const struct FVoxelSurfaceEditsVoxels& Voxels, const struct FVoxelSurfaceEditsStack& Stack, bool bHideLatentWarnings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceTools.ApplyStackAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FLatentActionInfo                           LatentInfo;
			struct FVoxelSurfaceEditsProcessedVoxels           ProcessedVoxels;
			struct FVoxelSurfaceEditsVoxels                    Voxels;
			struct FVoxelSurfaceEditsStack                     Stack;
			bool                                               bHideLatentWarnings;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Voxels = Voxels;
		params.Stack = Stack;
		params.bHideLatentWarnings = bHideLatentWarnings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProcessedVoxels != nullptr)
			*ProcessedVoxels = params.ProcessedVoxels;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceTools.ApplyStack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelSurfaceEditsVoxels                    Voxels                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVoxelSurfaceEditsStack                     Stack                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	struct FVoxelSurfaceEditsProcessedVoxels UVoxelSurfaceTools::ApplyStack(const struct FVoxelSurfaceEditsVoxels& Voxels, const struct FVoxelSurfaceEditsStack& Stack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceTools.ApplyStack");
		
		struct
		{
			struct FVoxelSurfaceEditsVoxels                    Voxels;
			struct FVoxelSurfaceEditsStack                     Stack;
		} params;
		params.Voxels = Voxels;
		params.Stack = Stack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceTools.ApplyFlatten
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     PlanePoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     PlaneNormal                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelSDFMergeMode                                 MergeMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelSurfaceEditsStackElement UVoxelSurfaceTools::ApplyFlatten(class AVoxelWorld* World, const struct FVector& PlanePoint, const struct FVector& PlaneNormal, EVoxelSDFMergeMode MergeMode, bool bConvertToVoxelSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceTools.ApplyFlatten");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVector                                     PlanePoint;
			struct FVector                                     PlaneNormal;
			EVoxelSDFMergeMode                                 MergeMode;
			bool                                               bConvertToVoxelSpace;
		} params;
		params.World = World;
		params.PlanePoint = PlanePoint;
		params.PlaneNormal = PlaneNormal;
		params.MergeMode = MergeMode;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceTools.ApplyFalloff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelFalloff                                      FalloffType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Center                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelSurfaceEditsStackElement UVoxelSurfaceTools::ApplyFalloff(class AVoxelWorld* World, EVoxelFalloff FalloffType, const struct FVector& Center, float Radius, float Falloff, bool bConvertToVoxelSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceTools.ApplyFalloff");
		
		struct
		{
			class AVoxelWorld*                                 World;
			EVoxelFalloff                                      FalloffType;
			struct FVector                                     Center;
			float                                              Radius;
			float                                              Falloff;
			bool                                               bConvertToVoxelSpace;
		} params;
		params.World = World;
		params.FalloffType = FalloffType;
		params.Center = Center;
		params.Radius = Radius;
		params.Falloff = Falloff;
		params.bConvertToVoxelSpace = bConvertToVoxelSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceTools.ApplyConstantStrength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelSurfaceEditsStackElement UVoxelSurfaceTools::ApplyConstantStrength(float Strength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceTools.ApplyConstantStrength");
		
		struct
		{
			float                                              Strength;
		} params;
		params.Strength = Strength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelSurfaceTools.AddToStack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelSurfaceEditsStack                     Stack                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVoxelSurfaceEditsStackElement              Element                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	struct FVoxelSurfaceEditsStack UVoxelSurfaceTools::AddToStack(const struct FVoxelSurfaceEditsStack& Stack, const struct FVoxelSurfaceEditsStackElement& Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSurfaceTools.AddToStack");
		
		struct
		{
			struct FVoxelSurfaceEditsStack                     Stack;
			struct FVoxelSurfaceEditsStackElement              Element;
		} params;
		params.Stack = Stack;
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelSurfaceTools.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelSurfaceTools::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelSurfaceTools");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelTestLibrary.TestValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelTestValues                            ValuesA                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVoxelTestValues                            ValuesB                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void UVoxelTestLibrary::TestValues(const struct FVoxelTestValues& ValuesA, const struct FVoxelTestValues& ValuesB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTestLibrary.TestValues");
		
		struct
		{
			struct FVoxelTestValues                            ValuesA;
			struct FVoxelTestValues                            ValuesB;
		} params;
		params.ValuesA = ValuesA;
		params.ValuesB = ValuesB;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelTestLibrary.ReadValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelTestValues UVoxelTestLibrary::ReadValues(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTestLibrary.ReadValues");
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelTestLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelTestLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelTestLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelTexturePoolSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelTexturePoolSubsystemProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelTexturePoolSubsystemProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelTextureTools.Minimum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelFloatTexture                          Texture                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelFloatTexture UVoxelTextureTools::Minimum(const struct FVoxelFloatTexture& Texture, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTextureTools.Minimum");
		
		struct
		{
			struct FVoxelFloatTexture                          Texture;
			float                                              Radius;
		} params;
		params.Texture = Texture;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelTextureTools.Maximum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVoxelFloatTexture                          Texture                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelFloatTexture UVoxelTextureTools::Maximum(const struct FVoxelFloatTexture& Texture, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTextureTools.Maximum");
		
		struct
		{
			struct FVoxelFloatTexture                          Texture;
			float                                              Radius;
		} params;
		params.Texture = Texture;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelTextureTools.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelTextureTools::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelTextureTools");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelToolSharedConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelToolSharedConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelToolSharedConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelToolLibrary.UpdateSphereOverlayMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVoxelToolBase*                              Tool                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInstanceDynamic*                    OverlayMaterialInstance                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoxelFalloff                                      FalloffType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelToolLibrary::UpdateSphereOverlayMaterial(class UVoxelToolBase* Tool, class UMaterialInstanceDynamic* OverlayMaterialInstance, EVoxelFalloff FalloffType, float Falloff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolLibrary.UpdateSphereOverlayMaterial");
		
		struct
		{
			class UVoxelToolBase*                              Tool;
			class UMaterialInstanceDynamic*                    OverlayMaterialInstance;
			EVoxelFalloff                                      FalloffType;
			float                                              Falloff;
		} params;
		params.Tool = Tool;
		params.OverlayMaterialInstance = OverlayMaterialInstance;
		params.FalloffType = FalloffType;
		params.Falloff = Falloff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelToolLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelToolLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelToolLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelToolManager.SetActiveToolByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NewActiveTool                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelToolManager::SetActiveToolByName(const class FName& NewActiveTool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolManager.SetActiveToolByName");
		
		struct
		{
			class FName                                        NewActiveTool;
		} params;
		params.NewActiveTool = NewActiveTool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelToolManager.SetActiveToolByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      NewActiveTool                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelToolManager::SetActiveToolByClass(class UClass* NewActiveTool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolManager.SetActiveToolByClass");
		
		struct
		{
			class UClass*                                      NewActiveTool;
		} params;
		params.NewActiveTool = NewActiveTool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelToolManager.SetActiveTool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVoxelTool*                                  NewActiveTool                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelToolManager::SetActiveTool(class UVoxelTool* NewActiveTool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolManager.SetActiveTool");
		
		struct
		{
			class UVoxelTool*                                  NewActiveTool;
		} params;
		params.NewActiveTool = NewActiveTool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Voxel.VoxelToolManager.K2_GetSharedConfig
	 * 		Flags  -> ()
	 */
	class UVoxelToolSharedConfig* UVoxelToolManager::K2_GetSharedConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolManager.K2_GetSharedConfig");
		
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
	 * 		Name   -> Function Voxel.VoxelToolManager.GetTools
	 * 		Flags  -> ()
	 */
	TArray<class UVoxelTool*> UVoxelToolManager::GetTools()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolManager.GetTools");
		
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
	 * 		Name   -> Function Voxel.VoxelToolManager.GetActiveTool
	 * 		Flags  -> ()
	 */
	class UVoxelTool* UVoxelToolManager::GetActiveTool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolManager.GetActiveTool");
		
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
	 * 		Name   -> Function Voxel.VoxelToolManager.CreateDefaultTools
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLoadBlueprints                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelToolManager::CreateDefaultTools(bool bLoadBlueprints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Voxel.VoxelToolManager.CreateDefaultTools");
		
		struct
		{
			bool                                               bLoadBlueprints;
		} params;
		params.bLoadBlueprints = bLoadBlueprints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelToolManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelToolManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelToolManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelToolRenderingSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelToolRenderingSubsystemProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelToolRenderingSubsystemProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelTrimTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelTrimTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelTrimTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelWorldRootComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelWorldRootComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Voxel.VoxelWorldRootComponent");
		return ptr;
	}

}


