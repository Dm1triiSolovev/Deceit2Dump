// Enum PBIK.EPBIKRootBehavior
enum class EPBIKRootBehavior : uint8 {
	PrePull = 0,
	PinToInput = 1,
	Free = 2,
	EPBIKRootBehavior_MAX = 3
};

// Enum PBIK.EPBIKLimitType
enum class EPBIKLimitType : uint8 {
	Free = 0,
	Limited = 1,
	Locked = 2,
	EPBIKLimitType_MAX = 3
};

// ScriptStruct PBIK.PBIKSolverSettings
// Size: 0x10 (Inherited: 0x00)
struct FPBIKSolverSettings {
	int32_t Iterations; // 0x00(0x04)
	float MassMultiplier; // 0x04(0x04)
	float MinMassMultiplier; // 0x08(0x04)
	bool bAllowStretch; // 0x0c(0x01)
	enum class EPBIKRootBehavior RootBehavior; // 0x0d(0x01)
	bool bStartSolveFromInputPose; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
};

// ScriptStruct PBIK.PBIKSolver
// Size: 0x68 (Inherited: 0x00)
struct FPBIKSolver {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct PBIK.PBIKBoneSetting
// Size: 0x50 (Inherited: 0x00)
struct FPBIKBoneSetting {
	struct FName bone; // 0x00(0x08)
	float RotationStiffness; // 0x08(0x04)
	float PositionStiffness; // 0x0c(0x04)
	enum class EPBIKLimitType X; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float MinX; // 0x14(0x04)
	float MaxX; // 0x18(0x04)
	enum class EPBIKLimitType Y; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float MinY; // 0x20(0x04)
	float MaxY; // 0x24(0x04)
	enum class EPBIKLimitType Z; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float MinZ; // 0x2c(0x04)
	float MaxZ; // 0x30(0x04)
	bool bUsePreferredAngles; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FVector PreferredAngles; // 0x38(0x18)
};

// ScriptStruct PBIK.PBIKDebug
// Size: 0x08 (Inherited: 0x00)
struct FPBIKDebug {
	float DrawScale; // 0x00(0x04)
	bool bDrawDebug; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct PBIK.PBIKEffector
// Size: 0x90 (Inherited: 0x00)
struct FPBIKEffector {
	struct FName bone; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x60)
	float PositionAlpha; // 0x70(0x04)
	float RotationAlpha; // 0x74(0x04)
	float StrengthAlpha; // 0x78(0x04)
	float PullChainAlpha; // 0x7c(0x04)
	float PinRotation; // 0x80(0x04)
	char pad_84[0xc]; // 0x84(0x0c)
};

// ScriptStruct PBIK.RigUnit_PBIK
// Size: 0x1c0 (Inherited: 0xd0)
struct FRigUnit_PBIK : FRigUnit_HighlevelBaseMutable {
	struct FName Root; // 0xd0(0x08)
	struct TArray<struct FPBIKEffector> Effectors; // 0xd8(0x10)
	struct TArray<int32_t> EffectorSolverIndices; // 0xe8(0x10)
	struct TArray<struct FPBIKBoneSetting> BoneSettings; // 0xf8(0x10)
	struct TArray<struct FName> ExcludedBones; // 0x108(0x10)
	struct FPBIKSolverSettings Settings; // 0x118(0x10)
	struct FPBIKDebug Debug; // 0x128(0x08)
	struct TArray<int32_t> BoneSettingToSolverBoneIndex; // 0x130(0x10)
	struct TArray<int32_t> SolverBoneToElementIndex; // 0x140(0x10)
	struct FPBIKSolver Solver; // 0x150(0x68)
	bool bNeedsInit; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
};

