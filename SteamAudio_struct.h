// Enum SteamAudio.EReverbSimulationType
enum class EReverbSimulationType : uint8 {
	REALTIME = 0,
	BAKED = 1,
	EReverbSimulationType_MAX = 2
};

// Enum SteamAudio.ETransmissionType
enum class ETransmissionType : uint8 {
	FREQUENCY_INDEPENDENT = 0,
	FREQUENCY_DEPENDENT = 1,
	FREQUENCY_MAX = 2
};

// Enum SteamAudio.EProbeGenerationType
enum class EProbeGenerationType : uint8 {
	CENTROID = 0,
	UNIFORM_FLOOR = 1,
	EProbeGenerationType_MAX = 2
};

// Enum SteamAudio.EAudioEngineType
enum class EAudioEngineType : uint8 {
	UNREAL = 0,
	FMODSTUDIO = 1,
	EAudioEngineType_MAX = 2
};

// Enum SteamAudio.ESceneType
enum class ESceneType : uint8 {
	DEFAULT = 0,
	EMBREE = 1,
	RADEONRAYS = 2,
	ESceneType_MAX = 3
};

// Enum SteamAudio.EReflectionEffectType
enum class EReflectionEffectType : uint8 {
	CONVOLUTION = 0,
	PARAMETRIC = 1,
	HYBRID = 2,
	TRUEAUDIONEXT = 3,
	EReflectionEffectType_MAX = 4
};

// Enum SteamAudio.EOpenCLDeviceType
enum class EOpenCLDeviceType : uint8 {
	ANY = 0,
	CPU = 1,
	GPU = 2,
	EOpenCLDeviceType_MAX = 3
};

// Enum SteamAudio.EOcclusionType
enum class EOcclusionType : uint8 {
	RAYCAST = 0,
	VOLUMETRIC = 1,
	EOcclusionType_MAX = 2
};

// Enum SteamAudio.EReflectionSimulationType
enum class EReflectionSimulationType : uint8 {
	REALTIME = 0,
	BAKED_STATIC_SOURCE = 1,
	BAKED_STATIC_LISTENER = 2,
	EReflectionSimulationType_MAX = 3
};

// Enum SteamAudio.EHRTFInterpolation
enum class EHRTFInterpolation : uint8 {
	NEAREST = 0,
	BILINEAR = 1,
	EHRTFInterpolation_MAX = 2
};

// ScriptStruct SteamAudio.SteamAudioBakedDataInfo
// Size: 0x38 (Inherited: 0x00)
struct FSteamAudioBakedDataInfo {
	struct FString Name; // 0x00(0x10)
	int32_t Type; // 0x10(0x04)
	int32_t Variation; // 0x14(0x04)
	struct FVector EndpointCenter; // 0x18(0x18)
	float EndpointRadius; // 0x30(0x04)
	int32_t Size; // 0x34(0x04)
};

// ScriptStruct SteamAudio.SteamAudioReverbSubmixPluginSettings
// Size: 0x02 (Inherited: 0x00)
struct FSteamAudioReverbSubmixPluginSettings {
	bool bApplyReverb; // 0x00(0x01)
	bool bApplyHRTF; // 0x01(0x01)
};

