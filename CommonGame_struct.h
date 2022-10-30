// Enum CommonGame.ECommonMessagingResult
enum class ECommonMessagingResult : uint8 {
	Confirmed = 0,
	Declined = 1,
	Cancelled = 2,
	Killed = 3,
	Unknown = 4,
	ECommonMessagingResult_MAX = 5
};

// Enum CommonGame.ECommonKeybindForcedHoldStatus
enum class ECommonKeybindForcedHoldStatus : uint8 {
	NoForcedHold = 0,
	ForcedHold = 1,
	NeverShowHold = 2,
	ECommonKeybindForcedHoldStatus_MAX = 3
};

// Enum CommonGame.ELocalMultiplayerInteractionMode
enum class ELocalMultiplayerInteractionMode : uint8 {
	PrimaryOnly = 0,
	SingleToggle = 1,
	Simultaneous = 2,
	ELocalMultiplayerInteractionMode_MAX = 3
};

// ScriptStruct CommonGame.ConfirmationDialogAction
// Size: 0x20 (Inherited: 0x00)
struct FConfirmationDialogAction {
	enum class ECommonMessagingResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText OptionalDisplayText; // 0x08(0x18)
};

// ScriptStruct CommonGame.MeasuredText
// Size: 0x30 (Inherited: 0x00)
struct FMeasuredText {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct CommonGame.RootViewportLayoutInfo
// Size: 0x18 (Inherited: 0x00)
struct FRootViewportLayoutInfo {
	struct ULocalPlayer* LocalPlayer; // 0x00(0x08)
	struct UPrimaryGameLayout* RootLayout; // 0x08(0x08)
	bool bAddedToViewport; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

