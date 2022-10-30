// BlueprintGeneratedClass GCNL_Spawning.GCNL_Spawning_C
// Size: 0x107c (Inherited: 0xfb0)
struct AGCNL_Spawning_C : AGameplayCueNotify_Looping {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xfb0(0x08)
	float SpawnTimeline_SpawnLinearTime_3B46392D446C8510CB3FED8A7DE30BAB; // 0xfb8(0x04)
	float SpawnTimeline_Materialize_3B46392D446C8510CB3FED8A7DE30BAB; // 0xfbc(0x04)
	enum class ETimelineDirection SpawnTimeline__Direction_3B46392D446C8510CB3FED8A7DE30BAB; // 0xfc0(0x01)
	char pad_FC1[0x7]; // 0xfc1(0x07)
	struct UTimelineComponent* SpawnTimeline; // 0xfc8(0x08)
	struct AActor* TargetActor; // 0xfd0(0x08)
	struct FLinearColor TeamColor; // 0xfd8(0x10)
	double SpawningDuration; // 0xfe8(0x08)
	struct TArray<struct UNiagaraSystem*> NiagaraSystemTemplates; // 0xff0(0x10)
	struct TArray<struct UNiagaraComponent*> SpawnedEffects; // 0x1000(0x10)
	struct UNiagaraSystem* TemplateToUse; // 0x1010(0x08)
	struct UAsyncAction_ObserveTeamColors* TeamColorWatcherHandle; // 0x1018(0x08)
	struct TMap<struct USkeletalMeshComponent*, struct UNiagaraComponent*> SpawnedEffectMap; // 0x1020(0x50)
	struct ULyraPawnComponent_CharacterParts* PawnCosmeticSystem; // 0x1070(0x08)
	float Spawn Linear Time; // 0x1078(0x04)

	void UpdateActorColors(); // Function GCNL_Spawning.GCNL_Spawning_C.UpdateActorColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SpawnEffectForEachMeshComponent(); // Function GCNL_Spawning.GCNL_Spawning_C.SpawnEffectForEachMeshComponent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnTeamColorChanged(struct ULyraTeamDisplayAsset* TeamDisplayAsset); // Function GCNL_Spawning.GCNL_Spawning_C.OnTeamColorChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SpawnTimeline__FinishedFunc(); // Function GCNL_Spawning.GCNL_Spawning_C.SpawnTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x2552560
	void SpawnTimeline__UpdateFunc(); // Function GCNL_Spawning.GCNL_Spawning_C.SpawnTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x2552560
	void OnTeamChanged_6B014EF1472EAB44FDFE5EBDADA703D3(bool bTeamSet, int32_t TeamId, struct ULyraTeamDisplayAsset* DisplayAsset); // Function GCNL_Spawning.GCNL_Spawning_C.OnTeamChanged_6B014EF1472EAB44FDFE5EBDADA703D3 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnApplication(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GCNL_Spawning.GCNL_Spawning_C.OnApplication // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void OnRemoval(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GCNL_Spawning.GCNL_Spawning_C.OnRemoval // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void OnCharacterPartsChanged(struct ULyraPawnComponent_CharacterParts* ComponentWithChangedParts); // Function GCNL_Spawning.GCNL_Spawning_C.OnCharacterPartsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void StopWatchingForParts(); // Function GCNL_Spawning.GCNL_Spawning_C.StopWatchingForParts // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GCNL_Spawning(int32_t EntryPoint); // Function GCNL_Spawning.GCNL_Spawning_C.ExecuteUbergraph_GCNL_Spawning // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

