// BlueprintGeneratedClass B_WeaponFire.B_WeaponFire_C
// Size: 0x320 (Inherited: 0x278)
struct AB_WeaponFire_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	bool Shell Eject Trigger; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct USkeletalMeshComponent* Skeletal Mesh Component; // 0x290(0x08)
	struct UNiagaraComponent* NS_ShellEject; // 0x298(0x08)
	struct UNiagaraComponent* NS_MuzzleFlash; // 0x2a0(0x08)
	struct UNiagaraComponent* NS_Tracer; // 0x2a8(0x08)
	bool Enable Shell Eject; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct UNiagaraSystem* Shell Eject System; // 0x2b8(0x08)
	bool Enable Muzzle Flash; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct UNiagaraSystem* Muzzle Flash System; // 0x2c8(0x08)
	bool Enable Tracer; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct UNiagaraSystem* Tracer System; // 0x2d8(0x08)
	struct UStaticMesh* Shell Eject Mesh; // 0x2e0(0x08)
	bool Muzzle Flash Trigger; // 0x2e8(0x01)
	bool Tracer Trigger; // 0x2e9(0x01)
	char pad_2EA[0x6]; // 0x2ea(0x06)
	struct TArray<struct FVector> ImpactPositions; // 0x2f0(0x10)
	struct TArray<struct FVector> ImpactNormals; // 0x300(0x10)
	struct TArray<enum class EPhysicalSurface> ImpactSurfaceTypes; // 0x310(0x10)

	void Fire(); // Function B_WeaponFire.B_WeaponFire_C.Fire // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_WeaponFire(int32_t EntryPoint); // Function B_WeaponFire.B_WeaponFire_C.ExecuteUbergraph_B_WeaponFire // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

