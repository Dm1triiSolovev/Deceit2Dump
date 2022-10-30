// Class AudioCapture.AudioCapture
// Size: 0xb0 (Inherited: 0xa8)
struct UAudioCapture : UAudioGenerator {
	char pad_A8[0x8]; // 0xa8(0x08)

	void StopCapturingAudio(); // Function AudioCapture.AudioCapture.StopCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x1faab30
	void StartCapturingAudio(); // Function AudioCapture.AudioCapture.StartCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x1faab10
	bool IsCapturingAudio(); // Function AudioCapture.AudioCapture.IsCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x1faaae0
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo& OutInfo); // Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1faa950
};

// Class AudioCapture.AudioCaptureFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAudioCaptureFunctionLibrary : UBlueprintFunctionLibrary {

	struct UAudioCapture* CreateAudioCapture(); // Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1faa920
};

// Class AudioCapture.AudioCaptureBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAudioCaptureBlueprintLibrary : UBlueprintFunctionLibrary {

	void GetAvailableAudioInputDevices(struct UObject* WorldContextObject, struct FDelegate& OnObtainDevicesEvent); // Function AudioCapture.AudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1faaa00
	struct FString Conv_AudioInputDeviceInfoToString(struct FAudioInputDeviceInfo& Info); // Function AudioCapture.AudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1faa800
};

// Class AudioCapture.AudioCaptureComponent
// Size: 0x860 (Inherited: 0x7a0)
struct UAudioCaptureComponent : USynthComponent {
	int32_t JitterLatencyFrames; // 0x7a0(0x04)
	char pad_7A4[0xbc]; // 0x7a4(0xbc)
};

