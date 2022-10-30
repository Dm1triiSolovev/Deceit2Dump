// Class Niagara.MovieSceneNiagaraTrack
// Size: 0xa0 (Inherited: 0x90)
struct UMovieSceneNiagaraTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x90(0x10)
};

// Class Niagara.MovieSceneNiagaraParameterTrack
// Size: 0xc0 (Inherited: 0xa0)
struct UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack {
	struct FNiagaraVariable Parameter; // 0xa0(0x20)
};

// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneNiagaraBoolParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class Niagara.MovieSceneNiagaraColorParameterTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneNiagaraColorParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneNiagaraFloatParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneNiagaraIntegerParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// Size: 0xf8 (Inherited: 0xe8)
struct UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection {
	enum class ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xe8(0x04)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xec(0x04)
	enum class ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xf0(0x04)
	enum class ENiagaraAgeUpdateMode AgeUpdateMode; // 0xf4(0x01)
	bool bAllowScalability; // 0xf5(0x01)
	char pad_F6[0x2]; // 0xf6(0x02)
};

// Class Niagara.MovieSceneNiagaraSystemTrack
// Size: 0xa8 (Inherited: 0xa0)
struct UMovieSceneNiagaraSystemTrack : UMovieSceneNiagaraTrack {
	char pad_A0[0x8]; // 0xa0(0x08)
};

// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
	int32_t ChannelsUsed; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class Niagara.NiagaraActor
// Size: 0x288 (Inherited: 0x278)
struct ANiagaraActor : AActor {
	struct UNiagaraComponent* NiagaraComponent; // 0x278(0x08)
	char bDestroyOnSystemFinish : 1; // 0x280(0x01)
	char pad_280_1 : 7; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)

	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish); // Function Niagara.NiagaraActor.SetDestroyOnSystemFinish // (Final|Native|Public|BlueprintCallable) // @ game+0xd90840
	void OnNiagaraSystemFinished(struct UNiagaraComponent* FinishedComponent); // Function Niagara.NiagaraActor.OnNiagaraSystemFinished // (Final|Native|Private) // @ game+0xd907b0
};

// Class Niagara.NiagaraBakerSettings
// Size: 0x1c0 (Inherited: 0x28)
struct UNiagaraBakerSettings : UObject {
	float StartSeconds; // 0x28(0x04)
	float DurationSeconds; // 0x2c(0x04)
	int32_t FramesPerSecond; // 0x30(0x04)
	char bPreviewLooping : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FIntPoint FramesPerDimension; // 0x38(0x08)
	struct TArray<struct FNiagaraBakerTextureSettings> OutputTextures; // 0x40(0x10)
	enum class ENiagaraBakerViewMode CameraViewportMode; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FVector CameraViewportLocation[0x7]; // 0x58(0xa8)
	struct FRotator CameraViewportRotation[0x7]; // 0x100(0xa8)
	float CameraOrbitDistance; // 0x1a8(0x04)
	float CameraFOV; // 0x1ac(0x04)
	float CameraOrthoWidth; // 0x1b0(0x04)
	char bUseCameraAspectRatio : 1; // 0x1b4(0x01)
	char pad_1B4_1 : 7; // 0x1b4(0x01)
	char pad_1B5[0x3]; // 0x1b5(0x03)
	float CameraAspectRatio; // 0x1b8(0x04)
	char bRenderComponentOnly : 1; // 0x1bc(0x01)
	char pad_1BC_1 : 7; // 0x1bc(0x01)
	char pad_1BD[0x3]; // 0x1bd(0x03)
};

// Class Niagara.NiagaraComponent
// Size: 0x7d0 (Inherited: 0x540)
struct UNiagaraComponent : UFXSystemComponent {
	struct UNiagaraSystem* Asset; // 0x540(0x08)
	enum class ENiagaraTickBehavior TickBehavior; // 0x548(0x01)
	char pad_549[0x3]; // 0x549(0x03)
	int32_t RandomSeedOffset; // 0x54c(0x04)
	struct FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x550(0xd8)
	char bForceSolo : 1; // 0x628(0x01)
	char bEnableGpuComputeDebug : 1; // 0x628(0x01)
	char pad_628_2 : 6; // 0x628(0x01)
	char pad_629[0x37]; // 0x629(0x37)
	char bAutoDestroy : 1; // 0x660(0x01)
	char bRenderingEnabled : 1; // 0x660(0x01)
	char bAutoManageAttachment : 1; // 0x660(0x01)
	char bAutoAttachWeldSimulatedBodies : 1; // 0x660(0x01)
	char pad_660_4 : 4; // 0x660(0x01)
	char pad_661[0x3]; // 0x661(0x03)
	float MaxTimeBeforeForceUpdateTransform; // 0x664(0x04)
	char pad_668[0x8]; // 0x668(0x08)
	struct FMulticastInlineDelegate OnSystemFinished; // 0x670(0x10)
	struct TWeakObjectPtr<struct USceneComponent> AutoAttachParent; // 0x680(0x08)
	struct FName AutoAttachSocketName; // 0x688(0x08)
	enum class EAttachmentRule AutoAttachLocationRule; // 0x690(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0x691(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0x692(0x01)
	char pad_693[0x9]; // 0x693(0x09)
	char pad_69C_0 : 4; // 0x69c(0x01)
	char bAllowScalability : 1; // 0x69c(0x01)
	char pad_69C_5 : 3; // 0x69c(0x01)
	char pad_69D[0x123]; // 0x69d(0x123)
	struct UNiagaraCullProxyComponent* CullProxy; // 0x7c0(0x08)
	char pad_7C8[0x8]; // 0x7c8(0x08)

	void SetVariableVec4(struct FName InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraComponent.SetVariableVec4 // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd94e50
	void SetVariableVec3(struct FName InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetVariableVec3 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd94d70
	void SetVariableVec2(struct FName InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetVariableVec2 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd94ca0
	void SetVariableTextureRenderTarget(struct FName InVariableName, struct UTextureRenderTarget* TextureRenderTarget); // Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget // (Final|Native|Public|BlueprintCallable) // @ game+0xd94bd0
	void SetVariableTexture(struct FName InVariableName, struct UTexture* Texture); // Function Niagara.NiagaraComponent.SetVariableTexture // (Final|Native|Public|BlueprintCallable) // @ game+0xd94b00
	void SetVariableStaticMesh(struct FName InVariableName, struct UStaticMesh* InValue); // Function Niagara.NiagaraComponent.SetVariableStaticMesh // (Final|Native|Public|BlueprintCallable) // @ game+0xd94a30
	void SetVariableQuat(struct FName InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraComponent.SetVariableQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd94960
	void SetVariablePosition(struct FName InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetVariablePosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd94880
	void SetVariableObject(struct FName InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetVariableObject // (Final|Native|Public|BlueprintCallable) // @ game+0xd947b0
	void SetVariableMaterial(struct FName InVariableName, struct UMaterialInterface* Object); // Function Niagara.NiagaraComponent.SetVariableMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0xd946e0
	void SetVariableLinearColor(struct FName InVariableName, struct FLinearColor& InValue); // Function Niagara.NiagaraComponent.SetVariableLinearColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd94610
	void SetVariableInt(struct FName InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetVariableInt // (Final|Native|Public|BlueprintCallable) // @ game+0xd94540
	void SetVariableFloat(struct FName InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetVariableFloat // (Final|Native|Public|BlueprintCallable) // @ game+0xd94470
	void SetVariableBool(struct FName InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetVariableBool // (Final|Native|Public|BlueprintCallable) // @ game+0xd943a0
	void SetVariableActor(struct FName InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetVariableActor // (Final|Native|Public|BlueprintCallable) // @ game+0xd942d0
	void SetTickBehavior(enum class ENiagaraTickBehavior NewTickBehavior); // Function Niagara.NiagaraComponent.SetTickBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0xd94250
	void SetSystemFixedBounds(struct FBox LocalBounds); // Function Niagara.NiagaraComponent.SetSystemFixedBounds // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd941a0
	void SetSeekDelta(float InSeekDelta); // Function Niagara.NiagaraComponent.SetSeekDelta // (Final|Native|Public|BlueprintCallable) // @ game+0xd94120
	void SetRenderingEnabled(bool bInRenderingEnabled); // Function Niagara.NiagaraComponent.SetRenderingEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xd94090
	void SetRandomSeedOffset(int32_t NewRandomSeedOffset); // Function Niagara.NiagaraComponent.SetRandomSeedOffset // (Final|Native|Public|BlueprintCallable) // @ game+0xd94000
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance); // Function Niagara.NiagaraComponent.SetPreviewLODDistance // (Final|Native|Public|BlueprintCallable) // @ game+0xd93ef0
	void SetPaused(bool bInPaused); // Function Niagara.NiagaraComponent.SetPaused // (Final|Native|Public|BlueprintCallable) // @ game+0xd93e60
	void SetNiagaraVariableVec4(struct FString InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec4 // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd93d60
	void SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec3 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd93c70
	void SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec2 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd93b80
	void SetNiagaraVariableQuat(struct FString InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd93a90
	void SetNiagaraVariablePosition(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariablePosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd939a0
	void SetNiagaraVariableObject(struct FString InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetNiagaraVariableObject // (Final|Native|Public|BlueprintCallable) // @ game+0xd93520
	void SetNiagaraVariableLinearColor(struct FString InVariableName, struct FLinearColor& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd938b0
	void SetNiagaraVariableInt(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableInt // (Final|Native|Public|BlueprintCallable) // @ game+0xd937d0
	void SetNiagaraVariableFloat(struct FString InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableFloat // (Final|Native|Public|BlueprintCallable) // @ game+0xd936e0
	void SetNiagaraVariableBool(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableBool // (Final|Native|Public|BlueprintCallable) // @ game+0xd93600
	void SetNiagaraVariableActor(struct FString InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetNiagaraVariableActor // (Final|Native|Public|BlueprintCallable) // @ game+0xd93520
	void SetMaxSimTime(float InMaxTime); // Function Niagara.NiagaraComponent.SetMaxSimTime // (Final|Native|Public|BlueprintCallable) // @ game+0xd934a0
	void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock); // Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta // (Final|Native|Public|BlueprintCallable) // @ game+0xd93410
	void SetGpuComputeDebug(bool bEnableDebug); // Function Niagara.NiagaraComponent.SetGpuComputeDebug // (Final|Native|Public|BlueprintCallable) // @ game+0xd93380
	void SetForceSolo(bool bInForceSolo); // Function Niagara.NiagaraComponent.SetForceSolo // (Final|Native|Public|BlueprintCallable) // @ game+0xd932f0
	void SetForceLocalPlayerEffect(bool bIsPlayerEffect); // Function Niagara.NiagaraComponent.SetForceLocalPlayerEffect // (Final|Native|Public|BlueprintCallable) // @ game+0xd93260
	void SetEmitterFixedBounds(struct FName EmitterName, struct FBox LocalBounds); // Function Niagara.NiagaraComponent.SetEmitterFixedBounds // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd93150
	void SetDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SetDesiredAge // (Final|Native|Public|BlueprintCallable) // @ game+0xd930d0
	void SetCustomTimeDilation(float Dilation); // Function Niagara.NiagaraComponent.SetCustomTimeDilation // (Final|Native|Public|BlueprintCallable) // @ game+0xd93050
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking); // Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking // (Final|Native|Public|BlueprintCallable) // @ game+0xd92fc0
	void SetAutoDestroy(bool bInAutoDestroy); // Function Niagara.NiagaraComponent.SetAutoDestroy // (Final|Native|Public|BlueprintCallable) // @ game+0xd92f30
	void SetAsset(struct UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters); // Function Niagara.NiagaraComponent.SetAsset // (Final|Native|Public|BlueprintCallable) // @ game+0xd92e60
	void SetAllowScalability(bool bAllow); // Function Niagara.NiagaraComponent.SetAllowScalability // (Final|Native|Public|BlueprintCallable) // @ game+0xd92dd0
	void SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode); // Function Niagara.NiagaraComponent.SetAgeUpdateMode // (Final|Native|Public|BlueprintCallable) // @ game+0xd92d50
	void SeekToDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SeekToDesiredAge // (Final|Native|Public|BlueprintCallable) // @ game+0xd92cd0
	void ResetSystem(); // Function Niagara.NiagaraComponent.ResetSystem // (Final|Native|Public|BlueprintCallable) // @ game+0xd92cb0
	void ReinitializeSystem(); // Function Niagara.NiagaraComponent.ReinitializeSystem // (Final|Native|Public|BlueprintCallable) // @ game+0xd92c90
	bool IsPaused(); // Function Niagara.NiagaraComponent.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd92c60
	void InitForPerformanceBaseline(); // Function Niagara.NiagaraComponent.InitForPerformanceBaseline // (Final|Native|Public|BlueprintCallable) // @ game+0xd92c40
	enum class ENiagaraTickBehavior GetTickBehavior(); // Function Niagara.NiagaraComponent.GetTickBehavior // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd92c20
	struct FBox GetSystemFixedBounds(); // Function Niagara.NiagaraComponent.GetSystemFixedBounds // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xd92bd0
	float GetSeekDelta(); // Function Niagara.NiagaraComponent.GetSeekDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd92ba0
	int32_t GetRandomSeedOffset(); // Function Niagara.NiagaraComponent.GetRandomSeedOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd92b80
	bool GetPreviewLODDistanceEnabled(); // Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd92b50
	float GetPreviewLODDistance(); // Function Niagara.NiagaraComponent.GetPreviewLODDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd92b10
	struct TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0xd92870
	struct TArray<float> GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0xd929c0
	struct TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName); // Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0xd92780
	float GetMaxSimTime(); // Function Niagara.NiagaraComponent.GetMaxSimTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd92750
	bool GetLockDesiredAgeDeltaTimeToSeekDelta(); // Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd92720
	bool GetForceSolo(); // Function Niagara.NiagaraComponent.GetForceSolo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd926f0
	bool GetForceLocalPlayerEffect(); // Function Niagara.NiagaraComponent.GetForceLocalPlayerEffect // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd926c0
	struct FBox GetEmitterFixedBounds(struct FName EmitterName); // Function Niagara.NiagaraComponent.GetEmitterFixedBounds // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xd92600
	float GetDesiredAge(); // Function Niagara.NiagaraComponent.GetDesiredAge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd925d0
	struct UNiagaraDataInterface* GetDataInterface(struct FString Name); // Function Niagara.NiagaraComponent.GetDataInterface // (Final|Native|Public|BlueprintCallable) // @ game+0xd92520
	float GetCustomTimeDilation(); // Function Niagara.NiagaraComponent.GetCustomTimeDilation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd92500
	struct UNiagaraSystem* GetAsset(); // Function Niagara.NiagaraComponent.GetAsset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd924e0
	bool GetAllowScalability(); // Function Niagara.NiagaraComponent.GetAllowScalability // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd924b0
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode(); // Function Niagara.NiagaraComponent.GetAgeUpdateMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd92480
	void ClearSystemFixedBounds(); // Function Niagara.NiagaraComponent.ClearSystemFixedBounds // (Final|Native|Public|BlueprintCallable) // @ game+0xd92460
	void ClearEmitterFixedBounds(struct FName EmitterName); // Function Niagara.NiagaraComponent.ClearEmitterFixedBounds // (Final|Native|Public|BlueprintCallable) // @ game+0xd923d0
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulationByTime // (Final|Native|Public|BlueprintCallable) // @ game+0xd92300
	void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulation // (Final|Native|Public|BlueprintCallable) // @ game+0xd92230
};

// Class Niagara.NiagaraComponentPool
// Size: 0x80 (Inherited: 0x28)
struct UNiagaraComponentPool : UObject {
	struct TMap<struct UNiagaraSystem*, struct FNCPool> WorldParticleSystemPools; // 0x28(0x50)
	char pad_78[0x8]; // 0x78(0x08)
};

// Class Niagara.NiagaraRendererProperties
// Size: 0xd0 (Inherited: 0x28)
struct UNiagaraRendererProperties : UNiagaraMergeable {
	struct FNiagaraPlatformSet Platforms; // 0x28(0x30)
	int32_t SortOrderHint; // 0x58(0x04)
	enum class ENiagaraRendererMotionVectorSetting MotionVectorSetting; // 0x5c(0x04)
	struct FNiagaraVariableAttributeBinding RendererEnabledBinding; // 0x60(0x58)
	bool bIsEnabled; // 0xb8(0x01)
	bool bAllowInCullProxies; // 0xb9(0x01)
	bool bMotionBlurEnabled; // 0xba(0x01)
	char pad_BB[0x15]; // 0xbb(0x15)
};

// Class Niagara.NiagaraComponentRendererProperties
// Size: 0x210 (Inherited: 0xd0)
struct UNiagaraComponentRendererProperties : UNiagaraRendererProperties {
	struct USceneComponent* ComponentType; // 0xd0(0x08)
	uint32_t ComponentCountLimit; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FNiagaraVariableAttributeBinding EnabledBinding; // 0xe0(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x138(0x58)
	bool bAssignComponentsOnParticleID; // 0x190(0x01)
	bool bOnlyCreateComponentsOnParticleSpawn; // 0x191(0x01)
	bool bOnlyActivateNewlyAquiredComponents; // 0x192(0x01)
	char pad_193[0x1]; // 0x193(0x01)
	int32_t RendererVisibility; // 0x194(0x04)
	struct USceneComponent* TemplateComponent; // 0x198(0x08)
	struct TArray<struct FNiagaraComponentPropertyBinding> PropertyBindings; // 0x1a0(0x10)
	char pad_1B0[0x60]; // 0x1b0(0x60)
};

// Class Niagara.NiagaraComponentSettings
// Size: 0x1b8 (Inherited: 0x28)
struct UNiagaraComponentSettings : UObject {
	struct TSet<struct FName> SuppressActivationList; // 0x28(0x50)
	struct TSet<struct FName> ForceAutoPooolingList; // 0x78(0x50)
	struct TSet<struct FNiagaraEmitterNameSettingsRef> SuppressEmitterList; // 0xc8(0x50)
	struct TSet<struct FNiagaraEmitterNameSettingsRef> GPUEmitterAllowList; // 0x118(0x50)
	struct TSet<struct FName> GpuDataInterfaceDenyList; // 0x168(0x50)
};

// Class Niagara.NiagaraConvertInPlaceUtilityBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraConvertInPlaceUtilityBase : UObject {
};

// Class Niagara.NiagaraCullProxyComponent
// Size: 0x7e0 (Inherited: 0x7d0)
struct UNiagaraCullProxyComponent : UNiagaraComponent {
	struct TArray<struct FNiagaraCulledComponentInfo> Instances; // 0x7c8(0x10)
};

// Class Niagara.NiagaraDataInterface
// Size: 0x38 (Inherited: 0x28)
struct UNiagaraDataInterface : UNiagaraDataInterfaceBase {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Niagara.NiagaraDataInterface2DArrayTexture
// Size: 0x60 (Inherited: 0x38)
struct UNiagaraDataInterface2DArrayTexture : UNiagaraDataInterface {
	struct UTexture2DArray* Texture; // 0x38(0x08)
	struct FNiagaraUserParameterBinding TextureUserParameter; // 0x40(0x20)
};

// Class Niagara.NiagaraDataInterfaceActorComponent
// Size: 0x78 (Inherited: 0x38)
struct UNiagaraDataInterfaceActorComponent : UNiagaraDataInterface {
	bool bRequireCurrentFrameData; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	LazyObjectProperty SourceActor; // 0x3c(0x1c)
	struct FNiagaraUserParameterBinding ActorOrComponentParameter; // 0x58(0x20)
};

// Class Niagara.NiagaraDataInterfaceRWBase
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceRWBase : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceArray
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceArray : UNiagaraDataInterfaceRWBase {
	char pad_38[0x8]; // 0x38(0x08)
	enum class ENiagaraGpuSyncMode GpuSyncMode; // 0x40(0x04)
	int32_t MaxElements; // 0x44(0x04)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayFloat : UNiagaraDataInterfaceArray {
	struct TArray<float> FloatData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat2
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayFloat2 : UNiagaraDataInterfaceArray {
	struct TArray<struct FVector2D> FloatData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat3
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayFloat3 : UNiagaraDataInterfaceArray {
	struct TArray<struct FVector> FloatData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayPosition
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayPosition : UNiagaraDataInterfaceArray {
	struct TArray<struct FNiagaraPosition> PositionData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat4
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayFloat4 : UNiagaraDataInterfaceArray {
	struct TArray<struct FVector4> FloatData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayColor
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayColor : UNiagaraDataInterfaceArray {
	struct TArray<struct FLinearColor> ColorData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayQuat
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayQuat : UNiagaraDataInterfaceArray {
	struct TArray<struct FQuat> QuatData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraDataInterfaceArrayFunctionLibrary : UBlueprintFunctionLibrary {

	void SetNiagaraArrayVectorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd993b0
	void SetNiagaraArrayVector4Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector4& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd990d0
	void SetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector4>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4 // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd98fb0
	void SetNiagaraArrayVector2DValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector2D& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd98e10
	void SetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector2D>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd98cf0
	void SetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd99290
	void SetNiagaraArrayQuatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FQuat& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd98b40
	void SetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FQuat>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd98a20
	void SetNiagaraArrayPositionValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPositionValue // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd98870
	void SetNiagaraArrayPosition(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPosition // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd98750
	void SetNiagaraArrayInt32Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd985c0
	void SetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<int32_t>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32 // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd984a0
	void SetNiagaraArrayFloatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, float Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd98310
	void SetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<float>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd981f0
	void SetNiagaraArrayColorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FLinearColor& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd98050
	void SetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FLinearColor>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd97f30
	void SetNiagaraArrayBoolValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, bool& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd97d80
	void SetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<bool>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd97c60
	struct FVector GetNiagaraArrayVectorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xd97b50
	struct FVector4 GetNiagaraArrayVector4Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xd97930
	struct TArray<struct FVector4> GetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4 // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd97820
	struct FVector2D GetNiagaraArrayVector2DValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xd97710
	struct TArray<struct FVector2D> GetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd97600
	struct TArray<struct FVector> GetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd97a40
	struct FQuat GetNiagaraArrayQuatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xd974f0
	struct TArray<struct FQuat> GetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd973e0
	struct FVector GetNiagaraArrayPositionValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPositionValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xd972d0
	struct TArray<struct FVector> GetNiagaraArrayPosition(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPosition // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd971c0
	int32_t GetNiagaraArrayInt32Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd970c0
	struct TArray<int32_t> GetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32 // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd96fb0
	float GetNiagaraArrayFloatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd96eb0
	struct TArray<float> GetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd96da0
	struct FLinearColor GetNiagaraArrayColorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xd96c90
	struct TArray<struct FLinearColor> GetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd96b80
	bool GetNiagaraArrayBoolValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd96a80
	struct TArray<bool> GetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd96970
};

// Class Niagara.NiagaraDataInterfaceArrayInt32
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayInt32 : UNiagaraDataInterfaceArray {
	struct TArray<int32_t> IntData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayBool
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayBool : UNiagaraDataInterfaceArray {
	struct TArray<bool> BoolData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayNiagaraID
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceArrayNiagaraID : UNiagaraDataInterfaceArray {
	struct TArray<struct FNiagaraID> IntData; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceAsyncGpuTrace
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceAsyncGpuTrace : UNiagaraDataInterface {
	int32_t MaxTracesPerParticle; // 0x38(0x04)
	int32_t MaxRetraces; // 0x3c(0x04)
	enum class ENDICollisionQuery_AsyncGpuTraceProvider TraceProvider; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Niagara.NiagaraDataInterfaceAudioSubmix
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface {
	struct USoundSubmix* Submix; // 0x38(0x08)
};

// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface {
	struct USoundSubmix* Submix; // 0x38(0x08)
	int32_t Resolution; // 0x40(0x04)
	float ScopeInMilliseconds; // 0x44(0x04)
};

// Class Niagara.NiagaraDataInterfaceAudioPlayer
// Size: 0x70 (Inherited: 0x38)
struct UNiagaraDataInterfaceAudioPlayer : UNiagaraDataInterface {
	struct USoundBase* SoundToPlay; // 0x38(0x08)
	struct USoundAttenuation* Attenuation; // 0x40(0x08)
	struct USoundConcurrency* Concurrency; // 0x48(0x08)
	struct TArray<struct FName> ParameterNames; // 0x50(0x10)
	bool bLimitPlaysPerTick; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t MaxPlaysPerTick; // 0x64(0x04)
	bool bStopWhenComponentIsDestroyed; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Niagara.NiagaraDataInterfaceAudioSpectrum
// Size: 0x50 (Inherited: 0x40)
struct UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix {
	int32_t Resolution; // 0x40(0x04)
	float MinimumFrequency; // 0x44(0x04)
	float MaximumFrequency; // 0x48(0x04)
	float NoiseFloorDb; // 0x4c(0x04)
};

// Class Niagara.NiagaraDataInterfaceCamera
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceCamera : UNiagaraDataInterface {
	int32_t PlayerControllerIndex; // 0x38(0x04)
	bool bRequireCurrentFrameData; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// Class Niagara.NiagaraDataInterfaceCollisionQuery
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceCollisionQuery : UNiagaraDataInterface {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class Niagara.NiagaraDataInterfaceCurveBase
// Size: 0x70 (Inherited: 0x38)
struct UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface {
	struct TArray<float> ShaderLUT; // 0x38(0x10)
	float LUTMinTime; // 0x48(0x04)
	float LUTMaxTime; // 0x4c(0x04)
	float LUTInvTimeRange; // 0x50(0x04)
	float LUTNumSamplesMinusOne; // 0x54(0x04)
	char pad_58[0x4]; // 0x58(0x04)
	char bUseLUT : 1; // 0x5c(0x01)
	char bExposeCurve : 1; // 0x5c(0x01)
	char pad_5C_2 : 6; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct FName ExposedName; // 0x60(0x08)
	struct UTexture2D* ExposedTexture; // 0x68(0x08)
};

// Class Niagara.NiagaraDataInterfaceColorCurve
// Size: 0x270 (Inherited: 0x70)
struct UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve RedCurve; // 0x70(0x80)
	struct FRichCurve GreenCurve; // 0xf0(0x80)
	struct FRichCurve BlueCurve; // 0x170(0x80)
	struct FRichCurve AlphaCurve; // 0x1f0(0x80)
};

// Class Niagara.NiagaraDataInterfaceCubeTexture
// Size: 0x60 (Inherited: 0x38)
struct UNiagaraDataInterfaceCubeTexture : UNiagaraDataInterface {
	struct UTextureCube* Texture; // 0x38(0x08)
	struct FNiagaraUserParameterBinding TextureUserParameter; // 0x40(0x20)
};

// Class Niagara.NiagaraDataInterfaceCurlNoise
// Size: 0x58 (Inherited: 0x38)
struct UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface {
	uint32_t Seed; // 0x38(0x04)
	char pad_3C[0x1c]; // 0x3c(0x1c)
};

// Class Niagara.NiagaraDataInterfaceCurve
// Size: 0xf0 (Inherited: 0x70)
struct UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve Curve; // 0x70(0x80)
};

// Class Niagara.NiagaraDataInterfaceDebugDraw
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceDebugDraw : UNiagaraDataInterface {
	uint32_t OverrideMaxLineInstances; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Niagara.NiagaraDataInterfaceEmitterProperties
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceEmitterProperties : UNiagaraDataInterface {
	struct FNiagaraDataInterfaceEmitterBinding EmitterBinding; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Niagara.NiagaraParticleCallbackHandler
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraParticleCallbackHandler : UInterface {

	void ReceiveParticleData(struct TArray<struct FBasicParticleData>& Data, struct UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset); // Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd9c6f0
};

// Class Niagara.NiagaraDataInterfaceExport
// Size: 0x68 (Inherited: 0x38)
struct UNiagaraDataInterfaceExport : UNiagaraDataInterface {
	struct FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x38(0x20)
	enum class ENDIExport_GPUAllocationMode GPUAllocationMode; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32_t GPUAllocationFixedSize; // 0x5c(0x04)
	float GPUAllocationPerParticleSize; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Niagara.NiagaraDataInterfaceGBuffer
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceGBuffer : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceGrid2D
// Size: 0x60 (Inherited: 0x38)
struct UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase {
	int32_t NumCellsX; // 0x38(0x04)
	int32_t NumCellsY; // 0x3c(0x04)
	int32_t NumCellsMaxAxis; // 0x40(0x04)
	int32_t NumAttributes; // 0x44(0x04)
	bool SetGridFromMaxAxis; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FVector2D WorldBBoxSize; // 0x50(0x10)
};

// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// Size: 0x128 (Inherited: 0x60)
struct UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D {
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x60(0x20)
	enum class ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x80(0x01)
	char bOverrideFormat : 1; // 0x81(0x01)
	char pad_81_1 : 7; // 0x81(0x01)
	char pad_82[0x56]; // 0x82(0x56)
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0xd8(0x50)

	void GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xd9c440
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xd9c190
	bool FillTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t AttributeIndex); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D // (Native|Public|BlueprintCallable) // @ game+0xd9c070
	bool FillRawTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xd9bd00
};

// Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
// Size: 0x148 (Inherited: 0x128)
struct UNiagaraDataInterfaceGrid2DCollectionReader : UNiagaraDataInterfaceGrid2DCollection {
	struct FString EmitterName; // 0x128(0x10)
	struct FString DIName; // 0x138(0x10)
};

// Class Niagara.NiagaraDataInterfaceGrid3D
// Size: 0x68 (Inherited: 0x38)
struct UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase {
	struct FIntVector NumCells; // 0x38(0x0c)
	float CellSize; // 0x44(0x04)
	int32_t NumCellsMaxAxis; // 0x48(0x04)
	enum class ESetResolutionMethod SetResolutionMethod; // 0x4c(0x04)
	struct FVector WorldBBoxSize; // 0x50(0x18)
};

// Class Niagara.NiagaraDataInterfaceGrid3DCollection
// Size: 0xe8 (Inherited: 0x68)
struct UNiagaraDataInterfaceGrid3DCollection : UNiagaraDataInterfaceGrid3D {
	int32_t NumAttributes; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x70(0x20)
	enum class ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x90(0x01)
	char bOverrideFormat : 1; // 0x91(0x01)
	char pad_91_1 : 7; // 0x91(0x01)
	char pad_92[0x56]; // 0x92(0x56)

	void GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xd9c570
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xd9c2c0
	bool FillVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t AttributeIndex); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture // (Native|Public|BlueprintCallable) // @ game+0xd9c070
	bool FillRawVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xd9be70
};

// Class Niagara.NiagaraDataInterfaceGrid3DCollectionReader
// Size: 0x108 (Inherited: 0xe8)
struct UNiagaraDataInterfaceGrid3DCollectionReader : UNiagaraDataInterfaceGrid3DCollection {
	struct FString EmitterName; // 0xe8(0x10)
	struct FString DIName; // 0xf8(0x10)
};

// Class Niagara.NiagaraDataInterfaceIntRenderTarget2D
// Size: 0xb0 (Inherited: 0x38)
struct UNiagaraDataInterfaceIntRenderTarget2D : UNiagaraDataInterfaceRWBase {
	struct FIntPoint Size; // 0x38(0x08)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x40(0x20)
	struct TMap<uint64_t, struct UTextureRenderTarget2D*> ManagedRenderTargets; // 0x60(0x50)
};

// Class Niagara.NiagaraDataInterfaceLandscape
// Size: 0x58 (Inherited: 0x38)
struct UNiagaraDataInterfaceLandscape : UNiagaraDataInterface {
	struct AActor* SourceLandscape; // 0x38(0x08)
	enum class ENDILandscape_SourceMode SourceMode; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceMeshRendererInfo
// Size: 0x50 (Inherited: 0x38)
struct UNiagaraDataInterfaceMeshRendererInfo : UNiagaraDataInterface {
	struct UNiagaraMeshRendererProperties* MeshRenderer; // 0x38(0x08)
	char pad_40[0x10]; // 0x40(0x10)
};

// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// Size: 0x70 (Inherited: 0x68)
struct UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D {
	uint32_t MaxNeighborsPerCell; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Niagara.NiagaraDataInterfaceOcclusion
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceOcclusion : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceParticleRead
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceParticleRead : UNiagaraDataInterfaceRWBase {
	struct FString EmitterName; // 0x38(0x10)
};

// Class Niagara.NiagaraDataInterfacePlatformSet
// Size: 0x68 (Inherited: 0x38)
struct UNiagaraDataInterfacePlatformSet : UNiagaraDataInterface {
	struct FNiagaraPlatformSet Platforms; // 0x38(0x30)
};

// Class Niagara.NiagaraDataInterfaceRasterizationGrid3D
// Size: 0x78 (Inherited: 0x68)
struct UNiagaraDataInterfaceRasterizationGrid3D : UNiagaraDataInterfaceGrid3D {
	int32_t NumAttributes; // 0x68(0x04)
	float Precision; // 0x6c(0x04)
	int32_t ResetValue; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class Niagara.NiagaraDataInterfaceRenderTarget2D
// Size: 0x108 (Inherited: 0x38)
struct UNiagaraDataInterfaceRenderTarget2D : UNiagaraDataInterfaceRWBase {
	struct FIntPoint Size; // 0x38(0x08)
	enum class ENiagaraMipMapGeneration MipMapGeneration; // 0x40(0x01)
	enum class ENiagaraMipMapGenerationType MipMapGenerationType; // 0x41(0x01)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0x42(0x01)
	char bInheritUserParameterSettings : 1; // 0x43(0x01)
	char bOverrideFormat : 1; // 0x43(0x01)
	char pad_43_2 : 6; // 0x43(0x01)
	char pad_44[0x4]; // 0x44(0x04)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x48(0x20)
	char pad_68[0x50]; // 0x68(0x50)
	struct TMap<uint64_t, struct UTextureRenderTarget2D*> ManagedRenderTargets; // 0xb8(0x50)
};

// Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
// Size: 0xb8 (Inherited: 0x38)
struct UNiagaraDataInterfaceRenderTarget2DArray : UNiagaraDataInterfaceRWBase {
	struct FIntVector Size; // 0x38(0x0c)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0x44(0x01)
	char bInheritUserParameterSettings : 1; // 0x45(0x01)
	char bOverrideFormat : 1; // 0x45(0x01)
	char pad_45_2 : 6; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x48(0x20)
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x68(0x50)
};

// Class Niagara.NiagaraDataInterfaceRenderTargetCube
// Size: 0xb0 (Inherited: 0x38)
struct UNiagaraDataInterfaceRenderTargetCube : UNiagaraDataInterfaceRWBase {
	int32_t Size; // 0x38(0x04)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0x3c(0x01)
	char bInheritUserParameterSettings : 1; // 0x3d(0x01)
	char bOverrideFormat : 1; // 0x3d(0x01)
	char pad_3D_2 : 6; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x40(0x20)
	struct TMap<uint64_t, struct UTextureRenderTargetCube*> ManagedRenderTargets; // 0x60(0x50)
};

// Class Niagara.NiagaraDataInterfaceRenderTargetVolume
// Size: 0xb8 (Inherited: 0x38)
struct UNiagaraDataInterfaceRenderTargetVolume : UNiagaraDataInterfaceRWBase {
	struct FIntVector Size; // 0x38(0x0c)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0x44(0x01)
	char bInheritUserParameterSettings : 1; // 0x45(0x01)
	char bOverrideFormat : 1; // 0x45(0x01)
	char pad_45_2 : 6; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x48(0x20)
	struct TMap<uint64_t, struct UTextureRenderTargetVolume*> ManagedRenderTargets; // 0x68(0x50)
};

// Class Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery
// Size: 0x50 (Inherited: 0x38)
struct UNiagaraDataInterfaceRigidMeshCollisionQuery : UNiagaraDataInterface {
	struct FString Tag; // 0x38(0x10)
	bool OnlyUseMoveable; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32_t MaxNumPrimitives; // 0x4c(0x04)
};

// Class Niagara.NiagaraDataInterfaceSimpleCounter
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceSimpleCounter : UNiagaraDataInterface {
	enum class ENiagaraGpuSyncMode GpuSyncMode; // 0x38(0x04)
	int32_t InitialValue; // 0x3c(0x04)
};

// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// Size: 0xc8 (Inherited: 0x38)
struct UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface {
	enum class ENDISkeletalMesh_SourceMode SourceMode; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct AActor* Source; // 0x40(0x08)
	struct FNiagaraUserParameterBinding MeshUserParameter; // 0x48(0x20)
	struct USkeletalMeshComponent* SourceComponent; // 0x68(0x08)
	enum class ENDISkeletalMesh_SkinningMode SkinningMode; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FName> SamplingRegions; // 0x78(0x10)
	int32_t WholeMeshLOD; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct FName> FilteredBones; // 0x90(0x10)
	struct TArray<struct FName> FilteredSockets; // 0xa0(0x10)
	struct FName ExcludeBoneName; // 0xb0(0x08)
	char bExcludeBone : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32_t UvSetIndex; // 0xbc(0x04)
	bool bRequireCurrentFrameData; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class Niagara.NiagaraDataInterfaceSpline
// Size: 0xb8 (Inherited: 0x38)
struct UNiagaraDataInterfaceSpline : UNiagaraDataInterface {
	struct AActor* Source; // 0x38(0x08)
	struct FNiagaraUserParameterBinding SplineUserParameter; // 0x40(0x20)
	bool bUseLUT; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t NumLUTSteps; // 0x64(0x04)
	char pad_68[0x50]; // 0x68(0x50)
};

// Class Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0x88 (Inherited: 0x38)
struct UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface {
	enum class ENDIStaticMesh_SourceMode SourceMode; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UStaticMesh* DefaultMesh; // 0x40(0x08)
	struct AActor* Source; // 0x48(0x08)
	struct UStaticMeshComponent* SourceComponent; // 0x50(0x08)
	struct FNDIStaticMeshSectionFilter SectionFilter; // 0x58(0x10)
	bool bUsePhysicsBodyVelocity; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FName> FilteredSockets; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)
};

// Class Niagara.NiagaraDataInterfaceTexture
// Size: 0x60 (Inherited: 0x38)
struct UNiagaraDataInterfaceTexture : UNiagaraDataInterface {
	struct UTexture* Texture; // 0x38(0x08)
	struct FNiagaraUserParameterBinding TextureUserParameter; // 0x40(0x20)
};

// Class Niagara.NiagaraDataInterfaceUObjectPropertyReader
// Size: 0x98 (Inherited: 0x38)
struct UNiagaraDataInterfaceUObjectPropertyReader : UNiagaraDataInterface {
	struct FNiagaraUserParameterBinding UObjectParameterBinding; // 0x38(0x20)
	struct TArray<struct FNiagaraUObjectPropertyReaderRemap> PropertyRemap; // 0x58(0x10)
	LazyObjectProperty SourceActor; // 0x68(0x1c)
	char pad_84[0x4]; // 0x84(0x04)
	ClassPtrProperty SourceActorComponentClass; // 0x88(0x08)
	char pad_90[0x8]; // 0x90(0x08)

	void SetUObjectReaderPropertyRemap(struct UNiagaraComponent* NiagaraComponent, struct FName UserParameterName, struct FName GraphName, struct FName RemapName); // Function Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xda1350
};

// Class Niagara.NiagaraDataInterfaceVector2DCurve
// Size: 0x170 (Inherited: 0x70)
struct UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x70(0x80)
	struct FRichCurve YCurve; // 0xf0(0x80)
};

// Class Niagara.NiagaraDataInterfaceVector4Curve
// Size: 0x270 (Inherited: 0x70)
struct UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x70(0x80)
	struct FRichCurve YCurve; // 0xf0(0x80)
	struct FRichCurve ZCurve; // 0x170(0x80)
	struct FRichCurve WCurve; // 0x1f0(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorCurve
// Size: 0x1f0 (Inherited: 0x70)
struct UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x70(0x80)
	struct FRichCurve YCurve; // 0xf0(0x80)
	struct FRichCurve ZCurve; // 0x170(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorField
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceVectorField : UNiagaraDataInterface {
	struct UVectorField* Field; // 0x38(0x08)
	bool bTileX; // 0x40(0x01)
	bool bTileY; // 0x41(0x01)
	bool bTileZ; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
};

// Class Niagara.NiagaraDataInterfaceVolumeTexture
// Size: 0x60 (Inherited: 0x38)
struct UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface {
	struct UVolumeTexture* Texture; // 0x38(0x08)
	struct FNiagaraUserParameterBinding TextureUserParameter; // 0x40(0x20)
};

// Class Niagara.NiagaraDebugHUDSettings
// Size: 0x268 (Inherited: 0x28)
struct UNiagaraDebugHUDSettings : UObject {
	char pad_28[0x20]; // 0x28(0x20)
	struct FNiagaraDebugHUDSettingsData Data; // 0x48(0x220)
};

// Class Niagara.NiagaraEditorDataBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraEditorDataBase : UObject {
};

// Class Niagara.NiagaraEditorParametersAdapterBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraEditorParametersAdapterBase : UObject {
};

// Class Niagara.NiagaraSignificanceHandler
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraSignificanceHandler : UObject {
};

// Class Niagara.NiagaraSignificanceHandlerDistance
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraSignificanceHandlerDistance : UNiagaraSignificanceHandler {
};

// Class Niagara.NiagaraSignificanceHandlerAge
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraSignificanceHandlerAge : UNiagaraSignificanceHandler {
};

// Class Niagara.NiagaraEffectType
// Size: 0xa0 (Inherited: 0x28)
struct UNiagaraEffectType : UObject {
	bool bAllowCullingForLocalPlayers; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	enum class ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x2c(0x04)
	enum class ENiagaraCullReaction CullReaction; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UNiagaraSignificanceHandler* SignificanceHandler; // 0x38(0x08)
	struct TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x40(0x10)
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x50(0x10)
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x60(0x10)
	char pad_70[0x8]; // 0x70(0x08)
	struct UNiagaraBaselineController* PerformanceBaselineController; // 0x78(0x08)
	struct FNiagaraPerfBaselineStats PerfBaselineStats; // 0x80(0x10)
	struct FGuid PerfBaselineVersion; // 0x90(0x10)
};

// Class Niagara.NiagaraEmitter
// Size: 0x310 (Inherited: 0x28)
struct UNiagaraEmitter : UObject {
	bool bLocalSpace; // 0x28(0x01)
	bool bDeterminism; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32_t RandomSeed; // 0x2c(0x04)
	enum class EParticleAllocationMode AllocationMode; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t PreAllocationCount; // 0x34(0x04)
	struct FNiagaraEmitterScriptProperties UpdateScriptProps; // 0x38(0x28)
	struct FNiagaraEmitterScriptProperties SpawnScriptProps; // 0x60(0x28)
	enum class ENiagaraSimTarget SimTarget; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FBox FixedBounds; // 0x90(0x38)
	int32_t MinDetailLevel; // 0xc8(0x04)
	int32_t MaxDetailLevel; // 0xcc(0x04)
	struct FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides; // 0xd0(0x14)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FNiagaraPlatformSet Platforms; // 0xe8(0x30)
	struct FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; // 0x118(0x10)
	char bInterpolatedSpawning : 1; // 0x128(0x01)
	char bFixedBounds : 1; // 0x128(0x01)
	char bUseMinDetailLevel : 1; // 0x128(0x01)
	char bUseMaxDetailLevel : 1; // 0x128(0x01)
	char bOverrideGlobalSpawnCountScale : 1; // 0x128(0x01)
	char bRequiresPersistentIDs : 1; // 0x128(0x01)
	char bCombineEventSpawn : 1; // 0x128(0x01)
	char pad_128_7 : 1; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float MaxDeltaTimePerTick; // 0x12c(0x04)
	char bLimitDeltaTime : 1; // 0x130(0x01)
	char pad_130_1 : 7; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	int32_t MaxGPUParticlesSpawnPerFrame; // 0x134(0x04)
	struct FNiagaraParameterStore RendererBindings; // 0x138(0x88)
	char pad_1C0[0x18]; // 0x1c0(0x18)
	struct FString UniqueEmitterName; // 0x1d8(0x10)
	struct TArray<struct UNiagaraRendererProperties*> RendererProperties; // 0x1e8(0x10)
	struct TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps; // 0x1f8(0x10)
	struct TArray<struct UNiagaraSimulationStageBase*> SimulationStages; // 0x208(0x10)
	struct UNiagaraScript* GPUComputeScript; // 0x218(0x08)
	struct TArray<struct FName> SharedEventGeneratorIds; // 0x220(0x10)
	char pad_230[0xe0]; // 0x230(0xe0)
};

// Class Niagara.NiagaraEventReceiverEmitterAction
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraEventReceiverEmitterAction : UObject {
};

// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// Size: 0x30 (Inherited: 0x28)
struct UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction {
	uint32_t NumParticles; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Niagara.NiagaraFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraFunctionLibrary : UBlueprintFunctionLibrary {

	struct UNiagaraComponent* SpawnSystemAttachedWithParams(struct FFXSystemSpawnParameters& SpawnParams); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttachedWithParams // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xda56d0
	struct UNiagaraComponent* SpawnSystemAttached(struct UNiagaraSystem* SystemTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xda53c0
	struct UNiagaraComponent* SpawnSystemAtLocationWithParams(struct FFXSystemSpawnParameters& SpawnParams); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocationWithParams // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xda52c0
	struct UNiagaraComponent* SpawnSystemAtLocation(struct UObject* WorldContextObject, struct UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xda4fd0
	void SetVolumeTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UVolumeTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xda4d90
	void SetTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetTextureObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xda4eb0
	void SetTexture2DArrayObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture2DArray* Texture); // Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xda4d90
	void SetSkeletalMeshDataInterfaceSamplingRegions(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct TArray<struct FName>& SamplingRegions); // Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xda4c60
	void SetComponentNiagaraGPURayTracedCollisionGroup(struct UObject* WorldContextObject, struct UPrimitiveComponent* Primitive, int32_t CollisionGroup); // Function Niagara.NiagaraFunctionLibrary.SetComponentNiagaraGPURayTracedCollisionGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xda4b60
	void SetActorNiagaraGPURayTracedCollisionGroup(struct UObject* WorldContextObject, struct AActor* Actor, int32_t CollisionGroup); // Function Niagara.NiagaraFunctionLibrary.SetActorNiagaraGPURayTracedCollisionGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xda4a60
	void ReleaseNiagaraGPURayTracedCollisionGroup(struct UObject* WorldContextObject, int32_t CollisionGroup); // Function Niagara.NiagaraFunctionLibrary.ReleaseNiagaraGPURayTracedCollisionGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xda49a0
	void OverrideSystemUserVariableStaticMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMeshComponent* StaticMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xda4880
	void OverrideSystemUserVariableStaticMesh(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMesh* StaticMesh); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xda4760
	void OverrideSystemUserVariableSkeletalMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct USkeletalMeshComponent* SkeletalMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xda4640
	struct UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(struct UObject* WorldContextObject, struct UNiagaraParameterCollection* Collection); // Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xda4570
	int32_t AcquireNiagaraGPURayTracedCollisionGroup(struct UObject* WorldContextObject); // Function Niagara.NiagaraFunctionLibrary.AcquireNiagaraGPURayTracedCollisionGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xda44e0
};

// Class Niagara.NiagaraLensEffectBase
// Size: 0x310 (Inherited: 0x288)
struct ANiagaraLensEffectBase : ANiagaraActor {
	char pad_288[0x8]; // 0x288(0x08)
	struct FTransform DesiredRelativeTransform; // 0x290(0x60)
	float BaseAuthoredFOV; // 0x2f0(0x04)
	char bAllowMultipleInstances : 1; // 0x2f4(0x01)
	char bResetWhenRetriggered : 1; // 0x2f4(0x01)
	char pad_2F4_2 : 6; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	struct TArray<struct AActor*> EmittersToTreatAsSame; // 0x2f8(0x10)
	struct APlayerCameraManager* OwningCameraManager; // 0x308(0x08)
};

// Class Niagara.NiagaraLightRendererProperties
// Size: 0x398 (Inherited: 0xd0)
struct UNiagaraLightRendererProperties : UNiagaraRendererProperties {
	char bUseInverseSquaredFalloff : 1; // 0xd0(0x01)
	char bAffectsTranslucency : 1; // 0xd0(0x01)
	char bAlphaScalesBrightness : 1; // 0xd0(0x01)
	char pad_D0_3 : 5; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float RadiusScale; // 0xd4(0x04)
	float DefaultExponent; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FVector ColorAdd; // 0xe0(0x18)
	int32_t RendererVisibility; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0x100(0x58)
	struct FNiagaraVariableAttributeBinding LightExponentBinding; // 0x158(0x58)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x1b0(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x208(0x58)
	struct FNiagaraVariableAttributeBinding RadiusBinding; // 0x260(0x58)
	struct FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x2b8(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x310(0x58)
	char pad_368[0x30]; // 0x368(0x30)
};

// Class Niagara.NiagaraMeshRendererProperties
// Size: 0x910 (Inherited: 0xd0)
struct UNiagaraMeshRendererProperties : UNiagaraRendererProperties {
	struct TArray<struct FNiagaraMeshRendererMeshProperties> Meshes; // 0xd0(0x10)
	enum class ENiagaraRendererSourceDataMode SourceMode; // 0xe0(0x01)
	enum class ENiagaraSortMode SortMode; // 0xe1(0x01)
	char pad_E2[0x2]; // 0xe2(0x02)
	char bOverrideMaterials : 1; // 0xe4(0x01)
	char bSortOnlyWhenTranslucent : 1; // 0xe4(0x01)
	char bGpuLowLatencyTranslucency : 1; // 0xe4(0x01)
	char bSubImageBlend : 1; // 0xe4(0x01)
	char bEnableFrustumCulling : 1; // 0xe4(0x01)
	char bEnableCameraDistanceCulling : 1; // 0xe4(0x01)
	char bEnableMeshFlipbook : 1; // 0xe4(0x01)
	char pad_E4_7 : 1; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct TArray<struct FNiagaraMeshMaterialOverride> OverrideMaterials; // 0xe8(0x10)
	struct FVector2D SubImageSize; // 0xf8(0x10)
	enum class ENiagaraMeshFacingMode FacingMode; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	char bLockedAxisEnable : 1; // 0x10c(0x01)
	char pad_10C_1 : 7; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	struct FVector LockedAxis; // 0x110(0x18)
	enum class ENiagaraMeshLockedAxisSpace LockedAxisSpace; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float MinCameraDistance; // 0x12c(0x04)
	float MaxCameraDistance; // 0x130(0x04)
	uint32_t RendererVisibility; // 0x134(0x04)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x138(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x190(0x58)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x1e8(0x58)
	struct FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x240(0x58)
	struct FNiagaraVariableAttributeBinding ScaleBinding; // 0x298(0x58)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x2f0(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x348(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x3a0(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x3f8(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x450(0x58)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x4a8(0x58)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x500(0x58)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x558(0x58)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x5b0(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x608(0x58)
	struct FNiagaraVariableAttributeBinding MeshIndexBinding; // 0x660(0x58)
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x6b8(0x10)
	struct FNiagaraVariableAttributeBinding PrevPositionBinding; // 0x6c8(0x58)
	struct FNiagaraVariableAttributeBinding PrevScaleBinding; // 0x720(0x58)
	struct FNiagaraVariableAttributeBinding PrevMeshOrientationBinding; // 0x778(0x58)
	struct FNiagaraVariableAttributeBinding PrevCameraOffsetBinding; // 0x7d0(0x58)
	struct FNiagaraVariableAttributeBinding PrevVelocityBinding; // 0x828(0x58)
	char pad_880[0x68]; // 0x880(0x68)
	struct UStaticMesh* ParticleMesh; // 0x8e8(0x08)
	struct FVector PivotOffset; // 0x8f0(0x18)
	enum class ENiagaraMeshPivotOffsetSpace PivotOffsetSpace; // 0x908(0x01)
	char pad_909[0x7]; // 0x909(0x07)
};

// Class Niagara.NiagaraMessageDataBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraMessageDataBase : UObject {
};

// Class Niagara.NiagaraParameterCollectionInstance
// Size: 0xf0 (Inherited: 0x28)
struct UNiagaraParameterCollectionInstance : UObject {
	struct UNiagaraParameterCollection* Collection; // 0x28(0x08)
	struct TArray<struct FNiagaraVariable> OverridenParameters; // 0x30(0x10)
	struct FNiagaraParameterStore ParameterStorage; // 0x40(0x88)
	char pad_C8[0x28]; // 0xc8(0x28)

	void SetVectorParameter(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xda8bc0
	void SetVector4Parameter(struct FString InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda8ac0
	void SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xda89d0
	void SetQuatParameter(struct FString InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda88e0
	void SetIntParameter(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xda8800
	void SetFloatParameter(struct FString InVariableName, float InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xda8710
	void SetColorParameter(struct FString InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xda8620
	void SetBoolParameter(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xda8540
	struct FVector GetVectorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xda8310
	struct FVector4 GetVector4Parameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xda8250
	struct FVector2D GetVector2DParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xda8190
	struct FQuat GetQuatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xda80a0
	int32_t GetIntParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xda7ff0
	float GetFloatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xda7f40
	struct FLinearColor GetColorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xda7e80
	bool GetBoolParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xda7dd0
};

// Class Niagara.NiagaraParameterCollection
// Size: 0x60 (Inherited: 0x28)
struct UNiagaraParameterCollection : UObject {
	struct FName Namespace; // 0x28(0x08)
	struct TArray<struct FNiagaraVariable> Parameters; // 0x30(0x10)
	struct UMaterialParameterCollection* SourceMaterialCollection; // 0x40(0x08)
	struct UNiagaraParameterCollectionInstance* DefaultInstance; // 0x48(0x08)
	struct FGuid CompileId; // 0x50(0x10)
};

// Class Niagara.NiagaraParameterDefinitionsBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraParameterDefinitionsBase : UObject {
};

// Class Niagara.NiagaraBaselineController
// Size: 0x68 (Inherited: 0x28)
struct UNiagaraBaselineController : UObject {
	float TestDuration; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UNiagaraEffectType* EffectType; // 0x30(0x08)
	struct ANiagaraPerfBaselineActor* Owner; // 0x38(0x08)
	struct TSoftObjectPtr<UNiagaraSystem> System; // 0x40(0x28)

	bool OnTickTest(); // Function Niagara.NiagaraBaselineController.OnTickTest // (Native|Event|Public|BlueprintEvent) // @ game+0xda8510
	void OnOwnerTick(float DeltaTime); // Function Niagara.NiagaraBaselineController.OnOwnerTick // (Native|Event|Public|BlueprintEvent) // @ game+0xda8480
	void OnEndTest(struct FNiagaraPerfBaselineStats Stats); // Function Niagara.NiagaraBaselineController.OnEndTest // (Native|Event|Public|BlueprintEvent) // @ game+0xda83f0
	void OnBeginTest(); // Function Niagara.NiagaraBaselineController.OnBeginTest // (Native|Event|Public|BlueprintEvent) // @ game+0xda83d0
	struct UNiagaraSystem* GetSystem(); // Function Niagara.NiagaraBaselineController.GetSystem // (Final|Native|Public|BlueprintCallable) // @ game+0xda8160
};

// Class Niagara.NiagaraBaselineController_Basic
// Size: 0x80 (Inherited: 0x68)
struct UNiagaraBaselineController_Basic : UNiagaraBaselineController {
	int32_t NumInstances; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct UNiagaraComponent*> SpawnedComponents; // 0x70(0x10)
};

// Class Niagara.NiagaraPerfBaselineActor
// Size: 0x288 (Inherited: 0x278)
struct ANiagaraPerfBaselineActor : AActor {
	struct UNiagaraBaselineController* Controller; // 0x278(0x08)
	struct UTextRenderComponent* Label; // 0x280(0x08)
};

// Class Niagara.NiagaraPrecompileContainer
// Size: 0x40 (Inherited: 0x28)
struct UNiagaraPrecompileContainer : UObject {
	struct TArray<struct UNiagaraScript*> Scripts; // 0x28(0x10)
	struct UNiagaraSystem* System; // 0x38(0x08)
};

// Class Niagara.NiagaraPreviewBase
// Size: 0x278 (Inherited: 0x278)
struct ANiagaraPreviewBase : AActor {

	void SetSystem(struct UNiagaraSystem* InSystem); // Function Niagara.NiagaraPreviewBase.SetSystem // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SetLabelText(struct FText& InXAxisText, struct FText& InYAxisText); // Function Niagara.NiagaraPreviewBase.SetLabelText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
};

// Class Niagara.NiagaraPreviewAxis
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraPreviewAxis : UObject {

	int32_t Num(); // Function Niagara.NiagaraPreviewAxis.Num // (Native|Event|Public|BlueprintEvent) // @ game+0xdabf60
	void ApplyToPreview(struct UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, struct FString& OutLabelText); // Function Niagara.NiagaraPreviewAxis.ApplyToPreview // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdabd10
};

// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// Size: 0x38 (Inherited: 0x28)
struct UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis {
	struct FName Param; // 0x28(0x08)
	int32_t Count; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase {
	int32_t Min; // 0x38(0x04)
	int32_t Max; // 0x3c(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase {
	float Min; // 0x38(0x04)
	float Max; // 0x3c(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// Size: 0x58 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector2D Min; // 0x38(0x10)
	struct FVector2D Max; // 0x48(0x10)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// Size: 0x68 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector Min; // 0x38(0x18)
	struct FVector Max; // 0x50(0x18)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// Size: 0x80 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct FVector4 Min; // 0x40(0x20)
	struct FVector4 Max; // 0x60(0x20)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// Size: 0x58 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase {
	struct FLinearColor Min; // 0x38(0x10)
	struct FLinearColor Max; // 0x48(0x10)
};

// Class Niagara.NiagaraPreviewGrid
// Size: 0x2c8 (Inherited: 0x278)
struct ANiagaraPreviewGrid : AActor {
	struct UNiagaraSystem* System; // 0x278(0x08)
	enum class ENiagaraPreviewGridResetMode ResetMode; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct UNiagaraPreviewAxis* PreviewAxisX; // 0x288(0x08)
	struct UNiagaraPreviewAxis* PreviewAxisY; // 0x290(0x08)
	struct ANiagaraPreviewBase* PreviewClass; // 0x298(0x08)
	float SpacingX; // 0x2a0(0x04)
	float SpacingY; // 0x2a4(0x04)
	int32_t NumX; // 0x2a8(0x04)
	int32_t NumY; // 0x2ac(0x04)
	struct TArray<struct UChildActorComponent*> PreviewComponents; // 0x2b0(0x10)
	char pad_2C0[0x8]; // 0x2c0(0x08)

	void SetPaused(bool bPaused); // Function Niagara.NiagaraPreviewGrid.SetPaused // (Final|Native|Public|BlueprintCallable) // @ game+0xdabf90
	void GetPreviews(struct TArray<struct UNiagaraComponent*>& OutPreviews); // Function Niagara.NiagaraPreviewGrid.GetPreviews // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xdabeb0
	void DeactivatePreviews(); // Function Niagara.NiagaraPreviewGrid.DeactivatePreviews // (Final|Native|Public|BlueprintCallable) // @ game+0xdabe90
	void ActivatePreviews(bool bReset); // Function Niagara.NiagaraPreviewGrid.ActivatePreviews // (Final|Native|Public|BlueprintCallable) // @ game+0xdabc80
};

// Class Niagara.NiagaraRibbonRendererProperties
// Size: 0xa40 (Inherited: 0xd0)
struct UNiagaraRibbonRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; // 0xd0(0x08)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0xd8(0x20)
	enum class ENiagaraRibbonFacingMode FacingMode; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FNiagaraRibbonUVSettings UV0Settings; // 0x100(0x38)
	struct FNiagaraRibbonUVSettings UV1Settings; // 0x138(0x38)
	enum class ENiagaraRibbonDrawDirection DrawDirection; // 0x170(0x01)
	enum class ENiagaraRibbonShapeMode Shape; // 0x171(0x01)
	bool bEnableAccurateGeometry; // 0x172(0x01)
	char pad_173[0x1]; // 0x173(0x01)
	int32_t WidthSegmentationCount; // 0x174(0x04)
	int32_t MultiPlaneCount; // 0x178(0x04)
	int32_t TubeSubdivisions; // 0x17c(0x04)
	struct TArray<struct FNiagaraRibbonShapeCustomVertex> CustomVertices; // 0x180(0x10)
	float CurveTension; // 0x190(0x04)
	enum class ENiagaraRibbonTessellationMode TessellationMode; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	int32_t TessellationFactor; // 0x198(0x04)
	bool bUseConstantFactor; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	float TessellationAngle; // 0x1a0(0x04)
	bool bScreenSpaceTessellation; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x1a8(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x200(0x58)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x258(0x58)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x2b0(0x58)
	struct FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x308(0x58)
	struct FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x360(0x58)
	struct FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x3b8(0x58)
	struct FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x410(0x58)
	struct FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x468(0x58)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x4c0(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x518(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x570(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x5c8(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x620(0x58)
	struct FNiagaraVariableAttributeBinding RibbonUVDistance; // 0x678(0x58)
	struct FNiagaraVariableAttributeBinding U0OverrideBinding; // 0x6d0(0x58)
	struct FNiagaraVariableAttributeBinding V0RangeOverrideBinding; // 0x728(0x58)
	struct FNiagaraVariableAttributeBinding U1OverrideBinding; // 0x780(0x58)
	struct FNiagaraVariableAttributeBinding V1RangeOverrideBinding; // 0x7d8(0x58)
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x830(0x10)
	struct FNiagaraVariableAttributeBinding PrevPositionBinding; // 0x840(0x58)
	struct FNiagaraVariableAttributeBinding PrevRibbonWidthBinding; // 0x898(0x58)
	struct FNiagaraVariableAttributeBinding PrevRibbonFacingBinding; // 0x8f0(0x58)
	struct FNiagaraVariableAttributeBinding PrevRibbonTwistBinding; // 0x948(0x58)
	char pad_9A0[0xa0]; // 0x9a0(0xa0)
};

// Class Niagara.NiagaraScript
// Size: 0x348 (Inherited: 0x28)
struct UNiagaraScript : UNiagaraScriptBase {
	enum class ENiagaraScriptUsage Usage; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FGuid UsageId; // 0x2c(0x10)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FNiagaraParameterStore RapidIterationParameters; // 0x40(0x88)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0xc8(0xa8)
	struct TArray<struct FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x170(0x10)
	struct FNiagaraVMExecutableDataId CachedScriptVMId; // 0x180(0x58)
	char pad_1D8[0x10]; // 0x1d8(0x10)
	struct FNiagaraVMExecutableData CachedScriptVM; // 0x1e8(0x138)
	struct TArray<struct UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x320(0x10)
	struct TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // 0x330(0x10)
	char pad_340[0x8]; // 0x340(0x08)

	void RaiseOnGPUCompilationComplete(); // Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete // (Final|Native|Public) // @ game+0xacd350
};

// Class Niagara.NiagaraScriptSourceBase
// Size: 0x48 (Inherited: 0x28)
struct UNiagaraScriptSourceBase : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class Niagara.NiagaraSettings
// Size: 0xe8 (Inherited: 0x38)
struct UNiagaraSettings : UDeveloperSettings {
	bool bSystemsSupportLargeWorldCoordinates; // 0x38(0x01)
	bool bEnforceStrictStackTypes; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct FSoftObjectPath DefaultEffectType; // 0x40(0x18)
	struct FLinearColor PositionPinTypeColor; // 0x58(0x10)
	struct TArray<struct FText> QualityLevels; // 0x68(0x10)
	struct TMap<struct FString, struct FText> ComponentRendererWarningsPerClass; // 0x78(0x50)
	enum class ETextureRenderTargetFormat DefaultRenderTargetFormat; // 0xc8(0x01)
	enum class ENiagaraGpuBufferFormat DefaultGridFormat; // 0xc9(0x01)
	char pad_CA[0x2]; // 0xca(0x02)
	enum class ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting; // 0xcc(0x04)
	enum class ENiagaraDefaultRendererPixelCoverageMode DefaultPixelCoverageMode; // 0xd0(0x01)
	enum class ENDISkelMesh_GpuMaxInfluences NDISkelMesh_GpuMaxInfluences; // 0xd1(0x01)
	enum class ENDISkelMesh_GpuUniformSamplingFormat NDISkelMesh_GpuUniformSamplingFormat; // 0xd2(0x01)
	enum class ENDISkelMesh_AdjacencyTriangleIndexFormat NDISkelMesh_AdjacencyTriangleIndexFormat; // 0xd3(0x01)
	bool NDIStaticMesh_AllowDistanceFields; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct TArray<enum class ENDICollisionQuery_AsyncGpuTraceProvider> NDICollisionQuery_AsyncGpuTraceProviderOrder; // 0xd8(0x10)
};

// Class Niagara.NiagaraSimulationStageBase
// Size: 0x40 (Inherited: 0x28)
struct UNiagaraSimulationStageBase : UNiagaraMergeable {
	struct UNiagaraScript* Script; // 0x28(0x08)
	struct FName SimulationStageName; // 0x30(0x08)
	char bEnabled : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Niagara.NiagaraSimulationStageGeneric
// Size: 0x1a0 (Inherited: 0x40)
struct UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase {
	struct FNiagaraVariableAttributeBinding EnabledBinding; // 0x40(0x58)
	enum class ENiagaraIterationSource IterationSource; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32_t Iterations; // 0x9c(0x04)
	struct FNiagaraVariableAttributeBinding NumIterationsBinding; // 0xa0(0x58)
	char bSpawnOnly : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	enum class ENiagaraSimStageExecuteBehavior ExecuteBehavior; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	char bDisablePartialParticleUpdate : 1; // 0x100(0x01)
	char pad_100_1 : 7; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct FNiagaraVariableDataInterfaceBinding DataInterface; // 0x108(0x20)
	char bParticleIterationStateEnabled : 1; // 0x128(0x01)
	char pad_128_1 : 7; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct FNiagaraVariableAttributeBinding ParticleIterationStateBinding; // 0x130(0x58)
	struct FIntPoint ParticleIterationStateRange; // 0x188(0x08)
	char bGpuDispatchForceLinear : 1; // 0x190(0x01)
	char bOverrideGpuDispatchNumThreads : 1; // 0x190(0x01)
	char pad_190_2 : 6; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	struct FIntVector OverrideGpuDispatchNumThreads; // 0x194(0x0c)
};

// Class Niagara.NiagaraSpriteRendererProperties
// Size: 0xb28 (Inherited: 0xd0)
struct UNiagaraSpriteRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; // 0xd0(0x08)
	enum class ENiagaraRendererSourceDataMode SourceMode; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0xe0(0x20)
	enum class ENiagaraSpriteAlignment Alignment; // 0x100(0x01)
	enum class ENiagaraSpriteFacingMode FacingMode; // 0x101(0x01)
	char pad_102[0x6]; // 0x102(0x06)
	struct FVector2D PivotInUVSpace; // 0x108(0x10)
	float MacroUVRadius; // 0x118(0x04)
	enum class ENiagaraSortMode SortMode; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct FVector2D SubImageSize; // 0x120(0x10)
	char bSubImageBlend : 1; // 0x130(0x01)
	char bRemoveHMDRollInVR : 1; // 0x130(0x01)
	char bSortOnlyWhenTranslucent : 1; // 0x130(0x01)
	char bGpuLowLatencyTranslucency : 1; // 0x130(0x01)
	char pad_130_4 : 4; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	enum class ENiagaraRendererPixelCoverageMode PixelCoverageMode; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	float PixelCoverageBlend; // 0x138(0x04)
	float MinFacingCameraBlendDistance; // 0x13c(0x04)
	float MaxFacingCameraBlendDistance; // 0x140(0x04)
	char bEnableCameraDistanceCulling : 1; // 0x144(0x01)
	char pad_144_1 : 7; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	float MinCameraDistance; // 0x148(0x04)
	float MaxCameraDistance; // 0x14c(0x04)
	uint32_t RendererVisibility; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x158(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x1b0(0x58)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x208(0x58)
	struct FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x260(0x58)
	struct FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x2b8(0x58)
	struct FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x310(0x58)
	struct FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x368(0x58)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x3c0(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x418(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x470(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x4c8(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x520(0x58)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x578(0x58)
	struct FNiagaraVariableAttributeBinding UVScaleBinding; // 0x5d0(0x58)
	struct FNiagaraVariableAttributeBinding PivotOffsetBinding; // 0x628(0x58)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x680(0x58)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x6d8(0x58)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x730(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x788(0x58)
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x7e0(0x10)
	struct FNiagaraVariableAttributeBinding PrevPositionBinding; // 0x7f0(0x58)
	struct FNiagaraVariableAttributeBinding PrevVelocityBinding; // 0x848(0x58)
	struct FNiagaraVariableAttributeBinding PrevSpriteRotationBinding; // 0x8a0(0x58)
	struct FNiagaraVariableAttributeBinding PrevSpriteSizeBinding; // 0x8f8(0x58)
	struct FNiagaraVariableAttributeBinding PrevSpriteFacingBinding; // 0x950(0x58)
	struct FNiagaraVariableAttributeBinding PrevSpriteAlignmentBinding; // 0x9a8(0x58)
	struct FNiagaraVariableAttributeBinding PrevCameraOffsetBinding; // 0xa00(0x58)
	struct FNiagaraVariableAttributeBinding PrevPivotOffsetBinding; // 0xa58(0x58)
	char pad_AB0[0x78]; // 0xab0(0x78)
};

// Class Niagara.NiagaraSystem
// Size: 0x540 (Inherited: 0x30)
struct UNiagaraSystem : UFXSystemAsset {
	char bSupportLargeWorldCoordinates : 1; // 0x30(0x01)
	char bOverrideCastShadow : 1; // 0x30(0x01)
	char bOverrideReceivesDecals : 1; // 0x30(0x01)
	char bOverrideRenderCustomDepth : 1; // 0x30(0x01)
	char bOverrideCustomDepthStencilValue : 1; // 0x30(0x01)
	char bOverrideCustomDepthStencilWriteMask : 1; // 0x30(0x01)
	char bCastShadow : 1; // 0x30(0x01)
	char bReceivesDecals : 1; // 0x30(0x01)
	char bRenderCustomDepth : 1; // 0x31(0x01)
	char pad_31_1 : 7; // 0x31(0x01)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	int32_t CustomDepthStencilValue; // 0x34(0x04)
	bool bDumpDebugSystemInfo; // 0x38(0x01)
	bool bDumpDebugEmitterInfo; // 0x39(0x01)
	char pad_3A[0x1]; // 0x3a(0x01)
	bool bRequireCurrentFrameData; // 0x3b(0x01)
	char bFixedBounds : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct UNiagaraEffectType* EffectType; // 0x40(0x08)
	bool bOverrideScalabilitySettings; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	char bOverrideAllowCullingForLocalPlayers : 1; // 0x4c(0x01)
	char bAllowCullingForLocalPlayersOverride : 1; // 0x4c(0x01)
	char pad_4C_2 : 6; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct TArray<struct FNiagaraSystemScalabilityOverride> ScalabilityOverrides; // 0x50(0x10)
	struct FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides; // 0x60(0x10)
	struct TArray<struct FNiagaraEmitterHandle> EmitterHandles; // 0x70(0x10)
	struct TArray<struct UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides; // 0x80(0x10)
	struct UNiagaraScript* SystemSpawnScript; // 0x90(0x08)
	struct UNiagaraScript* SystemUpdateScript; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)
	struct FNiagaraSystemCompiledData SystemCompiledData; // 0xb0(0x228)
	struct FNiagaraUserRedirectionParameterStore ExposedParameters; // 0x2d8(0xd8)
	struct FBox FixedBounds; // 0x3b0(0x38)
	bool bAutoDeactivate; // 0x3e8(0x01)
	bool bDeterminism; // 0x3e9(0x01)
	char pad_3EA[0x2]; // 0x3ea(0x02)
	int32_t RandomSeed; // 0x3ec(0x04)
	float WarmupTime; // 0x3f0(0x04)
	int32_t WarmupTickCount; // 0x3f4(0x04)
	float WarmupTickDelta; // 0x3f8(0x04)
	bool bFixedTickDelta; // 0x3fc(0x01)
	char pad_3FD[0x3]; // 0x3fd(0x03)
	float FixedTickDeltaTime; // 0x400(0x04)
	bool bHasSystemScriptDIsWithPerInstanceData; // 0x404(0x01)
	bool bNeedsGPUContextInitForDataInterfaces; // 0x405(0x01)
	char pad_406[0x2]; // 0x406(0x02)
	struct TArray<struct FName> UserDINamesReadInSystemScripts; // 0x408(0x10)
	char pad_418[0x128]; // 0x418(0x128)
};

