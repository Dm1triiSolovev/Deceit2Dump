// BlueprintGeneratedClass GA_Execution.GA_Execution_C
// Size: 0x4a8 (Inherited: 0x478)
struct UGA_Execution_C : ULyraGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	double Distance; // 0x480(0x08)
	double Radius; // 0x488(0x08)
	double Half Height; // 0x490(0x08)
	struct UAnimMontage* Terror Montage; // 0x498(0x08)
	struct UAnimMontage* Human Montage; // 0x4a0(0x08)

	void Select Montages(struct ACharacter* Instigator, struct ACharacter* Target, struct UAnimMontage*& Terror, struct UAnimMontage*& Human); // Function GA_Execution.GA_Execution_C.Select Montages // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void PlayExecutionAnimations(struct ACharacter* Instigator, struct ACharacter* Target); // Function GA_Execution.GA_Execution_C.PlayExecutionAnimations // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Execution.GA_Execution_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GA_Execution(int32_t EntryPoint); // Function GA_Execution.GA_Execution_C.ExecuteUbergraph_GA_Execution // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

