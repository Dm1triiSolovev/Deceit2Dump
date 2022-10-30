// Class PocketWorlds.PocketCaptureSubsystem
// Size: 0x70 (Inherited: 0x30)
struct UPocketCaptureSubsystem : UWorldSubsystem {
	char pad_30[0x40]; // 0x30(0x40)

	void DestroyThumbnailRenderer(struct UPocketCapture* ThumbnailRenderer); // Function PocketWorlds.PocketCaptureSubsystem.DestroyThumbnailRenderer // (Final|Native|Public|BlueprintCallable) // @ game+0x122ea80
	struct UPocketCapture* CreateThumbnailRenderer(struct UPocketCapture* PocketCaptureClass); // Function PocketWorlds.PocketCaptureSubsystem.CreateThumbnailRenderer // (Final|Native|Public|BlueprintCallable) // @ game+0x122e9e0
};

// Class PocketWorlds.PocketCapture
// Size: 0x88 (Inherited: 0x28)
struct UPocketCapture : UObject {
	struct UMaterialInterface* AlphaMaskMaterial; // 0x28(0x08)
	struct UMaterialInterface* EffectMaskMaterial; // 0x30(0x08)
	struct UWorld* PrivateWorld; // 0x38(0x08)
	int32_t RendererIndex; // 0x40(0x04)
	int32_t SurfaceWidth; // 0x44(0x04)
	int32_t SurfaceHeight; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UTextureRenderTarget2D* DiffuseRT; // 0x50(0x08)
	struct UTextureRenderTarget2D* AlphaMaskRT; // 0x58(0x08)
	struct UTextureRenderTarget2D* EffectsRT; // 0x60(0x08)
	struct USceneCaptureComponent2D* CaptureComponent; // 0x68(0x08)
	struct TWeakObjectPtr<struct AActor> CaptureTargetPtr; // 0x70(0x08)
	struct TArray<struct TWeakObjectPtr<struct AActor>> AlphaMaskActorPtrs; // 0x78(0x10)

	void SetRenderTargetSize(int32_t Width, int32_t Height); // Function PocketWorlds.PocketCapture.SetRenderTargetSize // (Final|Native|Public|BlueprintCallable) // @ game+0x122ed70
	void SetCaptureTarget(struct AActor* InCaptureTarget); // Function PocketWorlds.PocketCapture.SetCaptureTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x122ece0
	void SetAlphaMaskedActors(struct TArray<struct AActor*>& InCaptureTarget); // Function PocketWorlds.PocketCapture.SetAlphaMaskedActors // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x122ec30
	void ReleaseResources(); // Function PocketWorlds.PocketCapture.ReleaseResources // (Native|Public|BlueprintCallable) // @ game+0x122ec10
	void ReclaimResources(); // Function PocketWorlds.PocketCapture.ReclaimResources // (Native|Public|BlueprintCallable) // @ game+0xda83d0
	int32_t GetRendererIndex(); // Function PocketWorlds.PocketCapture.GetRendererIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x122eba0
	struct UTextureRenderTarget2D* GetOrCreateEffectsRenderTarget(); // Function PocketWorlds.PocketCapture.GetOrCreateEffectsRenderTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x122eb70
	struct UTextureRenderTarget2D* GetOrCreateDiffuseRenderTarget(); // Function PocketWorlds.PocketCapture.GetOrCreateDiffuseRenderTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x122eb40
	struct UTextureRenderTarget2D* GetOrCreateAlphaMaskRenderTarget(); // Function PocketWorlds.PocketCapture.GetOrCreateAlphaMaskRenderTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x122eb10
	void CaptureEffects(); // Function PocketWorlds.PocketCapture.CaptureEffects // (Final|Native|Public|BlueprintCallable) // @ game+0x122e9c0
	void CaptureDiffuse(); // Function PocketWorlds.PocketCapture.CaptureDiffuse // (Final|Native|Public|BlueprintCallable) // @ game+0x122e9a0
	void CaptureAlphaMask(); // Function PocketWorlds.PocketCapture.CaptureAlphaMask // (Final|Native|Public|BlueprintCallable) // @ game+0x122e980
};

// Class PocketWorlds.PocketLevel
// Size: 0x70 (Inherited: 0x30)
struct UPocketLevel : UDataAsset {
	struct TSoftObjectPtr<UWorld> Level; // 0x30(0x28)
	struct FVector Bounds; // 0x58(0x18)
};

// Class PocketWorlds.PocketLevelSubsystem
// Size: 0x40 (Inherited: 0x30)
struct UPocketLevelSubsystem : UWorldSubsystem {
	struct TArray<struct UPocketLevelInstance*> PocketInstances; // 0x30(0x10)
};

// Class PocketWorlds.PocketLevelInstance
// Size: 0x98 (Inherited: 0x28)
struct UPocketLevelInstance : UObject {
	struct ULocalPlayer* LocalPlayer; // 0x28(0x08)
	struct UPocketLevel* PocketLevel; // 0x30(0x08)
	struct UWorld* World; // 0x38(0x08)
	struct ULevelStreamingDynamic* StreamingPocketLevel; // 0x40(0x08)
	char pad_48[0x50]; // 0x48(0x50)

	void HandlePocketLevelShown(); // Function PocketWorlds.PocketLevelInstance.HandlePocketLevelShown // (Final|Native|Private) // @ game+0x122ebf0
	void HandlePocketLevelLoaded(); // Function PocketWorlds.PocketLevelInstance.HandlePocketLevelLoaded // (Final|Native|Private) // @ game+0x122ebd0
};

