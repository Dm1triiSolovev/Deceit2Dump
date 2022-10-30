// Class Landscape.ControlPointMeshActor
// Size: 0x280 (Inherited: 0x278)
struct AControlPointMeshActor : AActor {
	struct UControlPointMeshComponent* ControlPointMeshComponent; // 0x278(0x08)
};

// Class Landscape.ControlPointMeshComponent
// Size: 0x5e0 (Inherited: 0x5d0)
struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x5d0(0x04)
	char pad_5D4[0xc]; // 0x5d4(0x0c)
};

// Class Landscape.LandscapeSplineInterface
// Size: 0x28 (Inherited: 0x28)
struct ULandscapeSplineInterface : UInterface {
};

// Class Landscape.LandscapeProxy
// Size: 0x5d0 (Inherited: 0x278)
struct ALandscapeProxy : APartitionActor {
	char pad_278[0x8]; // 0x278(0x08)
	struct ULandscapeSplinesComponent* SplineComponent; // 0x280(0x08)
	struct FGuid LandscapeGuid; // 0x288(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x298(0x08)
	int32_t MaxLODLevel; // 0x2a0(0x04)
	float LODDistanceFactor; // 0x2a4(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	float ComponentScreenSizeToUseSubSections; // 0x2ac(0x04)
	float LOD0ScreenSize; // 0x2b0(0x04)
	float LOD0DistributionSetting; // 0x2b4(0x04)
	float LODDistributionSetting; // 0x2b8(0x04)
	int32_t StaticLightingLOD; // 0x2bc(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x2c0(0x08)
	float StreamingDistanceMultiplier; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x2d0(0x08)
	char pad_2D8[0x20]; // 0x2d8(0x20)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x2f8(0x08)
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x300(0x10)
	bool bMeshHoles; // 0x310(0x01)
	char MeshHolesMaxLod; // 0x311(0x01)
	char pad_312[0x6]; // 0x312(0x06)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x318(0x10)
	bool bSetCreateRuntimeVirtualTextureVolumes; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	int32_t VirtualTextureNumLods; // 0x32c(0x04)
	int32_t VirtualTextureLodBias; // 0x330(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	float NegativeZBoundsExtension; // 0x338(0x04)
	float PositiveZBoundsExtension; // 0x33c(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x340(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x350(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x360(0x10)
	char pad_370[0x64]; // 0x370(0x64)
	bool bHasLandscapeGrass; // 0x3d4(0x01)
	char pad_3D5[0x3]; // 0x3d5(0x03)
	float StaticLightingResolution; // 0x3d8(0x04)
	char CastShadow : 1; // 0x3dc(0x01)
	char bCastDynamicShadow : 1; // 0x3dc(0x01)
	char bCastStaticShadow : 1; // 0x3dc(0x01)
	char bCastContactShadow : 1; // 0x3dc(0x01)
	char pad_3DC_4 : 4; // 0x3dc(0x01)
	char pad_3DD[0x3]; // 0x3dd(0x03)
	char bCastFarShadow : 1; // 0x3e0(0x01)
	char pad_3E0_1 : 7; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	char bCastHiddenShadow : 1; // 0x3e4(0x01)
	char pad_3E4_1 : 7; // 0x3e4(0x01)
	char pad_3E5[0x3]; // 0x3e5(0x03)
	char bCastShadowAsTwoSided : 1; // 0x3e8(0x01)
	char pad_3E8_1 : 7; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	char bAffectDistanceFieldLighting : 1; // 0x3ec(0x01)
	char pad_3EC_1 : 7; // 0x3ec(0x01)
	struct FLightingChannels LightingChannels; // 0x3ed(0x01)
	char pad_3EE[0x2]; // 0x3ee(0x02)
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x3f0(0x01)
	char bRenderCustomDepth : 1; // 0x3f0(0x01)
	char pad_3F0_2 : 6; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x3f4(0x01)
	char pad_3F5[0x3]; // 0x3f5(0x03)
	int32_t CustomDepthStencilValue; // 0x3f8(0x04)
	float LDMaxDrawDistance; // 0x3fc(0x04)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x400(0x18)
	int32_t CollisionMipLevel; // 0x418(0x04)
	int32_t SimpleCollisionMipLevel; // 0x41c(0x04)
	float CollisionThickness; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct FBodyInstance BodyInstance; // 0x428(0x190)
	char bGenerateOverlapEvents : 1; // 0x5b8(0x01)
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x5b8(0x01)
	char pad_5B8_2 : 6; // 0x5b8(0x01)
	char pad_5B9[0x3]; // 0x5b9(0x03)
	int32_t ComponentSizeQuads; // 0x5bc(0x04)
	int32_t SubsectionSizeQuads; // 0x5c0(0x04)
	int32_t NumSubsections; // 0x5c4(0x04)
	char bUsedForNavigation : 1; // 0x5c8(0x01)
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x5c8(0x01)
	char pad_5C8_2 : 6; // 0x5c8(0x01)
	char pad_5C9[0x3]; // 0x5c9(0x03)
	bool bUseDynamicMaterialInstance; // 0x5cc(0x01)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x5cd(0x01)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x5ce(0x01)
	bool bHasLayersContent; // 0x5cf(0x01)

	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3c12250
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3c12180
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3c120b0
	bool LandscapeExportHeightmapToRenderTarget(struct UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x3c11f90
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial); // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb5370
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer, struct FName EditLayerName); // Function Landscape.LandscapeProxy.EditorApplySpline // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3c11c00
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor // (Native|Public|BlueprintCallable) // @ game+0x3c11b70
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections // (Native|Public|BlueprintCallable) // @ game+0x3c11ae0
};

// Class Landscape.Landscape
// Size: 0x5d0 (Inherited: 0x5d0)
struct ALandscape : ALandscapeProxy {
};

// Class Landscape.LandscapeBlueprintBrushBase
// Size: 0x278 (Inherited: 0x278)
struct ALandscapeBlueprintBrushBase : AActor {

	void RequestLandscapeUpdate(); // Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0xacd350
	struct UTextureRenderTarget2D* Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, struct FName& InWeightmapLayerName); // Function Landscape.LandscapeBlueprintBrushBase.Render // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3c104b0
	void Initialize(struct FTransform& InLandscapeTransform, struct FIntPoint& InLandscapeSize, struct FIntPoint& InLandscapeRenderTargetSize); // Function Landscape.LandscapeBlueprintBrushBase.Initialize // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x3c10300
	void GetBlueprintRenderDependencies(struct TArray<struct UObject*>& OutStreamableAssets); // Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2552560
};

// Class Landscape.LandscapeLODStreamingProxy
// Size: 0xd8 (Inherited: 0xd0)
struct ULandscapeLODStreamingProxy : UStreamableRenderAsset {
	char pad_D0[0x8]; // 0xd0(0x08)
};

// Class Landscape.LandscapeComponent
// Size: 0x7a0 (Inherited: 0x540)
struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x540(0x04)
	int32_t SectionBaseY; // 0x544(0x04)
	int32_t ComponentSizeQuads; // 0x548(0x04)
	int32_t SubsectionSizeQuads; // 0x54c(0x04)
	int32_t NumSubsections; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x558(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x560(0x08)
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x568(0x10)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x578(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x588(0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x598(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x5a8(0x08)
	struct FVector4 WeightmapScaleBias; // 0x5b0(0x20)
	float WeightmapSubsectionOffset; // 0x5d0(0x04)
	char pad_5D4[0xc]; // 0x5d4(0x0c)
	struct FVector4 HeightmapScaleBias; // 0x5e0(0x20)
	struct FBox CachedLocalBox; // 0x600(0x38)
	LazyObjectProperty CollisionComponent; // 0x638(0x1c)
	char pad_654[0x4]; // 0x654(0x04)
	struct UTexture2D* HeightmapTexture; // 0x658(0x08)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x660(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x670(0x10)
	struct ULandscapeLODStreamingProxy* LODStreamingProxy; // 0x680(0x08)
	struct FGuid MapBuildDataId; // 0x688(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0x698(0x10)
	int32_t CollisionMipLevel; // 0x6a8(0x04)
	int32_t SimpleCollisionMipLevel; // 0x6ac(0x04)
	float NegativeZBoundsExtension; // 0x6b0(0x04)
	float PositiveZBoundsExtension; // 0x6b4(0x04)
	float StaticLightingResolution; // 0x6b8(0x04)
	int32_t ForcedLOD; // 0x6bc(0x04)
	int32_t LODBias; // 0x6c0(0x04)
	struct FGuid StateId; // 0x6c4(0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x6d4(0x10)
	struct FGuid LastBakedTextureMaterialGuid; // 0x6e4(0x10)
	char pad_6F4[0x4]; // 0x6f4(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0x6f8(0x08)
	char MobileBlendableLayerMask; // 0x700(0x01)
	char pad_701[0x7]; // 0x701(0x07)
	struct UMaterialInterface* MobileMaterialInterface; // 0x708(0x08)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; // 0x710(0x10)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // 0x720(0x10)
	char pad_730[0x70]; // 0x730(0x70)

	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c10230
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName InPaintLayerName); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3c10150
	float EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3c10070
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x278 (Inherited: 0x278)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x2c8 (Inherited: 0x278)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	char pad_278[0x50]; // 0x278(0x50)
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x540 (Inherited: 0x540)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.LandscapeGrassType
// Size: 0x60 (Inherited: 0x28)
struct ULandscapeGrassType : UObject {
	struct TArray<struct FGrassVariety> GrassVarieties; // 0x28(0x10)
	char bEnableDensityScaling : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UStaticMesh* GrassMesh; // 0x40(0x08)
	float GrassDensity; // 0x48(0x04)
	float PlacementJitter; // 0x4c(0x04)
	int32_t StartCullDistance; // 0x50(0x04)
	int32_t EndCullDistance; // 0x54(0x04)
	bool RandomRotation; // 0x58(0x01)
	bool AlignToSurface; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x640 (Inherited: 0x540)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x540(0x10)
	int32_t SectionBaseX; // 0x550(0x04)
	int32_t SectionBaseY; // 0x554(0x04)
	int32_t CollisionSizeQuads; // 0x558(0x04)
	float CollisionScale; // 0x55c(0x04)
	int32_t SimpleCollisionSizeQuads; // 0x560(0x04)
	char pad_564[0x4]; // 0x564(0x04)
	struct TArray<char> CollisionQuadFlags; // 0x568(0x10)
	struct FGuid HeightfieldGuid; // 0x578(0x10)
	struct FBox CachedLocalBox; // 0x588(0x38)
	LazyObjectProperty RenderComponent; // 0x5c0(0x1c)
	char pad_5DC[0x14]; // 0x5dc(0x14)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x5f0(0x10)
	char pad_600[0x40]; // 0x600(0x40)

	struct ULandscapeComponent* GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c102d0
};

// Class Landscape.LandscapeHLODBuilder
// Size: 0x28 (Inherited: 0x28)
struct ULandscapeHLODBuilder : UHLODBuilder {
};

// Class Landscape.LandscapeInfo
// Size: 0x218 (Inherited: 0x28)
struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; // 0x28(0x1c)
	struct FGuid LandscapeGuid; // 0x44(0x10)
	int32_t ComponentSizeQuads; // 0x54(0x04)
	int32_t SubsectionSizeQuads; // 0x58(0x04)
	int32_t ComponentNumSubsections; // 0x5c(0x04)
	struct FVector DrawScale; // 0x60(0x18)
	char pad_78[0xa0]; // 0x78(0xa0)
	struct TArray<struct ALandscapeStreamingProxy*> Proxies; // 0x118(0x10)
	char pad_128[0xf0]; // 0x128(0xf0)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x80 (Inherited: 0x28)
struct ULandscapeInfoMap : UObject {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x50 (Inherited: 0x28)
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x28(0x08)
	struct UPhysicalMaterial* PhysMaterial; // 0x30(0x08)
	float Hardness; // 0x38(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x218 (Inherited: 0x200)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x200(0x10)
	char bIsLayerThumbnail : 1; // 0x210(0x01)
	char bDisableTessellation : 1; // 0x210(0x01)
	char bMobile : 1; // 0x210(0x01)
	char bEditorToolUsage : 1; // 0x210(0x01)
	char pad_210_4 : 4; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x660 (Inherited: 0x640)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid MeshGuid; // 0x640(0x10)
	char pad_650[0x10]; // 0x650(0x10)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x280 (Inherited: 0x278)
struct ALandscapeMeshProxyActor : AActor {
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x278(0x08)
};

// Class Landscape.LandscapeMeshProxyComponent
// Size: 0x600 (Inherited: 0x5d0)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	struct FGuid LandscapeGuid; // 0x5d0(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x5e0(0x10)
	int8_t ProxyLOD; // 0x5f0(0x01)
	char pad_5F1[0xf]; // 0x5f1(0x0f)
};

// Class Landscape.LandscapeSettings
// Size: 0x40 (Inherited: 0x38)
struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Landscape.LandscapeSplineActor
// Size: 0x290 (Inherited: 0x278)
struct ALandscapeSplineActor : AActor {
	char pad_278[0x8]; // 0x278(0x08)
	struct FGuid LandscapeGuid; // 0x280(0x10)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x570 (Inherited: 0x540)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x540(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x550(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x560(0x10)

	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x226f450
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0xd8 (Inherited: 0x28)
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x28(0x18)
	struct FRotator Rotation; // 0x40(0x18)
	float Width; // 0x58(0x04)
	float LayerWidthRatio; // 0x5c(0x04)
	float SideFalloff; // 0x60(0x04)
	float LeftSideFalloffFactor; // 0x64(0x04)
	float RightSideFalloffFactor; // 0x68(0x04)
	float LeftSideLayerFalloffFactor; // 0x6c(0x04)
	float RightSideLayerFalloffFactor; // 0x70(0x04)
	float EndFalloff; // 0x74(0x04)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x78(0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x88(0x10)
	struct FBox Bounds; // 0x98(0x38)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0xd0(0x08)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xc8 (Inherited: 0x28)
struct ULandscapeSplineSegment : UObject {
	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28(0x30)
	struct FInterpCurveVector SplineInfo; // 0x58(0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x38)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xb8(0x10)
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x5f0 (Inherited: 0x5d0)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x5d0(0x1c)
	char pad_5EC[0x4]; // 0x5ec(0x04)
};

// Class Landscape.LandscapeSubsystem
// Size: 0x50 (Inherited: 0x40)
struct ULandscapeSubsystem : UTickableWorldSubsystem {
	char pad_40[0x10]; // 0x40(0x10)
};

// Class Landscape.LandscapeWeightmapUsage
// Size: 0x58 (Inherited: 0x28)
struct ULandscapeWeightmapUsage : UObject {
	struct ULandscapeComponent* ChannelUsage[0x4]; // 0x28(0x20)
	struct FGuid LayerGuid; // 0x48(0x10)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FGrassInput> GrassTypes; // 0x40(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct FLayerBlendInput> Layers; // 0x40(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class ETerrainCoordMappingType MappingType; // 0x40(0x01)
	enum class ELandscapeCustomizedCoordType CustomUVType; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	float MappingScale; // 0x44(0x04)
	float MappingRotation; // 0x48(0x04)
	float MappingPanU; // 0x4c(0x04)
	float MappingPanV; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	struct FName ParameterName; // 0x40(0x08)
	float PreviewWeight; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0x78 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput LayerUsed; // 0x40(0x14)
	struct FExpressionInput LayerNotUsed; // 0x54(0x14)
	struct FName ParameterName; // 0x68(0x08)
	char PreviewUsed : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x40(0x14)
	struct FExpressionInput Layer; // 0x54(0x14)
	struct FName ParameterName; // 0x68(0x08)
	float PreviewWeight; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FVector ConstBase; // 0x78(0x18)
};

// Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapePhysicalMaterialOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FPhysicalMaterialInput> Inputs; // 0x40(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
};

