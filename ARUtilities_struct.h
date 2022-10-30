// Enum ARUtilities.EARLiveLinkSourceType
enum class EARLiveLinkSourceType : uint8 {
	None = 0,
	ARKitPoseTracking = 1,
	EARLiveLinkSourceType_MAX = 2
};

// ScriptStruct ARUtilities.ARKitPoseTrackingConfig
// Size: 0x30 (Inherited: 0x00)
struct FARKitPoseTrackingConfig {
	struct FVector HumanForward; // 0x00(0x18)
	struct FVector MeshForward; // 0x18(0x18)
};

