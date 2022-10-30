// Class ModelingOperators.RecomputeUVsOpFactory
// Size: 0xf0 (Inherited: 0x28)
struct URecomputeUVsOpFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct URecomputeUVsToolProperties* Settings; // 0x30(0x08)
	char pad_38[0xb8]; // 0x38(0xb8)
};

// Class ModelingOperators.RecomputeUVsToolProperties
// Size: 0xd8 (Inherited: 0xa8)
struct URecomputeUVsToolProperties : UInteractiveToolPropertySet {
	bool bEnablePolygroupSupport; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	enum class ERecomputeUVsPropertiesIslandMode IslandGeneration; // 0xac(0x04)
	enum class ERecomputeUVsPropertiesUnwrapType UnwrapType; // 0xb0(0x04)
	enum class ERecomputeUVsToolOrientationMode AutoRotation; // 0xb4(0x04)
	int32_t SmoothingSteps; // 0xb8(0x04)
	float SmoothingAlpha; // 0xbc(0x04)
	float MergingDistortionThreshold; // 0xc0(0x04)
	float MergingAngleThreshold; // 0xc4(0x04)
	enum class ERecomputeUVsPropertiesLayoutType LayoutType; // 0xc8(0x04)
	int32_t TextureResolution; // 0xcc(0x04)
	float NormalizeScale; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class ModelingOperators.UVLayoutOperatorFactory
// Size: 0xf0 (Inherited: 0x28)
struct UUVLayoutOperatorFactory : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UUVLayoutProperties* Settings; // 0x30(0x08)
	char pad_38[0xb8]; // 0x38(0xb8)
};

// Class ModelingOperators.UVLayoutProperties
// Size: 0xd0 (Inherited: 0xa8)
struct UUVLayoutProperties : UInteractiveToolPropertySet {
	enum class EUVLayoutType LayoutType; // 0xa8(0x04)
	int32_t TextureResolution; // 0xac(0x04)
	float Scale; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FVector2D Translation; // 0xb8(0x10)
	bool bAllowFlips; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

