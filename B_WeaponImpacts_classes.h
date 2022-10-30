// BlueprintGeneratedClass B_WeaponImpacts.B_WeaponImpacts_C
// Size: 0x410 (Inherited: 0x278)
struct AB_WeaponImpacts_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	struct TArray<struct FVector> ImpactPositions; // 0x288(0x10)
	struct TArray<struct FVector> ImpactNormals; // 0x298(0x10)
	struct TArray<enum class EPhysicalSurface> ImpactSurfaceTypes; // 0x2a8(0x10)
	struct UNiagaraComponent* Impact System; // 0x2b8(0x08)
	bool Impact Outside Threshold Distance; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct UNiagaraSystem* Concrete; // 0x2c8(0x08)
	double Distance Threshold; // 0x2d0(0x08)
	struct TArray<struct UNiagaraComponent*> Impact Systems; // 0x2d8(0x10)
	struct UNiagaraSystem* Glass; // 0x2e8(0x08)
	struct TArray<struct FVector> System Positions; // 0x2f0(0x10)
	struct UNiagaraSystem* Default; // 0x300(0x08)
	struct UNiagaraSystem* Character; // 0x308(0x08)
	int32_t Current Impact Surface Index; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct FVector Previous Impact Position; // 0x318(0x18)
	struct FVector Current Impact Position; // 0x330(0x18)
	enum class EPhysicalSurface Current Impact Surface; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct UNiagaraSystem* Current System Template; // 0x350(0x08)
	bool Current System Exist In Array; // 0x358(0x01)
	bool Has Valid Systems; // 0x359(0x01)
	char pad_35A[0x6]; // 0x35a(0x06)
	struct TArray<int32_t> Unsorted Array; // 0x360(0x10)
	struct TArray<int32_t> Sorted Array; // 0x370(0x10)
	struct TArray<enum class EPhysicalSurface> Unsorted Impact Surface Types; // 0x380(0x10)
	struct TArray<enum class EPhysicalSurface> Sorted Impact Surface Types; // 0x390(0x10)
	int32_t Number of Surface Types; // 0x3a0(0x04)
	int32_t Previous Value; // 0x3a4(0x04)
	struct TArray<int32_t> StartOffset; // 0x3a8(0x10)
	struct TArray<int32_t> NumberOfImpacts; // 0x3b8(0x10)
	int32_t Index; // 0x3c8(0x04)
	int32_t Hits; // 0x3cc(0x04)
	struct TArray<struct FVector> Sorted Impact Normals; // 0x3d0(0x10)
	struct TArray<struct FVector> Sorted Impact Positions; // 0x3e0(0x10)
	int32_t Index Of Min Value; // 0x3f0(0x04)
	int32_t Index_1; // 0x3f4(0x04)
	struct FVector MuzzlePosition; // 0x3f8(0x18)

	void Sort Impact Arrays(); // Function B_WeaponImpacts.B_WeaponImpacts_C.Sort Impact Arrays // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Fire(); // Function B_WeaponImpacts.B_WeaponImpacts_C.Fire // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_WeaponImpacts(int32_t EntryPoint); // Function B_WeaponImpacts.B_WeaponImpacts_C.ExecuteUbergraph_B_WeaponImpacts // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};
