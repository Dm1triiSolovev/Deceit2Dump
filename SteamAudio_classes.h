// Class SteamAudio.SteamAudioBakedListenerComponent
// Size: 0xb8 (Inherited: 0xb0)
struct USteamAudioBakedListenerComponent : UActorComponent {
	float InfluenceRadius; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class SteamAudio.SteamAudioBakedSourceComponent
// Size: 0xb8 (Inherited: 0xb0)
struct USteamAudioBakedSourceComponent : UActorComponent {
	float InfluenceRadius; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class SteamAudio.SteamAudioDynamicObjectComponent
// Size: 0xd8 (Inherited: 0xb0)
struct USteamAudioDynamicObjectComponent : UActorComponent {
	struct FSoftObjectPath Asset; // 0xb0(0x18)
	char pad_C8[0x10]; // 0xc8(0x10)
};

// Class SteamAudio.SteamAudioGeometryComponent
// Size: 0xd8 (Inherited: 0xb0)
struct USteamAudioGeometryComponent : UActorComponent {
	struct FSoftObjectPath Material; // 0xb0(0x18)
	bool bExportAllChildren; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	int32_t NumVertices; // 0xcc(0x04)
	int32_t NumTriangles; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class SteamAudio.SteamAudioListenerComponent
// Size: 0xf8 (Inherited: 0xb0)
struct USteamAudioListenerComponent : UActorComponent {
	struct TSoftObjectPtr<AActor> CurrentBakedListener; // 0xb0(0x28)
	bool bSimulateReverb; // 0xd8(0x01)
	enum class EReverbSimulationType ReverbType; // 0xd9(0x01)
	char pad_DA[0x1e]; // 0xda(0x1e)
};

// Class SteamAudio.SteamAudioMaterial
// Size: 0x48 (Inherited: 0x28)
struct USteamAudioMaterial : UObject {
	float AbsorptionLow; // 0x28(0x04)
	float AbsorptionMid; // 0x2c(0x04)
	float AbsorptionHigh; // 0x30(0x04)
	float Scattering; // 0x34(0x04)
	float TransmissionLow; // 0x38(0x04)
	float TransmissionMid; // 0x3c(0x04)
	float TransmissionHigh; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class SteamAudio.SteamAudioOcclusionSettings
// Size: 0x38 (Inherited: 0x28)
struct USteamAudioOcclusionSettings : UOcclusionPluginSourceSettingsBase {
	bool bApplyDistanceAttenuation; // 0x28(0x01)
	bool bApplyAirAbsorption; // 0x29(0x01)
	bool bApplyDirectivity; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	float DipoleWeight; // 0x2c(0x04)
	float DipolePower; // 0x30(0x04)
	bool bApplyOcclusion; // 0x34(0x01)
	bool bApplyTransmission; // 0x35(0x01)
	enum class ETransmissionType TransmissionType; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
};

// Class SteamAudio.SteamAudioProbeComponent
// Size: 0xe8 (Inherited: 0xb0)
struct USteamAudioProbeComponent : UActorComponent {
	struct TArray<struct FVector> ProbePositions; // 0xb0(0x10)
	char pad_C0[0x28]; // 0xc0(0x28)
};

// Class SteamAudio.SteamAudioProbeVolume
// Size: 0x308 (Inherited: 0x2b0)
struct ASteamAudioProbeVolume : AVolume {
	struct FSoftObjectPath Asset; // 0x2b0(0x18)
	enum class EProbeGenerationType GenerationType; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	float HorizontalSpacing; // 0x2cc(0x04)
	float HeightAboveFloor; // 0x2d0(0x04)
	int32_t NumProbes; // 0x2d4(0x04)
	int32_t DataSize; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct TArray<struct FSteamAudioBakedDataInfo> DetailedStats; // 0x2e0(0x10)
	struct USteamAudioProbeComponent* ProbeComponent; // 0x2f0(0x08)
	char pad_2F8[0x10]; // 0x2f8(0x10)
};

// Class SteamAudio.SteamAudioReverbSubmixPluginPreset
// Size: 0x98 (Inherited: 0x68)
struct USteamAudioReverbSubmixPluginPreset : USoundEffectSubmixPreset {
	char pad_68[0x2a]; // 0x68(0x2a)
	struct FSteamAudioReverbSubmixPluginSettings Settings; // 0x92(0x02)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class SteamAudio.SteamAudioReverbSettings
// Size: 0x30 (Inherited: 0x28)
struct USteamAudioReverbSettings : UReverbPluginSourceSettingsBase {
	bool bApplyReflections; // 0x28(0x01)
	bool bApplyHRTFToReflections; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	float ReflectionsMixLevel; // 0x2c(0x04)
};

// Class SteamAudio.SteamAudioSerializedObject
// Size: 0x38 (Inherited: 0x28)
struct USteamAudioSerializedObject : UObject {
	struct TArray<char> Data; // 0x28(0x10)
};

// Class SteamAudio.SteamAudioSettings
// Size: 0x118 (Inherited: 0x28)
struct USteamAudioSettings : UObject {
	enum class EAudioEngineType AudioEngine; // 0x28(0x01)
	bool bExportLandscapeGeometry; // 0x29(0x01)
	bool bExportBSPGeometry; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct FSoftObjectPath DefaultMeshMaterial; // 0x30(0x18)
	struct FSoftObjectPath DefaultLandscapeMaterial; // 0x48(0x18)
	struct FSoftObjectPath DefaultBSPMaterial; // 0x60(0x18)
	enum class ESceneType SceneType; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32_t MaxOcclusionSamples; // 0x7c(0x04)
	int32_t RealTimeRays; // 0x80(0x04)
	int32_t RealTimeBounces; // 0x84(0x04)
	float RealTimeDuration; // 0x88(0x04)
	int32_t RealTimeAmbisonicOrder; // 0x8c(0x04)
	int32_t RealTimeMaxSources; // 0x90(0x04)
	int32_t RealTimeCPUCoresPercentage; // 0x94(0x04)
	float RealTimeIrradianceMinDistance; // 0x98(0x04)
	bool bBakeConvolution; // 0x9c(0x01)
	bool bBakeParametric; // 0x9d(0x01)
	char pad_9E[0x2]; // 0x9e(0x02)
	int32_t BakingRays; // 0xa0(0x04)
	int32_t BakingBounces; // 0xa4(0x04)
	float BakingDuration; // 0xa8(0x04)
	int32_t BakingAmbisonicOrder; // 0xac(0x04)
	int32_t BakingCPUCoresPercentage; // 0xb0(0x04)
	float BakingIrradianceMinDistance; // 0xb4(0x04)
	struct FSoftObjectPath ReverbSubmix; // 0xb8(0x18)
	int32_t BakingVisibilitySamples; // 0xd0(0x04)
	float BakingVisibilityRadius; // 0xd4(0x04)
	float BakingVisibilityThreshold; // 0xd8(0x04)
	float BakingVisibilityRange; // 0xdc(0x04)
	float BakingPathRange; // 0xe0(0x04)
	int32_t BakedPathingCPUCoresPercentage; // 0xe4(0x04)
	float SimulationUpdateInterval; // 0xe8(0x04)
	enum class EReflectionEffectType ReflectionEffectType; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	float HybridReverbTransitionTime; // 0xf0(0x04)
	int32_t HybridReverbOverlapPercent; // 0xf4(0x04)
	enum class EOpenCLDeviceType DeviceType; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	int32_t MaxReservedComputeUnits; // 0xfc(0x04)
	float FractionComputeUnitsForIRUpdate; // 0x100(0x04)
	int32_t BakingBatchSize; // 0x104(0x04)
	float TANDuration; // 0x108(0x04)
	int32_t TANAmbisonicOrder; // 0x10c(0x04)
	int32_t TANMaxSources; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// Class SteamAudio.SteamAudioSourceComponent
// Size: 0x158 (Inherited: 0xb0)
struct USteamAudioSourceComponent : UActorComponent {
	bool bSimulateOcclusion; // 0xb0(0x01)
	enum class EOcclusionType OcclusionType; // 0xb1(0x01)
	char pad_B2[0x2]; // 0xb2(0x02)
	float OcclusionRadius; // 0xb4(0x04)
	int32_t OcclusionSamples; // 0xb8(0x04)
	float OcclusionValue; // 0xbc(0x04)
	bool bSimulateTransmission; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float TransmissionLowValue; // 0xc4(0x04)
	float TransmissionMidValue; // 0xc8(0x04)
	float TransmissionHighValue; // 0xcc(0x04)
	bool bSimulateReflections; // 0xd0(0x01)
	enum class EReflectionSimulationType ReflectionsType; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
	struct TSoftObjectPtr<AActor> CurrentBakedSource; // 0xd8(0x28)
	bool bSimulatePathing; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct TSoftObjectPtr<ASteamAudioProbeVolume> PathingProbeBatch; // 0x108(0x28)
	bool bPathValidation; // 0x130(0x01)
	bool bFindAlternatePaths; // 0x131(0x01)
	char pad_132[0x26]; // 0x132(0x26)
};

// Class SteamAudio.SteamAudioSpatializationSettings
// Size: 0x30 (Inherited: 0x28)
struct USteamAudioSpatializationSettings : USpatializationPluginSourceSettingsBase {
	bool bBinaural; // 0x28(0x01)
	enum class EHRTFInterpolation Interpolation; // 0x29(0x01)
	bool bApplyPathing; // 0x2a(0x01)
	bool bApplyHRTFToPathing; // 0x2b(0x01)
	float PathingMixLevel; // 0x2c(0x04)
};

// Class SteamAudio.SteamAudioStaticMeshActor
// Size: 0x2a0 (Inherited: 0x278)
struct ASteamAudioStaticMeshActor : AActor {
	struct FSoftObjectPath Asset; // 0x278(0x18)
	char pad_290[0x10]; // 0x290(0x10)
};

