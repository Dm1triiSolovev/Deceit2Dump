// BlueprintGeneratedClass B_Camera.B_Camera_C
// Size: 0x2b9 (Inherited: 0x278)
struct AB_Camera_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UStaticMeshComponent* FlashEmissive; // 0x280(0x08)
	struct UStaticMeshComponent* FlashNotifier; // 0x288(0x08)
	struct UStaticMeshComponent* CollisionCube; // 0x290(0x08)
	struct URectLightComponent* Flash; // 0x298(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2a0(0x08)
	bool Flashing; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	double FlashStartTime; // 0x2b0(0x08)
	bool PreparingFlash; // 0x2b8(0x01)

	void PrepareToFlash(); // Function B_Camera.B_Camera_C.PrepareToFlash // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void IsFirstPerson(bool& FirstPerson); // Function B_Camera.B_Camera_C.IsFirstPerson // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2552560
	void FlashCamera(); // Function B_Camera.B_Camera_C.FlashCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void UserConstructionScript(); // Function B_Camera.B_Camera_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnFirstPersonChanged(bool FirstPerson); // Function B_Camera.B_Camera_C.OnFirstPersonChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ReceiveTick(float DeltaSeconds); // Function B_Camera.B_Camera_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_Camera(int32_t EntryPoint); // Function B_Camera.B_Camera_C.ExecuteUbergraph_B_Camera // (Final|UbergraphFunction) // @ game+0x2552560
};

