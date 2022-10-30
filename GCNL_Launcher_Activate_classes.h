// BlueprintGeneratedClass GCNL_Launcher_Activate.GCNL_Launcher_Activate_C
// Size: 0x708 (Inherited: 0x690)
struct AGCNL_Launcher_Activate_C : AGameplayCueNotify_BurstLatent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x690(0x08)
	float LauncherMaterialEffect_Timeline_NewTrack_0_46C2F6AD4F7D627A5153E896EF6B5B3E; // 0x698(0x04)
	enum class ETimelineDirection LauncherMaterialEffect_Timeline__Direction_46C2F6AD4F7D627A5153E896EF6B5B3E; // 0x69c(0x01)
	char pad_69D[0x3]; // 0x69d(0x03)
	struct UTimelineComponent* LauncherMaterialEffect_Timeline; // 0x6a0(0x08)
	struct AActor* TargetActor; // 0x6a8(0x08)
	struct FVector TargetActorVelocity; // 0x6b0(0x18)
	struct AB_Launcher_C* LaunchPadActor; // 0x6c8(0x08)
	double MaterialEffectDuration; // 0x6d0(0x08)
	struct UCurveFloat* MaterialEffectCurve; // 0x6d8(0x08)
	struct FLinearColor TeamColor; // 0x6e0(0x10)
	struct ULyraTeamDisplayAsset* TeamDisplayAsset; // 0x6f0(0x08)
	struct TArray<struct UNiagaraComponent*> SpawnedEffects; // 0x6f8(0x10)

	void LauncherMaterialEffect_Timeline__FinishedFunc(); // Function GCNL_Launcher_Activate.GCNL_Launcher_Activate_C.LauncherMaterialEffect_Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x2552560
	void LauncherMaterialEffect_Timeline__UpdateFunc(); // Function GCNL_Launcher_Activate.GCNL_Launcher_Activate_C.LauncherMaterialEffect_Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x2552560
	void OnBurst(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GCNL_Launcher_Activate.GCNL_Launcher_Activate_C.OnBurst // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GCNL_Launcher_Activate(int32_t EntryPoint); // Function GCNL_Launcher_Activate.GCNL_Launcher_Activate_C.ExecuteUbergraph_GCNL_Launcher_Activate // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

