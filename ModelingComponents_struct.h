// Enum ModelingComponents.EBaseCreateFromSelectedTargetType
enum class EBaseCreateFromSelectedTargetType : uint8 {
	NewObject = 0,
	FirstInputObject = 1,
	LastInputObject = 2,
	EBaseCreateFromSelectedTargetType_MAX = 3
};

// Enum ModelingComponents.ECreateModelingObjectResult
enum class ECreateModelingObjectResult : uint8 {
	Ok = 0,
	Cancelled = 1,
	Failed_Unknown = 2,
	Failed_NoAPIFound = 3,
	Failed_InvalidWorld = 4,
	Failed_InvalidMesh = 5,
	Failed_InvalidTexture = 6,
	Failed_AssetCreationFailed = 7,
	ECreateModelingObjectResult_MAX = 8
};

// Enum ModelingComponents.ECreateMeshObjectSourceMeshType
enum class ECreateMeshObjectSourceMeshType : uint8 {
	MeshDescription = 0,
	DynamicMesh = 1,
	ECreateMeshObjectSourceMeshType_MAX = 2
};

// Enum ModelingComponents.ECreateObjectTypeHint
enum class ECreateObjectTypeHint : uint8 {
	Undefined = 0,
	StaticMesh = 1,
	Volume = 2,
	DynamicMeshActor = 3,
	ECreateObjectTypeHint_MAX = 4
};

// Enum ModelingComponents.EMultiTransformerMode
enum class EMultiTransformerMode : uint8 {
	DefaultGizmo = 1,
	QuickAxisTranslation = 2,
	EMultiTransformerMode_MAX = 3
};

// Enum ModelingComponents.EHandleSourcesMethod
enum class EHandleSourcesMethod : uint8 {
	DeleteSources = 0,
	HideSources = 1,
	KeepSources = 2,
	KeepFirstSource = 3,
	KeepLastSource = 4,
	EHandleSourcesMethod_MAX = 5
};

// Enum ModelingComponents.ESpaceCurveControlPointTransformMode
enum class ESpaceCurveControlPointTransformMode : uint8 {
	Shared = 0,
	PerVertex = 1,
	ESpaceCurveControlPointTransformMode_MAX = 2
};

// Enum ModelingComponents.ESpaceCurveControlPointOriginMode
enum class ESpaceCurveControlPointOriginMode : uint8 {
	Shared = 0,
	First = 1,
	Last = 2,
	ESpaceCurveControlPointOriginMode_MAX = 3
};

// Enum ModelingComponents.ESpaceCurveControlPointFalloffType
enum class ESpaceCurveControlPointFalloffType : uint8 {
	Linear = 0,
	Smooth = 1,
	ESpaceCurveControlPointFalloffType_MAX = 2
};

// Enum ModelingComponents.EUVLayoutPreviewSide
enum class EUVLayoutPreviewSide : uint8 {
	Left = 0,
	Right = 1,
	EUVLayoutPreviewSide_MAX = 2
};

// ScriptStruct ModelingComponents.ModelingToolsAxisFilter
// Size: 0x03 (Inherited: 0x00)
struct FModelingToolsAxisFilter {
	bool bAxisX; // 0x00(0x01)
	bool bAxisY; // 0x01(0x01)
	bool bAxisZ; // 0x02(0x01)
};

// ScriptStruct ModelingComponents.CreateMeshObjectParams
// Size: 0x5c0 (Inherited: 0x00)
struct FCreateMeshObjectParams {
	struct UPrimitiveComponent* SourceComponent; // 0x00(0x08)
	enum class ECreateObjectTypeHint TypeHint; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	ClassPtrProperty TypeHintClass; // 0x10(0x08)
	int32_t TypeHintExtended; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UWorld* TargetWorld; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform Transform; // 0x30(0x60)
	struct FString BaseName; // 0x90(0x10)
	struct TArray<struct UMaterialInterface*> Materials; // 0xa0(0x10)
	struct TArray<struct UMaterialInterface*> AssetMaterials; // 0xb0(0x10)
	bool bEnableCollision; // 0xc0(0x01)
	enum class ECollisionTraceFlag CollisionMode; // 0xc1(0x01)
	bool bEnableRaytracingSupport; // 0xc2(0x01)
	bool bEnableRecomputeNormals; // 0xc3(0x01)
	bool bEnableRecomputeTangents; // 0xc4(0x01)
	bool bEnableNanite; // 0xc5(0x01)
	char pad_C6[0x2]; // 0xc6(0x02)
	float NaniteProxyTrianglePercent; // 0xc8(0x04)
	char pad_CC[0x4f4]; // 0xcc(0x4f4)
};

// ScriptStruct ModelingComponents.CreateMeshObjectResult
// Size: 0x20 (Inherited: 0x00)
struct FCreateMeshObjectResult {
	enum class ECreateModelingObjectResult ResultCode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AActor* NewActor; // 0x08(0x08)
	struct UPrimitiveComponent* NewComponent; // 0x10(0x08)
	struct UObject* NewAsset; // 0x18(0x08)
};

// ScriptStruct ModelingComponents.CreateTextureObjectParams
// Size: 0x30 (Inherited: 0x00)
struct FCreateTextureObjectParams {
	int32_t TypeHintExtended; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UWorld* TargetWorld; // 0x08(0x08)
	struct UObject* StoreRelativeToObject; // 0x10(0x08)
	struct FString BaseName; // 0x18(0x10)
	struct UTexture2D* GeneratedTransientTexture; // 0x28(0x08)
};

// ScriptStruct ModelingComponents.CreateTextureObjectResult
// Size: 0x10 (Inherited: 0x00)
struct FCreateTextureObjectResult {
	enum class ECreateModelingObjectResult ResultCode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UObject* NewAsset; // 0x08(0x08)
};

// ScriptStruct ModelingComponents.RenderableTriangleVertex
// Size: 0x48 (Inherited: 0x00)
struct FRenderableTriangleVertex {
	struct FVector position; // 0x00(0x18)
	struct FVector2D UV; // 0x18(0x10)
	struct FVector Normal; // 0x28(0x18)
	struct FColor Color; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ModelingComponents.RenderableTriangle
// Size: 0xe0 (Inherited: 0x00)
struct FRenderableTriangle {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct FRenderableTriangleVertex Vertex0; // 0x08(0x48)
	struct FRenderableTriangleVertex Vertex1; // 0x50(0x48)
	struct FRenderableTriangleVertex Vertex2; // 0x98(0x48)
};

