// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// Size: 0x78 (Inherited: 0x30)
struct UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState {
	struct UNiagaraSystem* Template; // 0x30(0x08)
	struct FName SocketName; // 0x38(0x08)
	struct FVector LocationOffset; // 0x40(0x18)
	struct FRotator RotationOffset; // 0x58(0x18)
	bool bDestroyAtEnd; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)

	struct UFXSystemComponent* GetSpawnedEffect(struct UMeshComponent* MeshComp); // Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xdb2ad0
};

// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
// Size: 0xe8 (Inherited: 0x78)
struct UAnimNotifyState_TimedNiagaraEffectAdvanced : UAnimNotifyState_TimedNiagaraEffect {
	bool bEnableNormalizedNotifyProgress; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	struct FName NotifyProgressUserParameter; // 0x7c(0x08)
	char pad_84[0x4]; // 0x84(0x04)
	struct TArray<struct FCurveParameterPair> AnimCurves; // 0x88(0x10)
	char pad_98[0x50]; // 0x98(0x50)

	float GetNotifyProgress(struct UMeshComponent* MeshComp); // Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xdb2a30
};

// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// Size: 0xd0 (Inherited: 0x38)
struct UAnimNotify_PlayNiagaraEffect : UAnimNotify {
	struct UNiagaraSystem* Template; // 0x38(0x08)
	struct FVector LocationOffset; // 0x40(0x18)
	struct FRotator RotationOffset; // 0x58(0x18)
	struct FVector Scale; // 0x70(0x18)
	bool bAbsoluteScale; // 0x88(0x01)
	char pad_89[0x37]; // 0x89(0x37)
	char Attached : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	struct FName SocketName; // 0xc4(0x08)
	char pad_CC[0x4]; // 0xcc(0x04)

	struct UFXSystemComponent* GetSpawnedEffect(); // Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xdb2b70
};

