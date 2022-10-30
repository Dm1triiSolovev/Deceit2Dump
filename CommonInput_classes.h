// Class CommonInput.CommonUIInputData
// Size: 0x48 (Inherited: 0x28)
struct UCommonUIInputData : UObject {
	struct FDataTableRowHandle DefaultClickAction; // 0x28(0x10)
	struct FDataTableRowHandle DefaultBackAction; // 0x38(0x10)
};

// Class CommonInput.CommonInputBaseControllerData
// Size: 0x100 (Inherited: 0x28)
struct UCommonInputBaseControllerData : UObject {
	enum class ECommonInputType InputType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FName GamepadName; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText GamepadDisplayName; // 0x38(0x18)
	struct FText GamepadCategory; // 0x50(0x18)
	struct FText GamepadPlatformName; // 0x68(0x18)
	struct TArray<struct FInputDeviceIdentifierPair> GamepadHardwareIdMapping; // 0x80(0x10)
	struct TSoftObjectPtr<UTexture2D> ControllerTexture; // 0x90(0x28)
	struct TSoftObjectPtr<UTexture2D> ControllerButtonMaskTexture; // 0xb8(0x28)
	struct TArray<struct FCommonInputKeyBrushConfiguration> InputBrushDataMap; // 0xe0(0x10)
	struct TArray<struct FCommonInputKeySetBrushConfiguration> InputBrushKeySets; // 0xf0(0x10)

	struct TArray<struct FName> GetRegisteredGamepads(); // Function CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads // (Final|Native|Static|Public) // @ game+0xe86f70
};

// Class CommonInput.CommonInputPlatformSettings
// Size: 0x70 (Inherited: 0x40)
struct UCommonInputPlatformSettings : UPlatformSettings {
	enum class ECommonInputType DefaultInputType; // 0x40(0x01)
	bool bSupportsMouseAndKeyboard; // 0x41(0x01)
	bool bSupportsTouch; // 0x42(0x01)
	bool bSupportsGamepad; // 0x43(0x01)
	struct FName DefaultGamepadName; // 0x44(0x08)
	bool bCanChangeGamepadType; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct TArray<struct TSoftClassPtr<UObject>> ControllerData; // 0x50(0x10)
	struct TArray<struct UCommonInputBaseControllerData*> ControllerDataClasses; // 0x60(0x10)
};

// Class CommonInput.CommonInputSettings
// Size: 0xe8 (Inherited: 0x38)
struct UCommonInputSettings : UDeveloperSettings {
	struct TSoftClassPtr<UObject> InputData; // 0x38(0x28)
	struct FPerPlatformSettings PlatformInput; // 0x60(0x10)
	struct TMap<struct FName, struct FCommonInputPlatformBaseData> CommonInputPlatformData; // 0x70(0x50)
	bool bEnableInputMethodThrashingProtection; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	int32_t InputMethodThrashingLimit; // 0xc4(0x04)
	double InputMethodThrashingWindowInSeconds; // 0xc8(0x08)
	double InputMethodThrashingCooldownInSeconds; // 0xd0(0x08)
	bool bAllowOutOfFocusDeviceInput; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct UCommonUIInputData* InputDataClass; // 0xe0(0x08)
};

// Class CommonInput.CommonInputSubsystem
// Size: 0x100 (Inherited: 0x30)
struct UCommonInputSubsystem : ULocalPlayerSubsystem {
	char pad_30[0x28]; // 0x30(0x28)
	struct FMulticastInlineDelegate OnInputMethodChanged; // 0x58(0x10)
	int32_t NumberOfInputMethodChangesRecently; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	double LastInputMethodChangeTime; // 0x70(0x08)
	double LastTimeInputMethodThrashingBegan; // 0x78(0x08)
	enum class ECommonInputType LastInputType; // 0x80(0x01)
	enum class ECommonInputType CurrentInputType; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	struct FName GamepadInputType; // 0x84(0x08)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TMap<struct FName, enum class ECommonInputType> CurrentInputLocks; // 0x90(0x50)
	char pad_E0[0x18]; // 0xe0(0x18)
	bool bIsGamepadSimulatedClick; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)

	bool ShouldShowInputKeys(); // Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe871d0
	void SetGamepadInputType(struct FName InGamepadInputType); // Function CommonInput.CommonInputSubsystem.SetGamepadInputType // (Final|Native|Public|BlueprintCallable) // @ game+0xe87140
	void SetCurrentInputType(enum class ECommonInputType NewInputType); // Function CommonInput.CommonInputSubsystem.SetCurrentInputType // (Final|Native|Public|BlueprintCallable) // @ game+0xe870c0
	bool IsUsingPointerInput(); // Function CommonInput.CommonInputSubsystem.IsUsingPointerInput // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe87090
	bool IsInputMethodActive(enum class ECommonInputType InputMethod); // Function CommonInput.CommonInputSubsystem.IsInputMethodActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe87000
	enum class ECommonInputType GetDefaultInputType(); // Function CommonInput.CommonInputSubsystem.GetDefaultInputType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe86f40
	enum class ECommonInputType GetCurrentInputType(); // Function CommonInput.CommonInputSubsystem.GetCurrentInputType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe86f10
	struct FName GetCurrentGamepadName(); // Function CommonInput.CommonInputSubsystem.GetCurrentGamepadName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe86ed0
};

