// Enum MovieRenderPipelineRenderPasses.EEXRCompressionFormat
enum class EEXRCompressionFormat : uint8 {
	None = 0,
	PIZ = 1,
	ZIP = 2,
	DWAA = 3,
	DWAB = 4,
	EEXRCompressionFormat_MAX = 5
};

// ScriptStruct MovieRenderPipelineRenderPasses.MoviePipelinePostProcessPass
// Size: 0x30 (Inherited: 0x00)
struct FMoviePipelinePostProcessPass {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UMaterialInterface> Material; // 0x08(0x28)
};

