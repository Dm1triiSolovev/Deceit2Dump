// ScriptStruct ShooterCoreRuntime.LyraAimAssistTarget
// Size: 0x80 (Inherited: 0x00)
struct FLyraAimAssistTarget {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct ShooterCoreRuntime.AimAssistFilter
// Size: 0x88 (Inherited: 0x00)
struct FAimAssistFilter {
	char bIncludeSameFriendlyTargets : 1; // 0x00(0x01)
	char bExcludeInstigator : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	char bExcludeAllAttachedToInstigator : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	char bExcludeRequester : 1; // 0x08(0x01)
	char bExcludeAllAttachedToRequester : 1; // 0x08(0x01)
	char bTraceComplexCollision : 1; // 0x08(0x01)
	char bExcludeDeadOrDying : 1; // 0x08(0x01)
	char pad_8_4 : 4; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TSet<struct UObject*> ExcludedClasses; // 0x10(0x50)
	char pad_60[0x20]; // 0x60(0x20)
	double TargetRange; // 0x80(0x08)
};

// ScriptStruct ShooterCoreRuntime.AimAssistSettings
// Size: 0x370 (Inherited: 0x00)
struct FAimAssistSettings {
	struct FScalableFloat AssistInnerReticleWidth; // 0x00(0x28)
	struct FScalableFloat AssistInnerReticleHeight; // 0x28(0x28)
	struct FScalableFloat AssistOuterReticleWidth; // 0x50(0x28)
	struct FScalableFloat AssistOuterReticleHeight; // 0x78(0x28)
	struct FScalableFloat TargetingReticleWidth; // 0xa0(0x28)
	struct FScalableFloat TargetingReticleHeight; // 0xc8(0x28)
	struct FScalableFloat TargetRange; // 0xf0(0x28)
	struct UCurveFloat* TargetWeightCurve; // 0x118(0x08)
	struct FScalableFloat PullInnerStrengthHip; // 0x120(0x28)
	struct FScalableFloat PullOuterStrengthHip; // 0x148(0x28)
	struct FScalableFloat PullInnerStrengthAds; // 0x170(0x28)
	struct FScalableFloat PullOuterStrengthAds; // 0x198(0x28)
	struct FScalableFloat PullLerpInRate; // 0x1c0(0x28)
	struct FScalableFloat PullLerpOutRate; // 0x1e8(0x28)
	struct FScalableFloat PullMaxRotationRate; // 0x210(0x28)
	struct FScalableFloat SlowInnerStrengthHip; // 0x238(0x28)
	struct FScalableFloat SlowOuterStrengthHip; // 0x260(0x28)
	struct FScalableFloat SlowInnerStrengthAds; // 0x288(0x28)
	struct FScalableFloat SlowOuterStrengthAds; // 0x2b0(0x28)
	struct FScalableFloat SlowLerpInRate; // 0x2d8(0x28)
	struct FScalableFloat SlowLerpOutRate; // 0x300(0x28)
	struct FScalableFloat SlowMinRotationRate; // 0x328(0x28)
	int32_t MaxNumberOfTargets; // 0x350(0x04)
	float ReticleDepth; // 0x354(0x04)
	float TargetScore_AssistWeight; // 0x358(0x04)
	float TargetScore_ViewDot; // 0x35c(0x04)
	float TargetScore_ViewDotOffset; // 0x360(0x04)
	float TargetScore_ViewDistance; // 0x364(0x04)
	float StrengthScale; // 0x368(0x04)
	char bEnableAsyncVisibilityTrace : 1; // 0x36c(0x01)
	char bRequireInput : 1; // 0x36c(0x01)
	char bApplyPull : 1; // 0x36c(0x01)
	char bApplyStrafePullScale : 1; // 0x36c(0x01)
	char bApplySlowing : 1; // 0x36c(0x01)
	char bUseDynamicSlow : 1; // 0x36c(0x01)
	char bUseRadialLookRates : 1; // 0x36c(0x01)
	char pad_36C_7 : 1; // 0x36c(0x01)
	char pad_36D[0x3]; // 0x36d(0x03)
};

// ScriptStruct ShooterCoreRuntime.PlayerAssistDamageTracking
// Size: 0x50 (Inherited: 0x00)
struct FPlayerAssistDamageTracking {
	struct TMap<struct APlayerState*, float> AccumulatedDamageByPlayer; // 0x00(0x50)
};

// ScriptStruct ShooterCoreRuntime.LyraControlPointStatusMessage
// Size: 0x10 (Inherited: 0x00)
struct FLyraControlPointStatusMessage {
	struct AActor* ControlPoint; // 0x00(0x08)
	int32_t OwnerTeamID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterCoreRuntime.PlayerElimChainInfo
// Size: 0x10 (Inherited: 0x00)
struct FPlayerElimChainInfo {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ShooterCoreRuntime.AimAssistTargetOptions
// Size: 0x30 (Inherited: 0x00)
struct FAimAssistTargetOptions {
	char pad_0[0x8]; // 0x00(0x08)
	struct FGameplayTagContainer AssociatedTags; // 0x08(0x20)
	char bIsActive : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ShooterCoreRuntime.ComboTriggerStep
// Size: 0x10 (Inherited: 0x00)
struct FComboTriggerStep {
	struct UInputAction* DependentAction; // 0x00(0x08)
	float ActivationThreshold; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterCoreRuntime.LyraAccoladeDefinitionRow
// Size: 0xc0 (Inherited: 0x08)
struct FLyraAccoladeDefinitionRow : FTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
	struct TSoftObjectPtr<USoundBase> Sound; // 0x20(0x28)
	struct TSoftObjectPtr<UObject> Icon; // 0x48(0x28)
	float DisplayDuration; // 0x70(0x04)
	struct FGameplayTag LocationTag; // 0x74(0x08)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FGameplayTagContainer AccoladeTags; // 0x80(0x20)
	struct FGameplayTagContainer CancelAccoladesWithTag; // 0xa0(0x20)
};

// ScriptStruct ShooterCoreRuntime.PendingAccoladeEntry
// Size: 0xe0 (Inherited: 0x00)
struct FPendingAccoladeEntry {
	struct FLyraAccoladeDefinitionRow Row; // 0x00(0xc0)
	struct USoundBase* Sound; // 0xc0(0x08)
	struct UObject* Icon; // 0xc8(0x08)
	struct UUserWidget* AllocatedWidget; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
};

