// Class HairStrandsCore.GroomActor
// Size: 0x280 (Inherited: 0x278)
struct AGroomActor : AActor {
	struct UGroomComponent* GroomComponent; // 0x278(0x08)
};

// Class HairStrandsCore.GroomAsset
// Size: 0xf8 (Inherited: 0x28)
struct UGroomAsset : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct FHairGroupInfoWithVisibility> HairGroupsInfo; // 0x30(0x10)
	struct TArray<struct FHairGroupsRendering> HairGroupsRendering; // 0x40(0x10)
	struct TArray<struct FHairGroupsPhysics> HairGroupsPhysics; // 0x50(0x10)
	struct TArray<struct FHairGroupsInterpolation> HairGroupsInterpolation; // 0x60(0x10)
	struct TArray<struct FHairGroupsLOD> HairGroupsLOD; // 0x70(0x10)
	struct TArray<struct FHairGroupsCardsSourceDescription> HairGroupsCards; // 0x80(0x10)
	struct TArray<struct FHairGroupsMeshesSourceDescription> HairGroupsMeshes; // 0x90(0x10)
	struct TArray<struct FHairGroupsMaterial> HairGroupsMaterials; // 0xa0(0x10)
	char pad_B0[0x10]; // 0xb0(0x10)
	bool EnableGlobalInterpolation; // 0xc0(0x01)
	enum class EGroomInterpolationType HairInterpolationType; // 0xc1(0x01)
	char pad_C2[0x2]; // 0xc2(0x02)
	struct FPerPlatformInt MinLOD; // 0xc4(0x04)
	struct FPerPlatformBool DisableBelowMinLodStripping; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct TArray<float> EffectiveLODBias; // 0xd0(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0xe0(0x10)
	char pad_F0[0x8]; // 0xf0(0x08)
};

// Class HairStrandsCore.GroomAssetImportData
// Size: 0x30 (Inherited: 0x28)
struct UGroomAssetImportData : UAssetImportData {
	struct UGroomImportOptions* ImportOptions; // 0x28(0x08)
};

// Class HairStrandsCore.GroomBindingAsset
// Size: 0xb0 (Inherited: 0x28)
struct UGroomBindingAsset : UObject {
	enum class EGroomBindingMeshType GroomBindingType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UGroomAsset* Groom; // 0x30(0x08)
	struct USkeletalMesh* SourceSkeletalMesh; // 0x38(0x08)
	struct USkeletalMesh* TargetSkeletalMesh; // 0x40(0x08)
	struct UGeometryCache* SourceGeometryCache; // 0x48(0x08)
	struct UGeometryCache* TargetGeometryCache; // 0x50(0x08)
	int32_t NumInterpolationPoints; // 0x58(0x04)
	int32_t MatchingSection; // 0x5c(0x04)
	struct TArray<struct FGoomBindingGroupInfo> GroupInfos; // 0x60(0x10)
	char pad_70[0x40]; // 0x70(0x40)
};

// Class HairStrandsCore.GroomBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGroomBlueprintLibrary : UBlueprintFunctionLibrary {

	struct UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(struct FString InDesiredPackagePath, struct UGroomAsset* InGroomAsset, struct USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, struct USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x19363c0
	struct UGroomBindingAsset* CreateNewGroomBindingAsset(struct UGroomAsset* InGroomAsset, struct USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, struct USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1936230
	struct UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAssetWithPath(struct FString DesiredPackagePath, struct UGroomAsset* GroomAsset, struct UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, struct UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x19363c0
	struct UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAsset(struct UGroomAsset* GroomAsset, struct UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, struct UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1936230
};

// Class HairStrandsCore.GroomCache
// Size: 0x68 (Inherited: 0x28)
struct UGroomCache : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FGroomCacheInfo GroomCacheInfo; // 0x30(0x28)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class HairStrandsCore.GroomCacheImportOptions
// Size: 0x50 (Inherited: 0x28)
struct UGroomCacheImportOptions : UObject {
	struct FGroomCacheImportSettings ImportSettings; // 0x28(0x28)
};

// Class HairStrandsCore.GroomCacheImportData
// Size: 0x50 (Inherited: 0x28)
struct UGroomCacheImportData : UAssetImportData {
	struct FGroomCacheImportSettings Settings; // 0x28(0x28)
};

// Class HairStrandsCore.GroomComponent
// Size: 0x7a0 (Inherited: 0x570)
struct UGroomComponent : UMeshComponent {
	struct UGroomAsset* GroomAsset; // 0x570(0x08)
	struct UGroomCache* GroomCache; // 0x578(0x08)
	struct TArray<struct UNiagaraComponent*> NiagaraComponents; // 0x580(0x10)
	struct USkeletalMesh* SourceSkeletalMesh; // 0x590(0x08)
	struct UGroomBindingAsset* BindingAsset; // 0x598(0x08)
	struct UPhysicsAsset* PhysicsAsset; // 0x5a0(0x08)
	char pad_5A8[0x10]; // 0x5a8(0x10)
	struct FHairSimulationSettings SimulationSettings; // 0x5b8(0x90)
	struct UMaterialInterface* Strands_DebugMaterial; // 0x648(0x08)
	struct UMaterialInterface* Strands_DefaultMaterial; // 0x650(0x08)
	struct UMaterialInterface* Cards_DefaultMaterial; // 0x658(0x08)
	struct UMaterialInterface* Meshes_DefaultMaterial; // 0x660(0x08)
	struct UNiagaraSystem* AngularSpringsSystem; // 0x668(0x08)
	struct UNiagaraSystem* CosseratRodsSystem; // 0x670(0x08)
	struct FString AttachmentName; // 0x678(0x10)
	char pad_688[0x88]; // 0x688(0x88)
	struct TArray<struct FHairGroupDesc> GroomGroupsDesc; // 0x710(0x10)
	bool bUseCards; // 0x720(0x01)
	bool bRunning; // 0x721(0x01)
	bool bLooping; // 0x722(0x01)
	bool bManualTick; // 0x723(0x01)
	float ElapsedTime; // 0x724(0x04)
	char pad_728[0x78]; // 0x728(0x78)

	void SetPhysicsAsset(struct UPhysicsAsset* InPhysicsAsset); // Function HairStrandsCore.GroomComponent.SetPhysicsAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x19368d0
	void SetHairLengthScaleEnable(bool bEnable); // Function HairStrandsCore.GroomComponent.SetHairLengthScaleEnable // (Final|Native|Public|BlueprintCallable) // @ game+0x1936840
	void SetHairLengthScale(float Scale); // Function HairStrandsCore.GroomComponent.SetHairLengthScale // (Final|Native|Public|BlueprintCallable) // @ game+0x19367c0
	void SetGroomAsset(struct UGroomAsset* Asset); // Function HairStrandsCore.GroomComponent.SetGroomAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x1936730
	void SetEnableSimulation(bool bInEnableSimulation); // Function HairStrandsCore.GroomComponent.SetEnableSimulation // (Final|Native|Public|BlueprintCallable) // @ game+0x19366a0
	void SetBindingAsset(struct UGroomBindingAsset* InBinding); // Function HairStrandsCore.GroomComponent.SetBindingAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x1936610
	void ResetSimulation(); // Function HairStrandsCore.GroomComponent.ResetSimulation // (Final|Native|Public|BlueprintCallable) // @ game+0x19365f0
	void ResetCollisionComponents(); // Function HairStrandsCore.GroomComponent.ResetCollisionComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x19365d0
	bool GetIsHairLengthScaleEnabled(); // Function HairStrandsCore.GroomComponent.GetIsHairLengthScaleEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x19365a0
	void AddCollisionComponent(struct USkeletalMeshComponent* SkeletalMeshComponent); // Function HairStrandsCore.GroomComponent.AddCollisionComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x19361a0
};

// Class HairStrandsCore.GroomCreateBindingOptions
// Size: 0x58 (Inherited: 0x28)
struct UGroomCreateBindingOptions : UObject {
	enum class EGroomBindingMeshType GroomBindingType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct USkeletalMesh* SourceSkeletalMesh; // 0x30(0x08)
	struct USkeletalMesh* TargetSkeletalMesh; // 0x38(0x08)
	struct UGeometryCache* SourceGeometryCache; // 0x40(0x08)
	struct UGeometryCache* TargetGeometryCache; // 0x48(0x08)
	int32_t NumInterpolationPoints; // 0x50(0x04)
	int32_t MatchingSection; // 0x54(0x04)
};

// Class HairStrandsCore.GroomCreateFollicleMaskOptions
// Size: 0x40 (Inherited: 0x28)
struct UGroomCreateFollicleMaskOptions : UObject {
	int32_t Resolution; // 0x28(0x04)
	int32_t RootRadius; // 0x2c(0x04)
	struct TArray<struct FFollicleMaskOptions> Grooms; // 0x30(0x10)
};

// Class HairStrandsCore.GroomCreateStrandsTexturesOptions
// Size: 0x68 (Inherited: 0x28)
struct UGroomCreateStrandsTexturesOptions : UObject {
	int32_t Resolution; // 0x28(0x04)
	enum class EStrandsTexturesTraceType TraceType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float TraceDistance; // 0x30(0x04)
	enum class EStrandsTexturesMeshType MeshType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UStaticMesh* StaticMesh; // 0x38(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x40(0x08)
	int32_t LODIndex; // 0x48(0x04)
	int32_t SectionIndex; // 0x4c(0x04)
	int32_t UVChannelIndex; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<int32_t> GroupIndex; // 0x58(0x10)
};

// Class HairStrandsCore.GroomImportOptions
// Size: 0x68 (Inherited: 0x28)
struct UGroomImportOptions : UObject {
	struct FGroomConversionSettings ConversionSettings; // 0x28(0x30)
	struct TArray<struct FHairGroupsInterpolation> InterpolationSettings; // 0x58(0x10)
};

// Class HairStrandsCore.GroomHairGroupsPreview
// Size: 0x38 (Inherited: 0x28)
struct UGroomHairGroupsPreview : UObject {
	struct TArray<struct FGroomHairGroupPreview> Groups; // 0x28(0x10)
};

// Class HairStrandsCore.GroomPluginSettings
// Size: 0x30 (Inherited: 0x28)
struct UGroomPluginSettings : UObject {
	float GroomCacheLookAheadBuffer; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class HairStrandsCore.MovieSceneGroomCacheSection
// Size: 0x108 (Inherited: 0xe8)
struct UMovieSceneGroomCacheSection : UMovieSceneSection {
	struct FMovieSceneGroomCacheParams Params; // 0xe8(0x20)
};

// Class HairStrandsCore.MovieSceneGroomCacheTrack
// Size: 0xa8 (Inherited: 0x90)
struct UMovieSceneGroomCacheTrack : UMovieSceneNameableTrack {
	char pad_90[0x8]; // 0x90(0x08)
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x98(0x10)
};

// Class HairStrandsCore.NiagaraDataInterfaceHairStrands
// Size: 0x50 (Inherited: 0x38)
struct UNiagaraDataInterfaceHairStrands : UNiagaraDataInterface {
	struct UGroomAsset* DefaultSource; // 0x38(0x08)
	struct AActor* SourceActor; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class HairStrandsCore.NiagaraDataInterfacePhysicsAsset
// Size: 0x88 (Inherited: 0x38)
struct UNiagaraDataInterfacePhysicsAsset : UNiagaraDataInterface {
	struct UPhysicsAsset* DefaultSource; // 0x38(0x08)
	struct AActor* SourceActor; // 0x40(0x08)
	struct FNiagaraUserParameterBinding MeshUserParameter; // 0x48(0x20)
	char pad_68[0x20]; // 0x68(0x20)
};

// Class HairStrandsCore.NiagaraDataInterfaceVelocityGrid
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceVelocityGrid : UNiagaraDataInterfaceRWBase {
	struct FIntVector GridSize; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class HairStrandsCore.NiagaraDataInterfacePressureGrid
// Size: 0x48 (Inherited: 0x48)
struct UNiagaraDataInterfacePressureGrid : UNiagaraDataInterfaceVelocityGrid {
};

