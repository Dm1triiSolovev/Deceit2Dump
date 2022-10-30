// Enum UIExtension.EUIExtensionAction
enum class EUIExtensionAction : uint8 {
	Added = 0,
	Removed = 1,
	EUIExtensionAction_MAX = 2
};

// Enum UIExtension.EUIExtensionPointMatch
enum class EUIExtensionPointMatch : uint8 {
	ExactMatch = 0,
	PartialMatch = 1,
	EUIExtensionPointMatch_MAX = 2
};

// ScriptStruct UIExtension.UIExtensionRequest
// Size: 0x38 (Inherited: 0x00)
struct FUIExtensionRequest {
	struct FUIExtensionHandle ExtensionHandle; // 0x00(0x18)
	struct FGameplayTag ExtensionPointTag; // 0x18(0x08)
	int32_t Priority; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UObject* Data; // 0x28(0x08)
	struct UObject* ContextObject; // 0x30(0x08)
};

// ScriptStruct UIExtension.UIExtensionHandle
// Size: 0x18 (Inherited: 0x00)
struct FUIExtensionHandle {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct UIExtension.UIExtensionPointHandle
// Size: 0x18 (Inherited: 0x00)
struct FUIExtensionPointHandle {
	char pad_0[0x18]; // 0x00(0x18)
};

