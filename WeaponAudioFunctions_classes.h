// BlueprintGeneratedClass WeaponAudioFunctions.WeaponAudioFunctions_C
// Size: 0x28 (Inherited: 0x28)
struct UWeaponAudioFunctions_C : UBlueprintFunctionLibrary {

	void WhizBy(struct AActor* Actor, struct FGameplayCueParameters Parameters, struct UObject* __WorldContext); // Function WeaponAudioFunctions.WeaponAudioFunctions_C.WhizBy // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Calculate Whiz By(struct FVector ListenerOrigin, struct FVector FireOrigin, float MinStereoSpread, struct FVector ImpactPosition, struct UObject* __WorldContext, struct FVector& Location, double& StereoSpread, bool& FromTheRight, double& FiringDistance); // Function WeaponAudioFunctions.WeaponAudioFunctions_C.Calculate Whiz By // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Calculate Tap Properties(struct FString DebugSuffix, struct APlayerCameraManager* Cam, struct FVector HitLocation, int32_t TapId, double TraceDistance, float TravelDistance, bool DidHit, struct FVector ListenerLocation, struct UObject* __WorldContext); // Function WeaponAudioFunctions.WeaponAudioFunctions_C.Calculate Tap Properties // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void DebugPrintTap(struct FString Suffix, float Delay, float Gain, float Pan, struct UObject* __WorldContext); // Function WeaponAudioFunctions.WeaponAudioFunctions_C.DebugPrintTap // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SetWeaponSoundParams(struct AActor* Actor, struct FGameplayCueNotify_SpawnResult GCN Spawn Result, struct UObject* __WorldContext); // Function WeaponAudioFunctions.WeaponAudioFunctions_C.SetWeaponSoundParams // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void GetSideReflectionAngles(struct FVector Origin, struct FVector Normal, double TraceDistance, struct FVector Axis, struct UObject* __WorldContext, struct FVector& Angle L, struct FVector& Angle R); // Function WeaponAudioFunctions.WeaponAudioFunctions_C.GetSideReflectionAngles // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2552560
	void EarlyReflections(struct AActor* Target, struct FGameplayCueParameters Parameters, struct UObject* __WorldContext); // Function WeaponAudioFunctions.WeaponAudioFunctions_C.EarlyReflections // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SendWeaponFire(struct AActor* Player, double Strength, struct UObject* __WorldContext); // Function WeaponAudioFunctions.WeaponAudioFunctions_C.SendWeaponFire // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
};

