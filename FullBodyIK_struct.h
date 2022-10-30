// Enum FullBodyIK.EFBIKBoneLimitType
enum class EFBIKBoneLimitType : uint8 {
	Free = 0,
	Limit = 1,
	Locked = 2,
	EFBIKBoneLimitType_MAX = 3
};

// Enum FullBodyIK.EPoleVectorOption
enum class EPoleVectorOption : uint8 {
	Direction = 0,
	Location = 1,
	EPoleVectorOption_MAX = 2
};

// ScriptStruct FullBodyIK.FBIKBoneLimit
// Size: 0x20 (Inherited: 0x00)
struct FFBIKBoneLimit {
	enum class EFBIKBoneLimitType LimitType_X; // 0x00(0x01)
	enum class EFBIKBoneLimitType LimitType_Y; // 0x01(0x01)
	enum class EFBIKBoneLimitType LimitType_Z; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FVector Limit; // 0x08(0x18)
};

// ScriptStruct FullBodyIK.FBIKConstraintOption
// Size: 0xa0 (Inherited: 0x00)
struct FFBIKConstraintOption {
	struct FRigElementKey Item; // 0x00(0x0c)
	bool bEnabled; // 0x0c(0x01)
	bool bUseStiffness; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct FVector LinearStiffness; // 0x10(0x18)
	struct FVector AngularStiffness; // 0x28(0x18)
	bool bUseAngularLimit; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FFBIKBoneLimit AngularLimit; // 0x48(0x20)
	bool bUsePoleVector; // 0x68(0x01)
	enum class EPoleVectorOption PoleVectorOption; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
	struct FVector PoleVector; // 0x70(0x18)
	struct FRotator OffsetRotation; // 0x88(0x18)
};

// ScriptStruct FullBodyIK.MotionProcessInput
// Size: 0x02 (Inherited: 0x00)
struct FMotionProcessInput {
	bool bForceEffectorRotationTarget; // 0x00(0x01)
	bool bOnlyApplyWhenReachedToTarget; // 0x01(0x01)
};

// ScriptStruct FullBodyIK.FBIKDebugOption
// Size: 0x80 (Inherited: 0x00)
struct FFBIKDebugOption {
	bool bDrawDebugHierarchy; // 0x00(0x01)
	bool bColorAngularMotionStrength; // 0x01(0x01)
	bool bColorLinearMotionStrength; // 0x02(0x01)
	bool bDrawDebugAxes; // 0x03(0x01)
	bool bDrawDebugEffector; // 0x04(0x01)
	bool bDrawDebugConstraints; // 0x05(0x01)
	char pad_6[0xa]; // 0x06(0x0a)
	struct FTransform DrawWorldOffset; // 0x10(0x60)
	float DrawSize; // 0x70(0x04)
	char pad_74[0xc]; // 0x74(0x0c)
};

// ScriptStruct FullBodyIK.SolverInput
// Size: 0x24 (Inherited: 0x00)
struct FSolverInput {
	float LinearMotionStrength; // 0x00(0x04)
	float MinLinearMotionStrength; // 0x04(0x04)
	float AngularMotionStrength; // 0x08(0x04)
	float MinAngularMotionStrength; // 0x0c(0x04)
	float DefaultTargetClamp; // 0x10(0x04)
	float Precision; // 0x14(0x04)
	float Damping; // 0x18(0x04)
	int32_t MaxIterations; // 0x1c(0x04)
	bool bUseJacobianTranspose; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct FullBodyIK.FBIKEndEffector
// Size: 0x60 (Inherited: 0x00)
struct FFBIKEndEffector {
	struct FRigElementKey Item; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector position; // 0x10(0x18)
	float PositionAlpha; // 0x28(0x04)
	int32_t PositionDepth; // 0x2c(0x04)
	struct FQuat Rotation; // 0x30(0x20)
	float RotationAlpha; // 0x50(0x04)
	int32_t RotationDepth; // 0x54(0x04)
	float Pull; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct FullBodyIK.RigUnit_FullbodyIK_WorkData
// Size: 0x198 (Inherited: 0x00)
struct FRigUnit_FullbodyIK_WorkData {
	char pad_0[0x198]; // 0x00(0x198)
};

// ScriptStruct FullBodyIK.RigUnit_FullbodyIK
// Size: 0x350 (Inherited: 0xd0)
struct FRigUnit_FullbodyIK : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Root; // 0xd0(0x0c)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TArray<struct FFBIKEndEffector> Effectors; // 0xe0(0x10)
	struct TArray<struct FFBIKConstraintOption> Constraints; // 0xf0(0x10)
	struct FSolverInput SolverProperty; // 0x100(0x24)
	struct FMotionProcessInput MotionProperty; // 0x124(0x02)
	bool bPropagateToChildren; // 0x126(0x01)
	char pad_127[0x9]; // 0x127(0x09)
	struct FFBIKDebugOption DebugOption; // 0x130(0x80)
	struct FRigUnit_FullbodyIK_WorkData WorkData; // 0x1b0(0x198)
	char pad_348[0x8]; // 0x348(0x08)
};

