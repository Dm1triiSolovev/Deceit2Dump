// Class AudioGameplayVolume.AudioGameplayVolumeComponentBase
// Size: 0xc0 (Inherited: 0xb8)
struct UAudioGameplayVolumeComponentBase : UAudioGameplayComponent {
	int32_t Priority; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)

	void SetPriority(int32_t InPriority); // Function AudioGameplayVolume.AudioGameplayVolumeComponentBase.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x19b3bf0
};

// Class AudioGameplayVolume.AttenuationVolumeComponent
// Size: 0xd0 (Inherited: 0xc0)
struct UAttenuationVolumeComponent : UAudioGameplayVolumeComponentBase {
	float ExteriorVolume; // 0xc0(0x04)
	float ExteriorTime; // 0xc4(0x04)
	float InteriorVolume; // 0xc8(0x04)
	float InteriorTime; // 0xcc(0x04)

	void SetInteriorVolume(float Volume, float InterpolateTime); // Function AudioGameplayVolume.AttenuationVolumeComponent.SetInteriorVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x19b3b20
	void SetExteriorVolume(float Volume, float InterpolateTime); // Function AudioGameplayVolume.AttenuationVolumeComponent.SetExteriorVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x19b3a50
};

// Class AudioGameplayVolume.AudioGameplayVolume
// Size: 0x2c0 (Inherited: 0x2b0)
struct AAudioGameplayVolume : AVolume {
	struct UAudioGameplayVolumeProxyComponent* AGVComponent; // 0x2b0(0x08)
	bool bEnabled; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)

	void SetEnabled(bool bEnable); // Function AudioGameplayVolume.AudioGameplayVolume.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x19b39c0
	void OnRep_bEnabled(); // Function AudioGameplayVolume.AudioGameplayVolume.OnRep_bEnabled // (Native|Protected) // @ game+0x19b39a0
	void OnListenerExit(); // Function AudioGameplayVolume.AudioGameplayVolume.OnListenerExit // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void OnListenerEnter(); // Function AudioGameplayVolume.AudioGameplayVolume.OnListenerEnter // (Event|Public|BlueprintEvent) // @ game+0x2552560
};

// Class AudioGameplayVolume.AudioGameplayVolumeProxyComponent
// Size: 0xe0 (Inherited: 0xb8)
struct UAudioGameplayVolumeProxyComponent : UAudioGameplayComponent {
	struct FMulticastInlineDelegate OnProxyEnter; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnProxyExit; // 0xc8(0x10)
	struct UAudioGameplayVolumeProxy* Proxy; // 0xd8(0x08)
};

// Class AudioGameplayVolume.AudioGameplayVolumeProxy
// Size: 0x48 (Inherited: 0x28)
struct UAudioGameplayVolumeProxy : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class AudioGameplayVolume.AGVPrimitiveComponentProxy
// Size: 0x50 (Inherited: 0x48)
struct UAGVPrimitiveComponentProxy : UAudioGameplayVolumeProxy {
	char pad_48[0x8]; // 0x48(0x08)
};

// Class AudioGameplayVolume.AGVConditionProxy
// Size: 0x50 (Inherited: 0x48)
struct UAGVConditionProxy : UAudioGameplayVolumeProxy {
	char pad_48[0x8]; // 0x48(0x08)
};

// Class AudioGameplayVolume.AudioGameplayVolumeSubsystem
// Size: 0x158 (Inherited: 0x30)
struct UAudioGameplayVolumeSubsystem : UAudioEngineSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct TMap<uint32_t, struct UAudioGameplayVolumeProxyComponent*> AGVComponents; // 0x38(0x50)
	char pad_88[0xd0]; // 0x88(0xd0)
};

// Class AudioGameplayVolume.FilterVolumeComponent
// Size: 0xd0 (Inherited: 0xc0)
struct UFilterVolumeComponent : UAudioGameplayVolumeComponentBase {
	float ExteriorLPF; // 0xc0(0x04)
	float ExteriorLPFTime; // 0xc4(0x04)
	float InteriorLPF; // 0xc8(0x04)
	float InteriorLPFTime; // 0xcc(0x04)

	void SetInteriorLPF(float Volume, float InterpolateTime); // Function AudioGameplayVolume.FilterVolumeComponent.SetInteriorLPF // (Final|Native|Public|BlueprintCallable) // @ game+0x19b3b20
	void SetExteriorLPF(float Volume, float InterpolateTime); // Function AudioGameplayVolume.FilterVolumeComponent.SetExteriorLPF // (Final|Native|Public|BlueprintCallable) // @ game+0x19b3a50
};

// Class AudioGameplayVolume.SubmixSendVolumeComponent
// Size: 0xd0 (Inherited: 0xc0)
struct USubmixSendVolumeComponent : UAudioGameplayVolumeComponentBase {
	struct TArray<struct FAudioVolumeSubmixSendSettings> SubmixSendSettings; // 0xc0(0x10)

	void SetSubmixSendSettings(struct TArray<struct FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings); // Function AudioGameplayVolume.SubmixSendVolumeComponent.SetSubmixSendSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x19b3c80
};

