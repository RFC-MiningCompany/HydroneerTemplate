﻿#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0D
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
	 * Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
	 */
	enum class Niagara_ENiagaraSystemSpawnSectionEndBehavior : uint8_t
	{
		ENiagaraSystemSpawnSectionEndBehavior__SetSystemInactive                         = 0,
		ENiagaraSystemSpawnSectionEndBehavior__Deactivate                                = 1,
		ENiagaraSystemSpawnSectionEndBehavior__None                                      = 2,
		ENiagaraSystemSpawnSectionEndBehavior__ENiagaraSystemSpawnSectionEndBehavior_MAX = 3
	};

	/**
	 * Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
	 */
	enum class Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t
	{
		ENiagaraSystemSpawnSectionEvaluateBehavior__ActivateIfInactive                             = 0,
		ENiagaraSystemSpawnSectionEvaluateBehavior__None                                           = 1,
		ENiagaraSystemSpawnSectionEvaluateBehavior__ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
	};

	/**
	 * Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
	 */
	enum class Niagara_ENiagaraSystemSpawnSectionStartBehavior : uint8_t
	{
		ENiagaraSystemSpawnSectionStartBehavior__Activate                                    = 0,
		ENiagaraSystemSpawnSectionStartBehavior__ENiagaraSystemSpawnSectionStartBehavior_MAX = 1
	};

	/**
	 * Enum Niagara.ENiagaraCollisionMode
	 */
	enum class Niagara_ENiagaraCollisionMode : uint8_t
	{
		ENiagaraCollisionMode__None                      = 0,
		ENiagaraCollisionMode__SceneGeometry             = 1,
		ENiagaraCollisionMode__DepthBuffer               = 2,
		ENiagaraCollisionMode__DistanceField             = 3,
		ENiagaraCollisionMode__ENiagaraCollisionMode_MAX = 4
	};

	/**
	 * Enum Niagara.ENiagaraLegacyTrailWidthMode
	 */
	enum class Niagara_ENiagaraLegacyTrailWidthMode : uint8_t
	{
		ENiagaraLegacyTrailWidthMode__FromCentre                       = 0,
		ENiagaraLegacyTrailWidthMode__FromFirst                        = 1,
		ENiagaraLegacyTrailWidthMode__FromSecond                       = 2,
		ENiagaraLegacyTrailWidthMode__ENiagaraLegacyTrailWidthMode_MAX = 3
	};

	/**
	 * Enum Niagara.ENiagaraRendererSourceDataMode
	 */
	enum class Niagara_ENiagaraRendererSourceDataMode : uint8_t
	{
		ENiagaraRendererSourceDataMode__Particles                          = 0,
		ENiagaraRendererSourceDataMode__Emitter                            = 1,
		ENiagaraRendererSourceDataMode__ENiagaraRendererSourceDataMode_MAX = 2
	};

	/**
	 * Enum Niagara.ENiagaraBindingSource
	 */
	enum class Niagara_ENiagaraBindingSource : uint8_t
	{
		ImplicitFromSource        = 0,
		ExplicitParticles         = 1,
		ExplicitEmitter           = 2,
		ExplicitSystem            = 3,
		ExplicitUser              = 4,
		MaxBindingSource          = 5,
		ENiagaraBindingSource_MAX = 6
	};

	/**
	 * Enum Niagara.ENiagaraIterationSource
	 */
	enum class Niagara_ENiagaraIterationSource : uint8_t
	{
		ENiagaraIterationSource__Particles                   = 0,
		ENiagaraIterationSource__DataInterface               = 1,
		ENiagaraIterationSource__ENiagaraIterationSource_MAX = 2
	};

	/**
	 * Enum Niagara.ENiagaraScriptGroup
	 */
	enum class Niagara_ENiagaraScriptGroup : uint8_t
	{
		ENiagaraScriptGroup__Particle = 0,
		ENiagaraScriptGroup__Emitter  = 1,
		ENiagaraScriptGroup__System   = 2,
		ENiagaraScriptGroup__Max      = 3
	};

	/**
	 * Enum Niagara.ENiagaraScriptContextStaticSwitch
	 */
	enum class Niagara_ENiagaraScriptContextStaticSwitch : uint8_t
	{
		ENiagaraScriptContextStaticSwitch__System                                = 0,
		ENiagaraScriptContextStaticSwitch__Emitter                               = 1,
		ENiagaraScriptContextStaticSwitch__Particle                              = 2,
		ENiagaraScriptContextStaticSwitch__ENiagaraScriptContextStaticSwitch_MAX = 3
	};

	/**
	 * Enum Niagara.ENiagaraCompileUsageStaticSwitch
	 */
	enum class Niagara_ENiagaraCompileUsageStaticSwitch : uint8_t
	{
		ENiagaraCompileUsageStaticSwitch__Spawn                                = 0,
		ENiagaraCompileUsageStaticSwitch__Update                               = 1,
		ENiagaraCompileUsageStaticSwitch__Event                                = 2,
		ENiagaraCompileUsageStaticSwitch__SimulationStage                      = 3,
		ENiagaraCompileUsageStaticSwitch__Default                              = 4,
		ENiagaraCompileUsageStaticSwitch__ENiagaraCompileUsageStaticSwitch_MAX = 5
	};

	/**
	 * Enum Niagara.ENiagaraScriptUsage
	 */
	enum class Niagara_ENiagaraScriptUsage : uint8_t
	{
		ENiagaraScriptUsage__Function                        = 0,
		ENiagaraScriptUsage__Module                          = 1,
		ENiagaraScriptUsage__DynamicInput                    = 2,
		ENiagaraScriptUsage__ParticleSpawnScript             = 3,
		ENiagaraScriptUsage__ParticleSpawnScriptInterpolated = 4,
		ENiagaraScriptUsage__ParticleUpdateScript            = 5,
		ENiagaraScriptUsage__ParticleEventScript             = 6,
		ENiagaraScriptUsage__ParticleSimulationStageScript   = 7,
		ENiagaraScriptUsage__ParticleGPUComputeScript        = 8,
		ENiagaraScriptUsage__EmitterSpawnScript              = 9,
		ENiagaraScriptUsage__EmitterUpdateScript             = 10,
		ENiagaraScriptUsage__SystemSpawnScript               = 11,
		ENiagaraScriptUsage__SystemUpdateScript              = 12,
		ENiagaraScriptUsage__ENiagaraScriptUsage_MAX         = 13
	};

	/**
	 * Enum Niagara.ENiagaraScriptCompileStatus
	 */
	enum class Niagara_ENiagaraScriptCompileStatus : uint8_t
	{
		ENiagaraScriptCompileStatus__NCS_Unknown                     = 0,
		ENiagaraScriptCompileStatus__NCS_Dirty                       = 1,
		ENiagaraScriptCompileStatus__NCS_Error                       = 2,
		ENiagaraScriptCompileStatus__NCS_UpToDate                    = 3,
		ENiagaraScriptCompileStatus__NCS_BeingCreated                = 4,
		ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings        = 5,
		ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings = 6,
		ENiagaraScriptCompileStatus__NCS_MAX                         = 7
	};

	/**
	 * Enum Niagara.ENiagaraInputNodeUsage
	 */
	enum class Niagara_ENiagaraInputNodeUsage : uint8_t
	{
		ENiagaraInputNodeUsage__Undefined                  = 0,
		ENiagaraInputNodeUsage__Parameter                  = 1,
		ENiagaraInputNodeUsage__Attribute                  = 2,
		ENiagaraInputNodeUsage__SystemConstant             = 3,
		ENiagaraInputNodeUsage__TranslatorConstant         = 4,
		ENiagaraInputNodeUsage__RapidIterationParameter    = 5,
		ENiagaraInputNodeUsage__ENiagaraInputNodeUsage_MAX = 6
	};

	/**
	 * Enum Niagara.ENiagaraDataSetType
	 */
	enum class Niagara_ENiagaraDataSetType : uint8_t
	{
		ENiagaraDataSetType__ParticleData            = 0,
		ENiagaraDataSetType__Shared                  = 1,
		ENiagaraDataSetType__Event                   = 2,
		ENiagaraDataSetType__ENiagaraDataSetType_MAX = 3
	};

	/**
	 * Enum Niagara.ENiagaraStatDisplayMode
	 */
	enum class Niagara_ENiagaraStatDisplayMode : uint8_t
	{
		ENiagaraStatDisplayMode__Percent                     = 0,
		ENiagaraStatDisplayMode__Absolute                    = 1,
		ENiagaraStatDisplayMode__ENiagaraStatDisplayMode_MAX = 2
	};

	/**
	 * Enum Niagara.ENiagaraStatEvaluationType
	 */
	enum class Niagara_ENiagaraStatEvaluationType : uint8_t
	{
		ENiagaraStatEvaluationType__Average                        = 0,
		ENiagaraStatEvaluationType__Maximum                        = 1,
		ENiagaraStatEvaluationType__ENiagaraStatEvaluationType_MAX = 2
	};

	/**
	 * Enum Niagara.ENiagaraAgeUpdateMode
	 */
	enum class Niagara_ENiagaraAgeUpdateMode : uint8_t
	{
		ENiagaraAgeUpdateMode__TickDeltaTime             = 0,
		ENiagaraAgeUpdateMode__DesiredAge                = 1,
		ENiagaraAgeUpdateMode__DesiredAgeNoSeek          = 2,
		ENiagaraAgeUpdateMode__ENiagaraAgeUpdateMode_MAX = 3
	};

	/**
	 * Enum Niagara.ENiagaraSimTarget
	 */
	enum class Niagara_ENiagaraSimTarget : uint8_t
	{
		ENiagaraSimTarget__CPUSim                = 0,
		ENiagaraSimTarget__GPUComputeSim         = 1,
		ENiagaraSimTarget__ENiagaraSimTarget_MAX = 2
	};

	/**
	 * Enum Niagara.ENiagaraDefaultMode
	 */
	enum class Niagara_ENiagaraDefaultMode : uint8_t
	{
		ENiagaraDefaultMode__Value                   = 0,
		ENiagaraDefaultMode__Binding                 = 1,
		ENiagaraDefaultMode__Custom                  = 2,
		ENiagaraDefaultMode__ENiagaraDefaultMode_MAX = 3
	};

	/**
	 * Enum Niagara.ENiagaraGpuBufferFormat
	 */
	enum class Niagara_ENiagaraGpuBufferFormat : uint8_t
	{
		ENiagaraGpuBufferFormat__Float                  = 0,
		ENiagaraGpuBufferFormat__HalfFloat              = 1,
		ENiagaraGpuBufferFormat__UnsignedNormalizedByte = 2,
		ENiagaraGpuBufferFormat__Max                    = 3
	};

	/**
	 * Enum Niagara.ENiagaraTickBehavior
	 */
	enum class Niagara_ENiagaraTickBehavior : uint8_t
	{
		ENiagaraTickBehavior__UsePrereqs               = 0,
		ENiagaraTickBehavior__UseComponentTickGroup    = 1,
		ENiagaraTickBehavior__ForceTickFirst           = 2,
		ENiagaraTickBehavior__ForceTickLast            = 3,
		ENiagaraTickBehavior__ENiagaraTickBehavior_MAX = 4
	};

	/**
	 * Enum Niagara.ENCPoolMethod
	 */
	enum class Niagara_ENCPoolMethod : uint8_t
	{
		ENCPoolMethod__None                     = 0,
		ENCPoolMethod__AutoRelease              = 1,
		ENCPoolMethod__ManualRelease            = 2,
		ENCPoolMethod__ManualRelease_OnComplete = 3,
		ENCPoolMethod__FreeInPool               = 4,
		ENCPoolMethod__ENCPoolMethod_MAX        = 5
	};

	/**
	 * Enum Niagara.ENDIExport_GPUAllocationMode
	 */
	enum class Niagara_ENDIExport_GPUAllocationMode : uint8_t
	{
		ENDIExport_GPUAllocationMode__FixedSize      = 0,
		ENDIExport_GPUAllocationMode__PerParticle    = 1,
		ENDIExport_GPUAllocationMode__ENDIExport_MAX = 2
	};

	/**
	 * Enum Niagara.ESetResolutionMethod
	 */
	enum class Niagara_ESetResolutionMethod : uint8_t
	{
		ESetResolutionMethod__Independent              = 0,
		ESetResolutionMethod__MaxAxis                  = 1,
		ESetResolutionMethod__CellSize                 = 2,
		ESetResolutionMethod__ESetResolutionMethod_MAX = 3
	};

	/**
	 * Enum Niagara.ENDISkeletalMesh_SkinningMode
	 */
	enum class Niagara_ENDISkeletalMesh_SkinningMode : uint8_t
	{
		ENDISkeletalMesh_SkinningMode__Invalid              = 0,
		ENDISkeletalMesh_SkinningMode__None                 = 1,
		ENDISkeletalMesh_SkinningMode__SkinOnTheFly         = 2,
		ENDISkeletalMesh_SkinningMode__PreSkin              = 3,
		ENDISkeletalMesh_SkinningMode__ENDISkeletalMesh_MAX = 4
	};

	/**
	 * Enum Niagara.ENDISkeletalMesh_SourceMode
	 */
	enum class Niagara_ENDISkeletalMesh_SourceMode : uint8_t
	{
		ENDISkeletalMesh_SourceMode__Default              = 0,
		ENDISkeletalMesh_SourceMode__Source               = 1,
		ENDISkeletalMesh_SourceMode__AttachParent         = 2,
		ENDISkeletalMesh_SourceMode__ENDISkeletalMesh_MAX = 3
	};

	/**
	 * Enum Niagara.ENDIStaticMesh_SourceMode
	 */
	enum class Niagara_ENDIStaticMesh_SourceMode : uint8_t
	{
		ENDIStaticMesh_SourceMode__Default            = 0,
		ENDIStaticMesh_SourceMode__Source             = 1,
		ENDIStaticMesh_SourceMode__AttachParent       = 2,
		ENDIStaticMesh_SourceMode__DefaultMeshOnly    = 3,
		ENDIStaticMesh_SourceMode__ENDIStaticMesh_MAX = 4
	};

	/**
	 * Enum Niagara.ENiagaraScalabilityUpdateFrequency
	 */
	enum class Niagara_ENiagaraScalabilityUpdateFrequency : uint8_t
	{
		ENiagaraScalabilityUpdateFrequency__SpawnOnly                              = 0,
		ENiagaraScalabilityUpdateFrequency__Low                                    = 1,
		ENiagaraScalabilityUpdateFrequency__Medium                                 = 2,
		ENiagaraScalabilityUpdateFrequency__High                                   = 3,
		ENiagaraScalabilityUpdateFrequency__Continuous                             = 4,
		ENiagaraScalabilityUpdateFrequency__ENiagaraScalabilityUpdateFrequency_MAX = 5
	};

	/**
	 * Enum Niagara.ENiagaraCullReaction
	 */
	enum class Niagara_ENiagaraCullReaction : uint8_t
	{
		ENiagaraCullReaction__Deactivate                = 0,
		ENiagaraCullReaction__DeactivateImmediate       = 1,
		ENiagaraCullReaction__DeactivateResume          = 2,
		ENiagaraCullReaction__DeactivateImmediateResume = 3,
		ENiagaraCullReaction__ENiagaraCullReaction_MAX  = 4
	};

	/**
	 * Enum Niagara.EParticleAllocationMode
	 */
	enum class Niagara_EParticleAllocationMode : uint8_t
	{
		EParticleAllocationMode__AutomaticEstimate           = 0,
		EParticleAllocationMode__ManualEstimate              = 1,
		EParticleAllocationMode__EParticleAllocationMode_MAX = 2
	};

	/**
	 * Enum Niagara.EScriptExecutionMode
	 */
	enum class Niagara_EScriptExecutionMode : uint8_t
	{
		EScriptExecutionMode__EveryParticle            = 0,
		EScriptExecutionMode__SpawnedParticles         = 1,
		EScriptExecutionMode__SingleParticle           = 2,
		EScriptExecutionMode__EScriptExecutionMode_MAX = 3
	};

	/**
	 * Enum Niagara.ENiagaraSortMode
	 */
	enum class Niagara_ENiagaraSortMode : uint8_t
	{
		ENiagaraSortMode__None                 = 0,
		ENiagaraSortMode__ViewDepth            = 1,
		ENiagaraSortMode__ViewDistance         = 2,
		ENiagaraSortMode__CustomAscending      = 3,
		ENiagaraSortMode__CustomDecending      = 4,
		ENiagaraSortMode__ENiagaraSortMode_MAX = 5
	};

	/**
	 * Enum Niagara.ENiagaraMeshLockedAxisSpace
	 */
	enum class Niagara_ENiagaraMeshLockedAxisSpace : uint8_t
	{
		ENiagaraMeshLockedAxisSpace__Simulation                      = 0,
		ENiagaraMeshLockedAxisSpace__World                           = 1,
		ENiagaraMeshLockedAxisSpace__Local                           = 2,
		ENiagaraMeshLockedAxisSpace__ENiagaraMeshLockedAxisSpace_MAX = 3
	};

	/**
	 * Enum Niagara.ENiagaraMeshPivotOffsetSpace
	 */
	enum class Niagara_ENiagaraMeshPivotOffsetSpace : uint8_t
	{
		ENiagaraMeshPivotOffsetSpace__Mesh                             = 0,
		ENiagaraMeshPivotOffsetSpace__Simulation                       = 1,
		ENiagaraMeshPivotOffsetSpace__World                            = 2,
		ENiagaraMeshPivotOffsetSpace__Local                            = 3,
		ENiagaraMeshPivotOffsetSpace__ENiagaraMeshPivotOffsetSpace_MAX = 4
	};

	/**
	 * Enum Niagara.ENiagaraMeshFacingMode
	 */
	enum class Niagara_ENiagaraMeshFacingMode : uint8_t
	{
		ENiagaraMeshFacingMode__Default                    = 0,
		ENiagaraMeshFacingMode__Velocity                   = 1,
		ENiagaraMeshFacingMode__CameraPosition             = 2,
		ENiagaraMeshFacingMode__CameraPlane                = 3,
		ENiagaraMeshFacingMode__ENiagaraMeshFacingMode_MAX = 4
	};

	/**
	 * Enum Niagara.ENiagaraPlatformSetState
	 */
	enum class Niagara_ENiagaraPlatformSetState : uint8_t
	{
		ENiagaraPlatformSetState__Disabled                     = 0,
		ENiagaraPlatformSetState__Enabled                      = 1,
		ENiagaraPlatformSetState__Active                       = 2,
		ENiagaraPlatformSetState__Unknown                      = 3,
		ENiagaraPlatformSetState__ENiagaraPlatformSetState_MAX = 4
	};

	/**
	 * Enum Niagara.ENiagaraPlatformSelectionState
	 */
	enum class Niagara_ENiagaraPlatformSelectionState : uint8_t
	{
		ENiagaraPlatformSelectionState__Default                            = 0,
		ENiagaraPlatformSelectionState__Enabled                            = 1,
		ENiagaraPlatformSelectionState__Disabled                           = 2,
		ENiagaraPlatformSelectionState__ENiagaraPlatformSelectionState_MAX = 3
	};

	/**
	 * Enum Niagara.ENiagaraPreviewGridResetMode
	 */
	enum class Niagara_ENiagaraPreviewGridResetMode : uint8_t
	{
		ENiagaraPreviewGridResetMode__Never                            = 0,
		ENiagaraPreviewGridResetMode__Individual                       = 1,
		ENiagaraPreviewGridResetMode__All                              = 2,
		ENiagaraPreviewGridResetMode__ENiagaraPreviewGridResetMode_MAX = 3
	};

	/**
	 * Enum Niagara.ENiagaraRibbonUVDistributionMode
	 */
	enum class Niagara_ENiagaraRibbonUVDistributionMode : uint8_t
	{
		ENiagaraRibbonUVDistributionMode__ScaledUniformly                      = 0,
		ENiagaraRibbonUVDistributionMode__ScaledUsingRibbonSegmentLength       = 1,
		ENiagaraRibbonUVDistributionMode__TiledOverRibbonLength                = 2,
		ENiagaraRibbonUVDistributionMode__ENiagaraRibbonUVDistributionMode_MAX = 3
	};

	/**
	 * Enum Niagara.ENiagaraRibbonUVEdgeMode
	 */
	enum class Niagara_ENiagaraRibbonUVEdgeMode : uint8_t
	{
		ENiagaraRibbonUVEdgeMode__SmoothTransition             = 0,
		ENiagaraRibbonUVEdgeMode__Locked                       = 1,
		ENiagaraRibbonUVEdgeMode__ENiagaraRibbonUVEdgeMode_MAX = 2
	};

	/**
	 * Enum Niagara.ENiagaraRibbonTessellationMode
	 */
	enum class Niagara_ENiagaraRibbonTessellationMode : uint8_t
	{
		ENiagaraRibbonTessellationMode__Automatic                          = 0,
		ENiagaraRibbonTessellationMode__Custom                             = 1,
		ENiagaraRibbonTessellationMode__Disabled                           = 2,
		ENiagaraRibbonTessellationMode__ENiagaraRibbonTessellationMode_MAX = 3
	};

	/**
	 * Enum Niagara.ENiagaraRibbonDrawDirection
	 */
	enum class Niagara_ENiagaraRibbonDrawDirection : uint8_t
	{
		ENiagaraRibbonDrawDirection__FrontToBack                     = 0,
		ENiagaraRibbonDrawDirection__BackToFront                     = 1,
		ENiagaraRibbonDrawDirection__ENiagaraRibbonDrawDirection_MAX = 2
	};

	/**
	 * Enum Niagara.ENiagaraRibbonAgeOffsetMode
	 */
	enum class Niagara_ENiagaraRibbonAgeOffsetMode : uint8_t
	{
		ENiagaraRibbonAgeOffsetMode__Scale                           = 0,
		ENiagaraRibbonAgeOffsetMode__Clip                            = 1,
		ENiagaraRibbonAgeOffsetMode__ENiagaraRibbonAgeOffsetMode_MAX = 2
	};

	/**
	 * Enum Niagara.ENiagaraRibbonFacingMode
	 */
	enum class Niagara_ENiagaraRibbonFacingMode : uint8_t
	{
		ENiagaraRibbonFacingMode__Screen                       = 0,
		ENiagaraRibbonFacingMode__Custom                       = 1,
		ENiagaraRibbonFacingMode__CustomSideVector             = 2,
		ENiagaraRibbonFacingMode__ENiagaraRibbonFacingMode_MAX = 3
	};

	/**
	 * Enum Niagara.ENiagaraScriptLibraryVisibility
	 */
	enum class Niagara_ENiagaraScriptLibraryVisibility : uint8_t
	{
		ENiagaraScriptLibraryVisibility__Invalid                             = 0,
		ENiagaraScriptLibraryVisibility__Unexposed                           = 1,
		ENiagaraScriptLibraryVisibility__Library                             = 2,
		ENiagaraScriptLibraryVisibility__Hidden                              = 3,
		ENiagaraScriptLibraryVisibility__ENiagaraScriptLibraryVisibility_MAX = 4
	};

	/**
	 * Enum Niagara.ENiagaraModuleDependencyScriptConstraint
	 */
	enum class Niagara_ENiagaraModuleDependencyScriptConstraint : uint8_t
	{
		ENiagaraModuleDependencyScriptConstraint__SameScript                                   = 0,
		ENiagaraModuleDependencyScriptConstraint__AllScripts                                   = 1,
		ENiagaraModuleDependencyScriptConstraint__ENiagaraModuleDependencyScriptConstraint_MAX = 2
	};

	/**
	 * Enum Niagara.ENiagaraModuleDependencyType
	 */
	enum class Niagara_ENiagaraModuleDependencyType : uint8_t
	{
		ENiagaraModuleDependencyType__PreDependency                    = 0,
		ENiagaraModuleDependencyType__PostDependency                   = 1,
		ENiagaraModuleDependencyType__ENiagaraModuleDependencyType_MAX = 2
	};

	/**
	 * Enum Niagara.EUnusedAttributeBehaviour
	 */
	enum class Niagara_EUnusedAttributeBehaviour : uint8_t
	{
		EUnusedAttributeBehaviour__Copy                          = 0,
		EUnusedAttributeBehaviour__Zero                          = 1,
		EUnusedAttributeBehaviour__None                          = 2,
		EUnusedAttributeBehaviour__MarkInvalid                   = 3,
		EUnusedAttributeBehaviour__PassThrough                   = 4,
		EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX = 5
	};

	/**
	 * Enum Niagara.ENiagaraSpriteFacingMode
	 */
	enum class Niagara_ENiagaraSpriteFacingMode : uint8_t
	{
		ENiagaraSpriteFacingMode__FaceCamera                   = 0,
		ENiagaraSpriteFacingMode__FaceCameraPlane              = 1,
		ENiagaraSpriteFacingMode__CustomFacingVector           = 2,
		ENiagaraSpriteFacingMode__FaceCameraPosition           = 3,
		ENiagaraSpriteFacingMode__FaceCameraDistanceBlend      = 4,
		ENiagaraSpriteFacingMode__ENiagaraSpriteFacingMode_MAX = 5
	};

	/**
	 * Enum Niagara.ENiagaraSpriteAlignment
	 */
	enum class Niagara_ENiagaraSpriteAlignment : uint8_t
	{
		ENiagaraSpriteAlignment__Unaligned                   = 0,
		ENiagaraSpriteAlignment__VelocityAligned             = 1,
		ENiagaraSpriteAlignment__CustomAlignment             = 2,
		ENiagaraSpriteAlignment__ENiagaraSpriteAlignment_MAX = 3
	};

	/**
	 * Enum Niagara.ENiagaraParameterPanelCategory
	 */
	enum class Niagara_ENiagaraParameterPanelCategory : uint8_t
	{
		ENiagaraParameterPanelCategory__Input                              = 0,
		ENiagaraParameterPanelCategory__Attributes                         = 1,
		ENiagaraParameterPanelCategory__Output                             = 2,
		ENiagaraParameterPanelCategory__Local                              = 3,
		ENiagaraParameterPanelCategory__User                               = 4,
		ENiagaraParameterPanelCategory__Engine                             = 5,
		ENiagaraParameterPanelCategory__Owner                              = 6,
		ENiagaraParameterPanelCategory__System                             = 7,
		ENiagaraParameterPanelCategory__Emitter                            = 8,
		ENiagaraParameterPanelCategory__Particles                          = 9,
		ENiagaraParameterPanelCategory__ScriptTransient                    = 10,
		ENiagaraParameterPanelCategory__StaticSwitch                       = 11,
		ENiagaraParameterPanelCategory__None                               = 12,
		ENiagaraParameterPanelCategory__Num                                = 13,
		ENiagaraParameterPanelCategory__ENiagaraParameterPanelCategory_MAX = 14
	};

	/**
	 * Enum Niagara.ENiagaraScriptParameterUsage
	 */
	enum class Niagara_ENiagaraScriptParameterUsage : uint8_t
	{
		ENiagaraScriptParameterUsage__Input                            = 0,
		ENiagaraScriptParameterUsage__Output                           = 1,
		ENiagaraScriptParameterUsage__Local                            = 2,
		ENiagaraScriptParameterUsage__InputOutput                      = 3,
		ENiagaraScriptParameterUsage__InitialValueInput                = 4,
		ENiagaraScriptParameterUsage__None                             = 5,
		ENiagaraScriptParameterUsage__Num                              = 6,
		ENiagaraScriptParameterUsage__ENiagaraScriptParameterUsage_MAX = 7
	};

	/**
	 * Enum Niagara.ENiagaraParameterScope
	 */
	enum class Niagara_ENiagaraParameterScope : uint8_t
	{
		ENiagaraParameterScope__Input                      = 0,
		ENiagaraParameterScope__User                       = 1,
		ENiagaraParameterScope__Engine                     = 2,
		ENiagaraParameterScope__Owner                      = 3,
		ENiagaraParameterScope__System                     = 4,
		ENiagaraParameterScope__Emitter                    = 5,
		ENiagaraParameterScope__Particles                  = 6,
		ENiagaraParameterScope__ScriptPersistent           = 7,
		ENiagaraParameterScope__ScriptTransient            = 8,
		ENiagaraParameterScope__Local                      = 9,
		ENiagaraParameterScope__Custom                     = 10,
		ENiagaraParameterScope__DISPLAY_ONLY_StaticSwitch  = 11,
		ENiagaraParameterScope__Output                     = 12,
		ENiagaraParameterScope__None                       = 13,
		ENiagaraParameterScope__Num                        = 14,
		ENiagaraParameterScope__ENiagaraParameterScope_MAX = 15
	};

	/**
	 * Enum Niagara.ENiagaraExecutionState
	 */
	enum class Niagara_ENiagaraExecutionState : uint8_t
	{
		ENiagaraExecutionState__Active                     = 0,
		ENiagaraExecutionState__Inactive                   = 1,
		ENiagaraExecutionState__InactiveClear              = 2,
		ENiagaraExecutionState__Complete                   = 3,
		ENiagaraExecutionState__Disabled                   = 4,
		ENiagaraExecutionState__Num                        = 5,
		ENiagaraExecutionState__ENiagaraExecutionState_MAX = 6
	};

	/**
	 * Enum Niagara.ENiagaraExecutionStateSource
	 */
	enum class Niagara_ENiagaraExecutionStateSource : uint8_t
	{
		ENiagaraExecutionStateSource__Scalability                      = 0,
		ENiagaraExecutionStateSource__Internal                         = 1,
		ENiagaraExecutionStateSource__Owner                            = 2,
		ENiagaraExecutionStateSource__InternalCompletion               = 3,
		ENiagaraExecutionStateSource__ENiagaraExecutionStateSource_MAX = 4
	};

	/**
	 * Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
	 */
	enum class Niagara_ENiagaraNumericOutputTypeSelectionMode : uint8_t
	{
		ENiagaraNumericOutputTypeSelectionMode__None                                       = 0,
		ENiagaraNumericOutputTypeSelectionMode__Largest                                    = 1,
		ENiagaraNumericOutputTypeSelectionMode__Smallest                                   = 2,
		ENiagaraNumericOutputTypeSelectionMode__Scalar                                     = 3,
		ENiagaraNumericOutputTypeSelectionMode__ENiagaraNumericOutputTypeSelectionMode_MAX = 4
	};

	/**
	 * Enum Niagara.ENiagaraVariantMode
	 */
	enum class Niagara_ENiagaraVariantMode : uint8_t
	{
		ENiagaraVariantMode__None                    = 0,
		ENiagaraVariantMode__Object                  = 1,
		ENiagaraVariantMode__DataInterface           = 2,
		ENiagaraVariantMode__Bytes                   = 3,
		ENiagaraVariantMode__ENiagaraVariantMode_MAX = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Niagara.NiagaraTypeDefinitionHandle
	 * Size -> 0x0004
	 */
	struct FNiagaraTypeDefinitionHandle
	{
	public:
		int32_t                                                    RegisteredTypeIndex;                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableBase
	 * Size -> 0x000C
	 */
	struct FNiagaraVariableBase
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FNiagaraTypeDefinitionHandle                        TypeDefHandle;                                           // 0x0008(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected

	};

	/**
	 * ScriptStruct Niagara.NiagaraVariable
	 * Size -> 0x0014 (FullSize[0x0020] - InheritedSize[0x000C])
	 */
	struct FNiagaraVariable : public FNiagaraVariableBase
	{
	public:
		unsigned char                                              UnknownData_NA58[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      VarData;                                                 // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableWithOffset
	 * Size -> 0x0004 (FullSize[0x0010] - InheritedSize[0x000C])
	 */
	struct FNiagaraVariableWithOffset : public FNiagaraVariableBase
	{
	public:
		int32_t                                                    Offset;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraMaterialOverride
	 * Size -> 0x0018
	 */
	struct FNiagaraMaterialOverride
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaterialSubIndex;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZIN3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraRendererProperties*                          EmitterRendererProperty;                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterStore
	 * Size -> 0x0078
	 */
	struct FNiagaraParameterStore
	{
	public:
		unsigned char                                              UnknownData_8V9O[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             Owner;                                                   // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FNiagaraVariableWithOffset>                  SortedParameterOffsets;                                  // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      ParameterData;                                           // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UNiagaraDataInterface*>                       DataInterfaces;                                          // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UObject*>                                     UObjects;                                                // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M7I7[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
	 * Size -> 0x0050 (FullSize[0x00C8] - InheritedSize[0x0078])
	 */
	struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
	{
	public:
		TMap<struct FNiagaraVariable, struct FNiagaraVariable>     UserParameterRedirects;                                  // 0x0078(0x0050) NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.NCPoolElement
	 * Size -> 0x0010
	 */
	struct FNCPoolElement
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C8JC[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NCPool
	 * Size -> 0x0038
	 */
	struct FNCPool
	{
	public:
		TArray<struct FNCPoolElement>                              FreeElements;                                            // 0x0000(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UNiagaraComponent*>                           InUseComponents_Auto;                                    // 0x0010(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UNiagaraComponent*>                           InUseComponents_Manual;                                  // 0x0020(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OIS7[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
	 * Size -> 0x0010
	 */
	struct FNiagaraDeviceProfileStateEntry
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   QualityLevelMask;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   SetQualityLevelMask;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraPlatformSetCVarCondition
	 * Size -> 0x0028
	 */
	struct FNiagaraPlatformSetCVarCondition
	{
	public:
		class FName                                                CVarName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Value;                                                   // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D63U[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinInt;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxInt;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinFloat;                                                // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFloat;                                                // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseMinInt : 1;                                          // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseMaxInt : 1;                                          // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseMinFloat : 1;                                        // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseMaxFloat : 1;                                        // 0x001C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NPPV[0xB];                                   // 0x001D(0x000B) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraPlatformSet
	 * Size -> 0x0030
	 */
	struct FNiagaraPlatformSet
	{
	public:
		int32_t                                                    QualityLevelMask;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ZNH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraDeviceProfileStateEntry>             DeviceProfileStates;                                     // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraPlatformSetCVarCondition>            CVarConditions;                                          // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UEUN[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableAttributeBinding
	 * Size -> 0x0058
	 */
	struct FNiagaraVariableAttributeBinding
	{
	public:
		struct FNiagaraVariableBase                                ParamMapVariable;                                        // 0x0000(0x000C) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ANY1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariable                                    DataSetVariable;                                         // 0x0010(0x0020) Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FNiagaraVariable                                    RootVariable;                                            // 0x0030(0x0020) Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		Niagara_ENiagaraBindingSource                              BindingSourceMode;                                       // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K2RX[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bBindingExistsOnSource : 1;                              // 0x0054(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsCachedParticleValue : 1;                              // 0x0054(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U8HV[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraTypeDefinition
	 * Size -> 0x0010
	 */
	struct FNiagaraTypeDefinition
	{
	public:
		class UObject*                                             ClassStructOrEnum;                                       // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   UnderlyingType;                                          // 0x0008(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UUX2[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraComponentPropertyBinding
	 * Size -> 0x00A0
	 */
	struct FNiagaraComponentPropertyBinding
	{
	public:
		struct FNiagaraVariableAttributeBinding                    AttributeBinding;                                        // 0x0000(0x0058) NativeAccessSpecifierPublic
		class FName                                                PropertyName;                                            // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraTypeDefinition                              PropertyType;                                            // 0x0060(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MetadataSetterName;                                      // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    WritableValue;                                           // 0x0078(0x0020) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CL0L[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraUserParameterBinding
	 * Size -> 0x0020
	 */
	struct FNiagaraUserParameterBinding
	{
	public:
		struct FNiagaraVariable                                    Parameter;                                               // 0x0000(0x0020) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NDIStaticMeshSectionFilter
	 * Size -> 0x0010
	 */
	struct FNDIStaticMeshSectionFilter
	{
	public:
		TArray<int32_t>                                            AllowedMaterialSlots;                                    // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemScalabilitySettings
	 * Size -> 0x0048
	 */
	struct FNiagaraSystemScalabilitySettings
	{
	public:
		struct FNiagaraPlatformSet                                 Platforms;                                               // 0x0000(0x0030) Edit, NativeAccessSpecifierPublic
		unsigned char                                              bCullByDistance : 1;                                     // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCullMaxInstanceCount : 1;                               // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCullPerSystemMaxInstanceCount : 1;                      // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCullByMaxTimeWithoutRender : 1;                         // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LSH1[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDistance;                                             // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxInstances;                                            // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxSystemInstances;                                      // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTimeWithoutRender;                                    // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IE1Y[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
	 * Size -> 0x0038
	 */
	struct FNiagaraEmitterScalabilitySettings
	{
	public:
		struct FNiagaraPlatformSet                                 Platforms;                                               // 0x0000(0x0030) Edit, NativeAccessSpecifierPublic
		unsigned char                                              bScaleSpawnCount : 1;                                    // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OQNJ[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnCountScale;                                         // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
	 * Size -> 0x0010
	 */
	struct FNiagaraEmitterScalabilitySettingsArray
	{
	public:
		TArray<struct FNiagaraEmitterScalabilitySettings>          Settings;                                                // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraEventReceiverProperties
	 * Size -> 0x0018
	 */
	struct FNiagaraEventReceiverProperties
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceEventGenerator;                                    // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceEmitter;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraTypeLayoutInfo
	 * Size -> 0x0060
	 */
	struct FNiagaraTypeLayoutInfo
	{
	public:
		TArray<uint32_t>                                           FloatComponentByteOffsets;                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           FloatComponentRegisterOffsets;                           // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           Int32ComponentByteOffsets;                               // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           Int32ComponentRegisterOffsets;                           // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           HalfComponentByteOffsets;                                // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           HalfComponentRegisterOffsets;                            // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableLayoutInfo
	 * Size -> 0x0070
	 */
	struct FNiagaraVariableLayoutInfo
	{
	public:
		uint32_t                                                   FloatComponentStart;                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Int32ComponentStart;                                     // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   HalfComponentStart;                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZFF8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraTypeLayoutInfo                              LayoutInfo;                                              // 0x0010(0x0060) NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraDataSetID
	 * Size -> 0x000C
	 */
	struct FNiagaraDataSetID
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Niagara_ENiagaraDataSetType                                Type;                                                    // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7236[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraDataSetCompiledData
	 * Size -> 0x0040
	 */
	struct FNiagaraDataSetCompiledData
	{
	public:
		TArray<struct FNiagaraVariable>                            Variables;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariableLayoutInfo>                  VariableLayouts;                                         // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraDataSetID                                   ID;                                                      // 0x0020(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TotalFloatComponents;                                    // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TotalInt32Components;                                    // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TotalHalfComponents;                                     // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRequiresPersistentIDs : 1;                              // 0x0038(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QIE0[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		Niagara_ENiagaraSimTarget                                  SimTarget;                                               // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TEE1[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraEventGeneratorProperties
	 * Size -> 0x0050
	 */
	struct FNiagaraEventGeneratorProperties
	{
	public:
		int32_t                                                    MaxEventsPerFrame;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ID;                                                      // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OQQ9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraDataSetCompiledData                         DataSetCompiledData;                                     // 0x0010(0x0040) NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
	 * Size -> 0x0014
	 */
	struct FNiagaraDetailsLevelScaleOverrides
	{
	public:
		float                                                      Low;                                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Medium;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      High;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Epic;                                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Cine;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
	{
	public:
		unsigned char                                              bOverrideSpawnCountScale : 1;                            // 0x0038(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8XBP[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScriptProperties
	 * Size -> 0x0028
	 */
	struct FNiagaraEmitterScriptProperties
	{
	public:
		class UNiagaraScript*                                      Script;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraEventReceiverProperties>             EventReceivers;                                          // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraEventGeneratorProperties>            EventGenerators;                                         // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraEventScriptProperties
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
	{
	public:
		Niagara_EScriptExecutionMode                               ExecutionMode;                                           // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TR64[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   SpawnNumber;                                             // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxEventsPerFrame;                                       // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               SourceEmitterID;                                         // 0x0034(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceEventName;                                         // 0x0044(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomSpawnNumber;                                      // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QGLX[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MinSpawnNumber;                                          // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_03RE[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
	 * Size -> 0x0010
	 */
	struct FNiagaraEmitterScalabilityOverrides
	{
	public:
		TArray<struct FNiagaraEmitterScalabilityOverride>          Overrides;                                               // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraMeshMaterialOverride
	 * Size -> 0x0028
	 */
	struct FNiagaraMeshMaterialOverride
	{
	public:
		class UMaterialInterface*                                  ExplicitMat;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        UserParamBinding;                                        // 0x0008(0x0020) Edit, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraRibbonUVSettings
	 * Size -> 0x0024
	 */
	struct FNiagaraRibbonUVSettings
	{
	public:
		Niagara_ENiagaraRibbonUVEdgeMode                           LeadingEdgeMode;                                         // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R2RG[0x3];                                   // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		Niagara_ENiagaraRibbonUVEdgeMode                           TrailingEdgeMode;                                        // 0x0004(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NV6E[0x3];                                   // 0x0004(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		Niagara_ENiagaraRibbonUVDistributionMode                   DistributionMode;                                        // 0x0008(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V16Q[0x3];                                   // 0x0008(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      TilingLength;                                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Offset;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Scale;                                                   // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnablePerParticleUOverride;                             // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnablePerParticleVRangeOverride;                        // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZG00[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
	 * Size -> 0x0008
	 */
	struct FNiagaraScriptExecutionPaddingInfo
	{
	public:
		uint16_t                                                   SrcOffset;                                               // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   DestOffset;                                              // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   SrcSize;                                                 // 0x0004(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   DestSize;                                                // 0x0006(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraBoundParameter
	 * Size -> 0x0028
	 */
	struct FNiagaraBoundParameter
	{
	public:
		struct FNiagaraVariable                                    Parameter;                                               // 0x0000(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SrcOffset;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DestOffset;                                              // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraVMExecutableDataId
	 * Size -> 0x0048
	 */
	struct FNiagaraVMExecutableDataId
	{
	public:
		struct FGuid                                               CompilerVersionID;                                       // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Niagara_ENiagaraScriptUsage                                ScriptUsageType;                                         // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ID6W[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ScriptUsageTypeID;                                       // 0x0014(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUsesRapidIterationParams : 1;                           // 0x0024(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInterpolatedSpawn : 1;                                  // 0x0024(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRequiresPersistentIDs : 1;                              // 0x0024(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0239[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               BaseScriptID;                                            // 0x0028(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraCompileHash                                 BaseScriptCompileHash;                                   // 0x0038(0x0010) NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptDataUsageInfo
	 * Size -> 0x0001
	 */
	struct FNiagaraScriptDataUsageInfo
	{
	public:
		bool                                                       bReadsAttributeData;                                     // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
	 * Size -> 0x0038
	 */
	struct FNiagaraScriptDataInterfaceCompileInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UserPtrIdx;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKOT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraTypeDefinition                              Type;                                                    // 0x0010(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapRead;                              // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapWrite;                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlaceholder;                                          // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BFP9[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.VMFunctionSpecifier
	 * Size -> 0x0010
	 */
	struct FVMFunctionSpecifier
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Value;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraStatScope
	 * Size -> 0x0010
	 */
	struct FNiagaraStatScope
	{
	public:
		class FName                                                FullName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FriendlyName;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
	 * Size -> 0x0038
	 */
	struct FNiagaraScriptDataInterfaceInfo
	{
	public:
		class UNiagaraDataInterface*                               DataInterface;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UserPtrIdx;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XK3Q[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraTypeDefinition                              Type;                                                    // 0x0018(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapRead;                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapWrite;                             // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
	 * Size -> 0x0010
	 */
	struct FNiagaraSystemScalabilitySettingsArray
	{
	public:
		TArray<struct FNiagaraSystemScalabilitySettings>           Settings;                                                // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
	 * Size -> 0x0020 (FullSize[0x0098] - InheritedSize[0x0078])
	 */
	struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
	{
	public:
		int32_t                                                    ParameterSize;                                           // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PaddedParameterSize;                                     // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraScriptExecutionPaddingInfo>          PaddingInfo;                                             // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bInitialized : 1;                                        // 0x0090(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4KC0[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraDataSetProperties
	 * Size -> 0x0020
	 */
	struct FNiagaraDataSetProperties
	{
	public:
		struct FNiagaraDataSetID                                   ID;                                                      // 0x0000(0x000C) Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Z4I[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraVariable>                            Variables;                                               // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.VMExternalFunctionBindingInfo
	 * Size -> 0x0038
	 */
	struct FVMExternalFunctionBindingInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OwnerName;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<bool>                                               InputParamLocations;                                     // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumOutputs;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_11KJ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVMFunctionSpecifier>                        FunctionSpecifiers;                                      // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraVMExecutableData
	 * Size -> 0x00E0
	 */
	struct FNiagaraVMExecutableData
	{
	public:
		TArray<unsigned char>                                      ByteCode;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      OptimizedByteCode;                                       // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		int32_t                                                    NumTempRegisters;                                        // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumUserPtrs;                                             // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      ScriptLiterals;                                          // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariable>                            Attributes;                                              // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraScriptDataUsageInfo                         DataUsage;                                               // 0x0048(0x0001) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6OAT[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraScriptDataInterfaceCompileInfo>      DataInterfaceInfo;                                       // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVMExternalFunctionBindingInfo>              CalledVMExternalFunctions;                               // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_06BK[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraDataSetID>                           ReadDataSets;                                            // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraDataSetProperties>                   WriteDataSets;                                           // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraStatScope>                           StatScopes;                                              // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraDataInterfaceGPUParamInfo>           DIParamInfo;                                             // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		Niagara_ENiagaraScriptCompileStatus                        LastCompileStatus;                                       // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3DXV[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSimulationStageMetaData>                    SimulationStageMetaData;                                 // 0x00C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bReadsSignificanceIndex : 1;                             // 0x00D8(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HWS0[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
	 * Size -> 0x0020
	 */
	struct FNiagaraVariableDataInterfaceBinding
	{
	public:
		struct FNiagaraVariable                                    BoundVariable;                                           // 0x0000(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraMaterialAttributeBinding
	 * Size -> 0x002C
	 */
	struct FNiagaraMaterialAttributeBinding
	{
	public:
		class FName                                                MaterialParameterName;                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariableBase                                NiagaraVariable;                                         // 0x0008(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariableBase                                ResolvedNiagaraVariable;                                 // 0x0014(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariableBase                                NiagaraChildVariable;                                    // 0x0020(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemScalabilityOverride
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
	{
	public:
		unsigned char                                              bOverrideDistanceSettings : 1;                           // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideInstanceCountSettings : 1;                      // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverridePerSystemInstanceCountSettings : 1;             // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideTimeSinceRendererSettings : 1;                  // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PEXV[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterHandle
	 * Size -> 0x0030
	 */
	struct FNiagaraEmitterHandle
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                IdName;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       BIsEnabled;                                              // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5H4A[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x001C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U8HK[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraEmitter*                                     Instance;                                                // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterDataSetBinding
	 * Size -> 0x0008
	 */
	struct FNiagaraParameterDataSetBinding
	{
	public:
		int32_t                                                    ParameterOffset;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DataSetComponentOffset;                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
	 * Size -> 0x0020
	 */
	struct FNiagaraParameterDataSetBindingCollection
	{
	public:
		TArray<struct FNiagaraParameterDataSetBinding>             FloatOffsets;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraParameterDataSetBinding>             Int32Offsets;                                            // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemCompiledData
	 * Size -> 0x0218
	 */
	struct FNiagaraSystemCompiledData
	{
	public:
		struct FNiagaraParameterStore                              InstanceParamStore;                                      // 0x0000(0x0078) NativeAccessSpecifierPublic
		struct FNiagaraDataSetCompiledData                         DataSetCompiledData;                                     // 0x0078(0x0040) NativeAccessSpecifierPublic
		struct FNiagaraDataSetCompiledData                         SpawnInstanceParamsDataSetCompiledData;                  // 0x00B8(0x0040) NativeAccessSpecifierPublic
		struct FNiagaraDataSetCompiledData                         UpdateInstanceParamsDataSetCompiledData;                 // 0x00F8(0x0040) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           SpawnInstanceGlobalBinding;                              // 0x0138(0x0020) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           SpawnInstanceSystemBinding;                              // 0x0158(0x0020) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           SpawnInstanceOwnerBinding;                               // 0x0178(0x0020) NativeAccessSpecifierPublic
		TArray<struct FNiagaraParameterDataSetBindingCollection>   SpawnInstanceEmitterBindings;                            // 0x0198(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           UpdateInstanceGlobalBinding;                             // 0x01A8(0x0020) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           UpdateInstanceSystemBinding;                             // 0x01C8(0x0020) NativeAccessSpecifierPublic
		struct FNiagaraParameterDataSetBindingCollection           UpdateInstanceOwnerBinding;                              // 0x01E8(0x0020) NativeAccessSpecifierPublic
		TArray<struct FNiagaraParameterDataSetBindingCollection>   UpdateInstanceEmitterBindings;                           // 0x0208(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FNiagaraVariable                                    Parameter;                                               // 0x0020(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
	 * Size -> 0x0090 (FullSize[0x00D0] - InheritedSize[0x0040])
	 */
	struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneBoolChannel                              BoolChannel;                                             // 0x0040(0x0090) NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
	 * Size -> 0x0280 (FullSize[0x02C0] - InheritedSize[0x0040])
	 */
	struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneFloatChannel                             RedChannel;                                              // 0x0040(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             GreenChannel;                                            // 0x00E0(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             BlueChannel;                                             // 0x0180(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             AlphaChannel;                                            // 0x0220(0x00A0) NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
	 * Size -> 0x00A0 (FullSize[0x00E0] - InheritedSize[0x0040])
	 */
	struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneFloatChannel                             FloatChannel;                                            // 0x0040(0x00A0) NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
	 * Size -> 0x0090 (FullSize[0x00D0] - InheritedSize[0x0040])
	 */
	struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneIntegerChannel                           IntegerChannel;                                          // 0x0040(0x0090) NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
	{
	public:
		struct FFrameNumber                                        SpawnSectionStartFrame;                                  // 0x0010(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFrameNumber                                        SpawnSectionEndFrame;                                    // 0x0014(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		Niagara_ENiagaraSystemSpawnSectionStartBehavior            SpawnSectionStartBehavior;                               // 0x0018(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PC8Y[0x3];                                   // 0x0018(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior         SpawnSectionEvaluateBehavior;                            // 0x001C(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AHWV[0x3];                                   // 0x001C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		Niagara_ENiagaraSystemSpawnSectionEndBehavior              SpawnSectionEndBehavior;                                 // 0x0020(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X68Q[0x3];                                   // 0x0020(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		Niagara_ENiagaraAgeUpdateMode                              AgeUpdateMode;                                           // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A921[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
	{
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
	 * Size -> 0x0288 (FullSize[0x02C8] - InheritedSize[0x0040])
	 */
	struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneFloatChannel                             VectorChannels[0x4];                                     // 0x0040(0x0280) NativeAccessSpecifierPrivate
		int32_t                                                    ChannelsUsed;                                            // 0x02C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EYJQ[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraRandInfo
	 * Size -> 0x000C
	 */
	struct FNiagaraRandInfo
	{
	public:
		int32_t                                                    Seed1;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed2;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed3;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptVariableBinding
	 * Size -> 0x0008
	 */
	struct FNiagaraScriptVariableBinding
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableInfo
	 * Size -> 0x0040
	 */
	struct FNiagaraVariableInfo
	{
	public:
		struct FNiagaraVariable                                    Variable;                                                // 0x0000(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Definition;                                              // 0x0020(0x0018) NativeAccessSpecifierPublic
		class UNiagaraDataInterface*                               DataInterface;                                           // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemUpdateContext
	 * Size -> 0x0048
	 */
	struct FNiagaraSystemUpdateContext
	{
	public:
		TArray<class UNiagaraComponent*>                           ComponentsToReset;                                       // 0x0000(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UNiagaraComponent*>                           ComponentsToReInit;                                      // 0x0010(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UNiagaraComponent*>                           ComponentsToNotifySimDestroy;                            // 0x0020(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UNiagaraSystem*>                              SystemSimsToDestroy;                                     // 0x0030(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HC4Y[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraFunctionSignature
	 * Size -> 0x0090
	 */
	struct FNiagaraFunctionSignature
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariable>                            Inputs;                                                  // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariable>                            Outputs;                                                 // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                OwnerName;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRequiresContext : 1;                                    // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRequiresExecPin : 1;                                    // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMemberFunction : 1;                                     // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bExperimental : 1;                                       // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsCPU : 1;                                        // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsGPU : 1;                                        // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWriteFunction : 1;                                      // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSoftDeprecatedFunction : 1;                             // 0x0030(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y2NG[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ModuleUsageBitmask;                                      // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ContextStageMinIndex;                                    // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ContextStageMaxIndex;                                    // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, class FName>                             FunctionSpecifiers;                                      // 0x0040(0x0050) NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterNameSettingsRef
	 * Size -> 0x0018
	 */
	struct FNiagaraEmitterNameSettingsRef
	{
	public:
		class FName                                                SystemName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EmitterName;                                             // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.BasicParticleData
	 * Size -> 0x001C
	 */
	struct FBasicParticleData
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Size;                                                    // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.MeshTriCoordinate
	 * Size -> 0x0010
	 */
	struct FMeshTriCoordinate
	{
	public:
		int32_t                                                    Tri;                                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BaryCoord;                                               // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraGraphViewSettings
	 * Size -> 0x0010
	 */
	struct FNiagaraGraphViewSettings
	{
	public:
		struct FVector2D                                           Location;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Zoom;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsValid;                                                // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YCVW[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraCollisionEventPayload
	 * Size -> 0x002C
	 */
	struct FNiagaraCollisionEventPayload
	{
	public:
		struct FVector                                             CollisionPos;                                            // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CollisionNormal;                                         // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CollisionVelocity;                                       // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParticleIndex;                                           // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalMaterialIndex;                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraParameters
	 * Size -> 0x0010
	 */
	struct FNiagaraParameters
	{
	public:
		TArray<struct FNiagaraVariable>                            Parameters;                                              // 0x0000(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
	 * Size -> 0x000C
	 */
	struct FNiagaraPlatformSetConflictEntry
	{
	public:
		class FName                                                ProfileName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    QualityLevelMask;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
	 * Size -> 0x0018
	 */
	struct FNiagaraPlatformSetConflictInfo
	{
	public:
		int32_t                                                    SetAIndex;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SetBIndex;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraPlatformSetConflictEntry>            Conflicts;                                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraScalabilityManager
	 * Size -> 0x0040
	 */
	struct FNiagaraScalabilityManager
	{
	public:
		class UNiagaraEffectType*                                  EffectType;                                              // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UNiagaraComponent*>                           ManagedComponents;                                       // 0x0008(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SXBE[0x28];                                  // 0x0018(0x0028) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraModuleDependency
	 * Size -> 0x0028
	 */
	struct FNiagaraModuleDependency
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Niagara_ENiagaraModuleDependencyType                       Type;                                                    // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Niagara_ENiagaraModuleDependencyScriptConstraint           ScriptConstraint;                                        // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LKJK[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0010(0x0018) Edit, AssetRegistrySearchable, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptInstanceParameterStore
	 * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
	 */
	struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
	{
	public:
		unsigned char                                              UnknownData_D0S8[0x10];                                  // 0x0078(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptHighlight
	 * Size -> 0x0028
	 */
	struct FNiagaraScriptHighlight
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0010(0x0018) Edit, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemCompileRequest
	 * Size -> 0x0080
	 */
	struct FNiagaraSystemCompileRequest
	{
	public:
		unsigned char                                              UnknownData_28Q5[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     RootObjects;                                             // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_08V7[0x68];                                  // 0x0018(0x0068) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.EmitterCompiledScriptPair
	 * Size -> 0x0078
	 */
	struct FEmitterCompiledScriptPair
	{
	public:
		unsigned char                                              UnknownData_JWUH[0x78];                                  // 0x0000(0x0078) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterCompiledData
	 * Size -> 0x0130
	 */
	struct FNiagaraEmitterCompiledData
	{
	public:
		TArray<class FName>                                        SpawnAttributes;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterSpawnIntervalVar;                                 // 0x0010(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterInterpSpawnStartDTVar;                            // 0x0030(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterSpawnGroupVar;                                    // 0x0050(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterAgeVar;                                           // 0x0070(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterRandomSeedVar;                                    // 0x0090(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterInstanceSeedVar;                                  // 0x00B0(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    EmitterTotalSpawnedParticlesVar;                         // 0x00D0(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraDataSetCompiledData                         DataSetCompiledData;                                     // 0x00F0(0x0040) NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraInputConditionMetadata
	 * Size -> 0x0018
	 */
	struct FNiagaraInputConditionMetadata
	{
	public:
		class FName                                                InputName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      TargetValues;                                            // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableMetaData
	 * Size -> 0x00F0
	 */
	struct FNiagaraVariableMetaData
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                CategoryName;                                            // 0x0018(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bAdvancedDisplay;                                        // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5TVG[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EditorSortPriority;                                      // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInlineEditConditionToggle;                              // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XYD[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraInputConditionMetadata                      EditCondition;                                           // 0x0040(0x0018) Edit, NativeAccessSpecifierPublic
		struct FNiagaraInputConditionMetadata                      VisibleCondition;                                        // 0x0058(0x0018) Edit, NativeAccessSpecifierPublic
		TMap<class FName, class FString>                           PropertyMetaData;                                        // 0x0070(0x0050) Edit, NativeAccessSpecifierPublic
		class FName                                                ParentAttribute;                                         // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ScopeName;                                               // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		Niagara_ENiagaraScriptParameterUsage                       Usage;                                                   // 0x00D0(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y7C7[0x3];                                   // 0x00D0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bIsStaticSwitch;                                         // 0x00D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1MMN[0x3];                                   // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StaticSwitchDefaultValue;                                // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAddedToNodeGraphDeepCopy;                               // 0x00DC(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bOutputIsPersistent;                                     // 0x00DD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2IT6[0x2];                                   // 0x00DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CachedNamespacelessVariableName;                         // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCreatedInSystemEditor;                                  // 0x00E8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseLegacyNameString;                                    // 0x00E9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0OYQ[0x6];                                   // 0x00EA(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterScopeInfo
	 * Size -> 0x0018
	 */
	struct FNiagaraParameterScopeInfo
	{
	public:
		Niagara_ENiagaraParameterScope                             Scope;                                                   // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XY66[0x3];                                   // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_Z8YI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NamespaceString;                                         // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
	 * Size -> 0x0030
	 */
	struct FNiagaraCompileHashVisitorDebugInfo
	{
	public:
		class FString                                              Object;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      PropertyKeys;                                            // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      PropertyValues;                                          // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraID
	 * Size -> 0x0008
	 */
	struct FNiagaraID
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AcquireTag;                                              // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraSpawnInfo
	 * Size -> 0x0010
	 */
	struct FNiagaraSpawnInfo
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpStartDt;                                           // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IntervalDt;                                              // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnGroup;                                              // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraMatrix
	 * Size -> 0x0040
	 */
	struct FNiagaraMatrix
	{
	public:
		struct FVector4                                            Row0;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Row1;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Row2;                                                    // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Row3;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterMap
	 * Size -> 0x0001
	 */
	struct FNiagaraParameterMap
	{
	public:
		unsigned char                                              UnknownData_8YTG[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraNumeric
	 * Size -> 0x0001
	 */
	struct FNiagaraNumeric
	{
	public:
		unsigned char                                              UnknownData_0QEB[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraHalfVector4
	 * Size -> 0x0008
	 */
	struct FNiagaraHalfVector4
	{
	public:
		uint16_t                                                   X;                                                       // 0x0000(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Y;                                                       // 0x0002(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Z;                                                       // 0x0004(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   W;                                                       // 0x0006(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraHalfVector3
	 * Size -> 0x0006
	 */
	struct FNiagaraHalfVector3
	{
	public:
		uint16_t                                                   X;                                                       // 0x0000(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Y;                                                       // 0x0002(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Z;                                                       // 0x0004(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraHalfVector2
	 * Size -> 0x0004
	 */
	struct FNiagaraHalfVector2
	{
	public:
		uint16_t                                                   X;                                                       // 0x0000(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Y;                                                       // 0x0002(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraHalf
	 * Size -> 0x0002
	 */
	struct FNiagaraHalf
	{
	public:
		uint16_t                                                   Value;                                                   // 0x0000(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraBool
	 * Size -> 0x0004
	 */
	struct FNiagaraBool
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.NiagaraInt32
	 * Size -> 0x0004
	 */
	struct FNiagaraInt32
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraFloat
	 * Size -> 0x0004
	 */
	struct FNiagaraFloat
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraVariant
	 * Size -> 0x0028
	 */
	struct FNiagaraVariant
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNiagaraDataInterface*                               DataInterface;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      Bytes;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		Niagara_ENiagaraVariantMode                                CurrentMode;                                             // 0x0020(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ADHN[0x3];                                   // 0x0020(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_HS73[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraWorldManagerTickFunction
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FNiagaraWorldManagerTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_8JPS[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
	 * Size -> 0x0010
	 */
	struct FNiagaraSystemScalabilityOverrides
	{
	public:
		TArray<struct FNiagaraSystemScalabilityOverride>           Overrides;                                               // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
