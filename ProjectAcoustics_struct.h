// ScriptStruct ProjectAcoustics.AcousticsDesignParams
// Size: 0x18 (Inherited: 0x00)
struct FAcousticsDesignParams {
	float OcclusionMultiplier; // 0x00(0x04)
	float WetnessAdjustment; // 0x04(0x04)
	float DecayTimeMultiplier; // 0x08(0x04)
	float OutdoornessAdjustment; // 0x0c(0x04)
	float DistanceWarp; // 0x10(0x04)
	bool ApplyDynamicOpenings; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

