// Class ModelingComponents.MultiSelectionMeshEditingToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UMultiSelectionMeshEditingToolBuilder : UInteractiveToolWithToolTargetsBuilder {
};

// Class ModelingComponents.MultiSelectionMeshEditingTool
// Size: 0xb8 (Inherited: 0xb0)
struct UMultiSelectionMeshEditingTool : UMultiSelectionTool {
	struct TWeakObjectPtr<struct UWorld> TargetWorld; // 0xb0(0x08)
};

// Class ModelingComponents.BaseCreateFromSelectedTool
// Size: 0x100 (Inherited: 0xb8)
struct UBaseCreateFromSelectedTool : UMultiSelectionMeshEditingTool {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UTransformInputsToolProperties* TransformProperties; // 0xc0(0x08)
	struct UCreateMeshObjectTypeProperties* OutputTypeProperties; // 0xc8(0x08)
	struct UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties; // 0xd0(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xd8(0x08)
	struct TArray<struct UTransformProxy*> TransformProxies; // 0xe0(0x10)
	struct TArray<struct UCombinedTransformGizmo*> TransformGizmos; // 0xf0(0x10)
};

// Class ModelingComponents.BaseCreateFromSelectedToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UBaseCreateFromSelectedToolBuilder : UMultiSelectionMeshEditingToolBuilder {
};

// Class ModelingComponents.SingleSelectionMeshEditingToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct USingleSelectionMeshEditingToolBuilder : UInteractiveToolWithToolTargetsBuilder {
};

// Class ModelingComponents.SingleSelectionMeshEditingTool
// Size: 0xb8 (Inherited: 0xa8)
struct USingleSelectionMeshEditingTool : USingleSelectionTool {
	struct TWeakObjectPtr<struct UWorld> TargetWorld; // 0xa8(0x08)
	struct UPersistentMeshSelection* InputSelection; // 0xb0(0x08)
};

// Class ModelingComponents.InteractiveToolActivity
// Size: 0x30 (Inherited: 0x30)
struct UInteractiveToolActivity : UInteractionMechanic {
};

// Class ModelingComponents.OnAcceptHandleSourcesPropertiesBase
// Size: 0xa8 (Inherited: 0xa8)
struct UOnAcceptHandleSourcesPropertiesBase : UInteractiveToolPropertySet {
};

// Class ModelingComponents.OnAcceptHandleSourcesProperties
// Size: 0xb0 (Inherited: 0xa8)
struct UOnAcceptHandleSourcesProperties : UOnAcceptHandleSourcesPropertiesBase {
	enum class EHandleSourcesMethod HandleInputs; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
// Size: 0xd8 (Inherited: 0xb0)
struct UBaseCreateFromSelectedHandleSourceProperties : UOnAcceptHandleSourcesProperties {
	enum class EBaseCreateFromSelectedTargetType OutputWriteTo; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FString OutputNewName; // 0xb8(0x10)
	struct FString OutputExistingName; // 0xc8(0x10)
};

// Class ModelingComponents.TransformInputsToolProperties
// Size: 0xb0 (Inherited: 0xa8)
struct UTransformInputsToolProperties : UInteractiveToolPropertySet {
	bool bShowTransformGizmo; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class ModelingComponents.BaseMeshProcessingToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UBaseMeshProcessingToolBuilder : UInteractiveToolWithToolTargetsBuilder {
};

// Class ModelingComponents.BaseMeshProcessingTool
// Size: 0x400 (Inherited: 0xa8)
struct UBaseMeshProcessingTool : USingleSelectionTool {
	char pad_A8[0x20]; // 0xa8(0x20)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xc8(0x08)
	char pad_D0[0x330]; // 0xd0(0x330)
};

// Class ModelingComponents.BaseVoxelTool
// Size: 0x118 (Inherited: 0x100)
struct UBaseVoxelTool : UBaseCreateFromSelectedTool {
	struct UVoxelProperties* VoxProperties; // 0x100(0x08)
	char pad_108[0x10]; // 0x108(0x10)
};

// Class ModelingComponents.CollectSurfacePathMechanic
// Size: 0x5c0 (Inherited: 0x30)
struct UCollectSurfacePathMechanic : UInteractionMechanic {
	char pad_30[0x590]; // 0x30(0x590)
};

// Class ModelingComponents.ConstructionPlaneMechanic
// Size: 0xf0 (Inherited: 0x30)
struct UConstructionPlaneMechanic : UInteractionMechanic {
	char pad_30[0x98]; // 0x30(0x98)
	struct UCombinedTransformGizmo* PlaneTransformGizmo; // 0xc8(0x08)
	struct UTransformProxy* PlaneTransformProxy; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct USingleClickInputBehavior* ClickToSetPlaneBehavior; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class ModelingComponents.CreateMeshObjectTypeProperties
// Size: 0xd8 (Inherited: 0xa8)
struct UCreateMeshObjectTypeProperties : UInteractiveToolPropertySet {
	struct FString OutputType; // 0xa8(0x10)
	struct AVolume* VolumeType; // 0xb8(0x08)
	struct TArray<struct FString> OutputTypeNamesList; // 0xc0(0x10)
	bool bShowVolumeList; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)

	bool ShouldShowPropertySet(); // Function ModelingComponents.CreateMeshObjectTypeProperties.ShouldShowPropertySet // (Final|Native|Public|Const) // @ game+0x1869e50
	struct TArray<struct FString> GetOutputTypeNamesFunc(); // Function ModelingComponents.CreateMeshObjectTypeProperties.GetOutputTypeNamesFunc // (Final|Native|Public) // @ game+0x1869d50
	enum class ECreateObjectTypeHint GetCurrentCreateMeshType(); // Function ModelingComponents.CreateMeshObjectTypeProperties.GetCurrentCreateMeshType // (Final|Native|Public|Const) // @ game+0x1869d20
};

// Class ModelingComponents.CurveControlPointsMechanic
// Size: 0x680 (Inherited: 0x30)
struct UCurveControlPointsMechanic : UInteractionMechanic {
	char pad_30[0x10]; // 0x30(0x10)
	struct USingleClickInputBehavior* ClickBehavior; // 0x40(0x08)
	struct UMouseHoverBehavior* HoverBehavior; // 0x48(0x08)
	char pad_50[0x498]; // 0x50(0x498)
	struct APreviewGeometryActor* PreviewGeometryActor; // 0x4e8(0x08)
	struct UPointSetComponent* DrawnControlPoints; // 0x4f0(0x08)
	struct ULineSetComponent* DrawnControlSegments; // 0x4f8(0x08)
	struct UPointSetComponent* PreviewPoint; // 0x500(0x08)
	struct ULineSetComponent* PreviewSegment; // 0x508(0x08)
	char pad_510[0x78]; // 0x510(0x78)
	struct UTransformProxy* PointTransformProxy; // 0x588(0x08)
	struct UCombinedTransformGizmo* PointTransformGizmo; // 0x590(0x08)
	char pad_598[0xe8]; // 0x598(0xe8)
};

// Class ModelingComponents.DragAlignmentMechanic
// Size: 0x260 (Inherited: 0x30)
struct UDragAlignmentMechanic : UInteractionMechanic {
	char pad_30[0x230]; // 0x30(0x230)
};

// Class ModelingComponents.DynamicMeshReplacementChangeTarget
// Size: 0x58 (Inherited: 0x28)
struct UDynamicMeshReplacementChangeTarget : UObject {
	char pad_28[0x30]; // 0x28(0x30)
};

// Class ModelingComponents.DynamicMeshCommitter
// Size: 0x28 (Inherited: 0x28)
struct UDynamicMeshCommitter : UInterface {
};

// Class ModelingComponents.DynamicMeshProvider
// Size: 0x28 (Inherited: 0x28)
struct UDynamicMeshProvider : UInterface {
};

// Class ModelingComponents.PersistentDynamicMeshSource
// Size: 0x28 (Inherited: 0x28)
struct UPersistentDynamicMeshSource : UInterface {
};

// Class ModelingComponents.ToolActivityHost
// Size: 0x28 (Inherited: 0x28)
struct UToolActivityHost : UInterface {
};

// Class ModelingComponents.LatticeControlPointsMechanic
// Size: 0x4f0 (Inherited: 0x30)
struct ULatticeControlPointsMechanic : UInteractionMechanic {
	char pad_30[0x1e0]; // 0x30(0x1e0)
	struct APreviewGeometryActor* PreviewGeometryActor; // 0x210(0x08)
	struct UPointSetComponent* DrawnControlPoints; // 0x218(0x08)
	struct ULineSetComponent* DrawnLatticeEdges; // 0x220(0x08)
	char pad_228[0xa8]; // 0x228(0xa8)
	struct UTransformProxy* PointTransformProxy; // 0x2d0(0x08)
	struct UCombinedTransformGizmo* PointTransformGizmo; // 0x2d8(0x08)
	char pad_2E0[0x58]; // 0x2e0(0x58)
	struct URectangleMarqueeMechanic* MarqueeMechanic; // 0x338(0x08)
	char pad_340[0x1b0]; // 0x340(0x1b0)
};

// Class ModelingComponents.LineSetComponent
// Size: 0x5f0 (Inherited: 0x570)
struct ULineSetComponent : UMeshComponent {
	struct UMaterialInterface* LineMaterial; // 0x568(0x08)
	struct FBoxSphereBounds Bounds; // 0x570(0x38)
	bool bBoundsDirty; // 0x5a8(0x01)
	char pad_5B1[0x3f]; // 0x5b1(0x3f)
};

// Class ModelingComponents.MeshElementsVisualizerProperties
// Size: 0xd0 (Inherited: 0xa8)
struct UMeshElementsVisualizerProperties : UInteractiveToolPropertySet {
	bool bVisible; // 0xa8(0x01)
	bool bShowWireframe; // 0xa9(0x01)
	bool bShowBorders; // 0xaa(0x01)
	bool bShowUVSeams; // 0xab(0x01)
	bool bShowNormalSeams; // 0xac(0x01)
	bool bShowColorSeams; // 0xad(0x01)
	char pad_AE[0x2]; // 0xae(0x02)
	float ThicknessScale; // 0xb0(0x04)
	struct FColor WireframeColor; // 0xb4(0x04)
	struct FColor BoundaryEdgeColor; // 0xb8(0x04)
	struct FColor UVSeamColor; // 0xbc(0x04)
	struct FColor NormalSeamColor; // 0xc0(0x04)
	struct FColor ColorSeamColor; // 0xc4(0x04)
	float DepthBias; // 0xc8(0x04)
	bool bAdjustDepthBiasUsingMeshSize; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
};

// Class ModelingComponents.PreviewGeometry
// Size: 0xd0 (Inherited: 0x28)
struct UPreviewGeometry : UObject {
	struct APreviewGeometryActor* ParentActor; // 0x28(0x08)
	struct TMap<struct FString, struct ULineSetComponent*> LineSets; // 0x30(0x50)
	struct TMap<struct FString, struct UPointSetComponent*> PointSets; // 0x80(0x50)

	bool SetPointSetVisibility(struct FString PointSetIdentifier, bool bVisible); // Function ModelingComponents.PreviewGeometry.SetPointSetVisibility // (Final|Native|Public) // @ game+0x186e8a0
	bool SetPointSetMaterial(struct FString PointSetIdentifier, struct UMaterialInterface* NewMaterial); // Function ModelingComponents.PreviewGeometry.SetPointSetMaterial // (Final|Native|Public) // @ game+0x186e7b0
	bool SetLineSetVisibility(struct FString LineSetIdentifier, bool bVisible); // Function ModelingComponents.PreviewGeometry.SetLineSetVisibility // (Final|Native|Public) // @ game+0x186e6c0
	bool SetLineSetMaterial(struct FString LineSetIdentifier, struct UMaterialInterface* NewMaterial); // Function ModelingComponents.PreviewGeometry.SetLineSetMaterial // (Final|Native|Public) // @ game+0x186e5d0
	void SetAllPointSetsMaterial(struct UMaterialInterface* Material); // Function ModelingComponents.PreviewGeometry.SetAllPointSetsMaterial // (Final|Native|Public) // @ game+0x186e4b0
	void SetAllLineSetsMaterial(struct UMaterialInterface* Material); // Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial // (Final|Native|Public) // @ game+0x186e420
	bool RemovePointSet(struct FString PointSetIdentifier, bool bDestroy); // Function ModelingComponents.PreviewGeometry.RemovePointSet // (Final|Native|Public) // @ game+0x186e330
	bool RemoveLineSet(struct FString LineSetIdentifier, bool bDestroy); // Function ModelingComponents.PreviewGeometry.RemoveLineSet // (Final|Native|Public) // @ game+0x186e240
	void RemoveAllPointSets(bool bDestroy); // Function ModelingComponents.PreviewGeometry.RemoveAllPointSets // (Final|Native|Public) // @ game+0x186e1b0
	void RemoveAllLineSets(bool bDestroy); // Function ModelingComponents.PreviewGeometry.RemoveAllLineSets // (Final|Native|Public) // @ game+0x186e120
	struct APreviewGeometryActor* GetActor(); // Function ModelingComponents.PreviewGeometry.GetActor // (Final|Native|Public|Const) // @ game+0x186df80
	struct UPointSetComponent* FindPointSet(struct FString PointSetIdentifier); // Function ModelingComponents.PreviewGeometry.FindPointSet // (Final|Native|Public) // @ game+0x186ded0
	struct ULineSetComponent* FindLineSet(struct FString LineSetIdentifier); // Function ModelingComponents.PreviewGeometry.FindLineSet // (Final|Native|Public) // @ game+0x186de20
	void Disconnect(); // Function ModelingComponents.PreviewGeometry.Disconnect // (Final|Native|Public) // @ game+0x186de00
	void CreateInWorld(struct UWorld* World, struct FTransform& WithTransform); // Function ModelingComponents.PreviewGeometry.CreateInWorld // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x186dcb0
	struct UPointSetComponent* AddPointSet(struct FString PointSetIdentifier); // Function ModelingComponents.PreviewGeometry.AddPointSet // (Final|Native|Public) // @ game+0x186dc00
	struct ULineSetComponent* AddLineSet(struct FString LineSetIdentifier); // Function ModelingComponents.PreviewGeometry.AddLineSet // (Final|Native|Public) // @ game+0x186db50
};

// Class ModelingComponents.MeshElementsVisualizer
// Size: 0xf8 (Inherited: 0xd0)
struct UMeshElementsVisualizer : UPreviewGeometry {
	struct UMeshElementsVisualizerProperties* Settings; // 0xd0(0x08)
	struct UMeshWireframeComponent* WireframeComponent; // 0xd8(0x08)
	char pad_E0[0x18]; // 0xe0(0x18)
};

// Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
// Size: 0xb8 (Inherited: 0x28)
struct UMeshOpPreviewWithBackgroundCompute : UObject {
	char pad_28[0x30]; // 0x28(0x30)
	struct UPreviewMesh* PreviewMesh; // 0x58(0x08)
	struct TArray<struct UMaterialInterface*> StandardMaterials; // 0x60(0x10)
	struct UMaterialInterface* OverrideMaterial; // 0x70(0x08)
	struct UMaterialInterface* WorkingMaterial; // 0x78(0x08)
	struct UMaterialInterface* SecondaryMaterial; // 0x80(0x08)
	struct TWeakObjectPtr<struct UWorld> PreviewWorld; // 0x88(0x08)
	char pad_90[0x28]; // 0x90(0x28)
};

// Class ModelingComponents.MeshSurfacePointMeshEditingToolBuilder
// Size: 0x30 (Inherited: 0x30)
struct UMeshSurfacePointMeshEditingToolBuilder : UMeshSurfacePointToolBuilder {
};

// Class ModelingComponents.MeshWireframeComponent
// Size: 0x600 (Inherited: 0x570)
struct UMeshWireframeComponent : UMeshComponent {
	float LineDepthBias; // 0x568(0x04)
	float LineDepthBiasSizeScale; // 0x56c(0x04)
	float ThicknessScale; // 0x570(0x04)
	bool bEnableWireframe; // 0x574(0x01)
	struct FColor WireframeColor; // 0x578(0x04)
	float WireframeThickness; // 0x57c(0x04)
	bool bEnableBoundaryEdges; // 0x580(0x01)
	struct FColor BoundaryEdgeColor; // 0x584(0x04)
	float BoundaryEdgeThickness; // 0x588(0x04)
	bool bEnableUVSeams; // 0x58c(0x01)
	char pad_58F[0x1]; // 0x58f(0x01)
	struct FColor UVSeamColor; // 0x590(0x04)
	float UVSeamThickness; // 0x594(0x04)
	bool bEnableNormalSeams; // 0x598(0x01)
	char pad_599[0x3]; // 0x599(0x03)
	struct FColor NormalSeamColor; // 0x59c(0x04)
	float NormalSeamThickness; // 0x5a0(0x04)
	bool bEnableColorSeams; // 0x5a4(0x01)
	char pad_5A5[0x3]; // 0x5a5(0x03)
	struct FColor ColorSeamColor; // 0x5a8(0x04)
	float ColorSeamThickness; // 0x5ac(0x04)
	struct UMaterialInterface* LineMaterial; // 0x5b0(0x08)
	struct FBoxSphereBounds LocalBounds; // 0x5b8(0x38)
	char pad_5F0[0x10]; // 0x5f0(0x10)
};

// Class ModelingComponents.ModelingComponentsSettings
// Size: 0x40 (Inherited: 0x38)
struct UModelingComponentsSettings : UDeveloperSettings {
	bool bEnableRayTracingWhileEditing; // 0x38(0x01)
	bool bEnableRayTracing; // 0x39(0x01)
	bool bEnableCollision; // 0x3a(0x01)
	enum class ECollisionTraceFlag CollisionMode; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class ModelingComponents.ModelingObjectsCreationAPI
// Size: 0x28 (Inherited: 0x28)
struct UModelingObjectsCreationAPI : UObject {

	struct FCreateTextureObjectResult CreateTextureObject(struct FCreateTextureObjectParams& CreateTexParams); // Function ModelingComponents.ModelingObjectsCreationAPI.CreateTextureObject // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1869c50
	struct FCreateMeshObjectResult CreateMeshObject(struct FCreateMeshObjectParams& CreateMeshParams); // Function ModelingComponents.ModelingObjectsCreationAPI.CreateMeshObject // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x18699e0
};

// Class ModelingComponents.ModelingSceneSnappingManager
// Size: 0xf8 (Inherited: 0x28)
struct UModelingSceneSnappingManager : USceneSnappingManager {
	struct UInteractiveToolsContext* ParentContext; // 0x28(0x08)
	char pad_30[0xc8]; // 0x30(0xc8)
};

// Class ModelingComponents.MultiTransformer
// Size: 0x1b0 (Inherited: 0x28)
struct UMultiTransformer : UObject {
	char pad_28[0x60]; // 0x28(0x60)
	struct UInteractiveGizmoManager* GizmoManager; // 0x88(0x08)
	char pad_90[0x70]; // 0x90(0x70)
	struct UCombinedTransformGizmo* TransformGizmo; // 0x100(0x08)
	struct UTransformProxy* TransformProxy; // 0x108(0x08)
	struct UDragAlignmentMechanic* DragAlignmentMechanic; // 0x110(0x08)
	char pad_118[0x98]; // 0x118(0x98)
};

// Class ModelingComponents.OctreeDynamicMeshComponent
// Size: 0x6d0 (Inherited: 0x5c0)
struct UOctreeDynamicMeshComponent : UBaseDynamicMeshComponent {
	char pad_5C0[0x50]; // 0x5c0(0x50)
	struct UDynamicMesh* MeshObject; // 0x610(0x08)
	char pad_618[0xb8]; // 0x618(0xb8)

	void SetDynamicMesh(struct UDynamicMesh* NewMesh); // Function ModelingComponents.OctreeDynamicMeshComponent.SetDynamicMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x186e540
};

// Class ModelingComponents.OnAcceptHandleSourcesPropertiesSingle
// Size: 0xb0 (Inherited: 0xa8)
struct UOnAcceptHandleSourcesPropertiesSingle : UOnAcceptHandleSourcesPropertiesBase {
	enum class EHandleSourcesMethod HandleInputs; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class ModelingComponents.PersistentMeshSelection
// Size: 0x88 (Inherited: 0x28)
struct UPersistentMeshSelection : UObject {
	char pad_28[0x60]; // 0x28(0x60)
};

// Class ModelingComponents.PersistentMeshSelectionManager
// Size: 0x40 (Inherited: 0x28)
struct UPersistentMeshSelectionManager : UObject {
	struct UInteractiveToolsContext* ParentContext; // 0x28(0x08)
	struct UPersistentMeshSelection* ActiveSelection; // 0x30(0x08)
	struct UPreviewGeometry* SelectionDisplay; // 0x38(0x08)
};

// Class ModelingComponents.PlaneDistanceFromHitMechanic
// Size: 0x510 (Inherited: 0x30)
struct UPlaneDistanceFromHitMechanic : UInteractionMechanic {
	char pad_30[0x4e0]; // 0x30(0x4e0)
};

// Class ModelingComponents.PointSetComponent
// Size: 0x5f0 (Inherited: 0x570)
struct UPointSetComponent : UMeshComponent {
	struct UMaterialInterface* PointMaterial; // 0x568(0x08)
	struct FBoxSphereBounds Bounds; // 0x570(0x38)
	bool bBoundsDirty; // 0x5a8(0x01)
	char pad_5B1[0x3f]; // 0x5b1(0x3f)
};

// Class ModelingComponents.PreviewMesh
// Size: 0x140 (Inherited: 0x28)
struct UPreviewMesh : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	bool bBuildSpatialDataStructure; // 0x40(0x01)
	char pad_41[0xf]; // 0x41(0x0f)
	struct UDynamicMeshComponent* DynamicMeshComponent; // 0x50(0x08)
	char pad_58[0xe8]; // 0x58(0xe8)
};

// Class ModelingComponents.PolyEditPreviewMesh
// Size: 0x550 (Inherited: 0x140)
struct UPolyEditPreviewMesh : UPreviewMesh {
	char pad_140[0x410]; // 0x140(0x410)
};

// Class ModelingComponents.PolygonSelectionMechanicProperties
// Size: 0xb8 (Inherited: 0xa8)
struct UPolygonSelectionMechanicProperties : UInteractiveToolPropertySet {
	bool bSelectVertices; // 0xa8(0x01)
	bool bSelectEdges; // 0xa9(0x01)
	bool bSelectFaces; // 0xaa(0x01)
	bool bSelectEdgeLoops; // 0xab(0x01)
	bool bSelectEdgeRings; // 0xac(0x01)
	bool bHitBackFaces; // 0xad(0x01)
	bool bEnableMarquee; // 0xae(0x01)
	bool bMarqueeIgnoreOcclusion; // 0xaf(0x01)
	bool bPreferProjectedElement; // 0xb0(0x01)
	bool bSelectDownRay; // 0xb1(0x01)
	bool bIgnoreOcclusion; // 0xb2(0x01)
	char pad_B3[0x5]; // 0xb3(0x05)
};

// Class ModelingComponents.PolygonSelectionMechanic
// Size: 0xb00 (Inherited: 0x30)
struct UPolygonSelectionMechanic : UInteractionMechanic {
	char pad_30[0x48]; // 0x30(0x48)
	struct UPolygonSelectionMechanicProperties* Properties; // 0x78(0x08)
	char pad_80[0x60]; // 0x80(0x60)
	struct UMouseHoverBehavior* HoverBehavior; // 0xe0(0x08)
	struct USingleClickOrDragInputBehavior* ClickOrDragBehavior; // 0xe8(0x08)
	struct URectangleMarqueeMechanic* MarqueeMechanic; // 0xf0(0x08)
	char pad_F8[0x5d8]; // 0xf8(0x5d8)
	struct APreviewGeometryActor* PreviewGeometryActor; // 0x6d0(0x08)
	struct UTriangleSetComponent* DrawnTriangleSetComponent; // 0x6d8(0x08)
	char pad_6E0[0x50]; // 0x6e0(0x50)
	struct UMaterialInterface* HighlightedFaceMaterial; // 0x730(0x08)
	char pad_738[0x3c8]; // 0x738(0x3c8)
};

// Class ModelingComponents.PolygroupLayersProperties
// Size: 0xc0 (Inherited: 0xa8)
struct UPolygroupLayersProperties : UInteractiveToolPropertySet {
	struct FName ActiveGroupLayer; // 0xa8(0x08)
	struct TArray<struct FString> GroupLayersList; // 0xb0(0x10)

	struct TArray<struct FString> GetGroupLayersFunc(); // Function ModelingComponents.PolygroupLayersProperties.GetGroupLayersFunc // (Final|Native|Public) // @ game+0x186dfa0
};

// Class ModelingComponents.PolyLassoMarqueeMechanic
// Size: 0x1d0 (Inherited: 0x30)
struct UPolyLassoMarqueeMechanic : UInteractionMechanic {
	char pad_30[0x58]; // 0x30(0x58)
	float SpacingTolerance; // 0x88(0x04)
	float LineThickness; // 0x8c(0x04)
	struct FLinearColor LineColor; // 0x90(0x10)
	struct FLinearColor ClosedColor; // 0xa0(0x10)
	bool bEnableFreehandPolygons; // 0xb0(0x01)
	bool bEnableMultiClickPolygons; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
	struct UClickDragInputBehavior* ClickDragBehavior; // 0xb8(0x08)
	struct UMouseHoverBehavior* HoverBehavior; // 0xc0(0x08)
	char pad_C8[0x108]; // 0xc8(0x108)
};

// Class ModelingComponents.PreviewGeometryActor
// Size: 0x280 (Inherited: 0x280)
struct APreviewGeometryActor : AInternalToolFrameworkActor {
};

// Class ModelingComponents.PreviewMeshActor
// Size: 0x280 (Inherited: 0x280)
struct APreviewMeshActor : AInternalToolFrameworkActor {
};

// Class ModelingComponents.RectangleMarqueeMechanic
// Size: 0x1e0 (Inherited: 0x30)
struct URectangleMarqueeMechanic : UInteractionMechanic {
	char pad_30[0x8]; // 0x30(0x08)
	bool bUseExternalClickDragBehavior; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	double OnDragRectangleChangedDeferredThreshold; // 0x40(0x08)
	char pad_48[0x48]; // 0x48(0x48)
	struct UClickDragInputBehavior* ClickDragBehavior; // 0x90(0x08)
	char pad_98[0x148]; // 0x98(0x148)
};

// Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet
// Size: 0xb8 (Inherited: 0xa8)
struct USpaceCurveDeformationMechanicPropertySet : UInteractiveToolPropertySet {
	enum class ESpaceCurveControlPointTransformMode TransformMode; // 0xa8(0x04)
	enum class ESpaceCurveControlPointOriginMode TransformOrigin; // 0xac(0x04)
	float Softness; // 0xb0(0x04)
	enum class ESpaceCurveControlPointFalloffType SoftFalloff; // 0xb4(0x04)
};

// Class ModelingComponents.SpaceCurveDeformationMechanic
// Size: 0x2d0 (Inherited: 0x30)
struct USpaceCurveDeformationMechanic : UInteractionMechanic {
	char pad_30[0x10]; // 0x30(0x10)
	struct USingleClickInputBehavior* ClickBehavior; // 0x40(0x08)
	struct UMouseHoverBehavior* HoverBehavior; // 0x48(0x08)
	char pad_50[0x18]; // 0x50(0x18)
	struct USpaceCurveDeformationMechanicPropertySet* TransformProperties; // 0x68(0x08)
	char pad_70[0xf8]; // 0x70(0xf8)
	struct APreviewGeometryActor* PreviewGeometryActor; // 0x168(0x08)
	struct UPointSetComponent* RenderPoints; // 0x170(0x08)
	struct ULineSetComponent* RenderSegments; // 0x178(0x08)
	char pad_180[0x38]; // 0x180(0x38)
	struct UTransformProxy* PointTransformProxy; // 0x1b8(0x08)
	struct UCombinedTransformGizmo* PointTransformGizmo; // 0x1c0(0x08)
	char pad_1C8[0x108]; // 0x1c8(0x108)
};

// Class ModelingComponents.SpatialCurveDistanceMechanic
// Size: 0x410 (Inherited: 0x30)
struct USpatialCurveDistanceMechanic : UInteractionMechanic {
	char pad_30[0x3e0]; // 0x30(0x3e0)
};

// Class ModelingComponents.TriangleSetComponent
// Size: 0x670 (Inherited: 0x570)
struct UTriangleSetComponent : UMeshComponent {
	struct FBoxSphereBounds Bounds; // 0x568(0x38)
	bool bBoundsDirty; // 0x5a0(0x01)
	char pad_5A9[0xc7]; // 0x5a9(0xc7)
};

// Class ModelingComponents.UVLayoutPreviewProperties
// Size: 0xd0 (Inherited: 0xa8)
struct UUVLayoutPreviewProperties : UInteractiveToolPropertySet {
	bool bEnabled; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	enum class EUVLayoutPreviewSide Side; // 0xac(0x04)
	float Scale; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FVector2D Offset; // 0xb8(0x10)
	bool bShowWireframe; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// Class ModelingComponents.UVLayoutPreview
// Size: 0x160 (Inherited: 0x28)
struct UUVLayoutPreview : UObject {
	struct UUVLayoutPreviewProperties* Settings; // 0x28(0x08)
	struct UPreviewMesh* PreviewMesh; // 0x30(0x08)
	struct UTriangleSetComponent* TriangleComponent; // 0x38(0x08)
	bool bShowBackingRectangle; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct UMaterialInterface* BackingRectangleMaterial; // 0x48(0x08)
	char pad_50[0x110]; // 0x50(0x110)
};

// Class ModelingComponents.VoxelProperties
// Size: 0xc0 (Inherited: 0xa8)
struct UVoxelProperties : UInteractiveToolPropertySet {
	int32_t VoxelCount; // 0xa8(0x04)
	bool bAutoSimplify; // 0xac(0x01)
	bool bRemoveInternalSurfaces; // 0xad(0x01)
	char pad_AE[0x2]; // 0xae(0x02)
	double SimplifyMaxErrorFactor; // 0xb0(0x08)
	double CubeRootMinComponentVolume; // 0xb8(0x08)
};

// Class ModelingComponents.WeightMapSetProperties
// Size: 0xc8 (Inherited: 0xa8)
struct UWeightMapSetProperties : UInteractiveToolPropertySet {
	struct FName WeightMap; // 0xa8(0x08)
	struct TArray<struct FString> WeightMapsList; // 0xb0(0x10)
	bool bInvertWeightMap; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)

	struct TArray<struct FString> GetWeightMapsFunc(); // Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc // (Final|Native|Public) // @ game+0x186ec10
};

