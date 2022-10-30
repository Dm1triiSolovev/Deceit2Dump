// Class VolumeRuntime.NiagaraDataInterfaceVdb
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceVdb : UNiagaraDataInterface {
	struct UVdbVolumeStatic* VdbVolumeStatic; // 0x38(0x08)
};

// Class VolumeRuntime.VdbAssetComponent
// Size: 0xf0 (Inherited: 0xb0)
struct UVdbAssetComponent : UActorComponent {
	struct UVdbVolumeBase* PrimaryVolume; // 0xb0(0x08)
	struct UVdbVolumeBase* SecondaryVolume; // 0xb8(0x08)
	struct FMulticastInlineDelegate OnVdbChanged; // 0xc0(0x10)
	char pad_D0[0x20]; // 0xd0(0x20)

	bool IsVectorGrid(); // Function VolumeRuntime.VdbAssetComponent.IsVectorGrid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1e54f60
	struct FVector3f GetVolumeUvScale(); // Function VolumeRuntime.VdbAssetComponent.GetVolumeUvScale // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1e54f00
	struct FVector3f GetVolumeSize(); // Function VolumeRuntime.VdbAssetComponent.GetVolumeSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1e54ec0
	struct FVector3f GetVolumeOffset(); // Function VolumeRuntime.VdbAssetComponent.GetVolumeOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1e54e80
};

// Class VolumeRuntime.VdbBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UVdbBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetDenoiserMethod(enum class EVdbDenoiserMethod Method); // Function VolumeRuntime.VdbBlueprintLibrary.SetDenoiserMethod // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1e55570
};

// Class VolumeRuntime.VdbMaterialActor
// Size: 0x290 (Inherited: 0x278)
struct AVdbMaterialActor : AActor {
	struct UVdbAssetComponent* AssetComponent; // 0x278(0x08)
	struct UVdbMaterialComponent* MaterialComponent; // 0x280(0x08)
	struct UVdbSequenceComponent* SeqComponent; // 0x288(0x08)
};

// Class VolumeRuntime.VdbMaterialComponent
// Size: 0x590 (Inherited: 0x540)
struct UVdbMaterialComponent : UPrimitiveComponent {
	struct UMaterialInterface* Material; // 0x540(0x08)
	int32_t MaxRayDepth; // 0x548(0x04)
	int32_t SamplesPerPixel; // 0x54c(0x04)
	float LocalStepSize; // 0x550(0x04)
	float ShadowStepSizeMultiplier; // 0x554(0x04)
	float Jittering; // 0x558(0x04)
	float VolumePadding; // 0x55c(0x04)
	bool ColoredTransmittance; // 0x560(0x01)
	char pad_561[0x3]; // 0x561(0x03)
	float DensityMultiplier; // 0x564(0x04)
	float Albedo; // 0x568(0x04)
	float Ambient; // 0x56c(0x04)
	float Anisotropy; // 0x570(0x04)
	float BlackbodyTemperature; // 0x574(0x04)
	float BlackbodyIntensity; // 0x578(0x04)
	bool TranslucentLevelSet; // 0x57c(0x01)
	char pad_57D[0x13]; // 0x57d(0x13)

	void SetVolumePadding(float NewValue); // Function VolumeRuntime.VdbMaterialComponent.SetVolumePadding // (Final|Native|Public|BlueprintCallable) // @ game+0x1e55c80
	void SetVdbAssets(struct UVdbAssetComponent* Comp); // Function VolumeRuntime.VdbMaterialComponent.SetVdbAssets // (Final|Native|Public|BlueprintCallable) // @ game+0x1e55a40
	void SetShadowStepSizeMultiplier(float NewValue); // Function VolumeRuntime.VdbMaterialComponent.SetShadowStepSizeMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x1e55860
	void SetLocalStepSize(float NewValue); // Function VolumeRuntime.VdbMaterialComponent.SetLocalStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x1e557c0
	void SetJittering(float NewValue); // Function VolumeRuntime.VdbMaterialComponent.SetJittering // (Final|Native|Public|BlueprintCallable) // @ game+0x1e55720
	void SetDensityMultiplier(float NewValue); // Function VolumeRuntime.VdbMaterialComponent.SetDensityMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x1e55070
	void SetBlackbodyTemperature(float NewValue); // Function VolumeRuntime.VdbMaterialComponent.SetBlackbodyTemperature // (Final|Native|Public|BlueprintCallable) // @ game+0x1e55390
	void SetBlackbodyIntensity(float NewValue); // Function VolumeRuntime.VdbMaterialComponent.SetBlackbodyIntensity // (Final|Native|Public|BlueprintCallable) // @ game+0x1e55250
	void SetAnisotropy(float NewValue); // Function VolumeRuntime.VdbMaterialComponent.SetAnisotropy // (Final|Native|Public|BlueprintCallable) // @ game+0x1e551b0
	void SetAmbient(float NewValue); // Function VolumeRuntime.VdbMaterialComponent.SetAmbient // (Final|Native|Public|BlueprintCallable) // @ game+0x1e55110
	void SetAlbedo(float NewValue); // Function VolumeRuntime.VdbMaterialComponent.SetAlbedo // (Final|Native|Public|BlueprintCallable) // @ game+0x1e54fd0
};

// Class VolumeRuntime.VdbPrincipledActor
// Size: 0x290 (Inherited: 0x278)
struct AVdbPrincipledActor : AActor {
	struct UVdbAssetComponent* AssetComponent; // 0x278(0x08)
	struct UVdbPrincipledComponent* PrincipledComponent; // 0x280(0x08)
	struct UVdbSequenceComponent* SequenceComponent; // 0x288(0x08)
};

// Class VolumeRuntime.VdbPrincipledComponent
// Size: 0x5b0 (Inherited: 0x540)
struct UVdbPrincipledComponent : UPrimitiveComponent {
	int32_t MaxRayDepth; // 0x540(0x04)
	int32_t SamplesPerPixel; // 0x544(0x04)
	float StepSize; // 0x548(0x04)
	bool ColoredTransmittance; // 0x54c(0x01)
	char pad_54D[0x3]; // 0x54d(0x03)
	struct FLinearColor Color; // 0x550(0x10)
	float DensityMultiplier; // 0x560(0x04)
	float Albedo; // 0x564(0x04)
	float Anisotropy; // 0x568(0x04)
	float EmissionStrength; // 0x56c(0x04)
	struct FLinearColor EmissionColor; // 0x570(0x10)
	float BlackbodyIntensity; // 0x580(0x04)
	struct FLinearColor BlackbodyTint; // 0x584(0x10)
	float Temperature; // 0x594(0x04)
	bool UseDirectionalLight; // 0x598(0x01)
	bool UseEnvironmentLight; // 0x599(0x01)
	bool DisplayBounds; // 0x59a(0x01)
	char pad_59B[0x15]; // 0x59b(0x15)

	void SetVdbAssets(struct UVdbAssetComponent* Comp); // Function VolumeRuntime.VdbPrincipledComponent.SetVdbAssets // (Final|Native|Public|BlueprintCallable) // @ game+0x1e55ad0
	void SetTemperature(float NewValue); // Function VolumeRuntime.VdbPrincipledComponent.SetTemperature // (Final|Native|Public|BlueprintCallable) // @ game+0x1e559a0
	void SetStepSize(float NewValue); // Function VolumeRuntime.VdbPrincipledComponent.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x1e55900
	void SetEmissionStrength(float NewValue); // Function VolumeRuntime.VdbPrincipledComponent.SetEmissionStrength // (Final|Native|Public|BlueprintCallable) // @ game+0x1e55110
	void SetEmissionColor(struct FLinearColor& NewValue); // Function VolumeRuntime.VdbPrincipledComponent.SetEmissionColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1e55680
	void SetDensityMultiplier(float NewValue); // Function VolumeRuntime.VdbPrincipledComponent.SetDensityMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x1e555e0
	void SetColor(struct FLinearColor& NewValue); // Function VolumeRuntime.VdbPrincipledComponent.SetColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1e554d0
	void SetBlackbodyTint(struct FLinearColor& NewValue); // Function VolumeRuntime.VdbPrincipledComponent.SetBlackbodyTint // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1e55430
	void SetBlackbodyIntensity(float NewValue); // Function VolumeRuntime.VdbPrincipledComponent.SetBlackbodyIntensity // (Final|Native|Public|BlueprintCallable) // @ game+0x1e552f0
	void SetAnisotropy(float NewValue); // Function VolumeRuntime.VdbPrincipledComponent.SetAnisotropy // (Final|Native|Public|BlueprintCallable) // @ game+0x1e54fd0
	void SetAlbedo(float NewValue); // Function VolumeRuntime.VdbPrincipledComponent.SetAlbedo // (Final|Native|Public|BlueprintCallable) // @ game+0x1e55070
};

// Class VolumeRuntime.VdbSequenceComponent
// Size: 0xe8 (Inherited: 0xb0)
struct UVdbSequenceComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	bool Autoplay; // 0xb8(0x01)
	bool Looping; // 0xb9(0x01)
	char pad_BA[0x2]; // 0xba(0x02)
	float PlaybackSpeed; // 0xbc(0x04)
	float Duration; // 0xc0(0x04)
	float OffsetRelative; // 0xc4(0x04)
	enum class EVolumePlayMode CurrentPlayMode; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float ElapsedTime; // 0xcc(0x04)
	char pad_D0[0x18]; // 0xd0(0x18)

	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping); // Function VolumeRuntime.VdbSequenceComponent.TickAtThisTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1e55d40
	void StopAnimation(); // Function VolumeRuntime.VdbSequenceComponent.StopAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x1e55d20
	void SetVdbAssets(struct UVdbAssetComponent* Component); // Function VolumeRuntime.VdbSequenceComponent.SetVdbAssets // (Final|Native|Public|BlueprintCallable) // @ game+0x1e55b60
	void PlayAnimation(); // Function VolumeRuntime.VdbSequenceComponent.PlayAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x1e54fb0
	void PauseAnimation(); // Function VolumeRuntime.VdbSequenceComponent.PauseAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x1e54f90
};

// Class VolumeRuntime.VdbToDynamicMeshActor
// Size: 0x2a8 (Inherited: 0x290)
struct AVdbToDynamicMeshActor : ADynamicMeshActor {
	struct UVdbAssetComponent* AssetComponent; // 0x290(0x08)
	struct UVdbToVolumeTextureComponent* VdbToTexComponent; // 0x298(0x08)
	struct UVdbSequenceComponent* SequenceComponent; // 0x2a0(0x08)

	void UpdateDynamicMesh(); // Function VolumeRuntime.VdbToDynamicMeshActor.UpdateDynamicMesh // (Event|Public|BlueprintEvent) // @ game+0x2552560
};

// Class VolumeRuntime.VdbToVolumeTextureActor
// Size: 0x290 (Inherited: 0x278)
struct AVdbToVolumeTextureActor : AActor {
	struct UVdbAssetComponent* AssetComponent; // 0x278(0x08)
	struct UVdbToVolumeTextureComponent* VdbToTexComponent; // 0x280(0x08)
	struct UVdbSequenceComponent* SequenceComponent; // 0x288(0x08)
};

// Class VolumeRuntime.VdbToVolumeTextureComponent
// Size: 0xc8 (Inherited: 0xb0)
struct UVdbToVolumeTextureComponent : UActorComponent {
	struct UTextureRenderTargetVolume* VolumeRenderTarget; // 0xb0(0x08)
	enum class EVdbToVolumeMethod Method; // 0xb8(0x01)
	char pad_B9[0xf]; // 0xb9(0x0f)

	void SetVdbAssets(struct UVdbAssetComponent* Comp); // Function VolumeRuntime.VdbToVolumeTextureComponent.SetVdbAssets // (Final|Native|Public|BlueprintCallable) // @ game+0x1e55bf0
};

// Class VolumeRuntime.VdbVolumeBase
// Size: 0x90 (Inherited: 0x28)
struct UVdbVolumeBase : UObject {
	enum class EVdbClass VdbClass; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FBox Bounds; // 0x30(0x38)
	struct FIntVector LargestVolume; // 0x68(0x0c)
	struct FVector3f VoxelSize; // 0x74(0x0c)
	uint64_t MemoryUsage; // 0x80(0x08)
	enum class EQuantizationType Quantization; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)

	bool IsSequence(); // Function VolumeRuntime.VdbVolumeBase.IsSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1e54f40
};

// Class VolumeRuntime.VdbVolumeSequence
// Size: 0x120 (Inherited: 0x90)
struct UVdbVolumeSequence : UVdbVolumeBase {
	char pad_90[0x8]; // 0x90(0x08)
	uint64_t FrameMaxMemoryUsage; // 0x98(0x08)
	struct TArray<struct FVolumeFrameInfos> VolumeFramesInfos; // 0xa0(0x10)
	char pad_B0[0x70]; // 0xb0(0x70)
};

// Class VolumeRuntime.VdbVolumeStatic
// Size: 0x1e0 (Inherited: 0x90)
struct UVdbVolumeStatic : UVdbVolumeBase {
	char pad_90[0x10]; // 0x90(0x10)
	struct FVolumeFrameInfos VolumeFrameInfos; // 0xa0(0xb0)
	char pad_150[0x90]; // 0x150(0x90)
};

