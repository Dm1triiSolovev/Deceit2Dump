// Class Water.BuoyancyComponent
// Size: 0x210 (Inherited: 0xb0)
struct UBuoyancyComponent : UActorComponent {
	struct TArray<struct FSphericalPontoon> Pontoons; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnEnteredWaterDelegate; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnExitedWaterDelegate; // 0xd0(0x10)
	struct FBuoyancyData BuoyancyData; // 0xe0(0x88)
	struct TArray<struct UWaterBodyComponent*> CurrentWaterBodyComponents; // 0x168(0x10)
	struct UPrimitiveComponent* SimulatingComponent; // 0x178(0x08)
	char pad_180[0x90]; // 0x180(0x90)

	void OnPontoonExitedWater(struct FSphericalPontoon& Pontoon); // Function Water.BuoyancyComponent.OnPontoonExitedWater // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10ba870
	void OnPontoonEnteredWater(struct FSphericalPontoon& Pontoon); // Function Water.BuoyancyComponent.OnPontoonEnteredWater // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10ba7a0
	bool IsOverlappingWaterBody(); // Function Water.BuoyancyComponent.IsOverlappingWaterBody // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10ba770
	bool IsInWaterBody(); // Function Water.BuoyancyComponent.IsInWaterBody // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10ba740
	void GetLastWaterSurfaceInfo(struct FVector& OutWaterPlaneLocation, struct FVector& OutWaterPlaneNormal, struct FVector& OutWaterSurfacePosition, float& OutWaterDepth, int32_t& OutWaterBodyIdx, struct FVector& OutWaterVelocity); // Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x10b9d60
	struct TArray<struct UWaterBodyComponent*> GetCurrentWaterBodyComponents(); // Function Water.BuoyancyComponent.GetCurrentWaterBodyComponents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10b9ab0
};

// Class Water.BuoyancyManager
// Size: 0x330 (Inherited: 0x278)
struct ABuoyancyManager : AActor {
	char pad_278[0x50]; // 0x278(0x50)
	struct TArray<struct UBuoyancyComponent*> BuoyancyComponents; // 0x2c8(0x10)
	char pad_2D8[0x58]; // 0x2d8(0x58)

	bool GetBuoyancyComponentManager(struct UObject* WorldContextObject, struct ABuoyancyManager*& Manager); // Function Water.BuoyancyManager.GetBuoyancyComponentManager // (Final|Native|Static|Public|HasOutParms) // @ game+0x10b9950
};

// Class Water.EnvQueryTest_InsideWaterBody
// Size: 0x200 (Inherited: 0x1f8)
struct UEnvQueryTest_InsideWaterBody : UEnvQueryTest {
	bool bIncludeWaves; // 0x1f8(0x01)
	bool bSimpleWaves; // 0x1f9(0x01)
	bool bIgnoreExclusionVolumes; // 0x1fa(0x01)
	char pad_1FB[0x5]; // 0x1fb(0x05)
};

// Class Water.GerstnerWaterWaveGeneratorBase
// Size: 0x28 (Inherited: 0x28)
struct UGerstnerWaterWaveGeneratorBase : UObject {

	void GenerateGerstnerWaves(struct TArray<struct FGerstnerWave>& OutWaves); // Function Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x10b9800
};

// Class Water.GerstnerWaterWaveGeneratorSimple
// Size: 0x60 (Inherited: 0x28)
struct UGerstnerWaterWaveGeneratorSimple : UGerstnerWaterWaveGeneratorBase {
	int32_t NumWaves; // 0x28(0x04)
	int32_t Seed; // 0x2c(0x04)
	float Randomness; // 0x30(0x04)
	float MinWavelength; // 0x34(0x04)
	float MaxWavelength; // 0x38(0x04)
	float WavelengthFalloff; // 0x3c(0x04)
	float MinAmplitude; // 0x40(0x04)
	float MaxAmplitude; // 0x44(0x04)
	float AmplitudeFalloff; // 0x48(0x04)
	float WindAngleDeg; // 0x4c(0x04)
	float DirectionAngularSpreadDeg; // 0x50(0x04)
	float SmallWaveSteepness; // 0x54(0x04)
	float LargeWaveSteepness; // 0x58(0x04)
	float SteepnessFalloff; // 0x5c(0x04)
};

// Class Water.GerstnerWaterWaveGeneratorSpectrum
// Size: 0x40 (Inherited: 0x28)
struct UGerstnerWaterWaveGeneratorSpectrum : UGerstnerWaterWaveGeneratorBase {
	enum class EWaveSpectrumType SpectrumType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FGerstnerWaveOctave> Octaves; // 0x30(0x10)
};

// Class Water.WaterWavesBase
// Size: 0x28 (Inherited: 0x28)
struct UWaterWavesBase : UObject {
};

// Class Water.WaterWaves
// Size: 0x28 (Inherited: 0x28)
struct UWaterWaves : UWaterWavesBase {
};

// Class Water.GerstnerWaterWaves
// Size: 0x48 (Inherited: 0x28)
struct UGerstnerWaterWaves : UWaterWaves {
	struct UGerstnerWaterWaveGeneratorBase* GerstnerWaveGenerator; // 0x28(0x08)
	struct TArray<struct FGerstnerWave> GerstnerWaves; // 0x30(0x10)
	float MaxWaveHeight; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Water.GerstnerWaterWaveSubsystem
// Size: 0x48 (Inherited: 0x30)
struct UGerstnerWaterWaveSubsystem : UEngineSubsystem {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class Water.LakeCollisionComponent
// Size: 0x560 (Inherited: 0x540)
struct ULakeCollisionComponent : UPrimitiveComponent {
	struct UBodySetup* CachedBodySetup; // 0x540(0x08)
	struct FVector BoxExtent; // 0x548(0x18)
};

// Class Water.NiagaraDataInterfaceWater
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceWater : UNiagaraDataInterface {
	struct UWaterBodyComponent* SourceBodyComponent; // 0x38(0x08)
};

// Class Water.NiagaraWaterFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraWaterFunctionLibrary : UBlueprintFunctionLibrary {

	void SetWaterBodyComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UWaterBodyComponent* WaterBodyComponent); // Function Water.NiagaraWaterFunctionLibrary.SetWaterBodyComponent // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x10bac00
	void SetWaterBody(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct AWaterBody* WaterBody); // Function Water.NiagaraWaterFunctionLibrary.SetWaterBody // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x10baae0
};

// Class Water.OceanCollisionComponent
// Size: 0x580 (Inherited: 0x540)
struct UOceanCollisionComponent : UPrimitiveComponent {
	struct UBodySetup* CachedBodySetup; // 0x540(0x08)
	char pad_548[0x38]; // 0x548(0x38)
};

// Class Water.OceanBoxCollisionComponent
// Size: 0x580 (Inherited: 0x580)
struct UOceanBoxCollisionComponent : UBoxComponent {
};

// Class Water.WaterBody
// Size: 0x2a8 (Inherited: 0x278)
struct AWaterBody : AActor {
	char pad_278[0x8]; // 0x278(0x08)
	struct UWaterSplineComponent* SplineComp; // 0x280(0x08)
	struct UWaterSplineMetadata* WaterSplineMetadata; // 0x288(0x08)
	struct UWaterBodyComponent* WaterBodyComponent; // 0x290(0x08)
	int32_t WaterBodyIndex; // 0x298(0x04)
	enum class EWaterBodyType WaterBodyType; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct UWaterWavesBase* WaterWaves; // 0x2a0(0x08)

	void SetWaterWaves(struct UWaterWavesBase* InWaterWaves); // Function Water.WaterBody.SetWaterWaves // (Final|Native|Public|BlueprintCallable) // @ game+0x10badb0
	void SetWaterMaterial(struct UMaterialInterface* InMaterial); // Function Water.WaterBody.SetWaterMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x10bad20
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged); // Function Water.WaterBody.OnWaterBodyChanged // (Final|Native|Public|BlueprintCallable) // @ game+0x10ba940
	struct FVector GetWaterVelocityVectorAtSplineInputKey(float InKey); // Function Water.WaterBody.GetWaterVelocityVectorAtSplineInputKey // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x10ba660
	float GetWaterVelocityAtSplineInputKey(float InKey); // Function Water.WaterBody.GetWaterVelocityAtSplineInputKey // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10ba520
	struct UWaterSplineComponent* GetWaterSpline(); // Function Water.WaterBody.GetWaterSpline // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10ba280
	struct UMaterialInstanceDynamic* GetWaterMaterialInstance(); // Function Water.WaterBody.GetWaterMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x10ba210
	enum class EWaterBodyType GetWaterBodyType(); // Function Water.WaterBody.GetWaterBodyType // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10ba1c0
	struct UWaterBodyComponent* GetWaterBodyComponent(); // Function Water.WaterBody.GetWaterBodyComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10ba1a0
	struct UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance(); // Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x10ba050
	struct UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance(); // Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x10b9fe0
	struct TArray<struct AWaterBodyIsland*> GetIslands(); // Function Water.WaterBody.GetIslands // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10b9c50
	struct TArray<struct AWaterBodyExclusionVolume*> GetExclusionVolumes(); // Function Water.WaterBody.GetExclusionVolumes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10b9b40
	float GetAudioIntensityAtSplineInputKey(float InKey); // Function Water.WaterBody.GetAudioIntensityAtSplineInputKey // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10b98b0
};

// Class Water.WaterBodyGenerator
// Size: 0x28 (Inherited: 0x28)
struct UWaterBodyGenerator : UObject {
};

// Class Water.WaterBodyComponent
// Size: 0x13b0 (Inherited: 0x540)
struct UWaterBodyComponent : UPrimitiveComponent {
	struct UPhysicalMaterial* PhysicalMaterial; // 0x540(0x08)
	float TargetWaveMaskDepth; // 0x548(0x04)
	float MaxWaveHeightOffset; // 0x54c(0x04)
	bool bFillCollisionUnderWaterBodiesForNavmesh; // 0x550(0x01)
	char pad_551[0xf]; // 0x551(0x0f)
	struct FUnderwaterPostProcessSettings UnderwaterPostProcessSettings; // 0x560(0x6e0)
	struct FWaterCurveSettings CurveSettings; // 0xc40(0x20)
	struct UMaterialInterface* WaterMaterial; // 0xc60(0x08)
	struct UMaterialInterface* UnderwaterPostProcessMaterial; // 0xc68(0x08)
	float ShapeDilation; // 0xc70(0x04)
	float CollisionHeightOffset; // 0xc74(0x04)
	bool bAffectsLandscape; // 0xc78(0x01)
	bool bGenerateCollisions; // 0xc79(0x01)
	char pad_C7A[0x2]; // 0xc7a(0x02)
	int32_t WaterBodyIndex; // 0xc7c(0x04)
	struct UStaticMesh* WaterMeshOverride; // 0xc80(0x08)
	int32_t OverlapMaterialPriority; // 0xc88(0x04)
	struct FName CollisionProfileName; // 0xc8c(0x08)
	char pad_C94[0x4]; // 0xc94(0x04)
	struct UWaterSplineMetadata* WaterSplineMetadata; // 0xc98(0x08)
	struct UMaterialInstanceDynamic* WaterMID; // 0xca0(0x08)
	struct UMaterialInstanceDynamic* UnderwaterPostProcessMID; // 0xca8(0x08)
	struct TArray<LazyObjectProperty> Islands; // 0xcb0(0x10)
	struct TArray<LazyObjectProperty> ExclusionVolumes; // 0xcc0(0x10)
	struct TWeakObjectPtr<struct ALandscapeProxy> Landscape; // 0xcd0(0x08)
	char pad_CD8[0x8]; // 0xcd8(0x08)
	struct FPostProcessSettings CurrentPostProcessSettings; // 0xce0(0x6c0)
	bool bCanAffectNavigation; // 0x13a0(0x01)
	char pad_13A1[0x7]; // 0x13a1(0x07)
	struct UNavAreaBase* WaterNavAreaClass; // 0x13a8(0x08)

	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged); // Function Water.WaterBodyComponent.OnWaterBodyChanged // (Final|Native|Public|BlueprintCallable) // @ game+0x10baa10
	struct UWaterWavesBase* GetWaterWaves(); // Function Water.WaterBodyComponent.GetWaterWaves // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10ba710
	float GetWaterVelocityAtSplineInputKey(float InKey); // Function Water.WaterBodyComponent.GetWaterVelocityAtSplineInputKey // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10ba5c0
	void GetWaterSurfaceInfoAtLocation(struct FVector& InLocation, struct FVector& OutWaterSurfaceLocation, struct FVector& OutWaterSurfaceNormal, struct FVector& OutWaterVelocity, float& OutWaterDepth, bool bIncludeDepth); // Function Water.WaterBodyComponent.GetWaterSurfaceInfoAtLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x10ba2d0
	struct UWaterSplineComponent* GetWaterSpline(); // Function Water.WaterBodyComponent.GetWaterSpline // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10ba2a0
	struct UMaterialInstanceDynamic* GetWaterMaterialInstance(); // Function Water.WaterBodyComponent.GetWaterMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x10ba250
	struct UMaterialInterface* GetWaterMaterial(); // Function Water.WaterBodyComponent.GetWaterMaterial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10ba1f0
	struct AWaterBody* GetWaterBodyActor(); // Function Water.WaterBodyComponent.GetWaterBodyActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10ba170
	struct UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance(); // Function Water.WaterBodyComponent.GetUnderwaterPostProcessMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x10ba140
	struct TArray<struct UPrimitiveComponent*> GetStandardRenderableComponents(); // Function Water.WaterBodyComponent.GetStandardRenderableComponents // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10ba0c0
	struct UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance(); // Function Water.WaterBodyComponent.GetRiverToOceanTransitionMaterialInstance // (Native|Public|BlueprintCallable) // @ game+0x10ba090
	struct UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance(); // Function Water.WaterBodyComponent.GetRiverToLakeTransitionMaterialInstance // (Native|Public|BlueprintCallable) // @ game+0x10ba020
	float GetMaxWaveHeight(); // Function Water.WaterBodyComponent.GetMaxWaveHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10b9fb0
	struct TArray<struct AWaterBodyIsland*> GetIslands(); // Function Water.WaterBodyComponent.GetIslands // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10b9ce0
	struct TArray<struct AWaterBodyExclusionVolume*> GetExclusionVolumes(); // Function Water.WaterBodyComponent.GetExclusionVolumes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10b9bd0
	struct TArray<struct UPrimitiveComponent*> GetCollisionComponents(); // Function Water.WaterBodyComponent.GetCollisionComponents // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10b9a30
};

// Class Water.CustomMeshGenerator
// Size: 0x30 (Inherited: 0x28)
struct UCustomMeshGenerator : UWaterBodyGenerator {
	struct UStaticMeshComponent* MeshComp; // 0x28(0x08)
};

// Class Water.WaterBodyCustom
// Size: 0x2a8 (Inherited: 0x2a8)
struct AWaterBodyCustom : AWaterBody {
};

// Class Water.WaterBodyCustomComponent
// Size: 0x13c0 (Inherited: 0x13b0)
struct UWaterBodyCustomComponent : UWaterBodyComponent {
	struct UStaticMeshComponent* MeshComp; // 0x13b0(0x08)
	char pad_13B8[0x8]; // 0x13b8(0x08)
};

// Class Water.WaterBodyExclusionVolume
// Size: 0x2d8 (Inherited: 0x2c0)
struct AWaterBodyExclusionVolume : APhysicsVolume {
	bool bIgnoreAllOverlappingWaterBodies; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct TArray<struct AWaterBody*> WaterBodiesToIgnore; // 0x2c8(0x10)
};

// Class Water.WaterBodyIsland
// Size: 0x288 (Inherited: 0x278)
struct AWaterBodyIsland : AActor {
	char pad_278[0x8]; // 0x278(0x08)
	struct UWaterSplineComponent* SplineComp; // 0x280(0x08)

	struct UWaterSplineComponent* GetWaterSpline(); // Function Water.WaterBodyIsland.GetWaterSpline // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10ba280
};

// Class Water.LakeGenerator
// Size: 0x40 (Inherited: 0x28)
struct ULakeGenerator : UWaterBodyGenerator {
	struct UStaticMeshComponent* LakeMeshComp; // 0x28(0x08)
	struct UBoxComponent* LakeCollisionComp; // 0x30(0x08)
	struct ULakeCollisionComponent* LakeCollision; // 0x38(0x08)
};

// Class Water.WaterBodyLake
// Size: 0x2a8 (Inherited: 0x2a8)
struct AWaterBodyLake : AWaterBody {
};

// Class Water.WaterBodyLakeComponent
// Size: 0x13c0 (Inherited: 0x13b0)
struct UWaterBodyLakeComponent : UWaterBodyComponent {
	struct UStaticMeshComponent* LakeMeshComp; // 0x13b0(0x08)
	struct ULakeCollisionComponent* LakeCollision; // 0x13b8(0x08)
};

// Class Water.OceanGenerator
// Size: 0x48 (Inherited: 0x28)
struct UOceanGenerator : UWaterBodyGenerator {
	struct TArray<struct UOceanBoxCollisionComponent*> CollisionBoxes; // 0x28(0x10)
	struct TArray<struct UOceanCollisionComponent*> CollisionHullSets; // 0x38(0x10)
};

// Class Water.WaterBodyOcean
// Size: 0x2a8 (Inherited: 0x2a8)
struct AWaterBodyOcean : AWaterBody {
};

// Class Water.WaterBodyOceanComponent
// Size: 0x13f0 (Inherited: 0x13b0)
struct UWaterBodyOceanComponent : UWaterBodyComponent {
	struct TArray<struct UOceanBoxCollisionComponent*> CollisionBoxes; // 0x13b0(0x10)
	struct TArray<struct UOceanCollisionComponent*> CollisionHullSets; // 0x13c0(0x10)
	struct FVector CollisionExtents; // 0x13d0(0x18)
	float HeightOffset; // 0x13e8(0x04)
	char pad_13EC[0x4]; // 0x13ec(0x04)
};

// Class Water.RiverGenerator
// Size: 0x38 (Inherited: 0x28)
struct URiverGenerator : UWaterBodyGenerator {
	struct TArray<struct USplineMeshComponent*> SplineMeshComponents; // 0x28(0x10)
};

// Class Water.WaterBodyRiver
// Size: 0x2a8 (Inherited: 0x2a8)
struct AWaterBodyRiver : AWaterBody {
};

// Class Water.WaterBodyRiverComponent
// Size: 0x13e0 (Inherited: 0x13b0)
struct UWaterBodyRiverComponent : UWaterBodyComponent {
	struct TArray<struct USplineMeshComponent*> SplineMeshComponents; // 0x13b0(0x10)
	struct UMaterialInterface* LakeTransitionMaterial; // 0x13c0(0x08)
	struct UMaterialInstanceDynamic* LakeTransitionMID; // 0x13c8(0x08)
	struct UMaterialInterface* OceanTransitionMaterial; // 0x13d0(0x08)
	struct UMaterialInstanceDynamic* OceanTransitionMID; // 0x13d8(0x08)
};

// Class Water.WaterBrushActorInterface
// Size: 0x28 (Inherited: 0x28)
struct UWaterBrushActorInterface : UInterface {
};

// Class Water.WaterMeshComponent
// Size: 0x6c0 (Inherited: 0x570)
struct UWaterMeshComponent : UMeshComponent {
	int32_t ForceCollapseDensityLevel; // 0x568(0x04)
	struct UMaterialInterface* FarDistanceMaterial; // 0x570(0x08)
	float FarDistanceMeshExtent; // 0x578(0x04)
	struct FVector RTWorldLocation; // 0x580(0x18)
	struct FVector RTWorldSizeVector; // 0x598(0x18)
	float TileSize; // 0x5b0(0x04)
	struct FIntPoint ExtentInTiles; // 0x5b4(0x08)
	char pad_5BC[0x9c]; // 0x5bc(0x9c)
	struct TSet<struct UMaterialInterface*> UsedMaterials; // 0x658(0x50)
	char pad_6A8[0x10]; // 0x6a8(0x10)
	int32_t TessellationFactor; // 0x6b8(0x04)
	float LODScale; // 0x6bc(0x04)

	bool IsEnabled(); // Function Water.WaterMeshComponent.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10bd4b0
};

// Class Water.WaterRuntimeSettings
// Size: 0x98 (Inherited: 0x38)
struct UWaterRuntimeSettings : UDeveloperSettings {
	enum class ECollisionChannel CollisionChannelForWaterTraces; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TSoftObjectPtr<UMaterialParameterCollection> MaterialParameterCollection; // 0x40(0x28)
	float WaterBodyIconWorldSize; // 0x68(0x04)
	float WaterBodyIconWorldZOffset; // 0x6c(0x04)
	struct FName DefaultWaterCollisionProfileName; // 0x70(0x08)
	struct UWaterBodyRiverComponent* WaterBodyRiverComponentClass; // 0x78(0x08)
	struct UWaterBodyLakeComponent* WaterBodyLakeComponentClass; // 0x80(0x08)
	struct UWaterBodyOceanComponent* WaterBodyOceanComponentClass; // 0x88(0x08)
	struct UWaterBodyCustomComponent* WaterBodyCustomComponentClass; // 0x90(0x08)
};

// Class Water.WaterSplineComponent
// Size: 0x660 (Inherited: 0x640)
struct UWaterSplineComponent : USplineComponent {
	struct FWaterSplineCurveDefaults WaterSplineDefaults; // 0x640(0x10)
	struct FWaterSplineCurveDefaults PreviousWaterSplineDefaults; // 0x650(0x10)
};

// Class Water.WaterSplineMetadata
// Size: 0xa0 (Inherited: 0x28)
struct UWaterSplineMetadata : USplineMetadata {
	struct FInterpCurveFloat Depth; // 0x28(0x18)
	struct FInterpCurveFloat WaterVelocityScalar; // 0x40(0x18)
	struct FInterpCurveFloat RiverWidth; // 0x58(0x18)
	struct FInterpCurveFloat AudioIntensity; // 0x70(0x18)
	struct FInterpCurveVector WaterVelocity; // 0x88(0x18)
};

// Class Water.WaterSubsystem
// Size: 0x108 (Inherited: 0x40)
struct UWaterSubsystem : UTickableWorldSubsystem {
	char pad_40[0x38]; // 0x40(0x38)
	struct ABuoyancyManager* BuoyancyManager; // 0x78(0x08)
	struct FMulticastInlineDelegate OnCameraUnderwaterStateChanged; // 0x80(0x10)
	struct FMulticastInlineDelegate OnWaterScalabilityChanged; // 0x90(0x10)
	struct UStaticMesh* DefaultRiverMesh; // 0xa0(0x08)
	struct UStaticMesh* DefaultLakeMesh; // 0xa8(0x08)
	struct AWaterZone* WaterZoneActor; // 0xb0(0x08)
	char pad_B8[0x28]; // 0xb8(0x28)
	struct UMaterialParameterCollection* MaterialParameterCollection; // 0xe0(0x08)
	char pad_E8[0x20]; // 0xe8(0x20)

	void SetOceanFloodHeight(float InFloodHeight); // Function Water.WaterSubsystem.SetOceanFloodHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x10bd640
	void PrintToWaterLog(struct FString Message, bool bWarning); // Function Water.WaterSubsystem.PrintToWaterLog // (Final|Native|Public|BlueprintCallable) // @ game+0x10bd560
	bool IsWaterRenderingEnabled(); // Function Water.WaterSubsystem.IsWaterRenderingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10bd530
	bool IsUnderwaterPostProcessEnabled(); // Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10bd500
	bool IsShallowWaterSimulationEnabled(); // Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10bd4d0
	float GetWaterTimeSeconds(); // Function Water.WaterSubsystem.GetWaterTimeSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10bd480
	float GetSmoothedWorldTimeSeconds(); // Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10bd450
	int32_t GetShallowWaterSimulationRenderTargetSize(); // Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10bd420
	int32_t GetShallowWaterMaxImpulseForces(); // Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10bd3f0
	int32_t GetShallowWaterMaxDynamicForces(); // Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10bd3c0
	float GetOceanTotalHeight(); // Function Water.WaterSubsystem.GetOceanTotalHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10bd370
	float GetOceanFloodHeight(); // Function Water.WaterSubsystem.GetOceanFloodHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10bd350
	float GetOceanBaseHeight(); // Function Water.WaterSubsystem.GetOceanBaseHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10bd320
	float GetCameraUnderwaterDepth(); // Function Water.WaterSubsystem.GetCameraUnderwaterDepth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10bd300
};

// Class Water.WaterWavesAsset
// Size: 0x30 (Inherited: 0x28)
struct UWaterWavesAsset : UObject {
	struct UWaterWaves* WaterWaves; // 0x28(0x08)
};

// Class Water.WaterWavesAssetReference
// Size: 0x30 (Inherited: 0x28)
struct UWaterWavesAssetReference : UWaterWavesBase {
	struct UWaterWavesAsset* WaterWavesAsset; // 0x28(0x08)
};

// Class Water.WaterZone
// Size: 0x290 (Inherited: 0x278)
struct AWaterZone : AActor {
	struct UTexture2D* WaterVelocityTexture; // 0x278(0x08)
	struct UBoxComponent* BoundsComponent; // 0x280(0x08)
	struct UWaterMeshComponent* WaterMesh; // 0x288(0x08)
};

