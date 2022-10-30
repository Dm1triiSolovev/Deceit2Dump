// Enum GeometryScriptingCore.EGeometryScriptCollisionGenerationMethod
enum class EGeometryScriptCollisionGenerationMethod : uint8 {
	AlignedBoxes = 0,
	OrientedBoxes = 1,
	MinimalSpheres = 2,
	Capsules = 3,
	ConvexHulls = 4,
	SweptHulls = 5,
	MinVolumeShapes = 6,
	EGeometryScriptCollisionGenerationMethod_MAX = 7
};

// Enum GeometryScriptingCore.EGeometryScriptSweptHullAxis
enum class EGeometryScriptSweptHullAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	SmallestBoxDimension = 3,
	SmallestVolume = 4,
	EGeometryScriptSweptHullAxis_MAX = 5
};

// Enum GeometryScriptingCore.EGeometryScriptOutcomePins
enum class EGeometryScriptOutcomePins : uint8 {
	Failure = 0,
	Success = 1,
	EGeometryScriptOutcomePins_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptSearchOutcomePins
enum class EGeometryScriptSearchOutcomePins : uint8 {
	Found = 0,
	NotFound = 1,
	EGeometryScriptSearchOutcomePins_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptContainmentOutcomePins
enum class EGeometryScriptContainmentOutcomePins : uint8 {
	Inside = 0,
	Outside = 1,
	EGeometryScriptContainmentOutcomePins_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptLODType
enum class EGeometryScriptLODType : uint8 {
	MaxAvailable = 0,
	HiResSourceModel = 1,
	SourceModel = 2,
	RenderData = 3,
	EGeometryScriptLODType_MAX = 4
};

// Enum GeometryScriptingCore.EGeometryScriptIndexType
enum class EGeometryScriptIndexType : uint8 {
	Any = 0,
	Triangle = 1,
	Vertex = 2,
	MaterialID = 3,
	PolygroupID = 4,
	EGeometryScriptIndexType_MAX = 5
};

// Enum GeometryScriptingCore.EGeometryScriptDebugMessageType
enum class EGeometryScriptDebugMessageType : uint8 {
	ErrorMessage = 0,
	WarningMessage = 1,
	EGeometryScriptDebugMessageType_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptErrorType
enum class EGeometryScriptErrorType : uint8 {
	NoError = 0,
	UnknownError = 1,
	InvalidInputs = 2,
	OperationFailed = 3,
	EGeometryScriptErrorType_MAX = 4
};

// Enum GeometryScriptingCore.EGeometryScriptBooleanOperation
enum class EGeometryScriptBooleanOperation : uint8 {
	Union = 0,
	Intersection = 1,
	Subtract = 2,
	EGeometryScriptBooleanOperation_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptFlareType
enum class EGeometryScriptFlareType : uint8 {
	SinMode = 0,
	SinSquaredMode = 1,
	TriangleMode = 2,
	EGeometryScriptFlareType_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptMathWarpType
enum class EGeometryScriptMathWarpType : uint8 {
	SinWave1D = 0,
	SinWave2D = 1,
	SinWave3D = 2,
	EGeometryScriptMathWarpType_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptTangentTypes
enum class EGeometryScriptTangentTypes : uint8 {
	FastMikkT = 0,
	PerTriangle = 1,
	EGeometryScriptTangentTypes_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptPrimitivePolygroupMode
enum class EGeometryScriptPrimitivePolygroupMode : uint8 {
	SingleGroup = 0,
	PerFace = 1,
	PerQuad = 2,
	EGeometryScriptPrimitivePolygroupMode_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptPrimitiveOriginMode
enum class EGeometryScriptPrimitiveOriginMode : uint8 {
	Center = 0,
	Base = 1,
	EGeometryScriptPrimitiveOriginMode_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptPrimitiveUVMode
enum class EGeometryScriptPrimitiveUVMode : uint8 {
	Uniform = 0,
	ScaleToFill = 1,
	EGeometryScriptPrimitiveUVMode_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptFillHolesMethod
enum class EGeometryScriptFillHolesMethod : uint8 {
	Automatic = 0,
	MinimalFill = 1,
	PolygonTriangulation = 2,
	TriangleFan = 3,
	PlanarProjection = 4,
	EGeometryScriptFillHolesMethod_MAX = 5
};

// Enum GeometryScriptingCore.EGeometryScriptRemoveHiddenTrianglesMethod
enum class EGeometryScriptRemoveHiddenTrianglesMethod : uint8 {
	FastWindingNumber = 0,
	RaycastOcclusionTest = 1,
	EGeometryScriptRemoveHiddenTrianglesMethod_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptRemoveMeshSimplificationType
enum class EGeometryScriptRemoveMeshSimplificationType : uint8 {
	StandardQEM = 0,
	VolumePreserving = 1,
	AttributeAware = 2,
	EGeometryScriptRemoveMeshSimplificationType_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptUVFlattenMethod
enum class EGeometryScriptUVFlattenMethod : uint8 {
	ExpMap = 0,
	Conformal = 1,
	EGeometryScriptUVFlattenMethod_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptUVIslandSource
enum class EGeometryScriptUVIslandSource : uint8 {
	PolyGroups = 0,
	UVIslands = 1,
	EGeometryScriptUVIslandSource_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptGridSizingMethod
enum class EGeometryScriptGridSizingMethod : uint8 {
	GridCellSize = 0,
	GridResolution = 1,
	EGeometryScriptGridSizingMethod_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptMorphologicalOpType
enum class EGeometryScriptMorphologicalOpType : uint8 {
	Dilate = 0,
	Contract = 1,
	Close = 2,
	Open = 3,
	EGeometryScriptMorphologicalOpType_MAX = 4
};

// ScriptStruct GeometryScriptingCore.GeometryScriptCollisionFromMeshOptions
// Size: 0x20 (Inherited: 0x00)
struct FGeometryScriptCollisionFromMeshOptions {
	bool bEmitTransaction; // 0x00(0x01)
	enum class EGeometryScriptCollisionGenerationMethod Method; // 0x01(0x01)
	bool bAutoDetectSpheres; // 0x02(0x01)
	bool bAutoDetectBoxes; // 0x03(0x01)
	bool bAutoDetectCapsules; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float MinThickness; // 0x08(0x04)
	bool bSimplifyHulls; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t ConvexHullTargetFaceCount; // 0x10(0x04)
	float SweptHullSimplifyTolerance; // 0x14(0x04)
	enum class EGeometryScriptSweptHullAxis SweptHullAxis; // 0x18(0x01)
	bool bRemoveFullyContainedShapes; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	int32_t MaxShapeCount; // 0x1c(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSetSimpleCollisionOptions
// Size: 0x01 (Inherited: 0x00)
struct FGeometryScriptSetSimpleCollisionOptions {
	bool bEmitTransaction; // 0x00(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptConvexHullOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptConvexHullOptions {
	bool bPrefilterVertices; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t PrefilterGridResolution; // 0x04(0x04)
	int32_t SimplifyToFaceCount; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSweptHullOptions
// Size: 0x18 (Inherited: 0x00)
struct FGeometryScriptSweptHullOptions {
	bool bPrefilterVertices; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t PrefilterGridResolution; // 0x04(0x04)
	float MinThickness; // 0x08(0x04)
	bool bSimplify; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float MinEdgeLength; // 0x10(0x04)
	float SimplifyTolerance; // 0x14(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshReadLOD
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptMeshReadLOD {
	enum class EGeometryScriptLODType LODType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t LODIndex; // 0x04(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshWriteLOD
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptMeshWriteLOD {
	bool bWriteHiResSource; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t LODIndex; // 0x04(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptTriangle
// Size: 0x48 (Inherited: 0x00)
struct FGeometryScriptTriangle {
	struct FVector Vector0; // 0x00(0x18)
	struct FVector Vector1; // 0x18(0x18)
	struct FVector Vector2; // 0x30(0x18)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptTrianglePoint
// Size: 0x38 (Inherited: 0x00)
struct FGeometryScriptTrianglePoint {
	bool bValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t TriangleID; // 0x04(0x04)
	struct FVector position; // 0x08(0x18)
	struct FVector BaryCoords; // 0x20(0x18)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptUVTriangle
// Size: 0x30 (Inherited: 0x00)
struct FGeometryScriptUVTriangle {
	struct FVector2D UV0; // 0x00(0x10)
	struct FVector2D UV1; // 0x10(0x10)
	struct FVector2D UV2; // 0x20(0x10)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptColorFlags
// Size: 0x04 (Inherited: 0x00)
struct FGeometryScriptColorFlags {
	bool bRed; // 0x00(0x01)
	bool bGreen; // 0x01(0x01)
	bool bBlue; // 0x02(0x01)
	bool bAlpha; // 0x03(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptGroupLayer
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptGroupLayer {
	bool bDefaultLayer; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ExtendedLayerIndex; // 0x04(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptIndexList
// Size: 0x18 (Inherited: 0x00)
struct FGeometryScriptIndexList {
	enum class EGeometryScriptIndexType IndexType; // 0x00(0x01)
	char pad_1[0x17]; // 0x01(0x17)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptTriangleList
// Size: 0x10 (Inherited: 0x00)
struct FGeometryScriptTriangleList {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptVectorList
// Size: 0x10 (Inherited: 0x00)
struct FGeometryScriptVectorList {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptUVList
// Size: 0x10 (Inherited: 0x00)
struct FGeometryScriptUVList {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptColorList
// Size: 0x10 (Inherited: 0x00)
struct FGeometryScriptColorList {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptDynamicMeshBVH
// Size: 0x20 (Inherited: 0x00)
struct FGeometryScriptDynamicMeshBVH {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptDebugMessage
// Size: 0x20 (Inherited: 0x00)
struct FGeometryScriptDebugMessage {
	enum class EGeometryScriptDebugMessageType MessageType; // 0x00(0x01)
	enum class EGeometryScriptErrorType ErrorType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FText Message; // 0x08(0x18)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptCopyMeshFromAssetOptions
// Size: 0x03 (Inherited: 0x00)
struct FGeometryScriptCopyMeshFromAssetOptions {
	bool bApplyBuildSettings; // 0x00(0x01)
	bool bRequestTangents; // 0x01(0x01)
	bool bIgnoreRemoveDegenerates; // 0x02(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptNaniteOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptNaniteOptions {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FallbackPercentTriangles; // 0x04(0x04)
	float FallbackRelativeError; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptCopyMeshToAssetOptions
// Size: 0x40 (Inherited: 0x00)
struct FGeometryScriptCopyMeshToAssetOptions {
	bool bEnableRecomputeNormals; // 0x00(0x01)
	bool bEnableRecomputeTangents; // 0x01(0x01)
	bool bEnableRemoveDegenerates; // 0x02(0x01)
	bool bReplaceMaterials; // 0x03(0x01)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct UMaterialInterface*> NewMaterials; // 0x08(0x10)
	struct TArray<struct FName> NewMaterialSlotNames; // 0x18(0x10)
	bool bApplyNaniteSettings; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FGeometryScriptNaniteOptions NaniteSettings; // 0x2c(0x0c)
	bool bEmitTransaction; // 0x38(0x01)
	bool bDeferMeshPostEditChange; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSimpleMeshBuffers
// Size: 0xd0 (Inherited: 0x00)
struct FGeometryScriptSimpleMeshBuffers {
	struct TArray<struct FVector> Vertices; // 0x00(0x10)
	struct TArray<struct FVector> Normals; // 0x10(0x10)
	struct TArray<struct FVector2D> UV0; // 0x20(0x10)
	struct TArray<struct FVector2D> UV1; // 0x30(0x10)
	struct TArray<struct FVector2D> UV2; // 0x40(0x10)
	struct TArray<struct FVector2D> UV3; // 0x50(0x10)
	struct TArray<struct FVector2D> UV4; // 0x60(0x10)
	struct TArray<struct FVector2D> UV5; // 0x70(0x10)
	struct TArray<struct FVector2D> UV6; // 0x80(0x10)
	struct TArray<struct FVector2D> UV7; // 0x90(0x10)
	struct TArray<struct FLinearColor> VertexColors; // 0xa0(0x10)
	struct TArray<struct FIntVector> Triangles; // 0xb0(0x10)
	struct TArray<int32_t> TriGroupIDs; // 0xc0(0x10)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshBooleanOptions
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptMeshBooleanOptions {
	bool bFillHoles; // 0x00(0x01)
	bool bSimplifyOutput; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float SimplifyPlanarTolerance; // 0x04(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshSelfUnionOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptMeshSelfUnionOptions {
	bool bFillHoles; // 0x00(0x01)
	bool bTrimFlaps; // 0x01(0x01)
	bool bSimplifyOutput; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float SimplifyPlanarTolerance; // 0x04(0x04)
	float WindingThreshold; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshPlaneCutOptions
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptMeshPlaneCutOptions {
	bool bFillHoles; // 0x00(0x01)
	bool bFillSpans; // 0x01(0x01)
	bool bFlipCutSide; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float UVWorldDimension; // 0x04(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshPlaneSliceOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptMeshPlaneSliceOptions {
	bool bFillHoles; // 0x00(0x01)
	bool bFillSpans; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float GapWidth; // 0x04(0x04)
	float UVWorldDimension; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshMirrorOptions
// Size: 0x03 (Inherited: 0x00)
struct FGeometryScriptMeshMirrorOptions {
	bool bApplyPlaneCut; // 0x00(0x01)
	bool bFlipCutSide; // 0x01(0x01)
	bool bWeldAlongPlane; // 0x02(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptIsSameMeshOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptIsSameMeshOptions {
	bool bCheckConnectivity; // 0x00(0x01)
	bool bCheckEdgeIDs; // 0x01(0x01)
	bool bCheckNormals; // 0x02(0x01)
	bool bCheckColors; // 0x03(0x01)
	bool bCheckUVs; // 0x04(0x01)
	bool bCheckGroups; // 0x05(0x01)
	bool bCheckAttributes; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	float Epsilon; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeasureMeshDistanceOptions
// Size: 0x01 (Inherited: 0x00)
struct FGeometryScriptMeasureMeshDistanceOptions {
	bool bSymmetric; // 0x00(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptBendWarpOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptBendWarpOptions {
	bool bSymmetricExtents; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LowerExtent; // 0x04(0x04)
	bool bBidirectional; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptTwistWarpOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptTwistWarpOptions {
	bool bSymmetricExtents; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LowerExtent; // 0x04(0x04)
	bool bBidirectional; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptFlareWarpOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptFlareWarpOptions {
	bool bSymmetricExtents; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LowerExtent; // 0x04(0x04)
	enum class EGeometryScriptFlareType FlareType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptPerlinNoiseLayerOptions
// Size: 0x28 (Inherited: 0x00)
struct FGeometryScriptPerlinNoiseLayerOptions {
	float Magnitude; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	struct FVector FrequencyShift; // 0x08(0x18)
	int32_t RandomSeed; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMathWarpOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptMathWarpOptions {
	float Magnitude; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	float FrequencyShift; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptPerlinNoiseOptions
// Size: 0x30 (Inherited: 0x00)
struct FGeometryScriptPerlinNoiseOptions {
	struct FGeometryScriptPerlinNoiseLayerOptions BaseLayer; // 0x00(0x28)
	bool bApplyAlongNormal; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptIterativeMeshSmoothingOptions
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptIterativeMeshSmoothingOptions {
	int32_t NumIterations; // 0x00(0x04)
	float Alpha; // 0x04(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptDisplaceFromTextureOptions
// Size: 0x30 (Inherited: 0x00)
struct FGeometryScriptDisplaceFromTextureOptions {
	float Magnitude; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector2D UVScale; // 0x08(0x10)
	struct FVector2D UVOffset; // 0x18(0x10)
	float Center; // 0x28(0x04)
	int32_t ImageChannel; // 0x2c(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshOffsetOptions
// Size: 0x18 (Inherited: 0x00)
struct FGeometryScriptMeshOffsetOptions {
	float OffsetDistance; // 0x00(0x04)
	bool bFixedBoundary; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t SolveSteps; // 0x08(0x04)
	float SmoothAlpha; // 0x0c(0x04)
	bool bReprojectDuringSmoothing; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float BoundaryAlpha; // 0x14(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshExtrudeOptions
// Size: 0x28 (Inherited: 0x00)
struct FGeometryScriptMeshExtrudeOptions {
	float ExtrudeDistance; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector ExtrudeDirection; // 0x08(0x18)
	float UVScale; // 0x20(0x04)
	bool bSolidsToShells; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshBevelOptions
// Size: 0xc0 (Inherited: 0x00)
struct FGeometryScriptMeshBevelOptions {
	float BevelDistance; // 0x00(0x04)
	bool bInferMaterialID; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t SetMaterialID; // 0x08(0x04)
	bool bApplyFilterBox; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FBox FilterBox; // 0x10(0x38)
	char pad_48[0x8]; // 0x48(0x08)
	struct FTransform FilterBoxTransform; // 0x50(0x60)
	bool bFullyContained; // 0xb0(0x01)
	char pad_B1[0xf]; // 0xb1(0x0f)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptCalculateNormalsOptions
// Size: 0x02 (Inherited: 0x00)
struct FGeometryScriptCalculateNormalsOptions {
	bool bAngleWeighted; // 0x00(0x01)
	bool bAreaWeighted; // 0x01(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSplitNormalsOptions
// Size: 0x14 (Inherited: 0x00)
struct FGeometryScriptSplitNormalsOptions {
	bool bSplitByOpeningAngle; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float OpeningAngleDeg; // 0x04(0x04)
	bool bSplitByFaceGroup; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FGeometryScriptGroupLayer GroupLayer; // 0x0c(0x08)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptTangentsOptions
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptTangentsOptions {
	enum class EGeometryScriptTangentTypes Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t UVLayer; // 0x04(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptPrimitiveOptions
// Size: 0x03 (Inherited: 0x00)
struct FGeometryScriptPrimitiveOptions {
	enum class EGeometryScriptPrimitivePolygroupMode PolygroupMode; // 0x00(0x01)
	bool bFlipOrientation; // 0x01(0x01)
	enum class EGeometryScriptPrimitiveUVMode UVMode; // 0x02(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptRevolveOptions
// Size: 0x14 (Inherited: 0x00)
struct FGeometryScriptRevolveOptions {
	float RevolveDegrees; // 0x00(0x04)
	float DegreeOffset; // 0x04(0x04)
	bool bReverseDirection; // 0x08(0x01)
	bool bHardNormals; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float HardNormalAngle; // 0x0c(0x04)
	bool bProfileAtMidpoint; // 0x10(0x01)
	bool bFillPartialRevolveEndcaps; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptWeldEdgesOptions
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptWeldEdgesOptions {
	float Tolerance; // 0x00(0x04)
	bool bOnlyUniquePairs; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptFillHolesOptions
// Size: 0x02 (Inherited: 0x00)
struct FGeometryScriptFillHolesOptions {
	enum class EGeometryScriptFillHolesMethod FillMethod; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptRemoveSmallComponentOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptRemoveSmallComponentOptions {
	float MinVolume; // 0x00(0x04)
	float MinArea; // 0x04(0x04)
	int32_t MinTriangleCount; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptRemoveHiddenTrianglesOptions
// Size: 0x1c (Inherited: 0x00)
struct FGeometryScriptRemoveHiddenTrianglesOptions {
	enum class EGeometryScriptRemoveHiddenTrianglesMethod Method; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t SamplesPerTriangle; // 0x04(0x04)
	int32_t ShrinkSelection; // 0x08(0x04)
	float WindingIsoValue; // 0x0c(0x04)
	int32_t RaysPerSample; // 0x10(0x04)
	float NormalOffset; // 0x14(0x04)
	bool bCompactResult; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptPlanarSimplifyOptions
// Size: 0x04 (Inherited: 0x00)
struct FGeometryScriptPlanarSimplifyOptions {
	float AngleThreshold; // 0x00(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptPolygroupSimplifyOptions
// Size: 0x04 (Inherited: 0x00)
struct FGeometryScriptPolygroupSimplifyOptions {
	float AngleThreshold; // 0x00(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSimplifyMeshOptions
// Size: 0x06 (Inherited: 0x00)
struct FGeometryScriptSimplifyMeshOptions {
	enum class EGeometryScriptRemoveMeshSimplificationType Method; // 0x00(0x01)
	bool bAllowSeamCollapse; // 0x01(0x01)
	bool bAllowSeamSmoothing; // 0x02(0x01)
	bool bAllowSeamSplits; // 0x03(0x01)
	bool bPreserveVertexPositions; // 0x04(0x01)
	bool bRetainQuadricMemory; // 0x05(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSpatialQueryOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptSpatialQueryOptions {
	float MaxDistance; // 0x00(0x04)
	bool bAllowUnsafeModifiedQueries; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float WindingIsoThreshold; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptRayHitResult
// Size: 0x40 (Inherited: 0x00)
struct FGeometryScriptRayHitResult {
	bool bHit; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float RayParameter; // 0x04(0x04)
	int32_t HitTriangleID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector HitPosition; // 0x10(0x18)
	struct FVector HitBaryCoords; // 0x28(0x18)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptPNTessellateOptions
// Size: 0x01 (Inherited: 0x00)
struct FGeometryScriptPNTessellateOptions {
	bool bRecomputeNormals; // 0x00(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptRepackUVsOptions
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptRepackUVsOptions {
	int32_t TargetImageWidth; // 0x00(0x04)
	bool bOptimizeIslandRotation; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptExpMapUVOptions
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptExpMapUVOptions {
	int32_t NormalSmoothingRounds; // 0x00(0x04)
	float NormalSmoothingAlpha; // 0x04(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptRecomputeUVsOptions
// Size: 0x18 (Inherited: 0x00)
struct FGeometryScriptRecomputeUVsOptions {
	enum class EGeometryScriptUVFlattenMethod Method; // 0x00(0x01)
	enum class EGeometryScriptUVIslandSource IslandSource; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FGeometryScriptExpMapUVOptions ExpMapOptions; // 0x04(0x08)
	struct FGeometryScriptGroupLayer GroupLayer; // 0x0c(0x08)
	bool bAutoAlignIslandsWithAxes; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptPatchBuilderOptions
// Size: 0x34 (Inherited: 0x00)
struct FGeometryScriptPatchBuilderOptions {
	int32_t InitialPatchCount; // 0x00(0x04)
	int32_t MinPatchSize; // 0x04(0x04)
	float PatchCurvatureAlignmentWeight; // 0x08(0x04)
	float PatchMergingMetricThresh; // 0x0c(0x04)
	float PatchMergingAngleThresh; // 0x10(0x04)
	struct FGeometryScriptExpMapUVOptions ExpMapOptions; // 0x14(0x08)
	bool bRespectInputGroups; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FGeometryScriptGroupLayer GroupLayer; // 0x20(0x08)
	bool bAutoPack; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FGeometryScriptRepackUVsOptions PackingOptions; // 0x2c(0x08)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptXAtlasOptions
// Size: 0x04 (Inherited: 0x00)
struct FGeometryScriptXAtlasOptions {
	int32_t MaxIterations; // 0x00(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScript3DGridParameters
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScript3DGridParameters {
	enum class EGeometryScriptGridSizingMethod SizeMethod; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float GridCellSize; // 0x04(0x04)
	int32_t GridResolution; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSolidifyOptions
// Size: 0x1c (Inherited: 0x00)
struct FGeometryScriptSolidifyOptions {
	struct FGeometryScript3DGridParameters GridParameters; // 0x00(0x0c)
	float WindingThreshold; // 0x0c(0x04)
	bool bSolidAtBoundaries; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float ExtendBounds; // 0x14(0x04)
	int32_t SurfaceSearchSteps; // 0x18(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMorphologyOptions
// Size: 0x24 (Inherited: 0x00)
struct FGeometryScriptMorphologyOptions {
	struct FGeometryScript3DGridParameters SDFGridParameters; // 0x00(0x0c)
	bool bUseSeparateMeshGrid; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FGeometryScript3DGridParameters MeshGridParameters; // 0x10(0x0c)
	enum class EGeometryScriptMorphologicalOpType Operation; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float Distance; // 0x20(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptCopyMeshFromComponentOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptCopyMeshFromComponentOptions {
	bool bWantNormals; // 0x00(0x01)
	bool bWantTangents; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FGeometryScriptMeshReadLOD RequestedLOD; // 0x04(0x08)
};

