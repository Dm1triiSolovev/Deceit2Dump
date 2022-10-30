// Class DeceitCoreRuntime.DeceitAttributeSet
// Size: 0x50 (Inherited: 0x30)
struct UDeceitAttributeSet : ULyraAttributeSet {
	struct FGameplayAttributeData MovementSpeedMultiplier; // 0x30(0x10)
	struct FGameplayAttributeData Sanity; // 0x40(0x10)

	void OnRep_Sanity(struct FGameplayAttributeData& OldValue); // Function DeceitCoreRuntime.DeceitAttributeSet.OnRep_Sanity // (Final|Native|Protected|HasOutParms) // @ game+0x9fa910
	void OnRep_MovementSpeedMultiplier(struct FGameplayAttributeData& OldValue); // Function DeceitCoreRuntime.DeceitAttributeSet.OnRep_MovementSpeedMultiplier // (Final|Native|Protected|HasOutParms) // @ game+0x9fa870
};

// Class DeceitCoreRuntime.DeceitCharacterActor
// Size: 0x2b0 (Inherited: 0x2a0)
struct ADeceitCharacterActor : ALyraTaggedActor {
	bool bIsFirstPerson; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float CapsuleHalfHeight; // 0x2a4(0x04)
	float CapsuleRadius; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)

	void SetupShadowCharacter(); // Function DeceitCoreRuntime.DeceitCharacterActor.SetupShadowCharacter // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SetFirstPerson(bool FirstPerson); // Function DeceitCoreRuntime.DeceitCharacterActor.SetFirstPerson // (Final|Native|Public|BlueprintCallable) // @ game+0x9faa80
	void OnFirstPersonChanged(bool FirstPerson); // Function DeceitCoreRuntime.DeceitCharacterActor.OnFirstPersonChanged // (Event|Public|BlueprintEvent) // @ game+0x2552560
};

// Class DeceitCoreRuntime.DeceitCharacterData
// Size: 0x60 (Inherited: 0x30)
struct UDeceitCharacterData : UPrimaryDataAsset {
	struct TSoftClassPtr<UObject> ThirdPersonMesh; // 0x30(0x28)
	enum class EDeceitCharacter CharacterId; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class DeceitCoreRuntime.DeceitCharacterSelectionComponent
// Size: 0xd8 (Inherited: 0xb0)
struct UDeceitCharacterSelectionComponent : UGameStateComponent {
	struct TArray<enum class EDeceitCharacter> ValidCharacters; // 0xb0(0x10)
	char pad_C0[0x18]; // 0xc0(0x18)
};

// Class DeceitCoreRuntime.DeceitDeveloperSettings
// Size: 0x70 (Inherited: 0x38)
struct UDeceitDeveloperSettings : UDeveloperSettingsBackedByCVars {
	enum class EGamePhaseRestriction GamePhaseRestriction; // 0x38(0x01)
	bool bShouldDisableAutoEnding; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float ObjectiveAvailabilityTickDurationOverride; // 0x3c(0x04)
	int32_t ObjectivesRequiredToUnlockKeyOverride; // 0x40(0x04)
	bool bShouldSkipTerrorTransformation; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32_t TotalRequiredBloodOverride; // 0x48(0x04)
	int32_t InfectedCountOverride; // 0x4c(0x04)
	bool bDisableTransitionWidgets; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float IncapacitationDurationOverride; // 0x54(0x04)
	int32_t VoteThresholdOverride; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<enum class EDeceitCharacter> ValidCharactersOverride; // 0x60(0x10)
};

// Class DeceitCoreRuntime.DeceitDevelopmentStatics
// Size: 0x28 (Inherited: 0x28)
struct UDeceitDevelopmentStatics : UBlueprintFunctionLibrary {

	bool ShouldSkipTerrorTransformation(); // Function DeceitCoreRuntime.DeceitDevelopmentStatics.ShouldSkipTerrorTransformation // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9fa540
	bool ShouldDisableTransitionWidgets(); // Function DeceitCoreRuntime.DeceitDevelopmentStatics.ShouldDisableTransitionWidgets // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9fa540
	bool ShouldDisableAutomaticEnding(); // Function DeceitCoreRuntime.DeceitDevelopmentStatics.ShouldDisableAutomaticEnding // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9fa540
	bool IsPlayInEditor(struct UObject* WorldContextObject); // Function DeceitCoreRuntime.DeceitDevelopmentStatics.IsPlayInEditor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fa6a0
	int32_t GetVoteThresholdOverride(); // Function DeceitCoreRuntime.DeceitDevelopmentStatics.GetVoteThresholdOverride // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9fa5a0
	int32_t GetTotalRequiredBloodOverride(); // Function DeceitCoreRuntime.DeceitDevelopmentStatics.GetTotalRequiredBloodOverride // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9fa5a0
	int32_t GetObjectivesRequiredToUnlockKeyOverride(); // Function DeceitCoreRuntime.DeceitDevelopmentStatics.GetObjectivesRequiredToUnlockKeyOverride // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9fa5a0
	float GetObjectiveAvailabilityTickDurationOverride(); // Function DeceitCoreRuntime.DeceitDevelopmentStatics.GetObjectiveAvailabilityTickDurationOverride // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9fa570
	int32_t GetInfectedCountOverride(); // Function DeceitCoreRuntime.DeceitDevelopmentStatics.GetInfectedCountOverride // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9fa5a0
	float GetIncapacitationDurationOverride(); // Function DeceitCoreRuntime.DeceitDevelopmentStatics.GetIncapacitationDurationOverride // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9fa570
	enum class EGamePhaseRestriction GetGamePhaseRestriction(); // Function DeceitCoreRuntime.DeceitDevelopmentStatics.GetGamePhaseRestriction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fa540
};

// Class DeceitCoreRuntime.DeceitInteractable
// Size: 0x290 (Inherited: 0x278)
struct ADeceitInteractable : AActor {
	char pad_278[0x8]; // 0x278(0x08)
	struct TArray<struct FDeceitInteractionOption> Options; // 0x280(0x10)
};

// Class DeceitCoreRuntime.DeceitInteractableComponent
// Size: 0x2d0 (Inherited: 0x2b0)
struct UDeceitInteractableComponent : USceneComponent {
	char pad_2B0[0x8]; // 0x2b0(0x08)
	struct TArray<struct FDeceitInteractionOption> Options; // 0x2b8(0x10)
	char pad_2C8[0x8]; // 0x2c8(0x08)
};

// Class DeceitCoreRuntime.DeceitMovementComponent
// Size: 0x1000 (Inherited: 0x1000)
struct UDeceitMovementComponent : ULyraCharacterMovementComponent {
};

// Class DeceitCoreRuntime.DeceitPlayerState
// Size: 0x550 (Inherited: 0x538)
struct ADeceitPlayerState : ALyraPlayerState {
	enum class EDeceitCharacter Character; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
	struct FMulticastInlineDelegate OnCharacterChanged; // 0x540(0x10)

	void OnRep_Character(); // Function DeceitCoreRuntime.DeceitPlayerState.OnRep_Character // (Final|Native|Public) // @ game+0x9fa850
	void OnCharacterSet(); // Function DeceitCoreRuntime.DeceitPlayerState.OnCharacterSet // (Event|Public|BlueprintEvent) // @ game+0x2552560
};

// Class DeceitCoreRuntime.Deceit_PlayerSpawningComponent
// Size: 0xc0 (Inherited: 0xc0)
struct UDeceit_PlayerSpawningComponent : ULyraPlayerSpawningManagerComponent {

	void RespawnPlayer(struct AController* Player, struct FGameplayTag MatchingTag); // Function DeceitCoreRuntime.Deceit_PlayerSpawningComponent.RespawnPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x9fa9b0
};

// Class DeceitCoreRuntime.PlayerControllerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPlayerControllerFunctionLibrary : UBlueprintFunctionLibrary {

	void EnterSpectator(struct APlayerController* PlayerController); // Function DeceitCoreRuntime.PlayerControllerFunctionLibrary.EnterSpectator // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fa210
};

// Class DeceitCoreRuntime.PlayerStateFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPlayerStateFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsPlayerLocallyControlled(struct APlayerState* PlayerState); // Function DeceitCoreRuntime.PlayerStateFunctionLibrary.IsPlayerLocallyControlled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fa7c0
	bool IsPlayerAlive(struct APlayerState* PlayerState); // Function DeceitCoreRuntime.PlayerStateFunctionLibrary.IsPlayerAlive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fa730
	struct FString GetUniqueNetIdString(struct APlayerState* PlayerState); // Function DeceitCoreRuntime.PlayerStateFunctionLibrary.GetUniqueNetIdString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fa5d0
	struct TArray<struct APlayerState*> GetAlivePlayersFiltered(struct UObject* WorldContextObject, struct FGameplayTagContainer RequiredTags, struct FGameplayTagContainer BlockedTags); // Function DeceitCoreRuntime.PlayerStateFunctionLibrary.GetAlivePlayersFiltered // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fa360
	struct TArray<struct APlayerState*> GetAlivePlayers(struct UObject* WorldContextObject); // Function DeceitCoreRuntime.PlayerStateFunctionLibrary.GetAlivePlayers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fa290
};

// Class DeceitCoreRuntime.VaultableActor
// Size: 0x280 (Inherited: 0x278)
struct AVaultableActor : AActor {
	char pad_278[0x8]; // 0x278(0x08)
};

