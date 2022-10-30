// Enum VolumeRuntime.EQuantizationType
enum class EQuantizationType : uint8 {
	None = 0,
	Fp4 = 1,
	Fp8 = 2,
	Fp16 = 3,
	FpN = 4,
	EQuantizationType_MAX = 5
};

// Enum VolumeRuntime.EVdbClass
enum class EVdbClass : uint8 {
	FogVolume = 0,
	SignedDistance = 1,
	Undefined = 2,
	EVdbClass_MAX = 3
};

// Enum VolumeRuntime.EVdbDenoiserMethod
enum class EVdbDenoiserMethod : uint8 {
	None = 0,
	GaussianBlur = 1,
	BoxBlur = 2,
	Count = 3,
	EVdbDenoiserMethod_MAX = 4
};

// Enum VolumeRuntime.EVdbToVolumeMethod
enum class EVdbToVolumeMethod : uint8 {
	Disabled = 0,
	PrimaryR8 = 1,
	PrimaryR16F = 2,
	PrimaryRGBA8 = 3,
	PrimaryRGBA16F = 4,
	PrimarySecondaryRG8 = 5,
	PrimarySecondaryRG16F = 6,
	PrimarySecondaryRGBA8 = 7,
	PrimarySecondaryRGBA16F = 8,
	Count = 9,
	EVdbToVolumeMethod_MAX = 10
};

// ScriptStruct VolumeRuntime.VdbRay
// Size: 0x20 (Inherited: 0x00)
struct FVdbRay {
	struct FVector3f Origin; // 0x00(0x0c)
	float Tmin; // 0x0c(0x04)
	struct FVector3f Direction; // 0x10(0x0c)
	float Tmax; // 0x1c(0x04)
};

// ScriptStruct VolumeRuntime.VdbLevelSetHit
// Size: 0x14 (Inherited: 0x00)
struct FVdbLevelSetHit {
	float T; // 0x00(0x04)
	float v0; // 0x04(0x04)
	int32_t I; // 0x08(0x04)
	int32_t J; // 0x0c(0x04)
	int32_t K; // 0x10(0x04)
};

// ScriptStruct VolumeRuntime.VolumeFrameInfos
// Size: 0xb0 (Inherited: 0x00)
struct FVolumeFrameInfos {
	struct FMatrix44f IndexToLocal; // 0x00(0x40)
	struct FBox Bounds; // 0x40(0x38)
	struct FIntVector Size; // 0x78(0x0c)
	struct FIntVector IndexMin; // 0x84(0x0c)
	struct FIntVector IndexMax; // 0x90(0x0c)
	char pad_9C[0x4]; // 0x9c(0x04)
	uint64_t MemoryUsage; // 0xa0(0x08)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// ScriptStruct VolumeRuntime.VdbSequenceChunk
// Size: 0x38 (Inherited: 0x00)
struct FVdbSequenceChunk {
	char pad_0[0x38]; // 0x00(0x38)
};

