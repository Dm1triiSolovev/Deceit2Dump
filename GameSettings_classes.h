// Class GameSettings.GameResponsivePanel
// Size: 0x158 (Inherited: 0x140)
struct UGameResponsivePanel : UPanelWidget {
	bool bCanStackVertically; // 0x140(0x01)
	char pad_141[0x17]; // 0x141(0x17)

	struct UGameResponsivePanelSlot* AddChildToGameResponsivePanel(struct UWidget* Content); // Function GameSettings.GameResponsivePanel.AddChildToGameResponsivePanel // (Final|Native|Public|BlueprintCallable) // @ game+0x122b6e0
};

// Class GameSettings.GameResponsivePanelSlot
// Size: 0x40 (Inherited: 0x38)
struct UGameResponsivePanelSlot : UPanelSlot {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class GameSettings.GameSetting
// Size: 0x150 (Inherited: 0x28)
struct UGameSetting : UObject {
	char pad_28[0x30]; // 0x28(0x30)
	struct ULocalPlayer* LocalPlayer; // 0x58(0x08)
	struct UGameSetting* SettingParent; // 0x60(0x08)
	struct UGameSettingRegistry* OwningRegistry; // 0x68(0x08)
	char pad_70[0xe0]; // 0x70(0xe0)

	struct FText GetWarningRichText(); // Function GameSettings.GameSetting.GetWarningRichText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x122bd30
	struct FGameplayTagContainer GetTags(); // Function GameSettings.GameSetting.GetTags // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x122bd00
	struct FText GetDynamicDetails(); // Function GameSettings.GameSetting.GetDynamicDetails // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x122bb80
	enum class ESlateVisibility GetDisplayNameVisibility(); // Function GameSettings.GameSetting.GetDisplayNameVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x122bb60
	struct FText GetDisplayName(); // Function GameSettings.GameSetting.GetDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x122bad0
	struct FName GetDevName(); // Function GameSettings.GameSetting.GetDevName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x122b950
	struct FText GetDescriptionRichText(); // Function GameSettings.GameSetting.GetDescriptionRichText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x122b8c0
};

// Class GameSettings.GameSettingAction
// Size: 0x1a0 (Inherited: 0x150)
struct UGameSettingAction : UGameSetting {
	char pad_150[0x50]; // 0x150(0x50)
};

// Class GameSettings.GameSettingCollection
// Size: 0x160 (Inherited: 0x150)
struct UGameSettingCollection : UGameSetting {
	struct TArray<struct UGameSetting*> Settings; // 0x150(0x10)
};

// Class GameSettings.GameSettingCollectionPage
// Size: 0x190 (Inherited: 0x160)
struct UGameSettingCollectionPage : UGameSettingCollection {
	char pad_160[0x30]; // 0x160(0x30)
};

// Class GameSettings.GameSettingDetailExtension
// Size: 0x298 (Inherited: 0x290)
struct UGameSettingDetailExtension : UUserWidget {
	struct UGameSetting* Setting; // 0x290(0x08)

	void OnSettingValueChanged(struct UGameSetting* InSetting); // Function GameSettings.GameSettingDetailExtension.OnSettingValueChanged // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void OnSettingAssigned(struct UGameSetting* InSetting); // Function GameSettings.GameSettingDetailExtension.OnSettingAssigned // (Event|Protected|BlueprintEvent) // @ game+0x2552560
};

// Class GameSettings.GameSettingDetailView
// Size: 0x368 (Inherited: 0x290)
struct UGameSettingDetailView : UUserWidget {
	struct UGameSettingVisualData* VisualData; // 0x290(0x08)
	struct FUserWidgetPool ExtensionWidgetPool; // 0x298(0x88)
	struct UGameSetting* CurrentSetting; // 0x320(0x08)
	char pad_328[0x10]; // 0x328(0x10)
	struct UCommonTextBlock* Text_SettingName; // 0x338(0x08)
	struct UCommonRichTextBlock* RichText_Description; // 0x340(0x08)
	struct UCommonRichTextBlock* RichText_DynamicDetails; // 0x348(0x08)
	struct UCommonRichTextBlock* RichText_WarningDetails; // 0x350(0x08)
	struct UCommonRichTextBlock* RichText_DisabledDetails; // 0x358(0x08)
	struct UVerticalBox* Box_DetailsExtension; // 0x360(0x08)
};

// Class GameSettings.GameSettingListEntryBase
// Size: 0x2f0 (Inherited: 0x2b8)
struct UGameSettingListEntryBase : UCommonUserWidget {
	char pad_2B8[0x10]; // 0x2b8(0x10)
	struct UGameSetting* Setting; // 0x2c8(0x08)
	char pad_2D0[0x18]; // 0x2d0(0x18)
	struct UUserWidget* Background; // 0x2e8(0x08)

	struct UWidget* GetPrimaryGamepadFocusWidget(); // Function GameSettings.GameSettingListEntryBase.GetPrimaryGamepadFocusWidget // (Event|Protected|BlueprintEvent) // @ game+0x2552560
};

// Class GameSettings.GameSettingListEntry_Setting
// Size: 0x2f8 (Inherited: 0x2f0)
struct UGameSettingListEntry_Setting : UGameSettingListEntryBase {
	struct UCommonTextBlock* Text_SettingName; // 0x2f0(0x08)
};

// Class GameSettings.GameSettingListEntrySetting_Discrete
// Size: 0x320 (Inherited: 0x2f8)
struct UGameSettingListEntrySetting_Discrete : UGameSettingListEntry_Setting {
	struct UGameSettingValueDiscrete* DiscreteSetting; // 0x2f8(0x08)
	struct UPanelWidget* Panel_Value; // 0x300(0x08)
	struct UGameSettingRotator* Rotator_SettingValue; // 0x308(0x08)
	struct UCommonButtonBase* Button_Decrease; // 0x310(0x08)
	struct UCommonButtonBase* Button_Increase; // 0x318(0x08)
};

// Class GameSettings.GameSettingListEntrySetting_Scalar
// Size: 0x318 (Inherited: 0x2f8)
struct UGameSettingListEntrySetting_Scalar : UGameSettingListEntry_Setting {
	struct UGameSettingValueScalar* ScalarSetting; // 0x2f8(0x08)
	struct UPanelWidget* Panel_Value; // 0x300(0x08)
	struct UAnalogSlider* Slider_SettingValue; // 0x308(0x08)
	struct UCommonTextBlock* Text_SettingValue; // 0x310(0x08)

	void OnValueChanged(float Value); // Function GameSettings.GameSettingListEntrySetting_Scalar.OnValueChanged // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void OnDefaultValueChanged(float DefaultValue); // Function GameSettings.GameSettingListEntrySetting_Scalar.OnDefaultValueChanged // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void HandleSliderValueChanged(float Value); // Function GameSettings.GameSettingListEntrySetting_Scalar.HandleSliderValueChanged // (Final|Native|Protected) // @ game+0x122bdc0
	void HandleSliderCaptureEnded(); // Function GameSettings.GameSettingListEntrySetting_Scalar.HandleSliderCaptureEnded // (Final|Native|Protected) // @ game+0xacd350
};

// Class GameSettings.GameSettingListEntrySetting_Action
// Size: 0x308 (Inherited: 0x2f8)
struct UGameSettingListEntrySetting_Action : UGameSettingListEntry_Setting {
	struct UGameSettingAction* ActionSetting; // 0x2f8(0x08)
	struct UCommonButtonBase* Button_Action; // 0x300(0x08)

	void OnSettingAssigned(struct FText& ActionText); // Function GameSettings.GameSettingListEntrySetting_Action.OnSettingAssigned // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
};

// Class GameSettings.GameSettingListEntrySetting_Navigation
// Size: 0x308 (Inherited: 0x2f8)
struct UGameSettingListEntrySetting_Navigation : UGameSettingListEntry_Setting {
	struct UGameSettingCollectionPage* CollectionSetting; // 0x2f8(0x08)
	struct UCommonButtonBase* Button_Navigate; // 0x300(0x08)

	void OnSettingAssigned(struct FText& ActionText); // Function GameSettings.GameSettingListEntrySetting_Navigation.OnSettingAssigned // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
};

// Class GameSettings.GameSettingListView
// Size: 0xc40 (Inherited: 0xbe0)
struct UGameSettingListView : UListView {
	struct UGameSettingVisualData* VisualData; // 0xbe0(0x08)
	char pad_BE8[0x58]; // 0xbe8(0x58)
};

// Class GameSettings.GameSettingPanel
// Size: 0x6f8 (Inherited: 0x2b8)
struct UGameSettingPanel : UCommonUserWidget {
	char pad_2B8[0x18]; // 0x2b8(0x18)
	struct UGameSettingRegistry* Registry; // 0x2d0(0x08)
	struct TArray<struct UGameSetting*> VisibleSettings; // 0x2d8(0x10)
	struct UGameSetting* LastHoveredOrSelectedSetting; // 0x2e8(0x08)
	struct FGameSettingFilterState FilterState; // 0x2f0(0x3b8)
	struct TArray<struct FGameSettingFilterState> FilterNavigationStack; // 0x6a8(0x10)
	char pad_6B8[0x10]; // 0x6b8(0x10)
	struct UGameSettingListView* ListView_Settings; // 0x6c8(0x08)
	struct UGameSettingDetailView* Details_Settings; // 0x6d0(0x08)
	struct FMulticastInlineDelegate BP_OnExecuteNamedAction; // 0x6d8(0x10)
	char pad_6E8[0x10]; // 0x6e8(0x10)
};

// Class GameSettings.GameSettingPressAnyKey
// Size: 0x3c0 (Inherited: 0x378)
struct UGameSettingPressAnyKey : UCommonActivatableWidget {
	char pad_378[0x48]; // 0x378(0x48)
};

// Class GameSettings.GameSettingRegistry
// Size: 0xb0 (Inherited: 0x28)
struct UGameSettingRegistry : UObject {
	char pad_28[0x60]; // 0x28(0x60)
	struct TArray<struct UGameSetting*> TopLevelSettings; // 0x88(0x10)
	struct TArray<struct UGameSetting*> RegisteredSettings; // 0x98(0x10)
	struct ULocalPlayer* OwningLocalPlayer; // 0xa8(0x08)
};

// Class GameSettings.GameSettingRotator
// Size: 0x10c0 (Inherited: 0x10c0)
struct UGameSettingRotator : UCommonRotator {

	void BP_OnDefaultOptionSpecified(int32_t DefaultOptionIndex); // Function GameSettings.GameSettingRotator.BP_OnDefaultOptionSpecified // (Event|Protected|BlueprintEvent) // @ game+0x2552560
};

// Class GameSettings.GameSettingScreen
// Size: 0x3e8 (Inherited: 0x378)
struct UGameSettingScreen : UCommonActivatableWidget {
	char pad_378[0x60]; // 0x378(0x60)
	struct UGameSettingPanel* Settings_Panel; // 0x3d8(0x08)
	struct UGameSettingRegistry* Registry; // 0x3e0(0x08)

	void OnSettingsDirtyStateChanged(bool bSettingsDirty); // Function GameSettings.GameSettingScreen.OnSettingsDirtyStateChanged // (Native|Event|Protected|BlueprintEvent) // @ game+0x122bfa0
	void NavigateToSettings(struct TArray<struct FName>& SettingDevNames); // Function GameSettings.GameSettingScreen.NavigateToSettings // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x122bef0
	void NavigateToSetting(struct FName SettingDevName); // Function GameSettings.GameSettingScreen.NavigateToSetting // (Final|Native|Protected|BlueprintCallable) // @ game+0x122be60
	bool HaveSettingsBeenChanged(); // Function GameSettings.GameSettingScreen.HaveSettingsBeenChanged // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x122be40
	struct UGameSettingCollection* GetSettingCollection(struct FName SettingDevName, bool& HasAnySettings); // Function GameSettings.GameSettingScreen.GetSettingCollection // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x122bc20
	void CancelChanges(); // Function GameSettings.GameSettingScreen.CancelChanges // (Native|Protected|BlueprintCallable) // @ game+0x122b7d0
	bool AttemptToPopNavigation(); // Function GameSettings.GameSettingScreen.AttemptToPopNavigation // (Final|Native|Protected|BlueprintCallable) // @ game+0x122b7a0
	void ApplyChanges(); // Function GameSettings.GameSettingScreen.ApplyChanges // (Native|Protected|BlueprintCallable) // @ game+0x122b780
};

// Class GameSettings.GameSettingValue
// Size: 0x150 (Inherited: 0x150)
struct UGameSettingValue : UGameSetting {
};

// Class GameSettings.GameSettingValueDiscrete
// Size: 0x150 (Inherited: 0x150)
struct UGameSettingValueDiscrete : UGameSettingValue {

	struct TArray<struct FText> GetDiscreteOptions(); // Function GameSettings.GameSettingValueDiscrete.GetDiscreteOptions // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x122b9d0
	int32_t GetDiscreteOptionIndex(); // Function GameSettings.GameSettingValueDiscrete.GetDiscreteOptionIndex // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x122b9a0
	int32_t GetDiscreteOptionDefaultIndex(); // Function GameSettings.GameSettingValueDiscrete.GetDiscreteOptionDefaultIndex // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x122b970
};

// Class GameSettings.GameSettingValueDiscreteDynamic
// Size: 0x1b8 (Inherited: 0x150)
struct UGameSettingValueDiscreteDynamic : UGameSettingValueDiscrete {
	char pad_150[0x68]; // 0x150(0x68)
};

// Class GameSettings.GameSettingValueDiscreteDynamic_Bool
// Size: 0x1b8 (Inherited: 0x1b8)
struct UGameSettingValueDiscreteDynamic_Bool : UGameSettingValueDiscreteDynamic {
};

// Class GameSettings.GameSettingValueDiscreteDynamic_Number
// Size: 0x1b8 (Inherited: 0x1b8)
struct UGameSettingValueDiscreteDynamic_Number : UGameSettingValueDiscreteDynamic {
};

// Class GameSettings.GameSettingValueDiscreteDynamic_Enum
// Size: 0x1b8 (Inherited: 0x1b8)
struct UGameSettingValueDiscreteDynamic_Enum : UGameSettingValueDiscreteDynamic {
};

// Class GameSettings.GameSettingValueDiscreteDynamic_Color
// Size: 0x1b8 (Inherited: 0x1b8)
struct UGameSettingValueDiscreteDynamic_Color : UGameSettingValueDiscreteDynamic {
};

// Class GameSettings.GameSettingValueDiscreteDynamic_Vector2D
// Size: 0x1b8 (Inherited: 0x1b8)
struct UGameSettingValueDiscreteDynamic_Vector2D : UGameSettingValueDiscreteDynamic {
};

// Class GameSettings.GameSettingValueScalar
// Size: 0x150 (Inherited: 0x150)
struct UGameSettingValueScalar : UGameSettingValue {
};

// Class GameSettings.GameSettingValueScalarDynamic
// Size: 0x210 (Inherited: 0x150)
struct UGameSettingValueScalarDynamic : UGameSettingValueScalar {
	char pad_150[0xc0]; // 0x150(0xc0)
};

// Class GameSettings.GameSettingVisualData
// Size: 0x170 (Inherited: 0x30)
struct UGameSettingVisualData : UDataAsset {
	struct TMap<struct UGameSetting*, struct UGameSettingListEntryBase*> EntryWidgetForClass; // 0x30(0x50)
	struct TMap<struct FName, struct UGameSettingListEntryBase*> EntryWidgetForName; // 0x80(0x50)
	struct TMap<struct UGameSetting*, struct FGameSettingClassExtensions> ExtensionsForClasses; // 0xd0(0x50)
	struct TMap<struct FName, struct FGameSettingNameExtensions> ExtensionsForName; // 0x120(0x50)
};

// Class GameSettings.GameSettingActionInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameSettingActionInterface : UInterface {

	bool ExecuteActionForSetting(struct FGameplayTag ActionTag, struct UGameSetting* InSetting); // Function GameSettings.GameSettingActionInterface.ExecuteActionForSetting // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x122b7f0
};

