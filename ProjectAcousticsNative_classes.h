// Class ProjectAcousticsNative.AcousticsSourceDataOverrideSettings
// Size: 0x120 (Inherited: 0x28)
struct UAcousticsSourceDataOverrideSettings : UObject {
	enum class EReverbBusesPreset ReverbBusesPreset; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FSoftObjectPath ShortIndoorReverbSubmix; // 0x30(0x18)
	struct FSoftObjectPath MediumIndoorReverbSubmix; // 0x48(0x18)
	struct FSoftObjectPath LongIndoorReverbSubmix; // 0x60(0x18)
	struct FSoftObjectPath ShortOutdoorReverbSubmix; // 0x78(0x18)
	struct FSoftObjectPath MediumOutdoorReverbSubmix; // 0x90(0x18)
	struct FSoftObjectPath LongOutdoorReverbSubmix; // 0xa8(0x18)
	float ShortReverbLength; // 0xc0(0x04)
	float MediumReverbLength; // 0xc4(0x04)
	float LongReverbLength; // 0xc8(0x04)
	char pad_CC[0x54]; // 0xcc(0x54)
};

// Class ProjectAcousticsNative.AcousticsSourceDataOverrideSourceSettings
// Size: 0x48 (Inherited: 0x28)
struct UAcousticsSourceDataOverrideSourceSettings : USourceDataOverridePluginSourceSettingsBase {
	bool ShowAcousticParameters; // 0x28(0x01)
	bool ApplyAcousticsVolumes; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FAcousticsDesignParams DesignParams; // 0x2c(0x18)
	bool EnablePortaling; // 0x44(0x01)
	bool EnableOcclusion; // 0x45(0x01)
	bool EnableReverb; // 0x46(0x01)
	char pad_47[0x1]; // 0x47(0x01)
};

