// Class AudioExtensions.AudioEndpointSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct UAudioEndpointSettingsBase : UObject {
};

// Class AudioExtensions.SoundfieldEndpointSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct USoundfieldEndpointSettingsBase : UObject {
};

// Class AudioExtensions.SoundfieldEncodingSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct USoundfieldEncodingSettingsBase : UObject {
};

// Class AudioExtensions.SoundModulatorBase
// Size: 0x30 (Inherited: 0x28)
struct USoundModulatorBase : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class AudioExtensions.SpatializationPluginSourceSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct USpatializationPluginSourceSettingsBase : UObject {
};

// Class AudioExtensions.SourceDataOverridePluginSourceSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct USourceDataOverridePluginSourceSettingsBase : UObject {
};

// Class AudioExtensions.OcclusionPluginSourceSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct UOcclusionPluginSourceSettingsBase : UObject {
};

// Class AudioExtensions.ReverbPluginSourceSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct UReverbPluginSourceSettingsBase : UObject {
};

// Class AudioExtensions.AudioParameterControllerInterface
// Size: 0x28 (Inherited: 0x28)
struct UAudioParameterControllerInterface : UInterface {

	void SetTriggerParameter(struct FName InName); // Function AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter // (Native|Public|BlueprintCallable) // @ game+0x3db9410
	void SetStringParameter(struct FName InName, struct FString InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetStringParameter // (Native|Public|BlueprintCallable) // @ game+0x3db9330
	void SetStringArrayParameter(struct FName InName, struct TArray<struct FString>& InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3db9220
	void SetParameters_Blueprint(struct TArray<struct FAudioParameter>& InParameters); // Function AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3db9090
	void SetObjectParameter(struct FName InName, struct UObject* InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetObjectParameter // (Native|Public|BlueprintCallable) // @ game+0x3db8fc0
	void SetObjectArrayParameter(struct FName InName, struct TArray<struct UObject*>& InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3db8ed0
	void SetIntParameter(struct FName InName, int32_t inInt); // Function AudioExtensions.AudioParameterControllerInterface.SetIntParameter // (Native|Public|BlueprintCallable) // @ game+0x3db8e00
	void SetIntArrayParameter(struct FName InName, struct TArray<int32_t>& InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3db8d10
	void SetFloatParameter(struct FName InName, float InFloat); // Function AudioExtensions.AudioParameterControllerInterface.SetFloatParameter // (Native|Public|BlueprintCallable) // @ game+0x3db8c40
	void SetFloatArrayParameter(struct FName InName, struct TArray<float>& InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3db8b50
	void SetBoolParameter(struct FName InName, bool InBool); // Function AudioExtensions.AudioParameterControllerInterface.SetBoolParameter // (Native|Public|BlueprintCallable) // @ game+0x3db8a80
	void SetBoolArrayParameter(struct FName InName, struct TArray<bool>& InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3db8990
	void ResetParameters(); // Function AudioExtensions.AudioParameterControllerInterface.ResetParameters // (Native|Public|BlueprintCallable) // @ game+0x19b4720
};

// Class AudioExtensions.AudioCodecEncoderSettings
// Size: 0x30 (Inherited: 0x28)
struct UAudioCodecEncoderSettings : UObject {
	int32_t Version; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AudioExtensions.DummyEndpointSettings
// Size: 0x28 (Inherited: 0x28)
struct UDummyEndpointSettings : UAudioEndpointSettingsBase {
};

// Class AudioExtensions.SoundfieldEffectSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct USoundfieldEffectSettingsBase : UObject {
};

// Class AudioExtensions.SoundfieldEffectBase
// Size: 0x30 (Inherited: 0x28)
struct USoundfieldEffectBase : UObject {
	struct USoundfieldEffectSettingsBase* Settings; // 0x28(0x08)
};

// Class AudioExtensions.AudioPcmEncoderSettings
// Size: 0x38 (Inherited: 0x30)
struct UAudioPcmEncoderSettings : UAudioCodecEncoderSettings {
	enum class EPcmBitDepthConversion BitDepthConversion; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

