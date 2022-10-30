// BlueprintGeneratedClass GA_Experiment_Block.GA_Experiment_Block_C
// Size: 0x488 (Inherited: 0x478)
struct UGA_Experiment_Block_C : ULyraGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct FActiveGameplayEffectHandle EffectHandle; // 0x480(0x08)

	void OnCancelled_D57568254B3EC9B43FBC49825CECB5BB(); // Function GA_Experiment_Block.GA_Experiment_Block_C.OnCancelled_D57568254B3EC9B43FBC49825CECB5BB // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnInterrupted_D57568254B3EC9B43FBC49825CECB5BB(); // Function GA_Experiment_Block.GA_Experiment_Block_C.OnInterrupted_D57568254B3EC9B43FBC49825CECB5BB // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnBlendOut_D57568254B3EC9B43FBC49825CECB5BB(); // Function GA_Experiment_Block.GA_Experiment_Block_C.OnBlendOut_D57568254B3EC9B43FBC49825CECB5BB // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnCompleted_D57568254B3EC9B43FBC49825CECB5BB(); // Function GA_Experiment_Block.GA_Experiment_Block_C.OnCompleted_D57568254B3EC9B43FBC49825CECB5BB // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnRelease_670B7A5D4AA1B30A84E79FAD0A87085A(float TimeHeld); // Function GA_Experiment_Block.GA_Experiment_Block_C.OnRelease_670B7A5D4AA1B30A84E79FAD0A87085A // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void K2_ActivateAbility(); // Function GA_Experiment_Block.GA_Experiment_Block_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Experiment_Block.GA_Experiment_Block_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GA_Experiment_Block(int32_t EntryPoint); // Function GA_Experiment_Block.GA_Experiment_Block_C.ExecuteUbergraph_GA_Experiment_Block // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

