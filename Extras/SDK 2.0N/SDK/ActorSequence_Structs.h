#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0N
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ActorSequence.EActorSequenceObjectReferenceType
	 */
	enum class EActorSequenceObjectReferenceType : uint8_t
	{
		ContextActor  = 0x0000000000000000,
		ExternalActor = 0x0000000000000001,
		Component     = 0x0000000000000002,
		MAX           = 0x0000000000000003
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ActorSequence.ActorSequenceObjectReference
	 * Size -> 0x0028
	 */
	struct FActorSequenceObjectReference
	{
	public:
		EActorSequenceObjectReferenceType                          Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EYMK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ActorId;                                                 // 0x0004(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EMPH[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PathToComponent;                                         // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ActorSequence.ActorSequenceObjectReferences
	 * Size -> 0x0010
	 */
	struct FActorSequenceObjectReferences
	{
	public:
		TArray<struct FActorSequenceObjectReference>               Array;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
	 * Size -> 0x0020
	 */
	struct FActorSequenceObjectReferenceMap
	{
	public:
		TArray<struct FGuid>                                       BindingIds;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FActorSequenceObjectReferences>              References;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
