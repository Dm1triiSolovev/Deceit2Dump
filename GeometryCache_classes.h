// Class GeometryCache.GeometryCache
// Size: 0x70 (Inherited: 0x28)
struct UGeometryCache : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	struct TArray<struct UGeometryCacheTrack*> Tracks; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	int32_t StartFrame; // 0x60(0x04)
	int32_t EndFrame; // 0x64(0x04)
	uint64_t Hash; // 0x68(0x08)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x280 (Inherited: 0x278)
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x278(0x08)

	struct UGeometryCacheComponent* GetGeometryCacheComponent(); // Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1951180
};

// Class GeometryCache.GeometryCacheCodecBase
// Size: 0x38 (Inherited: 0x28)
struct UGeometryCacheCodecBase : UObject {
	struct TArray<int32_t> TopologyRanges; // 0x28(0x10)
};

// Class GeometryCache.GeometryCacheCodecRaw
// Size: 0x40 (Inherited: 0x38)
struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase {
	int32_t DummyProperty; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class GeometryCache.GeometryCacheCodecV1
// Size: 0x40 (Inherited: 0x38)
struct UGeometryCacheCodecV1 : UGeometryCacheCodecBase {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class GeometryCache.GeometryCacheComponent
// Size: 0x5f0 (Inherited: 0x570)
struct UGeometryCacheComponent : UMeshComponent {
	struct UGeometryCache* GeometryCache; // 0x568(0x08)
	bool bRunning; // 0x570(0x01)
	bool bLooping; // 0x571(0x01)
	bool bExtrapolateFrames; // 0x572(0x01)
	float StartTimeOffset; // 0x574(0x04)
	float PlaybackSpeed; // 0x578(0x04)
	float MotionVectorScale; // 0x57c(0x04)
	int32_t NumTracks; // 0x580(0x04)
	float ElapsedTime; // 0x584(0x04)
	char pad_58F[0x45]; // 0x58f(0x45)
	float Duration; // 0x5d4(0x04)
	bool bManualTick; // 0x5d8(0x01)
	bool bOverrideWireframeColor; // 0x5d9(0x01)
	char pad_5DA[0x2]; // 0x5da(0x02)
	struct FLinearColor WireframeOverrideColor; // 0x5dc(0x10)
	char pad_5EC[0x4]; // 0x5ec(0x04)

	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping); // Function GeometryCache.GeometryCacheComponent.TickAtThisTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1951b20
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x1951b00
	void SetWireframeOverrideColor(struct FLinearColor Color); // Function GeometryCache.GeometryCacheComponent.SetWireframeOverrideColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1951a70
	void SetStartTimeOffset(float NewStartTimeOffset); // Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x19519f0
	void SetPlaybackSpeed(float NewPlaybackSpeed); // Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x1951970
	void SetOverrideWireframeColor(bool bOverride); // Function GeometryCache.GeometryCacheComponent.SetOverrideWireframeColor // (Final|Native|Public|BlueprintCallable) // @ game+0x19518e0
	void SetMotionVectorScale(float NewMotionVectorScale); // Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale // (Final|Native|Public|BlueprintCallable) // @ game+0x1951860
	void SetLooping(bool bNewLooping); // Function GeometryCache.GeometryCacheComponent.SetLooping // (Final|Native|Public|BlueprintCallable) // @ game+0x19515a0
	bool SetGeometryCache(struct UGeometryCache* NewGeomCache); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache // (Final|Native|Public|BlueprintCallable) // @ game+0x1951500
	void SetExtrapolateFrames(bool bNewExtrapolating); // Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames // (Final|Native|Public|BlueprintCallable) // @ game+0x1951470
	void PlayReversedFromEnd(); // Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x1951450
	void PlayReversed(); // Function GeometryCache.GeometryCacheComponent.PlayReversed // (Final|Native|Public|BlueprintCallable) // @ game+0x1951430
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart // (Final|Native|Public|BlueprintCallable) // @ game+0x1951410
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x19513f0
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x19513d0
	bool IsPlayingReversed(); // Function GeometryCache.GeometryCacheComponent.IsPlayingReversed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19513a0
	bool IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1951370
	bool IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1951340
	bool IsExtrapolatingFrames(); // Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1951310
	struct FLinearColor GetWireframeOverrideColor(); // Function GeometryCache.GeometryCacheComponent.GetWireframeOverrideColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x19512d0
	float GetStartTimeOffset(); // Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19512a0
	float GetPlaybackSpeed(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1951270
	float GetPlaybackDirection(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1951240
	bool GetOverrideWireframeColor(); // Function GeometryCache.GeometryCacheComponent.GetOverrideWireframeColor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1951210
	int32_t GetNumberOfFrames(); // Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19511e0
	float GetMotionVectorScale(); // Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19511b0
	float GetDuration(); // Function GeometryCache.GeometryCacheComponent.GetDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1951150
	float GetAnimationTime(); // Function GeometryCache.GeometryCacheComponent.GetAnimationTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1951120
};

// Class GeometryCache.GeometryCacheTrack
// Size: 0x58 (Inherited: 0x28)
struct UGeometryCacheTrack : UObject {
	float Duration; // 0x28(0x04)
	char pad_2C[0x2c]; // 0x2c(0x2c)
};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Size: 0x80 (Inherited: 0x58)
struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack {
	uint32_t NumMeshSamples; // 0x58(0x04)
	char pad_5C[0x24]; // 0x5c(0x24)

	void AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime); // Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample // (Final|Native|Public|HasOutParms) // @ game+0x1950e90
};

// Class GeometryCache.GeometryCacheTrackStreamable
// Size: 0xd8 (Inherited: 0x58)
struct UGeometryCacheTrackStreamable : UGeometryCacheTrack {
	struct UGeometryCacheCodecBase* Codec; // 0x58(0x08)
	char pad_60[0x68]; // 0x60(0x68)
	float StartSampleTime; // 0xc8(0x04)
	char pad_CC[0xc]; // 0xcc(0x0c)
};

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// Size: 0x120 (Inherited: 0x58)
struct UGeometryCacheTrack_TransformAnimation : UGeometryCacheTrack {
	char pad_58[0xc8]; // 0x58(0xc8)

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh // (Final|Native|Public|HasOutParms) // @ game+0x1951630
};

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// Size: 0x120 (Inherited: 0x58)
struct UGeometryCacheTrack_TransformGroupAnimation : UGeometryCacheTrack {
	char pad_58[0xc8]; // 0x58(0xc8)

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh // (Final|Native|Public|HasOutParms) // @ game+0x1951630
};

// Class GeometryCache.NiagaraGeometryCacheRendererProperties
// Size: 0x358 (Inherited: 0xd0)
struct UNiagaraGeometryCacheRendererProperties : UNiagaraRendererProperties {
	struct TArray<struct FNiagaraGeometryCacheReference> GeometryCaches; // 0xd0(0x10)
	bool bIsLooping; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	uint32_t ComponentCountLimit; // 0xe4(0x04)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xe8(0x58)
	struct FNiagaraVariableAttributeBinding RotationBinding; // 0x140(0x58)
	struct FNiagaraVariableAttributeBinding ScaleBinding; // 0x198(0x58)
	struct FNiagaraVariableAttributeBinding ElapsedTimeBinding; // 0x1f0(0x58)
	struct FNiagaraVariableAttributeBinding EnabledBinding; // 0x248(0x58)
	struct FNiagaraVariableAttributeBinding ArrayIndexBinding; // 0x2a0(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x2f8(0x58)
	int32_t RendererVisibility; // 0x350(0x04)
	bool bAssignComponentsOnParticleID; // 0x354(0x01)
	char pad_355[0x3]; // 0x355(0x03)
};

