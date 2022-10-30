// BlueprintGeneratedClass B_WeaponDecals.B_WeaponDecals_C
// Size: 0x2e0 (Inherited: 0x278)
struct AB_WeaponDecals_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	struct UNiagaraComponent* Decal; // 0x288(0x08)
	bool Impact Trigger; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct UNiagaraSystem* Decal System; // 0x298(0x08)
	struct TArray<struct FVector> ImpactPositions; // 0x2a0(0x10)
	struct TArray<struct FVector> ImpactNormals; // 0x2b0(0x10)
	struct TArray<enum class EPhysicalSurface> Impact Surface Types; // 0x2c0(0x10)
	struct TArray<int32_t> Surface Types; // 0x2d0(0x10)

	void AnimMotionEffect(struct FName bone, struct FGameplayTag MotionEffect, struct USceneComponent* StaticMeshComponent, struct FVector LocationOffset, struct FRotator RotationOffset, struct UAnimSequenceBase* AnimationSequence, bool bHitSuccess, struct FHitResult HitResult, struct FGameplayTagContainer Contexts, struct FVector VFXScale, float AudioVolume, float AudioPitch); // Function B_WeaponDecals.B_WeaponDecals_C.AnimMotionEffect // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Fire(); // Function B_WeaponDecals.B_WeaponDecals_C.Fire // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_WeaponDecals(int32_t EntryPoint); // Function B_WeaponDecals.B_WeaponDecals_C.ExecuteUbergraph_B_WeaponDecals // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

