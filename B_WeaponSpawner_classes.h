// BlueprintGeneratedClass B_WeaponSpawner.B_WeaponSpawner_C
// Size: 0x360 (Inherited: 0x2c0)
struct AB_WeaponSpawner_C : ALyraWeaponSpawner {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UAudioComponent* Audio; // 0x2c8(0x08)
	struct UNiagaraComponent* NS_GunPad_Loading; // 0x2d0(0x08)
	struct UNiagaraComponent* NS_GunPad; // 0x2d8(0x08)
	struct UMaterialBillboardComponent* TimerIndicator; // 0x2e0(0x08)
	struct UPointLightComponent* PointLight; // 0x2e8(0x08)
	float Timeline_Spawn_GunPad_Brightness_67801F3741BE0BA937CF1495C6793DE6; // 0x2f0(0x04)
	enum class ETimelineDirection Timeline_Spawn__Direction_67801F3741BE0BA937CF1495C6793DE6; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	struct UTimelineComponent* Timeline_Spawn; // 0x2f8(0x08)
	struct FLinearColor LightColor; // 0x300(0x10)
	double LightIntensity; // 0x310(0x08)
	double LightRadius; // 0x318(0x08)
	float Glow Intensity; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct UMaterialInstanceDynamic* TimerIndicatorDynamicMaterial; // 0x328(0x08)
	struct UMaterialInstanceDynamic* MID_Pad; // 0x330(0x08)
	bool GiveAmmoForDuplicatedWeapons; // 0x338(0x01)
	bool IgnorePickUpWhenReload; // 0x339(0x01)
	char pad_33A[0x6]; // 0x33a(0x06)
	double LifeTimeReload; // 0x340(0x08)
	struct FVector Weapon Mesh Offset; // 0x348(0x18)

	bool GiveWeapon(struct ULyraInventoryItemDefinition* WeaponItemClass, struct APawn* ReceivingPawn); // Function B_WeaponSpawner.B_WeaponSpawner_C.GiveWeapon // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void UserConstructionScript(); // Function B_WeaponSpawner.B_WeaponSpawner_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Timeline_Spawn__FinishedFunc(); // Function B_WeaponSpawner.B_WeaponSpawner_C.Timeline_Spawn__FinishedFunc // (BlueprintEvent) // @ game+0x2552560
	void Timeline_Spawn__UpdateFunc(); // Function B_WeaponSpawner.B_WeaponSpawner_C.Timeline_Spawn__UpdateFunc // (BlueprintEvent) // @ game+0x2552560
	void PlayPickupEffects(); // Function B_WeaponSpawner.B_WeaponSpawner_C.PlayPickupEffects // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void PlayRespawnEffects(); // Function B_WeaponSpawner.B_WeaponSpawner_C.PlayRespawnEffects // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void ReceiveTick(float DeltaSeconds); // Function B_WeaponSpawner.B_WeaponSpawner_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void Broadcast Failure Message(struct UObject* Object); // Function B_WeaponSpawner.B_WeaponSpawner_C.Broadcast Failure Message // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ReceiveBeginPlay(); // Function B_WeaponSpawner.B_WeaponSpawner_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_WeaponSpawner(int32_t EntryPoint); // Function B_WeaponSpawner.B_WeaponSpawner_C.ExecuteUbergraph_B_WeaponSpawner // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

