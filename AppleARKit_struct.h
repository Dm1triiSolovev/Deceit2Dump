// Enum AppleARKit.EARFaceTrackingFileWriterType
enum class EARFaceTrackingFileWriterType : uint8 {
	None = 0,
	CSV = 1,
	JSON = 2,
	EARFaceTrackingFileWriterType_MAX = 3
};

// Enum AppleARKit.ELivelinkTrackingType
enum class ELivelinkTrackingType : uint8 {
	FaceTracking = 0,
	PoseTracking = 1,
	ELivelinkTrackingType_MAX = 2
};

// Enum AppleARKit.EARKitTextureType
enum class EARKitTextureType : uint8 {
	TextureY = 0,
	TextureCbCr = 1,
	EARKitTextureType_MAX = 2
};

// ScriptStruct AppleARKit.AppleARKitCamera
// Size: 0xe0 (Inherited: 0x00)
struct FAppleARKitCamera {
	enum class EARTrackingQuality TrackingQuality; // 0x00(0x01)
	enum class EARTrackingQualityReason TrackingQualityReason; // 0x01(0x01)
	char pad_2[0xe]; // 0x02(0x0e)
	struct FTransform Transform; // 0x10(0x60)
	struct FQuat Orientation; // 0x70(0x20)
	struct FVector Translation; // 0x90(0x18)
	struct FVector2D ImageResolution; // 0xa8(0x10)
	struct FVector2D FocalLength; // 0xb8(0x10)
	struct FVector2D PrincipalPoint; // 0xc8(0x10)
	char pad_D8[0x8]; // 0xd8(0x08)
};

// ScriptStruct AppleARKit.AppleARKitFrame
// Size: 0x160 (Inherited: 0x00)
struct FAppleARKitFrame {
	char pad_0[0x160]; // 0x00(0x160)
};

// ScriptStruct AppleARKit.AppleARKitLightEstimate
// Size: 0x0c (Inherited: 0x00)
struct FAppleARKitLightEstimate {
	bool bIsValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AmbientIntensity; // 0x04(0x04)
	float AmbientColorTemperatureKelvin; // 0x08(0x04)
};

