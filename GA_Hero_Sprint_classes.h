// BlueprintGeneratedClass GA_Hero_Sprint.GA_Hero_Sprint_C
// Size: 0x488 (Inherited: 0x478)
struct UGA_Hero_Sprint_C : ULyraGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct FActiveGameplayEffectHandle EffectHandle; // 0x480(0x08)

	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_Hero_Sprint.GA_Hero_Sprint_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2552560
	void Can Sprint(struct ALyraCharacter* Character, bool& Result); // Function GA_Hero_Sprint.GA_Hero_Sprint_C.Can Sprint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnRelease_7AEEC58B48A9982ACA0D74ADF55830E1(float TimeHeld); // Function GA_Hero_Sprint.GA_Hero_Sprint_C.OnRelease_7AEEC58B48A9982ACA0D74ADF55830E1 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void K2_ActivateAbility(); // Function GA_Hero_Sprint.GA_Hero_Sprint_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Hero_Sprint.GA_Hero_Sprint_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void Check Can Sprint(); // Function GA_Hero_Sprint.GA_Hero_Sprint_C.Check Can Sprint // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GA_Hero_Sprint(int32_t EntryPoint); // Function GA_Hero_Sprint.GA_Hero_Sprint_C.ExecuteUbergraph_GA_Hero_Sprint // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

