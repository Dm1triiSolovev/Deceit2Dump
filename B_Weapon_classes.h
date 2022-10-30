// BlueprintGeneratedClass B_Weapon.B_Weapon_C
// Size: 0x321 (Inherited: 0x278)
struct AB_Weapon_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x280(0x08)
	struct APawn* OwnerAsPawn; // 0x288(0x08)
	struct AB_WeaponFire_C* WeaponFire; // 0x290(0x08)
	struct AB_WeaponImpacts_C* Weapon Impacts; // 0x298(0x08)
	struct AB_WeaponDecals_C* Weapon Decals; // 0x2a0(0x08)
	struct UNiagaraSystem* Shell Eject System; // 0x2a8(0x08)
	struct UNiagaraSystem* Muzzle Flash System; // 0x2b0(0x08)
	struct UNiagaraSystem* Tracer System; // 0x2b8(0x08)
	struct UStaticMesh* Shell Eject Mesh; // 0x2c0(0x08)
	struct TArray<struct FVector> Impact Positions; // 0x2c8(0x10)
	struct TArray<struct FVector> Impact Normals; // 0x2d8(0x10)
	struct TArray<enum class EPhysicalSurface> ImpactSurfaceTypes; // 0x2e8(0x10)
	struct FVector MuzzlePosition; // 0x2f8(0x18)
	bool NeedsFakeProjectileData; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	int32_t Numer Of Fake Projectiles; // 0x314(0x04)
	struct UAudioComponent* AudioComponent; // 0x318(0x08)
	bool ApplyTeamColorsToWeapon; // 0x320(0x01)

	void UpdateTeamColors(struct ULyraTeamDisplayAsset* TeamDisplayAsset); // Function B_Weapon.B_Weapon_C.UpdateTeamColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void UpdateCustomStencil(int32_t TeamId); // Function B_Weapon.B_Weapon_C.UpdateCustomStencil // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void TriggerFireAudio(struct USoundBase* Sound, struct AActor* Actor); // Function B_Weapon.B_Weapon_C.TriggerFireAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Add Fake Projectile Data(int32_t Numer Of Fake Projectiles, double Cone Half Angle In Degrees); // Function B_Weapon.B_Weapon_C.Add Fake Projectile Data // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnTeamChanged_7B7D4F5F4F2DBFE78C0EBEB2388D25CB(bool bTeamSet, int32_t TeamId, struct ULyraTeamDisplayAsset* DisplayAsset); // Function B_Weapon.B_Weapon_C.OnTeamChanged_7B7D4F5F4F2DBFE78C0EBEB2388D25CB // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Fire(struct TArray<struct FVector>& ImpactPositions, struct TArray<struct FVector>& Impact Normals, struct TArray<enum class EPhysicalSurface>& ImpactSurfaceTypes); // Function B_Weapon.B_Weapon_C.Fire // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ReceiveBeginPlay(); // Function B_Weapon.B_Weapon_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_Weapon(int32_t EntryPoint); // Function B_Weapon.B_Weapon_C.ExecuteUbergraph_B_Weapon // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

