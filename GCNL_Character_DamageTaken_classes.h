// BlueprintGeneratedClass GCNL_Character_DamageTaken.GCNL_Character_DamageTaken_C
// Size: 0x6a8 (Inherited: 0x690)
struct AGCNL_Character_DamageTaken_C : AGameplayCueNotify_BurstLatent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x690(0x08)
	struct AActor* Target; // 0x698(0x08)
	struct UAnimMontage* Montage; // 0x6a0(0x08)

	void EvaluateWeakSpot(struct UObject* Object, bool& DidHitWeakSpot); // Function GCNL_Character_DamageTaken.GCNL_Character_DamageTaken_C.EvaluateWeakSpot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void BroadcastDamageTaken(struct AActor* TargetActor, struct FGameplayCueParameters& Params); // Function GCNL_Character_DamageTaken.GCNL_Character_DamageTaken_C.BroadcastDamageTaken // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Select Hit Montage(struct FVector Hit Normal, struct AActor* Hit Actor, struct UAnimMontage*& Hit Montage); // Function GCNL_Character_DamageTaken.GCNL_Character_DamageTaken_C.Select Hit Montage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Fn_GetLocalBoneTransform(struct USkeletalMeshComponent* SkeletalMeshComponent, struct FName BoneName, struct FTransform AddTransform, struct FTransform& TransformResult); // Function GCNL_Character_DamageTaken.GCNL_Character_DamageTaken_C.Fn_GetLocalBoneTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCNL_Character_DamageTaken.GCNL_Character_DamageTaken_C.OnExecute // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnBurst(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GCNL_Character_DamageTaken.GCNL_Character_DamageTaken_C.OnBurst // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void MontageHit(struct ACharacter* Character, struct UAnimMontage* Montage); // Function GCNL_Character_DamageTaken.GCNL_Character_DamageTaken_C.MontageHit // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Damage Animation(); // Function GCNL_Character_DamageTaken.GCNL_Character_DamageTaken_C.Damage Animation // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GCNL_Character_DamageTaken(int32_t EntryPoint); // Function GCNL_Character_DamageTaken.GCNL_Character_DamageTaken_C.ExecuteUbergraph_GCNL_Character_DamageTaken // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

