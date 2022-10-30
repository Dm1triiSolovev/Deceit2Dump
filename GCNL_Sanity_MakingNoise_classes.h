// BlueprintGeneratedClass GCNL_Sanity_MakingNoise.GCNL_Sanity_MakingNoise_C
// Size: 0xfc0 (Inherited: 0xfb0)
struct AGCNL_Sanity_MakingNoise_C : AGameplayCueNotify_Looping {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xfb0(0x08)
	struct UAudioComponent* AudioComponent; // 0xfb8(0x08)

	void OnLoopingStart(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GCNL_Sanity_MakingNoise.GCNL_Sanity_MakingNoise_C.OnLoopingStart // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void OnRemoval(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GCNL_Sanity_MakingNoise.GCNL_Sanity_MakingNoise_C.OnRemoval // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GCNL_Sanity_MakingNoise(int32_t EntryPoint); // Function GCNL_Sanity_MakingNoise.GCNL_Sanity_MakingNoise_C.ExecuteUbergraph_GCNL_Sanity_MakingNoise // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

