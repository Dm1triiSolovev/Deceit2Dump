// Enum GameplayMessageRuntime.EGameplayMessageMatch
enum class EGameplayMessageMatch : uint8 {
	ExactMatch = 0,
	PartialMatch = 1,
	EGameplayMessageMatch_MAX = 2
};

// ScriptStruct GameplayMessageRuntime.GameplayMessageListenerHandle
// Size: 0x20 (Inherited: 0x00)
struct FGameplayMessageListenerHandle {
	struct TWeakObjectPtr<struct UGameplayMessageSubsystem> Subsystem; // 0x00(0x08)
	struct FGameplayTag Channel; // 0x08(0x08)
	int32_t ID; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct GameplayMessageRuntime.GameplayMessageListenerData
// Size: 0x60 (Inherited: 0x00)
struct FGameplayMessageListenerData {
	char pad_0[0x60]; // 0x00(0x60)
};

