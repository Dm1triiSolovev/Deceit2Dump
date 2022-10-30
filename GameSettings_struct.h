// ScriptStruct GameSettings.GameSettingFilterState
// Size: 0x3b8 (Inherited: 0x00)
struct FGameSettingFilterState {
	bool bIncludeDisabled; // 0x00(0x01)
	bool bIncludeHidden; // 0x01(0x01)
	bool bIncludeResetable; // 0x02(0x01)
	bool bIncludeNestedPages; // 0x03(0x01)
	char pad_4[0x394]; // 0x04(0x394)
	struct TArray<struct UGameSetting*> SettingRootList; // 0x398(0x10)
	struct TArray<struct UGameSetting*> SettingAllowList; // 0x3a8(0x10)
};

// ScriptStruct GameSettings.GameSettingClassExtensions
// Size: 0x10 (Inherited: 0x00)
struct FGameSettingClassExtensions {
	struct TArray<struct TSoftClassPtr<UObject>> Extensions; // 0x00(0x10)
};

// ScriptStruct GameSettings.GameSettingNameExtensions
// Size: 0x18 (Inherited: 0x00)
struct FGameSettingNameExtensions {
	bool bIncludeClassDefaultExtensions; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct TSoftClassPtr<UObject>> Extensions; // 0x08(0x10)
};

