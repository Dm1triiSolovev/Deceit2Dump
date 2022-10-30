// Class CommonLoadingScreen.CommonLoadingScreenSettings
// Size: 0x68 (Inherited: 0x38)
struct UCommonLoadingScreenSettings : UDeveloperSettingsBackedByCVars {
	struct FSoftClassPath LoadingScreenWidget; // 0x38(0x18)
	int32_t LoadingScreenZOrder; // 0x50(0x04)
	float HoldLoadingScreenAdditionalSecs; // 0x54(0x04)
	float LoadingScreenHeartbeatHangDuration; // 0x58(0x04)
	float LogLoadingScreenHeartbeatInterval; // 0x5c(0x04)
	bool LogLoadingScreenReasonEveryFrame; // 0x60(0x01)
	bool ForceLoadingScreenVisible; // 0x61(0x01)
	bool HoldLoadingScreenAdditionalSecsEvenInEditor; // 0x62(0x01)
	bool ForceTickLoadingScreenEvenInEditor; // 0x63(0x01)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class CommonLoadingScreen.LoadingProcessInterface
// Size: 0x28 (Inherited: 0x28)
struct ULoadingProcessInterface : UInterface {
};

// Class CommonLoadingScreen.LoadingProcessTask
// Size: 0x40 (Inherited: 0x28)
struct ULoadingProcessTask : UObject {
	char pad_28[0x18]; // 0x28(0x18)

	void Unregister(); // Function CommonLoadingScreen.LoadingProcessTask.Unregister // (Final|Native|Public|BlueprintCallable) // @ game+0x101a530
	void SetShowLoadingScreenReason(struct FString InReason); // Function CommonLoadingScreen.LoadingProcessTask.SetShowLoadingScreenReason // (Final|Native|Public|BlueprintCallable) // @ game+0x101a490
	struct ULoadingProcessTask* CreateLoadingScreenProcessTask(struct UObject* WorldContextObject, struct FString ShowLoadingScreenReason); // Function CommonLoadingScreen.LoadingProcessTask.CreateLoadingScreenProcessTask // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x101a2f0
};

// Class CommonLoadingScreen.LoadingScreenManager
// Size: 0xb0 (Inherited: 0x30)
struct ULoadingScreenManager : UGameInstanceSubsystem {
	char pad_30[0x80]; // 0x30(0x80)

	struct FString GetDebugReasonForShowingOrHidingLoadingScreen(); // Function CommonLoadingScreen.LoadingScreenManager.GetDebugReasonForShowingOrHidingLoadingScreen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101a3d0
};

