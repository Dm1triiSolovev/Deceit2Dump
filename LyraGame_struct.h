// Enum LyraGame.EActorCanvasProjectionMode
enum class EActorCanvasProjectionMode : uint8 {
	ComponentPoint = 0,
	ComponentBoundingBox = 1,
	ComponentScreenBoundingBox = 2,
	ActorBoundingBox = 3,
	ActorScreenBoundingBox = 4,
	EActorCanvasProjectionMode_MAX = 5
};

// Enum LyraGame.ELyraWidgetInputMode
enum class ELyraWidgetInputMode : uint8 {
	Default = 0,
	GameAndMenu = 1,
	Game = 2,
	Menu = 3,
	ELyraWidgetInputMode_MAX = 4
};

// Enum LyraGame.EBlueprintExposedNetMode
enum class EBlueprintExposedNetMode : uint8 {
	Standalone = 0,
	DedicatedServer = 1,
	ListenServer = 2,
	Client = 3,
	EBlueprintExposedNetMode_MAX = 4
};

// Enum LyraGame.ELyraCameraModeBlendFunction
enum class ELyraCameraModeBlendFunction : uint8 {
	Linear = 0,
	EaseIn = 1,
	EaseOut = 2,
	EaseInOut = 3,
	COUNT = 4,
	ELyraCameraModeBlendFunction_MAX = 5
};

// Enum LyraGame.ECharacterCustomizationCollisionMode
enum class ECharacterCustomizationCollisionMode : uint8 {
	NoCollision = 0,
	UseCollisionFromCharacterPart = 1,
	ECharacterCustomizationCollisionMode_MAX = 2
};

// Enum LyraGame.EEffectsContextMatchType
enum class EEffectsContextMatchType : uint8 {
	ExactMatch = 0,
	BestMatch = 1,
	EEffectsContextMatchType_MAX = 2
};

// Enum LyraGame.EContextEffectsLibraryLoadState
enum class EContextEffectsLibraryLoadState : uint8 {
	Unloaded = 0,
	Loading = 1,
	Loaded = 2,
	EContextEffectsLibraryLoadState_MAX = 3
};

// Enum LyraGame.ECosmeticCheatMode
enum class ECosmeticCheatMode : uint8 {
	ReplaceParts = 0,
	AddParts = 1,
	ECosmeticCheatMode_MAX = 2
};

// Enum LyraGame.ECheatExecutionTime
enum class ECheatExecutionTime : uint8 {
	OnCheatManagerCreated = 0,
	OnPlayerPawnPossession = 1,
	ECheatExecutionTime_MAX = 2
};

// Enum LyraGame.EPhaseTagMatchType
enum class EPhaseTagMatchType : uint8 {
	ExactMatch = 0,
	PartialMatch = 1,
	EPhaseTagMatchType_MAX = 2
};

// Enum LyraGame.ELyraAbilityActivationPolicy
enum class ELyraAbilityActivationPolicy : uint8 {
	OnInputTriggered = 0,
	WhileInputActive = 1,
	OnSpawn = 2,
	ELyraAbilityActivationPolicy_MAX = 3
};

// Enum LyraGame.ELyraAbilityActivationGroup
enum class ELyraAbilityActivationGroup : uint8 {
	Independent = 0,
	Exclusive_Replaceable = 1,
	Exclusive_Blocking = 2,
	MAX = 3
};

// Enum LyraGame.ELyraAbilityTargetingSource
enum class ELyraAbilityTargetingSource : uint8 {
	CameraTowardsFocus = 0,
	PawnForward = 1,
	PawnTowardsFocus = 2,
	WeaponForward = 3,
	WeaponTowardsFocus = 4,
	Custom = 5,
	ELyraAbilityTargetingSource_MAX = 6
};

// Enum LyraGame.ELyraDeathState
enum class ELyraDeathState : uint8 {
	NotDead = 0,
	DeathStarted = 1,
	DeathFinished = 2,
	ELyraDeathState_MAX = 3
};

// Enum LyraGame.EDeadzoneStick
enum class EDeadzoneStick : uint8 {
	MoveStick = 0,
	LookStick = 1,
	EDeadzoneStick_MAX = 2
};

// Enum LyraGame.ELyraTargetingType
enum class ELyraTargetingType : uint8 {
	Normal = 0,
	ADS = 1,
	ELyraTargetingType_MAX = 2
};

// Enum LyraGame.ELyraFramePacingMode
enum class ELyraFramePacingMode : uint8 {
	DesktopStyle = 0,
	ConsoleStyle = 1,
	MobileStyle = 2,
	ELyraFramePacingMode_MAX = 3
};

// Enum LyraGame.ELyraStatDisplayMode
enum class ELyraStatDisplayMode : uint8 {
	Hidden = 0,
	TextOnly = 1,
	GraphOnly = 2,
	TextAndGraph = 3,
	ELyraStatDisplayMode_MAX = 4
};

// Enum LyraGame.ELyraDisplayablePerformanceStat
enum class ELyraDisplayablePerformanceStat : uint8 {
	ClientFPS = 0,
	ServerFPS = 1,
	IdleTime = 2,
	FrameTime = 3,
	FrameTime_GameThread = 4,
	FrameTime_RenderThread = 5,
	FrameTime_RHIThread = 6,
	FrameTime_GPU = 7,
	Ping = 8,
	PacketLoss_Incoming = 9,
	PacketLoss_Outgoing = 10,
	PacketRate_Incoming = 11,
	PacketRate_Outgoing = 12,
	PacketSize_Incoming = 13,
	PacketSize_Outgoing = 14,
	Count = 15,
	ELyraDisplayablePerformanceStat_MAX = 16
};

// Enum LyraGame.ELyraPlayerConnectionType
enum class ELyraPlayerConnectionType : uint8 {
	Player = 0,
	LiveSpectator = 1,
	ReplaySpectator = 2,
	InactivePlayer = 3,
	ELyraPlayerConnectionType_MAX = 4
};

// Enum LyraGame.EColorBlindMode
enum class EColorBlindMode : uint8 {
	Off = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	EColorBlindMode_MAX = 4
};

// Enum LyraGame.ELyraAllowBackgroundAudioSetting
enum class ELyraAllowBackgroundAudioSetting : uint8 {
	Off = 0,
	AllSounds = 1,
	Num = 2,
	ELyraAllowBackgroundAudioSetting_MAX = 3
};

// Enum LyraGame.ELyraGamepadSensitivity
enum class ELyraGamepadSensitivity : uint8 {
	Invalid = 0,
	Slow = 1,
	SlowPlus = 2,
	SlowPlusPlus = 3,
	Normal = 4,
	NormalPlus = 5,
	NormalPlusPlus = 6,
	Fast = 7,
	FastPlus = 8,
	FastPlusPlus = 9,
	Insane = 10,
	MAX = 11
};

// Enum LyraGame.ELyraTeamComparison
enum class ELyraTeamComparison : uint8 {
	OnSameTeam = 0,
	DifferentTeams = 1,
	InvalidArgument = 2,
	ELyraTeamComparison_MAX = 3
};

// ScriptStruct LyraGame.InteractionOption
// Size: 0x88 (Inherited: 0x00)
struct FInteractionOption {
	struct TScriptInterface<IInteractableTarget> InteractableTarget; // 0x00(0x10)
	struct FText Text; // 0x10(0x18)
	struct FText SubText; // 0x28(0x18)
	float InteractionDuration; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UGameplayAbility* InteractionAbilityToGrant; // 0x48(0x08)
	struct UAbilitySystemComponent* TargetAbilitySystem; // 0x50(0x08)
	struct FGameplayAbilitySpecHandle TargetInteractionAbilityHandle; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TSoftClassPtr<UObject> InteractionWidgetClass; // 0x60(0x28)
};

// ScriptStruct LyraGame.VaultOption
// Size: 0x10 (Inherited: 0x00)
struct FVaultOption {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct LyraGame.LyraTabDescriptor
// Size: 0x110 (Inherited: 0x00)
struct FLyraTabDescriptor {
	struct FName TabId; // 0x00(0x08)
	struct FText TabText; // 0x08(0x18)
	struct FSlateBrush IconBrush; // 0x20(0xd0)
	bool bHidden; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct UCommonButtonBase* TabButtonType; // 0xf8(0x08)
	struct UCommonUserWidget* TabContentType; // 0x100(0x08)
	struct UWidget* CreatedTabContentWidget; // 0x108(0x08)
};

// ScriptStruct LyraGame.LyraContextEffectAnimNotifyVFXSettings
// Size: 0x18 (Inherited: 0x00)
struct FLyraContextEffectAnimNotifyVFXSettings {
	struct FVector Scale; // 0x00(0x18)
};

// ScriptStruct LyraGame.LyraContextEffectAnimNotifyAudioSettings
// Size: 0x08 (Inherited: 0x00)
struct FLyraContextEffectAnimNotifyAudioSettings {
	float VolumeMultiplier; // 0x00(0x04)
	float PitchMultiplier; // 0x04(0x04)
};

// ScriptStruct LyraGame.LyraContextEffectAnimNotifyTraceSettings
// Size: 0x28 (Inherited: 0x00)
struct FLyraContextEffectAnimNotifyTraceSettings {
	enum class ECollisionChannel TraceChannel; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector EndTraceLocationOffset; // 0x08(0x18)
	bool bIgnoreActor; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct LyraGame.LyraContextEffectAnimNotifyPreviewSettings
// Size: 0x40 (Inherited: 0x00)
struct FLyraContextEffectAnimNotifyPreviewSettings {
	bool bPreviewPhysicalSurfaceAsContext; // 0x00(0x01)
	enum class EPhysicalSurface PreviewPhysicalSurface; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FSoftObjectPath PreviewContextEffectsLibrary; // 0x08(0x18)
	struct FGameplayTagContainer PreviewContexts; // 0x20(0x20)
};

// ScriptStruct LyraGame.LyraAbilityGrant
// Size: 0x28 (Inherited: 0x00)
struct FLyraAbilityGrant {
	struct TSoftClassPtr<UObject> AbilityType; // 0x00(0x28)
};

// ScriptStruct LyraGame.LyraAttributeSetGrant
// Size: 0x50 (Inherited: 0x00)
struct FLyraAttributeSetGrant {
	struct TSoftClassPtr<UObject> AttributeSetType; // 0x00(0x28)
	struct TSoftObjectPtr<UDataTable> InitializationData; // 0x28(0x28)
};

// ScriptStruct LyraGame.GameFeatureAbilitiesEntry
// Size: 0x58 (Inherited: 0x00)
struct FGameFeatureAbilitiesEntry {
	struct TSoftClassPtr<UObject> ActorClass; // 0x00(0x28)
	struct TArray<struct FLyraAbilityGrant> GrantedAbilities; // 0x28(0x10)
	struct TArray<struct FLyraAttributeSetGrant> GrantedAttributes; // 0x38(0x10)
	struct TArray<struct TSoftObjectPtr<ULyraAbilitySet>> GrantedAbilitySets; // 0x48(0x10)
};

// ScriptStruct LyraGame.InputMappingContextAndPriority
// Size: 0x30 (Inherited: 0x00)
struct FInputMappingContextAndPriority {
	struct TSoftObjectPtr<UInputMappingContext> InputMapping; // 0x00(0x28)
	int32_t Priority; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct LyraGame.LyraHUDLayoutRequest
// Size: 0x30 (Inherited: 0x00)
struct FLyraHUDLayoutRequest {
	struct TSoftClassPtr<UObject> LayoutClass; // 0x00(0x28)
	struct FGameplayTag LayerID; // 0x28(0x08)
};

// ScriptStruct LyraGame.LyraHUDElementEntry
// Size: 0x30 (Inherited: 0x00)
struct FLyraHUDElementEntry {
	struct TSoftClassPtr<UObject> WidgetClass; // 0x00(0x28)
	struct FGameplayTag SlotID; // 0x28(0x08)
};

// ScriptStruct LyraGame.GameplayTagStack
// Size: 0x18 (Inherited: 0x0c)
struct FGameplayTagStack : FFastArraySerializerItem {
	struct FGameplayTag Tag; // 0x0c(0x08)
	int32_t StackCount; // 0x14(0x04)
};

// ScriptStruct LyraGame.GameplayTagStackContainer
// Size: 0x168 (Inherited: 0x108)
struct FGameplayTagStackContainer : FFastArraySerializer {
	struct TArray<struct FGameplayTagStack> Stacks; // 0x108(0x10)
	char pad_118[0x50]; // 0x118(0x50)
};

// ScriptStruct LyraGame.InteractionQuery
// Size: 0x18 (Inherited: 0x00)
struct FInteractionQuery {
	struct TWeakObjectPtr<struct AActor> RequestingAvatar; // 0x00(0x08)
	struct TWeakObjectPtr<struct AController> RequestingController; // 0x08(0x08)
	struct TWeakObjectPtr<struct UObject> OptionalObjectData; // 0x10(0x08)
};

// ScriptStruct LyraGame.PickupTemplate
// Size: 0x10 (Inherited: 0x00)
struct FPickupTemplate {
	int32_t StackCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ULyraInventoryItemDefinition* ItemDef; // 0x08(0x08)
};

// ScriptStruct LyraGame.PickupInstance
// Size: 0x08 (Inherited: 0x00)
struct FPickupInstance {
	struct ULyraInventoryItemInstance* Item; // 0x00(0x08)
};

// ScriptStruct LyraGame.InventoryPickup
// Size: 0x20 (Inherited: 0x00)
struct FInventoryPickup {
	struct TArray<struct FPickupInstance> Instances; // 0x00(0x10)
	struct TArray<struct FPickupTemplate> Templates; // 0x10(0x10)
};

// ScriptStruct LyraGame.LyraAbilitySet_GameplayAbility
// Size: 0x18 (Inherited: 0x00)
struct FLyraAbilitySet_GameplayAbility {
	struct ULyraGameplayAbility* Ability; // 0x00(0x08)
	int32_t AbilityLevel; // 0x08(0x04)
	struct FGameplayTag InputTag; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct LyraGame.LyraAbilitySet_GameplayEffect
// Size: 0x10 (Inherited: 0x00)
struct FLyraAbilitySet_GameplayEffect {
	struct UGameplayEffect* GameplayEffect; // 0x00(0x08)
	float EffectLevel; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct LyraGame.LyraAbilitySet_AttributeSet
// Size: 0x08 (Inherited: 0x00)
struct FLyraAbilitySet_AttributeSet {
	struct UAttributeSet* AttributeSet; // 0x00(0x08)
};

// ScriptStruct LyraGame.LyraAbilitySet_GrantedHandles
// Size: 0x30 (Inherited: 0x00)
struct FLyraAbilitySet_GrantedHandles {
	struct TArray<struct FGameplayAbilitySpecHandle> AbilitySpecHandles; // 0x00(0x10)
	struct TArray<struct FActiveGameplayEffectHandle> GameplayEffectHandles; // 0x10(0x10)
	struct TArray<struct UAttributeSet*> GrantedAttributeSets; // 0x20(0x10)
};

// ScriptStruct LyraGame.LyraAbilitySimpleFailureMessage
// Size: 0x40 (Inherited: 0x00)
struct FLyraAbilitySimpleFailureMessage {
	struct APlayerController* PlayerController; // 0x00(0x08)
	struct FGameplayTagContainer FailureTags; // 0x08(0x20)
	struct FText UserFacingReason; // 0x28(0x18)
};

// ScriptStruct LyraGame.LyraAbilityTagRelationship
// Size: 0x88 (Inherited: 0x00)
struct FLyraAbilityTagRelationship {
	struct FGameplayTag AbilityTag; // 0x00(0x08)
	struct FGameplayTagContainer AbilityTagsToBlock; // 0x08(0x20)
	struct FGameplayTagContainer AbilityTagsToCancel; // 0x28(0x20)
	struct FGameplayTagContainer ActivationRequiredTags; // 0x48(0x20)
	struct FGameplayTagContainer ActivationBlockedTags; // 0x68(0x20)
};

// ScriptStruct LyraGame.LyraAudioSubmixEffectsChain
// Size: 0x18 (Inherited: 0x00)
struct FLyraAudioSubmixEffectsChain {
	struct USoundSubmix* Submix; // 0x00(0x08)
	struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectChain; // 0x08(0x10)
};

// ScriptStruct LyraGame.LyraSubmixEffectChainMap
// Size: 0x38 (Inherited: 0x00)
struct FLyraSubmixEffectChainMap {
	struct TSoftObjectPtr<USoundSubmix> Submix; // 0x00(0x28)
	struct TArray<struct TSoftObjectPtr<USoundEffectSubmixPreset>> SubmixEffectChain; // 0x28(0x10)
};

// ScriptStruct LyraGame.LyraReplicatedAcceleration
// Size: 0x03 (Inherited: 0x00)
struct FLyraReplicatedAcceleration {
	char AccelXYRadians; // 0x00(0x01)
	char AccelXYMagnitude; // 0x01(0x01)
	int8_t AccelZ; // 0x02(0x01)
};

// ScriptStruct LyraGame.LyraCharacterGroundInfo
// Size: 0xf8 (Inherited: 0x00)
struct FLyraCharacterGroundInfo {
	char pad_0[0x8]; // 0x00(0x08)
	struct FHitResult GroundHitResult; // 0x08(0xe8)
	float GroundDistance; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct LyraGame.LyraCharacterPartHandle
// Size: 0x04 (Inherited: 0x00)
struct FLyraCharacterPartHandle {
	int32_t PartHandle; // 0x00(0x04)
};

// ScriptStruct LyraGame.LyraCharacterPart
// Size: 0x18 (Inherited: 0x00)
struct FLyraCharacterPart {
	struct AActor* PartClass; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x08)
	enum class ECharacterCustomizationCollisionMode CollisionMode; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct LyraGame.LyraContextEffects
// Size: 0x38 (Inherited: 0x00)
struct FLyraContextEffects {
	struct FGameplayTag EffectTag; // 0x00(0x08)
	struct FGameplayTagContainer Context; // 0x08(0x20)
	struct TArray<struct FSoftObjectPath> Effects; // 0x28(0x10)
};

// ScriptStruct LyraGame.LyraControllerCharacterPartEntry
// Size: 0x20 (Inherited: 0x00)
struct FLyraControllerCharacterPartEntry {
	struct FLyraCharacterPart Part; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct LyraGame.LyraAnimLayerSelectionEntry
// Size: 0x28 (Inherited: 0x00)
struct FLyraAnimLayerSelectionEntry {
	struct UAnimInstance* Layer; // 0x00(0x08)
	struct FGameplayTagContainer RequiredTags; // 0x08(0x20)
};

// ScriptStruct LyraGame.LyraAnimLayerSelectionSet
// Size: 0x18 (Inherited: 0x00)
struct FLyraAnimLayerSelectionSet {
	struct TArray<struct FLyraAnimLayerSelectionEntry> LayerRules; // 0x00(0x10)
	struct UAnimInstance* DefaultLayer; // 0x10(0x08)
};

// ScriptStruct LyraGame.LyraAnimBodyStyleSelectionEntry
// Size: 0x28 (Inherited: 0x00)
struct FLyraAnimBodyStyleSelectionEntry {
	struct USkeletalMesh* Mesh; // 0x00(0x08)
	struct FGameplayTagContainer RequiredTags; // 0x08(0x20)
};

// ScriptStruct LyraGame.LyraAnimBodyStyleSelectionSet
// Size: 0x20 (Inherited: 0x00)
struct FLyraAnimBodyStyleSelectionSet {
	struct TArray<struct FLyraAnimBodyStyleSelectionEntry> MeshRules; // 0x00(0x10)
	struct USkeletalMesh* DefaultMesh; // 0x10(0x08)
	struct UPhysicsAsset* ForcedPhysicsAsset; // 0x18(0x08)
};

// ScriptStruct LyraGame.LyraCheatToRun
// Size: 0x18 (Inherited: 0x00)
struct FLyraCheatToRun {
	enum class ECheatExecutionTime Phase; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Cheat; // 0x08(0x10)
};

// ScriptStruct LyraGame.LyraEquipmentActorToSpawn
// Size: 0x70 (Inherited: 0x00)
struct FLyraEquipmentActorToSpawn {
	struct AActor* ActorToSpawn; // 0x00(0x08)
	struct FName AttachSocket; // 0x08(0x08)
	struct FTransform AttachTransform; // 0x10(0x60)
};

// ScriptStruct LyraGame.LyraAppliedEquipmentEntry
// Size: 0x50 (Inherited: 0x0c)
struct FLyraAppliedEquipmentEntry : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct ULyraEquipmentDefinition* EquipmentDefinition; // 0x10(0x08)
	struct ULyraEquipmentInstance* Instance; // 0x18(0x08)
	struct FLyraAbilitySet_GrantedHandles GrantedHandles; // 0x20(0x30)
};

// ScriptStruct LyraGame.LyraEquipmentList
// Size: 0x120 (Inherited: 0x108)
struct FLyraEquipmentList : FFastArraySerializer {
	struct TArray<struct FLyraAppliedEquipmentEntry> Entries; // 0x108(0x10)
	struct UActorComponent* OwnerComponent; // 0x118(0x08)
};

// ScriptStruct LyraGame.LyraAbilityMontageFailureMessage
// Size: 0x30 (Inherited: 0x00)
struct FLyraAbilityMontageFailureMessage {
	struct APlayerController* PlayerController; // 0x00(0x08)
	struct FGameplayTagContainer FailureTags; // 0x08(0x20)
	struct UAnimMontage* FailureMontage; // 0x28(0x08)
};

// ScriptStruct LyraGame.LyraGameplayAbilityTargetData_SingleTargetHit
// Size: 0x100 (Inherited: 0xf8)
struct FLyraGameplayAbilityTargetData_SingleTargetHit : FGameplayAbilityTargetData_SingleTargetHit {
	int32_t CartridgeID; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct LyraGame.LyraPlayerResetMessage
// Size: 0x08 (Inherited: 0x00)
struct FLyraPlayerResetMessage {
	struct AActor* OwnerPlayerState; // 0x00(0x08)
};

// ScriptStruct LyraGame.LyraGameplayEffectContext
// Size: 0x90 (Inherited: 0x80)
struct FLyraGameplayEffectContext : FGameplayEffectContext {
	int32_t CartridgeID; // 0x80(0x04)
	struct TWeakObjectPtr<struct UObject> AbilitySourceObject; // 0x84(0x08)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct LyraGame.GlobalAppliedAbilityList
// Size: 0x50 (Inherited: 0x00)
struct FGlobalAppliedAbilityList {
	struct TMap<struct ULyraAbilitySystemComponent*, struct FGameplayAbilitySpecHandle> Handles; // 0x00(0x50)
};

// ScriptStruct LyraGame.GlobalAppliedEffectList
// Size: 0x50 (Inherited: 0x00)
struct FGlobalAppliedEffectList {
	struct TMap<struct ULyraAbilitySystemComponent*, struct FActiveGameplayEffectHandle> Handles; // 0x00(0x50)
};

// ScriptStruct LyraGame.ComboStep
// Size: 0x10 (Inherited: 0x00)
struct FComboStep {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct LyraGame.LyraInputAction
// Size: 0x10 (Inherited: 0x00)
struct FLyraInputAction {
	struct UInputAction* InputAction; // 0x00(0x08)
	struct FGameplayTag InputTag; // 0x08(0x08)
};

// ScriptStruct LyraGame.LyraInteractionDurationMessage
// Size: 0x10 (Inherited: 0x00)
struct FLyraInteractionDurationMessage {
	struct AActor* Instigator; // 0x00(0x08)
	float Duration; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct LyraGame.LyraInventoryChangeMessage
// Size: 0x18 (Inherited: 0x00)
struct FLyraInventoryChangeMessage {
	struct UActorComponent* InventoryOwner; // 0x00(0x08)
	struct ULyraInventoryItemInstance* Instance; // 0x08(0x08)
	int32_t NewCount; // 0x10(0x04)
	int32_t Delta; // 0x14(0x04)
};

// ScriptStruct LyraGame.LyraInventoryEntry
// Size: 0x20 (Inherited: 0x0c)
struct FLyraInventoryEntry : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct ULyraInventoryItemInstance* Instance; // 0x10(0x08)
	int32_t StackCount; // 0x18(0x04)
	int32_t LastObservedCount; // 0x1c(0x04)
};

// ScriptStruct LyraGame.LyraInventoryList
// Size: 0x120 (Inherited: 0x108)
struct FLyraInventoryList : FFastArraySerializer {
	struct TArray<struct FLyraInventoryEntry> Entries; // 0x108(0x10)
	struct UActorComponent* OwnerComponent; // 0x118(0x08)
};

// ScriptStruct LyraGame.LoadedMappableConfigPair
// Size: 0x10 (Inherited: 0x00)
struct FLoadedMappableConfigPair {
	struct UPlayerMappableInputConfig* Config; // 0x00(0x08)
	enum class ECommonInputType Type; // 0x08(0x01)
	bool bIsActive; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct LyraGame.MappableConfigPair
// Size: 0x78 (Inherited: 0x00)
struct FMappableConfigPair {
	struct TSoftObjectPtr<UPlayerMappableInputConfig> Config; // 0x00(0x28)
	enum class ECommonInputType Type; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FGameplayTagContainer DependentPlatformTraits; // 0x30(0x20)
	struct FGameplayTagContainer ExcludedPlatformTraits; // 0x50(0x20)
	bool bShouldActivateAutomatically; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct LyraGame.LyraNotificationMessage
// Size: 0x38 (Inherited: 0x00)
struct FLyraNotificationMessage {
	struct FGameplayTag TargetChannel; // 0x00(0x08)
	struct APlayerState* TargetPlayer; // 0x08(0x08)
	struct FText PayloadMessage; // 0x10(0x18)
	struct FGameplayTag PayloadTag; // 0x28(0x08)
	struct UObject* PayloadObject; // 0x30(0x08)
};

// ScriptStruct LyraGame.LyraNumberPopRequest
// Size: 0x60 (Inherited: 0x00)
struct FLyraNumberPopRequest {
	struct FVector WorldLocation; // 0x00(0x18)
	struct FGameplayTagContainer SourceTags; // 0x18(0x20)
	struct FGameplayTagContainer TargetTags; // 0x38(0x20)
	int32_t NumberToDisplay; // 0x58(0x04)
	bool bIsCriticalDamage; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// ScriptStruct LyraGame.PooledNumberPopComponentList
// Size: 0x10 (Inherited: 0x00)
struct FPooledNumberPopComponentList {
	struct TArray<struct UStaticMeshComponent*> Components; // 0x00(0x10)
};

// ScriptStruct LyraGame.LiveNumberPopEntry
// Size: 0x18 (Inherited: 0x00)
struct FLiveNumberPopEntry {
	struct UStaticMeshComponent* Component; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct LyraGame.LyraAppliedCharacterPartEntry
// Size: 0x38 (Inherited: 0x0c)
struct FLyraAppliedCharacterPartEntry : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FLyraCharacterPart Part; // 0x10(0x18)
	int32_t PartHandle; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UChildActorComponent* SpawnedComponent; // 0x30(0x08)
};

// ScriptStruct LyraGame.LyraCharacterPartList
// Size: 0x128 (Inherited: 0x108)
struct FLyraCharacterPartList : FFastArraySerializer {
	struct TArray<struct FLyraAppliedCharacterPartEntry> Entries; // 0x108(0x10)
	struct ULyraPawnComponent_CharacterParts* OwnerComponent; // 0x118(0x08)
	char pad_120[0x8]; // 0x120(0x08)
};

// ScriptStruct LyraGame.LyraPenetrationAvoidanceFeeler
// Size: 0x30 (Inherited: 0x00)
struct FLyraPenetrationAvoidanceFeeler {
	struct FRotator AdjustmentRot; // 0x00(0x18)
	float WorldWeight; // 0x18(0x04)
	float PawnWeight; // 0x1c(0x04)
	float Extent; // 0x20(0x04)
	int32_t TraceInterval; // 0x24(0x04)
	int32_t FramesUntilNextTrace; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct LyraGame.LyraQualityDeviceProfileVariant
// Size: 0x30 (Inherited: 0x00)
struct FLyraQualityDeviceProfileVariant {
	struct FText DisplayName; // 0x00(0x18)
	struct FString DeviceProfileSuffix; // 0x18(0x10)
	int32_t MinRefreshRate; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct LyraGame.LyraPerformanceStatGroup
// Size: 0x98 (Inherited: 0x00)
struct FLyraPerformanceStatGroup {
	struct FGameplayTagQuery VisibilityQuery; // 0x00(0x48)
	struct TSet<enum class ELyraDisplayablePerformanceStat> AllowedStats; // 0x48(0x50)
};

// ScriptStruct LyraGame.LyraQuickBarSlotsChangedMessage
// Size: 0x18 (Inherited: 0x00)
struct FLyraQuickBarSlotsChangedMessage {
	struct AActor* Owner; // 0x00(0x08)
	struct TArray<struct ULyraInventoryItemInstance*> Slots; // 0x08(0x10)
};

// ScriptStruct LyraGame.LyraQuickBarActiveIndexChangedMessage
// Size: 0x10 (Inherited: 0x00)
struct FLyraQuickBarActiveIndexChangedMessage {
	struct AActor* Owner; // 0x00(0x08)
	int32_t ActiveIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct LyraGame.LyraScalabilitySnapshot
// Size: 0x60 (Inherited: 0x00)
struct FLyraScalabilitySnapshot {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct LyraGame.LyraTeamTrackingInfo
// Size: 0x28 (Inherited: 0x00)
struct FLyraTeamTrackingInfo {
	struct ALyraTeamPublicInfo* PublicInfo; // 0x00(0x08)
	struct ALyraTeamPrivateInfo* PrivateInfo; // 0x08(0x08)
	struct ULyraTeamDisplayAsset* DisplayAsset; // 0x10(0x08)
	struct FMulticastInlineDelegate OnTeamDisplayAssetChanged; // 0x18(0x10)
};

// ScriptStruct LyraGame.LyraVerbMessage
// Size: 0x80 (Inherited: 0x00)
struct FLyraVerbMessage {
	struct FGameplayTag Verb; // 0x00(0x08)
	struct UObject* Instigator; // 0x08(0x08)
	struct UObject* Target; // 0x10(0x08)
	struct FGameplayTagContainer InstigatorTags; // 0x18(0x20)
	struct FGameplayTagContainer TargetTags; // 0x38(0x20)
	struct FGameplayTagContainer ContextTags; // 0x58(0x20)
	double Magnitude; // 0x78(0x08)
};

// ScriptStruct LyraGame.LyraVerbMessageReplicationEntry
// Size: 0x90 (Inherited: 0x0c)
struct FLyraVerbMessageReplicationEntry : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FLyraVerbMessage Message; // 0x10(0x80)
};

// ScriptStruct LyraGame.LyraVerbMessageReplication
// Size: 0x120 (Inherited: 0x108)
struct FLyraVerbMessageReplication : FFastArraySerializer {
	struct TArray<struct FLyraVerbMessageReplicationEntry> CurrentMessages; // 0x108(0x10)
	struct UObject* Owner; // 0x118(0x08)
};

// ScriptStruct LyraGame.CircumferenceMarkerEntry
// Size: 0x08 (Inherited: 0x00)
struct FCircumferenceMarkerEntry {
	float PositionAngle; // 0x00(0x04)
	float ImageRotationAngle; // 0x04(0x04)
};

// ScriptStruct LyraGame.VaultQuery
// Size: 0x18 (Inherited: 0x00)
struct FVaultQuery {
	struct TWeakObjectPtr<struct AActor> RequestingAvatar; // 0x00(0x08)
	struct TWeakObjectPtr<struct AController> RequestingController; // 0x08(0x08)
	struct TWeakObjectPtr<struct UObject> OptionalObjectData; // 0x10(0x08)
};

