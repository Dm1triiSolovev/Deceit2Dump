// BlueprintGeneratedClass B_Hero_Default.B_Hero_Default_C
// Size: 0x6a8 (Inherited: 0x660)
struct AB_Hero_Default_C : ACharacter_Default_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x660(0x08)
	struct ULyraContextEffectComponent* LyraContextEffect; // 0x668(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x670(0x08)
	struct ULyraHeroComponent* LyraHero; // 0x678(0x08)
	double RagdollImpulseStrength; // 0x680(0x08)
	struct FName RagdollImpulseBone; // 0x688(0x08)
	struct TArray<struct UAnimMontage*> Death Montages; // 0x690(0x10)
	struct AB_FootStep_C* Footstep; // 0x6a0(0x08)

	void UpdateCustomStencilFromTeamID(int32_t TeamId); // Function B_Hero_Default.B_Hero_Default_C.UpdateCustomStencilFromTeamID // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void HideEquippedWeapons(); // Function B_Hero_Default.B_Hero_Default_C.HideEquippedWeapons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Death(); // Function B_Hero_Default.B_Hero_Default_C.Death // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Ragdoll(); // Function B_Hero_Default.B_Hero_Default_C.Ragdoll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_LyraHealth_DeathEvent__DelegateSignature(struct AActor* OwningActor); // Function B_Hero_Default.B_Hero_Default_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_LyraHealth_DeathEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2552560
	void AnimMotionEffect(struct FName bone, struct FGameplayTag MotionEffect, struct USceneComponent* StaticMeshComponent, struct FVector LocationOffset, struct FRotator RotationOffset, struct UAnimSequenceBase* AnimationSequence, bool bHitSuccess, struct FHitResult HitResult, struct FGameplayTagContainer Contexts, struct FVector VFXScale, float AudioVolume, float AudioPitch); // Function B_Hero_Default.B_Hero_Default_C.AnimMotionEffect // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_Hero_Default(int32_t EntryPoint); // Function B_Hero_Default.B_Hero_Default_C.ExecuteUbergraph_B_Hero_Default // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

