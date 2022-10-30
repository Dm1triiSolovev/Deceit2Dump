// BlueprintGeneratedClass GCNL_Death.GCNL_Death_C
// Size: 0x6f0 (Inherited: 0x690)
struct AGCNL_Death_C : AGameplayCueNotify_BurstLatent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x690(0x08)
	float DeathCubesTimeline_EdgeGlow_37024CF2447877DEBAD7958109350433; // 0x698(0x04)
	float DeathCubesTimeline_KillTimeline_37024CF2447877DEBAD7958109350433; // 0x69c(0x04)
	enum class ETimelineDirection DeathCubesTimeline__Direction_37024CF2447877DEBAD7958109350433; // 0x6a0(0x01)
	char pad_6A1[0x7]; // 0x6a1(0x07)
	struct UTimelineComponent* DeathCubesTimeline; // 0x6a8(0x08)
	double SpawningDuration; // 0x6b0(0x08)
	struct AActor* TargetActor; // 0x6b8(0x08)
	bool KillPlaneDeath; // 0x6c0(0x01)
	char pad_6C1[0x3]; // 0x6c1(0x03)
	struct FLinearColor TeamColor; // 0x6c4(0x10)
	char pad_6D4[0x4]; // 0x6d4(0x04)
	struct ULyraTeamDisplayAsset* TeamDisplayAsset; // 0x6d8(0x08)
	struct TArray<struct UNiagaraComponent*> SpawnedEffects; // 0x6e0(0x10)

	void DeathCubesTimeline__FinishedFunc(); // Function GCNL_Death.GCNL_Death_C.DeathCubesTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x2552560
	void DeathCubesTimeline__UpdateFunc(); // Function GCNL_Death.GCNL_Death_C.DeathCubesTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x2552560
	void OnBurst(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GCNL_Death.GCNL_Death_C.OnBurst // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GCNL_Death(int32_t EntryPoint); // Function GCNL_Death.GCNL_Death_C.ExecuteUbergraph_GCNL_Death // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

