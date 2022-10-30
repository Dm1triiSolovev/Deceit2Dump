// Class ShooterCoreRuntime.AimAssistInputModifier
// Size: 0x6f0 (Inherited: 0x28)
struct UAimAssistInputModifier : UInputModifier {
	struct FAimAssistSettings Settings; // 0x28(0x370)
	struct FAimAssistFilter Filter; // 0x398(0x88)
	struct UInputAction* MoveInputAction; // 0x420(0x08)
	enum class ELyraTargetingType TargetingType; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct ULyraAimSensitivityData* SensitivityLevelTable; // 0x430(0x08)
	struct TArray<struct FLyraAimAssistTarget> TargetCache0; // 0x438(0x10)
	struct TArray<struct FLyraAimAssistTarget> TargetCache1; // 0x448(0x10)
	char pad_458[0x298]; // 0x458(0x298)
};

// Class ShooterCoreRuntime.AimAssistTargetComponent
// Size: 0x5a0 (Inherited: 0x560)
struct UAimAssistTargetComponent : UCapsuleComponent {
	char pad_560[0x8]; // 0x560(0x08)
	struct FAimAssistTargetOptions TargetData; // 0x568(0x30)
	char pad_598[0x8]; // 0x598(0x08)
};

// Class ShooterCoreRuntime.AimAssistTargetManagerComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UAimAssistTargetManagerComponent : UGameStateComponent {
};

// Class ShooterCoreRuntime.AssistProcessor
// Size: 0x110 (Inherited: 0xc0)
struct UAssistProcessor : UGameplayMessageProcessor {
	struct TMap<struct APlayerState*, struct FPlayerAssistDamageTracking> DamageHistory; // 0xc0(0x50)
};

// Class ShooterCoreRuntime.ElimChainProcessor
// Size: 0x168 (Inherited: 0xc0)
struct UElimChainProcessor : UGameplayMessageProcessor {
	float ChainTimeLimit; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TMap<int32_t, struct FGameplayTag> ElimChainTags; // 0xc8(0x50)
	struct TMap<struct APlayerState*, struct FPlayerElimChainInfo> PlayerChainHistory; // 0x118(0x50)
};

// Class ShooterCoreRuntime.ElimStreakProcessor
// Size: 0x160 (Inherited: 0xc0)
struct UElimStreakProcessor : UGameplayMessageProcessor {
	struct TMap<int32_t, struct FGameplayTag> ElimStreakTags; // 0xc0(0x50)
	struct TMap<struct APlayerState*, int32_t> PlayerStreakHistory; // 0x110(0x50)
};

// Class ShooterCoreRuntime.FirstPersonCameraMode
// Size: 0x2f0 (Inherited: 0xa8)
struct UFirstPersonCameraMode : ULyraCameraMode {
	struct UCurveVector* TargetOffsetCurve; // 0xa8(0x08)
	bool bUseRuntimeFloatCurves; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FRuntimeFloatCurve TargetOffsetX; // 0xb8(0x88)
	struct FRuntimeFloatCurve TargetOffsetY; // 0x140(0x88)
	struct FRuntimeFloatCurve TargetOffsetZ; // 0x1c8(0x88)
	float CrouchOffsetBlendMultiplier; // 0x250(0x04)
	float AnimRotBlendAlpha; // 0x254(0x04)
	float PenetrationBlendInTime; // 0x258(0x04)
	float PenetrationBlendOutTime; // 0x25c(0x04)
	bool bPreventPenetration; // 0x260(0x01)
	bool bDoPredictiveAvoidance; // 0x261(0x01)
	char pad_262[0x2]; // 0x262(0x02)
	float CollisionPushOutDistance; // 0x264(0x04)
	float ReportPenetrationPercent; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct TArray<struct FLyraPenetrationAvoidanceFeeler> PenetrationAvoidanceFeelers; // 0x270(0x10)
	float AimLineToDesiredPosBlockedPct; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct TArray<struct AActor*> DebugActorsHitDuringCameraPenetration; // 0x288(0x10)
	char pad_298[0x58]; // 0x298(0x58)
};

// Class ShooterCoreRuntime.FirstPersonComponent
// Size: 0xe0 (Inherited: 0xb0)
struct UFirstPersonComponent : UActorComponent {
	struct FMulticastInlineDelegate OnFirstPersonChanged; // 0xb0(0x10)
	struct AActor* FirstPersonMesh; // 0xc0(0x08)
	struct UAnimInstance* FirstPersonAnimBP; // 0xc8(0x08)
	bool bIsFirstPerson; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)

	void UpdateThirdPersonVisibility(bool Visible); // Function ShooterCoreRuntime.FirstPersonComponent.UpdateThirdPersonVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0xa0cd00
	void UpdateFirstPersonAnimBP(); // Function ShooterCoreRuntime.FirstPersonComponent.UpdateFirstPersonAnimBP // (Final|Native|Public|BlueprintCallable) // @ game+0xa0cce0
	void UpdateFirstPerson(); // Function ShooterCoreRuntime.FirstPersonComponent.UpdateFirstPerson // (Final|Native|Public|BlueprintCallable) // @ game+0xa0ccc0
	void SetMeshActor(struct AActor* ActorClass); // Function ShooterCoreRuntime.FirstPersonComponent.SetMeshActor // (Final|Native|Public|BlueprintCallable) // @ game+0xa0cc30
	void SetFirstPersonAnimBP(struct UAnimInstance* AnimInstanceClass); // Function ShooterCoreRuntime.FirstPersonComponent.SetFirstPersonAnimBP // (Final|Native|Public|BlueprintCallable) // @ game+0xa0cba0
	void OnPawnReady(); // Function ShooterCoreRuntime.FirstPersonComponent.OnPawnReady // (Final|Native|Public|BlueprintCallable) // @ game+0xa0cb80
	void OnFirstPersonTagChanged(struct FGameplayTag Tag, int32_t Count); // Function ShooterCoreRuntime.FirstPersonComponent.OnFirstPersonTagChanged // (Final|Native|Public) // @ game+0xa0cab0
	struct USkeletalMeshComponent* GetFirstPersonSkeletalMesh(); // Function ShooterCoreRuntime.FirstPersonComponent.GetFirstPersonSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0xa0ca80
};

// Class ShooterCoreRuntime.AimAssistTaget
// Size: 0x28 (Inherited: 0x28)
struct UAimAssistTaget : UInterface {
};

// Class ShooterCoreRuntime.InputTriggerComboAction
// Size: 0x68 (Inherited: 0x50)
struct UInputTriggerComboAction : UInputTrigger {
	struct FComboTriggerStep ComboStep; // 0x50(0x10)
	float ActivationCooldown; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class ShooterCoreRuntime.LyraAccoladeDefinition
// Size: 0x80 (Inherited: 0x30)
struct ULyraAccoladeDefinition : UDataAsset {
	struct USoundBase* Sound; // 0x30(0x08)
	struct UObject* Icon; // 0x38(0x08)
	struct FGameplayTagContainer AccoladeTags; // 0x40(0x20)
	struct FGameplayTagContainer CancelAccoladesWithTag; // 0x60(0x20)
};

// Class ShooterCoreRuntime.LyraAccoladeHostWidget
// Size: 0x318 (Inherited: 0x2b8)
struct ULyraAccoladeHostWidget : UCommonUserWidget {
	char pad_2B8[0x8]; // 0x2b8(0x08)
	struct FGameplayTag LocationName; // 0x2c0(0x08)
	char pad_2C8[0x30]; // 0x2c8(0x30)
	struct TArray<struct FPendingAccoladeEntry> PendingAccoladeLoads; // 0x2f8(0x10)
	struct TArray<struct FPendingAccoladeEntry> PendingAccoladeDisplays; // 0x308(0x10)

	void DestroyAccoladeWidget(struct UUserWidget* Widget); // Function ShooterCoreRuntime.LyraAccoladeHostWidget.DestroyAccoladeWidget // (Event|Public|BlueprintEvent) // @ game+0x2552560
	struct UUserWidget* CreateAccoladeWidget(struct FPendingAccoladeEntry& Entry); // Function ShooterCoreRuntime.LyraAccoladeHostWidget.CreateAccoladeWidget // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2552560
};

// Class ShooterCoreRuntime.LyraWorldCollectable
// Size: 0x330 (Inherited: 0x278)
struct ALyraWorldCollectable : AActor {
	char pad_278[0x10]; // 0x278(0x10)
	struct FInteractionOption Option; // 0x288(0x88)
	struct FInventoryPickup StaticInventory; // 0x310(0x20)
};

// Class ShooterCoreRuntime.ShooterCoreRuntimeSettings
// Size: 0x40 (Inherited: 0x38)
struct UShooterCoreRuntimeSettings : UDeveloperSettings {
	enum class ECollisionChannel AimAssistCollisionChannel; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class ShooterCoreRuntime.TDM_PlayerSpawningManagmentComponent
// Size: 0xc0 (Inherited: 0xc0)
struct UTDM_PlayerSpawningManagmentComponent : ULyraPlayerSpawningManagerComponent {
};

