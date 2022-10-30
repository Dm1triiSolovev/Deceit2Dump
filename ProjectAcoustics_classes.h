// Class ProjectAcoustics.AcousticsData
// Size: 0x48 (Inherited: 0x28)
struct UAcousticsData : UObject {
	struct FString AceFilePath; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
};

// Class ProjectAcoustics.AcousticsDynamicOpening
// Size: 0x630 (Inherited: 0x5d0)
struct UAcousticsDynamicOpening : UStaticMeshComponent {
	float DryAttenuationDb; // 0x5d0(0x04)
	float WetAttenuationDb; // 0x5d4(0x04)
	float Filtering; // 0x5d8(0x04)
	char pad_5DC[0xc]; // 0x5dc(0x0c)
	struct TArray<struct FVector> Vertices; // 0x5e8(0x10)
	struct FVector Center; // 0x5f8(0x18)
	struct FVector Normal; // 0x610(0x18)
	char pad_628[0x8]; // 0x628(0x08)
};

// Class ProjectAcoustics.AcousticsRuntimeVolume
// Size: 0x2c8 (Inherited: 0x2b0)
struct AAcousticsRuntimeVolume : AVolume {
	struct FAcousticsDesignParams OverrideDesignParams; // 0x2b0(0x18)
};

// Class ProjectAcoustics.AcousticsSpace
// Size: 0x330 (Inherited: 0x278)
struct AAcousticsSpace : AActor {
	struct UAcousticsData* AcousticsData; // 0x278(0x08)
	struct FVector TileSize; // 0x280(0x18)
	bool AutoStream; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	float CacheScale; // 0x29c(0x04)
	bool UpdateDistances; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float OcclusionMultiplier; // 0x2a4(0x04)
	float WetnessAdjustment; // 0x2a8(0x04)
	float DecayTimeMultiplier; // 0x2ac(0x04)
	float OutdoornessAdjustment; // 0x2b0(0x04)
	float DistanceWarp; // 0x2b4(0x04)
	bool AcousticsEnabled; // 0x2b8(0x01)
	bool DrawStats; // 0x2b9(0x01)
	bool DrawVoxels; // 0x2ba(0x01)
	char pad_2BB[0x1]; // 0x2bb(0x01)
	float VoxelsVisibleDistance; // 0x2bc(0x04)
	bool DrawProbes; // 0x2c0(0x01)
	bool DrawDistances; // 0x2c1(0x01)
	char pad_2C2[0x6e]; // 0x2c2(0x6e)

	void SetAcousticsEnabled(bool IsEnabled); // Function ProjectAcoustics.AcousticsSpace.SetAcousticsEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x1e27fb0
	bool QueryDistance(struct FVector lookDirection, float& Distance); // Function ProjectAcoustics.AcousticsSpace.QueryDistance // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1e27eb0
	bool LoadAcousticsData(struct UAcousticsData* newBake); // Function ProjectAcoustics.AcousticsSpace.LoadAcousticsData // (Final|Native|Public|BlueprintCallable) // @ game+0x1e27e10
	bool GetOutdoorness(float& outdoorness); // Function ProjectAcoustics.AcousticsSpace.GetOutdoorness // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1e27d60
	void ForceLoadTile(struct FVector centerPosition, bool unloadProbesOutsideTile, bool blockOnCompletion); // Function ProjectAcoustics.AcousticsSpace.ForceLoadTile // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1e27c20
};

