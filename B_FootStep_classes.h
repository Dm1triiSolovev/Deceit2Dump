// BlueprintGeneratedClass B_FootStep.B_FootStep_C
// Size: 0x468 (Inherited: 0x278)
struct AB_FootStep_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	struct UNiagaraComponent* NS_FootPrint; // 0x288(0x08)
	bool FootPrintTrigger; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct USkeletalMeshComponent* Skeletal Mesh Component; // 0x298(0x08)
	bool Enable FootPlantEffect; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct FVector FootStepHitLocation; // 0x2a8(0x18)
	struct FQuat FootStepOrientation; // 0x2c0(0x20)
	int32_t FootStepSurfaceTypeNiagara; // 0x2e0(0x04)
	bool FootStepSide; // 0x2e4(0x01)
	enum class EPhysicalSurface FootStepSurfaceType; // 0x2e5(0x01)
	char pad_2E6[0x2]; // 0x2e6(0x02)
	struct FVector FootStepHitNormal; // 0x2e8(0x18)
	struct FTransform FootStepSocketTransform; // 0x300(0x60)
	struct FName CurrentSocket; // 0x360(0x08)
	struct UNiagaraSystem* Foot Print System; // 0x368(0x08)
	struct FName FootStepRightFootBone; // 0x370(0x08)
	struct FHitResult Hit Result; // 0x378(0xe8)
	struct FName Current Bone; // 0x460(0x08)

	void AnimMotionEffect(struct FName bone, struct FGameplayTag MotionEffect, struct USceneComponent* StaticMeshComponent, struct FVector LocationOffset, struct FRotator RotationOffset, struct UAnimSequenceBase* AnimationSequence, bool bHitSuccess, struct FHitResult HitResult, struct FGameplayTagContainer Contexts, struct FVector VFXScale, float AudioVolume, float AudioPitch); // Function B_FootStep.B_FootStep_C.AnimMotionEffect // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_FootStep(int32_t EntryPoint); // Function B_FootStep.B_FootStep_C.ExecuteUbergraph_B_FootStep // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

