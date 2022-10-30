// BlueprintGeneratedClass GA_ExperimentDash.GA_ExperimentDash_C
// Size: 0x4d8 (Inherited: 0x4c8)
struct UGA_ExperimentDash_C : UGA_AbilityWithWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	struct FActiveGameplayEffectHandle EffectHandle; // 0x4d0(0x08)

	void OnRelease_99B0BBB74824FA7C4DD8F2982F92B1F9(float TimeHeld); // Function GA_ExperimentDash.GA_ExperimentDash_C.OnRelease_99B0BBB74824FA7C4DD8F2982F92B1F9 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void K2_ActivateAbility(); // Function GA_ExperimentDash.GA_ExperimentDash_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_ExperimentDash.GA_ExperimentDash_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GA_ExperimentDash(int32_t EntryPoint); // Function GA_ExperimentDash.GA_ExperimentDash_C.ExecuteUbergraph_GA_ExperimentDash // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

