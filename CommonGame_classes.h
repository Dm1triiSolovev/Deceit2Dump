// Class CommonGame.AsyncAction_CreateWidgetAsync
// Size: 0xa0 (Inherited: 0x30)
struct UAsyncAction_CreateWidgetAsync : UCancellableAsyncAction {
	struct FMulticastInlineDelegate OnComplete; // 0x30(0x10)
	char pad_40[0x60]; // 0x40(0x60)

	struct UAsyncAction_CreateWidgetAsync* CreateWidgetAsync(struct UObject* WorldContextObject, struct TSoftClassPtr<UObject> UserWidgetSoftClass, struct APlayerController* OwningPlayer, bool bSuspendInputUntilComplete); // Function CommonGame.AsyncAction_CreateWidgetAsync.CreateWidgetAsync // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xe91080
};

// Class CommonGame.AsyncAction_PushContentToLayerForPlayer
// Size: 0xa0 (Inherited: 0x30)
struct UAsyncAction_PushContentToLayerForPlayer : UCancellableAsyncAction {
	struct FMulticastInlineDelegate BeforePush; // 0x30(0x10)
	struct FMulticastInlineDelegate AfterPush; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	struct UAsyncAction_PushContentToLayerForPlayer* PushContentToLayerForPlayer(struct APlayerController* OwningPlayer, struct TSoftClassPtr<UObject> WidgetClass, struct FGameplayTag LayerName, bool bSuspendInputUntilComplete); // Function CommonGame.AsyncAction_PushContentToLayerForPlayer.PushContentToLayerForPlayer // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xe918e0
};

// Class CommonGame.AsyncAction_ShowConfirmation
// Size: 0x58 (Inherited: 0x30)
struct UAsyncAction_ShowConfirmation : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnResult; // 0x30(0x10)
	struct UObject* WorldContextObject; // 0x40(0x08)
	struct ULocalPlayer* TargetLocalPlayer; // 0x48(0x08)
	struct UCommonGameDialogDescriptor* Descriptor; // 0x50(0x08)

	struct UAsyncAction_ShowConfirmation* ShowConfirmationYesNo(struct UObject* InWorldContextObject, struct FText Title, struct FText Message); // Function CommonGame.AsyncAction_ShowConfirmation.ShowConfirmationYesNo // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xe92600
	struct UAsyncAction_ShowConfirmation* ShowConfirmationOkCancel(struct UObject* InWorldContextObject, struct FText Title, struct FText Message); // Function CommonGame.AsyncAction_ShowConfirmation.ShowConfirmationOkCancel // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xe92430
	struct UAsyncAction_ShowConfirmation* ShowConfirmationCustom(struct UObject* InWorldContextObject, struct UCommonGameDialogDescriptor* Descriptor); // Function CommonGame.AsyncAction_ShowConfirmation.ShowConfirmationCustom // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xe92360
};

// Class CommonGame.CommonGameDialogDescriptor
// Size: 0x68 (Inherited: 0x28)
struct UCommonGameDialogDescriptor : UObject {
	struct FText Header; // 0x28(0x18)
	struct FText Body; // 0x40(0x18)
	struct TArray<struct FConfirmationDialogAction> ButtonActions; // 0x58(0x10)
};

// Class CommonGame.CommonGameDialog
// Size: 0x378 (Inherited: 0x378)
struct UCommonGameDialog : UCommonActivatableWidget {
};

// Class CommonGame.CommonGameInstance
// Size: 0x1b0 (Inherited: 0x1a8)
struct UCommonGameInstance : UGameInstance {
	char pad_1A8[0x8]; // 0x1a8(0x08)

	void HandleSystemMessage(struct FGameplayTag MessageType, struct FText Title, struct FText Message); // Function CommonGame.CommonGameInstance.HandleSystemMessage // (Native|Public) // @ game+0xe91500
	void HandlePrivilegeChanged(struct UCommonUserInfo* UserInfo, enum class ECommonUserPrivilege Privilege, enum class ECommonUserAvailability OldAvailability, enum class ECommonUserAvailability NewAvailability); // Function CommonGame.CommonGameInstance.HandlePrivilegeChanged // (Native|Public) // @ game+0xe913b0
};

// Class CommonGame.CommonLocalPlayer
// Size: 0x2f0 (Inherited: 0x2a0)
struct UCommonLocalPlayer : ULocalPlayer {
	char pad_2A0[0x50]; // 0x2a0(0x50)
};

// Class CommonGame.CommonMessagingSubsystem
// Size: 0x30 (Inherited: 0x30)
struct UCommonMessagingSubsystem : ULocalPlayerSubsystem {
};

// Class CommonGame.CommonPlayerController
// Size: 0x7c8 (Inherited: 0x7c8)
struct ACommonPlayerController : AModularPlayerController {
};

// Class CommonGame.CommonPlayerInputKey
// Size: 0x6f0 (Inherited: 0x2b8)
struct UCommonPlayerInputKey : UCommonUserWidget {
	struct FName BoundAction; // 0x2b8(0x08)
	float AxisScale; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct FKey BoundKeyFallback; // 0x2c8(0x18)
	enum class ECommonInputType InputTypeOverride; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	struct FName PresetNameOverride; // 0x2e4(0x08)
	enum class ECommonKeybindForcedHoldStatus ForcedHoldKeybindStatus; // 0x2ec(0x01)
	bool bIsHoldKeybind; // 0x2ed(0x01)
	bool bShowKeybindBorder; // 0x2ee(0x01)
	char pad_2EF[0x1]; // 0x2ef(0x01)
	struct FVector2D FrameSize; // 0x2f0(0x10)
	bool bShowTimeCountDown; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct FKey BoundKey; // 0x308(0x18)
	struct FSlateBrush HoldProgressBrush; // 0x320(0xd0)
	struct FSlateBrush KeyBindTextBorder; // 0x3f0(0xd0)
	bool bShowUnboundStatus; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	struct FSlateFontInfo KeyBindTextFont; // 0x4c8(0x58)
	struct FSlateFontInfo CountdownTextFont; // 0x520(0x58)
	struct FMeasuredText CountdownText; // 0x578(0x30)
	struct FMeasuredText KeybindText; // 0x5a8(0x30)
	struct FMargin KeybindTextPadding; // 0x5d8(0x10)
	struct FVector2D KeybindFrameMinimumSize; // 0x5e8(0x10)
	struct FName PercentageMaterialParameterName; // 0x5f8(0x08)
	struct UMaterialInstanceDynamic* ProgressPercentageMID; // 0x600(0x08)
	char pad_608[0x18]; // 0x608(0x18)
	struct FSlateBrush CachedKeyBrush; // 0x620(0xd0)

	void UpdateKeybindWidget(); // Function CommonGame.CommonPlayerInputKey.UpdateKeybindWidget // (Final|Native|Public|BlueprintCallable) // @ game+0xe92a40
	void StopHoldProgress(struct FName HoldActionName, bool bCompletedSuccessfully); // Function CommonGame.CommonPlayerInputKey.StopHoldProgress // (Final|Native|Public) // @ game+0xe928a0
	void StartHoldProgress(struct FName HoldActionName, float HoldDuration); // Function CommonGame.CommonPlayerInputKey.StartHoldProgress // (Final|Native|Public) // @ game+0xe927d0
	void SetShowProgressCountDown(bool bShow); // Function CommonGame.CommonPlayerInputKey.SetShowProgressCountDown // (Final|Native|Public|BlueprintCallable) // @ game+0xe922d0
	void SetPresetNameOverride(struct FName NewValue); // Function CommonGame.CommonPlayerInputKey.SetPresetNameOverride // (Final|Native|Public|BlueprintCallable) // @ game+0xe92240
	void SetForcedHoldKeybindStatus(enum class ECommonKeybindForcedHoldStatus InForcedHoldKeybindStatus); // Function CommonGame.CommonPlayerInputKey.SetForcedHoldKeybindStatus // (Final|Native|Public|BlueprintCallable) // @ game+0xe921c0
	void SetForcedHoldKeybind(bool InForcedHoldKeybind); // Function CommonGame.CommonPlayerInputKey.SetForcedHoldKeybind // (Final|Native|Public|BlueprintCallable) // @ game+0xe92130
	void SetBoundKey(struct FKey NewBoundAction); // Function CommonGame.CommonPlayerInputKey.SetBoundKey // (Final|Native|Public|BlueprintCallable) // @ game+0xe92040
	void SetBoundAction(struct FName NewBoundAction); // Function CommonGame.CommonPlayerInputKey.SetBoundAction // (Final|Native|Public|BlueprintCallable) // @ game+0xe91fb0
	void SetAxisScale(float NewValue); // Function CommonGame.CommonPlayerInputKey.SetAxisScale // (Final|Native|Public|BlueprintCallable) // @ game+0xe91f30
	bool IsHoldKeybind(); // Function CommonGame.CommonPlayerInputKey.IsHoldKeybind // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe91720
	bool IsBoundKeyValid(); // Function CommonGame.CommonPlayerInputKey.IsBoundKeyValid // (Final|Native|Public|Const) // @ game+0xe916e0
};

// Class CommonGame.CommonUIExtensions
// Size: 0x28 (Inherited: 0x28)
struct UCommonUIExtensions : UBlueprintFunctionLibrary {

	struct FName SuspendInputForPlayer(struct APlayerController* PlayerController, struct FName SuspendReason); // Function CommonGame.CommonUIExtensions.SuspendInputForPlayer // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xe92970
	void ResumeInputForPlayer(struct APlayerController* PlayerController, struct FName SuspendToken); // Function CommonGame.CommonUIExtensions.ResumeInputForPlayer // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xe91e70
	void PushStreamedContentToLayer_ForPlayer(struct ULocalPlayer* LocalPlayer, struct FGameplayTag LayerName, struct TSoftClassPtr<UObject> WidgetClass); // Function CommonGame.CommonUIExtensions.PushStreamedContentToLayer_ForPlayer // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xe91bf0
	struct UCommonActivatableWidget* PushContentToLayer_ForPlayer(struct ULocalPlayer* LocalPlayer, struct FGameplayTag LayerName, struct UCommonActivatableWidget* WidgetClass); // Function CommonGame.CommonUIExtensions.PushContentToLayer_ForPlayer // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xe91af0
	void PopContentFromLayer(struct UCommonActivatableWidget* ActivatableWidget); // Function CommonGame.CommonUIExtensions.PopContentFromLayer // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xe91860
	bool IsOwningPlayerUsingTouch(struct UUserWidget* WidgetContextObject); // Function CommonGame.CommonUIExtensions.IsOwningPlayerUsingTouch // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xe917d0
	bool IsOwningPlayerUsingGamepad(struct UUserWidget* WidgetContextObject); // Function CommonGame.CommonUIExtensions.IsOwningPlayerUsingGamepad // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xe91740
	enum class ECommonInputType GetOwningPlayerInputType(struct UUserWidget* WidgetContextObject); // Function CommonGame.CommonUIExtensions.GetOwningPlayerInputType // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xe91320
	struct ULocalPlayer* GetLocalPlayerFromController(struct APlayerController* PlayerController); // Function CommonGame.CommonUIExtensions.GetLocalPlayerFromController // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0xe91290
};

// Class CommonGame.GameUIManagerSubsystem
// Size: 0x60 (Inherited: 0x30)
struct UGameUIManagerSubsystem : UGameInstanceSubsystem {
	struct UGameUIPolicy* CurrentPolicy; // 0x30(0x08)
	struct TSoftClassPtr<UObject> DefaultUIPolicyClass; // 0x38(0x28)
};

// Class CommonGame.GameUIPolicy
// Size: 0x68 (Inherited: 0x28)
struct UGameUIPolicy : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TSoftClassPtr<UObject> LayoutClass; // 0x30(0x28)
	struct TArray<struct FRootViewportLayoutInfo> RootViewportLayouts; // 0x58(0x10)
};

// Class CommonGame.PrimaryGameLayout
// Size: 0x320 (Inherited: 0x2b8)
struct UPrimaryGameLayout : UCommonUserWidget {
	char pad_2B8[0x18]; // 0x2b8(0x18)
	struct TMap<struct FGameplayTag, struct UCommonActivatableWidgetContainerBase*> Layers; // 0x2d0(0x50)

	void RegisterLayer(struct FGameplayTag LayerTag, struct UCommonActivatableWidgetContainerBase* LayerWidget); // Function CommonGame.PrimaryGameLayout.RegisterLayer // (Final|Native|Protected|BlueprintCallable) // @ game+0xe91da0
};

