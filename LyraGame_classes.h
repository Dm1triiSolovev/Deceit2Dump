// Class LyraGame.LyraAttributeSet
// Size: 0x30 (Inherited: 0x30)
struct ULyraAttributeSet : UAttributeSet {
};

// Class LyraGame.LyraTaggedActor
// Size: 0x2a0 (Inherited: 0x278)
struct ALyraTaggedActor : AActor {
	char pad_278[0x8]; // 0x278(0x08)
	struct FGameplayTagContainer StaticGameplayTags; // 0x280(0x20)
};

// Class LyraGame.LyraCharacterMovementComponent
// Size: 0x1000 (Inherited: 0xf00)
struct ULyraCharacterMovementComponent : UCharacterMovementComponent {
	char pad_F00[0xf0]; // 0xf00(0xf0)
	bool bHasReplicatedAcceleration; // 0xff0(0x01)
	char pad_FF1[0xf]; // 0xff1(0x0f)

	struct FLyraCharacterGroundInfo GetGroundInfo(); // Function LyraGame.LyraCharacterMovementComponent.GetGroundInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x2252700
};

// Class LyraGame.LyraPlayerState
// Size: 0x538 (Inherited: 0x390)
struct ALyraPlayerState : AModularPlayerState {
	char pad_390[0x10]; // 0x390(0x10)
	struct ULyraPawnData* PawnData; // 0x3a0(0x08)
	struct ULyraAbilitySystemComponent* AbilitySystemComponent; // 0x3a8(0x08)
	enum class ELyraPlayerConnectionType MyPlayerConnectionType; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct FMulticastInlineDelegate OnTeamChangedDelegate; // 0x3b8(0x10)
	struct FGenericTeamId MyTeamID; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	int32_t MySquadID; // 0x3cc(0x04)
	struct FGameplayTagStackContainer StatTags; // 0x3d0(0x168)

	void RemoveStatTagStack(struct FGameplayTag Tag, int32_t StackCount); // Function LyraGame.LyraPlayerState.RemoveStatTagStack // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x2273930
	void OnRep_PawnData(); // Function LyraGame.LyraPlayerState.OnRep_PawnData // (Final|Native|Protected) // @ game+0xacd350
	void OnRep_MyTeamID(struct FGenericTeamId OldTeamID); // Function LyraGame.LyraPlayerState.OnRep_MyTeamID // (Final|Native|Private) // @ game+0x2273730
	void OnRep_MySquadID(); // Function LyraGame.LyraPlayerState.OnRep_MySquadID // (Final|Native|Private) // @ game+0xacd350
	bool HasStatTag(struct FGameplayTag Tag); // Function LyraGame.LyraPlayerState.HasStatTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2273550
	int32_t GetTeamId(); // Function LyraGame.LyraPlayerState.GetTeamId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22734a0
	int32_t GetStatTagStackCount(struct FGameplayTag Tag); // Function LyraGame.LyraPlayerState.GetStatTagStackCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2273400
	int32_t GetSquadId(); // Function LyraGame.LyraPlayerState.GetSquadId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22733e0
	struct ALyraPlayerController* GetLyraPlayerController(); // Function LyraGame.LyraPlayerState.GetLyraPlayerController // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2273150
	struct ULyraAbilitySystemComponent* GetLyraAbilitySystemComponent(); // Function LyraGame.LyraPlayerState.GetLyraAbilitySystemComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2273130
	void ClientBroadcastMessage(struct FLyraVerbMessage Message); // Function LyraGame.LyraPlayerState.ClientBroadcastMessage // (Net|Native|Event|Public|NetClient|BlueprintCallable) // @ game+0x2272a00
	void AddStatTagStack(struct FGameplayTag Tag, int32_t StackCount); // Function LyraGame.LyraPlayerState.AddStatTagStack // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x22728d0
};

// Class LyraGame.LyraPlayerSpawningManagerComponent
// Size: 0xc0 (Inherited: 0xb0)
struct ULyraPlayerSpawningManagerComponent : UGameStateComponent {
	struct TArray<struct TWeakObjectPtr<struct ALyraPlayerStart>> CachedPlayerStarts; // 0xb0(0x10)

	void K2_OnFinishRestartPlayer(struct AController* Player, struct FRotator& StartRotation); // Function LyraGame.LyraPlayerSpawningManagerComponent.K2_OnFinishRestartPlayer // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x2552560
};

// Class LyraGame.GameplayMessageProcessor
// Size: 0xc0 (Inherited: 0xb0)
struct UGameplayMessageProcessor : UActorComponent {
	char pad_B0[0x10]; // 0xb0(0x10)
};

// Class LyraGame.LyraCameraMode
// Size: 0xa8 (Inherited: 0x28)
struct ULyraCameraMode : UObject {
	struct FGameplayTag CameraTypeTag; // 0x28(0x08)
	char pad_30[0x50]; // 0x30(0x50)
	float FieldOfView; // 0x80(0x04)
	float ViewPitchMin; // 0x84(0x04)
	float ViewPitchMax; // 0x88(0x04)
	float BlendTime; // 0x8c(0x04)
	enum class ELyraCameraModeBlendFunction BlendFunction; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float BlendExponent; // 0x94(0x04)
	char pad_98[0x8]; // 0x98(0x08)
	char bResetInterpolation : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class LyraGame.AbilityTask_GrantNearbyInteraction
// Size: 0xe0 (Inherited: 0x80)
struct UAbilityTask_GrantNearbyInteraction : UAbilityTask {
	char pad_80[0x60]; // 0x80(0x60)

	struct UAbilityTask_GrantNearbyInteraction* GrantAbilitiesForNearbyInteractors(struct UGameplayAbility* OwningAbility, float InteractionScanRange, float InteractionScanRate); // Function LyraGame.AbilityTask_GrantNearbyInteraction.GrantAbilitiesForNearbyInteractors // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2248490
};

// Class LyraGame.AbilityTask_WaitForInteractableTargets
// Size: 0xb0 (Inherited: 0x80)
struct UAbilityTask_WaitForInteractableTargets : UAbilityTask {
	struct FMulticastInlineDelegate InteractableObjectsChanged; // 0x80(0x10)
	char pad_90[0x20]; // 0x90(0x20)
};

// Class LyraGame.AbilityTask_WaitForInteractableTargets_SingleLineTrace
// Size: 0x190 (Inherited: 0xb0)
struct UAbilityTask_WaitForInteractableTargets_SingleLineTrace : UAbilityTask_WaitForInteractableTargets {
	struct FInteractionQuery InteractionQuery; // 0xb0(0x18)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FGameplayAbilityTargetingLocationInfo StartLocation; // 0xd0(0xa0)
	char pad_170[0x20]; // 0x170(0x20)

	struct UAbilityTask_WaitForInteractableTargets_SingleLineTrace* WaitForInteractableTargets_SingleLineTrace(struct UGameplayAbility* OwningAbility, struct FInteractionQuery InteractionQuery, struct FCollisionProfileName TraceProfile, struct FGameplayAbilityTargetingLocationInfo StartLocation, float InteractionScanRange, float InteractionScanRate, bool bShowDebug); // Function LyraGame.AbilityTask_WaitForInteractableTargets_SingleLineTrace.WaitForInteractableTargets_SingleLineTrace // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22494d0
};

// Class LyraGame.AbilityTask_WaitVaultableTargets
// Size: 0x180 (Inherited: 0x80)
struct UAbilityTask_WaitVaultableTargets : UAbilityTask {
	struct FMulticastInlineDelegate VaultableObjectsChanged; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)
	struct FVaultQuery VaultQuery; // 0x98(0x18)
	struct FGameplayAbilityTargetingLocationInfo StartLocation; // 0xb0(0xa0)
	char pad_150[0x30]; // 0x150(0x30)

	struct UAbilityTask_WaitVaultableTargets* WaitForVaultableTargets_SingleLineTrace(struct UGameplayAbility* OwningAbility, struct FVaultQuery VaultQuery, struct FCollisionProfileName TraceProfile, struct FGameplayAbilityTargetingLocationInfo StartLocation, float VaultScanRange, float VaultScanRate, bool bShowDebug); // Function LyraGame.AbilityTask_WaitVaultableTargets.WaitForVaultableTargets_SingleLineTrace // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2249850
};

// Class LyraGame.AnimNotify_LyraContextEffects
// Size: 0xc8 (Inherited: 0x38)
struct UAnimNotify_LyraContextEffects : UAnimNotify {
	struct FGameplayTag Effect; // 0x38(0x08)
	struct FVector LocationOffset; // 0x40(0x18)
	struct FRotator RotationOffset; // 0x58(0x18)
	struct FLyraContextEffectAnimNotifyVFXSettings VFXProperties; // 0x70(0x18)
	struct FLyraContextEffectAnimNotifyAudioSettings AudioProperties; // 0x88(0x08)
	char bAttached : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FName SocketName; // 0x94(0x08)
	char bPerformTrace : 1; // 0x9c(0x01)
	char pad_9C_1 : 7; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	struct FLyraContextEffectAnimNotifyTraceSettings TraceProperties; // 0xa0(0x28)
};

// Class LyraGame.ApplyFrontendPerfSettingsAction
// Size: 0x28 (Inherited: 0x28)
struct UApplyFrontendPerfSettingsAction : UGameFeatureAction {
};

// Class LyraGame.AsyncAction_ExperienceReady
// Size: 0x48 (Inherited: 0x30)
struct UAsyncAction_ExperienceReady : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnReady; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)

	struct UAsyncAction_ExperienceReady* WaitForExperienceReady(struct UObject* WorldContextObject); // Function LyraGame.AsyncAction_ExperienceReady.WaitForExperienceReady // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2249440
};

// Class LyraGame.AsyncAction_ObserveTeam
// Size: 0x50 (Inherited: 0x30)
struct UAsyncAction_ObserveTeam : UCancellableAsyncAction {
	struct FMulticastInlineDelegate OnTeamChanged; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)

	void OnWatchedAgentChangedTeam(struct UObject* TeamAgent, int32_t OldTeam, int32_t NewTeam); // Function LyraGame.AsyncAction_ObserveTeam.OnWatchedAgentChangedTeam // (Final|Native|Private) // @ game+0x2248740
	struct UAsyncAction_ObserveTeam* ObserveTeam(struct UObject* TeamAgent); // Function LyraGame.AsyncAction_ObserveTeam.ObserveTeam // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2248590
};

// Class LyraGame.AsyncAction_ObserveTeamColors
// Size: 0x60 (Inherited: 0x30)
struct UAsyncAction_ObserveTeamColors : UCancellableAsyncAction {
	struct FMulticastInlineDelegate OnTeamChanged; // 0x30(0x10)
	char pad_40[0x20]; // 0x40(0x20)

	void OnWatchedAgentChangedTeam(struct UObject* TeamAgent, int32_t OldTeam, int32_t NewTeam); // Function LyraGame.AsyncAction_ObserveTeamColors.OnWatchedAgentChangedTeam // (Final|Native|Private) // @ game+0x2248850
	void OnDisplayAssetChanged(struct ULyraTeamDisplayAsset* DisplayAsset); // Function LyraGame.AsyncAction_ObserveTeamColors.OnDisplayAssetChanged // (Final|Native|Private) // @ game+0x22486b0
	struct UAsyncAction_ObserveTeamColors* ObserveTeamColors(struct UObject* TeamAgent); // Function LyraGame.AsyncAction_ObserveTeamColors.ObserveTeamColors // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2248620
};

// Class LyraGame.AsyncAction_QueryReplays
// Size: 0x60 (Inherited: 0x30)
struct UAsyncAction_QueryReplays : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate QueryComplete; // 0x30(0x10)
	struct ULyraReplayList* ResultList; // 0x40(0x08)
	char pad_48[0x18]; // 0x48(0x18)

	struct UAsyncAction_QueryReplays* QueryReplays(struct APlayerController* PlayerController); // Function LyraGame.AsyncAction_QueryReplays.QueryReplays // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2248960
};

// Class LyraGame.CircumferenceMarkerWidget
// Size: 0x230 (Inherited: 0x128)
struct UCircumferenceMarkerWidget : UWidget {
	struct TArray<struct FCircumferenceMarkerEntry> MarkerList; // 0x128(0x10)
	float Radius; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FSlateBrush MarkerImage; // 0x140(0xd0)
	char bReticleCornerOutsideSpreadRadius : 1; // 0x210(0x01)
	char pad_210_1 : 7; // 0x210(0x01)
	char pad_211[0x1f]; // 0x211(0x1f)

	void SetRadius(float InRadius); // Function LyraGame.CircumferenceMarkerWidget.SetRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x2249070
};

// Class LyraGame.GameFeatureAction_WorldActionBase
// Size: 0x78 (Inherited: 0x28)
struct UGameFeatureAction_WorldActionBase : UGameFeatureAction {
	char pad_28[0x50]; // 0x28(0x50)
};

// Class LyraGame.GameFeatureAction_AddAbilities
// Size: 0xd8 (Inherited: 0x78)
struct UGameFeatureAction_AddAbilities : UGameFeatureAction_WorldActionBase {
	struct TArray<struct FGameFeatureAbilitiesEntry> AbilitiesList; // 0x78(0x10)
	char pad_88[0x50]; // 0x88(0x50)
};

// Class LyraGame.GameFeatureAction_AddGameplayCuePath
// Size: 0x38 (Inherited: 0x28)
struct UGameFeatureAction_AddGameplayCuePath : UGameFeatureAction {
	struct TArray<struct FDirectoryPath> DirectoryPathsToAdd; // 0x28(0x10)
};

// Class LyraGame.GameFeatureAction_AddInputBinding
// Size: 0xd8 (Inherited: 0x78)
struct UGameFeatureAction_AddInputBinding : UGameFeatureAction_WorldActionBase {
	struct TArray<struct TSoftObjectPtr<ULyraInputConfig>> InputConfigs; // 0x78(0x10)
	char pad_88[0x50]; // 0x88(0x50)
};

// Class LyraGame.GameFeatureAction_AddInputConfig
// Size: 0x38 (Inherited: 0x28)
struct UGameFeatureAction_AddInputConfig : UGameFeatureAction {
	struct TArray<struct FMappableConfigPair> InputConfigs; // 0x28(0x10)
};

// Class LyraGame.GameFeatureAction_AddInputContextMapping
// Size: 0xd8 (Inherited: 0x78)
struct UGameFeatureAction_AddInputContextMapping : UGameFeatureAction_WorldActionBase {
	struct TArray<struct FInputMappingContextAndPriority> InputMappings; // 0x78(0x10)
	char pad_88[0x50]; // 0x88(0x50)
};

// Class LyraGame.GameFeatureAction_AddWidgets
// Size: 0xe8 (Inherited: 0x78)
struct UGameFeatureAction_AddWidgets : UGameFeatureAction_WorldActionBase {
	struct TArray<struct FLyraHUDLayoutRequest> Layout; // 0x78(0x10)
	struct TArray<struct FLyraHUDElementEntry> Widgets; // 0x88(0x10)
	char pad_98[0x50]; // 0x98(0x50)
};

// Class LyraGame.GameFeatureAction_SplitscreenConfig
// Size: 0x90 (Inherited: 0x78)
struct UGameFeatureAction_SplitscreenConfig : UGameFeatureAction_WorldActionBase {
	bool bDisableSplitscreen; // 0x78(0x01)
	char pad_79[0x17]; // 0x79(0x17)
};

// Class LyraGame.GameplayAbilityTargetActor_Interact
// Size: 0x3e0 (Inherited: 0x3e0)
struct AGameplayAbilityTargetActor_Interact : AGameplayAbilityTargetActor_Trace {
};

// Class LyraGame.HitMarkerConfirmationWidget
// Size: 0x330 (Inherited: 0x128)
struct UHitMarkerConfirmationWidget : UWidget {
	float HitNotifyDuration; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FSlateBrush PerHitMarkerImage; // 0x130(0xd0)
	struct TMap<struct FGameplayTag, struct FSlateBrush> PerHitMarkerZoneOverrideImages; // 0x200(0x50)
	struct FSlateBrush AnyHitsMarkerImage; // 0x250(0xd0)
	char pad_320[0x10]; // 0x320(0x10)
};

// Class LyraGame.IndicatorWidgetInterface
// Size: 0x28 (Inherited: 0x28)
struct UIndicatorWidgetInterface : UInterface {

	void UnbindIndicator(struct UIndicatorDescriptor* Indicator); // Function LyraGame.IndicatorWidgetInterface.UnbindIndicator // (Native|Event|Public|BlueprintEvent) // @ game+0x2249390
	void BindIndicator(struct UIndicatorDescriptor* Indicator); // Function LyraGame.IndicatorWidgetInterface.BindIndicator // (Native|Event|Public|BlueprintEvent) // @ game+0x22480c0
};

// Class LyraGame.InteractableTarget
// Size: 0x28 (Inherited: 0x28)
struct UInteractableTarget : UInterface {
};

// Class LyraGame.InteractionInstigator
// Size: 0x28 (Inherited: 0x28)
struct UInteractionInstigator : UInterface {
};

// Class LyraGame.IndicatorDescriptor
// Size: 0xe8 (Inherited: 0x28)
struct UIndicatorDescriptor : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	bool bVisible; // 0x30(0x01)
	bool bClampToScreen; // 0x31(0x01)
	bool bShowClampToScreenArrow; // 0x32(0x01)
	bool bOverrideScreenPosition; // 0x33(0x01)
	bool bAutoRemoveWhenIndicatorComponentIsNull; // 0x34(0x01)
	enum class EActorCanvasProjectionMode ProjectionMode; // 0x35(0x01)
	enum class EHorizontalAlignment HAlignment; // 0x36(0x01)
	enum class EVerticalAlignment VAlignment; // 0x37(0x01)
	int32_t Priority; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FVector BoundingBoxAnchor; // 0x40(0x18)
	struct FVector2D ScreenSpaceOffset; // 0x58(0x10)
	struct FVector WorldPositionOffset; // 0x68(0x18)
	struct UObject* DataObject; // 0x80(0x08)
	struct USceneComponent* Component; // 0x88(0x08)
	struct FName ComponentSocketName; // 0x90(0x08)
	struct TSoftClassPtr<UObject> IndicatorWidgetClass; // 0x98(0x28)
	struct TWeakObjectPtr<struct ULyraIndicatorManagerComponent> ManagerPtr; // 0xc0(0x08)
	char pad_C8[0x20]; // 0xc8(0x20)

	void UnregisterIndicator(); // Function LyraGame.IndicatorDescriptor.UnregisterIndicator // (Final|Native|Public|BlueprintCallable) // @ game+0x2249420
	void SetWorldPositionOffset(struct FVector Offset); // Function LyraGame.IndicatorDescriptor.SetWorldPositionOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2249310
	void SetVAlign(enum class EVerticalAlignment InVAlignment); // Function LyraGame.IndicatorDescriptor.SetVAlign // (Final|Native|Public|BlueprintCallable) // @ game+0x2249290
	void SetShowClampToScreenArrow(bool bValue); // Function LyraGame.IndicatorDescriptor.SetShowClampToScreenArrow // (Final|Native|Public|BlueprintCallable) // @ game+0x2249200
	void SetScreenSpaceOffset(struct FVector2D Offset); // Function LyraGame.IndicatorDescriptor.SetScreenSpaceOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2249180
	void SetSceneComponent(struct USceneComponent* InComponent); // Function LyraGame.IndicatorDescriptor.SetSceneComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x22490f0
	void SetProjectionMode(enum class EActorCanvasProjectionMode InProjectionMode); // Function LyraGame.IndicatorDescriptor.SetProjectionMode // (Final|Native|Public|BlueprintCallable) // @ game+0x2248ff0
	void SetPriority(int32_t InPriority); // Function LyraGame.IndicatorDescriptor.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x2248f70
	void SetIndicatorClass(struct TSoftClassPtr<UObject> InIndicatorWidgetClass); // Function LyraGame.IndicatorDescriptor.SetIndicatorClass // (Final|Native|Public|BlueprintCallable) // @ game+0x2248dc0
	void SetHAlign(enum class EHorizontalAlignment InHAlignment); // Function LyraGame.IndicatorDescriptor.SetHAlign // (Final|Native|Public|BlueprintCallable) // @ game+0x2248d40
	void SetDesiredVisibility(bool InVisible); // Function LyraGame.IndicatorDescriptor.SetDesiredVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x2248cb0
	void SetDataObject(struct UObject* InDataObject); // Function LyraGame.IndicatorDescriptor.SetDataObject // (Final|Native|Public|BlueprintCallable) // @ game+0x2248c20
	void SetComponentSocketName(struct FName SocketName); // Function LyraGame.IndicatorDescriptor.SetComponentSocketName // (Final|Native|Public|BlueprintCallable) // @ game+0x2248b90
	void SetClampToScreen(bool bValue); // Function LyraGame.IndicatorDescriptor.SetClampToScreen // (Final|Native|Public|BlueprintCallable) // @ game+0x2248b00
	void SetBoundingBoxAnchor(struct FVector InBoundingBoxAnchor); // Function LyraGame.IndicatorDescriptor.SetBoundingBoxAnchor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2248a80
	void SetAutoRemoveWhenIndicatorComponentIsNull(bool CanAutomaticallyRemove); // Function LyraGame.IndicatorDescriptor.SetAutoRemoveWhenIndicatorComponentIsNull // (Final|Native|Public|BlueprintCallable) // @ game+0x22489f0
	struct FVector GetWorldPositionOffset(); // Function LyraGame.IndicatorDescriptor.GetWorldPositionOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2248460
	enum class EVerticalAlignment GetVAlign(); // Function LyraGame.IndicatorDescriptor.GetVAlign // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2248440
	bool GetShowClampToScreenArrow(); // Function LyraGame.IndicatorDescriptor.GetShowClampToScreenArrow // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2248420
	struct FVector2D GetScreenSpaceOffset(); // Function LyraGame.IndicatorDescriptor.GetScreenSpaceOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2248400
	struct USceneComponent* GetSceneComponent(); // Function LyraGame.IndicatorDescriptor.GetSceneComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22483e0
	enum class EActorCanvasProjectionMode GetProjectionMode(); // Function LyraGame.IndicatorDescriptor.GetProjectionMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22483c0
	int32_t GetPriority(); // Function LyraGame.IndicatorDescriptor.GetPriority // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fd82d0
	bool GetIsVisible(); // Function LyraGame.IndicatorDescriptor.GetIsVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2248380
	struct UUserWidget* GetIndicatorWidget(); // Function LyraGame.IndicatorDescriptor.GetIndicatorWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2248320
	struct TSoftClassPtr<UObject> GetIndicatorClass(); // Function LyraGame.IndicatorDescriptor.GetIndicatorClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2248200
	enum class EHorizontalAlignment GetHAlign(); // Function LyraGame.IndicatorDescriptor.GetHAlign // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22481e0
	struct UObject* GetDataObject(); // Function LyraGame.IndicatorDescriptor.GetDataObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22481c0
	struct FName GetComponentSocketName(); // Function LyraGame.IndicatorDescriptor.GetComponentSocketName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19fb8a0
	bool GetClampToScreen(); // Function LyraGame.IndicatorDescriptor.GetClampToScreen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22481a0
	struct FVector GetBoundingBoxAnchor(); // Function LyraGame.IndicatorDescriptor.GetBoundingBoxAnchor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2248170
	bool GetAutoRemoveWhenIndicatorComponentIsNull(); // Function LyraGame.IndicatorDescriptor.GetAutoRemoveWhenIndicatorComponentIsNull // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2248150
};

// Class LyraGame.IndicatorLayer
// Size: 0x210 (Inherited: 0x128)
struct UIndicatorLayer : UWidget {
	char pad_128[0x8]; // 0x128(0x08)
	struct FSlateBrush ArrowBrush; // 0x130(0xd0)
	char pad_200[0x10]; // 0x200(0x10)
};

// Class LyraGame.IndicatorLibrary
// Size: 0x28 (Inherited: 0x28)
struct UIndicatorLibrary : UBlueprintFunctionLibrary {

	struct ULyraIndicatorManagerComponent* GetIndicatorManagerComponent(struct AController* Controller); // Function LyraGame.IndicatorLibrary.GetIndicatorManagerComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x224df90
};

// Class LyraGame.InteractionIndicatorInfo
// Size: 0x60 (Inherited: 0x28)
struct UInteractionIndicatorInfo : UObject {
	struct AActor* InteractableActor; // 0x28(0x08)
	struct FText Text; // 0x30(0x18)
	struct FText SubText; // 0x48(0x18)
};

// Class LyraGame.InteractionStatics
// Size: 0x28 (Inherited: 0x28)
struct UInteractionStatics : UBlueprintFunctionLibrary {

	void GetInteractableTargetsFromActor(struct AActor* Actor, struct TArray<struct TScriptInterface<IInteractableTarget>>& OutInteractableTargets); // Function LyraGame.InteractionStatics.GetInteractableTargetsFromActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x224e020
	struct AActor* GetActorFromInteractableTarget(struct TScriptInterface<IInteractableTarget> InteractableTarget); // Function LyraGame.InteractionStatics.GetActorFromInteractableTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x224dda0
};

// Class LyraGame.LyraInventoryItemFragment
// Size: 0x28 (Inherited: 0x28)
struct ULyraInventoryItemFragment : UObject {
};

// Class LyraGame.InventoryFragment_EquippableItem
// Size: 0x30 (Inherited: 0x28)
struct UInventoryFragment_EquippableItem : ULyraInventoryItemFragment {
	struct ULyraEquipmentDefinition* EquipmentDefinition; // 0x28(0x08)
};

// Class LyraGame.InventoryFragment_PickupIcon
// Size: 0x58 (Inherited: 0x28)
struct UInventoryFragment_PickupIcon : ULyraInventoryItemFragment {
	struct USkeletalMesh* SkeletalMesh; // 0x28(0x08)
	struct FText DisplayName; // 0x30(0x18)
	struct FLinearColor PadColor; // 0x48(0x10)
};

// Class LyraGame.InventoryFragment_QuickBarIcon
// Size: 0x1f0 (Inherited: 0x28)
struct UInventoryFragment_QuickBarIcon : ULyraInventoryItemFragment {
	char pad_28[0x8]; // 0x28(0x08)
	struct FSlateBrush Brush; // 0x30(0xd0)
	struct FSlateBrush AmmoBrush; // 0x100(0xd0)
	struct FText DisplayNameWhenEquipped; // 0x1d0(0x18)
	struct UUserWidget* StateWidget; // 0x1e8(0x08)
};

// Class LyraGame.InventoryFragment_ReticleConfig
// Size: 0x38 (Inherited: 0x28)
struct UInventoryFragment_ReticleConfig : ULyraInventoryItemFragment {
	struct TArray<struct ULyraReticleWidgetBase*> ReticleWidgets; // 0x28(0x10)
};

// Class LyraGame.InventoryFragment_SetStats
// Size: 0x78 (Inherited: 0x28)
struct UInventoryFragment_SetStats : ULyraInventoryItemFragment {
	struct TMap<struct FGameplayTag, int32_t> InitialItemStats; // 0x28(0x50)
};

// Class LyraGame.Pickupable
// Size: 0x28 (Inherited: 0x28)
struct UPickupable : UInterface {

	struct FInventoryPickup GetPickupInventory(); // Function LyraGame.Pickupable.GetPickupInventory // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x224e100
};

// Class LyraGame.PickupableStatics
// Size: 0x28 (Inherited: 0x28)
struct UPickupableStatics : UBlueprintFunctionLibrary {

	struct TScriptInterface<IPickupable> GetIPickupableFromActorInfo(struct UGameplayAbility* Ability); // Function LyraGame.PickupableStatics.GetIPickupableFromActorInfo // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x224df00
	void AddPickupInventory(struct ULyraInventoryManagerComponent* InventoryComponent, struct TScriptInterface<IPickupable> Pickupable); // Function LyraGame.PickupableStatics.AddPickupInventory // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x224d9f0
};

// Class LyraGame.VaultableTarget
// Size: 0x28 (Inherited: 0x28)
struct UVaultableTarget : UInterface {
};

// Class LyraGame.LyraAbilityCost
// Size: 0x30 (Inherited: 0x28)
struct ULyraAbilityCost : UObject {
	bool bOnlyApplyCostOnHit; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class LyraGame.LyraAbilityCost_InventoryItem
// Size: 0x60 (Inherited: 0x30)
struct ULyraAbilityCost_InventoryItem : ULyraAbilityCost {
	struct FScalableFloat Quantity; // 0x30(0x28)
	struct ULyraInventoryItemDefinition* ItemDefinition; // 0x58(0x08)
};

// Class LyraGame.LyraAbilityCost_ItemTagStack
// Size: 0x68 (Inherited: 0x30)
struct ULyraAbilityCost_ItemTagStack : ULyraAbilityCost {
	struct FScalableFloat Quantity; // 0x30(0x28)
	struct FGameplayTag Tag; // 0x58(0x08)
	struct FGameplayTag FailureTag; // 0x60(0x08)
};

// Class LyraGame.LyraAbilityCost_PlayerTagStack
// Size: 0x60 (Inherited: 0x30)
struct ULyraAbilityCost_PlayerTagStack : ULyraAbilityCost {
	struct FScalableFloat Quantity; // 0x30(0x28)
	struct FGameplayTag Tag; // 0x58(0x08)
};

// Class LyraGame.LyraAbilitySet
// Size: 0x60 (Inherited: 0x30)
struct ULyraAbilitySet : UPrimaryDataAsset {
	struct TArray<struct FLyraAbilitySet_GameplayAbility> GrantedGameplayAbilities; // 0x30(0x10)
	struct TArray<struct FLyraAbilitySet_GameplayEffect> GrantedGameplayEffects; // 0x40(0x10)
	struct TArray<struct FLyraAbilitySet_AttributeSet> GrantedAttributes; // 0x50(0x10)
};

// Class LyraGame.LyraAbilitySourceInterface
// Size: 0x28 (Inherited: 0x28)
struct ULyraAbilitySourceInterface : UInterface {
};

// Class LyraGame.LyraAbilitySystemComponent
// Size: 0x13f0 (Inherited: 0x13a8)
struct ULyraAbilitySystemComponent : UAbilitySystemComponent {
	struct ULyraAbilityTagRelationshipMapping* TagRelationshipMapping; // 0x13a8(0x08)
	char pad_13B0[0x40]; // 0x13b0(0x40)

	void ClientNotifyAbilityFailed(struct UGameplayAbility* Ability, struct FGameplayTagContainer FailureReason); // Function LyraGame.LyraAbilitySystemComponent.ClientNotifyAbilityFailed // (Net|Native|Event|Protected|NetClient) // @ game+0x224dca0
};

// Class LyraGame.LyraAbilitySystemFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULyraAbilitySystemFunctionLibrary : UBlueprintFunctionLibrary {

	void RevokeAbilitySet(struct ALyraPlayerState* PlayerState, struct FLyraAbilitySet_GrantedHandles GrantedHandles); // Function LyraGame.LyraAbilitySystemFunctionLibrary.RevokeAbilitySet // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x224e380
	struct FLyraAbilitySet_GrantedHandles GrantAbilitySet(struct ALyraPlayerState* PlayerState, struct ULyraAbilitySet* AbilitySet); // Function LyraGame.LyraAbilitySystemFunctionLibrary.GrantAbilitySet // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x224e1d0
	int32_t GetGameplayEffectSpecStacks(struct FGameplayEffectSpec& Spec); // Function LyraGame.LyraAbilitySystemFunctionLibrary.GetGameplayEffectSpecStacks // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x224de30
	void CancelAbilities(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayTagContainer WithTags, struct FGameplayTagContainer WithoutTags, struct UGameplayAbility* Ignore); // Function LyraGame.LyraAbilitySystemFunctionLibrary.CancelAbilities // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x224dac0
};

// Class LyraGame.LyraAbilitySystemGlobals
// Size: 0x260 (Inherited: 0x260)
struct ULyraAbilitySystemGlobals : UAbilitySystemGlobals {
};

// Class LyraGame.LyraAbilityTagRelationshipMapping
// Size: 0x40 (Inherited: 0x30)
struct ULyraAbilityTagRelationshipMapping : UDataAsset {
	struct TArray<struct FLyraAbilityTagRelationship> AbilityTagRelationships; // 0x30(0x10)
};

// Class LyraGame.LyraActivatableWidget
// Size: 0x380 (Inherited: 0x378)
struct ULyraActivatableWidget : UCommonActivatableWidget {
	enum class ELyraWidgetInputMode InputConfig; // 0x378(0x01)
	enum class EMouseCaptureMode GameMouseCaptureMode; // 0x379(0x01)
	char pad_37A[0x6]; // 0x37a(0x06)
};

// Class LyraGame.LyraActorUtilities
// Size: 0x28 (Inherited: 0x28)
struct ULyraActorUtilities : UBlueprintFunctionLibrary {

	enum class EBlueprintExposedNetMode SwitchOnNetMode(struct UObject* WorldContextObject); // Function LyraGame.LyraActorUtilities.SwitchOnNetMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x224e540
};

// Class LyraGame.LyraAimSensitivityData
// Size: 0x80 (Inherited: 0x30)
struct ULyraAimSensitivityData : UPrimaryDataAsset {
	struct TMap<enum class ELyraGamepadSensitivity, float> SensitivityMap; // 0x30(0x50)
};

// Class LyraGame.LyraAnimInstance
// Size: 0x370 (Inherited: 0x350)
struct ULyraAnimInstance : UAnimInstance {
	struct FGameplayTagBlueprintPropertyMap GameplayTagPropertyMap; // 0x348(0x20)
	float GroundDistance; // 0x368(0x04)
};

// Class LyraGame.LyraAssetManager
// Size: 0x610 (Inherited: 0x4e8)
struct ULyraAssetManager : UAssetManager {
	struct TSoftObjectPtr<ULyraGameData> LyraGameDataPath; // 0x4e8(0x28)
	struct TMap<struct UObject*, struct UPrimaryDataAsset*> GameDataMap; // 0x510(0x50)
	struct TSoftObjectPtr<ULyraPawnData> DefaultPawnData; // 0x560(0x28)
	char pad_588[0x10]; // 0x588(0x10)
	struct TSet<struct UObject*> LoadedAssets; // 0x598(0x50)
	char pad_5E8[0x28]; // 0x5e8(0x28)
};

// Class LyraGame.LyraAudioMixEffectsSubsystem
// Size: 0x98 (Inherited: 0x30)
struct ULyraAudioMixEffectsSubsystem : UWorldSubsystem {
	struct USoundControlBusMix* DefaultBaseMix; // 0x30(0x08)
	struct USoundControlBusMix* LoadingScreenMix; // 0x38(0x08)
	struct USoundControlBusMix* UserMix; // 0x40(0x08)
	struct USoundControlBus* OverallControlBus; // 0x48(0x08)
	struct USoundControlBus* MusicControlBus; // 0x50(0x08)
	struct USoundControlBus* SoundFXControlBus; // 0x58(0x08)
	struct USoundControlBus* DialogueControlBus; // 0x60(0x08)
	struct USoundControlBus* VoiceChatControlBus; // 0x68(0x08)
	struct TArray<struct FLyraAudioSubmixEffectsChain> HDRSubmixEffectChain; // 0x70(0x10)
	struct TArray<struct FLyraAudioSubmixEffectsChain> LDRSubmixEffectChain; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)
};

// Class LyraGame.LyraAudioSettings
// Size: 0x118 (Inherited: 0x38)
struct ULyraAudioSettings : UDeveloperSettings {
	struct FSoftObjectPath DefaultControlBusMix; // 0x38(0x18)
	struct FSoftObjectPath LoadingScreenControlBusMix; // 0x50(0x18)
	struct FSoftObjectPath UserSettingsControlBusMix; // 0x68(0x18)
	struct FSoftObjectPath OverallVolumeControlBus; // 0x80(0x18)
	struct FSoftObjectPath MusicVolumeControlBus; // 0x98(0x18)
	struct FSoftObjectPath SoundFXVolumeControlBus; // 0xb0(0x18)
	struct FSoftObjectPath DialogueVolumeControlBus; // 0xc8(0x18)
	struct FSoftObjectPath VoiceChatVolumeControlBus; // 0xe0(0x18)
	struct TArray<struct FLyraSubmixEffectChainMap> HDRAudioSubmixEffectChain; // 0xf8(0x10)
	struct TArray<struct FLyraSubmixEffectChainMap> LDRAudioSubmixEffectChain; // 0x108(0x10)
};

// Class LyraGame.LyraBotCheats
// Size: 0x28 (Inherited: 0x28)
struct ULyraBotCheats : UCheatManagerExtension {

	void RemovePlayerBot(); // Function LyraGame.LyraBotCheats.RemovePlayerBot // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0xacd350
	void AddPlayerBot(); // Function LyraGame.LyraBotCheats.AddPlayerBot // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0xacd350
};

// Class LyraGame.LyraBotCreationComponent
// Size: 0xf0 (Inherited: 0xb0)
struct ULyraBotCreationComponent : UGameStateComponent {
	int32_t NumBotsToCreate; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct AAIController* BotControllerClass; // 0xb8(0x08)
	struct TArray<struct FString> RandomBotNames; // 0xc0(0x10)
	char pad_D0[0x10]; // 0xd0(0x10)
	struct TArray<struct AAIController*> SpawnedBotList; // 0xe0(0x10)
};

// Class LyraGame.LyraBoundActionButton
// Size: 0x1090 (Inherited: 0x1080)
struct ULyraBoundActionButton : UCommonBoundActionButton {
	struct UCommonButtonStyle* KeyboardStyle; // 0x1078(0x08)
	struct UCommonButtonStyle* GamepadStyle; // 0x1080(0x08)
	struct UCommonButtonStyle* TouchStyle; // 0x1088(0x08)
};

// Class LyraGame.LyraBrightnessEditor
// Size: 0x3c8 (Inherited: 0x378)
struct ULyraBrightnessEditor : UCommonActivatableWidget {
	char pad_378[0x20]; // 0x378(0x20)
	bool bCanCancel; // 0x398(0x01)
	char pad_399[0xf]; // 0x399(0x0f)
	struct UWidgetSwitcher* Switcher_SafeZoneMessage; // 0x3a8(0x08)
	struct UCommonRichTextBlock* RichText_Default; // 0x3b0(0x08)
	struct UCommonButtonBase* Button_Back; // 0x3b8(0x08)
	struct UCommonButtonBase* Button_Done; // 0x3c0(0x08)

	void HandleDoneClicked(); // Function LyraGame.LyraBrightnessEditor.HandleDoneClicked // (Final|Native|Private) // @ game+0x2252860
	void HandleBackClicked(); // Function LyraGame.LyraBrightnessEditor.HandleBackClicked // (Final|Native|Private) // @ game+0x2252840
};

// Class LyraGame.LyraButtonBase
// Size: 0x1090 (Inherited: 0x1070)
struct ULyraButtonBase : UCommonButtonBase {
	char bOverride_ButtonText : 1; // 0x1068(0x01)
	struct FText ButtonText; // 0x1070(0x18)
	char pad_1088_1 : 7; // 0x1088(0x01)
	char pad_1089[0x7]; // 0x1089(0x07)

	void UpdateButtonText(struct FText& InText); // Function LyraGame.LyraButtonBase.UpdateButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void UpdateButtonStyle(); // Function LyraGame.LyraButtonBase.UpdateButtonStyle // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void SetButtonText(struct FText& InText); // Function LyraGame.LyraButtonBase.SetButtonText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x22530e0
};

// Class LyraGame.LyraCameraAssistInterface
// Size: 0x28 (Inherited: 0x28)
struct ULyraCameraAssistInterface : UInterface {
};

// Class LyraGame.LyraCameraComponent
// Size: 0xa40 (Inherited: 0xa20)
struct ULyraCameraComponent : UCameraComponent {
	char pad_A20[0x10]; // 0xa20(0x10)
	struct ULyraCameraModeStack* CameraModeStack; // 0xa30(0x08)
	char pad_A38[0x8]; // 0xa38(0x08)

	struct ULyraCameraComponent* FindCameraComponent(struct AActor* Actor); // Function LyraGame.LyraCameraComponent.FindCameraComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2252450
};

// Class LyraGame.LyraCameraModeStack
// Size: 0x50 (Inherited: 0x28)
struct ULyraCameraModeStack : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct ULyraCameraMode*> CameraModeInstances; // 0x30(0x10)
	struct TArray<struct ULyraCameraMode*> CameraModeStack; // 0x40(0x10)
};

// Class LyraGame.LyraCameraMode_ThirdPerson
// Size: 0x2e0 (Inherited: 0xa8)
struct ULyraCameraMode_ThirdPerson : ULyraCameraMode {
	struct UCurveVector* TargetOffsetCurve; // 0xa8(0x08)
	bool bUseRuntimeFloatCurves; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FRuntimeFloatCurve TargetOffsetX; // 0xb8(0x88)
	struct FRuntimeFloatCurve TargetOffsetY; // 0x140(0x88)
	struct FRuntimeFloatCurve TargetOffsetZ; // 0x1c8(0x88)
	float CrouchOffsetBlendMultiplier; // 0x250(0x04)
	float PenetrationBlendInTime; // 0x254(0x04)
	float PenetrationBlendOutTime; // 0x258(0x04)
	bool bPreventPenetration; // 0x25c(0x01)
	bool bDoPredictiveAvoidance; // 0x25d(0x01)
	char pad_25E[0x2]; // 0x25e(0x02)
	float CollisionPushOutDistance; // 0x260(0x04)
	float ReportPenetrationPercent; // 0x264(0x04)
	struct TArray<struct FLyraPenetrationAvoidanceFeeler> PenetrationAvoidanceFeelers; // 0x268(0x10)
	float AimLineToDesiredPosBlockedPct; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct TArray<struct AActor*> DebugActorsHitDuringCameraPenetration; // 0x280(0x10)
	char pad_290[0x50]; // 0x290(0x50)
};

// Class LyraGame.LyraCharacter
// Size: 0x660 (Inherited: 0x600)
struct ALyraCharacter : AModularCharacter {
	char pad_600[0x20]; // 0x600(0x20)
	struct ULyraPawnExtensionComponent* PawnExtComponent; // 0x620(0x08)
	struct ULyraHealthComponent* HealthComponent; // 0x628(0x08)
	struct ULyraCameraComponent* CameraComponent; // 0x630(0x08)
	struct USkeletalMeshComponent* FirstPersonMesh; // 0x638(0x08)
	struct FLyraReplicatedAcceleration ReplicatedAcceleration; // 0x640(0x03)
	struct FGenericTeamId MyTeamID; // 0x643(0x01)
	char pad_644[0x4]; // 0x644(0x04)
	struct FMulticastInlineDelegate OnTeamChangedDelegate; // 0x648(0x10)
	char pad_658[0x8]; // 0x658(0x08)

	void OnRep_ReplicatedAcceleration(); // Function LyraGame.LyraCharacter.OnRep_ReplicatedAcceleration // (Final|Native|Private) // @ game+0x2252fa0
	void OnRep_MyTeamID(struct FGenericTeamId OldTeamID); // Function LyraGame.LyraCharacter.OnRep_MyTeamID // (Final|Native|Private) // @ game+0x2252f20
	void OnDeathStarted(struct AActor* OwningActor); // Function LyraGame.LyraCharacter.OnDeathStarted // (Native|Protected) // @ game+0x2252d50
	void OnDeathFinished(struct AActor* OwningActor); // Function LyraGame.LyraCharacter.OnDeathFinished // (Native|Protected) // @ game+0x2252cc0
	void OnControllerChangedTeam(struct UObject* TeamAgent, int32_t OldTeam, int32_t NewTeam); // Function LyraGame.LyraCharacter.OnControllerChangedTeam // (Final|Native|Private) // @ game+0x2252bb0
	void K2_OnEquipmentUnequipped(struct ULyraEquipmentInstance* EquipmentInstance); // Function LyraGame.LyraCharacter.K2_OnEquipmentUnequipped // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void K2_OnEquipmentEquipped(struct ULyraEquipmentInstance* EquipmentInstance); // Function LyraGame.LyraCharacter.K2_OnEquipmentEquipped // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void K2_OnDeathFinished(); // Function LyraGame.LyraCharacter.K2_OnDeathFinished // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	struct ALyraPlayerState* GetLyraPlayerState(); // Function LyraGame.LyraCharacter.GetLyraPlayerState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2252810
	struct ALyraPlayerController* GetLyraPlayerController(); // Function LyraGame.LyraCharacter.GetLyraPlayerController // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22527e0
	struct ULyraAbilitySystemComponent* GetLyraAbilitySystemComponent(); // Function LyraGame.LyraCharacter.GetLyraAbilitySystemComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22527b0
};

// Class LyraGame.LyraCharacterWithAbilities
// Size: 0x660 (Inherited: 0x660)
struct ALyraCharacterWithAbilities : ALyraCharacter {
	struct ULyraAbilitySystemComponent* AbilitySystemComponent; // 0x658(0x08)
};

// Class LyraGame.LyraCheatManager
// Size: 0x88 (Inherited: 0x88)
struct ULyraCheatManager : UCheatManager {

	void UnlimitedHealth(int32_t Enabled); // Function LyraGame.LyraCheatManager.UnlimitedHealth // (BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x22531d0
	void ToggleFixedCamera(); // Function LyraGame.LyraCheatManager.ToggleFixedCamera // (Exec|Native|Public) // @ game+0x22531b0
	void RemoveTagFromSelf(struct FString TagName); // Function LyraGame.LyraCheatManager.RemoveTagFromSelf // (BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x2252fe0
	void PlayNextGame(); // Function LyraGame.LyraCheatManager.PlayNextGame // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x2252fc0
	void HealTarget(float HealAmount); // Function LyraGame.LyraCheatManager.HealTarget // (BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x2252b00
	void HealSelf(float HealAmount); // Function LyraGame.LyraCheatManager.HealSelf // (BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x2252a70
	void DamageSelfDestruct(); // Function LyraGame.LyraCheatManager.DamageSelfDestruct // (BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x2252430
	void DamageSelf(float DamageAmount); // Function LyraGame.LyraCheatManager.DamageSelf // (BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x22523a0
	void CycleDebugCameras(); // Function LyraGame.LyraCheatManager.CycleDebugCameras // (Exec|Native|Public) // @ game+0x2252380
	void CycleAbilitySystemDebug(); // Function LyraGame.LyraCheatManager.CycleAbilitySystemDebug // (Exec|Native|Public) // @ game+0x2252360
	void CheatAll(struct FString Msg); // Function LyraGame.LyraCheatManager.CheatAll // (Final|Exec|Native|Public) // @ game+0x22522c0
	void Cheat(struct FString Msg); // Function LyraGame.LyraCheatManager.Cheat // (Final|Exec|Native|Public) // @ game+0x2252220
	void CancelActivatedAbilities(); // Function LyraGame.LyraCheatManager.CancelActivatedAbilities // (BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x2252200
	void AddTagToSelf(struct FString TagName); // Function LyraGame.LyraCheatManager.AddTagToSelf // (BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x2251760
};

// Class LyraGame.LyraCombatSet
// Size: 0x50 (Inherited: 0x30)
struct ULyraCombatSet : ULyraAttributeSet {
	struct FGameplayAttributeData BaseDamage; // 0x30(0x10)
	struct FGameplayAttributeData BaseHeal; // 0x40(0x10)

	void OnRep_BaseHeal(struct FGameplayAttributeData& OldValue); // Function LyraGame.LyraCombatSet.OnRep_BaseHeal // (Final|Native|Protected|HasOutParms) // @ game+0x2252e80
	void OnRep_BaseDamage(struct FGameplayAttributeData& OldValue); // Function LyraGame.LyraCombatSet.OnRep_BaseDamage // (Final|Native|Protected|HasOutParms) // @ game+0x2252de0
};

// Class LyraGame.LyraConfirmationScreen
// Size: 0x3b8 (Inherited: 0x378)
struct ULyraConfirmationScreen : UCommonGameDialog {
	char pad_378[0x10]; // 0x378(0x10)
	struct UCommonTextBlock* Text_Title; // 0x388(0x08)
	struct UCommonRichTextBlock* RichText_Description; // 0x390(0x08)
	struct UDynamicEntryBox* EntryBox_Buttons; // 0x398(0x08)
	struct UCommonBorder* Border_TapToCloseZone; // 0x3a0(0x08)
	struct FDataTableRowHandle CancelAction; // 0x3a8(0x10)

	struct FEventReply HandleTapToCloseZoneMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function LyraGame.LyraConfirmationScreen.HandleTapToCloseZoneMouseButtonDown // (Final|Native|Private|HasOutParms) // @ game+0x2252880
};

// Class LyraGame.LyraContextEffectComponent
// Size: 0x1c0 (Inherited: 0xb0)
struct ULyraContextEffectComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	bool bConvertPhysicalSurfaceToContext; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FGameplayTagContainer DefaultEffectContexts; // 0xc0(0x20)
	struct TSet<struct TSoftObjectPtr<ULyraContextEffectsLibrary>> DefaultContextEffectsLibraries; // 0xe0(0x50)
	struct FGameplayTagContainer CurrentContexts; // 0x130(0x20)
	struct TSet<struct TSoftObjectPtr<ULyraContextEffectsLibrary>> CurrentContextEffectsLibraries; // 0x150(0x50)
	struct TArray<struct UAudioComponent*> ActiveAudioComponents; // 0x1a0(0x10)
	struct TArray<struct UNiagaraComponent*> ActiveNiagaraComponents; // 0x1b0(0x10)

	void UpdateLibraries(struct TSet<struct TSoftObjectPtr<ULyraContextEffectsLibrary>> NewContextEffectsLibraries); // Function LyraGame.LyraContextEffectComponent.UpdateLibraries // (Final|Native|Public|BlueprintCallable) // @ game+0x2253340
	void UpdateEffectContexts(struct FGameplayTagContainer NewEffectContexts); // Function LyraGame.LyraContextEffectComponent.UpdateEffectContexts // (Final|Native|Public|BlueprintCallable) // @ game+0x2253260
	void AnimMotionEffect_Implementation(struct FName bone, struct FGameplayTag MotionEffect, struct USceneComponent* StaticMeshComponent, struct FVector LocationOffset, struct FRotator RotationOffset, struct UAnimSequenceBase* AnimationSequence, bool bHitSuccess, struct FHitResult HitResult, struct FGameplayTagContainer Contexts, struct FVector VFXScale, float AudioVolume, float AudioPitch); // Function LyraGame.LyraContextEffectComponent.AnimMotionEffect_Implementation // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2251d30
};

// Class LyraGame.LyraContextEffectsInterface
// Size: 0x28 (Inherited: 0x28)
struct ULyraContextEffectsInterface : UInterface {

	void AnimMotionEffect(struct FName bone, struct FGameplayTag MotionEffect, struct USceneComponent* StaticMeshComponent, struct FVector LocationOffset, struct FRotator RotationOffset, struct UAnimSequenceBase* AnimationSequence, bool bHitSuccess, struct FHitResult HitResult, struct FGameplayTagContainer Contexts, struct FVector VFXScale, float AudioVolume, float AudioPitch); // Function LyraGame.LyraContextEffectsInterface.AnimMotionEffect // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2251860
};

// Class LyraGame.LyraActiveContextEffects
// Size: 0x70 (Inherited: 0x28)
struct ULyraActiveContextEffects : UObject {
	struct FGameplayTag EffectTag; // 0x28(0x08)
	struct FGameplayTagContainer Context; // 0x30(0x20)
	struct TArray<struct USoundBase*> Sounds; // 0x50(0x10)
	struct TArray<struct UNiagaraSystem*> NiagaraSystems; // 0x60(0x10)
};

// Class LyraGame.LyraContextEffectsLibrary
// Size: 0x50 (Inherited: 0x28)
struct ULyraContextEffectsLibrary : UObject {
	struct TArray<struct FLyraContextEffects> ContextEffects; // 0x28(0x10)
	struct TArray<struct ULyraActiveContextEffects*> ActiveContextEffects; // 0x38(0x10)
	enum class EContextEffectsLibraryLoadState EffectsLoadState; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	void LoadEffects(); // Function LyraGame.LyraContextEffectsLibrary.LoadEffects // (Final|Native|Public|BlueprintCallable) // @ game+0x2252b90
	void GetEffects(struct FGameplayTag Effect, struct FGameplayTagContainer Context, struct TArray<struct USoundBase*>& Sounds, struct TArray<struct UNiagaraSystem*>& NiagaraSystems); // Function LyraGame.LyraContextEffectsLibrary.GetEffects // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2252510
};

// Class LyraGame.LyraContextEffectsSettings
// Size: 0x88 (Inherited: 0x38)
struct ULyraContextEffectsSettings : UDeveloperSettings {
	struct TMap<enum class EPhysicalSurface, struct FGameplayTag> SurfaceTypeToContextMap; // 0x38(0x50)
};

// Class LyraGame.LyraContextEffectsSet
// Size: 0x78 (Inherited: 0x28)
struct ULyraContextEffectsSet : UObject {
	struct TSet<struct ULyraContextEffectsLibrary*> LyraContextEffectsLibraries; // 0x28(0x50)
};

// Class LyraGame.LyraContextEffectsSubsystem
// Size: 0x80 (Inherited: 0x30)
struct ULyraContextEffectsSubsystem : UWorldSubsystem {
	struct TMap<struct AActor*, struct ULyraContextEffectsSet*> ActiveActorEffectsMap; // 0x30(0x50)

	void UnloadAndRemoveContextEffectsLibraries(struct AActor* OwningActor); // Function LyraGame.LyraContextEffectsSubsystem.UnloadAndRemoveContextEffectsLibraries // (Final|Native|Public|BlueprintCallable) // @ game+0x225b850
	void SpawnContextEffects(struct AActor* SpawningActor, struct USceneComponent* AttachToComponent, struct FName AttachPoint, struct FVector LocationOffset, struct FRotator RotationOffset, struct FGameplayTag Effect, struct FGameplayTagContainer Contexts, struct TArray<struct UAudioComponent*>& AudioOut, struct TArray<struct UNiagaraComponent*>& NiagaraOut, struct FVector VFXScale, float AudioVolume, float AudioPitch); // Function LyraGame.LyraContextEffectsSubsystem.SpawnContextEffects // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x225b330
	void LoadAndAddContextEffectsLibraries(struct AActor* OwningActor, struct TSet<struct TSoftObjectPtr<ULyraContextEffectsLibrary>> ContextEffectsLibraries); // Function LyraGame.LyraContextEffectsSubsystem.LoadAndAddContextEffectsLibraries // (Final|Native|Public|BlueprintCallable) // @ game+0x225ad10
	bool GetContextFromSurfaceType(enum class EPhysicalSurface PhysicalSurface, struct FGameplayTag& Context); // Function LyraGame.LyraContextEffectsSubsystem.GetContextFromSurfaceType // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x225a870
};

// Class LyraGame.LyraControllerComponent_CharacterParts
// Size: 0xc0 (Inherited: 0xb0)
struct ULyraControllerComponent_CharacterParts : UControllerComponent {
	struct TArray<struct FLyraControllerCharacterPartEntry> CharacterParts; // 0xb0(0x10)

	void RemoveCharacterPart(struct FLyraCharacterPart& PartToRemove); // Function LyraGame.LyraControllerComponent_CharacterParts.RemoveCharacterPart // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x225b290
	void RemoveAllCharacterParts(); // Function LyraGame.LyraControllerComponent_CharacterParts.RemoveAllCharacterParts // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x225b270
	void OnPossessedPawnChanged(struct APawn* OldPawn, struct APawn* NewPawn); // Function LyraGame.LyraControllerComponent_CharacterParts.OnPossessedPawnChanged // (Final|Native|Private) // @ game+0x225af60
	void AddCharacterPart(struct FLyraCharacterPart& NewPart); // Function LyraGame.LyraControllerComponent_CharacterParts.AddCharacterPart // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x225a650
};

// Class LyraGame.LyraControllerDisconnectedScreen
// Size: 0x380 (Inherited: 0x378)
struct ULyraControllerDisconnectedScreen : UCommonActivatableWidget {
	struct UHorizontalBox* HBox_SwitchUser; // 0x378(0x08)
};

// Class LyraGame.LyraCosmeticCheats
// Size: 0x28 (Inherited: 0x28)
struct ULyraCosmeticCheats : UCheatManagerExtension {

	void ReplaceCharacterPart(struct FString AssetName, bool bSuppressNaturalParts); // Function LyraGame.LyraCosmeticCheats.ReplaceCharacterPart // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x225a6f0
	void ClearCharacterPartOverrides(); // Function LyraGame.LyraCosmeticCheats.ClearCharacterPartOverrides // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0xacd350
	void AddCharacterPart(struct FString AssetName, bool bSuppressNaturalParts); // Function LyraGame.LyraCosmeticCheats.AddCharacterPart // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x225a6f0
};

// Class LyraGame.LyraCosmeticDeveloperSettings
// Size: 0x50 (Inherited: 0x38)
struct ULyraCosmeticDeveloperSettings : UDeveloperSettingsBackedByCVars {
	struct TArray<struct FLyraCharacterPart> CheatCosmeticCharacterParts; // 0x38(0x10)
	enum class ECosmeticCheatMode CheatMode; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class LyraGame.LyraDamageExecution
// Size: 0x40 (Inherited: 0x40)
struct ULyraDamageExecution : UGameplayEffectExecutionCalculation {
};

// Class LyraGame.LyraDamageLogDebuggerComponent
// Size: 0x130 (Inherited: 0xb0)
struct ULyraDamageLogDebuggerComponent : UActorComponent {
	double SecondsBetweenDamageBeforeLogging; // 0xb0(0x08)
	char pad_B8[0x78]; // 0xb8(0x78)
};

// Class LyraGame.LyraDamagePopStyle
// Size: 0xb8 (Inherited: 0x30)
struct ULyraDamagePopStyle : UDataAsset {
	struct FString DisplayText; // 0x30(0x10)
	struct FGameplayTagQuery MatchPattern; // 0x40(0x48)
	struct FLinearColor Color; // 0x88(0x10)
	struct FLinearColor CriticalColor; // 0x98(0x10)
	struct UStaticMesh* TextMesh; // 0xa8(0x08)
	bool bOverrideColor; // 0xb0(0x01)
	bool bOverrideMesh; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
};

// Class LyraGame.LyraDamagePopStyleNiagara
// Size: 0x40 (Inherited: 0x30)
struct ULyraDamagePopStyleNiagara : UDataAsset {
	struct FName NiagaraArrayName; // 0x30(0x08)
	struct UNiagaraSystem* TextNiagara; // 0x38(0x08)
};

// Class LyraGame.LyraDebugCameraController
// Size: 0x948 (Inherited: 0x948)
struct ALyraDebugCameraController : ADebugCameraController {
};

// Class LyraGame.LyraDeveloperSettings
// Size: 0x88 (Inherited: 0x38)
struct ULyraDeveloperSettings : UDeveloperSettingsBackedByCVars {
	struct FPrimaryAssetId ExperienceOverride; // 0x38(0x10)
	bool bOverrideBotCount; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32_t OverrideNumPlayerBotsToSpawn; // 0x4c(0x04)
	bool bAllowPlayerBotsToAttack; // 0x50(0x01)
	bool bTestFullGameFlowInPIE; // 0x51(0x01)
	bool bSkipLoadingCosmeticBackgroundsInPIE; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	struct TArray<struct FLyraCheatToRun> CheatsToRun; // 0x58(0x10)
	bool LogGameplayMessages; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct ULyraInventoryItemDefinition*> InitialInventoryItems; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)
};

// Class LyraGame.LyraDevelopmentStatics
// Size: 0x28 (Inherited: 0x28)
struct ULyraDevelopmentStatics : UBlueprintFunctionLibrary {

	bool ShouldSkipDirectlyToGameplay(); // Function LyraGame.LyraDevelopmentStatics.ShouldSkipDirectlyToGameplay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fa540
	bool ShouldLoadCosmeticBackgrounds(); // Function LyraGame.LyraDevelopmentStatics.ShouldLoadCosmeticBackgrounds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fa8490
	int32_t GetPlayNumberOfClients(); // Function LyraGame.LyraDevelopmentStatics.GetPlayNumberOfClients // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x225ab80
	struct TArray<struct ULyraInventoryItemDefinition*> GetInitialInventoryItems(); // Function LyraGame.LyraDevelopmentStatics.GetInitialInventoryItems // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x225aad0
	bool CanPlayerBotsAttack(); // Function LyraGame.LyraDevelopmentStatics.CanPlayerBotsAttack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fa8490
};

// Class LyraGame.LyraEquipmentDefinition
// Size: 0x50 (Inherited: 0x28)
struct ULyraEquipmentDefinition : UObject {
	struct ULyraEquipmentInstance* InstanceType; // 0x28(0x08)
	struct TArray<struct ULyraAbilitySet*> AbilitySetsToGrant; // 0x30(0x10)
	struct TArray<struct FLyraEquipmentActorToSpawn> ActorsToSpawn; // 0x40(0x10)
};

// Class LyraGame.LyraEquipmentInstance
// Size: 0x40 (Inherited: 0x28)
struct ULyraEquipmentInstance : UObject {
	struct UObject* Instigator; // 0x28(0x08)
	struct TArray<struct AActor*> SpawnedActors; // 0x30(0x10)

	void OnRep_SpawnedActors(); // Function LyraGame.LyraEquipmentInstance.OnRep_SpawnedActors // (Final|Native|Protected) // @ game+0x225b050
	void OnRep_Instigator(); // Function LyraGame.LyraEquipmentInstance.OnRep_Instigator // (Final|Native|Private) // @ game+0xacd350
	void K2_OnUnequipped(); // Function LyraGame.LyraEquipmentInstance.K2_OnUnequipped // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void K2_OnEquipped(); // Function LyraGame.LyraEquipmentInstance.K2_OnEquipped // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	struct APawn* GetTypedPawn(struct APawn* PawnType); // Function LyraGame.LyraEquipmentInstance.GetTypedPawn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x225ac70
	struct TArray<struct AActor*> GetSpawnedActors(); // Function LyraGame.LyraEquipmentInstance.GetSpawnedActors // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x225abb0
	struct APawn* GetPawn(); // Function LyraGame.LyraEquipmentInstance.GetPawn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x225ab50
	struct UObject* GetInstigator(); // Function LyraGame.LyraEquipmentInstance.GetInstigator // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x186df80
};

// Class LyraGame.LyraEquipmentManagerComponent
// Size: 0x1d0 (Inherited: 0xb0)
struct ULyraEquipmentManagerComponent : UPawnComponent {
	struct FLyraEquipmentList EquipmentList; // 0xb0(0x120)

	void UnequipItem(struct ULyraEquipmentInstance* ItemInstance); // Function LyraGame.LyraEquipmentManagerComponent.UnequipItem // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const) // @ game+0x225b7c0
	struct ULyraEquipmentInstance* GetFirstInstanceOfType(struct ULyraEquipmentInstance* InstanceType); // Function LyraGame.LyraEquipmentManagerComponent.GetFirstInstanceOfType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x225aa30
	struct TArray<struct ULyraEquipmentInstance*> GetEquipmentInstancesOfType(struct ULyraEquipmentInstance* InstanceType); // Function LyraGame.LyraEquipmentManagerComponent.GetEquipmentInstancesOfType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x225a950
	struct ULyraEquipmentInstance* EquipItem(struct ULyraEquipmentDefinition* EquipmentDefinition); // Function LyraGame.LyraEquipmentManagerComponent.EquipItem // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const) // @ game+0x225a7d0
};

// Class LyraGame.LyraExperienceActionSet
// Size: 0x50 (Inherited: 0x30)
struct ULyraExperienceActionSet : UPrimaryDataAsset {
	struct TArray<struct UGameFeatureAction*> Actions; // 0x30(0x10)
	struct TArray<struct FString> GameFeaturesToEnable; // 0x40(0x10)
};

// Class LyraGame.LyraExperienceDefinition
// Size: 0x68 (Inherited: 0x30)
struct ULyraExperienceDefinition : UPrimaryDataAsset {
	struct TArray<struct FString> GameFeaturesToEnable; // 0x30(0x10)
	struct ULyraPawnData* DefaultPawnData; // 0x40(0x08)
	struct TArray<struct UGameFeatureAction*> Actions; // 0x48(0x10)
	struct TArray<struct ULyraExperienceActionSet*> ActionSets; // 0x58(0x10)
};

// Class LyraGame.LyraExperienceManager
// Size: 0x80 (Inherited: 0x30)
struct ULyraExperienceManager : UEngineSubsystem {
	char pad_30[0x50]; // 0x30(0x50)
};

// Class LyraGame.LyraExperienceManagerComponent
// Size: 0x128 (Inherited: 0xb0)
struct ULyraExperienceManagerComponent : UGameStateComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	struct ULyraExperienceDefinition* CurrentExperience; // 0xb8(0x08)
	char pad_C0[0x68]; // 0xc0(0x68)

	void OnRep_CurrentExperience(); // Function LyraGame.LyraExperienceManagerComponent.OnRep_CurrentExperience // (Final|Native|Private) // @ game+0x225b030
};

// Class LyraGame.LyraFrontendStateComponent
// Size: 0x158 (Inherited: 0xb0)
struct ULyraFrontendStateComponent : UGameStateComponent {
	char pad_B0[0x10]; // 0xb0(0x10)
	struct TSoftClassPtr<UObject> PressStartScreenClass; // 0xc0(0x28)
	struct TSoftClassPtr<UObject> MainScreenClass; // 0xe8(0x28)
	struct TSoftClassPtr<UObject> FailedToConnectClass; // 0x110(0x28)
	char pad_138[0x20]; // 0x138(0x20)

	void OnUserInitialized(struct UCommonUserInfo* UserInfo, bool bSuccess, struct FText Error, enum class ECommonUserPrivilege RequestedPrivilege, enum class ECommonUserOnlineContext OnlineContext); // Function LyraGame.LyraFrontendStateComponent.OnUserInitialized // (Final|Native|Private) // @ game+0x225b070
	void OnCloudAuthComplete(bool bSuccess); // Function LyraGame.LyraFrontendStateComponent.OnCloudAuthComplete // (Final|Native|Private) // @ game+0x225aed0
};

// Class LyraGame.LyraGameData
// Size: 0xa8 (Inherited: 0x30)
struct ULyraGameData : UPrimaryDataAsset {
	struct TSoftClassPtr<UObject> DamageGameplayEffect_SetByCaller; // 0x30(0x28)
	struct TSoftClassPtr<UObject> HealGameplayEffect_SetByCaller; // 0x58(0x28)
	struct TSoftClassPtr<UObject> DynamicTagGameplayEffect; // 0x80(0x28)
};

// Class LyraGame.LyraGameEngine
// Size: 0xde0 (Inherited: 0xde0)
struct ULyraGameEngine : UGameEngine {
};

// Class LyraGame.LyraGameFeaturePolicy
// Size: 0x38 (Inherited: 0x28)
struct ULyraGameFeaturePolicy : UDefaultGameFeaturesProjectPolicies {
	struct TArray<struct UObject*> Observers; // 0x28(0x10)
};

// Class LyraGame.LyraGameFeature_HotfixManager
// Size: 0x30 (Inherited: 0x28)
struct ULyraGameFeature_HotfixManager : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class LyraGame.LyraGameFeature_AddGameplayCuePaths
// Size: 0x30 (Inherited: 0x28)
struct ULyraGameFeature_AddGameplayCuePaths : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class LyraGame.LyraGameInstance
// Size: 0x1b8 (Inherited: 0x1b0)
struct ULyraGameInstance : UCommonGameInstance {
	struct UCloudClient* CloudClient; // 0x1b0(0x08)
};

// Class LyraGame.LyraGameMode
// Size: 0x340 (Inherited: 0x318)
struct ALyraGameMode : AModularGameModeBase {
	char pad_318[0x18]; // 0x318(0x18)
	struct UAgonesComponent* AgonesSDK; // 0x330(0x08)
	int32_t MinPlayers; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)

	void RequestPlayerRestartNextFrame(struct AController* Controller, bool bForceReset); // Function LyraGame.LyraGameMode.RequestPlayerRestartNextFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x225fe30
	void OnGameServerDetailsChanged(struct FGameServerResponse& Response); // Function LyraGame.LyraGameMode.OnGameServerDetailsChanged // (Final|Native|Public|HasOutParms) // @ game+0x225fa40
};

// Class LyraGame.LyraGameplayAbility
// Size: 0x478 (Inherited: 0x3b8)
struct ULyraGameplayAbility : UGameplayAbility {
	enum class ELyraAbilityActivationPolicy ActivationPolicy; // 0x3b8(0x01)
	enum class ELyraAbilityActivationGroup ActivationGroup; // 0x3b9(0x01)
	char pad_3BA[0x6]; // 0x3ba(0x06)
	struct TArray<struct ULyraAbilityCost*> AdditionalCosts; // 0x3c0(0x10)
	struct TMap<struct FGameplayTag, struct FText> FailureTagToUserFacingMessages; // 0x3d0(0x50)
	struct TMap<struct FGameplayTag, struct UAnimMontage*> FailureTagToAnimMontage; // 0x420(0x50)
	char pad_470[0x8]; // 0x470(0x08)

	void SetCameraMode(struct ULyraCameraMode* CameraMode); // Function LyraGame.LyraGameplayAbility.SetCameraMode // (Final|Native|Public|BlueprintCallable) // @ game+0x225ff00
	void ScriptOnAbilityFailedToActivate(struct FGameplayTagContainer& FailedReason); // Function LyraGame.LyraGameplayAbility.ScriptOnAbilityFailedToActivate // (Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x2552560
	void K2_OnPawnAvatarSet(); // Function LyraGame.LyraGameplayAbility.K2_OnPawnAvatarSet // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void K2_OnAbilityRemoved(); // Function LyraGame.LyraGameplayAbility.K2_OnAbilityRemoved // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void K2_OnAbilityAdded(); // Function LyraGame.LyraGameplayAbility.K2_OnAbilityAdded // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	struct ALyraPlayerController* GetLyraPlayerControllerFromActorInfo(); // Function LyraGame.LyraGameplayAbility.GetLyraPlayerControllerFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x225f050
	struct ALyraCharacter* GetLyraCharacterFromActorInfo(); // Function LyraGame.LyraGameplayAbility.GetLyraCharacterFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x225f020
	struct ULyraAbilitySystemComponent* GetLyraAbilitySystemComponentFromActorInfo(); // Function LyraGame.LyraGameplayAbility.GetLyraAbilitySystemComponentFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x225eff0
	struct ULyraHeroComponent* GetHeroComponentFromActorInfo(); // Function LyraGame.LyraGameplayAbility.GetHeroComponentFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x225efc0
	struct AController* GetControllerFromActorInfo(); // Function LyraGame.LyraGameplayAbility.GetControllerFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x225ef10
	void ClearCameraMode(); // Function LyraGame.LyraGameplayAbility.ClearCameraMode // (Final|Native|Public|BlueprintCallable) // @ game+0x225ed10
	bool ChangeActivationGroup(enum class ELyraAbilityActivationGroup NewGroup); // Function LyraGame.LyraGameplayAbility.ChangeActivationGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x225ec40
	bool CanChangeActivationGroup(enum class ELyraAbilityActivationGroup NewGroup); // Function LyraGame.LyraGameplayAbility.CanChangeActivationGroup // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x225ebb0
};

// Class LyraGame.LyraGamePhaseAbility
// Size: 0x480 (Inherited: 0x478)
struct ULyraGamePhaseAbility : ULyraGameplayAbility {
	struct FGameplayTag GamePhaseTag; // 0x478(0x08)
};

// Class LyraGame.LyraGamePhaseSubsystem
// Size: 0xa0 (Inherited: 0x30)
struct ULyraGamePhaseSubsystem : UWorldSubsystem {
	char pad_30[0x70]; // 0x30(0x70)

	void K2_WhenPhaseStartsOrIsActive(struct FGameplayTag PhaseTag, enum class EPhaseTagMatchType MatchType, struct FDelegate WhenPhaseActive); // Function LyraGame.LyraGamePhaseSubsystem.K2_WhenPhaseStartsOrIsActive // (Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable) // @ game+0x225f570
	void K2_WhenPhaseEnds(struct FGameplayTag PhaseTag, enum class EPhaseTagMatchType MatchType, struct FDelegate WhenPhaseEnd); // Function LyraGame.LyraGamePhaseSubsystem.K2_WhenPhaseEnds // (Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable) // @ game+0x225f440
	void K2_StartPhase(struct ULyraGamePhaseAbility* Phase, struct FDelegate& PhaseEnded); // Function LyraGame.LyraGamePhaseSubsystem.K2_StartPhase // (Final|BlueprintAuthorityOnly|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x225f350
	bool IsPhaseActive(struct FGameplayTag& PhaseTag); // Function LyraGame.LyraGamePhaseSubsystem.IsPhaseActive // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x225f2b0
};

// Class LyraGame.LyraGameplayAbility_Death
// Size: 0x480 (Inherited: 0x478)
struct ULyraGameplayAbility_Death : ULyraGameplayAbility {
	bool bAutoStartDeath; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)

	void StartDeath(); // Function LyraGame.LyraGameplayAbility_Death.StartDeath // (Final|Native|Protected|BlueprintCallable) // @ game+0x225ff90
	void FinishDeath(); // Function LyraGame.LyraGameplayAbility_Death.FinishDeath // (Final|Native|Protected|BlueprintCallable) // @ game+0x225edf0
};

// Class LyraGame.LyraGameplayAbility_FromEquipment
// Size: 0x478 (Inherited: 0x478)
struct ULyraGameplayAbility_FromEquipment : ULyraGameplayAbility {

	struct ULyraInventoryItemInstance* GetAssociatedItem(); // Function LyraGame.LyraGameplayAbility_FromEquipment.GetAssociatedItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x225eee0
	struct ULyraEquipmentInstance* GetAssociatedEquipment(); // Function LyraGame.LyraGameplayAbility_FromEquipment.GetAssociatedEquipment // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x225eeb0
};

// Class LyraGame.LyraGameplayAbility_Interact
// Size: 0x518 (Inherited: 0x478)
struct ULyraGameplayAbility_Interact : ULyraGameplayAbility {
	struct TArray<struct FInteractionOption> CurrentOptions; // 0x478(0x10)
	struct TArray<struct UIndicatorDescriptor*> Indicators; // 0x488(0x10)
	float InteractionScanRate; // 0x498(0x04)
	float InteractionScanRange; // 0x49c(0x04)
	struct TSoftClassPtr<UObject> DefaultInteractionWidgetClass; // 0x4a0(0x28)
	struct TSoftClassPtr<UObject> DefaultChannelledInteractionWidgetClass; // 0x4c8(0x28)
	struct TSoftClassPtr<UObject> DefaultInformationWidgetClass; // 0x4f0(0x28)

	void UpdateInteractions(struct TArray<struct FInteractionOption>& InteractiveOptions); // Function LyraGame.LyraGameplayAbility_Interact.UpdateInteractions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2260010
	void TriggerInteraction(); // Function LyraGame.LyraGameplayAbility_Interact.TriggerInteraction // (Final|Native|Public|BlueprintCallable) // @ game+0x225ffd0
};

// Class LyraGame.LyraGameplayAbility_Jump
// Size: 0x478 (Inherited: 0x478)
struct ULyraGameplayAbility_Jump : ULyraGameplayAbility {

	void CharacterJumpStop(); // Function LyraGame.LyraGameplayAbility_Jump.CharacterJumpStop // (Final|Native|Protected|BlueprintCallable) // @ game+0x225ecf0
	void CharacterJumpStart(); // Function LyraGame.LyraGameplayAbility_Jump.CharacterJumpStart // (Final|Native|Protected|BlueprintCallable) // @ game+0x225ecd0
};

// Class LyraGame.LyraGameplayAbility_RangedWeapon
// Size: 0x480 (Inherited: 0x478)
struct ULyraGameplayAbility_RangedWeapon : ULyraGameplayAbility_FromEquipment {
	char pad_478[0x8]; // 0x478(0x08)

	void StartRangedWeaponTargeting(); // Function LyraGame.LyraGameplayAbility_RangedWeapon.StartRangedWeaponTargeting // (Final|Native|Protected|BlueprintCallable) // @ game+0x225ffb0
	void OnRangedWeaponTargetDataReady(struct FGameplayAbilityTargetDataHandle& TargetData); // Function LyraGame.LyraGameplayAbility_RangedWeapon.OnRangedWeaponTargetDataReady // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	bool IsHitValid(struct FHitResult& Hit); // Function LyraGame.LyraGameplayAbility_RangedWeapon.IsHitValid // (Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x225f1a0
	struct ULyraRangedWeaponInstance* GetWeaponInstance(); // Function LyraGame.LyraGameplayAbility_RangedWeapon.GetWeaponInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x225f0b0
};

// Class LyraGame.LyraGameplayAbility_Reset
// Size: 0x478 (Inherited: 0x478)
struct ULyraGameplayAbility_Reset : ULyraGameplayAbility {
};

// Class LyraGame.LyraGameplayAbility_Vault
// Size: 0x480 (Inherited: 0x478)
struct ULyraGameplayAbility_Vault : ULyraGameplayAbility {
	float VaultScanRate; // 0x478(0x04)
	float VaultScanRange; // 0x47c(0x04)

	void TriggerVault(); // Function LyraGame.LyraGameplayAbility_Vault.TriggerVault // (Final|Native|Public|BlueprintCallable) // @ game+0xacd350
	struct AActor* GetActorFromVaultOption(struct FVaultOption VaultOption); // Function LyraGame.LyraGameplayAbility_Vault.GetActorFromVaultOption // (Final|Native|Public|BlueprintCallable) // @ game+0x225ee10
};

// Class LyraGame.LyraGameplayCueManager
// Size: 0x440 (Inherited: 0x310)
struct ULyraGameplayCueManager : UGameplayCueManager {
	struct TSet<struct UObject*> PreloadedCues; // 0x310(0x50)
	char pad_360[0x50]; // 0x360(0x50)
	struct TSet<struct UObject*> AlwaysLoadedCues; // 0x3b0(0x50)
	char pad_400[0x40]; // 0x400(0x40)
};

// Class LyraGame.LyraGameSession
// Size: 0x290 (Inherited: 0x290)
struct ALyraGameSession : AGameSession {
};

// Class LyraGame.LyraGameSettingRegistry
// Size: 0xd8 (Inherited: 0xb0)
struct ULyraGameSettingRegistry : UGameSettingRegistry {
	struct UGameSettingCollection* VideoSettings; // 0xb0(0x08)
	struct UGameSettingCollection* AudioSettings; // 0xb8(0x08)
	struct UGameSettingCollection* GameplaySettings; // 0xc0(0x08)
	struct UGameSettingCollection* MouseAndKeyboardSettings; // 0xc8(0x08)
	struct UGameSettingCollection* GamepadSettings; // 0xd0(0x08)
};

// Class LyraGame.LyraGameState
// Size: 0x2e8 (Inherited: 0x2c8)
struct ALyraGameState : AModularGameStateBase {
	char pad_2C8[0x8]; // 0x2c8(0x08)
	struct ULyraExperienceManagerComponent* ExperienceManagerComponent; // 0x2d0(0x08)
	struct ULyraAbilitySystemComponent* AbilitySystemComponent; // 0x2d8(0x08)
	float ServerFPS; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)

	void MulticastReliableMessageToClients(struct FLyraVerbMessage Message); // Function LyraGame.LyraGameState.MulticastReliableMessageToClients // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x225f870
	void MulticastMessageToClients(struct FLyraVerbMessage Message); // Function LyraGame.LyraGameState.MulticastMessageToClients // (Net|Native|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x225f6a0
	struct ULyraAbilitySystemComponent* GetLyraAbilitySystemComponent(); // Function LyraGame.LyraGameState.GetLyraAbilitySystemComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19fa970
};

// Class LyraGame.LyraGameViewportClient
// Size: 0x3e0 (Inherited: 0x3e0)
struct ULyraGameViewportClient : UCommonGameViewportClient {
};

// Class LyraGame.LyraGlobalAbilitySystem
// Size: 0xe0 (Inherited: 0x30)
struct ULyraGlobalAbilitySystem : UWorldSubsystem {
	struct TMap<struct UGameplayAbility*, struct FGlobalAppliedAbilityList> AppliedAbilities; // 0x30(0x50)
	struct TMap<struct UGameplayEffect*, struct FGlobalAppliedEffectList> AppliedEffects; // 0x80(0x50)
	struct TArray<struct ULyraAbilitySystemComponent*> RegisteredASCs; // 0xd0(0x10)

	void RemoveEffectFromAll(struct UGameplayEffect* Effect); // Function LyraGame.LyraGlobalAbilitySystem.RemoveEffectFromAll // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x225fda0
	void RemoveAbilityFromAll(struct UGameplayAbility* Ability); // Function LyraGame.LyraGlobalAbilitySystem.RemoveAbilityFromAll // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x225fd10
	void ApplyEffectToAll(struct UGameplayEffect* Effect); // Function LyraGame.LyraGlobalAbilitySystem.ApplyEffectToAll // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x225eb20
	void ApplyAbilityToAll(struct UGameplayAbility* Ability); // Function LyraGame.LyraGlobalAbilitySystem.ApplyAbilityToAll // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x225ea90
};

// Class LyraGame.LyraHealExecution
// Size: 0x40 (Inherited: 0x40)
struct ULyraHealExecution : UGameplayEffectExecutionCalculation {
};

// Class LyraGame.LyraHealthComponent
// Size: 0x108 (Inherited: 0xb0)
struct ULyraHealthComponent : UGameFrameworkComponent {
	struct FMulticastInlineDelegate OnHealthChanged; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnMaxHealthChanged; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnDeathStarted; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnDeathFinished; // 0xe0(0x10)
	struct ULyraAbilitySystemComponent* AbilitySystemComponent; // 0xf0(0x08)
	struct ULyraHealthSet* HealthSet; // 0xf8(0x08)
	enum class ELyraDeathState DeathState; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)

	void UninitializeFromAbilitySystem(); // Function LyraGame.LyraHealthComponent.UninitializeFromAbilitySystem // (Final|Native|Public|BlueprintCallable) // @ game+0x225fff0
	void OnRep_DeathState(enum class ELyraDeathState OldDeathState); // Function LyraGame.LyraHealthComponent.OnRep_DeathState // (Native|Protected) // @ game+0x225fc90
	bool IsDeadOrDying(); // Function LyraGame.LyraHealthComponent.IsDeadOrDying // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x225f170
	void InitializeWithAbilitySystem(struct ULyraAbilitySystemComponent* InASC); // Function LyraGame.LyraHealthComponent.InitializeWithAbilitySystem // (Final|Native|Public|BlueprintCallable) // @ game+0x225f0e0
	float GetMaxHealth(); // Function LyraGame.LyraHealthComponent.GetMaxHealth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x225f080
	float GetHealthNormalized(); // Function LyraGame.LyraHealthComponent.GetHealthNormalized // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x225ef90
	float GetHealth(); // Function LyraGame.LyraHealthComponent.GetHealth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x225ef60
	enum class ELyraDeathState GetDeathState(); // Function LyraGame.LyraHealthComponent.GetDeathState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x225ef40
	struct ULyraHealthComponent* FindHealthComponent(struct AActor* Actor); // Function LyraGame.LyraHealthComponent.FindHealthComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x225ed30
};

// Class LyraGame.LyraHealthSet
// Size: 0x90 (Inherited: 0x30)
struct ULyraHealthSet : ULyraAttributeSet {
	char pad_30[0x18]; // 0x30(0x18)
	struct FGameplayAttributeData Health; // 0x48(0x10)
	struct FGameplayAttributeData MaxHealth; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)
	struct FGameplayAttributeData Healing; // 0x70(0x10)
	struct FGameplayAttributeData Damage; // 0x80(0x10)

	void OnRep_MaxHealth(struct FGameplayAttributeData& OldValue); // Function LyraGame.LyraHealthSet.OnRep_MaxHealth // (Final|Native|Protected|HasOutParms) // @ game+0x2268190
	void OnRep_Health(struct FGameplayAttributeData& OldValue); // Function LyraGame.LyraHealthSet.OnRep_Health // (Final|Native|Protected|HasOutParms) // @ game+0x22680f0
};

// Class LyraGame.LyraPawnComponent
// Size: 0xb8 (Inherited: 0xb0)
struct ULyraPawnComponent : UPawnComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class LyraGame.LyraHeroComponent
// Size: 0xf0 (Inherited: 0xb8)
struct ULyraHeroComponent : ULyraPawnComponent {
	struct TArray<struct FMappableConfigPair> DefaultInputConfigs; // 0xb8(0x10)
	char pad_C8[0x28]; // 0xc8(0x28)

	struct ULyraHeroComponent* FindHeroComponent(struct AActor* Actor); // Function LyraGame.LyraHeroComponent.FindHeroComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x22679d0
};

// Class LyraGame.LyraHitConfirmingItemAbility
// Size: 0x480 (Inherited: 0x478)
struct ULyraHitConfirmingItemAbility : ULyraGameplayAbility_FromEquipment {
	char pad_478[0x8]; // 0x478(0x08)

	void SendPotentialHits(struct TArray<struct FHitResult> Hits); // Function LyraGame.LyraHitConfirmingItemAbility.SendPotentialHits // (Final|Native|Protected|BlueprintCallable) // @ game+0x2268420
	void OnTargetDataReady(struct FGameplayAbilityTargetDataHandle& TargetData); // Function LyraGame.LyraHitConfirmingItemAbility.OnTargetDataReady // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	bool IsTargetDataValid(struct FGameplayAbilityTargetDataHandle& InData); // Function LyraGame.LyraHitConfirmingItemAbility.IsTargetDataValid // (Native|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2267de0
	bool IsHitValid(struct FHitResult& Hit); // Function LyraGame.LyraHitConfirmingItemAbility.IsHitValid // (Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x225f1a0
};

// Class LyraGame.LyraHotfixManager
// Size: 0x270 (Inherited: 0x238)
struct ULyraHotfixManager : UOnlineHotfixManager {
	char pad_238[0x38]; // 0x238(0x38)
};

// Class LyraGame.LyraHUD
// Size: 0x368 (Inherited: 0x368)
struct ALyraHUD : AHUD {
};

// Class LyraGame.LyraHUDLayout
// Size: 0x3a8 (Inherited: 0x380)
struct ULyraHUDLayout : ULyraActivatableWidget {
	struct TSoftClassPtr<UObject> EscapeMenuClass; // 0x380(0x28)
};

// Class LyraGame.LyraIndicatorManagerComponent
// Size: 0xf0 (Inherited: 0xb0)
struct ULyraIndicatorManagerComponent : UControllerComponent {
	char pad_B0[0x30]; // 0xb0(0x30)
	struct TArray<struct UIndicatorDescriptor*> Indicators; // 0xe0(0x10)

	void RemoveIndicator(struct UIndicatorDescriptor* IndicatorDescriptor); // Function LyraGame.LyraIndicatorManagerComponent.RemoveIndicator // (Final|Native|Public|BlueprintCallable) // @ game+0x2268230
	void AddIndicator(struct UIndicatorDescriptor* IndicatorDescriptor); // Function LyraGame.LyraIndicatorManagerComponent.AddIndicator // (Final|Native|Public|BlueprintCallable) // @ game+0x2267480
};

// Class LyraGame.LyraInputComboComponent
// Size: 0xe0 (Inherited: 0xb0)
struct ULyraInputComboComponent : UActorComponent {
	struct TArray<struct FComboStep> ComboSteps; // 0xb0(0x10)
	char pad_C0[0x20]; // 0xc0(0x20)

	void ScriptOnComboCompleted(); // Function LyraGame.LyraInputComboComponent.ScriptOnComboCompleted // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ScriptOnComboCanceled(); // Function LyraGame.LyraInputComboComponent.ScriptOnComboCanceled // (Event|Protected|BlueprintEvent) // @ game+0x2552560
};

// Class LyraGame.LyraInputComponent
// Size: 0x168 (Inherited: 0x168)
struct ULyraInputComponent : UEnhancedInputComponent {
};

// Class LyraGame.LyraInputConfig
// Size: 0x50 (Inherited: 0x30)
struct ULyraInputConfig : UDataAsset {
	struct TArray<struct FLyraInputAction> NativeInputActions; // 0x30(0x10)
	struct TArray<struct FLyraInputAction> AbilityInputActions; // 0x40(0x10)
};

// Class LyraGame.LyraSettingBasedScalar
// Size: 0x80 (Inherited: 0x28)
struct ULyraSettingBasedScalar : UInputModifier {
	struct FName XAxisScalarSettingName; // 0x28(0x08)
	struct FName YAxisScalarSettingName; // 0x30(0x08)
	struct FName ZAxisScalarSettingName; // 0x38(0x08)
	struct FVector MaxValueClamp; // 0x40(0x18)
	struct FVector MinValueClamp; // 0x58(0x18)
	char pad_70[0x10]; // 0x70(0x10)
};

// Class LyraGame.LyraInputModifierDeadZone
// Size: 0x38 (Inherited: 0x28)
struct ULyraInputModifierDeadZone : UInputModifier {
	enum class EDeadZoneType Type; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float UpperThreshold; // 0x2c(0x04)
	enum class EDeadzoneStick DeadzoneStick; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class LyraGame.LyraInputModifierGamepadSensitivity
// Size: 0x38 (Inherited: 0x28)
struct ULyraInputModifierGamepadSensitivity : UInputModifier {
	enum class ELyraTargetingType TargetingType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct ULyraAimSensitivityData* SensitivityLevelTable; // 0x30(0x08)
};

// Class LyraGame.LyraInputModifierAimInversion
// Size: 0x28 (Inherited: 0x28)
struct ULyraInputModifierAimInversion : UInputModifier {
};

// Class LyraGame.LyraInventoryItemDefinition
// Size: 0x50 (Inherited: 0x28)
struct ULyraInventoryItemDefinition : UObject {
	struct FText DisplayName; // 0x28(0x18)
	struct TArray<struct ULyraInventoryItemFragment*> Fragments; // 0x40(0x10)
};

// Class LyraGame.LyraInventoryFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULyraInventoryFunctionLibrary : UBlueprintFunctionLibrary {

	struct ULyraInventoryItemFragment* FindItemDefinitionFragment(struct ULyraInventoryItemDefinition* ItemDef, struct ULyraInventoryItemFragment* FragmentClass); // Function LyraGame.LyraInventoryFunctionLibrary.FindItemDefinitionFragment // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x2267a90
};

// Class LyraGame.LyraInventoryItemInstance
// Size: 0x198 (Inherited: 0x28)
struct ULyraInventoryItemInstance : UObject {
	struct FGameplayTagStackContainer StatTags; // 0x28(0x168)
	struct ULyraInventoryItemDefinition* ItemDef; // 0x190(0x08)

	void RemoveStatTagStack(struct FGameplayTag Tag, int32_t StackCount); // Function LyraGame.LyraInventoryItemInstance.RemoveStatTagStack // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x2268350
	bool HasStatTag(struct FGameplayTag Tag); // Function LyraGame.LyraInventoryItemInstance.HasStatTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2267d40
	int32_t GetStatTagStackCount(struct FGameplayTag Tag); // Function LyraGame.LyraInventoryItemInstance.GetStatTagStackCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2267ca0
	struct ULyraInventoryItemDefinition* GetItemDef(); // Function LyraGame.LyraInventoryItemInstance.GetItemDef // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2267be0
	struct ULyraInventoryItemFragment* FindFragmentByClass(struct ULyraInventoryItemFragment* FragmentClass); // Function LyraGame.LyraInventoryItemInstance.FindFragmentByClass // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x2267930
	void AddStatTagStack(struct FGameplayTag Tag, int32_t StackCount); // Function LyraGame.LyraInventoryItemInstance.AddStatTagStack // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x22676f0
};

// Class LyraGame.LyraInventoryManagerComponent
// Size: 0x1d0 (Inherited: 0xb0)
struct ULyraInventoryManagerComponent : UActorComponent {
	struct FLyraInventoryList InventoryList; // 0xb0(0x120)

	void RemoveItemInstance(struct ULyraInventoryItemInstance* ItemInstance); // Function LyraGame.LyraInventoryManagerComponent.RemoveItemInstance // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x22682c0
	struct TArray<struct ULyraInventoryItemInstance*> GetAllItems(); // Function LyraGame.LyraInventoryManagerComponent.GetAllItems // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x2267b60
	struct ULyraInventoryItemInstance* FindFirstItemStackByDefinition(struct ULyraInventoryItemDefinition* ItemDef); // Function LyraGame.LyraInventoryManagerComponent.FindFirstItemStackByDefinition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2267890
	bool CanAddItemDefinition(struct ULyraInventoryItemDefinition* ItemDef, int32_t StackCount); // Function LyraGame.LyraInventoryManagerComponent.CanAddItemDefinition // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x22677c0
	void AddItemInstance(struct ULyraInventoryItemInstance* ItemInstance); // Function LyraGame.LyraInventoryManagerComponent.AddItemInstance // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1fb5370
	struct ULyraInventoryItemInstance* AddItemDefinition(struct ULyraInventoryItemDefinition* ItemDef, int32_t StackCount); // Function LyraGame.LyraInventoryManagerComponent.AddItemDefinition // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x2267510
};

// Class LyraGame.LyraSimulatedInputWidget
// Size: 0x2f8 (Inherited: 0x2b8)
struct ULyraSimulatedInputWidget : UCommonUserWidget {
	struct UCommonHardwareVisibilityBorder* CommonVisibilityBorder; // 0x2b8(0x08)
	struct UInputAction* AssociatedAction; // 0x2c0(0x08)
	struct FKey FallbackBindingKey; // 0x2c8(0x18)
	char pad_2E0[0x18]; // 0x2e0(0x18)

	void InputKeyValue2D(struct FVector2D& Value); // Function LyraGame.LyraSimulatedInputWidget.InputKeyValue2D // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2277ca0
	void InputKeyValue(struct FVector& Value); // Function LyraGame.LyraSimulatedInputWidget.InputKeyValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2277d30
	struct FKey GetSimulatedKey(); // Function LyraGame.LyraSimulatedInputWidget.GetSimulatedKey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2277950
	struct UEnhancedInputLocalPlayerSubsystem* GetEnhancedInputSubsystem(); // Function LyraGame.LyraSimulatedInputWidget.GetEnhancedInputSubsystem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2277660
	struct UInputAction* GetAssociatedAction(); // Function LyraGame.LyraSimulatedInputWidget.GetAssociatedAction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22775e0
	void FlushSimulatedInput(); // Function LyraGame.LyraSimulatedInputWidget.FlushSimulatedInput // (Final|Native|Public|BlueprintCallable) // @ game+0x22775a0
};

// Class LyraGame.LyraJoystickWidget
// Size: 0x338 (Inherited: 0x2f8)
struct ULyraJoystickWidget : ULyraSimulatedInputWidget {
	float StickRange; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct UImage* JoystickBackground; // 0x300(0x08)
	struct UImage* JoystickForeground; // 0x308(0x08)
	bool bNegateYAxis; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct FVector2D TouchOrigin; // 0x318(0x10)
	struct FVector2D StickVector; // 0x328(0x10)
};

// Class LyraGame.LyraListView
// Size: 0xbf0 (Inherited: 0xbe0)
struct ULyraListView : UCommonListView {
	struct TArray<struct ULyraWidgetFactory*> FactoryRules; // 0xbe0(0x10)
};

// Class LyraGame.LyraLoadingScreenSubsystem
// Size: 0x48 (Inherited: 0x30)
struct ULyraLoadingScreenSubsystem : UGameInstanceSubsystem {
	struct FMulticastInlineDelegate OnLoadingScreenWidgetChanged; // 0x30(0x10)
	struct UUserWidget* LoadingScreenWidgetClass; // 0x40(0x08)

	void SetLoadingScreenContentWidget(struct UUserWidget* NewWidgetClass); // Function LyraGame.LyraLoadingScreenSubsystem.SetLoadingScreenContentWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x22684e0
	struct UUserWidget* GetLoadingScreenContentWidget(); // Function LyraGame.LyraLoadingScreenSubsystem.GetLoadingScreenContentWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2267c00
};

// Class LyraGame.LyraLobbyBackground
// Size: 0x58 (Inherited: 0x30)
struct ULyraLobbyBackground : UPrimaryDataAsset {
	struct TSoftObjectPtr<UWorld> BackgroundLevel; // 0x30(0x28)
};

// Class LyraGame.LyraLocalPlayer
// Size: 0x320 (Inherited: 0x2f0)
struct ULyraLocalPlayer : UCommonLocalPlayer {
	char pad_2F0[0x8]; // 0x2f0(0x08)
	struct ULyraSettingsShared* SharedSettings; // 0x2f8(0x08)
	struct UInputMappingContext* InputMappingContext; // 0x300(0x08)
	struct FMulticastInlineDelegate OnTeamChangedDelegate; // 0x308(0x10)
	struct TWeakObjectPtr<struct APlayerController> LastBoundPC; // 0x318(0x08)

	void OnControllerChangedTeam(struct UObject* TeamAgent, int32_t OldTeam, int32_t NewTeam); // Function LyraGame.LyraLocalPlayer.OnControllerChangedTeam // (Final|Native|Private) // @ game+0x2267fe0
	void OnCompletedAudioDeviceSwap(struct FSwapAudioOutputResult& SwapResult); // Function LyraGame.LyraLocalPlayer.OnCompletedAudioDeviceSwap // (Final|Native|Protected|HasOutParms) // @ game+0x2267f20
	struct ULyraSettingsShared* GetSharedSettings(); // Function LyraGame.LyraLocalPlayer.GetSharedSettings // (Final|Native|Public|Const) // @ game+0x2267c70
	struct ULyraSettingsLocal* GetLocalSettings(); // Function LyraGame.LyraLocalPlayer.GetLocalSettings // (Final|Native|Public|Const) // @ game+0x2267c40
};

// Class LyraGame.LyraNumberPopComponent
// Size: 0xb0 (Inherited: 0xb0)
struct ULyraNumberPopComponent : UControllerComponent {

	void AddNumberPop(struct FLyraNumberPopRequest& NewRequest); // Function LyraGame.LyraNumberPopComponent.AddNumberPop // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x22675e0
};

// Class LyraGame.LyraNumberPopComponent_MeshText
// Size: 0x1a0 (Inherited: 0xb0)
struct ULyraNumberPopComponent_MeshText : ULyraNumberPopComponent {
	struct TArray<struct ULyraDamagePopStyle*> Styles; // 0xb0(0x10)
	float ComponentLifespan; // 0xc0(0x04)
	float DistanceFromCameraBeforeDoublingSize; // 0xc4(0x04)
	float CriticalHitSizeMultiplier; // 0xc8(0x04)
	float FontXSize; // 0xcc(0x04)
	float FontYSize; // 0xd0(0x04)
	float SpacingPercentageForOnes; // 0xd4(0x04)
	float NumberOfNumberRotations; // 0xd8(0x04)
	struct FName SignDigitParameterName; // 0xdc(0x08)
	struct FName ColorParameterName; // 0xe4(0x08)
	struct FName AnimationLifespanParameterName; // 0xec(0x08)
	struct FName IsCriticalHitParameterName; // 0xf4(0x08)
	struct FName MoveToCameraParameterName; // 0xfc(0x08)
	char pad_104[0x4]; // 0x104(0x04)
	struct TArray<struct FName> PositionParameterNames; // 0x108(0x10)
	struct TArray<struct FName> ScaleRotationAngleParameterNames; // 0x118(0x10)
	struct TArray<struct FName> DurationParameterNames; // 0x128(0x10)
	struct TMap<struct UStaticMesh*, struct FPooledNumberPopComponentList> PooledComponentMap; // 0x138(0x50)
	struct TArray<struct FLiveNumberPopEntry> LiveComponents; // 0x188(0x10)
	char pad_198[0x8]; // 0x198(0x08)
};

// Class LyraGame.LyraNumberPopComponent_NiagaraText
// Size: 0xd0 (Inherited: 0xb0)
struct ULyraNumberPopComponent_NiagaraText : ULyraNumberPopComponent {
	char pad_B0[0x10]; // 0xb0(0x10)
	struct ULyraDamagePopStyleNiagara* Style; // 0xc0(0x08)
	struct UNiagaraComponent* NiagaraComp; // 0xc8(0x08)
};

// Class LyraGame.LyraPawn
// Size: 0x318 (Inherited: 0x2f8)
struct ALyraPawn : AModularPawn {
	char pad_2F8[0x8]; // 0x2f8(0x08)
	struct FGenericTeamId MyTeamID; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct FMulticastInlineDelegate OnTeamChangedDelegate; // 0x308(0x10)

	void OnRep_MyTeamID(struct FGenericTeamId OldTeamID); // Function LyraGame.LyraPawn.OnRep_MyTeamID // (Final|Native|Private) // @ game+0x226f6f0
	void OnControllerChangedTeam(struct UObject* TeamAgent, int32_t OldTeam, int32_t NewTeam); // Function LyraGame.LyraPawn.OnControllerChangedTeam // (Final|Native|Private) // @ game+0x226f5e0
};

// Class LyraGame.LyraReadyInterface
// Size: 0x28 (Inherited: 0x28)
struct ULyraReadyInterface : UInterface {
};

// Class LyraGame.LyraPawnComponent_CharacterParts
// Size: 0x208 (Inherited: 0xb0)
struct ULyraPawnComponent_CharacterParts : UPawnComponent {
	struct FMulticastInlineDelegate OnCharacterPartsChanged; // 0xb0(0x10)
	struct FLyraCharacterPartList CharacterPartList; // 0xc0(0x128)
	struct FLyraAnimBodyStyleSelectionSet BodyMeshes; // 0x1e8(0x20)

	void UpdateBodyStyle(); // Function LyraGame.LyraPawnComponent_CharacterParts.UpdateBodyStyle // (Final|Native|Public|BlueprintCallable) // @ game+0x226fa80
	void RemoveCharacterPart(struct FLyraCharacterPartHandle Handle); // Function LyraGame.LyraPawnComponent_CharacterParts.RemoveCharacterPart // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x226f7b0
	void RemoveAllCharacterParts(); // Function LyraGame.LyraPawnComponent_CharacterParts.RemoveAllCharacterParts // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x226f790
	struct FGameplayTagContainer GetCombinedTags(struct FGameplayTag RequiredPrefix); // Function LyraGame.LyraPawnComponent_CharacterParts.GetCombinedTags // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const) // @ game+0x226f360
	struct TArray<struct AActor*> GetCharacterPartActors(); // Function LyraGame.LyraPawnComponent_CharacterParts.GetCharacterPartActors // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const) // @ game+0x226f2e0
	struct FLyraCharacterPartHandle AddCharacterPart(struct FLyraCharacterPart& NewPart); // Function LyraGame.LyraPawnComponent_CharacterParts.AddCharacterPart // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x226f0b0
};

// Class LyraGame.LyraPawnData
// Size: 0x60 (Inherited: 0x30)
struct ULyraPawnData : UPrimaryDataAsset {
	struct APawn* PawnClass; // 0x30(0x08)
	struct TArray<struct ULyraAbilitySet*> AbilitySets; // 0x38(0x10)
	struct ULyraAbilityTagRelationshipMapping* TagRelationshipMapping; // 0x48(0x08)
	struct ULyraInputConfig* InputConfig; // 0x50(0x08)
	struct ULyraCameraMode* DefaultCameraMode; // 0x58(0x08)
};

// Class LyraGame.LyraPawnExtensionComponent
// Size: 0x128 (Inherited: 0xb8)
struct ULyraPawnExtensionComponent : ULyraPawnComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FMulticastInlineDelegate BP_OnPawnReadyToInitialize; // 0xd0(0x10)
	char pad_E0[0x30]; // 0xe0(0x30)
	struct ULyraPawnData* PawnData; // 0x110(0x08)
	struct ULyraAbilitySystemComponent* AbilitySystemComponent; // 0x118(0x08)
	char pad_120[0x8]; // 0x120(0x08)

	void OnRep_PawnData(); // Function LyraGame.LyraPawnExtensionComponent.OnRep_PawnData // (Final|Native|Protected) // @ game+0x226f770
	bool IsPawnReadyToInitialize(); // Function LyraGame.LyraPawnExtensionComponent.IsPawnReadyToInitialize // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x226f5b0
	struct ULyraAbilitySystemComponent* GetLyraAbilitySystemComponent(); // Function LyraGame.LyraPawnExtensionComponent.GetLyraAbilitySystemComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a00460
	struct ULyraPawnExtensionComponent* FindPawnExtensionComponent(struct AActor* Actor); // Function LyraGame.LyraPawnExtensionComponent.FindPawnExtensionComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x226f190
};

// Class LyraGame.LyraPlatformSpecificRenderingSettings
// Size: 0x78 (Inherited: 0x40)
struct ULyraPlatformSpecificRenderingSettings : UPlatformSettings {
	struct FString DefaultDeviceProfileSuffix; // 0x40(0x10)
	struct TArray<struct FLyraQualityDeviceProfileVariant> UserFacingDeviceProfileOptions; // 0x50(0x10)
	bool bSupportsGranularVideoQualitySettings; // 0x60(0x01)
	bool bSupportsAutomaticVideoQualityBenchmark; // 0x61(0x01)
	enum class ELyraFramePacingMode FramePacingMode; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
	struct TArray<int32_t> MobileFrameRateLimits; // 0x68(0x10)
};

// Class LyraGame.LyraPerformanceSettings
// Size: 0x68 (Inherited: 0x38)
struct ULyraPerformanceSettings : UDeveloperSettingsBackedByCVars {
	struct FPerPlatformSettings PerPlatformSettings; // 0x38(0x10)
	struct TArray<int32_t> DesktopFrameRateLimits; // 0x48(0x10)
	struct TArray<struct FLyraPerformanceStatGroup> UserFacingPerformanceStats; // 0x58(0x10)
};

// Class LyraGame.LyraPerformanceStatSubsystem
// Size: 0x40 (Inherited: 0x30)
struct ULyraPerformanceStatSubsystem : UGameInstanceSubsystem {
	char pad_30[0x10]; // 0x30(0x10)

	double GetCachedStat(enum class ELyraDisplayablePerformanceStat Stat); // Function LyraGame.LyraPerformanceStatSubsystem.GetCachedStat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x226f250
};

// Class LyraGame.LyraPerfStatContainerBase
// Size: 0x2c0 (Inherited: 0x2b8)
struct ULyraPerfStatContainerBase : UCommonUserWidget {
	enum class ELyraStatDisplayMode StatDisplayModeFilter; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)

	void UpdateVisibilityOfChildren(); // Function LyraGame.LyraPerfStatContainerBase.UpdateVisibilityOfChildren // (Final|Native|Public|BlueprintCallable) // @ game+0x226fb30
};

// Class LyraGame.LyraPerfStatWidgetBase
// Size: 0x2c8 (Inherited: 0x2b8)
struct ULyraPerfStatWidgetBase : UCommonUserWidget {
	struct ULyraPerformanceStatSubsystem* CachedStatSubsystem; // 0x2b8(0x08)
	enum class ELyraDisplayablePerformanceStat StatToDisplay; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)

	enum class ELyraDisplayablePerformanceStat GetStatToDisplay(); // Function LyraGame.LyraPerfStatWidgetBase.GetStatToDisplay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x226f560
	double FetchStatValue(); // Function LyraGame.LyraPerfStatWidgetBase.FetchStatValue // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x226f160
};

// Class LyraGame.LyraPickupDefinition
// Size: 0x68 (Inherited: 0x30)
struct ULyraPickupDefinition : UDataAsset {
	struct ULyraInventoryItemDefinition* InventoryItemDefinition; // 0x30(0x08)
	struct UStaticMesh* DisplayMesh; // 0x38(0x08)
	int32_t SpawnCoolDownSeconds; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct USoundBase* PickedUpSound; // 0x48(0x08)
	struct USoundBase* RespawnedSound; // 0x50(0x08)
	struct UNiagaraSystem* PickedUpEffect; // 0x58(0x08)
	struct UNiagaraSystem* RespawnedEffect; // 0x60(0x08)
};

// Class LyraGame.LyraWeaponPickupDefinition
// Size: 0x98 (Inherited: 0x68)
struct ULyraWeaponPickupDefinition : ULyraPickupDefinition {
	struct FVector WeaponMeshOffset; // 0x68(0x18)
	struct FVector WeaponMeshScale; // 0x80(0x18)
};

// Class LyraGame.LyraPlatformEmulationSettings
// Size: 0x90 (Inherited: 0x38)
struct ULyraPlatformEmulationSettings : UDeveloperSettingsBackedByCVars {
	struct FGameplayTagContainer AdditionalPlatformTraitsToEnable; // 0x38(0x20)
	struct FGameplayTagContainer AdditionalPlatformTraitsToSuppress; // 0x58(0x20)
	struct FName PretendPlatform; // 0x78(0x08)
	struct FName PretendBaseDeviceProfile; // 0x80(0x08)
	bool bApplyFrameRateSettingsInPIE; // 0x88(0x01)
	bool bApplyFrontEndPerformanceOptionsInPIE; // 0x89(0x01)
	bool bApplyDeviceProfilesInPIE; // 0x8a(0x01)
	char pad_8B[0x5]; // 0x8b(0x05)

	struct TArray<struct FName> GetKnownPlatformIds(); // Function LyraGame.LyraPlatformEmulationSettings.GetKnownPlatformIds // (Final|Native|Private|Const) // @ game+0x226f450
	struct TArray<struct FName> GetKnownDeviceProfiles(); // Function LyraGame.LyraPlatformEmulationSettings.GetKnownDeviceProfiles // (Final|Native|Private|Const) // @ game+0x226f450
};

// Class LyraGame.LyraPlayerBotController
// Size: 0x3c0 (Inherited: 0x3a0)
struct ALyraPlayerBotController : AModularAIController {
	char pad_3A0[0x8]; // 0x3a0(0x08)
	struct FMulticastInlineDelegate OnTeamChangedDelegate; // 0x3a8(0x10)
	struct APlayerState* LastSeenPlayerState; // 0x3b8(0x08)

	void UpdateTeamAttitude(struct UAIPerceptionComponent* AIPerception); // Function LyraGame.LyraPlayerBotController.UpdateTeamAttitude // (Final|Native|Public|BlueprintCallable) // @ game+0x226faa0
	void OnPlayerStateChangedTeam(struct UObject* TeamAgent, int32_t OldTeam, int32_t NewTeam); // Function LyraGame.LyraPlayerBotController.OnPlayerStateChangedTeam // (Final|Native|Private) // @ game+0x2267fe0
};

// Class LyraGame.LyraPlayerCameraManager
// Size: 0x32e0 (Inherited: 0x32d0)
struct ALyraPlayerCameraManager : APlayerCameraManager {
	struct ULyraUICameraManagerComponent* UICamera; // 0x32d0(0x08)
	char pad_32D8[0x8]; // 0x32d8(0x08)
};

// Class LyraGame.LyraPlayerController
// Size: 0x7f8 (Inherited: 0x7c8)
struct ALyraPlayerController : ACommonPlayerController {
	char pad_7C8[0x10]; // 0x7c8(0x10)
	struct FMulticastInlineDelegate OnTeamChangedDelegate; // 0x7d8(0x10)
	struct APlayerState* LastSeenPlayerState; // 0x7e8(0x08)
	char pad_7F0[0x8]; // 0x7f0(0x08)

	void StopSpeaking(); // Function LyraGame.LyraPlayerController.StopSpeaking // (Final|Native|Public|BlueprintCallable) // @ game+0x226fa60
	void startSpeaking(); // Function LyraGame.LyraPlayerController.startSpeaking // (Final|Native|Public|BlueprintCallable) // @ game+0x226fa40
	void SetIsAutoRunning(bool bEnabled); // Function LyraGame.LyraPlayerController.SetIsAutoRunning // (Final|Native|Public|BlueprintCallable) // @ game+0x226f9b0
	void ServerCheatAll(struct FString Msg); // Function LyraGame.LyraPlayerController.ServerCheatAll // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x226f8f0
	void ServerCheat(struct FString Msg); // Function LyraGame.LyraPlayerController.ServerCheat // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x226f830
	void OnPlayerStateChangedTeam(struct UObject* TeamAgent, int32_t OldTeam, int32_t NewTeam); // Function LyraGame.LyraPlayerController.OnPlayerStateChangedTeam // (Final|Native|Private) // @ game+0x2267fe0
	void K2_OnStartAutoRun(); // Function LyraGame.LyraPlayerController.K2_OnStartAutoRun // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void K2_OnEndAutoRun(); // Function LyraGame.LyraPlayerController.K2_OnEndAutoRun // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	bool HasClientAcknowledgedPossessedPawn(); // Function LyraGame.LyraPlayerController.HasClientAcknowledgedPossessedPawn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x226f580
	struct ALyraPlayerState* GetLyraPlayerState(); // Function LyraGame.LyraPlayerController.GetLyraPlayerState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x226f530
	struct ALyraHUD* GetLyraHUD(); // Function LyraGame.LyraPlayerController.GetLyraHUD // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x226f500
	struct ULyraAbilitySystemComponent* GetLyraAbilitySystemComponent(); // Function LyraGame.LyraPlayerController.GetLyraAbilitySystemComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x226f4d0
	bool GetIsAutoRunning(); // Function LyraGame.LyraPlayerController.GetIsAutoRunning // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x226f420
};

// Class LyraGame.LyraReplayPlayerController
// Size: 0x7f8 (Inherited: 0x7f8)
struct ALyraReplayPlayerController : ALyraPlayerController {
};

// Class LyraGame.LyraPlayerStart
// Size: 0x2e0 (Inherited: 0x2a8)
struct ALyraPlayerStart : APlayerStart {
	struct AController* ClaimingController; // 0x2a8(0x08)
	float ExpirationCheckInterval; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct FGameplayTagContainer StartPointTags; // 0x2b8(0x20)
	char pad_2D8[0x8]; // 0x2d8(0x08)
};

// Class LyraGame.LyraQuickBarComponent
// Size: 0xd8 (Inherited: 0xb0)
struct ULyraQuickBarComponent : UControllerComponent {
	int32_t NumSlots; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<struct ULyraInventoryItemInstance*> Slots; // 0xb8(0x10)
	int32_t ActiveSlotIndex; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct ULyraEquipmentInstance* EquippedItem; // 0xd0(0x08)

	int32_t UnequipItemInActiveSlot(); // Function LyraGame.LyraQuickBarComponent.UnequipItemInActiveSlot // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x2274450
	void SetActiveSlotIndex(int32_t NewIndex); // Function LyraGame.LyraQuickBarComponent.SetActiveSlotIndex // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x2273b10
	struct ULyraInventoryItemInstance* RemoveItemFromSlot(int32_t SlotIndex, bool ShiftAllToLeft); // Function LyraGame.LyraQuickBarComponent.RemoveItemFromSlot // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x2273860
	void OnRep_Slots(); // Function LyraGame.LyraQuickBarComponent.OnRep_Slots // (Final|Native|Protected) // @ game+0x22737b0
	void OnRep_ActiveSlotIndex(); // Function LyraGame.LyraQuickBarComponent.OnRep_ActiveSlotIndex // (Final|Native|Protected) // @ game+0x2273710
	struct TArray<struct ULyraInventoryItemInstance*> GetSlots(); // Function LyraGame.LyraQuickBarComponent.GetSlots // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x22732f0
	int32_t GetNextFreeItemSlot(); // Function LyraGame.LyraQuickBarComponent.GetNextFreeItemSlot // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x22731b0
	struct ULyraInventoryItemInstance* GetActiveSlotItem(); // Function LyraGame.LyraQuickBarComponent.GetActiveSlotItem // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x2272c90
	int32_t GetActiveSlotIndex(); // Function LyraGame.LyraQuickBarComponent.GetActiveSlotIndex // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x2272c70
	void CycleActiveSlotForward(); // Function LyraGame.LyraQuickBarComponent.CycleActiveSlotForward // (Final|Native|Public|BlueprintCallable) // @ game+0x2272c50
	void CycleActiveSlotBackward(); // Function LyraGame.LyraQuickBarComponent.CycleActiveSlotBackward // (Final|Native|Public|BlueprintCallable) // @ game+0x2272c30
	void AddItemToSlot(int32_t SlotIndex, struct ULyraInventoryItemInstance* Item); // Function LyraGame.LyraQuickBarComponent.AddItemToSlot // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x2272800
};

// Class LyraGame.LyraWeaponInstance
// Size: 0xb0 (Inherited: 0x40)
struct ULyraWeaponInstance : ULyraEquipmentInstance {
	struct FLyraAnimLayerSelectionSet EquippedAnimSet; // 0x40(0x18)
	struct FLyraAnimLayerSelectionSet Equipped1PAnimSet; // 0x58(0x18)
	struct FLyraAnimLayerSelectionSet Unequipped1PAnimSet; // 0x70(0x18)
	struct FLyraAnimLayerSelectionSet UneuippedAnimSet; // 0x88(0x18)
	char pad_A0[0x10]; // 0xa0(0x10)

	void UpdateFiringTime(); // Function LyraGame.LyraWeaponInstance.UpdateFiringTime // (Final|Native|Public|BlueprintCallable) // @ game+0x2282110
	struct UAnimInstance* PickBestAnimLayer(bool bEquipped, struct FGameplayTagContainer& CosmeticTags); // Function LyraGame.LyraWeaponInstance.PickBestAnimLayer // (Final|Native|Protected|HasOutParms|BlueprintCallable|Const) // @ game+0x2281d20
	struct UAnimInstance* PickBest1PAnimLayer(bool bEquipped, struct FGameplayTagContainer& CosmeticTags); // Function LyraGame.LyraWeaponInstance.PickBest1PAnimLayer // (Final|Native|Protected|HasOutParms|BlueprintCallable|Const) // @ game+0x2281c00
	float GetTimeSinceLastInteractedWith(); // Function LyraGame.LyraWeaponInstance.GetTimeSinceLastInteractedWith // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2281900
};

// Class LyraGame.LyraRangedWeaponInstance
// Size: 0x390 (Inherited: 0xb0)
struct ULyraRangedWeaponInstance : ULyraWeaponInstance {
	char pad_B0[0x8]; // 0xb0(0x08)
	float SpreadExponent; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FRuntimeFloatCurve HeatToSpreadCurve; // 0xc0(0x88)
	struct FRuntimeFloatCurve HeatToHeatPerShotCurve; // 0x148(0x88)
	struct FRuntimeFloatCurve HeatToCoolDownPerSecondCurve; // 0x1d0(0x88)
	float SpreadRecoveryCooldownDelay; // 0x258(0x04)
	bool bAllowFirstShotAccuracy; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	float SpreadAngleMultiplier_Aiming; // 0x260(0x04)
	float SpreadAngleMultiplier_StandingStill; // 0x264(0x04)
	float TransitionRate_StandingStill; // 0x268(0x04)
	float StandingStillSpeedThreshold; // 0x26c(0x04)
	float StandingStillToMovingSpeedRange; // 0x270(0x04)
	float SpreadAngleMultiplier_Crouching; // 0x274(0x04)
	float TransitionRate_Crouching; // 0x278(0x04)
	float SpreadAngleMultiplier_JumpingOrFalling; // 0x27c(0x04)
	float TransitionRate_JumpingOrFalling; // 0x280(0x04)
	int32_t BulletsPerCartridge; // 0x284(0x04)
	float MaxDamageRange; // 0x288(0x04)
	float BulletTraceSweepRadius; // 0x28c(0x04)
	struct FRuntimeFloatCurve DistanceDamageFalloff; // 0x290(0x88)
	struct TMap<struct FGameplayTag, float> MaterialDamageMultiplier; // 0x318(0x50)
	char pad_368[0x28]; // 0x368(0x28)
};

// Class LyraGame.LyraReplayListEntry
// Size: 0x70 (Inherited: 0x28)
struct ULyraReplayListEntry : UObject {
	char pad_28[0x48]; // 0x28(0x48)

	struct FDateTime GetTimestamp(); // Function LyraGame.LyraReplayListEntry.GetTimestamp // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x22734d0
	int32_t GetNumViewers(); // Function LyraGame.LyraReplayListEntry.GetNumViewers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22731e0
	bool GetIsLive(); // Function LyraGame.LyraReplayListEntry.GetIsLive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2273110
	struct FString GetFriendlyName(); // Function LyraGame.LyraReplayListEntry.GetFriendlyName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2272fb0
	struct FTimespan GetDuration(); // Function LyraGame.LyraReplayListEntry.GetDuration // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2272ea0
};

// Class LyraGame.LyraReplayList
// Size: 0x38 (Inherited: 0x28)
struct ULyraReplayList : UObject {
	struct TArray<struct ULyraReplayListEntry*> Results; // 0x28(0x10)
};

// Class LyraGame.LyraReplaySubsystem
// Size: 0x30 (Inherited: 0x30)
struct ULyraReplaySubsystem : UGameInstanceSubsystem {

	void SeekInActiveReplay(float TimeInSeconds); // Function LyraGame.LyraReplaySubsystem.SeekInActiveReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x2273a90
	void PlayReplay(struct ULyraReplayListEntry* Replay); // Function LyraGame.LyraReplaySubsystem.PlayReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x22737d0
	float GetReplayLengthInSeconds(); // Function LyraGame.LyraReplaySubsystem.GetReplayLengthInSeconds // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x2273260
	float GetReplayCurrentTime(); // Function LyraGame.LyraReplaySubsystem.GetReplayCurrentTime // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x2273230
};

// Class LyraGame.LyraReticleWidgetBase
// Size: 0x2c8 (Inherited: 0x2b8)
struct ULyraReticleWidgetBase : UCommonUserWidget {
	struct ULyraWeaponInstance* WeaponInstance; // 0x2b8(0x08)
	struct ULyraInventoryItemInstance* InventoryInstance; // 0x2c0(0x08)

	void OnWeaponInitialized(); // Function LyraGame.LyraReticleWidgetBase.OnWeaponInitialized // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void InitializeFromWeapon(struct ULyraWeaponInstance* InWeapon); // Function LyraGame.LyraReticleWidgetBase.InitializeFromWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x22735f0
	bool HasFirstShotAccuracy(); // Function LyraGame.LyraReticleWidgetBase.HasFirstShotAccuracy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2273520
	float ComputeSpreadAngle(); // Function LyraGame.LyraReticleWidgetBase.ComputeSpreadAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2272c00
	float ComputeMaxScreenspaceSpreadRadius(); // Function LyraGame.LyraReticleWidgetBase.ComputeMaxScreenspaceSpreadRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2272bd0
};

// Class LyraGame.LyraRuntimeOptions
// Size: 0x38 (Inherited: 0x38)
struct ULyraRuntimeOptions : URuntimeOptionsBase {

	struct ULyraRuntimeOptions* GetRuntimeOptions(); // Function LyraGame.LyraRuntimeOptions.GetRuntimeOptions // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2273290
};

// Class LyraGame.LyraSafeZoneEditor
// Size: 0x3c8 (Inherited: 0x378)
struct ULyraSafeZoneEditor : UCommonActivatableWidget {
	char pad_378[0x20]; // 0x378(0x20)
	bool bCanCancel; // 0x398(0x01)
	char pad_399[0xf]; // 0x399(0x0f)
	struct UWidgetSwitcher* Switcher_SafeZoneMessage; // 0x3a8(0x08)
	struct UCommonRichTextBlock* RichText_Default; // 0x3b0(0x08)
	struct UCommonButtonBase* Button_Back; // 0x3b8(0x08)
	struct UCommonButtonBase* Button_Done; // 0x3c0(0x08)

	void HandleDoneClicked(); // Function LyraGame.LyraSafeZoneEditor.HandleDoneClicked // (Final|Native|Private) // @ game+0x2252860
	void HandleBackClicked(); // Function LyraGame.LyraSafeZoneEditor.HandleBackClicked // (Final|Native|Private) // @ game+0x2252840
};

// Class LyraGame.LyraSettingValueScalarDynamic_SafeZoneValue
// Size: 0x210 (Inherited: 0x210)
struct ULyraSettingValueScalarDynamic_SafeZoneValue : UGameSettingValueScalarDynamic {
};

// Class LyraGame.LyraSettingAction_SafeZoneEditor
// Size: 0x1a8 (Inherited: 0x1a0)
struct ULyraSettingAction_SafeZoneEditor : UGameSettingAction {
	struct ULyraSettingValueScalarDynamic_SafeZoneValue* SafeZoneValueSetting; // 0x1a0(0x08)
};

// Class LyraGame.LyraSettingKeyboardInput
// Size: 0x2a0 (Inherited: 0x150)
struct ULyraSettingKeyboardInput : UGameSettingValue {
	char pad_150[0x150]; // 0x150(0x150)
};

// Class LyraGame.LyraSettingScreen
// Size: 0x430 (Inherited: 0x3e8)
struct ULyraSettingScreen : UGameSettingScreen {
	struct ULyraTabListWidgetBase* TopSettingsTabs; // 0x3e8(0x08)
	struct FDataTableRowHandle BackInputActionData; // 0x3f0(0x10)
	struct FDataTableRowHandle ApplyInputActionData; // 0x400(0x10)
	struct FDataTableRowHandle CancelChangesInputActionData; // 0x410(0x10)
	char pad_420[0x10]; // 0x420(0x10)
};

// Class LyraGame.LyraSettingsListEntrySetting_KeyboardInput
// Size: 0x320 (Inherited: 0x2f8)
struct ULyraSettingsListEntrySetting_KeyboardInput : UGameSettingListEntry_Setting {
	struct ULyraSettingKeyboardInput* KeyboardInputSetting; // 0x2f8(0x08)
	struct UGameSettingPressAnyKey* PressAnyKeyPanelClass; // 0x300(0x08)
	struct ULyraButtonBase* Button_PrimaryKey; // 0x308(0x08)
	struct ULyraButtonBase* Button_SecondaryKey; // 0x310(0x08)
	struct ULyraButtonBase* Button_Clear; // 0x318(0x08)
};

// Class LyraGame.LyraSettingsLocal
// Size: 0x3b8 (Inherited: 0x128)
struct ULyraSettingsLocal : UGameUserSettings {
	char pad_128[0x8]; // 0x128(0x08)
	struct TMap<enum class ELyraDisplayablePerformanceStat, enum class ELyraStatDisplayMode> DisplayStatList; // 0x130(0x50)
	char pad_180[0x18]; // 0x180(0x18)
	float DisplayGamma; // 0x198(0x04)
	float FrameRateLimit_OnBattery; // 0x19c(0x04)
	float FrameRateLimit_InMenu; // 0x1a0(0x04)
	float FrameRateLimit_WhenBackgrounded; // 0x1a4(0x04)
	int32_t MobileFrameRateLimit; // 0x1a8(0x04)
	char pad_1AC[0x6c]; // 0x1ac(0x6c)
	struct FString DesiredUserChosenDeviceProfileSuffix; // 0x218(0x10)
	struct FString CurrentAppliedDeviceProfileOverrideSuffix; // 0x228(0x10)
	struct FString UserChosenDeviceProfileSuffix; // 0x238(0x10)
	char pad_248[0x18]; // 0x248(0x18)
	bool bDesiredHeadphoneMode; // 0x260(0x01)
	bool bUseHeadphoneMode; // 0x261(0x01)
	bool bUseHDRAudioMode; // 0x262(0x01)
	char pad_263[0x5]; // 0x263(0x05)
	struct FString AudioOutputDeviceId; // 0x268(0x10)
	char pad_278[0x48]; // 0x278(0x48)
	float OverallVolume; // 0x2c0(0x04)
	float MusicVolume; // 0x2c4(0x04)
	float SoundFXVolume; // 0x2c8(0x04)
	float DialogueVolume; // 0x2cc(0x04)
	float VoiceChatVolume; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct TMap<struct FName, struct USoundControlBus*> ControlBusMap; // 0x2d8(0x50)
	struct USoundControlBusMix* ControlBusMix; // 0x328(0x08)
	bool bSoundControlBusMixLoaded; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	float SafeZoneScale; // 0x334(0x04)
	struct FName ControllerPlatform; // 0x338(0x08)
	struct FName ControllerPreset; // 0x340(0x08)
	struct FName InputConfigName; // 0x348(0x08)
	struct TArray<struct FLoadedMappableConfigPair> RegisteredInputConfigs; // 0x350(0x10)
	struct TMap<struct FName, struct FKey> CustomKeyboardConfig; // 0x360(0x50)
	char pad_3B0[0x8]; // 0x3b0(0x08)

	bool ShouldRunAutoBenchmarkAtStartup(); // Function LyraGame.LyraSettingsLocal.ShouldRunAutoBenchmarkAtStartup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2274420
	void SetVoiceChatVolume(float InVolume); // Function LyraGame.LyraSettingsLocal.SetVoiceChatVolume // (Final|Native|Public) // @ game+0x22743a0
	void SetSoundFXVolume(float InVolume); // Function LyraGame.LyraSettingsLocal.SetSoundFXVolume // (Final|Native|Public) // @ game+0x2274320
	void SetSafeZone(float Value); // Function LyraGame.LyraSettingsLocal.SetSafeZone // (Final|Native|Public) // @ game+0x2274290
	void SetOverallVolume(float InVolume); // Function LyraGame.LyraSettingsLocal.SetOverallVolume // (Final|Native|Public) // @ game+0x2274210
	void SetMusicVolume(float InVolume); // Function LyraGame.LyraSettingsLocal.SetMusicVolume // (Final|Native|Public) // @ game+0x2274190
	void SetHeadphoneModeEnabled(bool bEnabled); // Function LyraGame.LyraSettingsLocal.SetHeadphoneModeEnabled // (Final|Native|Public) // @ game+0x2274100
	void SetHDRAudioModeEnabled(bool bEnabled); // Function LyraGame.LyraSettingsLocal.SetHDRAudioModeEnabled // (Final|Native|Public) // @ game+0x2274070
	void SetFrameRateLimit_WhenBackgrounded(float NewLimitFPS); // Function LyraGame.LyraSettingsLocal.SetFrameRateLimit_WhenBackgrounded // (Final|Native|Public) // @ game+0x2273ff0
	void SetFrameRateLimit_OnBattery(float NewLimitFPS); // Function LyraGame.LyraSettingsLocal.SetFrameRateLimit_OnBattery // (Final|Native|Public) // @ game+0x2273f70
	void SetFrameRateLimit_InMenu(float NewLimitFPS); // Function LyraGame.LyraSettingsLocal.SetFrameRateLimit_InMenu // (Final|Native|Public) // @ game+0x2273ef0
	void SetFrameRateLimit_Always(float NewLimitFPS); // Function LyraGame.LyraSettingsLocal.SetFrameRateLimit_Always // (Final|Native|Public) // @ game+0x2273e70
	void SetDisplayGamma(float InGamma); // Function LyraGame.LyraSettingsLocal.SetDisplayGamma // (Final|Native|Public) // @ game+0x2273df0
	void SetDialogueVolume(float InVolume); // Function LyraGame.LyraSettingsLocal.SetDialogueVolume // (Final|Native|Public) // @ game+0x2273d70
	void SetDesiredDeviceProfileQualitySuffix(struct FString InDesiredSuffix); // Function LyraGame.LyraSettingsLocal.SetDesiredDeviceProfileQualitySuffix // (Final|Native|Public) // @ game+0x2273cd0
	void SetControllerPlatform(struct FName InControllerPlatform); // Function LyraGame.LyraSettingsLocal.SetControllerPlatform // (Final|Native|Public) // @ game+0x2273c40
	void SetAudioOutputDeviceId(struct FString InAudioOutputDeviceId); // Function LyraGame.LyraSettingsLocal.SetAudioOutputDeviceId // (Final|Native|Public) // @ game+0x2273ba0
	void RunAutoBenchmark(bool bSaveImmediately); // Function LyraGame.LyraSettingsLocal.RunAutoBenchmark // (Final|Native|Public|BlueprintCallable) // @ game+0x2273a00
	bool IsSafeZoneSet(); // Function LyraGame.LyraSettingsLocal.IsSafeZoneSet // (Final|Native|Public|Const) // @ game+0x22736e0
	bool IsHeadphoneModeEnabled(); // Function LyraGame.LyraSettingsLocal.IsHeadphoneModeEnabled // (Final|Native|Public|Const) // @ game+0x22736b0
	bool IsHDRAudioModeEnabled(); // Function LyraGame.LyraSettingsLocal.IsHDRAudioModeEnabled // (Final|Native|Public|Const) // @ game+0x2273680
	float GetVoiceChatVolume(); // Function LyraGame.LyraSettingsLocal.GetVoiceChatVolume // (Final|Native|Public|Const) // @ game+0x22734f0
	float GetSoundFXVolume(); // Function LyraGame.LyraSettingsLocal.GetSoundFXVolume // (Final|Native|Public|Const) // @ game+0x22733b0
	float GetSafeZone(); // Function LyraGame.LyraSettingsLocal.GetSafeZone // (Final|Native|Public|Const) // @ game+0x22732c0
	float GetOverallVolume(); // Function LyraGame.LyraSettingsLocal.GetOverallVolume // (Final|Native|Public|Const) // @ game+0x2273200
	float GetMusicVolume(); // Function LyraGame.LyraSettingsLocal.GetMusicVolume // (Final|Native|Public|Const) // @ game+0x2273180
	struct UPlayerMappableInputConfig* GetInputConfigByName(struct FName ConfigName); // Function LyraGame.LyraSettingsLocal.GetInputConfigByName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2273070
	float GetFrameRateLimit_WhenBackgrounded(); // Function LyraGame.LyraSettingsLocal.GetFrameRateLimit_WhenBackgrounded // (Final|Native|Public|Const) // @ game+0x2272f80
	float GetFrameRateLimit_OnBattery(); // Function LyraGame.LyraSettingsLocal.GetFrameRateLimit_OnBattery // (Final|Native|Public|Const) // @ game+0x2272f50
	float GetFrameRateLimit_InMenu(); // Function LyraGame.LyraSettingsLocal.GetFrameRateLimit_InMenu // (Final|Native|Public|Const) // @ game+0xe7d900
	float GetFrameRateLimit_Always(); // Function LyraGame.LyraSettingsLocal.GetFrameRateLimit_Always // (Final|Native|Public|Const) // @ game+0x2272f20
	float GetDisplayGamma(); // Function LyraGame.LyraSettingsLocal.GetDisplayGamma // (Final|Native|Public|Const) // @ game+0x2272e70
	float GetDialogueVolume(); // Function LyraGame.LyraSettingsLocal.GetDialogueVolume // (Final|Native|Public|Const) // @ game+0x2272e40
	struct FString GetDesiredDeviceProfileQualitySuffix(); // Function LyraGame.LyraSettingsLocal.GetDesiredDeviceProfileQualitySuffix // (Final|Native|Public|Const) // @ game+0x2272dc0
	struct FName GetControllerPlatform(); // Function LyraGame.LyraSettingsLocal.GetControllerPlatform // (Final|Native|Public|Const) // @ game+0x2272d80
	struct FString GetAudioOutputDeviceId(); // Function LyraGame.LyraSettingsLocal.GetAudioOutputDeviceId // (Final|Native|Public|Const) // @ game+0x2272cc0
	bool CanRunAutoBenchmark(); // Function LyraGame.LyraSettingsLocal.CanRunAutoBenchmark // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22729d0
	bool CanModifyHeadphoneModeEnabled(); // Function LyraGame.LyraSettingsLocal.CanModifyHeadphoneModeEnabled // (Final|Native|Public|Const) // @ game+0x22729a0
};

// Class LyraGame.LyraSettingsShared
// Size: 0xa0 (Inherited: 0x28)
struct ULyraSettingsShared : USaveGame {
	char pad_28[0x18]; // 0x28(0x18)
	enum class EColorBlindMode ColorBlindMode; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t ColorBlindStrength; // 0x44(0x04)
	bool bForceFeedbackEnabled; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float GamepadMoveStickDeadZone; // 0x4c(0x04)
	float GamepadLookStickDeadZone; // 0x50(0x04)
	bool bTriggerHapticsEnabled; // 0x54(0x01)
	bool bTriggerPullUsesHapticThreshold; // 0x55(0x01)
	char TriggerHapticStrength; // 0x56(0x01)
	char TriggerHapticStartPosition; // 0x57(0x01)
	bool bEnableSubtitles; // 0x58(0x01)
	enum class ESubtitleDisplayTextSize SubtitleTextSize; // 0x59(0x01)
	enum class ESubtitleDisplayTextColor SubtitleTextColor; // 0x5a(0x01)
	enum class ESubtitleDisplayTextBorder SubtitleTextBorder; // 0x5b(0x01)
	enum class ESubtitleDisplayBackgroundOpacity SubtitleBackgroundOpacity; // 0x5c(0x01)
	enum class ELyraAllowBackgroundAudioSetting AllowAudioInBackground; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	struct FString PendingCulture; // 0x60(0x10)
	char pad_70[0x8]; // 0x70(0x08)
	double MouseSensitivityX; // 0x78(0x08)
	double MouseSensitivityY; // 0x80(0x08)
	double TargetingMultiplier; // 0x88(0x08)
	bool bInvertVerticalAxis; // 0x90(0x01)
	bool bInvertHorizontalAxis; // 0x91(0x01)
	enum class ELyraGamepadSensitivity GamepadLookSensitivityPreset; // 0x92(0x01)
	enum class ELyraGamepadSensitivity GamepadTargetingSensitivityPreset; // 0x93(0x01)
	char pad_94[0x4]; // 0x94(0x04)
	struct ULyraLocalPlayer* OwningPlayer; // 0x98(0x08)

	void SetTriggerPullUsesHapticThreshold(bool NewValue); // Function LyraGame.LyraSettingsShared.SetTriggerPullUsesHapticThreshold // (Final|Native|Public) // @ game+0x2279330
	void SetTriggerHapticStrength(char NewValue); // Function LyraGame.LyraSettingsShared.SetTriggerHapticStrength // (Final|Native|Public) // @ game+0x2279200
	void SetTriggerHapticStartPosition(char NewValue); // Function LyraGame.LyraSettingsShared.SetTriggerHapticStartPosition // (Final|Native|Public) // @ game+0x2279170
	void SetTriggerHapticsEnabled(bool NewValue); // Function LyraGame.LyraSettingsShared.SetTriggerHapticsEnabled // (Final|Native|Public) // @ game+0x2279290
	void SetTargetingMultiplier(double NewValue); // Function LyraGame.LyraSettingsShared.SetTargetingMultiplier // (Final|Native|Public) // @ game+0x22790c0
	void SetSubtitlesTextSize(enum class ESubtitleDisplayTextSize Value); // Function LyraGame.LyraSettingsShared.SetSubtitlesTextSize // (Final|Native|Public) // @ game+0x2278d90
	void SetSubtitlesTextColor(enum class ESubtitleDisplayTextColor Value); // Function LyraGame.LyraSettingsShared.SetSubtitlesTextColor // (Final|Native|Public) // @ game+0x2278cf0
	void SetSubtitlesTextBorder(enum class ESubtitleDisplayTextBorder Value); // Function LyraGame.LyraSettingsShared.SetSubtitlesTextBorder // (Final|Native|Public) // @ game+0x2278c50
	void SetSubtitlesEnabled(bool Value); // Function LyraGame.LyraSettingsShared.SetSubtitlesEnabled // (Final|Native|Public) // @ game+0x2278bb0
	void SetSubtitlesBackgroundOpacity(enum class ESubtitleDisplayBackgroundOpacity Value); // Function LyraGame.LyraSettingsShared.SetSubtitlesBackgroundOpacity // (Final|Native|Public) // @ game+0x2278b10
	void SetMouseSensitivityY(double NewValue); // Function LyraGame.LyraSettingsShared.SetMouseSensitivityY // (Final|Native|Public) // @ game+0x2278910
	void SetMouseSensitivityX(double NewValue); // Function LyraGame.LyraSettingsShared.SetMouseSensitivityX // (Final|Native|Public) // @ game+0x2278870
	void SetLookSensitivityPreset(enum class ELyraGamepadSensitivity NewValue); // Function LyraGame.LyraSettingsShared.SetLookSensitivityPreset // (Final|Native|Public) // @ game+0x22787d0
	void SetInvertVerticalAxis(bool NewValue); // Function LyraGame.LyraSettingsShared.SetInvertVerticalAxis // (Final|Native|Public) // @ game+0x2278720
	void SetInvertHorizontalAxis(bool NewValue); // Function LyraGame.LyraSettingsShared.SetInvertHorizontalAxis // (Final|Native|Public) // @ game+0x2278670
	void SetGamepadTargetingSensitivityPreset(enum class ELyraGamepadSensitivity NewValue); // Function LyraGame.LyraSettingsShared.SetGamepadTargetingSensitivityPreset // (Final|Native|Public) // @ game+0x22785d0
	void SetGamepadMoveStickDeadZone(float NewValue); // Function LyraGame.LyraSettingsShared.SetGamepadMoveStickDeadZone // (Final|Native|Public) // @ game+0x2278530
	void SetGamepadLookStickDeadZone(float NewValue); // Function LyraGame.LyraSettingsShared.SetGamepadLookStickDeadZone // (Final|Native|Public) // @ game+0x2278490
	void SetForceFeedbackEnabled(bool NewValue); // Function LyraGame.LyraSettingsShared.SetForceFeedbackEnabled // (Final|Native|Public) // @ game+0x22783f0
	void SetColorBlindStrength(int32_t InColorBlindStrength); // Function LyraGame.LyraSettingsShared.SetColorBlindStrength // (Final|Native|Public) // @ game+0x2278210
	void SetColorBlindMode(enum class EColorBlindMode InMode); // Function LyraGame.LyraSettingsShared.SetColorBlindMode // (Final|Native|Public) // @ game+0x2278190
	void SetAllowAudioInBackgroundSetting(enum class ELyraAllowBackgroundAudioSetting NewValue); // Function LyraGame.LyraSettingsShared.SetAllowAudioInBackgroundSetting // (Final|Native|Public) // @ game+0x2278110
	bool GetTriggerPullUsesHapticThreshold(); // Function LyraGame.LyraSettingsShared.GetTriggerPullUsesHapticThreshold // (Final|Native|Public|Const) // @ game+0x2277b30
	char GetTriggerHapticStrength(); // Function LyraGame.LyraSettingsShared.GetTriggerHapticStrength // (Final|Native|Public|Const) // @ game+0x2277af0
	char GetTriggerHapticStartPosition(); // Function LyraGame.LyraSettingsShared.GetTriggerHapticStartPosition // (Final|Native|Public|Const) // @ game+0x2277ad0
	bool GetTriggerHapticsEnabled(); // Function LyraGame.LyraSettingsShared.GetTriggerHapticsEnabled // (Final|Native|Public|Const) // @ game+0x2277b10
	double GetTargetingMultiplier(); // Function LyraGame.LyraSettingsShared.GetTargetingMultiplier // (Final|Native|Public|Const) // @ game+0x22483e0
	enum class ESubtitleDisplayTextSize GetSubtitlesTextSize(); // Function LyraGame.LyraSettingsShared.GetSubtitlesTextSize // (Final|Native|Public|Const) // @ game+0x2277ab0
	enum class ESubtitleDisplayTextColor GetSubtitlesTextColor(); // Function LyraGame.LyraSettingsShared.GetSubtitlesTextColor // (Final|Native|Public|Const) // @ game+0x2277a90
	enum class ESubtitleDisplayTextBorder GetSubtitlesTextBorder(); // Function LyraGame.LyraSettingsShared.GetSubtitlesTextBorder // (Final|Native|Public|Const) // @ game+0x2277a70
	bool GetSubtitlesEnabled(); // Function LyraGame.LyraSettingsShared.GetSubtitlesEnabled // (Final|Native|Public|Const) // @ game+0x2277a50
	enum class ESubtitleDisplayBackgroundOpacity GetSubtitlesBackgroundOpacity(); // Function LyraGame.LyraSettingsShared.GetSubtitlesBackgroundOpacity // (Final|Native|Public|Const) // @ game+0x2277a30
	double GetMouseSensitivityY(); // Function LyraGame.LyraSettingsShared.GetMouseSensitivityY // (Final|Native|Public|Const) // @ game+0x22481c0
	double GetMouseSensitivityX(); // Function LyraGame.LyraSettingsShared.GetMouseSensitivityX // (Final|Native|Public|Const) // @ game+0x2277750
	bool GetInvertVerticalAxis(); // Function LyraGame.LyraSettingsShared.GetInvertVerticalAxis // (Final|Native|Public|Const) // @ game+0x122bb60
	bool GetInvertHorizontalAxis(); // Function LyraGame.LyraSettingsShared.GetInvertHorizontalAxis // (Final|Native|Public|Const) // @ game+0x2277730
	enum class ELyraGamepadSensitivity GetGamepadTargetingSensitivityPreset(); // Function LyraGame.LyraSettingsShared.GetGamepadTargetingSensitivityPreset // (Final|Native|Public|Const) // @ game+0x2277710
	float GetGamepadMoveStickDeadZone(); // Function LyraGame.LyraSettingsShared.GetGamepadMoveStickDeadZone // (Final|Native|Public|Const) // @ game+0x22776f0
	float GetGamepadLookStickDeadZone(); // Function LyraGame.LyraSettingsShared.GetGamepadLookStickDeadZone // (Final|Native|Public|Const) // @ game+0x22776d0
	enum class ELyraGamepadSensitivity GetGamepadLookSensitivityPreset(); // Function LyraGame.LyraSettingsShared.GetGamepadLookSensitivityPreset // (Final|Native|Public|Const) // @ game+0x22776b0
	bool GetForceFeedbackEnabled(); // Function LyraGame.LyraSettingsShared.GetForceFeedbackEnabled // (Final|Native|Public|Const) // @ game+0x2277690
	int32_t GetColorBlindStrength(); // Function LyraGame.LyraSettingsShared.GetColorBlindStrength // (Final|Native|Public|Const) // @ game+0x2277630
	enum class EColorBlindMode GetColorBlindMode(); // Function LyraGame.LyraSettingsShared.GetColorBlindMode // (Final|Native|Public|Const) // @ game+0x2277600
	enum class ELyraAllowBackgroundAudioSetting GetAllowAudioInBackgroundSetting(); // Function LyraGame.LyraSettingsShared.GetAllowAudioInBackgroundSetting // (Final|Native|Public|Const) // @ game+0x22775c0
};

// Class LyraGame.LyraSettingValueDiscreteDynamic_AudioOutputDevice
// Size: 0x210 (Inherited: 0x1b8)
struct ULyraSettingValueDiscreteDynamic_AudioOutputDevice : UGameSettingValueDiscreteDynamic {
	char pad_1B8[0x58]; // 0x1b8(0x58)

	void OnCompletedDeviceSwap(struct FSwapAudioOutputResult& SwapResult); // Function LyraGame.LyraSettingValueDiscreteDynamic_AudioOutputDevice.OnCompletedDeviceSwap // (Final|Native|Public|HasOutParms) // @ game+0x2267f20
	void OnAudioOutputDevicesObtained(struct TArray<struct FAudioOutputDeviceInfo>& AvailableDevices); // Function LyraGame.LyraSettingValueDiscreteDynamic_AudioOutputDevice.OnAudioOutputDevicesObtained // (Final|Native|Public|HasOutParms) // @ game+0x2277ec0
	void DeviceAddedOrRemoved(struct FString DeviceID); // Function LyraGame.LyraSettingValueDiscreteDynamic_AudioOutputDevice.DeviceAddedOrRemoved // (Final|Native|Public) // @ game+0x2277360
	void DefaultDeviceChanged(enum class EAudioDeviceChangedRole InRole, struct FString DeviceID); // Function LyraGame.LyraSettingValueDiscreteDynamic_AudioOutputDevice.DefaultDeviceChanged // (Final|Native|Public) // @ game+0x2277230
};

// Class LyraGame.LyraSettingValueDiscrete_Language
// Size: 0x160 (Inherited: 0x150)
struct ULyraSettingValueDiscrete_Language : UGameSettingValueDiscrete {
	char pad_150[0x10]; // 0x150(0x10)
};

// Class LyraGame.LyraSettingValueDiscrete_MobileFPSType
// Size: 0x168 (Inherited: 0x150)
struct ULyraSettingValueDiscrete_MobileFPSType : UGameSettingValueDiscrete {
	char pad_150[0x18]; // 0x150(0x18)
};

// Class LyraGame.LyraSettingValueDiscrete_OverallQuality
// Size: 0x170 (Inherited: 0x150)
struct ULyraSettingValueDiscrete_OverallQuality : UGameSettingValueDiscrete {
	char pad_150[0x20]; // 0x150(0x20)
};

// Class LyraGame.LyraSettingValueDiscrete_PerfStat
// Size: 0x178 (Inherited: 0x150)
struct ULyraSettingValueDiscrete_PerfStat : UGameSettingValueDiscrete {
	char pad_150[0x28]; // 0x150(0x28)
};

// Class LyraGame.LyraSettingValueDiscrete_Resolution
// Size: 0x198 (Inherited: 0x150)
struct ULyraSettingValueDiscrete_Resolution : UGameSettingValueDiscrete {
	char pad_150[0x48]; // 0x150(0x48)
};

// Class LyraGame.LyraSignificanceManager
// Size: 0x120 (Inherited: 0x120)
struct ULyraSignificanceManager : USignificanceManager {
};

// Class LyraGame.LyraSystemStatics
// Size: 0x28 (Inherited: 0x28)
struct ULyraSystemStatics : UBlueprintFunctionLibrary {

	void SetVectorParameterValueOnAllMeshComponents(struct AActor* TargetActor, struct FName ParameterName, struct FVector ParameterValue, bool bIncludeChildActors); // Function LyraGame.LyraSystemStatics.SetVectorParameterValueOnAllMeshComponents // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x22793d0
	void SetScalarParameterValueOnAllMeshComponents(struct AActor* TargetActor, struct FName ParameterName, float ParameterValue, bool bIncludeChildActors); // Function LyraGame.LyraSystemStatics.SetScalarParameterValueOnAllMeshComponents // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22789c0
	void SetColorParameterValueOnAllMeshComponents(struct AActor* TargetActor, struct FName ParameterName, struct FLinearColor ParameterValue, bool bIncludeChildActors); // Function LyraGame.LyraSystemStatics.SetColorParameterValueOnAllMeshComponents // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x22782a0
	void PlayNextGame(struct UObject* WorldContextObject); // Function LyraGame.LyraSystemStatics.PlayNextGame // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x2277fb0
	struct TSoftObjectPtr<UObject> GetTypedSoftObjectReferenceFromPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId, struct UObject* ExpectedAssetType); // Function LyraGame.LyraSystemStatics.GetTypedSoftObjectReferenceFromPrimaryAssetId // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2277b50
	struct FPrimaryAssetId GetPrimaryAssetIdFromUserFacingExperienceName(struct FString AdvertisedExperienceID); // Function LyraGame.LyraSystemStatics.GetPrimaryAssetIdFromUserFacingExperienceName // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x22778a0
	struct TArray<struct UActorComponent*> FindComponentsByClass(struct AActor* TargetActor, struct UActorComponent* ComponentClass, bool bIncludeChildActors); // Function LyraGame.LyraSystemStatics.FindComponentsByClass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2277450
};

// Class LyraGame.LyraTabButtonBase
// Size: 0x10a0 (Inherited: 0x1090)
struct ULyraTabButtonBase : ULyraButtonBase {
	struct UCommonLazyImage* LazyImage_Icon; // 0x1090(0x08)
	char pad_1098[0x8]; // 0x1098(0x08)

	void SetTabLabelInfo_Implementation(struct FLyraTabDescriptor& TabLabelInfo); // Function LyraGame.LyraTabButtonBase.SetTabLabelInfo_Implementation // (Native|Protected|HasOutParms) // @ game+0x2278fe0
};

// Class LyraGame.LyraTabButtonInterface
// Size: 0x28 (Inherited: 0x28)
struct ULyraTabButtonInterface : UInterface {

	void SetTabLabelInfo(struct FLyraTabDescriptor& TabDescriptor); // Function LyraGame.LyraTabButtonInterface.SetTabLabelInfo // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2278f00
};

// Class LyraGame.LyraTabListWidgetBase
// Size: 0x410 (Inherited: 0x388)
struct ULyraTabListWidgetBase : UCommonTabListWidgetBase {
	struct FMulticastInlineDelegate OnTabContentCreated; // 0x388(0x10)
	char pad_398[0x18]; // 0x398(0x18)
	struct TArray<struct FLyraTabDescriptor> PreregisteredTabInfoArray; // 0x3b0(0x10)
	struct TMap<struct FName, struct FLyraTabDescriptor> PendingTabLabelInfoMap; // 0x3c0(0x50)

	void SetTabHiddenState(struct FName TabNameID, bool bHidden); // Function LyraGame.LyraTabListWidgetBase.SetTabHiddenState // (Final|Native|Public|BlueprintCallable) // @ game+0x2278e30
	bool RegisterDynamicTab(struct FLyraTabDescriptor& TabDescriptor); // Function LyraGame.LyraTabListWidgetBase.RegisterDynamicTab // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2278030
	void OnTabContentCreated__DelegateSignature(struct FName TabId, struct UCommonUserWidget* TabWidget); // DelegateFunction LyraGame.LyraTabListWidgetBase.OnTabContentCreated__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2552560
	bool IsTabVisible(struct FName TabId); // Function LyraGame.LyraTabListWidgetBase.IsTabVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2277e20
	bool IsLastTabActive(); // Function LyraGame.LyraTabListWidgetBase.IsLastTabActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2277df0
	bool IsFirstTabActive(); // Function LyraGame.LyraTabListWidgetBase.IsFirstTabActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2277dc0
	int32_t GetVisibleTabCount(); // Function LyraGame.LyraTabListWidgetBase.GetVisibleTabCount // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2277c70
	bool GetPreregisteredTabInfo(struct FName TabNameID, struct FLyraTabDescriptor& OutTabInfo); // Function LyraGame.LyraTabListWidgetBase.GetPreregisteredTabInfo // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2277770
};

// Class LyraGame.LyraTaggedWidget
// Size: 0x320 (Inherited: 0x2b8)
struct ULyraTaggedWidget : UCommonUserWidget {
	struct FGameplayTagContainer HiddenByTags; // 0x2b8(0x20)
	struct FGameplayTagContainer ShownByTags; // 0x2d8(0x20)
	enum class ESlateVisibility ShownVisibility; // 0x2f8(0x01)
	enum class ESlateVisibility HiddenVisibility; // 0x2f9(0x01)
	char pad_2FA[0x26]; // 0x2fa(0x26)
};

// Class LyraGame.LyraTeamAgentInterface
// Size: 0x28 (Inherited: 0x28)
struct ULyraTeamAgentInterface : UGenericTeamAgentInterface {
};

// Class LyraGame.LyraTeamCheats
// Size: 0x28 (Inherited: 0x28)
struct ULyraTeamCheats : UCheatManagerExtension {

	void SetTeam(int32_t TeamId); // Function LyraGame.LyraTeamCheats.SetTeam // (BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x2281f90
	void ListTeams(); // Function LyraGame.LyraTeamCheats.ListTeams // (Exec|Native|Public) // @ game+0x122ec10
	void CycleTeam(); // Function LyraGame.LyraTeamCheats.CycleTeam // (BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x19fbd60
};

// Class LyraGame.LyraTeamCreationComponent
// Size: 0x110 (Inherited: 0xb0)
struct ULyraTeamCreationComponent : UGameStateComponent {
	struct TMap<char, struct ULyraTeamDisplayAsset*> TeamsToCreate; // 0xb0(0x50)
	struct ALyraTeamPublicInfo* PublicTeamInfoClass; // 0x100(0x08)
	struct ALyraTeamPrivateInfo* PrivateTeamInfoClass; // 0x108(0x08)
};

// Class LyraGame.LyraTeamDisplayAsset
// Size: 0x138 (Inherited: 0x30)
struct ULyraTeamDisplayAsset : UDataAsset {
	struct TMap<struct FName, float> ScalarParameters; // 0x30(0x50)
	struct TMap<struct FName, struct FLinearColor> ColorParameters; // 0x80(0x50)
	struct TMap<struct FName, struct UTexture*> TextureParameters; // 0xd0(0x50)
	struct FText TeamShortName; // 0x120(0x18)

	void ApplyToNiagaraComponent(struct UNiagaraComponent* NiagaraComponent); // Function LyraGame.LyraTeamDisplayAsset.ApplyToNiagaraComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x2280800
	void ApplyToMeshComponent(struct UMeshComponent* MeshComponent); // Function LyraGame.LyraTeamDisplayAsset.ApplyToMeshComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x2280770
	void ApplyToMaterial(struct UMaterialInstanceDynamic* Material); // Function LyraGame.LyraTeamDisplayAsset.ApplyToMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x22806e0
	void ApplyToActor(struct AActor* TargetActor, bool bIncludeChildActors); // Function LyraGame.LyraTeamDisplayAsset.ApplyToActor // (Final|Native|Public|BlueprintCallable) // @ game+0x2280610
};

// Class LyraGame.LyraTeamInfoBase
// Size: 0x3e8 (Inherited: 0x278)
struct ALyraTeamInfoBase : AInfo {
	struct FGameplayTagStackContainer TeamTags; // 0x278(0x168)
	int32_t TeamId; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)

	void OnRep_TeamId(); // Function LyraGame.LyraTeamInfoBase.OnRep_TeamId // (Final|Native|Private) // @ game+0x2281bc0
};

// Class LyraGame.LyraTeamPrivateInfo
// Size: 0x3e8 (Inherited: 0x3e8)
struct ALyraTeamPrivateInfo : ALyraTeamInfoBase {
};

// Class LyraGame.LyraTeamPublicInfo
// Size: 0x3f0 (Inherited: 0x3e8)
struct ALyraTeamPublicInfo : ALyraTeamInfoBase {
	struct ULyraTeamDisplayAsset* TeamDisplayAsset; // 0x3e8(0x08)

	void OnRep_TeamDisplayAsset(); // Function LyraGame.LyraTeamPublicInfo.OnRep_TeamDisplayAsset // (Final|Native|Private) // @ game+0x2281bc0
};

// Class LyraGame.LyraTeamStatics
// Size: 0x28 (Inherited: 0x28)
struct ULyraTeamStatics : UBlueprintFunctionLibrary {

	struct UTexture* GetTeamTextureWithFallback(struct ULyraTeamDisplayAsset* DisplayAsset, struct FName ParameterName, struct UTexture* DefaultValue); // Function LyraGame.LyraTeamStatics.GetTeamTextureWithFallback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2281800
	float GetTeamScalarWithFallback(struct ULyraTeamDisplayAsset* DisplayAsset, struct FName ParameterName, float DefaultValue); // Function LyraGame.LyraTeamStatics.GetTeamScalarWithFallback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2281620
	struct ULyraTeamDisplayAsset* GetTeamDisplayAsset(struct UObject* WorldContextObject, int32_t TeamId); // Function LyraGame.LyraTeamStatics.GetTeamDisplayAsset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2281400
	struct FLinearColor GetTeamColorWithFallback(struct ULyraTeamDisplayAsset* DisplayAsset, struct FName ParameterName, struct FLinearColor DefaultValue); // Function LyraGame.LyraTeamStatics.GetTeamColorWithFallback // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x22812e0
	void FindTeamFromObject(struct UObject* Agent, bool& bIsPartOfTeam, int32_t& TeamId, struct ULyraTeamDisplayAsset*& DisplayAsset, bool bLogIfNotSet); // Function LyraGame.LyraTeamStatics.FindTeamFromObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2280e50
};

// Class LyraGame.LyraTeamSubsystem
// Size: 0x90 (Inherited: 0x30)
struct ULyraTeamSubsystem : UWorldSubsystem {
	struct TMap<int32_t, struct FLyraTeamTrackingInfo> TeamMap; // 0x30(0x50)
	char pad_80[0x8]; // 0x80(0x08)
	bool bAllowFriendlyFire; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)

	bool TeamHasTag(int32_t TeamId, struct FGameplayTag Tag); // Function LyraGame.LyraTeamSubsystem.TeamHasTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2282040
	void RemoveTeamTagStack(int32_t TeamId, struct FGameplayTag Tag, int32_t StackCount); // Function LyraGame.LyraTeamSubsystem.RemoveTeamTagStack // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x2281e60
	int32_t GetTeamTagStackCount(int32_t TeamId, struct FGameplayTag Tag); // Function LyraGame.LyraTeamSubsystem.GetTeamTagStackCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2281730
	struct TArray<int32_t> GetTeamIDs(); // Function LyraGame.LyraTeamSubsystem.GetTeamIDs // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x22815a0
	struct ULyraTeamDisplayAsset* GetTeamDisplayAsset(int32_t TeamId, int32_t ViewerTeamId); // Function LyraGame.LyraTeamSubsystem.GetTeamDisplayAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x22814d0
	struct ULyraTeamDisplayAsset* GetEffectiveTeamDisplayAsset(int32_t TeamId, struct UObject* ViewerTeamAgent); // Function LyraGame.LyraTeamSubsystem.GetEffectiveTeamDisplayAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x22810f0
	void FindTeamFromActor(struct UObject* TestActor, bool& bIsPartOfTeam, int32_t& TeamId); // Function LyraGame.LyraTeamSubsystem.FindTeamFromActor // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x2280d30
	bool DoesTeamExist(int32_t TeamId); // Function LyraGame.LyraTeamSubsystem.DoesTeamExist // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2280c90
	enum class ELyraTeamComparison CompareTeams(struct UObject* A, struct UObject* B, int32_t& TeamIdA, int32_t& TeamIdB); // Function LyraGame.LyraTeamSubsystem.CompareTeams // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x2280890
	void AddTeamTagStack(int32_t TeamId, struct FGameplayTag Tag, int32_t StackCount); // Function LyraGame.LyraTeamSubsystem.AddTeamTagStack // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x2280500
};

// Class LyraGame.LyraTestControllerBootTest
// Size: 0x38 (Inherited: 0x30)
struct ULyraTestControllerBootTest : UGauntletTestControllerBootTest {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class LyraGame.LyraTextHotfixConfig
// Size: 0x48 (Inherited: 0x38)
struct ULyraTextHotfixConfig : UDeveloperSettings {
	struct TArray<struct FPolyglotTextData> TextReplacements; // 0x38(0x10)
};

// Class LyraGame.LyraTouchRegion
// Size: 0x300 (Inherited: 0x2f8)
struct ULyraTouchRegion : ULyraSimulatedInputWidget {
	char pad_2F8[0x8]; // 0x2f8(0x08)

	bool ShouldSimulateInput(); // Function LyraGame.LyraTouchRegion.ShouldSimulateInput // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2282020
};

// Class LyraGame.LyraUICameraManagerComponent
// Size: 0xc0 (Inherited: 0xb0)
struct ULyraUICameraManagerComponent : UActorComponent {
	struct AActor* ViewTarget; // 0xb0(0x08)
	bool bUpdatingViewTarget; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// Class LyraGame.LyraUIManagerSubsystem
// Size: 0x70 (Inherited: 0x60)
struct ULyraUIManagerSubsystem : UGameUIManagerSubsystem {
	char pad_60[0x10]; // 0x60(0x10)
};

// Class LyraGame.LyraUIMessaging
// Size: 0x90 (Inherited: 0x30)
struct ULyraUIMessaging : UCommonMessagingSubsystem {
	struct UCommonGameDialog* ConfirmationDialogClassPtr; // 0x30(0x08)
	struct UCommonGameDialog* ErrorDialogClassPtr; // 0x38(0x08)
	struct TSoftClassPtr<UObject> ConfirmationDialogClass; // 0x40(0x28)
	struct TSoftClassPtr<UObject> ErrorDialogClass; // 0x68(0x28)
};

// Class LyraGame.LyraUserFacingExperienceDefinition
// Size: 0x120 (Inherited: 0x30)
struct ULyraUserFacingExperienceDefinition : UPrimaryDataAsset {
	struct FPrimaryAssetId MapID; // 0x30(0x10)
	struct FPrimaryAssetId ExperienceID; // 0x40(0x10)
	struct TMap<struct FString, struct FString> ExtraArgs; // 0x50(0x50)
	struct FText TileTitle; // 0xa0(0x18)
	struct FText TileSubTitle; // 0xb8(0x18)
	struct FText TileDescription; // 0xd0(0x18)
	struct UTexture2D* TileIcon; // 0xe8(0x08)
	struct TSoftClassPtr<UObject> LoadingScreenWidget; // 0xf0(0x28)
	bool bIsDefaultExperience; // 0x118(0x01)
	bool bShowInFrontEnd; // 0x119(0x01)
	bool bRecordReplay; // 0x11a(0x01)
	char pad_11B[0x1]; // 0x11b(0x01)
	int32_t MaxPlayerCount; // 0x11c(0x04)

	struct UCommonSession_HostSessionRequest* CreateHostingRequest(); // Function LyraGame.LyraUserFacingExperienceDefinition.CreateHostingRequest // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x2280a10
};

// Class LyraGame.LyraVerbMessageHelpers
// Size: 0x28 (Inherited: 0x28)
struct ULyraVerbMessageHelpers : UBlueprintFunctionLibrary {

	struct FGameplayCueParameters VerbMessageToCueParameters(struct FLyraVerbMessage& Message); // Function LyraGame.LyraVerbMessageHelpers.VerbMessageToCueParameters // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2282130
	struct APlayerState* GetPlayerStateFromObject(struct UObject* Object); // Function LyraGame.LyraVerbMessageHelpers.GetPlayerStateFromObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2281250
	struct APlayerController* GetPlayerControllerFromObject(struct UObject* Object); // Function LyraGame.LyraVerbMessageHelpers.GetPlayerControllerFromObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x22811c0
	struct FLyraVerbMessage CueParametersToVerbMessage(struct FGameplayCueParameters& Params); // Function LyraGame.LyraVerbMessageHelpers.CueParametersToVerbMessage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2280a40
};

// Class LyraGame.LyraWeaponDebugSettings
// Size: 0x48 (Inherited: 0x38)
struct ULyraWeaponDebugSettings : UDeveloperSettingsBackedByCVars {
	float DrawBulletTraceDuration; // 0x38(0x04)
	float DrawBulletHitDuration; // 0x3c(0x04)
	float DrawBulletHitRadius; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class LyraGame.LyraWeaponSpawner
// Size: 0x2c0 (Inherited: 0x278)
struct ALyraWeaponSpawner : AActor {
	struct ULyraWeaponPickupDefinition* WeaponDefinition; // 0x278(0x08)
	bool bIsWeaponAvailable; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	float CoolDownTime; // 0x284(0x04)
	float CheckExistingOverlapDelay; // 0x288(0x04)
	float CoolDownPercentage; // 0x28c(0x04)
	struct UCapsuleComponent* CollisionVolume; // 0x290(0x08)
	struct UStaticMeshComponent* PadMesh; // 0x298(0x08)
	struct UStaticMeshComponent* WeaponMesh; // 0x2a0(0x08)
	float WeaponMeshRotationSpeed; // 0x2a8(0x04)
	char pad_2AC[0x14]; // 0x2ac(0x14)

	void ResetCoolDown(); // Function LyraGame.LyraWeaponSpawner.ResetCoolDown // (Final|Native|Public|BlueprintCallable) // @ game+0x2281f70
	void PlayRespawnEffects(); // Function LyraGame.LyraWeaponSpawner.PlayRespawnEffects // (Native|Event|Public|BlueprintEvent) // @ game+0x2281e40
	void PlayPickupEffects(); // Function LyraGame.LyraWeaponSpawner.PlayPickupEffects // (Native|Event|Public|BlueprintEvent) // @ game+0x106d600
	void OnRep_WeaponAvailability(); // Function LyraGame.LyraWeaponSpawner.OnRep_WeaponAvailability // (Final|Native|Public) // @ game+0x2281be0
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepHitResult); // Function LyraGame.LyraWeaponSpawner.OnOverlapBegin // (Final|Native|Public|HasOutParms) // @ game+0x2281950
	void OnCoolDownTimerComplete(); // Function LyraGame.LyraWeaponSpawner.OnCoolDownTimerComplete // (Final|Native|Public) // @ game+0x2281930
	bool GiveWeapon(struct ULyraInventoryItemDefinition* WeaponItemClass, struct APawn* ReceivingPawn); // Function LyraGame.LyraWeaponSpawner.GiveWeapon // (Event|Public|BlueprintEvent) // @ game+0x2552560
	int32_t GetDefaultStatFromItemDef(struct ULyraInventoryItemDefinition* WeaponItemClass, struct FGameplayTag StatTag); // Function LyraGame.LyraWeaponSpawner.GetDefaultStatFromItemDef // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2281020
	void AttemptPickUpWeapon(struct APawn* Pawn); // Function LyraGame.LyraWeaponSpawner.AttemptPickUpWeapon // (Native|Event|Public|BlueprintEvent) // @ game+0x106d620
};

// Class LyraGame.LyraWeaponStateComponent
// Size: 0xd8 (Inherited: 0xb0)
struct ULyraWeaponStateComponent : UControllerComponent {
	char pad_B0[0x28]; // 0xb0(0x28)

	void ClientConfirmTargetData(uint16_t UniqueId, bool bSuccess, struct TArray<char> HitReplaces); // Function LyraGame.LyraWeaponStateComponent.ClientConfirmTargetData // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x2283ac0
};

// Class LyraGame.LyraWeaponUserInterface
// Size: 0x2c0 (Inherited: 0x2b8)
struct ULyraWeaponUserInterface : UCommonUserWidget {
	struct ULyraWeaponInstance* CurrentInstance; // 0x2b8(0x08)

	void OnWeaponChanged(struct ULyraWeaponInstance* OldWeapon, struct ULyraWeaponInstance* NewWeapon); // Function LyraGame.LyraWeaponUserInterface.OnWeaponChanged // (Event|Public|BlueprintEvent) // @ game+0x2552560
};

// Class LyraGame.LyraWidgetFactory
// Size: 0x28 (Inherited: 0x28)
struct ULyraWidgetFactory : UObject {

	struct UUserWidget* FindWidgetClassForData(struct UObject* Data); // Function LyraGame.LyraWidgetFactory.FindWidgetClassForData // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x2283bf0
};

// Class LyraGame.LyraWidgetFactory_Class
// Size: 0x78 (Inherited: 0x28)
struct ULyraWidgetFactory_Class : ULyraWidgetFactory {
	struct TMap<struct TSoftClassPtr<UObject>, struct UUserWidget*> EntryWidgetForClass; // 0x28(0x50)
};

// Class LyraGame.LyraWorldSettings
// Size: 0x4b0 (Inherited: 0x488)
struct ALyraWorldSettings : AWorldSettings {
	struct TSoftClassPtr<UObject> DefaultGameplayExperience; // 0x488(0x28)
};

// Class LyraGame.MaterialProgressBar
// Size: 0x368 (Inherited: 0x2b8)
struct UMaterialProgressBar : UCommonUserWidget {
	struct FMulticastInlineDelegate OnFillAnimationFinished; // 0x2b8(0x10)
	bool bOverrideDefaultColorA; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	struct FLinearColor CachedColorA; // 0x2cc(0x10)
	bool bOverrideDefaultColorB; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct FLinearColor CachedColorB; // 0x2e0(0x10)
	bool bOverrideDefaultColorBackground; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	struct FLinearColor CachedColorBackground; // 0x2f4(0x10)
	bool bOverrideDefaultSegments; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	int32_t Segments; // 0x308(0x04)
	bool bOverrideDefaultSegmentEdge; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	float SegmentEdge; // 0x310(0x04)
	bool bOverrideDefaultFillEdgeSoftness; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	float FillEdgeSoftness; // 0x318(0x04)
	bool bOverrideDefaultGlowEdge; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	float GlowEdge; // 0x320(0x04)
	bool bOverrideDefaultGlowSoftness; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	float GlowSoftness; // 0x328(0x04)
	bool bOverrideDefaultOutlineScale; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	float OutlineScale; // 0x330(0x04)
	bool bUseStroke; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct UMaterialInterface* StrokeMaterial; // 0x338(0x08)
	struct UMaterialInterface* NoStrokeMaterial; // 0x340(0x08)
	struct UImage* Image_Bar; // 0x348(0x08)
	struct UWidgetAnimation* BoundAnim_FillBar; // 0x350(0x08)
	struct UMaterialInstanceDynamic* CachedMID; // 0x358(0x08)
	char pad_360[0x8]; // 0x360(0x08)

	void SetStartProgress(float StartProgress); // Function LyraGame.MaterialProgressBar.SetStartProgress // (Final|Native|Public|BlueprintCallable) // @ game+0x22841d0
	void SetProgress(float Progress); // Function LyraGame.MaterialProgressBar.SetProgress // (Final|Native|Public|BlueprintCallable) // @ game+0x2284150
	void SetColorBackground(struct FLinearColor ColorBackground); // Function LyraGame.MaterialProgressBar.SetColorBackground // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x22840c0
	void SetColorB(struct FLinearColor ColorB); // Function LyraGame.MaterialProgressBar.SetColorB // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2284030
	void SetColorA(struct FLinearColor ColorA); // Function LyraGame.MaterialProgressBar.SetColorA // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2283fa0
	void OnFillAnimationFinished__DelegateSignature(); // DelegateFunction LyraGame.MaterialProgressBar.OnFillAnimationFinished__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2552560
	void AnimateProgressFromStart(float Start, float End, float AnimSpeed); // Function LyraGame.MaterialProgressBar.AnimateProgressFromStart // (Final|Native|Public|BlueprintCallable) // @ game+0x22839a0
	void AnimateProgressFromCurrent(float End, float AnimSpeed); // Function LyraGame.MaterialProgressBar.AnimateProgressFromCurrent // (Final|Native|Public|BlueprintCallable) // @ game+0x22838d0
};

// Class LyraGame.PhysicalMaterialWithTags
// Size: 0xa0 (Inherited: 0x80)
struct UPhysicalMaterialWithTags : UPhysicalMaterial {
	struct FGameplayTagContainer Tags; // 0x80(0x20)
};

// Class LyraGame.PlayerMoveTask
// Size: 0x138 (Inherited: 0x80)
struct UPlayerMoveTask : UAbilityTask {
	struct AController* OwnerController; // 0x80(0x08)
	struct FMulticastInlineDelegate MoveFinished; // 0x88(0x10)
	struct FMulticastInlineDelegate OnRequestFailed; // 0x98(0x10)
	struct FAIMoveRequest MoveRequest; // 0xa8(0x48)
	struct FRotator GoalRotation; // 0xf0(0x18)
	bool bHandleRotation; // 0x108(0x01)
	char pad_109[0x2f]; // 0x109(0x2f)

	struct UPlayerMoveTask* PlayerMoveTask(struct UGameplayAbility* OwningAbility, struct FVector GoalLocation, struct FRotator GoalRotation, struct AActor* GoalActor, float AcceptanceRadius, enum class EAIOptionFlag StopOnOverlap, enum class EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, enum class EAIOptionFlag ProjectGoalOnNavigation, bool bHandleRotation); // Function LyraGame.PlayerMoveTask.PlayerMoveTask // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x2283c90
};

// Class LyraGame.VaultStatics
// Size: 0x28 (Inherited: 0x28)
struct UVaultStatics : UBlueprintFunctionLibrary {
};

