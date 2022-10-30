// Class CommonUI.CommonUserWidget
// Size: 0x2b8 (Inherited: 0x290)
struct UCommonUserWidget : UUserWidget {
	bool bDisplayInActionBar; // 0x290(0x01)
	bool bConsumePointerInput; // 0x291(0x01)
	char pad_292[0x26]; // 0x292(0x26)

	void SetConsumePointerInput(bool bInConsumePointerInput); // Function CommonUI.CommonUserWidget.SetConsumePointerInput // (Final|Native|Public|BlueprintCallable) // @ game+0xe7e400
};

// Class CommonUI.AnalogSlider
// Size: 0x700 (Inherited: 0x6e0)
struct UAnalogSlider : USlider {
	struct FMulticastInlineDelegate OnAnalogCapture; // 0x6e0(0x10)
	char pad_6F0[0x10]; // 0x6f0(0x10)
};

// Class CommonUI.CommonActionHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct UCommonActionHandlerInterface : UInterface {
};

// Class CommonUI.CommonActionWidget
// Size: 0x430 (Inherited: 0x128)
struct UCommonActionWidget : UWidget {
	struct FMulticastInlineDelegate OnInputMethodChanged; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)
	struct FSlateBrush ProgressMaterialBrush; // 0x140(0xd0)
	struct FName ProgressMaterialParam; // 0x210(0x08)
	char pad_218[0x8]; // 0x218(0x08)
	struct FSlateBrush IconRimBrush; // 0x220(0xd0)
	struct TArray<struct FDataTableRowHandle> InputActions; // 0x2f0(0x10)
	char pad_300[0x8]; // 0x300(0x08)
	struct UMaterialInstanceDynamic* ProgressDynamicMaterial; // 0x308(0x08)
	char pad_310[0x120]; // 0x310(0x120)

	void SetInputActions(struct TArray<struct FDataTableRowHandle> NewInputActions); // Function CommonUI.CommonActionWidget.SetInputActions // (Final|Native|Public|BlueprintCallable) // @ game+0xe75c20
	void SetInputAction(struct FDataTableRowHandle InputActionRow); // Function CommonUI.CommonActionWidget.SetInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0xe75a30
	void SetIconRimBrush(struct FSlateBrush InIconRimBrush); // Function CommonUI.CommonActionWidget.SetIconRimBrush // (Final|Native|Public|BlueprintCallable) // @ game+0xe75940
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2552560
	bool IsHeldAction(); // Function CommonUI.CommonActionWidget.IsHeldAction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe753a0
	struct FSlateBrush GetIcon(); // Function CommonUI.CommonActionWidget.GetIcon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe747a0
	struct FText GetDisplayText(); // Function CommonUI.CommonActionWidget.GetDisplayText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe74700
};

// Class CommonUI.CommonActivatableWidget
// Size: 0x378 (Inherited: 0x2b8)
struct UCommonActivatableWidget : UCommonUserWidget {
	bool bIsBackHandler; // 0x2b8(0x01)
	bool bIsBackActionDisplayedInActionBar; // 0x2b9(0x01)
	bool bAutoActivate; // 0x2ba(0x01)
	bool bSupportsActivationFocus; // 0x2bb(0x01)
	bool bIsModal; // 0x2bc(0x01)
	bool bAutoRestoreFocus; // 0x2bd(0x01)
	char pad_2BE[0x2]; // 0x2be(0x02)
	struct FMulticastInlineDelegate BP_OnWidgetActivated; // 0x2c0(0x10)
	struct FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x2d0(0x10)
	bool bIsActive; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct TArray<struct TWeakObjectPtr<struct UCommonActivatableWidget>> VisibilityBoundWidgets; // 0x2e8(0x10)
	char pad_2F8[0x78]; // 0x2f8(0x78)
	bool bSetVisibilityOnActivated; // 0x370(0x01)
	enum class ESlateVisibility ActivatedVisibility; // 0x371(0x01)
	bool bSetVisibilityOnDeactivated; // 0x372(0x01)
	enum class ESlateVisibility DeactivatedVisibility; // 0x373(0x01)
	char pad_374[0x4]; // 0x374(0x04)

	void SetBindVisibilities(enum class ESlateVisibility OnActivatedVisibility, enum class ESlateVisibility OnDeactivatedVisibility, bool bInAllActive); // Function CommonUI.CommonActivatableWidget.SetBindVisibilities // (Final|Native|Public|BlueprintCallable) // @ game+0xe755f0
	bool IsActivated(); // Function CommonUI.CommonActivatableWidget.IsActivated // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe75350
	struct UWidget* GetDesiredFocusTarget(); // Function CommonUI.CommonActivatableWidget.GetDesiredFocusTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe745b0
	void DeactivateWidget(); // Function CommonUI.CommonActivatableWidget.DeactivateWidget // (Final|Native|Public|BlueprintCallable) // @ game+0xe740b0
	bool BP_OnHandleBackAction(); // Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnDeactivated(); // Function CommonUI.CommonActivatableWidget.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnActivated(); // Function CommonUI.CommonActivatableWidget.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	struct UWidget* BP_GetDesiredFocusTarget(); // Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget // (Event|Protected|BlueprintEvent|Const) // @ game+0x2552560
	void BindVisibilityToActivation(struct UCommonActivatableWidget* ActivatableWidget); // Function CommonUI.CommonActivatableWidget.BindVisibilityToActivation // (Final|Native|Public|BlueprintCallable) // @ game+0xe73fe0
	void ActivateWidget(); // Function CommonUI.CommonActivatableWidget.ActivateWidget // (Final|Native|Public|BlueprintCallable) // @ game+0xe73f20
};

// Class CommonUI.CommonActivatableWidgetContainerBase
// Size: 0x248 (Inherited: 0x128)
struct UCommonActivatableWidgetContainerBase : UWidget {
	char pad_128[0x18]; // 0x128(0x18)
	enum class ECommonSwitcherTransition TransitionType; // 0x140(0x01)
	enum class ETransitionCurve TransitionCurveType; // 0x141(0x01)
	char pad_142[0x2]; // 0x142(0x02)
	float TransitionDuration; // 0x144(0x04)
	struct TArray<struct UCommonActivatableWidget*> WidgetList; // 0x148(0x10)
	struct UCommonActivatableWidget* DisplayedWidget; // 0x158(0x08)
	struct FUserWidgetPool GeneratedWidgetsPool; // 0x160(0x88)
	char pad_1E8[0x60]; // 0x1e8(0x60)

	void SetTransitionDuration(float Duration); // Function CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration // (Final|Native|Public|BlueprintCallable) // @ game+0xe76680
	void RemoveWidget(struct UCommonActivatableWidget* WidgetToRemove); // Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget // (Final|Native|Private|BlueprintCallable) // @ game+0xe75560
	float GetTransitionDuration(); // Function CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe751d0
	struct UCommonActivatableWidget* GetActiveWidget(); // Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe741a0
	void ClearWidgets(); // Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets // (Final|Native|Public|BlueprintCallable) // @ game+0xe74090
	struct UCommonActivatableWidget* BP_AddWidget(struct UCommonActivatableWidget* ActivatableWidgetClass); // Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget // (Final|Native|Private|BlueprintCallable) // @ game+0xe73f40
};

// Class CommonUI.CommonActivatableWidgetStack
// Size: 0x258 (Inherited: 0x248)
struct UCommonActivatableWidgetStack : UCommonActivatableWidgetContainerBase {
	struct UCommonActivatableWidget* RootContentWidgetClass; // 0x248(0x08)
	struct UCommonActivatableWidget* RootContentWidget; // 0x250(0x08)
};

// Class CommonUI.CommonActivatableWidgetQueue
// Size: 0x248 (Inherited: 0x248)
struct UCommonActivatableWidgetQueue : UCommonActivatableWidgetContainerBase {
};

// Class CommonUI.CommonAnimatedSwitcher
// Size: 0x1b0 (Inherited: 0x158)
struct UCommonAnimatedSwitcher : UWidgetSwitcher {
	char pad_158[0x18]; // 0x158(0x18)
	enum class ECommonSwitcherTransition TransitionType; // 0x170(0x01)
	enum class ETransitionCurve TransitionCurveType; // 0x171(0x01)
	char pad_172[0x2]; // 0x172(0x02)
	float TransitionDuration; // 0x174(0x04)
	char pad_178[0x38]; // 0x178(0x38)

	void SetDisableTransitionAnimation(bool bDisableAnimation); // Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0xe75790
	bool IsCurrentlySwitching(); // Function CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe75370
	bool HasWidgets(); // Function CommonUI.CommonAnimatedSwitcher.HasWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe75320
	void ActivatePreviousWidget(bool bCanWrap); // Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget // (Final|Native|Public|BlueprintCallable) // @ game+0xe73e90
	void ActivateNextWidget(bool bCanWrap); // Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget // (Final|Native|Public|BlueprintCallable) // @ game+0xe73e00
};

// Class CommonUI.CommonActivatableWidgetSwitcher
// Size: 0x1b0 (Inherited: 0x1b0)
struct UCommonActivatableWidgetSwitcher : UCommonAnimatedSwitcher {
};

// Class CommonUI.CommonBorderStyle
// Size: 0x100 (Inherited: 0x28)
struct UCommonBorderStyle : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FSlateBrush Background; // 0x30(0xd0)

	void GetBackgroundBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonBorderStyle.GetBackgroundBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xe741d0
};

// Class CommonUI.CommonBorder
// Size: 0x310 (Inherited: 0x2f0)
struct UCommonBorder : UBorder {
	struct UCommonBorderStyle* Style; // 0x2e8(0x08)
	bool bReducePaddingBySafezone; // 0x2f0(0x01)
	struct FMargin MinimumPadding; // 0x2f4(0x10)
	char pad_309[0x7]; // 0x309(0x07)

	void SetStyle(struct UCommonBorderStyle* InStyle); // Function CommonUI.CommonBorder.SetStyle // (Final|Native|Public|BlueprintCallable) // @ game+0xe764e0
};

// Class CommonUI.CommonBoundActionBar
// Size: 0x218 (Inherited: 0x208)
struct UCommonBoundActionBar : UDynamicEntryBoxBase {
	struct UCommonBoundActionButton* ActionButtonClass; // 0x208(0x08)
	bool bDisplayOwningPlayerActionsOnly; // 0x210(0x01)
	bool bIgnoreDuplicateActions; // 0x211(0x01)
	char pad_212[0x6]; // 0x212(0x06)

	void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions); // Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly // (Final|Native|Public|BlueprintCallable) // @ game+0xe75820
};

// Class CommonUI.CommonButtonBase
// Size: 0x1070 (Inherited: 0x2b8)
struct UCommonButtonBase : UCommonUserWidget {
	int32_t MinWidth; // 0x2b8(0x04)
	int32_t MinHeight; // 0x2bc(0x04)
	struct UCommonButtonStyle* Style; // 0x2c0(0x08)
	bool bHideInputAction; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FSlateSound PressedSlateSoundOverride; // 0x2d0(0x18)
	struct FSlateSound HoveredSlateSoundOverride; // 0x2e8(0x18)
	char bApplyAlphaOnDisable : 1; // 0x300(0x01)
	char bSelectable : 1; // 0x300(0x01)
	char bShouldSelectUponReceivingFocus : 1; // 0x300(0x01)
	char bInteractableWhenSelected : 1; // 0x300(0x01)
	char bToggleable : 1; // 0x300(0x01)
	char bDisplayInputActionWhenNotInteractable : 1; // 0x300(0x01)
	char bHideInputActionWithKeyboard : 1; // 0x300(0x01)
	char bShouldUseFallbackDefaultInputAction : 1; // 0x300(0x01)
	char pad_301[0x1]; // 0x301(0x01)
	enum class EButtonClickMethod ClickMethod; // 0x302(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x303(0x01)
	enum class EButtonPressMethod PressMethod; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	int32_t InputPriority; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FDataTableRowHandle TriggeringInputAction; // 0x310(0x10)
	char pad_320[0x10]; // 0x320(0x10)
	struct FMulticastInlineDelegate OnSelectedChangedBase; // 0x330(0x10)
	struct FMulticastInlineDelegate OnButtonBaseClicked; // 0x340(0x10)
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0x350(0x10)
	struct FMulticastInlineDelegate OnButtonBaseHovered; // 0x360(0x10)
	struct FMulticastInlineDelegate OnButtonBaseUnhovered; // 0x370(0x10)
	char pad_380[0x4]; // 0x380(0x04)
	bool bIsPersistentBinding; // 0x384(0x01)
	enum class ECommonInputMode InputModeOverride; // 0x385(0x01)
	char pad_386[0x32]; // 0x386(0x32)
	struct UMaterialInstanceDynamic* SingleMaterialStyleMID; // 0x3b8(0x08)
	struct FButtonStyle NormalStyle; // 0x3c0(0x3f0)
	struct FButtonStyle SelectedStyle; // 0x7b0(0x3f0)
	struct FButtonStyle DisabledStyle; // 0xba0(0x3f0)
	char bStopDoubleClickPropagation : 1; // 0xf90(0x01)
	char pad_F90_1 : 7; // 0xf90(0x01)
	char pad_F91[0xcf]; // 0xf91(0xcf)
	struct UCommonActionWidget* InputActionWidget; // 0x1060(0x08)
	char pad_1068[0x8]; // 0x1068(0x08)

	void StopDoubleClickPropagation(); // Function CommonUI.CommonButtonBase.StopDoubleClickPropagation // (Final|Native|Protected|BlueprintCallable) // @ game+0xe76840
	void SetTriggeringInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.SetTriggeringInputAction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xe767a0
	void SetTriggeredInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.SetTriggeredInputAction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xe76700
	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function CommonUI.CommonButtonBase.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // @ game+0xe76600
	void SetStyle(struct UCommonButtonStyle* InStyle); // Function CommonUI.CommonButtonBase.SetStyle // (Final|Native|Public|BlueprintCallable) // @ game+0xe76570
	void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction); // Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0xe76450
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus); // Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus // (Final|Native|Public|BlueprintCallable) // @ game+0xe763c0
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast); // Function CommonUI.CommonButtonBase.SetSelectedInternal // (Final|Native|Protected|BlueprintCallable) // @ game+0xe76290
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function CommonUI.CommonButtonBase.SetPressMethod // (Final|Native|Public|BlueprintCallable) // @ game+0xe76180
	void SetPressedSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetPressedSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0xe76200
	void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight); // Function CommonUI.CommonButtonBase.SetMinDimensions // (Final|Native|Public|BlueprintCallable) // @ game+0xe760b0
	void SetIsToggleable(bool bInIsToggleable); // Function CommonUI.CommonButtonBase.SetIsToggleable // (Final|Native|Public|BlueprintCallable) // @ game+0xe76020
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback); // Function CommonUI.CommonButtonBase.SetIsSelected // (Final|Native|Public|BlueprintCallable) // @ game+0xe75f50
	void SetIsSelectable(bool bInIsSelectable); // Function CommonUI.CommonButtonBase.SetIsSelectable // (Final|Native|Public|BlueprintCallable) // @ game+0xe75ec0
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled); // Function CommonUI.CommonButtonBase.SetIsInteractionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xe75e30
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected); // Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected // (Final|Native|Public|BlueprintCallable) // @ game+0xe75da0
	void SetIsFocusable(bool bInIsFocusable); // Function CommonUI.CommonButtonBase.SetIsFocusable // (Final|Native|Public|BlueprintCallable) // @ game+0xe75d10
	void SetInputActionProgressMaterial(struct FSlateBrush& InProgressMaterialBrush, struct FName& InProgressMaterialParam); // Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xe75ad0
	void SetHoveredSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetHoveredSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0xe758b0
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function CommonUI.CommonButtonBase.SetClickMethod // (Final|Native|Public|BlueprintCallable) // @ game+0xe75710
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType); // Function CommonUI.CommonButtonBase.OnInputMethodChanged // (Native|Protected) // @ game+0xe754e0
	void OnCurrentTextStyleChanged(); // Function CommonUI.CommonButtonBase.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void OnActionProgress(float HeldPercent); // Function CommonUI.CommonButtonBase.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void OnActionComplete(); // Function CommonUI.CommonButtonBase.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void NativeOnActionProgress(float HeldPercent); // Function CommonUI.CommonButtonBase.NativeOnActionProgress // (Native|Protected) // @ game+0xe75450
	void NativeOnActionComplete(); // Function CommonUI.CommonButtonBase.NativeOnActionComplete // (Native|Protected) // @ game+0xe75430
	bool IsPressed(); // Function CommonUI.CommonButtonBase.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe75400
	bool IsInteractionEnabled(); // Function CommonUI.CommonButtonBase.IsInteractionEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe753d0
	void HandleTriggeringActionCommited(bool& bPassThrough); // Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited // (Native|Protected|HasOutParms) // @ game+0xe75280
	void HandleFocusReceived(); // Function CommonUI.CommonButtonBase.HandleFocusReceived // (Native|Protected) // @ game+0xe75260
	void HandleButtonReleased(); // Function CommonUI.CommonButtonBase.HandleButtonReleased // (Final|Native|Protected) // @ game+0xe75240
	void HandleButtonPressed(); // Function CommonUI.CommonButtonBase.HandleButtonPressed // (Final|Native|Protected) // @ game+0xe75220
	void HandleButtonClicked(); // Function CommonUI.CommonButtonBase.HandleButtonClicked // (Final|Native|Protected) // @ game+0xe75200
	struct UCommonButtonStyle* GetStyle(); // Function CommonUI.CommonButtonBase.GetStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe751a0
	struct UMaterialInstanceDynamic* GetSingleMaterialStyleMID(); // Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe75170
	bool GetShouldSelectUponReceivingFocus(); // Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe75140
	bool GetSelected(); // Function CommonUI.CommonButtonBase.GetSelected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe74de0
	bool GetIsFocusable(); // Function CommonUI.CommonButtonBase.GetIsFocusable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe74a80
	bool GetInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.GetInputAction // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xe749d0
	struct UCommonTextStyle* GetCurrentTextStyleClass(); // Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe744d0
	struct UCommonTextStyle* GetCurrentTextStyle(); // Function CommonUI.CommonButtonBase.GetCurrentTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe744a0
	void GetCurrentCustomPadding(struct FMargin& OutCustomPadding); // Function CommonUI.CommonButtonBase.GetCurrentCustomPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xe74400
	void GetCurrentButtonPadding(struct FMargin& OutButtonPadding); // Function CommonUI.CommonButtonBase.GetCurrentButtonPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xe74360
	void DisableButtonWithReason(struct FText& DisabledReason); // Function CommonUI.CommonButtonBase.DisableButtonWithReason // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xe740d0
	void ClearSelection(); // Function CommonUI.CommonButtonBase.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0xe74070
	void BP_OnUnhovered(); // Function CommonUI.CommonButtonBase.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnSelected(); // Function CommonUI.CommonButtonBase.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnHovered(); // Function CommonUI.CommonButtonBase.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnEnabled(); // Function CommonUI.CommonButtonBase.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnDoubleClicked(); // Function CommonUI.CommonButtonBase.BP_OnDoubleClicked // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnDisabled(); // Function CommonUI.CommonButtonBase.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnDeselected(); // Function CommonUI.CommonButtonBase.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnClicked(); // Function CommonUI.CommonButtonBase.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x2552560
};

// Class CommonUI.CommonBoundActionButton
// Size: 0x1080 (Inherited: 0x1070)
struct UCommonBoundActionButton : UCommonButtonBase {
	struct UCommonTextBlock* Text_ActionName; // 0x1068(0x08)
	char pad_1078[0x8]; // 0x1078(0x08)

	void OnUpdateInputAction(); // Function CommonUI.CommonBoundActionButton.OnUpdateInputAction // (Event|Protected|BlueprintEvent) // @ game+0x2552560
};

// Class CommonUI.CommonButtonStyle
// Size: 0x7b0 (Inherited: 0x28)
struct UCommonButtonStyle : UObject {
	bool bSingleMaterial; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FSlateBrush SingleMaterialBrush; // 0x30(0xd0)
	struct FSlateBrush NormalBase; // 0x100(0xd0)
	struct FSlateBrush NormalHovered; // 0x1d0(0xd0)
	struct FSlateBrush NormalPressed; // 0x2a0(0xd0)
	struct FSlateBrush SelectedBase; // 0x370(0xd0)
	struct FSlateBrush SelectedHovered; // 0x440(0xd0)
	struct FSlateBrush SelectedPressed; // 0x510(0xd0)
	struct FSlateBrush Disabled; // 0x5e0(0xd0)
	struct FMargin ButtonPadding; // 0x6b0(0x10)
	struct FMargin CustomPadding; // 0x6c0(0x10)
	int32_t MinWidth; // 0x6d0(0x04)
	int32_t MinHeight; // 0x6d4(0x04)
	struct UCommonTextStyle* NormalTextStyle; // 0x6d8(0x08)
	struct UCommonTextStyle* NormalHoveredTextStyle; // 0x6e0(0x08)
	struct UCommonTextStyle* SelectedTextStyle; // 0x6e8(0x08)
	struct UCommonTextStyle* SelectedHoveredTextStyle; // 0x6f0(0x08)
	struct UCommonTextStyle* DisabledTextStyle; // 0x6f8(0x08)
	struct FSlateSound PressedSlateSound; // 0x700(0x18)
	struct FCommonButtonStyleOptionalSlateSound SelectedPressedSlateSound; // 0x718(0x20)
	struct FCommonButtonStyleOptionalSlateSound DisabledPressedSlateSound; // 0x738(0x20)
	struct FSlateSound HoveredSlateSound; // 0x758(0x18)
	struct FCommonButtonStyleOptionalSlateSound SelectedHoveredSlateSound; // 0x770(0x20)
	struct FCommonButtonStyleOptionalSlateSound DisabledHoveredSlateSound; // 0x790(0x20)

	struct UCommonTextStyle* GetSelectedTextStyle(); // Function CommonUI.CommonButtonStyle.GetSelectedTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe75110
	void GetSelectedPressedBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xe75020
	struct UCommonTextStyle* GetSelectedHoveredTextStyle(); // Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe74ff0
	void GetSelectedHoveredBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xe74f00
	void GetSelectedBaseBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xe74e10
	struct UCommonTextStyle* GetNormalTextStyle(); // Function CommonUI.CommonButtonStyle.GetNormalTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe74db0
	void GetNormalPressedBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalPressedBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xe74cc0
	struct UCommonTextStyle* GetNormalHoveredTextStyle(); // Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe74c90
	void GetNormalHoveredBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xe74ba0
	void GetNormalBaseBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalBaseBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xe74ab0
	void GetMaterialBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetMaterialBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xe741d0
	struct UCommonTextStyle* GetDisabledTextStyle(); // Function CommonUI.CommonButtonStyle.GetDisabledTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe746d0
	void GetDisabledBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetDisabledBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xe745e0
	void GetCustomPadding(struct FMargin& OutCustomPadding); // Function CommonUI.CommonButtonStyle.GetCustomPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xe74510
	void GetButtonPadding(struct FMargin& OutButtonPadding); // Function CommonUI.CommonButtonStyle.GetButtonPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xe742c0
};

// Class CommonUI.CommonButtonInternalBase
// Size: 0x630 (Inherited: 0x5d0)
struct UCommonButtonInternalBase : UButton {
	char pad_5D0[0x8]; // 0x5d0(0x08)
	struct FMulticastInlineDelegate OnDoubleClicked; // 0x5d8(0x10)
	char pad_5E8[0x10]; // 0x5e8(0x10)
	int32_t MinWidth; // 0x5f8(0x04)
	int32_t MinHeight; // 0x5fc(0x04)
	bool bButtonEnabled; // 0x600(0x01)
	bool bInteractionEnabled; // 0x601(0x01)
	char pad_602[0x2e]; // 0x602(0x2e)
};

// Class CommonUI.CommonWidgetGroupBase
// Size: 0x28 (Inherited: 0x28)
struct UCommonWidgetGroupBase : UObject {

	void RemoveWidget(struct UWidget* InWidget); // Function CommonUI.CommonWidgetGroupBase.RemoveWidget // (Final|Native|Public|BlueprintCallable) // @ game+0xe80110
	void RemoveAll(); // Function CommonUI.CommonWidgetGroupBase.RemoveAll // (Final|Native|Public|BlueprintCallable) // @ game+0xe800f0
	void AddWidget(struct UWidget* InWidget); // Function CommonUI.CommonWidgetGroupBase.AddWidget // (Final|Native|Public|BlueprintCallable) // @ game+0xe7faf0
};

// Class CommonUI.CommonButtonGroupBase
// Size: 0x110 (Inherited: 0x28)
struct UCommonButtonGroupBase : UCommonWidgetGroupBase {
	struct FMulticastInlineDelegate OnSelectedButtonBaseChanged; // 0x28(0x10)
	char pad_38[0x18]; // 0x38(0x18)
	struct FMulticastInlineDelegate OnHoveredButtonBaseChanged; // 0x50(0x10)
	char pad_60[0x18]; // 0x60(0x18)
	struct FMulticastInlineDelegate OnButtonBaseClicked; // 0x78(0x10)
	char pad_88[0x18]; // 0x88(0x18)
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0xa0(0x10)
	char pad_B0[0x18]; // 0xb0(0x18)
	struct FMulticastInlineDelegate OnSelectionCleared; // 0xc8(0x10)
	char pad_D8[0x18]; // 0xd8(0x18)
	bool bSelectionRequired; // 0xf0(0x01)
	char pad_F1[0x1f]; // 0xf1(0x1f)

	void SetSelectionRequired(bool bRequireSelection); // Function CommonUI.CommonButtonGroupBase.SetSelectionRequired // (Final|Native|Public|BlueprintCallable) // @ game+0xe7a6b0
	void SelectPreviousButton(bool bAllowWrap); // Function CommonUI.CommonButtonGroupBase.SelectPreviousButton // (Final|Native|Public|BlueprintCallable) // @ game+0xe79ac0
	void SelectNextButton(bool bAllowWrap); // Function CommonUI.CommonButtonGroupBase.SelectNextButton // (Final|Native|Public|BlueprintCallable) // @ game+0xe79a30
	void SelectButtonAtIndex(int32_t ButtonIndex); // Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xe799a0
	void OnSelectionStateChangedBase(struct UCommonButtonBase* BaseButton, bool bIsSelected); // Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase // (Native|Protected) // @ game+0xe79760
	void OnHandleButtonBaseDoubleClicked(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked // (Native|Protected) // @ game+0xe796b0
	void OnHandleButtonBaseClicked(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked // (Native|Protected) // @ game+0xe79620
	void OnButtonBaseUnhovered(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered // (Native|Protected) // @ game+0xe79590
	void OnButtonBaseHovered(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered // (Native|Protected) // @ game+0xe79500
	bool HasAnyButtons(); // Function CommonUI.CommonButtonGroupBase.HasAnyButtons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe79290
	int32_t GetSelectedButtonIndex(); // Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe79170
	struct UCommonButtonBase* GetSelectedButtonBase(); // Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe79140
	int32_t GetHoveredButtonIndex(); // Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe79110
	int32_t GetButtonCount(); // Function CommonUI.CommonButtonGroupBase.GetButtonCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe79080
	struct UCommonButtonBase* GetButtonBaseAtIndex(int32_t Index); // Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe78fe0
	int32_t FindButtonIndex(struct UCommonButtonBase* ButtonToFind); // Function CommonUI.CommonButtonGroupBase.FindButtonIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe78f40
	void DeselectAll(); // Function CommonUI.CommonButtonGroupBase.DeselectAll // (Final|Native|Public|BlueprintCallable) // @ game+0xe78f20
};

// Class CommonUI.CommonCustomNavigation
// Size: 0x300 (Inherited: 0x2f0)
struct UCommonCustomNavigation : UBorder {
	struct FDelegate OnNavigationEvent; // 0x2e8(0x10)
};

// Class CommonUI.CommonTextBlock
// Size: 0x340 (Inherited: 0x310)
struct UCommonTextBlock : UTextBlock {
	struct UCommonTextStyle* Style; // 0x310(0x08)
	struct UCommonTextScrollStyle* ScrollStyle; // 0x318(0x08)
	bool bDisplayAllCaps; // 0x320(0x01)
	bool bAutoCollapseWithEmptyText; // 0x321(0x01)
	char pad_322[0x2]; // 0x322(0x02)
	float MobileFontSizeMultiplier; // 0x324(0x04)
	char pad_328[0x18]; // 0x328(0x18)

	void SetWrapTextWidth(int32_t InWrapTextAt); // Function CommonUI.CommonTextBlock.SetWrapTextWidth // (Final|Native|Public|BlueprintCallable) // @ game+0xe7e940
	void SetTextCase(bool bUseAllCaps); // Function CommonUI.CommonTextBlock.SetTextCase // (Final|Native|Public|BlueprintCallable) // @ game+0xe7e8b0
	void SetStyle(struct UCommonTextStyle* InStyle); // Function CommonUI.CommonTextBlock.SetStyle // (Final|Native|Public|BlueprintCallable) // @ game+0xe7e5b0
	void ResetScrollState(); // Function CommonUI.CommonTextBlock.ResetScrollState // (Final|Native|Public|BlueprintCallable) // @ game+0xe7e310
};

// Class CommonUI.CommonDateTimeTextBlock
// Size: 0x390 (Inherited: 0x340)
struct UCommonDateTimeTextBlock : UCommonTextBlock {
	char pad_340[0x50]; // 0x340(0x50)

	void SetTimespanValue(struct FTimespan InTimespan); // Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xe7a740
	void SetDateTimeValue(struct FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay); // Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xe79fc0
	void SetCountDownCompletionText(struct FText InCompletionText); // Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText // (Final|Native|Public|BlueprintCallable) // @ game+0xe79e60
	struct FDateTime GetDateTime(); // Function CommonUI.CommonDateTimeTextBlock.GetDateTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xe790d0
};

// Class CommonUI.CommonGameViewportClient
// Size: 0x3e0 (Inherited: 0x3a0)
struct UCommonGameViewportClient : UGameViewportClient {
	char pad_3A0[0x40]; // 0x3a0(0x40)
};

// Class CommonUI.CommonGenericInputActionDataTable
// Size: 0xb0 (Inherited: 0xb0)
struct UCommonGenericInputActionDataTable : UDataTable {
};

// Class CommonUI.CommonInputActionDataProcessor
// Size: 0x28 (Inherited: 0x28)
struct UCommonInputActionDataProcessor : UObject {
};

// Class CommonUI.CommonHardwareVisibilityBorder
// Size: 0x360 (Inherited: 0x310)
struct UCommonHardwareVisibilityBorder : UCommonBorder {
	struct FGameplayTagQuery VisibilityQuery; // 0x308(0x48)
	enum class ESlateVisibility VisibleType; // 0x350(0x01)
	enum class ESlateVisibility HiddenType; // 0x351(0x01)
	char pad_35A[0x6]; // 0x35a(0x06)
};

// Class CommonUI.CommonHierarchicalScrollBox
// Size: 0xc80 (Inherited: 0xc80)
struct UCommonHierarchicalScrollBox : UScrollBox {
};

// Class CommonUI.CommonLazyImage
// Size: 0x390 (Inherited: 0x280)
struct UCommonLazyImage : UImage {
	struct FSlateBrush LoadingBackgroundBrush; // 0x280(0xd0)
	struct FName MaterialTextureParamName; // 0x350(0x08)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x358(0x10)
	char pad_368[0x28]; // 0x368(0x28)

	void SetMaterialTextureParamName(struct FName TextureParamName); // Function CommonUI.CommonLazyImage.SetMaterialTextureParamName // (Final|Native|Public|BlueprintCallable) // @ game+0xe7a480
	void SetBrushFromLazyTexture(struct TSoftObjectPtr<UTexture2D>& LazyTexture, bool bMatchSize); // Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xe79d40
	void SetBrushFromLazyMaterial(struct TSoftObjectPtr<UMaterialInterface>& LazyMaterial); // Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xe79c70
	void SetBrushFromLazyDisplayAsset(struct TSoftObjectPtr<UObject>& LazyObject, bool bMatchTextureSize); // Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xe79b50
	bool IsLoading(); // Function CommonUI.CommonLazyImage.IsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe79450
};

// Class CommonUI.CommonLazyWidget
// Size: 0x280 (Inherited: 0x128)
struct UCommonLazyWidget : UWidget {
	char pad_128[0x8]; // 0x128(0x08)
	struct FSlateBrush LoadingBackgroundBrush; // 0x130(0xd0)
	struct UUserWidget* Content; // 0x200(0x08)
	char pad_208[0x28]; // 0x208(0x28)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x230(0x10)
	char pad_240[0x40]; // 0x240(0x40)

	void SetLazyContent(struct TSoftClassPtr<UObject> SoftWidget); // Function CommonUI.CommonLazyWidget.SetLazyContent // (Final|Native|Public|BlueprintCallable) // @ game+0xe7a270
	bool IsLoading(); // Function CommonUI.CommonLazyWidget.IsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe79480
	struct UUserWidget* GetContent(); // Function CommonUI.CommonLazyWidget.GetContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe790b0
};

// Class CommonUI.CommonListView
// Size: 0xbe0 (Inherited: 0xbe0)
struct UCommonListView : UListView {

	void SetEntrySpacing(float InEntrySpacing); // Function CommonUI.CommonListView.SetEntrySpacing // (Final|Native|Public|BlueprintCallable) // @ game+0xe7a0e0
};

// Class CommonUI.LoadGuardSlot
// Size: 0x60 (Inherited: 0x38)
struct ULoadGuardSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function CommonUI.LoadGuardSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xe7a7d0
	void SetPadding(struct FMargin InPadding); // Function CommonUI.LoadGuardSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xe7a590
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function CommonUI.LoadGuardSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xe7a160
};

// Class CommonUI.CommonLoadGuard
// Size: 0x2a0 (Inherited: 0x140)
struct UCommonLoadGuard : UContentWidget {
	struct FSlateBrush LoadingBackgroundBrush; // 0x140(0xd0)
	enum class EHorizontalAlignment ThrobberAlignment; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	struct FMargin ThrobberPadding; // 0x214(0x10)
	char pad_224[0x4]; // 0x224(0x04)
	struct FText LoadingText; // 0x228(0x18)
	struct UCommonTextStyle* TextStyle; // 0x240(0x08)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x248(0x10)
	struct FSoftObjectPath SpinnerMaterialPath; // 0x258(0x18)
	char pad_270[0x30]; // 0x270(0x30)

	void SetLoadingText(struct FText& InLoadingText); // Function CommonUI.CommonLoadGuard.SetLoadingText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xe7a3b0
	void SetIsLoading(bool bInIsLoading); // Function CommonUI.CommonLoadGuard.SetIsLoading // (Final|Native|Public|BlueprintCallable) // @ game+0xe7a1e0
	void OnAssetLoaded__DelegateSignature(struct UObject* Object); // DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature // (Public|Delegate) // @ game+0x2552560
	bool IsLoading(); // Function CommonUI.CommonLoadGuard.IsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe794b0
	void BP_GuardAndLoadAsset(struct TSoftObjectPtr<UObject>& InLazyAsset, struct FDelegate& OnAssetLoaded); // Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0xe78de0
};

// Class CommonUI.CommonNumericTextBlock
// Size: 0x3e0 (Inherited: 0x340)
struct UCommonNumericTextBlock : UCommonTextBlock {
	struct FMulticastInlineDelegate OnInterpolationStartedEvent; // 0x338(0x10)
	struct FMulticastInlineDelegate OnInterpolationUpdatedEvent; // 0x348(0x10)
	struct FMulticastInlineDelegate OnOutroEvent; // 0x358(0x10)
	struct FMulticastInlineDelegate OnInterpolationEndedEvent; // 0x368(0x10)
	float CurrentNumericValue; // 0x378(0x04)
	enum class ECommonNumericType NumericType; // 0x37c(0x01)
	struct FCommonNumberFormattingOptions FormattingSpecification; // 0x380(0x14)
	float EaseOutInterpolationExponent; // 0x394(0x04)
	float InterpolationUpdateInterval; // 0x398(0x04)
	float PostInterpolationShrinkDuration; // 0x39c(0x04)
	bool PerformSizeInterpolation; // 0x3a0(0x01)
	bool IsPercentage; // 0x3a1(0x01)
	char pad_3A7[0x39]; // 0x3a7(0x39)

	void SetNumericType(enum class ECommonNumericType InNumericType); // Function CommonUI.CommonNumericTextBlock.SetNumericType // (Final|Native|Public|BlueprintCallable) // @ game+0xe7a510
	void SetCurrentValue(float NewValue); // Function CommonUI.CommonNumericTextBlock.SetCurrentValue // (Final|Native|Public|BlueprintCallable) // @ game+0xe79f40
	void OnOutro__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock); // DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2552560
	void OnInterpolationUpdated__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2552560
	void OnInterpolationStarted__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2552560
	void OnInterpolationEnded__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2552560
	bool IsInterpolatingNumericValue(); // Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe79420
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset); // Function CommonUI.CommonNumericTextBlock.InterpolateToValue // (Final|Native|Public|BlueprintCallable) // @ game+0xe792c0
	float GetTargetValue(); // Function CommonUI.CommonNumericTextBlock.GetTargetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe79260
};

// Class CommonUI.CommonPoolableWidgetInterface
// Size: 0x28 (Inherited: 0x28)
struct UCommonPoolableWidgetInterface : UInterface {

	void OnReleaseToPool(); // Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool // (Native|Event|Protected|BlueprintEvent) // @ game+0xe79740
	void OnAcquireFromPool(); // Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool // (Native|Event|Protected|BlueprintEvent) // @ game+0xe794e0
};

// Class CommonUI.CommonRichTextBlock
// Size: 0x880 (Inherited: 0x840)
struct UCommonRichTextBlock : URichTextBlock {
	enum class ERichTextInlineIconDisplayMode InlineIconDisplayMode; // 0x840(0x01)
	bool bTintInlineIcon; // 0x841(0x01)
	char pad_842[0x6]; // 0x842(0x06)
	struct UCommonTextStyle* DefaultTextStyleOverrideClass; // 0x848(0x08)
	float MobileTextBlockScale; // 0x850(0x04)
	char pad_854[0x4]; // 0x854(0x04)
	struct UCommonTextScrollStyle* ScrollStyle; // 0x858(0x08)
	bool bDisplayAllCaps; // 0x860(0x01)
	char pad_861[0x1f]; // 0x861(0x1f)
};

// Class CommonUI.CommonRotator
// Size: 0x10c0 (Inherited: 0x1070)
struct UCommonRotator : UCommonButtonBase {
	char pad_1070[0x8]; // 0x1070(0x08)
	struct FMulticastInlineDelegate OnRotated; // 0x1078(0x10)
	char pad_1088[0x18]; // 0x1088(0x18)
	struct UCommonTextBlock* MyText; // 0x10a0(0x08)
	char pad_10A8[0x18]; // 0x10a8(0x18)

	void ShiftTextRight(); // Function CommonUI.CommonRotator.ShiftTextRight // (Final|Native|Public|BlueprintCallable) // @ game+0xe7a870
	void ShiftTextLeft(); // Function CommonUI.CommonRotator.ShiftTextLeft // (Final|Native|Public|BlueprintCallable) // @ game+0xe7a850
	void SetSelectedItem(int32_t InValue); // Function CommonUI.CommonRotator.SetSelectedItem // (Native|Public|BlueprintCallable) // @ game+0xe7a620
	void PopulateTextLabels(struct TArray<struct FText> Labels); // Function CommonUI.CommonRotator.PopulateTextLabels // (Final|Native|Public|BlueprintCallable) // @ game+0xe79830
	struct FText GetSelectedText(); // Function CommonUI.CommonRotator.GetSelectedText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe791c0
	int32_t GetSelectedIndex(); // Function CommonUI.CommonRotator.GetSelectedIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe791a0
	void BP_OnOptionsPopulated(int32_t Count); // Function CommonUI.CommonRotator.BP_OnOptionsPopulated // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnOptionSelected(int32_t Index); // Function CommonUI.CommonRotator.BP_OnOptionSelected // (Event|Protected|BlueprintEvent) // @ game+0x2552560
};

// Class CommonUI.CommonTabListWidgetBase
// Size: 0x388 (Inherited: 0x2b8)
struct UCommonTabListWidgetBase : UCommonUserWidget {
	struct FMulticastInlineDelegate OnTabSelected; // 0x2b8(0x10)
	struct FMulticastInlineDelegate OnTabButtonCreation; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnTabButtonRemoval; // 0x2d8(0x10)
	struct FDataTableRowHandle NextTabInputActionData; // 0x2e8(0x10)
	struct FDataTableRowHandle PreviousTabInputActionData; // 0x2f8(0x10)
	bool bAutoListenForInput; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	struct TWeakObjectPtr<struct UCommonAnimatedSwitcher> LinkedSwitcher; // 0x30c(0x08)
	char pad_314[0x4]; // 0x314(0x04)
	struct UCommonButtonGroupBase* TabButtonGroup; // 0x318(0x08)
	char pad_320[0x8]; // 0x320(0x08)
	struct TMap<struct FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID; // 0x328(0x50)
	char pad_378[0x10]; // 0x378(0x10)

	void SetTabVisibility(struct FName TabNameID, enum class ESlateVisibility NewVisibility); // Function CommonUI.CommonTabListWidgetBase.SetTabVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0xe7e7e0
	void SetTabInteractionEnabled(struct FName TabNameID, bool bEnable); // Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xe7e710
	void SetTabEnabled(struct FName TabNameID, bool bEnable); // Function CommonUI.CommonTabListWidgetBase.SetTabEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xe7e640
	void SetListeningForInput(bool bShouldListen); // Function CommonUI.CommonTabListWidgetBase.SetListeningForInput // (Native|Public|BlueprintCallable) // @ game+0xe7e520
	void SetLinkedSwitcher(struct UCommonAnimatedSwitcher* CommonSwitcher); // Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher // (Native|Public|BlueprintCallable) // @ game+0xe7e490
	bool SelectTabByID(struct FName TabNameID, bool bSuppressClickFeedback); // Function CommonUI.CommonTabListWidgetBase.SelectTabByID // (Final|Native|Public|BlueprintCallable) // @ game+0xe7e330
	bool RemoveTab(struct FName TabNameID); // Function CommonUI.CommonTabListWidgetBase.RemoveTab // (Final|Native|Public|BlueprintCallable) // @ game+0xe7e270
	void RemoveAllTabs(); // Function CommonUI.CommonTabListWidgetBase.RemoveAllTabs // (Final|Native|Public|BlueprintCallable) // @ game+0xe7e250
	bool RegisterTab(struct FName TabNameID, struct UCommonButtonBase* ButtonWidgetType, struct UWidget* ContentWidget); // Function CommonUI.CommonTabListWidgetBase.RegisterTab // (Final|Native|Public|BlueprintCallable) // @ game+0xe7e140
	void OnTabSelected__DelegateSignature(struct FName TabId); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2552560
	void OnTabButtonRemoval__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2552560
	void OnTabButtonCreation__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2552560
	void HandleTabRemoval(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval // (Native|Event|Protected|BlueprintEvent) // @ game+0xe7e070
	void HandleTabCreation(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function CommonUI.CommonTabListWidgetBase.HandleTabCreation // (Native|Event|Protected|BlueprintEvent) // @ game+0xe7dfa0
	void HandleTabButtonSelected(struct UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex); // Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected // (Final|Native|Protected) // @ game+0xe7ded0
	void HandlePreviousTabInputAction(bool& bPassThrough); // Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction // (Final|Native|Protected|HasOutParms) // @ game+0xe7de40
	void HandlePreLinkedSwitcherChanged_BP(); // Function CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void HandlePostLinkedSwitcherChanged_BP(); // Function CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void HandleNextTabInputAction(bool& bPassThrough); // Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction // (Final|Native|Protected|HasOutParms) // @ game+0xe7ddb0
	struct FName GetTabIdAtIndex(int32_t Index); // Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe7dd20
	int32_t GetTabCount(); // Function CommonUI.CommonTabListWidgetBase.GetTabCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe7dcf0
	struct UCommonButtonBase* GetTabButtonBaseByID(struct FName TabNameID); // Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID // (Final|Native|Public|BlueprintCallable) // @ game+0xe7dc50
	struct FName GetSelectedTabId(); // Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe7da00
	struct UCommonAnimatedSwitcher* GetLinkedSwitcher(); // Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe7d930
	struct FName GetActiveTab(); // Function CommonUI.CommonTabListWidgetBase.GetActiveTab // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe7d5b0
	void DisableTabWithReason(struct FName TabNameID, struct FText& Reason); // Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xe7d3c0
};

// Class CommonUI.CommonTextStyle
// Size: 0x1b0 (Inherited: 0x28)
struct UCommonTextStyle : UObject {
	struct FSlateFontInfo Font; // 0x28(0x58)
	struct FLinearColor Color; // 0x80(0x10)
	bool bUsesDropShadow; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FVector2D ShadowOffset; // 0x98(0x10)
	struct FLinearColor ShadowColor; // 0xa8(0x10)
	struct FMargin Margin; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FSlateBrush StrikeBrush; // 0xd0(0xd0)
	float LineHeightPercentage; // 0x1a0(0x04)
	char pad_1A4[0xc]; // 0x1a4(0x0c)

	void GetStrikeBrush(struct FSlateBrush& OutStrikeBrush); // Function CommonUI.CommonTextStyle.GetStrikeBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xe7db60
	void GetShadowOffset(struct FVector2D& OutShadowOffset); // Function CommonUI.CommonTextStyle.GetShadowOffset // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xe7dad0
	void GetShadowColor(struct FLinearColor& OutColor); // Function CommonUI.CommonTextStyle.GetShadowColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xe7da40
	void GetMargin(struct FMargin& OutMargin); // Function CommonUI.CommonTextStyle.GetMargin // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xe7d960
	float GetLineHeightPercentage(); // Function CommonUI.CommonTextStyle.GetLineHeightPercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe7d900
	void GetFont(struct FSlateFontInfo& OutFont); // Function CommonUI.CommonTextStyle.GetFont // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xe7d660
	void GetColor(struct FLinearColor& OutColor); // Function CommonUI.CommonTextStyle.GetColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xe7d5d0
};

// Class CommonUI.CommonTextScrollStyle
// Size: 0x40 (Inherited: 0x28)
struct UCommonTextScrollStyle : UObject {
	float Speed; // 0x28(0x04)
	float StartDelay; // 0x2c(0x04)
	float EndDelay; // 0x30(0x04)
	float FadeInDelay; // 0x34(0x04)
	float FadeOutDelay; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class CommonUI.CommonTileView
// Size: 0xc00 (Inherited: 0xc00)
struct UCommonTileView : UTileView {
};

// Class CommonUI.CommonTreeView
// Size: 0xc40 (Inherited: 0xc40)
struct UCommonTreeView : UTreeView {
};

// Class CommonUI.CommonUIActionRouterBase
// Size: 0x108 (Inherited: 0x30)
struct UCommonUIActionRouterBase : ULocalPlayerSubsystem {
	char pad_30[0xd8]; // 0x30(0xd8)
};

// Class CommonUI.CommonUIEditorSettings
// Size: 0xa8 (Inherited: 0x28)
struct UCommonUIEditorSettings : UObject {
	struct TSoftClassPtr<UObject> TemplateTextStyle; // 0x28(0x28)
	struct TSoftClassPtr<UObject> TemplateButtonStyle; // 0x50(0x28)
	struct TSoftClassPtr<UObject> TemplateBorderStyle; // 0x78(0x28)
	char pad_A0[0x8]; // 0xa0(0x08)
};

// Class CommonUI.CommonUIInputSettings
// Size: 0x78 (Inherited: 0x28)
struct UCommonUIInputSettings : UObject {
	bool bLinkCursorToGamepadFocus; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t UIActionProcessingPriority; // 0x2c(0x04)
	struct TArray<struct FUIInputAction> InputActions; // 0x30(0x10)
	struct TArray<struct FUIInputAction> ActionOverrides; // 0x40(0x10)
	struct FCommonAnalogCursorSettings AnalogCursorSettings; // 0x50(0x24)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class CommonUI.CommonUILibrary
// Size: 0x28 (Inherited: 0x28)
struct UCommonUILibrary : UBlueprintFunctionLibrary {

	struct UWidget* FindParentWidgetOfType(struct UWidget* StartingWidget, struct UWidget* Type); // Function CommonUI.CommonUILibrary.FindParentWidgetOfType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xe7d4e0
};

// Class CommonUI.CommonUIRichTextData
// Size: 0x30 (Inherited: 0x28)
struct UCommonUIRichTextData : UObject {
	struct UDataTable* InlineIconSet; // 0x28(0x08)
};

// Class CommonUI.CommonUISettings
// Size: 0x1d0 (Inherited: 0x28)
struct UCommonUISettings : UObject {
	bool bAutoLoadData; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TSoftObjectPtr<UObject> DefaultImageResourceObject; // 0x30(0x28)
	struct TSoftObjectPtr<UMaterialInterface> DefaultThrobberMaterial; // 0x58(0x28)
	struct TSoftClassPtr<UObject> DefaultRichTextDataClass; // 0x80(0x28)
	struct TArray<struct FGameplayTag> PlatformTraits; // 0xa8(0x10)
	char pad_B8[0x28]; // 0xb8(0x28)
	struct UObject* DefaultImageResourceObjectInstance; // 0xe0(0x08)
	struct UMaterialInterface* DefaultThrobberMaterialInstance; // 0xe8(0x08)
	struct FSlateBrush DefaultThrobberBrush; // 0xf0(0xd0)
	struct UCommonUIRichTextData* RichTextDataInstance; // 0x1c0(0x08)
	char pad_1C8[0x8]; // 0x1c8(0x08)
};

// Class CommonUI.CommonUISubsystemBase
// Size: 0x40 (Inherited: 0x30)
struct UCommonUISubsystemBase : UGameInstanceSubsystem {
	char pad_30[0x10]; // 0x30(0x10)

	struct FSlateBrush GetInputActionButtonIcon(struct FDataTableRowHandle& InputActionRowHandle, enum class ECommonInputType InputType, struct FName& GamepadName); // Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xe7d740
};

// Class CommonUI.CommonUIVisibilitySubsystem
// Size: 0x88 (Inherited: 0x30)
struct UCommonUIVisibilitySubsystem : ULocalPlayerSubsystem {
	char pad_30[0x58]; // 0x30(0x58)
};

// Class CommonUI.CommonVideoPlayer
// Size: 0x280 (Inherited: 0x128)
struct UCommonVideoPlayer : UWidget {
	struct UMediaSource* Video; // 0x128(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x130(0x08)
	struct UMediaTexture* MediaTexture; // 0x138(0x08)
	struct UMaterial* VideoMaterial; // 0x140(0x08)
	struct UMediaSoundComponent* SoundComponent; // 0x148(0x08)
	struct FSlateBrush VideoBrush; // 0x150(0xd0)
	char pad_220[0x60]; // 0x220(0x60)
};

// Class CommonUI.CommonVisibilitySwitcher
// Size: 0x178 (Inherited: 0x150)
struct UCommonVisibilitySwitcher : UOverlay {
	enum class ESlateVisibility ShownVisibility; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	int32_t ActiveWidgetIndex; // 0x154(0x04)
	bool bAutoActivateSlot; // 0x158(0x01)
	bool bActivateFirstSlotOnAdding; // 0x159(0x01)
	char pad_15A[0x1e]; // 0x15a(0x1e)

	void SetActiveWidgetIndex(int32_t Index); // Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xe802c0
	void SetActiveWidget(struct UWidget* Widget); // Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget // (Final|Native|Public|BlueprintCallable) // @ game+0xe801a0
	void IncrementActiveWidgetIndex(bool bAllowWrapping); // Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xe80020
	int32_t GetActiveWidgetIndex(); // Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe7fd00
	struct UWidget* GetActiveWidget(); // Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe7fcd0
	void DecrementActiveWidgetIndex(bool bAllowWrapping); // Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xe7fc20
	void DeactivateVisibleSlot(); // Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot // (Final|Native|Public|BlueprintCallable) // @ game+0xe7fc00
	void ActivateVisibleSlot(); // Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot // (Final|Native|Public|BlueprintCallable) // @ game+0xe7fad0
};

// Class CommonUI.CommonVisibilitySwitcherSlot
// Size: 0x68 (Inherited: 0x58)
struct UCommonVisibilitySwitcherSlot : UOverlaySlot {
	char pad_58[0x10]; // 0x58(0x10)
};

// Class CommonUI.UCommonVisibilityWidgetBase
// Size: 0x360 (Inherited: 0x310)
struct UUCommonVisibilityWidgetBase : UCommonBorder {
	struct TMap<struct FName, bool> VisibilityControls; // 0x308(0x50)
	bool bShowForGamepad; // 0x358(0x01)
	bool bShowForMouseAndKeyboard; // 0x359(0x01)
	bool bShowForTouch; // 0x35a(0x01)
	enum class ESlateVisibility VisibleType; // 0x35b(0x01)
	enum class ESlateVisibility HiddenType; // 0x35c(0x01)

	struct TArray<struct FName> GetRegisteredPlatforms(); // Function CommonUI.UCommonVisibilityWidgetBase.GetRegisteredPlatforms // (Final|Native|Static|Protected) // @ game+0xe7fd50
};

// Class CommonUI.CommonVisualAttachment
// Size: 0x198 (Inherited: 0x178)
struct UCommonVisualAttachment : USizeBox {
	struct FVector2D ContentAnchor; // 0x178(0x10)
	char pad_188[0x10]; // 0x188(0x10)
};

// Class CommonUI.CommonWidgetCarousel
// Size: 0x188 (Inherited: 0x140)
struct UCommonWidgetCarousel : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct FMulticastInlineDelegate OnCurrentPageIndexChanged; // 0x148(0x10)
	char pad_158[0x30]; // 0x158(0x30)

	void SetActiveWidgetIndex(int32_t Index); // Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex // (Native|Public|BlueprintCallable) // @ game+0xe80350
	void SetActiveWidget(struct UWidget* Widget); // Function CommonUI.CommonWidgetCarousel.SetActiveWidget // (Native|Public|BlueprintCallable) // @ game+0xe80230
	void PreviousPage(); // Function CommonUI.CommonWidgetCarousel.PreviousPage // (Final|Native|Public|BlueprintCallable) // @ game+0xe800d0
	void NextPage(); // Function CommonUI.CommonWidgetCarousel.NextPage // (Final|Native|Public|BlueprintCallable) // @ game+0xe800b0
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe7fde0
	int32_t GetActiveWidgetIndex(); // Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe7fd20
	void EndAutoScrolling(); // Function CommonUI.CommonWidgetCarousel.EndAutoScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0xe7fcb0
	void BeginAutoScrolling(float ScrollInterval); // Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0xe7fb80
};

// Class CommonUI.CommonWidgetCarouselNavBar
// Size: 0x170 (Inherited: 0x128)
struct UCommonWidgetCarouselNavBar : UWidget {
	struct UCommonButtonBase* ButtonWidgetType; // 0x128(0x08)
	struct FMargin ButtonPadding; // 0x130(0x10)
	char pad_140[0x10]; // 0x140(0x10)
	struct UCommonWidgetCarousel* LinkedCarousel; // 0x150(0x08)
	struct UCommonButtonGroupBase* ButtonGroup; // 0x158(0x08)
	struct TArray<struct UCommonButtonBase*> Buttons; // 0x160(0x10)

	void SetLinkedCarousel(struct UCommonWidgetCarousel* CommonCarousel); // Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel // (Final|Native|Public|BlueprintCallable) // @ game+0xe803e0
	void HandlePageChanged(struct UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex); // Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged // (Final|Native|Protected) // @ game+0xe7ff50
	void HandleButtonClicked(struct UCommonButtonBase* AssociatedButton, int32_t ButtonIndex); // Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked // (Final|Native|Protected) // @ game+0xe7fe80
};

