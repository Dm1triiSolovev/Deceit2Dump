// ScriptStruct GeometryCache.TrackRenderData
// Size: 0xc0 (Inherited: 0x00)
struct FTrackRenderData {
	char pad_0[0xc0]; // 0x00(0xc0)
};

// ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
// Size: 0x0c (Inherited: 0x00)
struct FGeometryCacheMeshBatchInfo {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct GeometryCache.GeometryCacheVertexInfo
// Size: 0x09 (Inherited: 0x00)
struct FGeometryCacheVertexInfo {
	char pad_0[0x9]; // 0x00(0x09)
};

// ScriptStruct GeometryCache.GeometryCacheMeshData
// Size: 0xc8 (Inherited: 0x00)
struct FGeometryCacheMeshData {
	char pad_0[0xc8]; // 0x00(0xc8)
};

// ScriptStruct GeometryCache.NiagaraGeometryCacheReference
// Size: 0x38 (Inherited: 0x00)
struct FNiagaraGeometryCacheReference {
	struct UGeometryCache* GeometryCache; // 0x00(0x08)
	struct FNiagaraUserParameterBinding GeometryCacheUserParamBinding; // 0x08(0x20)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x28(0x10)
};

