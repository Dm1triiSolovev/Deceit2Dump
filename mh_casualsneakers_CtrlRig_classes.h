// ControlRigBlueprintGeneratedClass mh_casualsneakers_CtrlRig.mh_casualsneakers_CtrlRig_C
// Size: 0x498 (Inherited: 0x490)
struct Umh_casualsneakers_CtrlRig_C : UControlRig {
	double test_debug; // 0x490(0x08)
};

// RigVMMemoryStorageGeneratorClass mh_casualsneakers_CtrlRig.RigVMMemory_Literal
// Size: 0x158 (Inherited: 0x28)
struct URigVMMemory_Literal : URigVMMemoryStorage {
	struct FRigElementKey RigUnit_SetTransform_1_1_Item__Const; // 0x28(0x0c)
	enum class EBoneGetterSetterMode RigUnit_SetTransform_1_1_Space__Const; // 0x34(0x01)
	char RigUnit_SetTransform_1_1_bInitial__Const : 1; // 0x35(0x01)
	char pad_35_1 : 7; // 0x35(0x01)
	char pad_36[0xa]; // 0x36(0x0a)
	struct FTransform RigUnit_SetTransform_1_1_Transform__Const; // 0x40(0x60)
	struct FRotator MathQuaternionFromRotator_1_Rotator__Const; // 0xa0(0x18)
	struct FRigElementKey GetTransform_2_2_Item__Const; // 0xb8(0x0c)
	char GetTransform_2_2_bInitial__Const : 1; // 0xc4(0x01)
	char pad_C4_1 : 7; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	struct FVector MathQuaternionSwingTwist_2_1_TwistAxis__Const; // 0xc8(0x18)
	float RigUnit_VisualDebugQuatItemSpace_2_1_Thickness__Const; // 0xe0(0x04)
	float RigUnit_VisualDebugQuatItemSpace_2_1_Scale__Const; // 0xe4(0x04)
	struct FRigElementKey RigUnit_VisualDebugQuatItemSpace_2_1_Space__Const; // 0xe8(0x0c)
	float MathFloatRemap_1_1_SourceMaximum__Const; // 0xf4(0x04)
	float MathFloatRemap_1_1_TargetMaximum__Const; // 0xf8(0x04)
	float MathFloatRemap_1_1_2_SourceMinimum__Const; // 0xfc(0x04)
	float MathFloatRemap_1_1_2_TargetMinimum__Const; // 0x100(0x04)
	float RigUnit_SetTransform_1_1_Weight__Const; // 0x104(0x04)
	struct FRigElementKey RigUnit_SetTransform_1_Item__Const; // 0x108(0x0c)
	char pad_114[0x4]; // 0x114(0x04)
	struct FVector MathQuaternionSwingTwist_2_TwistAxis__Const; // 0x118(0x18)
	float MathFloatRemap_1_TargetMaximum__Const; // 0x130(0x04)
	struct FRigElementKey RigUnit_SetTransform_1_1_1_Item__Const; // 0x134(0x0c)
	struct FRigElementKey GetTransform_2_3_1_Item__Const; // 0x140(0x0c)
	struct FRigElementKey RigUnit_SetTransform_1_2_Item__Const; // 0x14c(0x0c)
};

// RigVMMemoryStorageGeneratorClass mh_casualsneakers_CtrlRig.RigVMMemory_Work
// Size: 0xc10 (Inherited: 0x28)
struct URigVMMemory_Work : URigVMMemoryStorage {
	char pad_28[0x8]; // 0x28(0x08)
	struct FControlRigExecuteContext ExecuteContext_; // 0x30(0xc0)
	struct FQuat MathQuaternionMul_Result; // 0xf0(0x20)
	struct FQuat MathQuaternionFromRotator_1_Result; // 0x110(0x20)
	float MathFloatAdd_Result; // 0x130(0x04)
	float MathFloatRemap_1_1_Result; // 0x134(0x04)
	struct FRotator MathQuaternionToRotator_2_1_Result; // 0x138(0x18)
	struct FQuat MathQuaternionSwingTwist_2_1_Swing; // 0x150(0x20)
	struct FTransform MathTransformMul_1_Result; // 0x170(0x60)
	struct FTransform MathTransformMakeRelative_1_1_Local; // 0x1d0(0x60)
	struct FTransform GetTransform_2_2_Transform; // 0x230(0x60)
	struct TArray<struct FCachedRigElement> GetTransform_2_2_CachedIndex; // 0x290(0x10)
	struct FTransform GetTransform_1_Transform; // 0x2a0(0x60)
	struct TArray<struct FCachedRigElement> GetTransform_1_CachedIndex; // 0x300(0x10)
	struct FTransform GetTransform_2_1_1_Transform; // 0x310(0x60)
	struct TArray<struct FCachedRigElement> GetTransform_2_1_1_CachedIndex; // 0x370(0x10)
	struct FQuat MathQuaternionSwingTwist_2_1_Input; // 0x380(0x20)
	struct FQuat MathQuaternionSwingTwist_2_1_Twist; // 0x3a0(0x20)
	float MathFloatRemap_1_1_Value; // 0x3c0(0x04)
	float MathFloatRemap_1_1_2_Result; // 0x3c4(0x04)
	float MathFloatRemap_1_1_2_Value; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct FRotator MathQuaternionFromRotator_1_Rotator__IO; // 0x3d0(0x18)
	char pad_3E8[0x8]; // 0x3e8(0x08)
	struct FQuat MathQuaternionInverse_Result; // 0x3f0(0x20)
	struct FTransform RigUnit_SetTransform_1_1_Transform__IO; // 0x410(0x60)
	struct TArray<struct FCachedRigElement> RigUnit_SetTransform_1_1_CachedIndex; // 0x470(0x10)
	struct FQuat MathQuaternionFromRotator_Result; // 0x480(0x20)
	float MathFloatRemap_1_Result; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct FRotator MathQuaternionToRotator_2_Result; // 0x4a8(0x18)
	struct FQuat MathQuaternionSwingTwist_2_Swing; // 0x4c0(0x20)
	struct FTransform MathTransformMul_Result; // 0x4e0(0x60)
	struct FTransform GetTransform_2_1_Transform; // 0x540(0x60)
	struct TArray<struct FCachedRigElement> GetTransform_2_1_CachedIndex; // 0x5a0(0x10)
	struct FQuat MathQuaternionSwingTwist_2_Input; // 0x5b0(0x20)
	struct FQuat MathQuaternionSwingTwist_2_Twist; // 0x5d0(0x20)
	float MathFloatRemap_1_Value; // 0x5f0(0x04)
	char pad_5F4[0x4]; // 0x5f4(0x04)
	struct FRotator MathQuaternionFromRotator_Rotator__IO; // 0x5f8(0x18)
	struct FTransform RigUnit_SetTransform_1_Transform__IO; // 0x610(0x60)
	struct TArray<struct FCachedRigElement> RigUnit_SetTransform_1_CachedIndex; // 0x670(0x10)
	struct FQuat MathQuaternionMul_1_Result; // 0x680(0x20)
	struct FQuat MathQuaternionFromRotator_1_1_Result; // 0x6a0(0x20)
	float MathFloatAdd_1_Result; // 0x6c0(0x04)
	float MathFloatRemap_1_1_1_Result; // 0x6c4(0x04)
	struct FRotator MathQuaternionToRotator_2_1_1_Result; // 0x6c8(0x18)
	struct FQuat MathQuaternionSwingTwist_2_1_1_Swing; // 0x6e0(0x20)
	struct FTransform MathTransformMul_2_1_Result; // 0x700(0x60)
	struct FTransform MathTransformMakeRelative_1_2_2_Local; // 0x760(0x60)
	struct FTransform GetTransform_2_3_1_Transform; // 0x7c0(0x60)
	struct TArray<struct FCachedRigElement> GetTransform_2_3_1_CachedIndex; // 0x820(0x10)
	struct FTransform GetTransform_3_1_Transform; // 0x830(0x60)
	struct TArray<struct FCachedRigElement> GetTransform_3_1_CachedIndex; // 0x890(0x10)
	struct FTransform GetTransform_2_1_2_1_Transform; // 0x8a0(0x60)
	struct TArray<struct FCachedRigElement> GetTransform_2_1_2_1_CachedIndex; // 0x900(0x10)
	struct FQuat MathQuaternionSwingTwist_2_1_1_Input; // 0x910(0x20)
	struct FQuat MathQuaternionSwingTwist_2_1_1_Twist; // 0x930(0x20)
	float MathFloatRemap_1_1_1_Value; // 0x950(0x04)
	float MathFloatRemap_1_1_2_1_Result; // 0x954(0x04)
	float MathFloatRemap_1_1_2_1_Value; // 0x958(0x04)
	char pad_95C[0x4]; // 0x95c(0x04)
	struct FRotator MathQuaternionFromRotator_1_1_Rotator__IO; // 0x960(0x18)
	char pad_978[0x8]; // 0x978(0x08)
	struct FQuat MathQuaternionInverse_1_Result; // 0x980(0x20)
	struct FTransform RigUnit_SetTransform_1_1_1_Transform__IO; // 0x9a0(0x60)
	struct TArray<struct FCachedRigElement> RigUnit_SetTransform_1_1_1_CachedIndex; // 0xa00(0x10)
	struct FQuat MathQuaternionFromRotator_2_Result; // 0xa10(0x20)
	float MathFloatRemap_1_2_Result; // 0xa30(0x04)
	char pad_A34[0x4]; // 0xa34(0x04)
	struct FRotator MathQuaternionToRotator_2_2_Result; // 0xa38(0x18)
	struct FQuat MathQuaternionSwingTwist_2_2_Swing; // 0xa50(0x20)
	struct FTransform MathTransformMul_2_Result; // 0xa70(0x60)
	struct FTransform GetTransform_2_1_2_Transform; // 0xad0(0x60)
	struct TArray<struct FCachedRigElement> GetTransform_2_1_2_CachedIndex; // 0xb30(0x10)
	struct FQuat MathQuaternionSwingTwist_2_2_Input; // 0xb40(0x20)
	struct FQuat MathQuaternionSwingTwist_2_2_Twist; // 0xb60(0x20)
	float MathFloatRemap_1_2_Value; // 0xb80(0x04)
	char pad_B84[0x4]; // 0xb84(0x04)
	struct FRotator MathQuaternionFromRotator_2_Rotator__IO; // 0xb88(0x18)
	struct FTransform RigUnit_SetTransform_1_2_Transform__IO; // 0xba0(0x60)
	struct TArray<struct FCachedRigElement> RigUnit_SetTransform_1_2_CachedIndex; // 0xc00(0x10)
};

