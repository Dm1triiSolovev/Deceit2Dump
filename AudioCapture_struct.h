// ScriptStruct AudioCapture.AudioInputDeviceInfo
// Size: 0x30 (Inherited: 0x00)
struct FAudioInputDeviceInfo {
	struct FString DeviceName; // 0x00(0x10)
	struct FString DeviceID; // 0x10(0x10)
	int32_t InputChannels; // 0x20(0x04)
	int32_t PreferredSampleRate; // 0x24(0x04)
	char bSupportsHardwareAEC : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct AudioCapture.AudioCaptureDeviceInfo
// Size: 0x10 (Inherited: 0x00)
struct FAudioCaptureDeviceInfo {
	struct FName DeviceName; // 0x00(0x08)
	int32_t NumInputChannels; // 0x08(0x04)
	int32_t SampleRate; // 0x0c(0x04)
};

