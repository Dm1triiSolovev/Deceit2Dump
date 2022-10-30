// BlueprintGeneratedClass GCNL_Teleporter_Activate.GCNL_Teleporter_Activate_C
// Size: 0x6b8 (Inherited: 0x690)
struct AGCNL_Teleporter_Activate_C : AGameplayCueNotify_BurstLatent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x690(0x08)
	struct TArray<struct UNiagaraComponent*> ExitParticles; // 0x698(0x10)
	struct AB_Teleport_C* As B Teleport; // 0x6a8(0x08)
	struct AActor* TargetActor; // 0x6b0(0x08)

	void OnBurst(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GCNL_Teleporter_Activate.GCNL_Teleporter_Activate_C.OnBurst // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GCNL_Teleporter_Activate(int32_t EntryPoint); // Function GCNL_Teleporter_Activate.GCNL_Teleporter_Activate_C.ExecuteUbergraph_GCNL_Teleporter_Activate // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

