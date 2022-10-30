// WidgetBlueprintGeneratedClass W_ActionTouchButton.W_ActionTouchButton_C
// Size: 0x1318 (Inherited: 0x1090)
struct UW_ActionTouchButton_C : ULyraButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1090(0x08)
	struct UWidgetAnimation* OnClickedTouchInput; // 0x1098(0x08)
	struct UWidgetAnimation* CooldownInactiveToActive; // 0x10a0(0x08)
	struct UWidgetAnimation* CooldownActiveToInactive; // 0x10a8(0x08)
	struct UBackgroundBlur* BackgroundBlur; // 0x10b0(0x08)
	struct UImage* BackingBorder; // 0x10b8(0x08)
	struct UOverlay* DisableGlowBoostOvr; // 0x10c0(0x08)
	struct UImage* ItemGlow; // 0x10c8(0x08)
	struct UImage* ItemGlow_Boost; // 0x10d0(0x08)
	struct USizeBox* MainSBWithPadding; // 0x10d8(0x08)
	struct UImage* Shadow; // 0x10e0(0x08)
	struct UImage* WeaponCard; // 0x10e8(0x08)
	struct FTimerHandle CooldownTimer; // 0x10f0(0x08)
	double Duration; // 0x10f8(0x08)
	double StartTime; // 0x1100(0x08)
	bool Charging; // 0x1108(0x01)
	char pad_1109[0x7]; // 0x1109(0x07)
	struct UInputAction* AssociatedAction; // 0x1110(0x08)
	struct FGameplayTag DurationMessageTag; // 0x1118(0x08)
	struct FMargin HitTestPadding; // 0x1120(0x10)
	bool UseBacking; // 0x1130(0x01)
	bool UseShadow; // 0x1131(0x01)
	bool UseBlur; // 0x1132(0x01)
	bool UseGlow; // 0x1133(0x01)
	bool UseGlowBoost; // 0x1134(0x01)
	bool IsToggleButton; // 0x1135(0x01)
	bool HasCooldown; // 0x1136(0x01)
	char pad_1137[0x9]; // 0x1137(0x09)
	struct FSlateBrush ButtonBrush; // 0x1140(0xd0)
	bool IsDisabled; // 0x1210(0x01)
	char pad_1211[0xf]; // 0x1211(0x0f)
	struct FSlateBrush ButtonGlowBrush; // 0x1220(0xd0)
	struct FMargin GlowOverdraw; // 0x12f0(0x10)
	struct FMargin BlurPadding; // 0x1300(0x10)
	double BlurCornerRadius; // 0x1310(0x08)

	void ResetMaterials(); // Function W_ActionTouchButton.W_ActionTouchButton_C.ResetMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SetButtonStyle(); // Function W_ActionTouchButton.W_ActionTouchButton_C.SetButtonStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void UpdateCoolDownPercent(double Percent); // Function W_ActionTouchButton.W_ActionTouchButton_C.UpdateCoolDownPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnMessageReceived_ED93BD914EB3DEA17CF0BEADCC783EA0(struct UAsyncAction_ListenForGameplayMessage* ProxyObject, struct FGameplayTag ActualChannel); // Function W_ActionTouchButton.W_ActionTouchButton_C.OnMessageReceived_ED93BD914EB3DEA17CF0BEADCC783EA0 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnInitialized(); // Function W_ActionTouchButton.W_ActionTouchButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2552560
	void Construct(); // Function W_ActionTouchButton.W_ActionTouchButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2552560
	void ListenForDuration(); // Function W_ActionTouchButton.W_ActionTouchButton_C.ListenForDuration // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_ActionTouchButton.W_ActionTouchButton_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2552560
	void PreConstruct(bool IsDesignTime); // Function W_ActionTouchButton.W_ActionTouchButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2552560
	void BP_OnClicked(); // Function W_ActionTouchButton.W_ActionTouchButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnDisabled(); // Function W_ActionTouchButton.W_ActionTouchButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnEnabled(); // Function W_ActionTouchButton.W_ActionTouchButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnSelected(); // Function W_ActionTouchButton.W_ActionTouchButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnDeselected(); // Function W_ActionTouchButton.W_ActionTouchButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_W_ActionTouchButton(int32_t EntryPoint); // Function W_ActionTouchButton.W_ActionTouchButton_C.ExecuteUbergraph_W_ActionTouchButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

