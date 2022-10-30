// BlueprintGeneratedClass GA_SanitySystem.GA_SanitySystem_C
// Size: 0x4e0 (Inherited: 0x478)
struct UGA_SanitySystem_C : ULyraGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct FActiveGameplayEffectHandle SanityDrainEffect; // 0x480(0x08)
	struct FUIExtensionHandle SanityWidgetHandle; // 0x488(0x18)
	struct UMaterialInstanceDynamic* BlurInstance; // 0x4a0(0x08)
	struct FActiveGameplayEffectHandle SlowEffect; // 0x4a8(0x08)
	bool SlowEnabled; // 0x4b0(0x01)
	bool BlurEnabled; // 0x4b1(0x01)
	bool PantingHeartbeatEnabled; // 0x4b2(0x01)
	bool OutlineEnabled; // 0x4b3(0x01)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct TArray<struct UAbilityAsync_WaitGameplayTagAdded*> TagAddRefs; // 0x4b8(0x10)
	struct TArray<struct UAbilityAsync_WaitGameplayTagRemoved*> TagRemoveRefs; // 0x4c8(0x10)
	struct FActiveGameplayEffectHandle MakingNoiseEffect; // 0x4d8(0x08)

	void UpdateOutlineState(); // Function GA_SanitySystem.GA_SanitySystem_C.UpdateOutlineState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void EnableOutline(bool Enabled); // Function GA_SanitySystem.GA_SanitySystem_C.EnableOutline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void EnablePantingHeartbeat(bool Enabled); // Function GA_SanitySystem.GA_SanitySystem_C.EnablePantingHeartbeat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void EnableSlow(bool Enabled); // Function GA_SanitySystem.GA_SanitySystem_C.EnableSlow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void EnableBlur(bool Enabled); // Function GA_SanitySystem.GA_SanitySystem_C.EnableBlur // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnChange_75F75877491C20DEA2C83FB1753251C2(bool bMatchesComparison, float CurrentValue); // Function GA_SanitySystem.GA_SanitySystem_C.OnChange_75F75877491C20DEA2C83FB1753251C2 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnChange_3E35824844E514394842E4AC01BA2F9A(bool bMatchesComparison, float CurrentValue); // Function GA_SanitySystem.GA_SanitySystem_C.OnChange_3E35824844E514394842E4AC01BA2F9A // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnChange_BA784CE543E0EAB5BC8315923CC319D2(bool bMatchesComparison, float CurrentValue); // Function GA_SanitySystem.GA_SanitySystem_C.OnChange_BA784CE543E0EAB5BC8315923CC319D2 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Added_E71CE9574F4A0393055EEEAEC9C7326C(); // Function GA_SanitySystem.GA_SanitySystem_C.Added_E71CE9574F4A0393055EEEAEC9C7326C // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Removed_BFBD9753448B25B84F24D1B34C99BEAB(); // Function GA_SanitySystem.GA_SanitySystem_C.Removed_BFBD9753448B25B84F24D1B34C99BEAB // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnChange_3D50829D4263DFCB3DBE0194CFD74FA4(bool bMatchesComparison, float CurrentValue); // Function GA_SanitySystem.GA_SanitySystem_C.OnChange_3D50829D4263DFCB3DBE0194CFD74FA4 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void K2_ActivateAbility(); // Function GA_SanitySystem.GA_SanitySystem_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SanitySystem.GA_SanitySystem_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GA_SanitySystem(int32_t EntryPoint); // Function GA_SanitySystem.GA_SanitySystem_C.ExecuteUbergraph_GA_SanitySystem // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

