// BlueprintGeneratedClass GA_Hero_Jump.GA_Hero_Jump_C
// Size: 0x4a8 (Inherited: 0x478)
struct UGA_Hero_Jump_C : ULyraGameplayAbility_Jump {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct FUIExtensionHandle WidgetExtensionHandle; // 0x480(0x18)
	struct FGameplayTag WidgetExtensionPointTag; // 0x498(0x08)
	struct UUserWidget* WidgetClass; // 0x4a0(0x08)

	void OnStateInterrupted_F066D7A34FAFC3D7A6BC11B96F6F6569(); // Function GA_Hero_Jump.GA_Hero_Jump_C.OnStateInterrupted_F066D7A34FAFC3D7A6BC11B96F6F6569 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnStateEnded_F066D7A34FAFC3D7A6BC11B96F6F6569(); // Function GA_Hero_Jump.GA_Hero_Jump_C.OnStateEnded_F066D7A34FAFC3D7A6BC11B96F6F6569 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnRelease_EDFEACC049280120720047851B878951(float TimeHeld); // Function GA_Hero_Jump.GA_Hero_Jump_C.OnRelease_EDFEACC049280120720047851B878951 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void K2_ActivateAbility(); // Function GA_Hero_Jump.GA_Hero_Jump_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void K2_OnAbilityRemoved(); // Function GA_Hero_Jump.GA_Hero_Jump_C.K2_OnAbilityRemoved // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void K2_OnAbilityAdded(); // Function GA_Hero_Jump.GA_Hero_Jump_C.K2_OnAbilityAdded // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GA_Hero_Jump(int32_t EntryPoint); // Function GA_Hero_Jump.GA_Hero_Jump_C.ExecuteUbergraph_GA_Hero_Jump // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

