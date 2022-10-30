// BlueprintGeneratedClass GCN_Character_Heal.GCN_Character_Heal_C
// Size: 0x6a0 (Inherited: 0x690)
struct AGCN_Character_Heal_C : AGameplayCueNotify_BurstLatent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x690(0x08)
	struct UAudioComponent* Audio_OnHeal; // 0x698(0x08)

	void OnBurst(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GCN_Character_Heal.GCN_Character_Heal_C.OnBurst // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GCN_Character_Heal(int32_t EntryPoint); // Function GCN_Character_Heal.GCN_Character_Heal_C.ExecuteUbergraph_GCN_Character_Heal // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

