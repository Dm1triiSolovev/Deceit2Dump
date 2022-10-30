// Class MetasoundEngine.MetasoundEditorGraphBase
// Size: 0x60 (Inherited: 0x60)
struct UMetasoundEditorGraphBase : UEdGraph {
};

// Class MetasoundEngine.MetaSound
// Size: 0x328 (Inherited: 0x28)
struct UMetaSound : UObject {
	char pad_28[0x58]; // 0x28(0x58)
	struct FMetasoundFrontendDocument RootMetaSoundDocument; // 0x80(0x1f8)
	struct TSet<struct FString> ReferencedAssetClassKeys; // 0x278(0x50)
	struct TSet<struct FSoftObjectPath> ReferenceAssetClassCache; // 0x2c8(0x50)
	struct FGuid AssetClassID; // 0x318(0x10)
};

// Class MetasoundEngine.MetaSoundAssetSubsystem
// Size: 0xe0 (Inherited: 0x30)
struct UMetaSoundAssetSubsystem : UEngineSubsystem {
	char pad_30[0xb0]; // 0x30(0xb0)

	void UnregisterAssetClassesInDirectories(struct TArray<struct FMetaSoundAssetDirectory>& Directories); // Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x15b3310
	void RegisterAssetClassesInDirectories(struct TArray<struct FMetaSoundAssetDirectory>& Directories); // Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x15b3240
};

// Class MetasoundEngine.MetaSoundSettings
// Size: 0x80 (Inherited: 0x38)
struct UMetaSoundSettings : UDeveloperSettings {
	bool bAutoUpdateEnabled; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FMetasoundFrontendClassName> AutoUpdateDenylist; // 0x40(0x10)
	struct TArray<struct FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist; // 0x50(0x10)
	bool bAutoUpdateLogWarningOnDroppedConnection; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct FDirectoryPath> DirectoriesToRegister; // 0x68(0x10)
	int32_t DenyListCacheChangeID; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class MetasoundEngine.MetaSoundSource
// Size: 0x6a0 (Inherited: 0x390)
struct UMetaSoundSource : USoundWaveProcedural {
	char pad_390[0x58]; // 0x390(0x58)
	struct FMetasoundFrontendDocument RootMetaSoundDocument; // 0x3e8(0x1f8)
	struct TSet<struct FString> ReferencedAssetClassKeys; // 0x5e0(0x50)
	struct TSet<struct FSoftObjectPath> ReferenceAssetClassCache; // 0x630(0x50)
	enum class EMetasoundSourceAudioFormat OutputFormat; // 0x680(0x01)
	char pad_681[0x3]; // 0x681(0x03)
	struct FGuid AssetClassID; // 0x684(0x10)
	char pad_694[0xc]; // 0x694(0x0c)
};

