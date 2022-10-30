// Class MeshModelingTools.AddPrimitiveToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UAddPrimitiveToolBuilder : UInteractiveToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.ProceduralShapeToolProperties
// Size: 0xb8 (Inherited: 0xa8)
struct UProceduralShapeToolProperties : UInteractiveToolPropertySet {
	bool bInstanceIfPossible; // 0xa8(0x01)
	enum class EMakeMeshPolygroupMode PolygroupMode; // 0xa9(0x01)
	enum class EMakeMeshPlacementType TargetSurface; // 0xaa(0x01)
	bool bSnapToGrid; // 0xab(0x01)
	enum class EMakeMeshPivotLocation PivotLocation; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float Rotation; // 0xb0(0x04)
	bool bAlignToNormal; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
};

// Class MeshModelingTools.ProceduralBoxToolProperties
// Size: 0xd0 (Inherited: 0xb8)
struct UProceduralBoxToolProperties : UProceduralShapeToolProperties {
	float Width; // 0xb8(0x04)
	float Depth; // 0xbc(0x04)
	float Height; // 0xc0(0x04)
	int32_t WidthSubdivisions; // 0xc4(0x04)
	int32_t DepthSubdivisions; // 0xc8(0x04)
	int32_t HeightSubdivisions; // 0xcc(0x04)
};

// Class MeshModelingTools.ProceduralRectangleToolProperties
// Size: 0xd8 (Inherited: 0xb8)
struct UProceduralRectangleToolProperties : UProceduralShapeToolProperties {
	enum class EProceduralRectType RectangleType; // 0xb8(0x04)
	float Width; // 0xbc(0x04)
	float Depth; // 0xc0(0x04)
	int32_t WidthSubdivisions; // 0xc4(0x04)
	int32_t DepthSubdivisions; // 0xc8(0x04)
	float CornerRadius; // 0xcc(0x04)
	int32_t CornerSlices; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class MeshModelingTools.ProceduralDiscToolProperties
// Size: 0xd0 (Inherited: 0xb8)
struct UProceduralDiscToolProperties : UProceduralShapeToolProperties {
	enum class EProceduralDiscType DiscType; // 0xb8(0x04)
	float Radius; // 0xbc(0x04)
	int32_t RadialSlices; // 0xc0(0x04)
	int32_t RadialSubdivisions; // 0xc4(0x04)
	float HoleRadius; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class MeshModelingTools.ProceduralTorusToolProperties
// Size: 0xc8 (Inherited: 0xb8)
struct UProceduralTorusToolProperties : UProceduralShapeToolProperties {
	float MajorRadius; // 0xb8(0x04)
	float MinorRadius; // 0xbc(0x04)
	int32_t MajorSlices; // 0xc0(0x04)
	int32_t MinorSlices; // 0xc4(0x04)
};

// Class MeshModelingTools.ProceduralCylinderToolProperties
// Size: 0xc8 (Inherited: 0xb8)
struct UProceduralCylinderToolProperties : UProceduralShapeToolProperties {
	float Radius; // 0xb8(0x04)
	float Height; // 0xbc(0x04)
	int32_t RadialSlices; // 0xc0(0x04)
	int32_t HeightSubdivisions; // 0xc4(0x04)
};

// Class MeshModelingTools.ProceduralConeToolProperties
// Size: 0xc8 (Inherited: 0xb8)
struct UProceduralConeToolProperties : UProceduralShapeToolProperties {
	float Radius; // 0xb8(0x04)
	float Height; // 0xbc(0x04)
	int32_t RadialSlices; // 0xc0(0x04)
	int32_t HeightSubdivisions; // 0xc4(0x04)
};

// Class MeshModelingTools.ProceduralArrowToolProperties
// Size: 0xd0 (Inherited: 0xb8)
struct UProceduralArrowToolProperties : UProceduralShapeToolProperties {
	float ShaftRadius; // 0xb8(0x04)
	float ShaftHeight; // 0xbc(0x04)
	float HeadRadius; // 0xc0(0x04)
	float HeadHeight; // 0xc4(0x04)
	int32_t RadialSlices; // 0xc8(0x04)
	int32_t HeightSubdivisions; // 0xcc(0x04)
};

// Class MeshModelingTools.ProceduralSphereToolProperties
// Size: 0xd0 (Inherited: 0xb8)
struct UProceduralSphereToolProperties : UProceduralShapeToolProperties {
	float Radius; // 0xb8(0x04)
	enum class EProceduralSphereType SubdivisionType; // 0xbc(0x04)
	int32_t Subdivisions; // 0xc0(0x04)
	int32_t HorizontalSlices; // 0xc4(0x04)
	int32_t VerticalSlices; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class MeshModelingTools.ProceduralStairsToolProperties
// Size: 0xd8 (Inherited: 0xb8)
struct UProceduralStairsToolProperties : UProceduralShapeToolProperties {
	enum class EProceduralStairsType StairsType; // 0xb8(0x04)
	int32_t NumSteps; // 0xbc(0x04)
	float StepWidth; // 0xc0(0x04)
	float StepHeight; // 0xc4(0x04)
	float StepDepth; // 0xc8(0x04)
	float CurveAngle; // 0xcc(0x04)
	float SpiralAngle; // 0xd0(0x04)
	float InnerRadius; // 0xd4(0x04)
};

// Class MeshModelingTools.LastActorInfo
// Size: 0x58 (Inherited: 0x28)
struct ULastActorInfo : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct AActor* Actor; // 0x38(0x08)
	struct UStaticMesh* StaticMesh; // 0x40(0x08)
	struct UProceduralShapeToolProperties* ShapeSettings; // 0x48(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0x50(0x08)
};

// Class MeshModelingTools.AddPrimitiveTool
// Size: 0x120 (Inherited: 0xa0)
struct UAddPrimitiveTool : USingleClickTool {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct UCreateMeshObjectTypeProperties* OutputTypeProperties; // 0xa8(0x08)
	struct UProceduralShapeToolProperties* ShapeSettings; // 0xb0(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0xb8(0x08)
	struct UPreviewMesh* PreviewMesh; // 0xc0(0x08)
	struct ULastActorInfo* LastGenerated; // 0xc8(0x08)
	struct FString AssetName; // 0xd0(0x10)
	char pad_E0[0x40]; // 0xe0(0x40)
};

// Class MeshModelingTools.AddBoxPrimitiveTool
// Size: 0x120 (Inherited: 0x120)
struct UAddBoxPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddCylinderPrimitiveTool
// Size: 0x120 (Inherited: 0x120)
struct UAddCylinderPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddConePrimitiveTool
// Size: 0x120 (Inherited: 0x120)
struct UAddConePrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddRectanglePrimitiveTool
// Size: 0x120 (Inherited: 0x120)
struct UAddRectanglePrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddDiscPrimitiveTool
// Size: 0x120 (Inherited: 0x120)
struct UAddDiscPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddTorusPrimitiveTool
// Size: 0x120 (Inherited: 0x120)
struct UAddTorusPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddArrowPrimitiveTool
// Size: 0x120 (Inherited: 0x120)
struct UAddArrowPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddSpherePrimitiveTool
// Size: 0x120 (Inherited: 0x120)
struct UAddSpherePrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.AddStairsPrimitiveTool
// Size: 0x120 (Inherited: 0x120)
struct UAddStairsPrimitiveTool : UAddPrimitiveTool {
};

// Class MeshModelingTools.CombineMeshesToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UCombineMeshesToolBuilder : UMultiSelectionMeshEditingToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.CombineMeshesToolProperties
// Size: 0xd0 (Inherited: 0xa8)
struct UCombineMeshesToolProperties : UInteractiveToolPropertySet {
	bool bIsDuplicateMode; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	enum class EBaseCreateFromSelectedTargetType OutputWriteTo; // 0xac(0x04)
	struct FString OutputNewName; // 0xb0(0x10)
	struct FString OutputExistingName; // 0xc0(0x10)
};

// Class MeshModelingTools.CombineMeshesTool
// Size: 0xe0 (Inherited: 0xb8)
struct UCombineMeshesTool : UMultiSelectionMeshEditingTool {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UCombineMeshesToolProperties* BasicProperties; // 0xc0(0x08)
	struct UCreateMeshObjectTypeProperties* OutputTypeProperties; // 0xc8(0x08)
	struct UOnAcceptHandleSourcesPropertiesBase* HandleSourceProperties; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
};

// Class MeshModelingTools.CSGMeshesToolProperties
// Size: 0xd0 (Inherited: 0xa8)
struct UCSGMeshesToolProperties : UInteractiveToolPropertySet {
	enum class ECSGOperation Operation; // 0xa8(0x01)
	bool bTryFixHoles; // 0xa9(0x01)
	bool bTryCollapseEdges; // 0xaa(0x01)
	char pad_AB[0x1]; // 0xab(0x01)
	float WindingThreshold; // 0xac(0x04)
	bool bShowNewBoundaries; // 0xb0(0x01)
	bool bShowSubtractedMesh; // 0xb1(0x01)
	char pad_B2[0x2]; // 0xb2(0x02)
	float SubtractedMeshOpacity; // 0xb4(0x04)
	struct FLinearColor SubtractedMeshColor; // 0xb8(0x10)
	bool bUseFirstMeshMaterials; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// Class MeshModelingTools.TrimMeshesToolProperties
// Size: 0xc8 (Inherited: 0xa8)
struct UTrimMeshesToolProperties : UInteractiveToolPropertySet {
	enum class ETrimOperation WhichMesh; // 0xa8(0x01)
	enum class ETrimSide TrimSide; // 0xa9(0x01)
	char pad_AA[0x2]; // 0xaa(0x02)
	float WindingThreshold; // 0xac(0x04)
	bool bShowTrimmingMesh; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float OpacityOfTrimmingMesh; // 0xb4(0x04)
	struct FLinearColor ColorOfTrimmingMesh; // 0xb8(0x10)
};

// Class MeshModelingTools.CSGMeshesTool
// Size: 0x158 (Inherited: 0x100)
struct UCSGMeshesTool : UBaseCreateFromSelectedTool {
	struct UCSGMeshesToolProperties* CSGProperties; // 0x100(0x08)
	struct UTrimMeshesToolProperties* TrimProperties; // 0x108(0x08)
	char pad_110[0x10]; // 0x110(0x10)
	struct TArray<struct UPreviewMesh*> OriginalMeshPreviews; // 0x120(0x10)
	struct UMaterialInstanceDynamic* PreviewsGhostMaterial; // 0x130(0x08)
	struct ULineSetComponent* DrawnLineSet; // 0x138(0x08)
	char pad_140[0x18]; // 0x140(0x18)
};

// Class MeshModelingTools.CSGMeshesToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UCSGMeshesToolBuilder : UBaseCreateFromSelectedToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.CutMeshWithMeshToolProperties
// Size: 0xb8 (Inherited: 0xa8)
struct UCutMeshWithMeshToolProperties : UInteractiveToolPropertySet {
	bool bTryFixHoles; // 0xa8(0x01)
	bool bTryCollapseEdges; // 0xa9(0x01)
	char pad_AA[0x2]; // 0xaa(0x02)
	float WindingThreshold; // 0xac(0x04)
	bool bShowNewBoundaries; // 0xb0(0x01)
	bool bUseFirstMeshMaterials; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
};

// Class MeshModelingTools.CutMeshWithMeshTool
// Size: 0x378 (Inherited: 0x100)
struct UCutMeshWithMeshTool : UBaseCreateFromSelectedTool {
	struct UCutMeshWithMeshToolProperties* CutProperties; // 0x100(0x08)
	struct UPreviewMesh* IntersectPreviewMesh; // 0x108(0x08)
	char pad_110[0x20]; // 0x110(0x20)
	struct ULineSetComponent* DrawnLineSet; // 0x130(0x08)
	char pad_138[0x240]; // 0x138(0x240)
};

// Class MeshModelingTools.CutMeshWithMeshToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UCutMeshWithMeshToolBuilder : UBaseCreateFromSelectedToolBuilder {
};

// Class MeshModelingTools.DrawAndRevolveToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UDrawAndRevolveToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.RevolveProperties
// Size: 0x118 (Inherited: 0xa8)
struct URevolveProperties : UInteractiveToolPropertySet {
	double RevolveDegreesClamped; // 0xa8(0x08)
	double RevolveDegrees; // 0xb0(0x08)
	double RevolveDegreesOffset; // 0xb8(0x08)
	double StepsMaxDegrees; // 0xc0(0x08)
	bool bExplicitSteps; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	int32_t NumExplicitSteps; // 0xcc(0x04)
	double HeightOffsetPerDegree; // 0xd0(0x08)
	bool bReverseRevolutionDirection; // 0xd8(0x01)
	bool bFlipMesh; // 0xd9(0x01)
	bool bSharpNormals; // 0xda(0x01)
	char pad_DB[0x5]; // 0xdb(0x05)
	double SharpNormalsDegreeThreshold; // 0xe0(0x08)
	bool bPathAtMidpointOfStep; // 0xe8(0x01)
	enum class ERevolvePropertiesPolygroupMode PolygroupMode; // 0xe9(0x01)
	enum class ERevolvePropertiesQuadSplit QuadSplitMode; // 0xea(0x01)
	char pad_EB[0x2d]; // 0xeb(0x2d)
};

// Class MeshModelingTools.RevolveToolProperties
// Size: 0x158 (Inherited: 0x118)
struct URevolveToolProperties : URevolveProperties {
	enum class ERevolvePropertiesCapFillMode CapFillMode; // 0x118(0x01)
	bool bClosePathToAxis; // 0x119(0x01)
	char pad_11A[0x6]; // 0x11a(0x06)
	struct FVector DrawPlaneOrigin; // 0x120(0x18)
	struct FRotator DrawPlaneOrientation; // 0x138(0x18)
	bool bEnableSnapping; // 0x150(0x01)
	bool bAllowedToEditDrawPlane; // 0x151(0x01)
	char pad_152[0x6]; // 0x152(0x06)
};

// Class MeshModelingTools.RevolveOperatorFactory
// Size: 0x38 (Inherited: 0x28)
struct URevolveOperatorFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UDrawAndRevolveTool* RevolveTool; // 0x30(0x08)
};

// Class MeshModelingTools.DrawAndRevolveTool
// Size: 0x160 (Inherited: 0x98)
struct UDrawAndRevolveTool : UInteractiveTool {
	char pad_98[0x90]; // 0x98(0x90)
	struct UCurveControlPointsMechanic* ControlPointsMechanic; // 0x128(0x08)
	struct UConstructionPlaneMechanic* PlaneMechanic; // 0x130(0x08)
	struct UCreateMeshObjectTypeProperties* OutputTypeProperties; // 0x138(0x08)
	struct URevolveToolProperties* Settings; // 0x140(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0x148(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0x150(0x08)
	char pad_158[0x8]; // 0x158(0x08)
};

// Class MeshModelingTools.DrawPolygonToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UDrawPolygonToolBuilder : UInteractiveToolBuilder {
};

// Class MeshModelingTools.DrawPolygonToolStandardProperties
// Size: 0xc0 (Inherited: 0xa8)
struct UDrawPolygonToolStandardProperties : UInteractiveToolPropertySet {
	enum class EDrawPolygonDrawMode PolygonDrawMode; // 0xa8(0x01)
	bool bAllowSelfIntersections; // 0xa9(0x01)
	char pad_AA[0x2]; // 0xaa(0x02)
	float FeatureSizeRatio; // 0xac(0x04)
	int32_t RadialSlices; // 0xb0(0x04)
	float Distance; // 0xb4(0x04)
	bool bShowGridGizmo; // 0xb8(0x01)
	enum class EDrawPolygonExtrudeMode ExtrudeMode; // 0xb9(0x01)
	char pad_BA[0x2]; // 0xba(0x02)
	float ExtrudeHeight; // 0xbc(0x04)
};

// Class MeshModelingTools.DrawPolygonToolSnapProperties
// Size: 0xb8 (Inherited: 0xa8)
struct UDrawPolygonToolSnapProperties : UInteractiveToolPropertySet {
	bool bEnableSnapping; // 0xa8(0x01)
	bool bSnapToWorldGrid; // 0xa9(0x01)
	bool bSnapToVertices; // 0xaa(0x01)
	bool bSnapToEdges; // 0xab(0x01)
	bool bSnapToAxes; // 0xac(0x01)
	bool bSnapToLengths; // 0xad(0x01)
	bool bSnapToSurfaces; // 0xae(0x01)
	char pad_AF[0x1]; // 0xaf(0x01)
	float SnapToSurfacesOffset; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class MeshModelingTools.DrawPolygonTool
// Size: 0x5a0 (Inherited: 0x98)
struct UDrawPolygonTool : UInteractiveTool {
	char pad_98[0x8]; // 0x98(0x08)
	struct UCreateMeshObjectTypeProperties* OutputTypeProperties; // 0xa0(0x08)
	struct UDrawPolygonToolStandardProperties* PolygonProperties; // 0xa8(0x08)
	struct UDrawPolygonToolSnapProperties* SnapProperties; // 0xb0(0x08)
	struct UNewMeshMaterialProperties* MaterialProperties; // 0xb8(0x08)
	char pad_C0[0xd0]; // 0xc0(0xd0)
	struct UPreviewMesh* PreviewMesh; // 0x190(0x08)
	struct UCombinedTransformGizmo* PlaneTransformGizmo; // 0x198(0x08)
	struct UTransformProxy* PlaneTransformProxy; // 0x1a0(0x08)
	char pad_1A8[0x3e0]; // 0x1a8(0x3e0)
	struct UPlaneDistanceFromHitMechanic* HeightMechanic; // 0x588(0x08)
	char pad_590[0x10]; // 0x590(0x10)
};

// Class MeshModelingTools.EditMeshPolygonsToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UEditMeshPolygonsToolBuilder : USingleSelectionMeshEditingToolBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MeshModelingTools.PolyEditCommonProperties
// Size: 0xb8 (Inherited: 0xa8)
struct UPolyEditCommonProperties : UInteractiveToolPropertySet {
	bool bShowWireframe; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	enum class ELocalFrameMode LocalFrameMode; // 0xac(0x04)
	bool bLockRotation; // 0xb0(0x01)
	bool bLocalCoordSystem; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
};

// Class MeshModelingTools.EditMeshPolygonsActionModeToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UEditMeshPolygonsActionModeToolBuilder : UEditMeshPolygonsToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.EditMeshPolygonsSelectionModeToolBuilder
// Size: 0x38 (Inherited: 0x30)
struct UEditMeshPolygonsSelectionModeToolBuilder : UEditMeshPolygonsToolBuilder {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet
// Size: 0xb0 (Inherited: 0xa8)
struct UEditMeshPolygonsToolActionPropertySet : UInteractiveToolPropertySet {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class MeshModelingTools.EditMeshPolygonsToolActions
// Size: 0xb0 (Inherited: 0xb0)
struct UEditMeshPolygonsToolActions : UEditMeshPolygonsToolActionPropertySet {

	void SimplifyByGroups(); // Function MeshModelingTools.EditMeshPolygonsToolActions.SimplifyByGroups // (Final|Native|Public) // @ game+0x1802650
	void Retriangulate(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate // (Final|Native|Public) // @ game+0x1802630
	void RecalcNormals(); // Function MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals // (Final|Native|Public) // @ game+0x1802610
	void PushPull(); // Function MeshModelingTools.EditMeshPolygonsToolActions.PushPull // (Final|Native|Public) // @ game+0x18025f0
	void Outset(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Outset // (Final|Native|Public) // @ game+0x1802590
	void Offset(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Offset // (Final|Native|Public) // @ game+0x1802570
	void Merge(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Merge // (Final|Native|Public) // @ game+0x1802550
	void Inset(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Inset // (Final|Native|Public) // @ game+0x1802530
	void InsertEdgeLoop(); // Function MeshModelingTools.EditMeshPolygonsToolActions.InsertEdgeLoop // (Final|Native|Public) // @ game+0x1802510
	void InsertEdge(); // Function MeshModelingTools.EditMeshPolygonsToolActions.InsertEdge // (Final|Native|Public) // @ game+0x18024f0
	void Flip(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Flip // (Final|Native|Public) // @ game+0x18024b0
	void Extrude(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Extrude // (Final|Native|Public) // @ game+0x1802470
	void Duplicate(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Duplicate // (Final|Native|Public) // @ game+0x1802450
	void Disconnect(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Disconnect // (Final|Native|Public) // @ game+0x1802430
	void Delete(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Delete // (Final|Native|Public) // @ game+0x1802410
	void Decompose(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Decompose // (Final|Native|Public) // @ game+0x18023f0
	void CutFaces(); // Function MeshModelingTools.EditMeshPolygonsToolActions.CutFaces // (Final|Native|Public) // @ game+0x18023d0
	void Bevel(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Bevel // (Final|Native|Public) // @ game+0x1802350
};

// Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles
// Size: 0xb0 (Inherited: 0xb0)
struct UEditMeshPolygonsToolActions_Triangles : UEditMeshPolygonsToolActionPropertySet {

	void RecalcNormals(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals // (Final|Native|Public) // @ game+0x1802610
	void PushPull(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.PushPull // (Final|Native|Public) // @ game+0x18025f0
	void Poke(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke // (Final|Native|Public) // @ game+0x18025d0
	void Outset(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset // (Final|Native|Public) // @ game+0x1802590
	void Offset(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset // (Final|Native|Public) // @ game+0x1802570
	void Inset(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Inset // (Final|Native|Public) // @ game+0x1802530
	void Flip(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip // (Final|Native|Public) // @ game+0x18024b0
	void Extrude(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude // (Final|Native|Public) // @ game+0x1802470
	void Duplicate(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Duplicate // (Final|Native|Public) // @ game+0x1802450
	void Disconnect(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect // (Final|Native|Public) // @ game+0x1802430
	void Delete(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Delete // (Final|Native|Public) // @ game+0x1802410
	void CutFaces(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces // (Final|Native|Public) // @ game+0x18023d0
};

// Class MeshModelingTools.EditMeshPolygonsToolUVActions
// Size: 0xb0 (Inherited: 0xb0)
struct UEditMeshPolygonsToolUVActions : UEditMeshPolygonsToolActionPropertySet {

	void PlanarProjection(); // Function MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection // (Final|Native|Public) // @ game+0x18025b0
};

// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions
// Size: 0xb0 (Inherited: 0xb0)
struct UEditMeshPolygonsToolEdgeActions : UEditMeshPolygonsToolActionPropertySet {

	void Weld(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld // (Final|Native|Public) // @ game+0x18026b0
	void Straighten(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten // (Final|Native|Public) // @ game+0x1802690
	void FillHole(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole // (Final|Native|Public) // @ game+0x1802490
	void Bevel(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Bevel // (Final|Native|Public) // @ game+0x1802370
};

// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
// Size: 0xb0 (Inherited: 0xb0)
struct UEditMeshPolygonsToolEdgeActions_Triangles : UEditMeshPolygonsToolActionPropertySet {

	void Weld(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld // (Final|Native|Public) // @ game+0x18026b0
	void Split(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split // (Final|Native|Public) // @ game+0x1802670
	void Flip(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip // (Final|Native|Public) // @ game+0x18024d0
	void FillHole(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole // (Final|Native|Public) // @ game+0x1802490
	void Collapse(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse // (Final|Native|Public) // @ game+0x18023b0
};

// Class MeshModelingTools.EditMeshPolygonsToolCancelAction
// Size: 0xb0 (Inherited: 0xb0)
struct UEditMeshPolygonsToolCancelAction : UEditMeshPolygonsToolActionPropertySet {

	void Done(); // Function MeshModelingTools.EditMeshPolygonsToolCancelAction.Done // (Final|Native|Public) // @ game+0x1802390
};

// Class MeshModelingTools.EditMeshPolygonsToolAcceptCancelAction
// Size: 0xb0 (Inherited: 0xb0)
struct UEditMeshPolygonsToolAcceptCancelAction : UEditMeshPolygonsToolActionPropertySet {

	void Cancel(); // Function MeshModelingTools.EditMeshPolygonsToolAcceptCancelAction.Cancel // (Final|Native|Public) // @ game+0x1802390
	void Apply(); // Function MeshModelingTools.EditMeshPolygonsToolAcceptCancelAction.Apply // (Final|Native|Public) // @ game+0x1802330
};

// Class MeshModelingTools.EditMeshPolygonsTool
// Size: 0x7b0 (Inherited: 0xb8)
struct UEditMeshPolygonsTool : USingleSelectionMeshEditingTool {
	char pad_B8[0x28]; // 0xb8(0x28)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xe0(0x08)
	struct UPolyEditCommonProperties* CommonProps; // 0xe8(0x08)
	struct UEditMeshPolygonsToolActions* EditActions; // 0xf0(0x08)
	struct UEditMeshPolygonsToolActions_Triangles* EditActions_Triangles; // 0xf8(0x08)
	struct UEditMeshPolygonsToolEdgeActions* EditEdgeActions; // 0x100(0x08)
	struct UEditMeshPolygonsToolEdgeActions_Triangles* EditEdgeActions_Triangles; // 0x108(0x08)
	struct UEditMeshPolygonsToolUVActions* EditUVActions; // 0x110(0x08)
	struct UEditMeshPolygonsToolCancelAction* CancelAction; // 0x118(0x08)
	struct UEditMeshPolygonsToolAcceptCancelAction* AcceptCancelAction; // 0x120(0x08)
	struct UPolyEditExtrudeActivity* ExtrudeActivity; // 0x128(0x08)
	struct UPolyEditInsetOutsetActivity* InsetOutsetActivity; // 0x130(0x08)
	struct UPolyEditCutFacesActivity* CutFacesActivity; // 0x138(0x08)
	struct UPolyEditPlanarProjectionUVActivity* PlanarProjectionUVActivity; // 0x140(0x08)
	struct UPolyEditInsertEdgeActivity* InsertEdgeActivity; // 0x148(0x08)
	struct UPolyEditInsertEdgeLoopActivity* InsertEdgeLoopActivity; // 0x150(0x08)
	struct UPolyEditBevelEdgeActivity* BevelEdgeActivity; // 0x158(0x08)
	char pad_160[0x38]; // 0x160(0x38)
	struct UPolyEditActivityContext* ActivityContext; // 0x198(0x08)
	struct UPolygonSelectionMechanic* SelectionMechanic; // 0x1a0(0x08)
	struct UDragAlignmentMechanic* DragAlignmentMechanic; // 0x1a8(0x08)
	struct UCombinedTransformGizmo* TransformGizmo; // 0x1b0(0x08)
	struct UTransformProxy* TransformProxy; // 0x1b8(0x08)
	char pad_1C0[0x5f0]; // 0x1c0(0x5f0)
};

// Class MeshModelingTools.NewMeshMaterialProperties
// Size: 0xb8 (Inherited: 0xa8)
struct UNewMeshMaterialProperties : UInteractiveToolPropertySet {
	struct TWeakObjectPtr<struct UMaterialInterface> Material; // 0xa8(0x08)
	float UVScale; // 0xb0(0x04)
	bool bWorldSpaceUVScale; // 0xb4(0x01)
	bool bShowWireframe; // 0xb5(0x01)
	bool bShowExtendedOptions; // 0xb6(0x01)
	char pad_B7[0x1]; // 0xb7(0x01)
};

// Class MeshModelingTools.ExistingMeshMaterialProperties
// Size: 0xe0 (Inherited: 0xa8)
struct UExistingMeshMaterialProperties : UInteractiveToolPropertySet {
	enum class ESetMeshMaterialMode MaterialMode; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float CheckerDensity; // 0xac(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0xb0(0x08)
	struct FString UVChannel; // 0xb8(0x10)
	struct TArray<struct FString> UVChannelNamesList; // 0xc8(0x10)
	struct UMaterialInstanceDynamic* CheckerMaterial; // 0xd8(0x08)

	struct TArray<struct FString> GetUVChannelNamesFunc(); // Function MeshModelingTools.ExistingMeshMaterialProperties.GetUVChannelNamesFunc // (Final|Native|Public|Const) // @ game+0x1806d70
};

// Class MeshModelingTools.MeshEditingViewProperties
// Size: 0xf8 (Inherited: 0xa8)
struct UMeshEditingViewProperties : UInteractiveToolPropertySet {
	bool bShowWireframe; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	enum class EMeshEditingMaterialModes MaterialMode; // 0xac(0x04)
	bool bFlatShading; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	struct FLinearColor Color; // 0xb4(0x10)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UTexture2D* Image; // 0xc8(0x08)
	double Opacity; // 0xd0(0x08)
	struct FLinearColor TransparentMaterialColor; // 0xd8(0x10)
	bool bTwoSided; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct TWeakObjectPtr<struct UMaterialInterface> CustomMaterial; // 0xec(0x08)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class MeshModelingTools.MeshUVChannelProperties
// Size: 0xc8 (Inherited: 0xa8)
struct UMeshUVChannelProperties : UInteractiveToolPropertySet {
	struct FString UVChannel; // 0xa8(0x10)
	struct TArray<struct FString> UVChannelNamesList; // 0xb8(0x10)

	struct TArray<struct FString> GetUVChannelNamesFunc(); // Function MeshModelingTools.MeshUVChannelProperties.GetUVChannelNamesFunc // (Final|Native|Public|Const) // @ game+0x1806db0
};

// Class MeshModelingTools.PolyEditActivityContext
// Size: 0x120 (Inherited: 0x28)
struct UPolyEditActivityContext : UObject {
	struct UPolyEditCommonProperties* CommonProperties; // 0x28(0x08)
	char pad_30[0x10]; // 0x30(0x10)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0x40(0x08)
	char pad_48[0x28]; // 0x48(0x28)
	struct UPolygonSelectionMechanic* SelectionMechanic; // 0x70(0x08)
	char pad_78[0xa8]; // 0x78(0xa8)
};

// Class MeshModelingTools.PolyEditBevelEdgeProperties
// Size: 0xb0 (Inherited: 0xa8)
struct UPolyEditBevelEdgeProperties : UInteractiveToolPropertySet {
	double BevelDistance; // 0xa8(0x08)
};

// Class MeshModelingTools.PolyEditBevelEdgeActivity
// Size: 0x140 (Inherited: 0x30)
struct UPolyEditBevelEdgeActivity : UInteractiveToolActivity {
	char pad_30[0x8]; // 0x30(0x08)
	struct UPolyEditBevelEdgeProperties* BevelProperties; // 0x38(0x08)
	struct UPolyEditActivityContext* ActivityContext; // 0x40(0x08)
	char pad_48[0xf8]; // 0x48(0xf8)
};

// Class MeshModelingTools.PolyEditCutProperties
// Size: 0xb0 (Inherited: 0xa8)
struct UPolyEditCutProperties : UInteractiveToolPropertySet {
	enum class EPolyEditCutPlaneOrientation Orientation; // 0xa8(0x04)
	bool bSnapToVertices; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
};

// Class MeshModelingTools.PolyEditCutFacesActivity
// Size: 0xc0 (Inherited: 0x30)
struct UPolyEditCutFacesActivity : UInteractiveToolActivity {
	char pad_30[0x10]; // 0x30(0x10)
	struct UPolyEditCutProperties* CutProperties; // 0x40(0x08)
	struct UPolyEditPreviewMesh* EditPreview; // 0x48(0x08)
	struct UCollectSurfacePathMechanic* SurfacePathMechanic; // 0x50(0x08)
	struct UPolyEditActivityContext* ActivityContext; // 0x58(0x08)
	char pad_60[0x60]; // 0x60(0x60)
};

// Class MeshModelingTools.PolyEditExtrudeProperties
// Size: 0xc8 (Inherited: 0xa8)
struct UPolyEditExtrudeProperties : UInteractiveToolPropertySet {
	enum class EPolyEditExtrudeDirection Direction; // 0xa8(0x04)
	enum class EPolyEditExtrudeDirection MeasureDirection; // 0xac(0x04)
	bool bShellsToSolids; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	enum class EPolyEditExtrudeModeOptions DirectionMode; // 0xb4(0x04)
	double MaxDistanceScaleFactor; // 0xb8(0x08)
	bool bUseColinearityForSettingBorderGroups; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class MeshModelingTools.PolyEditOffsetProperties
// Size: 0xc8 (Inherited: 0xa8)
struct UPolyEditOffsetProperties : UInteractiveToolPropertySet {
	enum class EPolyEditOffsetModeOptions DirectionMode; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	double MaxDistanceScaleFactor; // 0xb0(0x08)
	bool bShellsToSolids; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	enum class EPolyEditExtrudeDirection MeasureDirection; // 0xbc(0x04)
	bool bUseColinearityForSettingBorderGroups; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class MeshModelingTools.PolyEditPushPullProperties
// Size: 0xc8 (Inherited: 0xa8)
struct UPolyEditPushPullProperties : UInteractiveToolPropertySet {
	enum class EPolyEditPushPullModeOptions DirectionMode; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	double MaxDistanceScaleFactor; // 0xb0(0x08)
	bool bShellsToSolids; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	enum class EPolyEditExtrudeDirection MeasureDirection; // 0xbc(0x04)
	bool bUseColinearityForSettingBorderGroups; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class MeshModelingTools.PolyEditExtrudeActivity
// Size: 0x208 (Inherited: 0x30)
struct UPolyEditExtrudeActivity : UInteractiveToolActivity {
	char pad_30[0x20]; // 0x30(0x20)
	struct UPolyEditExtrudeProperties* ExtrudeProperties; // 0x50(0x08)
	struct UPolyEditOffsetProperties* OffsetProperties; // 0x58(0x08)
	struct UPolyEditPushPullProperties* PushPullProperties; // 0x60(0x08)
	struct UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic; // 0x68(0x08)
	struct UPolyEditActivityContext* ActivityContext; // 0x70(0x08)
	char pad_78[0x190]; // 0x78(0x190)
};

// Class MeshModelingTools.GroupEdgeInsertionProperties
// Size: 0xb8 (Inherited: 0xa8)
struct UGroupEdgeInsertionProperties : UInteractiveToolPropertySet {
	enum class EGroupEdgeInsertionMode InsertionMode; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	double VertexTolerance; // 0xb0(0x08)
};

// Class MeshModelingTools.PolyEditInsertEdgeActivity
// Size: 0x440 (Inherited: 0x30)
struct UPolyEditInsertEdgeActivity : UInteractiveToolActivity {
	char pad_30[0x18]; // 0x30(0x18)
	struct UGroupEdgeInsertionProperties* Settings; // 0x48(0x08)
	struct UPolyEditActivityContext* ActivityContext; // 0x50(0x08)
	char pad_58[0x3e8]; // 0x58(0x3e8)
};

// Class MeshModelingTools.EdgeLoopInsertionProperties
// Size: 0xd8 (Inherited: 0xa8)
struct UEdgeLoopInsertionProperties : UInteractiveToolPropertySet {
	enum class EEdgeLoopPositioningMode PositionMode; // 0xa8(0x04)
	enum class EEdgeLoopInsertionMode InsertionMode; // 0xac(0x04)
	int32_t NumLoops; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	double ProportionOffset; // 0xb8(0x08)
	double DistanceOffset; // 0xc0(0x08)
	bool bInteractive; // 0xc8(0x01)
	bool bFlipOffsetDirection; // 0xc9(0x01)
	bool bHighlightProblemGroups; // 0xca(0x01)
	char pad_CB[0x5]; // 0xcb(0x05)
	double VertexTolerance; // 0xd0(0x08)
};

// Class MeshModelingTools.PolyEditInsertEdgeLoopActivity
// Size: 0x400 (Inherited: 0x30)
struct UPolyEditInsertEdgeLoopActivity : UInteractiveToolActivity {
	char pad_30[0x18]; // 0x30(0x18)
	struct UEdgeLoopInsertionProperties* Settings; // 0x48(0x08)
	struct UPolyEditActivityContext* ActivityContext; // 0x50(0x08)
	char pad_58[0x3a8]; // 0x58(0x3a8)
};

// Class MeshModelingTools.PolyEditInsetOutsetProperties
// Size: 0xb8 (Inherited: 0xa8)
struct UPolyEditInsetOutsetProperties : UInteractiveToolPropertySet {
	float Softness; // 0xa8(0x04)
	bool bBoundaryOnly; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float AreaScale; // 0xb0(0x04)
	bool bReproject; // 0xb4(0x01)
	bool bOutset; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
};

// Class MeshModelingTools.PolyEditInsetOutsetActivity
// Size: 0x70 (Inherited: 0x30)
struct UPolyEditInsetOutsetActivity : UInteractiveToolActivity {
	char pad_30[0x10]; // 0x30(0x10)
	struct UPolyEditInsetOutsetProperties* Settings; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
	struct UPolyEditPreviewMesh* EditPreview; // 0x50(0x08)
	struct USpatialCurveDistanceMechanic* CurveDistMechanic; // 0x58(0x08)
	struct UPolyEditActivityContext* ActivityContext; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class MeshModelingTools.PolyEditSetUVProperties
// Size: 0xb0 (Inherited: 0xa8)
struct UPolyEditSetUVProperties : UInteractiveToolPropertySet {
	bool bShowMaterial; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class MeshModelingTools.PolyEditPlanarProjectionUVActivity
// Size: 0xf0 (Inherited: 0x30)
struct UPolyEditPlanarProjectionUVActivity : UInteractiveToolActivity {
	char pad_30[0x10]; // 0x30(0x10)
	struct UPolyEditSetUVProperties* SetUVProperties; // 0x40(0x08)
	struct UPolyEditPreviewMesh* EditPreview; // 0x48(0x08)
	struct UCollectSurfacePathMechanic* SurfacePathMechanic; // 0x50(0x08)
	struct UPolyEditActivityContext* ActivityContext; // 0x58(0x08)
	char pad_60[0x90]; // 0x60(0x90)
};

// Class MeshModelingTools.RecomputeUVsToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct URecomputeUVsToolBuilder : USingleSelectionMeshEditingToolBuilder {
};

// Class MeshModelingTools.RecomputeUVsTool
// Size: 0x118 (Inherited: 0xb8)
struct URecomputeUVsTool : USingleSelectionMeshEditingTool {
	struct UMeshUVChannelProperties* UVChannelProperties; // 0xb8(0x08)
	struct URecomputeUVsToolProperties* Settings; // 0xc0(0x08)
	struct UPolygroupLayersProperties* PolygroupLayerProperties; // 0xc8(0x08)
	struct UExistingMeshMaterialProperties* MaterialSettings; // 0xd0(0x08)
	bool bCreateUVLayoutViewOnSetup; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct UUVLayoutPreview* UVLayoutView; // 0xe0(0x08)
	struct URecomputeUVsOpFactory* RecomputeUVsOpFactory; // 0xe8(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xf0(0x08)
	char pad_F8[0x20]; // 0xf8(0x20)
};

// Class MeshModelingTools.UVLayoutToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UUVLayoutToolBuilder : UMultiSelectionMeshEditingToolBuilder {
};

// Class MeshModelingTools.UVLayoutTool
// Size: 0x160 (Inherited: 0xb8)
struct UUVLayoutTool : UMultiSelectionMeshEditingTool {
	struct UMeshUVChannelProperties* UVChannelProperties; // 0xb8(0x08)
	struct UUVLayoutProperties* BasicProperties; // 0xc0(0x08)
	struct UExistingMeshMaterialProperties* MaterialSettings; // 0xc8(0x08)
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xd0(0x10)
	struct TArray<struct UUVLayoutOperatorFactory*> Factories; // 0xe0(0x10)
	char pad_F0[0x60]; // 0xf0(0x60)
	struct UUVLayoutPreview* UVLayoutView; // 0x150(0x08)
	char pad_158[0x8]; // 0x158(0x08)
};

// Class MeshModelingTools.UVProjectionToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UUVProjectionToolBuilder : USingleSelectionMeshEditingToolBuilder {
};

// Class MeshModelingTools.UVProjectionToolEditActions
// Size: 0xb0 (Inherited: 0xa8)
struct UUVProjectionToolEditActions : UInteractiveToolPropertySet {
	char pad_A8[0x8]; // 0xa8(0x08)

	void Reset(); // Function MeshModelingTools.UVProjectionToolEditActions.Reset // (Final|Native|Public) // @ game+0x1802470
	void AutoFitAlign(); // Function MeshModelingTools.UVProjectionToolEditActions.AutoFitAlign // (Final|Native|Public) // @ game+0x1802390
	void AutoFit(); // Function MeshModelingTools.UVProjectionToolEditActions.AutoFit // (Final|Native|Public) // @ game+0x1802330
};

// Class MeshModelingTools.UVProjectionToolProperties
// Size: 0x190 (Inherited: 0xa8)
struct UUVProjectionToolProperties : UInteractiveToolPropertySet {
	enum class EUVProjectionMethod ProjectionType; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FVector Dimensions; // 0xb0(0x18)
	bool bUniformDimensions; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	enum class EUVProjectionToolInitializationMode Initialization; // 0xcc(0x04)
	float CylinderSplitAngle; // 0xd0(0x04)
	float ExpMapNormalBlending; // 0xd4(0x04)
	int32_t ExpMapSmoothingSteps; // 0xd8(0x04)
	float ExpMapSmoothingAlpha; // 0xdc(0x04)
	float Rotation; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FVector2D Scale; // 0xe8(0x10)
	struct FVector2D Translation; // 0xf8(0x10)
	struct FVector SavedDimensions; // 0x108(0x18)
	bool bSavedUniformDimensions; // 0x120(0x01)
	char pad_121[0xf]; // 0x121(0x0f)
	struct FTransform SavedTransform; // 0x130(0x60)
};

// Class MeshModelingTools.UVProjectionOperatorFactory
// Size: 0x38 (Inherited: 0x28)
struct UUVProjectionOperatorFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UUVProjectionTool* Tool; // 0x30(0x08)
};

// Class MeshModelingTools.UVProjectionTool
// Size: 0x450 (Inherited: 0xb8)
struct UUVProjectionTool : USingleSelectionMeshEditingTool {
	struct UMeshUVChannelProperties* UVChannelProperties; // 0xb8(0x08)
	struct UUVProjectionToolProperties* BasicProperties; // 0xc0(0x08)
	struct UUVProjectionToolEditActions* EditActions; // 0xc8(0x08)
	struct UExistingMeshMaterialProperties* MaterialSettings; // 0xd0(0x08)
	struct UMeshOpPreviewWithBackgroundCompute* Preview; // 0xd8(0x08)
	struct UMaterialInstanceDynamic* CheckerMaterial; // 0xe0(0x08)
	struct UCombinedTransformGizmo* TransformGizmo; // 0xe8(0x08)
	struct UTransformProxy* TransformProxy; // 0xf0(0x08)
	struct UUVProjectionOperatorFactory* OperatorFactory; // 0xf8(0x08)
	struct UPreviewGeometry* EdgeRenderer; // 0x100(0x08)
	char pad_108[0x330]; // 0x108(0x330)
	struct USingleClickInputBehavior* ClickToSetPlaneBehavior; // 0x438(0x08)
	char pad_440[0x10]; // 0x440(0x10)
};

