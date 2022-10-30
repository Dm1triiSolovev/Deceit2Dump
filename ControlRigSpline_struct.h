// Enum ControlRigSpline.ESplineType
enum class ESplineType : uint8 {
	BSpline = 0,
	Hermite = 1,
	Max = 2
};

// ScriptStruct ControlRigSpline.ControlRigSplineImpl
// Size: 0x60 (Inherited: 0x00)
struct FControlRigSplineImpl {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct ControlRigSpline.ControlRigSpline
// Size: 0x18 (Inherited: 0x00)
struct FControlRigSpline {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_ControlRigSplineBase : FRigUnit {
};

// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineFromPoints
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_ControlRigSplineFromPoints : FRigUnit_ControlRigSplineBase {
	struct TArray<struct FVector> Points; // 0x08(0x10)
	enum class ESplineType SplineMode; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t SamplesPerSegment; // 0x1c(0x04)
	float Compression; // 0x20(0x04)
	float Stretch; // 0x24(0x04)
	struct FControlRigSpline Spline; // 0x28(0x18)
};

// ScriptStruct ControlRigSpline.RigUnit_SetSplinePoints
// Size: 0x100 (Inherited: 0xd0)
struct FRigUnit_SetSplinePoints : FRigUnitMutable {
	struct TArray<struct FVector> Points; // 0xd0(0x10)
	struct FControlRigSpline Spline; // 0xe0(0x18)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// ScriptStruct ControlRigSpline.RigUnit_PositionFromControlRigSpline
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_PositionFromControlRigSpline : FRigUnit_ControlRigSplineBase {
	struct FControlRigSpline Spline; // 0x08(0x18)
	float U; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FVector position; // 0x28(0x18)
};

// ScriptStruct ControlRigSpline.RigUnit_TransformFromControlRigSpline
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_TransformFromControlRigSpline : FRigUnit_ControlRigSplineBase {
	struct FControlRigSpline Spline; // 0x08(0x18)
	struct FVector UpVector; // 0x20(0x18)
	float Roll; // 0x38(0x04)
	float U; // 0x3c(0x04)
	struct FTransform Transform; // 0x40(0x60)
};

// ScriptStruct ControlRigSpline.RigUnit_TangentFromControlRigSpline
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_TangentFromControlRigSpline : FRigUnit_ControlRigSplineBase {
	struct FControlRigSpline Spline; // 0x08(0x18)
	float U; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FVector Tangent; // 0x28(0x18)
};

// ScriptStruct ControlRigSpline.RigUnit_DrawControlRigSpline
// Size: 0x100 (Inherited: 0xd0)
struct FRigUnit_DrawControlRigSpline : FRigUnitMutable {
	struct FControlRigSpline Spline; // 0xd0(0x18)
	struct FLinearColor Color; // 0xe8(0x10)
	float Thickness; // 0xf8(0x04)
	int32_t Detail; // 0xfc(0x04)
};

// ScriptStruct ControlRigSpline.RigUnit_GetLengthControlRigSpline
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_GetLengthControlRigSpline : FRigUnit {
	struct FControlRigSpline Spline; // 0x08(0x18)
	float Length; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurve
// Size: 0x2a0 (Inherited: 0xd0)
struct FRigUnit_FitChainToSplineCurve : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0xd0(0x10)
	struct FControlRigSpline Spline; // 0xe0(0x18)
	enum class EControlRigCurveAlignment Alignment; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float Minimum; // 0xfc(0x04)
	float Maximum; // 0x100(0x04)
	int32_t SamplingPrecision; // 0x104(0x04)
	struct FVector PrimaryAxis; // 0x108(0x18)
	struct FVector SecondaryAxis; // 0x120(0x18)
	struct FVector PoleVectorPosition; // 0x138(0x18)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0x150(0x10)
	enum class EControlRigAnimEasingType RotationEaseType; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	float Weight; // 0x164(0x04)
	bool bPropagateToChildren; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x170(0x90)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x200(0x98)
	char pad_298[0x8]; // 0x298(0x08)
};

// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
// Size: 0x2a0 (Inherited: 0xd0)
struct FRigUnit_FitChainToSplineCurveItemArray : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigElementKey> Items; // 0xd0(0x10)
	struct FControlRigSpline Spline; // 0xe0(0x18)
	enum class EControlRigCurveAlignment Alignment; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float Minimum; // 0xfc(0x04)
	float Maximum; // 0x100(0x04)
	int32_t SamplingPrecision; // 0x104(0x04)
	struct FVector PrimaryAxis; // 0x108(0x18)
	struct FVector SecondaryAxis; // 0x120(0x18)
	struct FVector PoleVectorPosition; // 0x138(0x18)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0x150(0x10)
	enum class EControlRigAnimEasingType RotationEaseType; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	float Weight; // 0x164(0x04)
	bool bPropagateToChildren; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x170(0x90)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x200(0x98)
	char pad_298[0x8]; // 0x298(0x08)
};

// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChain
// Size: 0x100 (Inherited: 0xd0)
struct FRigUnit_FitSplineCurveToChain : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0xd0(0x10)
	struct FControlRigSpline Spline; // 0xe0(0x18)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
// Size: 0x100 (Inherited: 0xd0)
struct FRigUnit_FitSplineCurveToChainItemArray : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigElementKey> Items; // 0xd0(0x10)
	struct FControlRigSpline Spline; // 0xe0(0x18)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// ScriptStruct ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_ClosestParameterFromControlRigSpline : FRigUnit_ControlRigSplineBase {
	struct FControlRigSpline Spline; // 0x08(0x18)
	struct FVector position; // 0x20(0x18)
	float U; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRigSpline.RigUnit_ParameterAtPercentage
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_ParameterAtPercentage : FRigUnit_ControlRigSplineBase {
	struct FControlRigSpline Spline; // 0x08(0x18)
	float Percentage; // 0x20(0x04)
	float U; // 0x24(0x04)
};

