// Class EnhancedInput.InputModifier
// Size: 0x28 (Inherited: 0x28)
struct UInputModifier : UObject {

	struct FInputActionValue ModifyRaw(struct UEnhancedPlayerInput* PlayerInput, struct FInputActionValue CurrentValue, float DeltaTime); // Function EnhancedInput.InputModifier.ModifyRaw // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1013030
	struct FLinearColor GetVisualizationColor(struct FInputActionValue SampleValue, struct FInputActionValue FinalValue); // Function EnhancedInput.InputModifier.GetVisualizationColor // (Native|Event|Public|HasDefaults|BlueprintEvent|Const) // @ game+0x10126f0
	enum class EModifierExecutionPhase GetExecutionPhase(); // Function EnhancedInput.InputModifier.GetExecutionPhase // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x1012420
};

// Class EnhancedInput.InputTrigger
// Size: 0x50 (Inherited: 0x28)
struct UInputTrigger : UObject {
	float ActuationThreshold; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FInputActionValue LastValue; // 0x30(0x20)

	enum class ETriggerState UpdateState(struct UEnhancedPlayerInput* PlayerInput, struct FInputActionValue ModifiedValue, float DeltaTime); // Function EnhancedInput.InputTrigger.UpdateState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1013e40
	bool IsActuated(struct FInputActionValue& ForValue); // Function EnhancedInput.InputTrigger.IsActuated // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1012c50
	enum class ETriggerType GetTriggerType(); // Function EnhancedInput.InputTrigger.GetTriggerType // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x10126c0
};

// Class EnhancedInput.EnhancedInputActionDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UEnhancedInputActionDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintEnhancedInputActionBinding> InputActionDelegateBindings; // 0x28(0x10)
};

// Class EnhancedInput.EnhancedInputActionValueBinding
// Size: 0x38 (Inherited: 0x28)
struct UEnhancedInputActionValueBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintEnhancedInputActionBinding> InputActionValueBindings; // 0x28(0x10)
};

// Class EnhancedInput.EnhancedInputComponent
// Size: 0x168 (Inherited: 0x138)
struct UEnhancedInputComponent : UInputComponent {
	char pad_138[0x30]; // 0x138(0x30)

	struct FInputActionValue GetBoundActionValue(struct UInputAction* Action); // Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1012240
};

// Class EnhancedInput.EnhancedInputLibrary
// Size: 0x28 (Inherited: 0x28)
struct UEnhancedInputLibrary : UBlueprintFunctionLibrary {

	void RequestRebuildControlMappingsUsingContext(struct UInputMappingContext* Context, bool bForceImmediately); // Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1013b90
	struct FInputActionValue MakeInputActionValue(float X, float Y, float Z, struct FInputActionValue& MatchValueType); // Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1012d30
	struct FInputActionValue GetBoundActionValue(struct AActor* Actor, struct UInputAction* Action); // Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10122f0
	struct FString Conv_InputActionValueToString(struct FInputActionValue ActionValue); // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1012140
	bool Conv_InputActionValueToBool(struct FInputActionValue InValue); // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1012090
	struct FVector Conv_InputActionValueToAxis3D(struct FInputActionValue ActionValue); // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1011fc0
	struct FVector2D Conv_InputActionValueToAxis2D(struct FInputActionValue InValue); // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1011f00
	float Conv_InputActionValueToAxis1D(struct FInputActionValue InValue); // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1011e50
	void BreakInputActionValue(struct FInputActionValue InActionValue, float& X, float& Y, float& Z); // Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1011c70
};

// Class EnhancedInput.EnhancedInputSubsystemInterface
// Size: 0x28 (Inherited: 0x28)
struct UEnhancedInputSubsystemInterface : UInterface {

	void RequestRebuildControlMappings(struct FModifyContextOptions& Options, enum class EInputMappingRebuildType RebuildType); // Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1013ab0
	int32_t RemovePlayerMappedKey(struct FName MappingName, struct FModifyContextOptions& Options); // Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappedKey // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10139c0
	void RemovePlayerMappableConfig(struct UPlayerMappableInputConfig* Config, struct FModifyContextOptions& Options); // Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10138e0
	void RemoveMappingContext(struct UInputMappingContext* MappingContext, struct FModifyContextOptions& Options); // Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1013800
	enum class EMappingQueryResult QueryMapKeyInContextSet(struct TArray<struct UInputMappingContext*>& PrioritizedActiveContexts, struct UInputMappingContext* InputContext, struct UInputAction* Action, struct FKey Key, struct TArray<struct FMappingQueryIssue>& OutIssues, enum class EMappingQueryIssue BlockingIssues); // Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1013570
	enum class EMappingQueryResult QueryMapKeyInActiveContextSet(struct UInputMappingContext* InputContext, struct UInputAction* Action, struct FKey Key, struct TArray<struct FMappingQueryIssue>& OutIssues, enum class EMappingQueryIssue BlockingIssues); // Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1013350
	struct TArray<struct FKey> QueryKeysMappedToAction(struct UInputAction* Action); // Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10131b0
	void InjectInputVectorForAction(struct UInputAction* Action, struct FVector Value, struct TArray<struct UInputModifier*>& Modifiers, struct TArray<struct UInputTrigger*>& Triggers); // Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1012aa0
	void InjectInputForAction(struct UInputAction* Action, struct FInputActionValue RawValue, struct TArray<struct UInputModifier*>& Modifiers, struct TArray<struct UInputTrigger*>& Triggers); // Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10128e0
	bool HasMappingContext(struct UInputMappingContext* MappingContext); // Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1012840
	void ClearAllMappings(); // Function EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1011e30
	int32_t AddPlayerMappedKey(struct FName MappingName, struct FKey NewKey, struct FModifyContextOptions& Options); // Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappedKey // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1011ad0
	void AddPlayerMappableConfig(struct UPlayerMappableInputConfig* Config, struct FModifyContextOptions& Options); // Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10119f0
	void AddMappingContext(struct UInputMappingContext* MappingContext, int32_t Priority, struct FModifyContextOptions& Options); // Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10118e0
};

// Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
// Size: 0x130 (Inherited: 0x30)
struct UEnhancedInputLocalPlayerSubsystem : ULocalPlayerSubsystem {
	char pad_30[0x100]; // 0x30(0x100)
};

// Class EnhancedInput.EnhancedInputEngineSubsystem
// Size: 0x138 (Inherited: 0x30)
struct UEnhancedInputEngineSubsystem : UEngineSubsystem {
	char pad_30[0x100]; // 0x30(0x100)
	struct UEnhancedPlayerInput* PlayerInput; // 0x130(0x08)
};

// Class EnhancedInput.EnhancedPlayerInput
// Size: 0x6e0 (Inherited: 0x498)
struct UEnhancedPlayerInput : UPlayerInput {
	struct TMap<struct UInputMappingContext*, int32_t> AppliedInputContexts; // 0x498(0x50)
	struct TArray<struct FEnhancedActionKeyMapping> EnhancedActionMappings; // 0x4e8(0x10)
	char pad_4F8[0x50]; // 0x4f8(0x50)
	struct TMap<struct UInputAction*, struct FInputActionInstance> ActionInstanceData; // 0x548(0x50)
	char pad_598[0x50]; // 0x598(0x50)
	struct TMap<struct FKey, struct FVector> KeysPressedThisTick; // 0x5e8(0x50)
	char pad_638[0xa8]; // 0x638(0xa8)
};

// Class EnhancedInput.InputAction
// Size: 0x58 (Inherited: 0x30)
struct UInputAction : UDataAsset {
	bool bConsumeInput; // 0x30(0x01)
	bool bTriggerWhenPaused; // 0x31(0x01)
	bool bReserveAllMappings; // 0x32(0x01)
	enum class EInputActionValueType ValueType; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct UInputTrigger*> Triggers; // 0x38(0x10)
	struct TArray<struct UInputModifier*> Modifiers; // 0x48(0x10)
};

// Class EnhancedInput.InputDebugKeyDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UInputDebugKeyDelegateBinding : UInputDelegateBinding {
	struct TArray<struct FBlueprintInputDebugKeyDelegateBinding> InputDebugKeyDelegateBindings; // 0x28(0x10)
};

// Class EnhancedInput.InputMappingContext
// Size: 0x58 (Inherited: 0x30)
struct UInputMappingContext : UDataAsset {
	struct FText ContextDescription; // 0x30(0x18)
	struct TArray<struct FEnhancedActionKeyMapping> Mappings; // 0x48(0x10)

	void UnmapKey(struct UInputAction* Action, struct FKey Key); // Function EnhancedInput.InputMappingContext.UnmapKey // (Final|Native|Public|BlueprintCallable) // @ game+0x1013d00
	void UnmapAll(); // Function EnhancedInput.InputMappingContext.UnmapAll // (Final|Native|Public|BlueprintCallable) // @ game+0x1013ce0
	void UnmapAction(struct UInputAction* Action); // Function EnhancedInput.InputMappingContext.UnmapAction // (Final|Native|Public|BlueprintCallable) // @ game+0x1013c50
	struct FEnhancedActionKeyMapping MapKey(struct UInputAction* Action, struct FKey ToKey); // Function EnhancedInput.InputMappingContext.MapKey // (Final|Native|Public|BlueprintCallable) // @ game+0x1012ee0
};

// Class EnhancedInput.InputModifierDeadZone
// Size: 0x38 (Inherited: 0x28)
struct UInputModifierDeadZone : UInputModifier {
	float LowerThreshold; // 0x28(0x04)
	float UpperThreshold; // 0x2c(0x04)
	enum class EDeadZoneType Type; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class EnhancedInput.InputModifierScalar
// Size: 0x40 (Inherited: 0x28)
struct UInputModifierScalar : UInputModifier {
	struct FVector Scalar; // 0x28(0x18)
};

// Class EnhancedInput.InputModifierNegate
// Size: 0x30 (Inherited: 0x28)
struct UInputModifierNegate : UInputModifier {
	bool bX; // 0x28(0x01)
	bool bY; // 0x29(0x01)
	bool bZ; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// Class EnhancedInput.InputModifierSmooth
// Size: 0x58 (Inherited: 0x28)
struct UInputModifierSmooth : UInputModifier {
	char pad_28[0x30]; // 0x28(0x30)
};

// Class EnhancedInput.InputModifierResponseCurveExponential
// Size: 0x40 (Inherited: 0x28)
struct UInputModifierResponseCurveExponential : UInputModifier {
	struct FVector CurveExponent; // 0x28(0x18)
};

// Class EnhancedInput.InputModifierResponseCurveUser
// Size: 0x40 (Inherited: 0x28)
struct UInputModifierResponseCurveUser : UInputModifier {
	struct UCurveFloat* ResponseX; // 0x28(0x08)
	struct UCurveFloat* ResponseY; // 0x30(0x08)
	struct UCurveFloat* ResponseZ; // 0x38(0x08)
};

// Class EnhancedInput.InputModifierFOVScaling
// Size: 0x30 (Inherited: 0x28)
struct UInputModifierFOVScaling : UInputModifier {
	float FOVScale; // 0x28(0x04)
	enum class EFOVScalingType FOVScalingType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// Class EnhancedInput.InputModifierToWorldSpace
// Size: 0x28 (Inherited: 0x28)
struct UInputModifierToWorldSpace : UInputModifier {
};

// Class EnhancedInput.InputModifierSwizzleAxis
// Size: 0x30 (Inherited: 0x28)
struct UInputModifierSwizzleAxis : UInputModifier {
	enum class EInputAxisSwizzle Order; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class EnhancedInput.InputModifierCollection
// Size: 0x40 (Inherited: 0x28)
struct UInputModifierCollection : UInputModifier {
	struct TArray<struct UInputModifier*> Modifiers; // 0x28(0x10)
	bool bPermitValueTypeModification; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class EnhancedInput.InputTriggerTimedBase
// Size: 0x58 (Inherited: 0x50)
struct UInputTriggerTimedBase : UInputTrigger {
	float HeldDuration; // 0x50(0x04)
	bool bAffectedByTimeDilation; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class EnhancedInput.InputTriggerDown
// Size: 0x50 (Inherited: 0x50)
struct UInputTriggerDown : UInputTrigger {
};

// Class EnhancedInput.InputTriggerPressed
// Size: 0x50 (Inherited: 0x50)
struct UInputTriggerPressed : UInputTrigger {
};

// Class EnhancedInput.InputTriggerReleased
// Size: 0x50 (Inherited: 0x50)
struct UInputTriggerReleased : UInputTrigger {
};

// Class EnhancedInput.InputTriggerHold
// Size: 0x68 (Inherited: 0x58)
struct UInputTriggerHold : UInputTriggerTimedBase {
	char pad_58[0x4]; // 0x58(0x04)
	float HoldTimeThreshold; // 0x5c(0x04)
	bool bIsOneShot; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class EnhancedInput.InputTriggerHoldAndRelease
// Size: 0x60 (Inherited: 0x58)
struct UInputTriggerHoldAndRelease : UInputTriggerTimedBase {
	float HoldTimeThreshold; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class EnhancedInput.InputTriggerTap
// Size: 0x60 (Inherited: 0x58)
struct UInputTriggerTap : UInputTriggerTimedBase {
	float TapReleaseTimeThreshold; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class EnhancedInput.InputTriggerPulse
// Size: 0x68 (Inherited: 0x58)
struct UInputTriggerPulse : UInputTriggerTimedBase {
	char pad_58[0x4]; // 0x58(0x04)
	bool bTriggerOnStart; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float Interval; // 0x60(0x04)
	int32_t TriggerLimit; // 0x64(0x04)
};

// Class EnhancedInput.InputTriggerChordAction
// Size: 0x58 (Inherited: 0x50)
struct UInputTriggerChordAction : UInputTrigger {
	struct UInputAction* ChordAction; // 0x50(0x08)
};

// Class EnhancedInput.InputTriggerChordBlocker
// Size: 0x58 (Inherited: 0x58)
struct UInputTriggerChordBlocker : UInputTriggerChordAction {
};

// Class EnhancedInput.PlayerMappableInputConfig
// Size: 0xb0 (Inherited: 0x30)
struct UPlayerMappableInputConfig : UPrimaryDataAsset {
	struct FName ConfigName; // 0x30(0x08)
	struct FText ConfigDisplayName; // 0x38(0x18)
	bool bIsDeprecated; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UObject* MetaData; // 0x58(0x08)
	struct TMap<struct UInputMappingContext*, int32_t> Contexts; // 0x60(0x50)

	void ResetToDefault(); // Function EnhancedInput.PlayerMappableInputConfig.ResetToDefault // (Final|Native|Public|BlueprintCallable) // @ game+0xacd350
	bool IsDeprecated(); // Function EnhancedInput.PlayerMappableInputConfig.IsDeprecated // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1012d10
	struct TArray<struct FEnhancedActionKeyMapping> GetPlayerMappableKeys(); // Function EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1012670
	struct UObject* GetMetadata(); // Function EnhancedInput.PlayerMappableInputConfig.GetMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1012650
	struct TMap<struct UInputMappingContext*, int32_t> GetMappingContexts(); // Function EnhancedInput.PlayerMappableInputConfig.GetMappingContexts // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1012620
	struct FEnhancedActionKeyMapping GetMappingByName(struct FName MappingName); // Function EnhancedInput.PlayerMappableInputConfig.GetMappingByName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1012500
	struct TArray<struct FEnhancedActionKeyMapping> GetKeysBoundToAction(struct UInputAction* InAction); // Function EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1012450
	struct FText GetDisplayName(); // Function EnhancedInput.PlayerMappableInputConfig.GetDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10123f0
	struct FName GetConfigName(); // Function EnhancedInput.PlayerMappableInputConfig.GetConfigName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10123d0
};

