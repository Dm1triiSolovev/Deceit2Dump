// BlueprintGeneratedClass B_Launcher.B_Launcher_C
// Size: 0x2e1 (Inherited: 0x278)
struct AB_Launcher_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct USphereComponent* Sphere; // 0x280(0x08)
	struct UPointLightComponent* PointLight; // 0x288(0x08)
	struct UStaticMeshComponent* LauncherMesh; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	struct ACharacter* OverlappingPawn; // 0x2a0(0x08)
	struct FLinearColor Light Color; // 0x2a8(0x10)
	double Light Intensity; // 0x2b8(0x08)
	double Light Attenuation; // 0x2c0(0x08)
	float Glow Intensity; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	double SphereRadius; // 0x2d0(0x08)
	struct FGameplayTag Gameplay Tag; // 0x2d8(0x08)
	bool Do Not Activate on Fall Entry; // 0x2e0(0x01)

	void Overlap(bool& Return); // Function B_Launcher.B_Launcher_C.Overlap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void UserConstructionScript(); // Function B_Launcher.B_Launcher_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Activate VFX(); // Function B_Launcher.B_Launcher_C.Activate VFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void BndEvt__B_Launcher_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function B_Launcher.B_Launcher_C.BndEvt__B_Launcher_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_Launcher(int32_t EntryPoint); // Function B_Launcher.B_Launcher_C.ExecuteUbergraph_B_Launcher // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

