// Class FacialAnimation.AudioCurveSourceComponent
// Size: 0xb60 (Inherited: 0xb20)
struct UAudioCurveSourceComponent : UAudioComponent {
	char pad_B20[0x8]; // 0xb20(0x08)
	struct FName CurveSourceBindingName; // 0xb28(0x08)
	float CurveSyncOffset; // 0xb30(0x04)
	char pad_B34[0x2c]; // 0xb34(0x2c)
};

