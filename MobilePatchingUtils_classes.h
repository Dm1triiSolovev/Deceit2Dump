// Class MobilePatchingUtils.MobileInstalledContent
// Size: 0x48 (Inherited: 0x28)
struct UMobileInstalledContent : UObject {
	char pad_28[0x20]; // 0x28(0x20)

	bool Mount(int32_t PakOrder, struct FString MountPoint); // Function MobilePatchingUtils.MobileInstalledContent.Mount // (Final|Native|Public|BlueprintCallable) // @ game+0x2162480
	float GetInstalledContentSize(); // Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2162310
	float GetDiskFreeSpace(); // Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2162110
};

// Class MobilePatchingUtils.MobilePendingContent
// Size: 0x88 (Inherited: 0x48)
struct UMobilePendingContent : UMobileInstalledContent {
	char pad_48[0x40]; // 0x48(0x40)

	void StartInstall(struct FDelegate OnSucceeded, struct FDelegate OnFailed); // Function MobilePatchingUtils.MobilePendingContent.StartInstall // (Final|Native|Public|BlueprintCallable) // @ game+0x2162760
	float GetTotalDownloadedSize(); // Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2162450
	float GetRequiredDiskSpace(); // Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2162340
	float GetInstallProgress(); // Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2162240
	struct FText GetDownloadStatusText(); // Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x21621a0
	float GetDownloadSpeed(); // Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2162170
	float GetDownloadSize(); // Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2162140
};

// Class MobilePatchingUtils.MobilePatchingLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMobilePatchingLibrary : UBlueprintFunctionLibrary {

	void RequestContent(struct FString RemoteManifestURL, struct FString CloudURL, struct FString InstallDirectory, struct FDelegate OnSucceeded, struct FDelegate OnFailed); // Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2162570
	bool HasActiveWiFiConnection(); // Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1fa8490
	struct TArray<struct FString> GetSupportedPlatformNames(); // Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2162370
	struct UMobileInstalledContent* GetInstalledContent(struct FString InstallDirectory); // Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2162270
	struct FString GetActiveDeviceProfileName(); // Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2162090
};

