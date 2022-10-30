// BlueprintGeneratedClass BP_VolumeSmokeContainer.BP_VolumeSmokeContainer_C
// Size: 0x310 (Inherited: 0x278)
struct ABP_VolumeSmokeContainer_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UMaterialBillboardComponent* EditorIcon; // 0x280(0x08)
	struct UBoxComponent* VolumeVisualizeBox; // 0x288(0x08)
	struct UStaticMeshComponent* DepthSlicer; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	struct UMaterialInterface* FlipbookPlayerMaterial; // 0x2a0(0x08)
	enum class TextureAddress FlipbookCanvasTiling; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	int32_t FlipbookFrameResolution; // 0x2ac(0x04)
	struct UTextureRenderTarget2D* IntermedierRenderTarget; // 0x2b0(0x08)
	struct UMaterialInterface* VolumeSmokeMaterial; // 0x2b8(0x08)
	struct AActor* TrackThisActorAsPointLight; // 0x2c0(0x08)
	bool TickPointLightPositionPerFrame; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct UMaterialInstanceDynamic* DynamicMaterialInstance; // 0x2d0(0x08)
	struct FRotator InitialRotation; // 0x2d8(0x18)
	bool CameraFacing; // 0x2f0(0x01)
	bool CameraFacingLockY; // 0x2f1(0x01)
	char pad_2F2[0x6]; // 0x2f2(0x06)
	struct FVector LocationOffset; // 0x2f8(0x18)

	void RefreshLighting(); // Function BP_VolumeSmokeContainer.BP_VolumeSmokeContainer_C.RefreshLighting // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void UserConstructionScript(); // Function BP_VolumeSmokeContainer.BP_VolumeSmokeContainer_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ReceiveTick(float DeltaSeconds); // Function BP_VolumeSmokeContainer.BP_VolumeSmokeContainer_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void ReceiveBeginPlay(); // Function BP_VolumeSmokeContainer.BP_VolumeSmokeContainer_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_BP_VolumeSmokeContainer(int32_t EntryPoint); // Function BP_VolumeSmokeContainer.BP_VolumeSmokeContainer_C.ExecuteUbergraph_BP_VolumeSmokeContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

