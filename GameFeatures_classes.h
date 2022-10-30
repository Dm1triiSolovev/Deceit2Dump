// Class GameFeatures.GameFeatureAction
// Size: 0x28 (Inherited: 0x28)
struct UGameFeatureAction : UObject {
};

// Class GameFeatures.GameFeatureAction_AddCheats
// Size: 0x50 (Inherited: 0x28)
struct UGameFeatureAction_AddCheats : UGameFeatureAction {
	struct TArray<struct UCheatManagerExtension*> CheatManagers; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
	struct TArray<struct TWeakObjectPtr<struct UCheatManagerExtension>> SpawnedCheatManagers; // 0x40(0x10)
};

// Class GameFeatures.GameFeatureAction_AddComponents
// Size: 0x88 (Inherited: 0x28)
struct UGameFeatureAction_AddComponents : UGameFeatureAction {
	struct TArray<struct FGameFeatureComponentEntry> ComponentList; // 0x28(0x10)
	char pad_38[0x50]; // 0x38(0x50)
};

// Class GameFeatures.GameFeatureAction_DataRegistry
// Size: 0x38 (Inherited: 0x28)
struct UGameFeatureAction_DataRegistry : UGameFeatureAction {
	struct TArray<struct TSoftObjectPtr<UDataRegistry>> RegistriesToAdd; // 0x28(0x10)
};

// Class GameFeatures.GameFeatureAction_DataRegistrySource
// Size: 0x38 (Inherited: 0x28)
struct UGameFeatureAction_DataRegistrySource : UGameFeatureAction {
	struct TArray<struct FDataRegistrySourceToAdd> SourcesToAdd; // 0x28(0x10)
};

// Class GameFeatures.GameFeatureData
// Size: 0x50 (Inherited: 0x30)
struct UGameFeatureData : UPrimaryDataAsset {
	struct TArray<struct UGameFeatureAction*> Actions; // 0x30(0x10)
	struct TArray<struct FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan; // 0x40(0x10)
};

// Class GameFeatures.GameFeaturePluginStateMachine
// Size: 0x1c0 (Inherited: 0x28)
struct UGameFeaturePluginStateMachine : UObject {
	char pad_28[0x20]; // 0x28(0x20)
	struct FGameFeaturePluginStateMachineProperties StateProperties; // 0x48(0xa0)
	char pad_E8[0xd8]; // 0xe8(0xd8)
};

// Class GameFeatures.GameFeaturesProjectPolicies
// Size: 0x28 (Inherited: 0x28)
struct UGameFeaturesProjectPolicies : UObject {
};

// Class GameFeatures.DefaultGameFeaturesProjectPolicies
// Size: 0x28 (Inherited: 0x28)
struct UDefaultGameFeaturesProjectPolicies : UGameFeaturesProjectPolicies {
};

// Class GameFeatures.GameFeaturesSubsystem
// Size: 0xf0 (Inherited: 0x30)
struct UGameFeaturesSubsystem : UEngineSubsystem {
	struct TMap<struct FString, struct UGameFeaturePluginStateMachine*> GameFeaturePluginStateMachines; // 0x30(0x50)
	char pad_80[0x50]; // 0x80(0x50)
	struct TArray<struct UObject*> Observers; // 0xd0(0x10)
	struct UGameFeaturesProjectPolicies* GameSpecificPolicies; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class GameFeatures.GameFeaturesSubsystemSettings
// Size: 0x90 (Inherited: 0x38)
struct UGameFeaturesSubsystemSettings : UDeveloperSettings {
	struct FSoftClassPath GameFeaturesManagerClassName; // 0x38(0x18)
	struct TArray<struct FString> DisabledPlugins; // 0x50(0x10)
	struct TArray<struct FString> AdditionalPluginMetadataKeys; // 0x60(0x10)
	char pad_70[0x20]; // 0x70(0x20)
};

// Class GameFeatures.GameFeatureStateChangeObserver
// Size: 0x28 (Inherited: 0x28)
struct UGameFeatureStateChangeObserver : UInterface {
};

