// ScriptStruct SoundUtilities.SoundVariation
// Size: 0x30 (Inherited: 0x00)
struct FSoundVariation {
	struct USoundWave* SoundWave; // 0x00(0x08)
	float ProbabilityWeight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector2D VolumeRange; // 0x10(0x10)
	struct FVector2D PitchRange; // 0x20(0x10)
};

