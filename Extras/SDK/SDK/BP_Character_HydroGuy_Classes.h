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
	 * BlueprintGeneratedClass BP_Character_HydroGuy.BP_Character_HydroGuy_C
	 * Size -> 0x0148 (FullSize[0x06D8] - InheritedSize[0x0590])
	 */
	class ABP_Character_HydroGuy_C : public ABP_GameCharacter_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0590(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USceneComponent*                                     Cart_IK_L;                                               // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     Cart_IK_R;                                               // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     ProxySocket;                                             // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Mesh_Hair;                                               // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Mesh_Beard;                                              // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Mesh_Hips;                                               // 0x05C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Mesh_Arms;                                               // 0x05C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Mesh_Legs;                                               // 0x05D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Mesh_Chest;                                              // 0x05D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     Body;                                                    // 0x05E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Mesh_Shirt;                                              // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Mesh_Pants;                                              // 0x05F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     Clothing;                                                // 0x05F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FS_CharacterStyle                                   Style;                                                   // 0x0600(0x004C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_XO5M[0x4];                                   // 0x064C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            DMI_Body;                                                // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DMI_Head;                                                // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DMI_Hair;                                                // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DMI_Beard;                                               // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DMI_Shirt;                                               // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DMI_Pants;                                               // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<E_MeshParts>                                        ShirtHideMeshParts;                                      // 0x0680(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<E_MeshParts>                                        PantsHideMeshParts;                                      // 0x0690(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      DemoDelay;                                               // 0x06A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3Q9X[0x4];                                   // 0x06A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_ParentItem_C*                                    ProxyItem;                                               // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaSeconds;                                            // 0x06B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CartPitch;                                               // 0x06B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CartRoll;                                                // 0x06B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8YBY[0x4];                                   // 0x06BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        CartPivotTimer;                                          // 0x06C0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABP_ParentCart_C*                                    Cart;                                                    // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ABP_ParentHat_C*                                     Hat;                                                     // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ComponentsToSave(TArray<class UActorComponent*>* Components);
		float GetSpineRotationIncrement();
		void CalculateCartPivotRotation();
		void ToggleFree(bool isFree_);
		void IsProxyTwoHanded_(const class FName& Socket, bool* Result);
		void PlayMontage(class UAnimMontage* AnimMontage);
		void GetClothingColor(const class FName& ColorParameter, class FName* Color);
		void RandomHairColor();
		void RandomSkinColor();
		void RandomBeardMesh();
		void RandomHairMesh();
		void RandomPantsColor();
		void RandomShirtColor();
		void RandomPantsMesh();
		void RandomShirtMesh();
		void UpdateProxyItem(class ABP_ParentItem_C* ProxyItem, bool Attach_);
		void UpdateHairColor(const class FName& Hair_Color_ID);
		void UpdateBeardMesh(int32_t BeardIndex);
		void GetCurrentHead(class UPData_Head_C** Output);
		void CreateDynamicDefaultMaterial(class USkeletalMeshComponent* Mesh, int32_t MaterialSlot, class UMaterialInstanceDynamic** DynamicMaterial);
		void GetMeshDefaultMaterial(class USkinnedMeshComponent* MeshComponent, int32_t MaterialSlot, class UMaterialInterface** Material);
		void RandomStyle();
		void UpdateHairMesh(int32_t HairIndex);
		void RefreshClothingColor();
		void UpdateClothingPantsColor(const class FName& Clothing_Color);
		void ToggleHideMeshParts(TArray<E_MeshParts>* MeshParts, bool Hide_);
		void UpdateClothingShirtColor(const class FName& Clothing_Color);
		void UpdateClothingColor(const class FName& ColorParameter, const class FName& Color);
		void UpdateClothingPantsMesh(int32_t PantsIndex);
		void UpdateClothingShirtMesh(int32_t Shirt_Index);
		void ClearClothingMeshes();
		void UpdateClothingMesh(class USkeletalMeshComponent* MeshClothing, E_ClothingSlots Slot, int32_t ClothingIndex, TArray<E_MeshParts>* UnhideMeshParts, TArray<E_MeshParts>* HideMeshParts);
		void UpdateSkinColor(const class FName& SkinColorID);
		void UpdateHeadMesh(int32_t HeadIndex);
		void OnConstruct();
		void UpdateBodyMesh(const class FName& BodyID);
		void InitClothing();
		void InitBody();
		void InitStyle(const struct FS_CharacterStyle& Style);
		void UserConstructionScript();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_Character_HydroGuy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
