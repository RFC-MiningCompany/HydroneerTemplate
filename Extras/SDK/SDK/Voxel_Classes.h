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
	 * Class Voxel.AssetActorPrimitiveComponent
	 * Size -> 0x0000 (FullSize[0x0440] - InheritedSize[0x0440])
	 */
	class UAssetActorPrimitiveComponent : public UPrimitiveComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelPlaceableItemActor
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class AVoxelPlaceableItemActor : public AActor
	{
	public:
		class AVoxelWorld*                                         PreviewWorld;                                            // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyImportIntoPreviewWorld;                             // 0x0228(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GUXJ[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (PADDING)

	public:
		int32_t K2_GetPriority();
		void K2_AddItemToWorld(class AVoxelWorld* World);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelAssetActor
	 * Size -> 0x00A8 (FullSize[0x02D8] - InheritedSize[0x0230])
	 */
	class AVoxelAssetActor : public AVoxelPlaceableItemActor
	{
	public:
		struct FVoxelTransformableGeneratorPicker                  Generator;                                               // 0x0230(0x0068) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAssetBounds;                                    // 0x029C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7S3T[0x3];                                   // 0x029D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelIntBox                                        AssetBounds;                                             // 0x02A0(0x0018) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImportAsReference;                                      // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSubtractiveAsset;                                       // 0x02B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelAssetMergeMode                                       MergeMode;                                               // 0x02BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnNewVoxelWorld;                                     // 0x02BB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimulatePhysics;                                        // 0x02BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJTJ[0x3];                                   // 0x02BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PreviewLOD;                                              // 0x02C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelAssetActorPreviewUpdateType                          UpdateType;                                              // 0x02C4(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1URR[0x3];                                   // 0x02C4(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bRoundAssetPosition;                                     // 0x02C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRoundAssetRotation;                                     // 0x02C9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0K4L[0x2];                                   // 0x02CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MaxPreviewChunks;                                        // 0x02CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     Root;                                                    // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelAssetTools
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelAssetTools : public UBlueprintFunctionLibrary
	{
	public:
		void SetDataAssetMaterial(class UVoxelDataAsset* Asset, class UVoxelDataAsset** NewAsset, const struct FVoxelMaterial& Material);
		void InvertDataAsset(class UVoxelDataAsset* Asset, class UVoxelDataAsset** InvertedAsset);
		void ImportModifierAssetAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, const struct FTransform& Transform, const struct FVoxelIntBox& Bounds, bool bModifyValues, bool bModifyMaterials, bool bLockEntireWorld, bool bConvertToVoxelSpace, bool bHideLatentWarnings);
		void ImportModifierAsset(class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, const struct FTransform& Transform, const struct FVoxelIntBox& Bounds, bool bModifyValues, bool bModifyMaterials, bool bLockEntireWorld, bool bConvertToVoxelSpace);
		void ImportDataAssetFastAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, class UVoxelDataAsset* Asset, const struct FVector& Position, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace, bool bHideLatentWarnings);
		void ImportDataAssetFast(class AVoxelWorld* World, class UVoxelDataAsset* Asset, const struct FVector& Position, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace);
		void ImportAssetAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, const struct FTransform& Transform, const struct FVoxelIntBox& Bounds, bool bSubtractive, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace, bool bHideLatentWarnings);
		void ImportAssetAsReferenceAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelAssetItemReference* Reference, class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, const struct FTransform& Transform, const struct FVoxelIntBox& Bounds, int32_t Priority, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
		void ImportAssetAsReference(struct FVoxelAssetItemReference* Reference, class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, const struct FTransform& Transform, const struct FVoxelIntBox& Bounds, int32_t Priority, bool bConvertToVoxelSpace, bool bUpdateRender);
		void ImportAsset(class AVoxelWorld* World, class UVoxelTransformableGeneratorInstanceWrapper* Asset, const struct FTransform& Transform, const struct FVoxelIntBox& Bounds, bool bSubtractive, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace);
		class UVoxelDataAsset* CreateDataAssetFromWorldSection(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bCopyMaterials);
		void AddDisableEditsBoxAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelDisableEditsBoxItemReference* Reference, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings);
		void AddDisableEditsBox(struct FVoxelDisableEditsBoxItemReference* Reference, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelMaterialCollectionBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelMaterialCollectionBase : public UObject
	{
	public:
		TArray<struct FVoxelMaterialCollectionMaterialInfo> GetMaterials();
		int32_t GetMaterialIndex(const class FName& Name);
		class UMaterialInterface* GetIndexMaterial(unsigned char Index);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelBasicMaterialCollection
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UVoxelBasicMaterialCollection : public UVoxelMaterialCollectionBase
	{
	public:
		TArray<struct FVoxelBasicMaterialCollectionLayer>          Layers;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void UpdatePosition(class AVoxelWorld* World, const struct FIntVector& Position);
		void UpdateBounds(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds);
		void UpdateAll(class AVoxelWorld* World);
		bool Undo(class AVoxelWorld* World, TArray<struct FVoxelIntBox>* OutUpdatedBounds);
		struct FBox TransformVoxelBoxToGlobalBox(class AVoxelWorld* World, const struct FVoxelIntBox& Box);
		struct FVoxelIntBox TransformGlobalBoxToVoxelBox(class AVoxelWorld* World, const struct FBox& Box);
		struct FIntVector Substract_IntVectorIntVector(const struct FIntVector& Left, const struct FIntVector& Right);
		void SetToolRenderingMaterial(class AVoxelWorld* World, const struct FVoxelToolRenderingRef& Ref, class UMaterialInterface* Material);
		void SetToolRenderingEnabled(class AVoxelWorld* World, const struct FVoxelToolRenderingRef& Ref, bool bEnabled);
		void SetToolRenderingBounds(class AVoxelWorld* World, const struct FVoxelToolRenderingRef& Ref, const struct FBox& Bounds);
		void SetNumberOfVoxelThreads(int32_t Number);
		void ScaleData(class AVoxelWorld* World, const struct FVector& Scale);
		void SaveFrame(class AVoxelWorld* World);
		void RegenerateSpawners(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds);
		bool Redo(class AVoxelWorld* World, TArray<struct FVoxelIntBox>* OutUpdatedBounds);
		void RecreateSpawners(class AVoxelWorld* World);
		void RecreateRender(class AVoxelWorld* World);
		void Recreate(class AVoxelWorld* World, bool bSaveData);
		void RecomputeComponentPositions(class AVoxelWorld* World);
		void RaiseWarning(const class FString& Message, class UObject* Object);
		void RaiseInfo(const class FString& Message, class UObject* Object);
		void RaiseError(const class FString& Message, class UObject* Object);
		int32_t NumberOfCores();
		struct FIntVector Multiply_IntVectorIntVector(const struct FIntVector& Left, const struct FIntVector& Right);
		struct FIntVector Multiply_IntVectorInt(const struct FIntVector& Left, int32_t Right);
		struct FIntVector Multiply_IntIntVector(int32_t Left, const struct FIntVector& Right);
		void MarkSpawnersDirty(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds);
		struct FVoxelMaterial MakeSingleIndexMaterial(unsigned char Index);
		struct FVoxelMaterial MakeRawMaterial(unsigned char R, unsigned char G, unsigned char B, unsigned char A, unsigned char U0, unsigned char V0, unsigned char U1, unsigned char v1, unsigned char U2, unsigned char v2, unsigned char U3, unsigned char V3);
		int32_t MakeMaterialMask(bool R, bool G, bool B, bool A, bool U0, bool V0, bool U1, bool v1, bool U2, bool v2, bool U3, bool V3);
		struct FVoxelIntBox MakeIntBoxFromGlobalPositionAndRadius(class AVoxelWorld* World, const struct FVector& GlobalPosition, float Radius);
		struct FVoxelMaterial MakeColorMaterial(const struct FLinearColor& Color);
		void LogMemoryStats();
		bool IsVoxelWorldMeshLoading(class AVoxelWorld* World);
		bool IsVoxelWorldFoliageLoading(class AVoxelWorld* World);
		bool IsVoxelPluginPro();
		bool IsVoxelFloatTextureValid(const struct FVoxelFloatTexture& Texture);
		bool IsVoxelColorTextureValid(const struct FVoxelFloatTexture& Texture);
		bool IsValidRef(class AVoxelWorld* World, const struct FVoxelToolRenderingRef& Ref);
		bool IntervalContains_Int32(const struct FVoxelInt32Interval& Interval, int32_t Value);
		bool IntervalContains_Float(const struct FVoxelFloatInterval& Interval, float Value);
		bool HasValueData(class AVoxelWorld* World);
		bool HasMaterialData(class AVoxelWorld* World);
		class AVoxelWorld* GetVoxelWorldOverlappingBox(class UObject* WorldContextObject, const struct FBox& Box);
		class AVoxelWorld* GetVoxelWorldOverlappingActor(class AActor* Actor);
		class AVoxelWorld* GetVoxelWorldContainingPosition(class UObject* WorldContextObject, const struct FVector& Position);
		struct FIntPoint GetVoxelFloatTextureSize(const struct FVoxelFloatTexture& Texture);
		struct FIntPoint GetVoxelColorTextureSize(const struct FVoxelColorTexture& Texture);
		struct FVector2D GetUV(const struct FVoxelMaterial& Material, int32_t Channel);
		int32_t GetTaskCount(class AVoxelWorld* World);
		unsigned char GetSingleIndex(const struct FVoxelMaterial& Material);
		struct FVoxelIntBox GetRenderBoundsOverlappingDataBounds(class AVoxelWorld* World, const struct FVoxelIntBox& DataBounds, int32_t LOD);
		void GetRawMaterial(const struct FVoxelMaterial& Material, unsigned char* R, unsigned char* G, unsigned char* B, unsigned char* A, unsigned char* U0, unsigned char* V0, unsigned char* U1, unsigned char* v1, unsigned char* U2, unsigned char* v2, unsigned char* U3, unsigned char* V3);
		float GetPeakMemoryUsageInMB(EVoxelMemoryUsageType Type);
		int32_t GetNumberOfVoxelThreads();
		struct FVector GetNormal(class AVoxelWorld* World, const struct FIntVector& Position);
		void GetMultiIndex(const struct FVoxelMaterial& Material, bool bSortByStrength, float* Strength0, unsigned char* Index0, float* Strength1, unsigned char* Index1, float* Strength2, unsigned char* Index2, float* Strength3, unsigned char* Index3, float* Wetness);
		int32_t GetMin_Intvector(const struct FIntVector& Vector);
		float GetMemoryUsageInMB(EVoxelMemoryUsageType Type);
		int32_t GetMax_Intvector(const struct FIntVector& Vector);
		int32_t GetIntOutput(class AVoxelWorld* World, const class FName& Name, float X, float Y, float Z, int32_t DefaultValue);
		int32_t GetHistoryPosition(class AVoxelWorld* World);
		float GetFloatOutput(class AVoxelWorld* World, const class FName& Name, float X, float Y, float Z, float DefaultValue);
		float GetEstimatedCollisionsMemoryUsageInMB(class AVoxelWorld* World);
		struct FLinearColor GetColor(const struct FVoxelMaterial& Material);
		struct FVoxelIntBox GetBounds(class AVoxelWorld* World);
		TArray<class AVoxelWorld*> GetAllVoxelWorldsOverlappingBox(class UObject* WorldContextObject, const struct FBox& Box);
		TArray<class AVoxelWorld*> GetAllVoxelWorldsOverlappingActor(class AActor* Actor);
		TArray<class AVoxelWorld*> GetAllVoxelWorldsContainingPosition(class UObject* WorldContextObject, const struct FVector& Position);
		struct FIntVector Divide_IntVectorInt(const struct FIntVector& Left, int32_t Right);
		void DestroyToolRendering(class AVoxelWorld* World, const struct FVoxelToolRenderingRef& Ref);
		struct FVoxelFloatTexture CreateVoxelFloatTextureFromTextureChannel(class UTexture2D* Texture, EVoxelRGBA Channel);
		struct FVoxelColorTexture CreateVoxelColorTextureFromVoxelFloatTexture(const struct FVoxelFloatTexture& Texture, EVoxelRGBA Channel, bool bNormalize);
		struct FVoxelPaintMaterial CreateUVPaintMaterial(const struct FVoxelPaintMaterialUV& UV);
		struct FVoxelToolRenderingRef CreateToolRendering(class AVoxelWorld* World);
		class UTexture2D* CreateTextureFromVoxelFloatTexture(const struct FVoxelFloatTexture& VoxelTexture);
		class UTexture2D* CreateTextureFromVoxelColorTexture(const struct FVoxelColorTexture& VoxelTexture);
		struct FVoxelPaintMaterial CreateSingleIndexPaintMaterial(const struct FVoxelPaintMaterialSingleIndex& SingleIndex);
		class UTexture2D* CreateOrUpdateTextureFromVoxelFloatTexture(const struct FVoxelFloatTexture& VoxelTexture, class UTexture2D** Texture);
		class UTexture2D* CreateOrUpdateTextureFromVoxelColorTexture(const struct FVoxelColorTexture& VoxelTexture, class UTexture2D** Texture);
		struct FVoxelPaintMaterial CreateMultiIndexWetnessPaintMaterial(const struct FVoxelPaintMaterialMultiIndexWetness& MultiIndexWetness);
		struct FVoxelPaintMaterial CreateMultiIndexRawPaintMaterial(const struct FVoxelPaintMaterialMultiIndexRaw& MultiIndexRaw);
		struct FVoxelPaintMaterial CreateMultiIndexPaintMaterial(const struct FVoxelPaintMaterialMultiIndex& MultiIndex);
		struct FVoxelPaintMaterial CreateFiveWayBlendPaintMaterial(const struct FVoxelPaintMaterialFiveWayBlend& FiveWayBlend);
		struct FVoxelPaintMaterial CreateColorPaintMaterial(const struct FVoxelPaintMaterialColor& Color);
		void CompactVoxelTexturePool(class AVoxelWorld* World);
		void ClearValueData(class AVoxelWorld* World, bool bUpdateRender);
		void ClearMaterialData(class AVoxelWorld* World, bool bUpdateRender);
		void ClearFrames(class AVoxelWorld* World);
		void ClearDirtyData(class AVoxelWorld* World, bool bUpdateRender);
		void ClearAllData(class AVoxelWorld* World, bool bUpdateRender);
		void BindVoxelGenerationEvent(class AVoxelWorld* World, const class FScriptDelegate& OnGenerate, bool bFireExistingOnes, int32_t ChunkSize, int32_t GenerationDistanceInChunks);
		void BindVoxelChunkEvents(class AVoxelWorld* World, const class FScriptDelegate& OnActivate, const class FScriptDelegate& OnDeactivate, bool bFireExistingOnes, int32_t ChunkSize, int32_t ActivationDistanceInChunks);
		bool AreCollisionsEnabled(class AVoxelWorld* World, const struct FVector& Position, int32_t* LOD, bool bConvertToVoxelSpace);
		struct FVoxelMaterial ApplyPaintMaterial(const struct FVoxelMaterial& Material, const struct FVoxelPaintMaterial& PaintMaterial, float Strength);
		void ApplyNewMaterials(class AVoxelWorld* World);
		void ApplyLODSettings(class AVoxelWorld* World);
		void AddNeighborsToSet();
		struct FIntVector Add_IntVectorIntVector(const struct FIntVector& Left, const struct FIntVector& Right);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelBlueprintMaterialCollectionInterface
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UVoxelBlueprintMaterialCollectionInterface : public UObject
	{
	public:
		int32_t                                                    MaxMaterialsToBlendAtOnce;                               // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCubicFaces;                                       // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQ47[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)

	public:
		void InitializeCollection();
		TArray<struct FVoxelMaterialCollectionMaterialInfo> GetMaterials();
		class UMaterialInterface* GetMaterialForIndices(TArray<unsigned char> Indices);
		class UMaterialInterface* GetMaterialForIndex(int32_t Index, EVoxelCubicFace Face);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelCachedMaterialCollection
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UVoxelCachedMaterialCollection : public UVoxelMaterialCollectionBase
	{
	public:
		TMap<struct FVoxelMaterialIndices, class UMaterialInterface*> CachedMaterials;                                         // 0x0028(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelBlueprintMaterialCollection
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UVoxelBlueprintMaterialCollection : public UVoxelCachedMaterialCollection
	{
	public:
		class UVoxelBlueprintMaterialCollectionInterface*          Instance;                                                // 0x0078(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelToolsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelToolsBase : public UBlueprintFunctionLibrary
	{
	public:
		struct FVoxelIntBox GetModifiedVoxelValuesBounds(TArray<struct FModifiedVoxelValue> ModifiedVoxels);
		struct FVoxelIntBox GetModifiedVoxelMaterialsBounds(TArray<struct FModifiedVoxelMaterial> ModifiedVoxels);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelBoxTools
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelBoxTools : public UVoxelToolsBase
	{
	public:
		void SetValueBoxAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelIntBox& Bounds, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings);
		void SetValueBox(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelIntBox& Bounds, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender);
		void SetMaterialBoxAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelIntBox& Bounds, const struct FVoxelPaintMaterial& PaintMaterial, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender, bool bHideLatentWarnings);
		void SetMaterialBox(TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelIntBox& Bounds, const struct FVoxelPaintMaterial& PaintMaterial, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender);
		void RemoveBoxAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings);
		void RemoveBox(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender);
		void AddBoxAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings);
		void AddBox(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelCharacter
	 * Size -> 0x0000 (FullSize[0x04C0] - InheritedSize[0x04C0])
	 */
	class AVoxelCharacter : public ACharacter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelSubsystemProxy : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelStaticSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelStaticSubsystemProxy : public UVoxelSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelChunksSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelChunksSubsystemProxy : public UVoxelStaticSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelGenerator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelGenerator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelChunkGenerator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelChunkGenerator : public UVoxelGenerator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelCookingLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelCookingLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FVoxelCookingSettings MakeVoxelCookingSettingsFromVoxelWorld(class AVoxelWorld* World);
		void LoadCookedVoxelData(const struct FVoxelCookedData& CookedData, class AVoxelWorld* World);
		struct FVoxelCookedData CookVoxelDataWithSave(const struct FVoxelCookingSettings& Settings, const struct FVoxelUncompressedWorldSave& Save);
		struct FVoxelCookedData CookVoxelData(const struct FVoxelCookingSettings& Settings);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelCubicLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelCubicLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetCubicVoxelValue(class AVoxelWorld* World, const struct FIntVector& Position, bool bValue);
		bool GetCubicVoxelValue(class AVoxelWorld* World, const struct FIntVector& Position);
		struct FIntVector GetCubicVoxelPositionFromHit(class AVoxelWorld* World, const struct FVector& HitPosition, const struct FVector& HitNormal, bool bSelectVoxelOutside);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelTransformableGenerator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelTransformableGenerator : public UVoxelGenerator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelTransformableGeneratorWithBounds
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelTransformableGeneratorWithBounds : public UVoxelTransformableGenerator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelDataAsset
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UVoxelDataAsset : public UVoxelTransformableGeneratorWithBounds
	{
	public:
		bool                                                       bSubtractiveAsset;                                       // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5BTG[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntVector                                          PositionOffset;                                          // 0x002C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntVector                                          Size;                                                    // 0x003C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UncompressedSizeInMB;                                    // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CompressedSizeInMB;                                      // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelDataAssetImportSource                                Source;                                                  // 0x0050(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W6ID[0x3];                                   // 0x0050(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_AEMF[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      Paths;                                                   // 0x0058(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		struct FVoxelDataAssetImportSettings_MagicaVox             ImportSettings_MagicaVox;                                // 0x0068(0x0008) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PBMP[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VoxelCustomVersion;                                      // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   ValueConfigFlag;                                         // 0x0084(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   MaterialConfigFlag;                                      // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O9BE[0x14];                                  // 0x008C(0x0014) MISSED OFFSET (PADDING)

	public:
		struct FIntVector GetSize();
		struct FVoxelIntBox GetBounds();
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelDataItemActor
	 * Size -> 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
	 */
	class AVoxelDataItemActor : public AActor
	{
	public:
		bool                                                       bAutomaticUpdates;                                       // 0x0220(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ICZD[0x3];                                   // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RefreshDelay;                                            // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZ48[0x20];                                  // 0x0228(0x0020) MISSED OFFSET (PADDING)

	public:
		void ScheduleRefresh();
		void K2_AddItemToWorld(class AVoxelWorld* World);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelDataSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelDataSubsystemProxy : public UVoxelStaticSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelDataTools
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelDataTools : public UBlueprintFunctionLibrary
	{
	public:
		void SetValueAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FIntVector& Position, float Value, bool bHideLatentWarnings);
		void SetValue(class AVoxelWorld* World, const struct FIntVector& Position, float Value);
		void SetMaterialAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FIntVector& Position, const struct FVoxelMaterial& Material, bool bHideLatentWarnings);
		void SetMaterial(class AVoxelWorld* World, const struct FIntVector& Position, const struct FVoxelMaterial& Material, int32_t Mask);
		void SetBoxAsDirtyAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bDirtyValues, bool bDirtyMaterials, bool bHideLatentWarnings);
		void SetBoxAsDirty(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bDirtyValues, bool bDirtyMaterials);
		void RoundVoxelsAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings);
		void RoundVoxels(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds);
		void RoundToGeneratorAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bPreserveNormals, bool bHideLatentWarnings);
		void RoundToGenerator(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bPreserveNormals);
		bool LoadFromSave(class AVoxelWorld* World, const struct FVoxelUncompressedWorldSave& Save);
		bool LoadFromCompressedSave(class AVoxelWorld* World, const struct FVoxelCompressedWorldSave& Save);
		void GetVoxelsValueAndMaterialAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FVoxelValueMaterial>* Voxels, class AVoxelWorld* World, TArray<struct FIntVector> Positions, bool bHideLatentWarnings);
		void GetVoxelsValueAndMaterial(TArray<struct FVoxelValueMaterial>* Voxels, class AVoxelWorld* World, TArray<struct FIntVector> Positions);
		void GetValueAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float* Value, class AVoxelWorld* World, const struct FIntVector& Position, bool bHideLatentWarnings);
		void GetValue(float* Value, class AVoxelWorld* World, const struct FIntVector& Position);
		void GetSaveAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, struct FVoxelUncompressedWorldSave* OutSave, bool bHideLatentWarnings);
		void GetSave(class AVoxelWorld* World, struct FVoxelUncompressedWorldSave* OutSave);
		void GetMaterialAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelMaterial* Material, class AVoxelWorld* World, const struct FIntVector& Position, bool bHideLatentWarnings);
		void GetMaterial(struct FVoxelMaterial* Material, class AVoxelWorld* World, const struct FIntVector& Position);
		void GetInterpolatedValue(float* Value, class AVoxelWorld* World, const struct FVector& Position);
		struct FVoxelDataMemoryUsageInMB GetDataMemoryUsageInMB(class AVoxelWorld* World);
		void GetCompressedSaveAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, struct FVoxelCompressedWorldSave* OutSave, bool bHideLatentWarnings);
		void GetCompressedSave(class AVoxelWorld* World, struct FVoxelCompressedWorldSave* OutSave);
		void FindClosestNonEmptyVoxelAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelFindClosestNonEmptyVoxelResult* Result, class AVoxelWorld* World, const struct FVector& Position, bool bReadMaterial, bool bConvertToVoxelSpace, bool bHideLatentWarnings);
		void FindClosestNonEmptyVoxel(struct FVoxelFindClosestNonEmptyVoxelResult* Result, class AVoxelWorld* World, const struct FVector& Position, bool bReadMaterial, bool bConvertToVoxelSpace);
		void CompressIntoHeightmap(class AVoxelWorld* World, class UVoxelHeightmapAsset* HeightmapAsset, bool bHeightmapAssetMatchesWorld);
		void ClearUnusedMaterialsAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings);
		void ClearUnusedMaterials(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds);
		void ClearCachedValuesAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings);
		void ClearCachedValues(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds);
		void ClearCachedMaterialsAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings);
		void ClearCachedMaterials(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds);
		void CheckIfSameAsGeneratorAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings);
		void CheckIfSameAsGenerator(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds);
		void CheckForSingleValuesAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings);
		void CheckForSingleValues(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds);
		void CheckForSingleMaterialsAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings);
		void CheckForSingleMaterials(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds);
		void CacheValuesAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings);
		void CacheValues(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bMultiThreaded);
		void CacheMaterialsAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bHideLatentWarnings);
		void CacheMaterials(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bMultiThreaded);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelDebugSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelDebugSubsystemProxy : public UVoxelStaticSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelDebugUtilities
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelDebugUtilities : public UBlueprintFunctionLibrary
	{
	public:
		void DrawDebugIntBox(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, const struct FTransform& Transform, float LifeTime, float Thickness, const struct FLinearColor& Color);
		void DrawDataOctree(class AVoxelWorld* World, EVoxelDataType DataType, float LifeTime, bool bShowSingle, bool bShowCached, const struct FColor& SingleColor, const struct FColor& SingleDirtyColor, const struct FColor& CachedColor, const struct FColor& DirtyColor);
		void DebugVoxelsInsideBounds(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, const struct FLinearColor& Color, float LifeTime, float Thickness, bool bDebugDensities, const struct FLinearColor& TextColor);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelDynamicSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelDynamicSubsystemProxy : public UVoxelSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelLODSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelLODSubsystemProxy : public UVoxelDynamicSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelDefaultLODSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelDefaultLODSubsystemProxy : public UVoxelLODSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelRendererSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelRendererSubsystemProxy : public UVoxelDynamicSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelDefaultRendererSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelDefaultRendererSubsystemProxy : public UVoxelRendererSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelDisableEditsBox
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class AVoxelDisableEditsBox : public AVoxelPlaceableItemActor
	{
	public:
		class UBoxComponent*                                       Box;                                                     // 0x0230(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelEmptyGenerator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelEmptyGenerator : public UVoxelTransformableGenerator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelErosion
	 * Size -> 0x0100 (FullSize[0x0128] - InheritedSize[0x0028])
	 */
	class UVoxelErosion : public UObject
	{
	public:
		int32_t                                                    Size;                                                    // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeltaTime;                                               // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Gravity;                                                 // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SedimentCapacity;                                        // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SedimentDissolving;                                      // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SedimentDeposition;                                      // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RainStrength;                                            // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Evaporation;                                             // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V79I[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelFloatTexture                                  RainMapInit;                                             // 0x0050(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVoxelFloatTexture                                  HeightmapInit;                                           // 0x0068(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0LH4[0xA8];                                  // 0x0080(0x00A8) MISSED OFFSET (PADDING)

	public:
		void Step(int32_t Count);
		bool IsInitialized();
		void Initialize();
		struct FVoxelFloatTexture GetWaterHeightTexture();
		struct FVoxelFloatTexture GetTerrainHeightTexture();
		struct FVoxelFloatTexture GetSedimentTexture();
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelEventSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelEventSubsystemProxy : public UVoxelStaticSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelFixedResolutionLODSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelFixedResolutionLODSubsystemProxy : public UVoxelLODSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelFlatGenerator
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UVoxelFlatGenerator : public UVoxelGenerator
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVoxelFlatGeneratorDataItemConfig>           DataItemConfigs;                                         // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelTool
	 * Size -> 0x0158 (FullSize[0x0180] - InheritedSize[0x0028])
	 */
	class UVoxelTool : public UObject
	{
	public:
		class FName                                                ToolName;                                                // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Tooltip;                                                 // 0x0030(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bShowInDropdown;                                         // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowPaintMaterial;                                      // 0x0049(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NUM6[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVoxelToolSharedConfig*                              SharedConfig;                                            // 0x0050(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0058(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NKFC[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelToolTickData                                  FrozenTickData;                                          // 0x0060(0x0120) Transient, NativeAccessSpecifierPrivate

	public:
		struct FVoxelToolTickData MakeVoxelToolTickData(class APlayerController* PlayerController, bool bEdit, TMap<class FName, bool> Keys, TMap<class FName, float> Axes, const struct FVector2D& MousePosition, const struct FVector& CameraDirection, ECollisionChannel CollisionChannel);
		class UVoxelTool* MakeVoxelTool(class UClass* ToolClass);
		TMap<class FName, bool> MakeToolKeys(bool bAlternativeMode);
		TMap<class FName, float> MakeToolAxes(float BrushSizeDelta, float FalloffDelta, float StrengthDelta);
		void K2_SimpleTick(class APlayerController* PlayerController, bool bEdit, TMap<class FName, bool> Keys, TMap<class FName, float> Axes, const class FScriptDelegate& DoEditOverride, ECollisionChannel CollisionChannel);
		void K2_AdvancedTick(class UObject* WorldContextObject, const struct FVoxelToolTickData& TickData, const class FScriptDelegate& DoEditOverride);
		bool IsKeyDown(const struct FVoxelToolTickData& TickData, const class FName& Key);
		bool IsAlternativeMode(const struct FVoxelToolTickData& TickData);
		class AVoxelWorld* GetVoxelWorld();
		class FName GetToolName();
		struct FVector GetRayOrigin(const struct FVoxelToolTickData& TickData);
		struct FVector GetRayDirection(const struct FVoxelToolTickData& TickData);
		float GetAxis(const struct FVoxelToolTickData& TickData, const class FName& Axis);
		void EnableTool();
		void DoEditDynamicOverride__DelegateSignature(const struct FVector& Position, const struct FVector& Normal);
		void DisableTool();
		bool Deproject(const struct FVoxelToolTickData& TickData, const struct FVector2D& ScreenPosition, struct FVector* WorldPosition, struct FVector* WorldDirection);
		void Apply(class AVoxelWorld* World, const struct FVector& Position, const struct FVector& Normal, TMap<class FName, bool> Keys, TMap<class FName, float> Axes);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelToolBase
	 * Size -> 0x03D0 (FullSize[0x0550] - InheritedSize[0x0180])
	 */
	class UVoxelToolBase : public UVoxelTool
	{
	public:
		class AVoxelWorld*                                         VoxelWorld;                                              // 0x0180(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WYVN[0x3A8];                                 // 0x0188(0x03A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            ToolOverlayMaterialInstance;                             // 0x0530(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            ToolMeshMaterialInstance;                                // 0x0538(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            PlaneMeshMaterialInstance;                               // 0x0540(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6TGN[0x8];                                   // 0x0548(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateToolMesh(class UStaticMesh* Mesh, class UMaterialInterface* Material, const struct FTransform& Transform, const class FName& ID);
		void SetToolOverlayBounds(const struct FBox& Bounds);
		bool LastFrameCanEdit();
		void K2_UpdateRender(class UMaterialInstanceDynamic* OverlayMaterialInstance, class UMaterialInstanceDynamic* MeshMaterialInstance);
		void K2_Tick();
		void K2_GetToolConfig(const struct FVoxelToolBaseConfig& InConfig, struct FVoxelToolBaseConfig* OutConfig);
		struct FVoxelIntBoxWithValidity K2_DoEdit();
		float GetValueAfterAxisInput(const class FName& AxisName, float CurrentValue, float Min, float Max);
		struct FVector GetToolPreviewPosition();
		struct FVector GetToolPosition();
		struct FVector GetToolNormal();
		struct FVector GetToolDirection();
		struct FVoxelToolTickData GetTickData();
		float GetMouseMovementSize();
		struct FVoxelToolTickData GetLastFrameTickData();
		float GetDeltaTime();
		struct FVoxelIntBox GetBoundsToCache(const struct FVoxelIntBox& Bounds);
		bool CanEdit();
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelFlattenTool
	 * Size -> 0x0040 (FullSize[0x0590] - InheritedSize[0x0550])
	 */
	class UVoxelFlattenTool : public UVoxelToolBase
	{
	public:
		class UMaterialInterface*                                  ToolMaterial;                                            // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Strength;                                                // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFreezeOnClick;                                          // 0x0554(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAverage;                                             // 0x0555(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFixedRotation;                                       // 0x0556(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G6ZE[0x1];                                   // 0x0557(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            FixedRotation;                                           // 0x0558(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bPropagateMaterials;                                     // 0x0564(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableFalloff;                                          // 0x0565(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelFalloff                                              FalloffType;                                             // 0x0566(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8PLX[0x1];                                   // 0x0567(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Falloff;                                                 // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E408[0x24];                                  // 0x056C(0x0024) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelFoliageBiomeBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelFoliageBiomeBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelFoliageCollectionBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelFoliageCollectionBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelFoliageInterfaceSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelFoliageInterfaceSubsystemProxy : public UVoxelStaticSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelGeneratorCacheSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelGeneratorCacheSubsystemProxy : public UVoxelStaticSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelGeneratorCache
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UVoxelGeneratorCache : public UObject
	{
	public:
		unsigned char                                              UnknownData_LOYW[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		class UVoxelTransformableGeneratorInstanceWrapper* MakeTransformableGeneratorInstance(const struct FVoxelTransformableGeneratorPicker& Picker);
		class UVoxelGeneratorInstanceWrapper* MakeGeneratorInstance(const struct FVoxelGeneratorPicker& Picker);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelGeneratorInstanceWrapper
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UVoxelGeneratorInstanceWrapper : public UObject
	{
	public:
		unsigned char                                              UnknownData_7S0W[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		bool IsValid();
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelTransformableGeneratorInstanceWrapper
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UVoxelTransformableGeneratorInstanceWrapper : public UObject
	{
	public:
		unsigned char                                              UnknownData_O1FQ[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		bool IsValid();
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelGeneratorTools
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelGeneratorTools : public UBlueprintFunctionLibrary
	{
	public:
		bool SetTransformableGeneratorParameter(const struct FVoxelTransformableGeneratorPicker& Picker, const class FName& UniqueName, int32_t Value);
		bool SetGeneratorParameter(const struct FVoxelGeneratorPicker& Picker, const class FName& UniqueName, int32_t Value);
		struct FVoxelTransformableGeneratorPicker MakeTransformableGeneratorPickerFromObject(class UVoxelTransformableGenerator* Generator);
		struct FVoxelTransformableGeneratorPicker MakeTransformableGeneratorPickerFromClass(class UClass* GeneratorClass);
		class UVoxelTransformableGeneratorInstanceWrapper* MakeTransformableGeneratorInstance(const struct FVoxelTransformableGeneratorPicker& GeneratorPicker, const struct FVoxelGeneratorInit& GeneratorInit);
		struct FVoxelGeneratorPicker MakeGeneratorPickerFromObject(class UVoxelGenerator* Generator);
		struct FVoxelGeneratorPicker MakeGeneratorPickerFromClass(class UClass* GeneratorClass);
		class UVoxelGeneratorInstanceWrapper* MakeGeneratorInstance(const struct FVoxelGeneratorPicker& GeneratorPicker, const struct FVoxelGeneratorInit& GeneratorInit);
		bool IsValid_TransformableGeneratorPicker(const struct FVoxelTransformableGeneratorPicker& GeneratorPicker);
		bool IsValid_GeneratorPicker(const struct FVoxelGeneratorPicker& GeneratorPicker);
		void CreateFloatTextureFromGeneratorAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelFloatTexture* OutTexture, class UVoxelGeneratorInstanceWrapper* Generator, const class FName& OutputName, int32_t SizeX, int32_t SizeY, float Scale, int32_t StartX, int32_t StartY, bool bHideLatentWarnings);
		void CreateFloatTextureFromGenerator(struct FVoxelFloatTexture* OutTexture, class UVoxelGeneratorInstanceWrapper* Generator, const class FName& OutputName, int32_t SizeX, int32_t SizeY, float Scale, int32_t StartX, int32_t StartY);
		void CreateColorTextureFromGeneratorAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelColorTexture* OutTexture, class UVoxelGeneratorInstanceWrapper* Generator, const class FName& OutputName, int32_t SizeX, int32_t SizeY, float Scale, int32_t StartX, int32_t StartY, bool bHideLatentWarnings);
		void CreateColorTextureFromGenerator(struct FVoxelColorTexture* OutTexture, class UVoxelGeneratorInstanceWrapper* Generator, const class FName& OutputName, int32_t SizeX, int32_t SizeY, float Scale, int32_t StartX, int32_t StartY);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelHeightmapAsset
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UVoxelHeightmapAsset : public UVoxelTransformableGeneratorWithBounds
	{
	public:
		float                                                      Scale;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeightScale;                                             // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeightOffset;                                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInfiniteExtent;                                         // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K6ZZ[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AdditionalThickness;                                     // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Width;                                                   // 0x0040(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Height;                                                  // 0x0044(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    VoxelCustomVersion;                                      // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   MaterialConfigFlag;                                      // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EF3H[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		int32_t GetWidth();
		int32_t GetHeight();
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelHeightmapAssetFloat
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UVoxelHeightmapAssetFloat : public UVoxelHeightmapAsset
	{
	public:
		unsigned char                                              UnknownData_DXYF[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelHeightmapAssetUINT16
	 * Size -> 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
	 */
	class UVoxelHeightmapAssetUINT16 : public UVoxelHeightmapAsset
	{
	public:
		class FString                                              Heightmap;                                               // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelHeightmapImporterMaterialConfig                      MaterialConfig;                                          // 0x0070(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R8MI[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      WeightMaps;                                              // 0x0078(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FVoxelHeightmapImporterWeightmapInfos>       WeightmapsInfos;                                         // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GDKG[0x10];                                  // 0x0098(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelInstancedMaterialCollectionTemplates
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UVoxelInstancedMaterialCollectionTemplates : public UObject
	{
	public:
		class UMaterialInterface*                                  Template;                                                // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Template1x;                                              // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Template2x;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Template3x;                                              // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Template4x;                                              // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Template5x;                                              // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Template6x;                                              // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelInstancedMaterialCollection
	 * Size -> 0x0040 (FullSize[0x00B8] - InheritedSize[0x0078])
	 */
	class UVoxelInstancedMaterialCollection : public UVoxelCachedMaterialCollection
	{
	public:
		int32_t                                                    MaxMaterialsToBlendAtOnce;                               // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9LB0[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      Redirects;                                               // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              ParametersPrefix;                                        // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoxelInstancedMaterialCollectionTemplates*          Templates;                                               // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVoxelInstancedMaterialCollectionLayer>      Layers;                                                  // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelInstancedMaterialCollectionInstance
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UVoxelInstancedMaterialCollectionInstance : public UVoxelInstancedMaterialCollection
	{
	public:
		class UVoxelInstancedMaterialCollection*                   LayersSource;                                            // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelIntBoxLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelIntBoxLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FVoxelIntBox TranslateBox(const struct FVoxelIntBox& Box, const struct FIntVector& Position);
		struct FVoxelIntBox Scale(const struct FVoxelIntBox& Box, int32_t Scale);
		struct FVoxelIntBox RemoveTranslation(const struct FVoxelIntBox& Box);
		struct FVoxelIntBox Overlap(const struct FVoxelIntBox& A, const struct FVoxelIntBox& B);
		bool NotEqual_IntBoxIntBox(const struct FVoxelIntBox& A, const struct FVoxelIntBox& B);
		struct FVoxelIntBoxWithValidity MakeIntBoxWithValidity(const struct FVoxelIntBox& Box, bool bIsValid);
		struct FVoxelIntBox MakeIntBoxFromPoints(TArray<struct FVector> Points);
		struct FVoxelIntBox MakeIntBox(const struct FIntVector& Min, const struct FIntVector& Max);
		struct FVoxelIntBox MakeBoxFromPositionAndRadius(const struct FVector& Position, float Radius);
		struct FVoxelIntBox MakeBoxFromLocalPositionAndRadius(const struct FIntVector& Position, int32_t Radius);
		bool IsVectorInsideBox(const struct FVoxelIntBox& Box, const struct FVector& Position);
		bool IsValid(const struct FVoxelIntBox& Box);
		bool IsIntVectorInsideBox(const struct FVoxelIntBox& Box, const struct FIntVector& Position);
		bool Intersect(const struct FVoxelIntBox& Box, const struct FVoxelIntBox& Other);
		struct FVoxelIntBox InfiniteBox();
		struct FIntVector GetSize(const struct FVoxelIntBox& Box);
		TArray<struct FIntVector> GetCorners(const struct FVoxelIntBox& Box);
		struct FVector GetCenter(const struct FVoxelIntBox& Box);
		struct FVoxelIntBox Extend_IntVector(const struct FVoxelIntBox& Box, const struct FIntVector& Extent);
		struct FVoxelIntBox Extend(const struct FVoxelIntBox& Box, int32_t Extent);
		bool EqualEqual_IntBoxIntBox(const struct FVoxelIntBox& A, const struct FVoxelIntBox& B);
		struct FVoxelIntBox Conv_IntVectorToVoxelIntBox(const struct FIntVector& Vector);
		class FString Conv_IntBoxToString(const struct FVoxelIntBox& IntBox);
		bool Contains(const struct FVoxelIntBox& Box, const struct FVoxelIntBox& Other);
		struct FVoxelIntBox Center(const struct FVoxelIntBox& Box);
		void BreakIntBoxWithValidity(const struct FVoxelIntBoxWithValidity& BoxWithValidity, struct FVoxelIntBox* Box, bool* bIsValid);
		void BreakIntBox(const struct FVoxelIntBox& Box, struct FIntVector* Min, struct FIntVector* Max);
		struct FVoxelIntBox ApplyTransform(const struct FVoxelIntBox& Box, const struct FTransform& Transform);
		struct FVoxelIntBox AddPoint(const struct FVoxelIntBox& Box, const struct FIntVector& Point);
		struct FVoxelIntBox AddBox(const struct FVoxelIntBox& Box, const struct FVoxelIntBox& BoxToAdd);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelInvokerComponentBase
	 * Size -> 0x0000 (FullSize[0x0200] - InheritedSize[0x0200])
	 */
	class UVoxelInvokerComponentBase : public USceneComponent
	{
	public:
		bool ShouldUseInvoker(class AVoxelWorld* VoxelWorld);
		void RefreshAllVoxelInvokers();
		bool IsLocalInvoker();
		struct FIntVector GetInvokerVoxelPosition(class AVoxelWorld* VoxelWorld);
		struct FVoxelInvokerSettings GetInvokerSettings(class AVoxelWorld* VoxelWorld);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelSimpleInvokerComponent
	 * Size -> 0x0020 (FullSize[0x0220] - InheritedSize[0x0200])
	 */
	class UVoxelSimpleInvokerComponent : public UVoxelInvokerComponentBase
	{
	public:
		bool                                                       bUseForLOD;                                              // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PXXM[0x3];                                   // 0x0201(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODToSet;                                                // 0x0204(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LODRange;                                                // 0x0208(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseForCollisions;                                       // 0x020C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EVXM[0x3];                                   // 0x020D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CollisionsRange;                                         // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseForNavmesh;                                          // 0x0214(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8B95[0x3];                                   // 0x0215(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NavmeshRange;                                            // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQML[0x4];                                   // 0x021C(0x0004) MISSED OFFSET (PADDING)

	public:
		struct FVector GetInvokerGlobalPosition();
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelInvokerWithPredictionComponent
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class UVoxelInvokerWithPredictionComponent : public UVoxelSimpleInvokerComponent
	{
	public:
		bool                                                       bEnablePrediction;                                       // 0x0220(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OIU1[0x3];                                   // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PredictionTime;                                          // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A3P7[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelInvokerAutoCameraComponent
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class UVoxelInvokerAutoCameraComponent : public UVoxelSimpleInvokerComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelVolumeInvokerComponent
	 * Size -> 0x0010 (FullSize[0x0210] - InheritedSize[0x0200])
	 */
	class UVoxelVolumeInvokerComponent : public UVoxelInvokerComponentBase
	{
	public:
		bool                                                       bUseForLOD;                                              // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ISX4[0x3];                                   // 0x0201(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODToSet;                                                // 0x0204(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseForCollisions;                                       // 0x0208(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseForNavmesh;                                          // 0x0209(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HDYG[0x6];                                   // 0x020A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelLODVolume
	 * Size -> 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
	 */
	class AVoxelLODVolume : public AVolume
	{
	public:
		class UVoxelVolumeInvokerComponent*                        InvokerComponent;                                        // 0x0258(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelLandscapeImporter
	 * Size -> 0x0020 (FullSize[0x0240] - InheritedSize[0x0220])
	 */
	class AVoxelLandscapeImporter : public AActor
	{
	public:
		class ALandscape*                                          Landscape;                                               // 0x0220(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelHeightmapImporterMaterialConfig                      MaterialConfig;                                          // 0x0228(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60VY[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVoxelLandscapeImporterLayerInfo>            LayerInfos;                                              // 0x0230(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelLandscapeMaterialCollection
	 * Size -> 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
	 */
	class UVoxelLandscapeMaterialCollection : public UVoxelMaterialCollectionBase
	{
	public:
		int32_t                                                    MaxMaterialsToBlendAtOnce;                               // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8J3A[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  Material;                                                // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, bool>                                    LayersToIgnore;                                          // 0x0038(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FVoxelLandscapeMaterialCollectionLayer>      Layers;                                                  // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<struct FVoxelLandscapeMaterialCollectionPermutation, class UMaterialInstanceConstant*> MaterialCache;                                           // 0x0098(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		TMap<int32_t, struct FVoxelLandscapeMaterialCollectionLayer> IndicesToLayers;                                         // 0x00E8(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelLevelTool
	 * Size -> 0x0020 (FullSize[0x0570] - InheritedSize[0x0550])
	 */
	class UVoxelLevelTool : public UVoxelToolBase
	{
	public:
		class UMaterialInterface*                                  ToolMaterial;                                            // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         CylinderMesh;                                            // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x0558(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x055C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Offset;                                                  // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Stride;                                                  // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E4BK[0x8];                                   // 0x0568(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelLevelTools
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelLevelTools : public UVoxelToolsBase
	{
	public:
		void LevelAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float Falloff, float Height, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
		void Level(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float Falloff, float Height, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelLineBatchComponent
	 * Size -> 0x0040 (FullSize[0x0480] - InheritedSize[0x0440])
	 */
	class UVoxelLineBatchComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_GFUX[0x30];                                  // 0x0440(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultLifeTime;                                         // 0x0470(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCalculateAccurateBounds;                                // 0x0474(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PO9F[0xB];                                   // 0x0475(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelMagicaVoxScene
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UVoxelMagicaVoxScene : public UObject
	{
	public:
		TArray<struct FVoxelMagicaVoxSceneEntry>                   Entries;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              ImportPath;                                              // 0x0038(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelMagicaVoxSceneActor
	 * Size -> 0x0060 (FullSize[0x0280] - InheritedSize[0x0220])
	 */
	class AVoxelMagicaVoxSceneActor : public AActor
	{
	public:
		float                                                      VoxelSize;                                               // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DGNZ[0x4];                                   // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class AVoxelAssetActor*, struct FTransform>           ActorTransforms;                                         // 0x0228(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		class AVoxelWorld*                                         VoxelWorld;                                              // 0x0278(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetScene(class UVoxelMagicaVoxScene* Scene);
		void ApplyVoxelSize();
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.MaterialExpressionVoxelLandscapeLayerBlend
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMaterialExpressionVoxelLandscapeLayerBlend : public UMaterialExpressionLandscapeLayerBlend
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.MaterialExpressionVoxelLandscapeLayerSwitch
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UMaterialExpressionVoxelLandscapeLayerSwitch : public UMaterialExpressionLandscapeLayerSwitch
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.MaterialExpressionVoxelLandscapeLayerWeight
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UMaterialExpressionVoxelLandscapeLayerWeight : public UMaterialExpressionLandscapeLayerWeight
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.MaterialExpressionVoxelLandscapeLayerSample
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMaterialExpressionVoxelLandscapeLayerSample : public UMaterialExpressionLandscapeLayerSample
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.MaterialExpressionVoxelLandscapeVisibilityMask
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UMaterialExpressionVoxelLandscapeVisibilityMask : public UMaterialExpressionLandscapeVisibilityMask
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelMathLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelMathLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void ResetHaltonStream(const struct FVoxelHaltonStream& Stream);
		struct FVoxelHaltonStream MakeHaltonStream(int32_t InitialSeed);
		struct FVector GetUnitVectorFromRandom(const struct FVector2D& Random);
		struct FVector GetHalton3D(const struct FVoxelHaltonStream& Stream);
		struct FVector2D GetHalton2D(const struct FVoxelHaltonStream& Stream);
		float GetHalton1D(const struct FVoxelHaltonStream& Stream);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelMeshImporterInputData
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UVoxelMeshImporterInputData : public UObject
	{
	public:
		unsigned char                                              UnknownData_K8Z9[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelMeshImporterLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelMeshImporterLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UTextureRenderTarget2D* CreateTextureFromMaterial(class UObject* WorldContextObject, class UMaterialInterface* Material, int32_t Width, int32_t Height);
		class UVoxelMeshImporterInputData* CreateMeshDataFromStaticMesh(class UStaticMesh* StaticMesh);
		void ConvertMeshToVoxels_NoMaterials(class UObject* WorldContextObject, class UVoxelMeshImporterInputData* Mesh, const struct FTransform& Transform, bool bSubtractive, const struct FVoxelMeshImporterSettingsBase& Settings, class UVoxelDataAsset** Asset, int32_t* NumLeaks);
		void ConvertMeshToVoxels(class UObject* WorldContextObject, class UVoxelMeshImporterInputData* Mesh, const struct FTransform& Transform, bool bSubtractive, const struct FVoxelMeshImporterSettings& Settings, struct FVoxelMeshImporterRenderTargetCache* RenderTargetCache, class UVoxelDataAsset** Asset, int32_t* NumLeaks);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelMeshImporter
	 * Size -> 0x00E0 (FullSize[0x0300] - InheritedSize[0x0220])
	 */
	class AVoxelMeshImporter : public AActor
	{
	public:
		class UStaticMesh*                                         StaticMesh;                                              // 0x0220(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelMeshImporterSettings                          Settings;                                                // 0x0228(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		uint32_t                                                   SizeX;                                                   // 0x0260(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   SizeY;                                                   // 0x0264(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   SizeZ;                                                   // 0x0268(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HU0[0x4];                                   // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   NumberOfVoxels;                                          // 0x0270(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SizeInMB;                                                // 0x0278(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CUY4[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                MeshComponent;                                           // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            MaterialInstance;                                        // 0x0288(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FBox                                                CachedBox;                                               // 0x0290(0x001C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E0CE[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         CachedStaticMesh;                                        // 0x02B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FVector>                                     CachedVertices;                                          // 0x02B8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V3FN[0x8];                                   // 0x02C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          CachedTransform;                                         // 0x02D0(0x0030) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelToolWithAlignment
	 * Size -> 0x0010 (FullSize[0x0560] - InheritedSize[0x0550])
	 */
	class UVoxelToolWithAlignment : public UVoxelToolBase
	{
	public:
		float                                                      DistanceToCamera;                                        // 0x054C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowPlanePreview;                                       // 0x0550(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GNCI[0xF];                                   // 0x0551(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelMeshTool
	 * Size -> 0x0120 (FullSize[0x0680] - InheritedSize[0x0560])
	 */
	class UVoxelMeshTool : public UVoxelToolWithAlignment
	{
	public:
		class UMaterialInterface*                                  ToolMaterial;                                            // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         Mesh;                                                    // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Stride;                                                  // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSmoothImport;                                           // 0x056C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4PAY[0x3];                                   // 0x056D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Smoothness;                                              // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProgressiveStamp;                                       // 0x0574(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QMPB[0x3];                                   // 0x0575(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Speed;                                                   // 0x0578(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelMeshImporterSettingsBase                      MeshImporterSettings;                                    // 0x057C(0x0010) Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bSculpt;                                                 // 0x058C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaint;                                                  // 0x058D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_42OW[0x2];                                   // 0x058E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PaintMask;                                               // 0x0590(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaintColors;                                            // 0x0594(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImportColorsFromMesh;                                   // 0x0595(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OSLL[0x2];                                   // 0x0596(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  ColorsMaterial;                                          // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              ColorToPaint;                                            // 0x05A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaintUVs;                                               // 0x05A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImportUVsFromMesh;                                      // 0x05A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BA4I[0x2];                                   // 0x05A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  UVsMaterial;                                             // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV0ToPaint;                                              // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV1ToPaint;                                              // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaintIndex;                                             // 0x05C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              IndexToPaint;                                            // 0x05C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L4UZ[0x6];                                   // 0x05C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              UVsRenderTarget;                                         // 0x05C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextureRenderTarget2D*                              ColorsRenderTarget;                                      // 0x05D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RenderTargetSize;                                        // 0x05D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PositionOffset;                                          // 0x05DC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAbsoluteScale;                                          // 0x05E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_INJ7[0x3];                                   // 0x05E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale;                                                   // 0x05EC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlignToNormal;                                          // 0x05F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlignToMovement;                                        // 0x05F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XRP9[0x2];                                   // 0x05FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RotationOffset;                                          // 0x05FC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1X37[0x18];                                  // 0x0608(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelMeshImporterRenderTargetCache                 RenderTargetCache;                                       // 0x0620(0x0028) Transient, NoDestructor, NativeAccessSpecifierPrivate
		struct FVoxelMeshImporterSettings                          AssetData_ImporterSettings;                              // 0x0648(0x0038) Transient, NoDestructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelMultiplayerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelMultiplayerInterface : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelMultiplayerSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelMultiplayerSubsystemProxy : public UVoxelStaticSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelMultiplayerTcpInterface
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UVoxelMultiplayerTcpInterface : public UVoxelMultiplayerInterface
	{
	public:
		unsigned char                                              UnknownData_RCJG[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		bool StartServer(class FString* OutError, const class FString& IP, int32_t Port);
		bool ConnectToServer(class FString* OutError, const class FString& IP, int32_t Port);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelNoClippingComponent
	 * Size -> 0x0080 (FullSize[0x0280] - InheritedSize[0x0200])
	 */
	class UVoxelNoClippingComponent : public USceneComponent
	{
	public:
		int32_t                                                    SearchRange;                                             // 0x01FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDefaultBehavior;                                  // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W6LI[0x3];                                   // 0x0201(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Speed;                                                   // 0x0204(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlanet;                                               // 0x0208(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KGIR[0x3];                                   // 0x0209(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PlanetCenter;                                            // 0x020C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             MoveTowardsSurface;                                      // 0x0218(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             StopMovingTowardsSurface;                                // 0x0228(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeleported;                                            // 0x0238(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bIsInsideSurface;                                        // 0x0248(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BWY2[0x37];                                  // 0x0249(0x0037) MISSED OFFSET (PADDING)

	public:
		bool ShouldUseVoxelWorld(class AVoxelWorld* VoxelWorld);
		void OnTeleported__DelegateSignature();
		void OnStopMovingTowardsSurface__DelegateSignature();
		void OnMoveTowardsSurface__DelegateSignature();
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelPhysicsTools
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelPhysicsTools : public UBlueprintFunctionLibrary
	{
	public:
		void ApplyVoxelPhysics(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, int32_t MinParts, bool bDebug, bool bHideLatentWarnings);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelPhysicsPartSpawnerResult_VoxelWorlds
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UVoxelPhysicsPartSpawnerResult_VoxelWorlds : public UObject
	{
	public:
		unsigned char                                              UnknownData_BWF8[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVoxelWorld*                                         VoxelWorld;                                              // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelPhysicsPartSpawner_VoxelWorlds
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UVoxelPhysicsPartSpawner_VoxelWorlds : public UObject
	{
	public:
		unsigned char                                              UnknownData_IBK8[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      ConfigureVoxelWorld;                                     // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              VoxelWorldClass;                                         // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelPhysicsPartSpawnerResult_Cubes
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UVoxelPhysicsPartSpawnerResult_Cubes : public UObject
	{
	public:
		unsigned char                                              UnknownData_KEE5[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AStaticMeshActor*>                            Cubes;                                                   // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelPhysicsPartSpawner_Cubes
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UVoxelPhysicsPartSpawner_Cubes : public UObject
	{
	public:
		unsigned char                                              UnknownData_LOGI[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  Material;                                                // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         CubeMesh;                                                // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnProbability;                                        // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3WB9[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelPhysicsPartSpawnerResult_GetVoxels
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UVoxelPhysicsPartSpawnerResult_GetVoxels : public UObject
	{
	public:
		unsigned char                                              UnknownData_KX1F[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVoxelPositionValueMaterial>                 Voxels;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelPhysicsPartSpawner_GetVoxels
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UVoxelPhysicsPartSpawner_GetVoxels : public UObject
	{
	public:
		unsigned char                                              UnknownData_Y2FA[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelPhysicsPartSpawnerResult
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelPhysicsPartSpawnerResult : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelPhysicsPartSpawner
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelPhysicsPartSpawner : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelPhysicsRelevancyComponent
	 * Size -> 0x0038 (FullSize[0x00E8] - InheritedSize[0x00B0])
	 */
	class UVoxelPhysicsRelevancyComponent : public UActorComponent
	{
	public:
		unsigned char                                              MaxVoxelChunksLODForPhysics;                             // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9CFD[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeToWaitBeforeActivating;                              // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TickInterval;                                            // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EWDM[0x2C];                                  // 0x00BC(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelRuntimeActor
	 * Size -> 0x04A8 (FullSize[0x06C8] - InheritedSize[0x0220])
	 */
	class AVoxelRuntimeActor : public AActor
	{
	public:
		float                                                      VoxelSize;                                               // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PP6F[0x4];                                   // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelGeneratorPicker                               Generator;                                               // 0x0228(0x0068) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoxelPlaceableItemManager*                          PlaceableItemManager;                                    // 0x0290(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCreateWorldAutomatically;                               // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCameraIfNoInvokersFound;                             // 0x0299(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableUndoRedo;                                         // 0x029A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAbsoluteTransforms;                                  // 0x029B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMergeAssetActors;                                       // 0x029C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMergeDisableEditsBoxes;                                 // 0x029D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableOnScreenMessages;                                // 0x029E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableDebugManager;                                    // 0x029F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RenderOctreeDepth;                                       // 0x02A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RenderOctreeChunkSize;                                   // 0x02A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WorldSizeInVoxel;                                        // 0x02A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCustomWorldBounds;                                   // 0x02AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LJ1O[0x3];                                   // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelIntBox                                        CustomWorldBounds;                                       // 0x02B0(0x0018) Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLOD;                                                  // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinLOD;                                                  // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InvokerDistanceThreshold;                                // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDelayBetweenLODUpdates;                               // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bConstantLOD;                                            // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelMaterialConfig                                       MaterialConfig;                                          // 0x02D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMaterialCollection;                                  // 0x02DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6CHC[0x5];                                   // 0x02DB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  VoxelMaterial;                                           // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoxelMaterialCollectionBase*                        MaterialCollection;                                      // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVoxelLODMaterials>                          LODMaterials;                                            // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVoxelLODMaterialCollections>                LODMaterialCollections;                                  // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EVoxelUVConfig                                             UVConfig;                                                // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UM5E[0x3];                                   // 0x0311(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UVScale;                                                 // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelNormalConfig                                         NormalConfig;                                            // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelRGBHardness                                          RGBHardness;                                             // 0x0319(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BWKH[0x6];                                   // 0x031A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, float>                                 MaterialsHardness;                                       // 0x0320(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bHardColorTransitions;                                   // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSplitSingleIndexTriangles;                              // 0x0371(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PBBQ[0x6];                                   // 0x0372(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      HolesMaterials;                                          // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		TMap<unsigned char, struct FVoxelMeshConfig>               MaterialsMeshConfigs;                                    // 0x0388(0x0050) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bHalfPrecisionCoordinates;                               // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterpolateColors;                                      // 0x03D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterpolateUVs;                                         // 0x03DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSRGBColors;                                             // 0x03DB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelRenderType                                           RenderType;                                              // 0x03DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F60I[0x3];                                   // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RenderSharpness;                                         // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCreateMaterialInstances;                                // 0x03E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDitherChunks;                                           // 0x03E5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCCN[0x2];                                   // 0x03E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChunksDitheringDuration;                                 // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastFarShadow;                                          // 0x03EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AWFY[0x3];                                   // 0x03ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ProcMeshClass;                                           // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChunksCullingLOD;                                        // 0x03F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderWorld;                                            // 0x03FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bContributesToStaticLighting;                            // 0x03FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseStaticPath;                                          // 0x03FE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStaticWorld;                                            // 0x03FF(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGreedyCubicMesher;                                      // 0x0400(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSingleIndexGreedy;                                      // 0x0401(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2KTZ[0x2];                                   // 0x0402(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TexturePoolTextureSize;                                  // 0x0404(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOptimizeIndices;                                        // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateDistanceFields;                                 // 0x0409(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFNF[0x2];                                   // 0x040A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxDistanceFieldLOD;                                     // 0x040C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DistanceFieldBoundsExtension;                            // 0x0410(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DistanceFieldResolutionDivisor;                          // 0x0414(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceFieldSelfShadowBias;                             // 0x0418(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableTransitions;                                      // 0x041C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMergeChunks;                                            // 0x041D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8FPD[0x2];                                   // 0x041E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MergedChunksClusterSize;                                 // 0x0420(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoNotMergeCollisionsAndNavmesh;                         // 0x0424(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ALU1[0x3];                                   // 0x0425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BoundsExtension;                                         // 0x0428(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3A0W[0x4];                                   // 0x042C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVoxelFoliageCollectionBase*>                 FoliageCollections;                                      // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EVoxelFoliageWorldType                                     FoliageWorldType;                                        // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFourWayBlend;                                         // 0x0441(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XLP[0x2];                                   // 0x0442(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HISMChunkSize;                                           // 0x0444(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FoliageCollisionDistanceInVoxel;                         // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45SG[0x4];                                   // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    MaxNumberOfFoliageInstances;                             // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCollisions;                                       // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B4J9[0x7];                                   // 0x0459(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBodyInstance                                       CollisionPresets;                                        // 0x0460(0x0158) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		ECollisionTraceFlag                                        CollisionTraceFlag;                                      // 0x05B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECanBeCharacterBase                                        CanCharacterStepUpOn;                                    // 0x05B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNotifyRigidBodyCollision;                               // 0x05BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateOverlapEvents;                                  // 0x05BB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bComputeVisibleChunksCollisions;                         // 0x05BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ZL8[0x3];                                   // 0x05BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VisibleChunksCollisionsMaxLOD;                           // 0x05C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LYX3[0x4];                                   // 0x05C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   PhysMaterialOverride;                                    // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCCD;                                                 // 0x05D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimpleCubicCollision;                                   // 0x05D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2OZD[0x2];                                   // 0x05D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SimpleCubicCollisionLODBias;                             // 0x05D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumConvexHullsPerAxis;                                   // 0x05D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCleanCollisionMeshes;                                   // 0x05DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableNavmesh;                                          // 0x05DD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bComputeVisibleChunksNavmesh;                            // 0x05DE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C6TM[0x1];                                   // 0x05DF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VisibleChunksNavmeshMaxLOD;                              // 0x05E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PN93[0x4];                                   // 0x05E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EVoxelTaskType, int32_t>                              PriorityCategories;                                      // 0x05E8(0x0050) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		TMap<EVoxelTaskType, int32_t>                              PriorityOffsets;                                         // 0x0638(0x0050) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		float                                                      MeshUpdatesBudget;                                       // 0x0688(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EventsTickRate;                                          // 0x068C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DataOctreeInitialSubdivisionDepth;                       // 0x0690(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMultiplayer;                                      // 0x0694(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2G1N[0x3];                                   // 0x0695(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              MultiplayerInterface;                                    // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MultiplayerSyncRate;                                     // 0x06A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1HAW[0x4];                                   // 0x06A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              RendererSubsystem;                                       // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              LODSubsystem;                                            // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<TWeakObjectPtr<class UTexture>>                     DebugTextures;                                           // 0x06B8(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelWorld
	 * Size -> 0x01A8 (FullSize[0x0870] - InheritedSize[0x06C8])
	 */
	class AVoxelWorld : public AVoxelRuntimeActor
	{
	public:
		unsigned char                                              UnknownData_KWKO[0x8];                                   // 0x06C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGenerateWorld;                                         // 0x06D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWorldLoaded;                                           // 0x06E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWorldDestroyed;                                        // 0x06F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMaxFoliageInstancesReached;                            // 0x0700(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UVoxelWorldRootComponent*                            WorldRoot;                                               // 0x0710(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UVoxelLineBatchComponent*                            LineBatchComponent;                                      // 0x0718(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UVoxelWorldSaveObject*                               SaveObject;                                              // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SaveFilePath;                                            // 0x0728(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutomaticallySaveToFile;                                // 0x0738(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAppendDateToSavePath;                                   // 0x0739(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecomputeNormalsBeforeBaking;                           // 0x073A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_17F6[0x5];                                   // 0x073B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         BakedMeshTemplate;                                       // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BakedMeshComponentTemplate;                              // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilePath                                           BakedDataPath;                                           // 0x0750(0x0010) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bEnableFoliageInEditor;                                  // 0x0760(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutomaticallyRefreshMaterials;                          // 0x0761(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutomaticallyRefreshFoliage;                            // 0x0762(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SYXZ[0x1];                                   // 0x0763(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             EditorOnly_NewScale;                                     // 0x0764(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfThreads;                                         // 0x0770(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQZQ[0x4];                                   // 0x0774(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             SpawnerConfig;                                           // 0x0778(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, int32_t>                                 Seeds;                                                   // 0x0780(0x0050) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		class UVoxelMultiplayerInterface*                          MultiplayerInterfaceInstance;                            // 0x07D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVoxelGeneratorCache*                                GeneratorCache;                                          // 0x07D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVoxelPlaceableItemActorHelper*                      PlaceableItemActorHelper;                                // 0x07E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsToggled;                                              // 0x07E8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JMIA[0x87];                                  // 0x07E9(0x0087) MISSED OFFSET (PADDING)

	public:
		void SetWorldSize(int32_t NewWorldSizeInVoxel);
		void SetRenderOctreeDepth(int32_t NewDepth);
		void SetRenderOctreeChunkSize(int32_t NewChunkSize);
		void SetGeneratorObject(class UVoxelGenerator* NewGenerator);
		void SetGeneratorClass(class UClass* NewGeneratorClass);
		void SetCollisionResponseToChannel(ECollisionChannel Channel, ECollisionResponse NewResponse);
		void OnWorldLoaded__DelegateSignature();
		void OnWorldDestroyed__DelegateSignature();
		void OnMaxFoliageInstancesReached__DelegateSignature();
		void OnGenerateWorld__DelegateSignature();
		void LogCompressedSaveSize(class AVoxelWorld* VoxelWorld, const struct FVoxelCompressedWorldSave& Save);
		struct FVector K2_LocalToGlobalFloat(const struct FVector& Position);
		struct FBox K2_LocalToGlobalBounds(const struct FVoxelIntBox& Bounds);
		struct FVector K2_LocalToGlobal(const struct FIntVector& Position);
		struct FVector K2_GlobalToLocalFloat(const struct FVector& Position);
		struct FVoxelIntBox K2_GlobalToLocalBounds(const struct FBox& Bounds);
		struct FIntVector K2_GlobalToLocal(const struct FVector& Position, EVoxelWorldCoordinatesRounding Rounding);
		bool IsLoaded();
		bool IsCreated();
		TArray<struct FIntVector> GetNeighboringPositions(const struct FVector& GlobalPosition);
		class UVoxelMultiplayerInterface* GetMultiplayerInterfaceInstance();
		struct FVoxelGeneratorInit GetGeneratorInit();
		class UVoxelGeneratorCache* GetGeneratorCache();
		void DestroyWorld();
		void CreateWorld(const struct FVoxelWorldCreateInfo& Info);
		class UVoxelMultiplayerInterface* CreateMultiplayerInterfaceInstance();
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelPlaceableItemActorHelper
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UVoxelPlaceableItemActorHelper : public UObject
	{
	public:
		unsigned char                                              UnknownData_4PM7[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelPlaceableItemManager
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UVoxelPlaceableItemManager : public UObject
	{
	public:
		bool                                                       bEnableDebug;                                            // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugBounds;                                            // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_801M[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVoxelDataItemConstructionInfo>              DataItemInfos;                                           // 0x0030(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class UVoxelGeneratorCache*                                GeneratorCache;                                          // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PA50[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnGenerate();
		void OnClear();
		class UVoxelGeneratorCache* GetGeneratorCache();
		void DrawDebugPoint(const struct FVector& Position, const struct FLinearColor& Color);
		void DrawDebugLine(const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color);
		void AddDataItem(const struct FVoxelDataItemConstructionInfo& Info);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelPlaceableItemsUtilities
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelPlaceableItemsUtilities : public UBlueprintFunctionLibrary
	{
	public:
		void AddWorms(const class FScriptDelegate& AddWorm, const struct FVoxelPerlinWormsSettings& Settings);
		void AddWorm__DelegateSignature(const struct FVector& Start, const struct FVector& End, float Radius);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelPoolSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelPoolSubsystemProxy : public UVoxelStaticSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelProceduralMeshComponent
	 * Size -> 0x01A0 (FullSize[0x0620] - InheritedSize[0x0480])
	 */
	class UVoxelProceduralMeshComponent : public UModelComponent
	{
	public:
		unsigned char                                              UnknownData_Y3ME[0xB8];                                  // 0x0480(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          BodySetup;                                               // 0x0538(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBodySetup*                                          BodySetupBeingCooked;                                    // 0x0540(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0548(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AYU4[0xD0];                                  // 0x0550(0x00D0) MISSED OFFSET (PADDING)

	public:
		void SetVoxelCollisionsFrozen(class AVoxelWorld* VoxelWorld, bool bFrozen);
		void InitChunk(unsigned char ChunkLOD, const struct FVoxelIntBox& ChunkBounds);
		bool AreVoxelCollisionsFrozen(class AVoxelWorld* VoxelWorld);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelProjectionTools
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelProjectionTools : public UBlueprintFunctionLibrary
	{
	public:
		struct FVoxelLineTraceParameters MakeVoxelLineTraceParameters(TArray<ECollisionChannel> CollisionChannelsToIgnore, TArray<class AActor*> ActorsToIgnore, ECollisionChannel CollisionChannel, EDrawDebugTrace DrawDebugType, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
		TArray<struct FIntVector> GetHitsPositions(TArray<struct FVoxelProjectionHit> Hits);
		struct FVector GetHitsAveragePosition(TArray<struct FVoxelProjectionHit> Hits);
		struct FVector GetHitsAverageNormal(TArray<struct FVoxelProjectionHit> Hits);
		int32_t FindProjectionVoxelsAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FVoxelProjectionHit>* Hits, class AVoxelWorld* World, const struct FVoxelLineTraceParameters& Parameters, const struct FVector& Position, const struct FVector& Direction, float Radius, EVoxelProjectionShape Shape, float NumRays, float MaxDistance, bool bHideLatentWarnings);
		int32_t FindProjectionVoxels(TArray<struct FVoxelProjectionHit>* Hits, class AVoxelWorld* World, const struct FVoxelLineTraceParameters& Parameters, const struct FVector& Position, const struct FVector& Direction, float Radius, EVoxelProjectionShape Shape, float NumRays, float MaxDistance);
		struct FVoxelSurfaceEditsVoxels CreateSurfaceVoxelsFromHitsWithExactValues(class AVoxelWorld* World, TArray<struct FVoxelProjectionHit> Hits);
		struct FVoxelSurfaceEditsVoxels CreateSurfaceVoxelsFromHits(TArray<struct FVoxelProjectionHit> Hits);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelSphereToolBase
	 * Size -> 0x0010 (FullSize[0x0570] - InheritedSize[0x0560])
	 */
	class UVoxelSphereToolBase : public UVoxelToolWithAlignment
	{
	public:
		class UMaterialInterface*                                  ToolMaterial;                                            // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         SphereMesh;                                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SZFF[0x8];                                   // 0x0568(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelRevertTool
	 * Size -> 0x0010 (FullSize[0x0580] - InheritedSize[0x0570])
	 */
	class UVoxelRevertTool : public UVoxelSphereToolBase
	{
	public:
		int32_t                                                    HistoryPosition;                                         // 0x056C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentHistoryPosition;                                  // 0x0570(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LR7I[0xC];                                   // 0x0574(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelWorldSaveObject
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UVoxelWorldSaveObject : public UObject
	{
	public:
		struct FVoxelCompressedWorldSave                           Save;                                                    // 0x0028(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    Depth;                                                   // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5VEZ[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelSaveUtilities
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelSaveUtilities : public UBlueprintFunctionLibrary
	{
	public:
		bool DecompressVoxelSave(const struct FVoxelCompressedWorldSave& CompressedSave, struct FVoxelUncompressedWorldSave* OutUncompressedSave);
		void CompressVoxelSave(const struct FVoxelUncompressedWorldSave& UncompressedSave, struct FVoxelCompressedWorldSave* OutCompressedSave);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UVoxelSettings : public UDeveloperSettings
	{
	public:
		int32_t                                                    NumberOfThreads;                                         // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PriorityDuration;                                        // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelThreadPriority                                       ThreadPriority;                                          // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowNotifications;                                      // 0x0041(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableAutoPreview;                                     // 0x0042(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRoundBeforeSaving;                                      // 0x0043(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultCompressionLevel;                                 // 0x0044(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelSmoothTool
	 * Size -> 0x0020 (FullSize[0x0570] - InheritedSize[0x0550])
	 */
	class UVoxelSmoothTool : public UVoxelToolBase
	{
	public:
		class UMaterialInterface*                                  ToolMaterial;                                            // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSculpt;                                                 // 0x0550(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaint;                                                  // 0x0551(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LS57[0x2];                                   // 0x0552(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PaintMask;                                               // 0x0554(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Strength;                                                // 0x0558(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumIterations;                                           // 0x055C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelFalloff                                              FalloffType;                                             // 0x0560(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G0FG[0x3];                                   // 0x0561(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Falloff;                                                 // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F59M[0x8];                                   // 0x0568(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelSphereTool
	 * Size -> 0x0020 (FullSize[0x0590] - InheritedSize[0x0570])
	 */
	class UVoxelSphereTool : public UVoxelSphereToolBase
	{
	public:
		class UMaterialInterface*                                  OverlayMaterial;                                         // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSculpt;                                                 // 0x0570(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableIndexInterval;                                    // 0x0571(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ONYV[0x2];                                   // 0x0572(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelInt32Interval                                 IndexInterval;                                           // 0x0574(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaint;                                                  // 0x057C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JHT4[0x3];                                   // 0x057D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PaintStrength;                                           // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelFalloff                                              FalloffType;                                             // 0x0584(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BOHW[0x3];                                   // 0x0585(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Falloff;                                                 // 0x0588(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F2ES[0x4];                                   // 0x058C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelSphereTools
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelSphereTools : public UVoxelToolsBase
	{
	public:
		void TrimSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, const struct FVector& Normal, float Radius, float Falloff, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
		void TrimSphere(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, const struct FVector& Normal, float Radius, float Falloff, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
		void SmoothSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float Strength, int32_t NumIterations, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
		void SmoothSphere(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float Strength, int32_t NumIterations, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
		void SmoothMaterialSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float Strength, int32_t NumIterations, int32_t Mask, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
		void SmoothMaterialSphere(TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float Strength, int32_t NumIterations, int32_t Mask, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender);
		void SetValueSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
		void SetValueSphere(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
		void SetMaterialSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, const struct FVoxelPaintMaterial& PaintMaterial, float Strength, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
		void SetMaterialSphere(TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, const struct FVoxelPaintMaterial& PaintMaterial, float Strength, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender);
		void RevertSphereToGeneratorAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
		void RevertSphereToGenerator(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
		void RevertSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, int32_t HistoryPosition, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
		void RevertSphere(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, int32_t HistoryPosition, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
		void RemoveSphereWithDurabilityAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, const struct FVoxelInt32Interval& Interval, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
		void RemoveSphereWithDurability(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, const struct FVoxelInt32Interval& Interval, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
		void RemoveSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
		void RemoveSphere(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
		void ApplyMaterialKernelSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32_t NumIterations, int32_t Mask, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
		void ApplyMaterialKernelSphere(TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32_t NumIterations, int32_t Mask, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender);
		void ApplyKernelSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32_t NumIterations, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
		void ApplyKernelSphere(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32_t NumIterations, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
		void AddSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
		void AddSphere(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVector& Position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelStaticWorld
	 * Size -> 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
	 */
	class AVoxelStaticWorld : public AActor
	{
	public:
		class UStaticMeshComponent*                                BaseMesh;                                                // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UStaticMeshComponent*>                        Meshes;                                                  // 0x0228(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelSurfaceEditTools
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelSurfaceEditTools : public UVoxelToolsBase
	{
	public:
		void PropagateVoxelMaterialsAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender, bool bHideLatentWarnings);
		void PropagateVoxelMaterials(TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender);
		void EditVoxelValuesAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, float DistanceDivisor, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings);
		void EditVoxelValues(TArray<struct FModifiedVoxelValue>* ModifiedValues, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, float DistanceDivisor, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender);
		void EditVoxelMaterialsAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelPaintMaterial& PaintMaterial, const struct FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender, bool bHideLatentWarnings);
		void EditVoxelMaterials(TArray<struct FModifiedVoxelMaterial>* ModifiedMaterials, struct FVoxelIntBox* EditedBounds, class AVoxelWorld* VoxelWorld, const struct FVoxelPaintMaterial& PaintMaterial, const struct FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelSurfaceTool
	 * Size -> 0x0200 (FullSize[0x0750] - InheritedSize[0x0550])
	 */
	class UVoxelSurfaceTool : public UVoxelToolBase
	{
	public:
		class UMaterialInterface*                                  ToolMaterial;                                            // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSculpt;                                                 // 0x0550(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BEVZ[0x3];                                   // 0x0551(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SculptStrength;                                          // 0x0554(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateMaterials;                                     // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaint;                                                  // 0x0559(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J7WX[0x2];                                   // 0x055A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PaintStrength;                                           // 0x055C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       b2DBrush;                                                // 0x0560(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMovementAffectsStrength;                                // 0x0561(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1FF1[0x2];                                   // 0x0562(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Stride;                                                  // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlignToMovement;                                        // 0x0568(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_247I[0x3];                                   // 0x0569(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            FixedDirection;                                          // 0x056C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bModulateStrengthByDeltaTime;                            // 0x0578(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableFalloff;                                          // 0x0579(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelFalloff                                              FalloffType;                                             // 0x057A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WC9F[0x1];                                   // 0x057B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Falloff;                                                 // 0x057C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMask;                                                // 0x0580(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TAMI[0x7];                                   // 0x0581(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelSurfaceToolMask                               Mask;                                                    // 0x0588(0x00A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFIS[0x110];                                 // 0x0630(0x0110) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          MaskGeneratorCache_RenderTexture;                        // 0x0740(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KWDT[0x8];                                   // 0x0748(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelSurfaceTools
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelSurfaceTools : public UBlueprintFunctionLibrary
	{
	public:
		void GetStrengthMaskScale(float* ScaleX, float* ScaleY, class AVoxelWorld* World, const struct FVoxelFloatTexture& Mask, float SizeX, float SizeY, bool bConvertToVoxelSpace);
		struct FVoxelIntBox GetBounds(const struct FVoxelSurfaceEditsProcessedVoxels& Voxels);
		void FindSurfaceVoxelsFromDistanceField(struct FVoxelSurfaceEditsVoxels* Voxels, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bMultiThreaded, EVoxelComputeDevice ComputeDevice);
		void FindSurfaceVoxelsAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelSurfaceEditsVoxels* Voxels, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bComputeNormals, bool bHideLatentWarnings);
		void FindSurfaceVoxels2DAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelSurfaceEditsVoxels* Voxels, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bComputeNormals, bool bHideLatentWarnings);
		void FindSurfaceVoxels2D(struct FVoxelSurfaceEditsVoxels* Voxels, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bComputeNormals);
		void FindSurfaceVoxels(struct FVoxelSurfaceEditsVoxels* Voxels, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, bool bComputeNormals);
		void DebugSurfaceVoxels(class AVoxelWorld* World, const struct FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, float LifeTime);
		struct FVoxelSurfaceEditsStackElement ApplyTerrace(int32_t TerraceHeightInVoxels, float Angle, int32_t ImmutableVoxels);
		struct FVoxelSurfaceEditsStackElement ApplyStrengthMask(class AVoxelWorld* World, const struct FVoxelFloatTexture& Mask, const struct FVector& EditPosition, float ScaleX, float ScaleY, const struct FVector& PlaneNormal, const struct FVector& PlaneTangent, EVoxelSamplerMode SamplerMode, bool bConvertToVoxelSpace);
		struct FVoxelSurfaceEditsStackElement ApplyStrengthCurve(class AVoxelWorld* World, const struct FVector& Center, float Radius, class UCurveFloat* StrengthCurve, bool bConvertToVoxelSpace);
		void ApplyStackAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelSurfaceEditsProcessedVoxels* ProcessedVoxels, const struct FVoxelSurfaceEditsVoxels& Voxels, const struct FVoxelSurfaceEditsStack& Stack, bool bHideLatentWarnings);
		struct FVoxelSurfaceEditsProcessedVoxels ApplyStack(const struct FVoxelSurfaceEditsVoxels& Voxels, const struct FVoxelSurfaceEditsStack& Stack);
		struct FVoxelSurfaceEditsStackElement ApplyFlatten(class AVoxelWorld* World, const struct FVector& PlanePoint, const struct FVector& PlaneNormal, EVoxelSDFMergeMode MergeMode, bool bConvertToVoxelSpace);
		struct FVoxelSurfaceEditsStackElement ApplyFalloff(class AVoxelWorld* World, EVoxelFalloff FalloffType, const struct FVector& Center, float Radius, float Falloff, bool bConvertToVoxelSpace);
		struct FVoxelSurfaceEditsStackElement ApplyConstantStrength(float Strength);
		struct FVoxelSurfaceEditsStack AddToStack(const struct FVoxelSurfaceEditsStack& Stack, const struct FVoxelSurfaceEditsStackElement& Element);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelTestLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelTestLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void TestValues(const struct FVoxelTestValues& ValuesA, const struct FVoxelTestValues& ValuesB);
		struct FVoxelTestValues ReadValues(class AVoxelWorld* World, const struct FVoxelIntBox& Bounds);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelTexturePoolSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelTexturePoolSubsystemProxy : public UVoxelStaticSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelTextureTools
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelTextureTools : public UBlueprintFunctionLibrary
	{
	public:
		struct FVoxelFloatTexture Minimum(const struct FVoxelFloatTexture& Texture, float Radius);
		struct FVoxelFloatTexture Maximum(const struct FVoxelFloatTexture& Texture, float Radius);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelToolSharedConfig
	 * Size -> 0x0108 (FullSize[0x0130] - InheritedSize[0x0028])
	 */
	class UVoxelToolSharedConfig : public UObject
	{
	public:
		float                                                      BrushSize;                                               // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EI8F[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelPaintMaterial                                 PaintMaterial;                                           // 0x0030(0x0098) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      ToolOpacity;                                             // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlignToMovementSmoothness;                               // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ControlSpeed;                                            // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7YYP[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AVoxelWorld*>                                 WorldsToEdit;                                            // 0x00D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bCacheData;                                              // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMultiThreaded;                                          // 0x00E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelComputeDevice                                        ComputeDevice;                                           // 0x00EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRegenerateFoliage;                                      // 0x00EB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckForSingleValues;                                   // 0x00EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWaitForUpdates;                                         // 0x00ED(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebug;                                                  // 0x00EE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U82E[0x1];                                   // 0x00EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FixedDeltaTime;                                          // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I1FB[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         PlaneMesh;                                               // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  PlaneMaterial;                                           // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBoundsUpdated;                                         // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KPW4[0x18];                                  // 0x0118(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelToolLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelToolLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void UpdateSphereOverlayMaterial(class UVoxelToolBase* Tool, class UMaterialInstanceDynamic* OverlayMaterialInstance, EVoxelFalloff FalloffType, float Falloff);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelToolManager
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UVoxelToolManager : public UObject
	{
	public:
		class UVoxelToolSharedConfig*                              SharedConfig;                                            // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVoxelTool*                                          ActiveTool;                                              // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UVoxelTool*>                                  Tools;                                                   // 0x0038(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void SetActiveToolByName(const class FName& NewActiveTool);
		void SetActiveToolByClass(class UClass* NewActiveTool);
		void SetActiveTool(class UVoxelTool* NewActiveTool);
		class UVoxelToolSharedConfig* K2_GetSharedConfig();
		TArray<class UVoxelTool*> GetTools();
		class UVoxelTool* GetActiveTool();
		void CreateDefaultTools(bool bLoadBlueprints);
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelToolRenderingSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelToolRenderingSubsystemProxy : public UVoxelStaticSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelTrimTool
	 * Size -> 0x0020 (FullSize[0x0570] - InheritedSize[0x0550])
	 */
	class UVoxelTrimTool : public UVoxelToolBase
	{
	public:
		class UMaterialInterface*                                  ToolMaterial;                                            // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Roughness;                                               // 0x0554(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VFMN[0x18];                                  // 0x0558(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Voxel.VoxelWorldRootComponent
	 * Size -> 0x0070 (FullSize[0x04B0] - InheritedSize[0x0440])
	 */
	class UVoxelWorldRootComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_7CV0[0x8];                                   // 0x0440(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          BodySetup;                                               // 0x0448(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_77KP[0x60];                                  // 0x0450(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
