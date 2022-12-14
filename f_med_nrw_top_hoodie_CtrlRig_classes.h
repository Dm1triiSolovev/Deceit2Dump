// ControlRigBlueprintGeneratedClass f_med_nrw_top_hoodie_CtrlRig.f_med_nrw_top_hoodie_CtrlRig_C
// Size: 0x4c0 (Inherited: 0x490)
struct Uf_med_nrw_top_hoodie_CtrlRig_C : UControlRig {
	struct FRotator neckSwingExtract; // 0x490(0x18)
	struct FRotator neckTwistExtract; // 0x4a8(0x18)
};

// RigVMMemoryStorageGeneratorClass f_med_nrw_top_hoodie_CtrlRig.RigVMMemory_Literal
// Size: 0x16c (Inherited: 0x28)
struct URigVMMemory_Literal : URigVMMemoryStorage {
	struct FRigElementKey GetTransform_Item__Const; // 0x28(0x0c)
	enum class EBoneGetterSetterMode GetTransform_Space__Const; // 0x34(0x01)
	char GetTransform_bInitial__Const : 1; // 0x35(0x01)
	char pad_35_1 : 7; // 0x35(0x01)
	char GetTransform_1_bInitial__Const : 1; // 0x36(0x01)
	char pad_36_1 : 7; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
	struct FVector MathQuaternionSwingTwist_TwistAxis__Const; // 0x38(0x18)
	struct FRigElementKey RigUnit_SetRelativeTransformForItem_Child__Const; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FTransform RigUnit_SetRelativeTransformForItem_RelativeTransform__Const; // 0x60(0x60)
	struct FVector MathVectorAdd_2_2_A__Const; // 0xc0(0x18)
	float MathFloatRemap_4_SourceMinimum__Const; // 0xd8(0x04)
	float MathFloatRemap_4_SourceMaximum__Const; // 0xdc(0x04)
	float MathFloatRemap_4_TargetMaximum__Const; // 0xe0(0x04)
	float MathFloatRemap_2_SourceMaximum__Const; // 0xe4(0x04)
	float MathFloatRemap_2_TargetMaximum__Const; // 0xe8(0x04)
	struct FRigElementKey RigUnit_SetRelativeTransformForItem_1_Child__Const; // 0xec(0x0c)
	float MathFloatRemap_SourceMinimum__Const; // 0xf8(0x04)
	float MathFloatRemap_TargetMinimum__Const; // 0xfc(0x04)
	struct FRigElementKey RigUnit_SetRelativeTransformForItem_2_Child__Const; // 0x100(0x0c)
	float MathFloatRemap_1_TargetMinimum__Const; // 0x10c(0x04)
	struct FRigElementKey RigUnit_SetRelativeTransformForItem_3_Child__Const; // 0x110(0x0c)
	struct FRigElementKey GetTransform_2_Item__Const; // 0x11c(0x0c)
	float MathFloatRemap_1_1_TargetMinimum__Const; // 0x128(0x04)
	float SpringInterpVectorV2_Strength__Const; // 0x12c(0x04)
	float SpringInterpVectorV2_CriticalDamping__Const; // 0x130(0x04)
	struct FRigElementKey RigUnit_SetRelativeTransformForItem_3_1_Child__Const; // 0x134(0x0c)
	struct FRigElementKey GetTransform_2_2_Item__Const; // 0x140(0x0c)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FVector MathQuaternionSwingTwist_1_1_TwistAxis__Const; // 0x150(0x18)
	float MathFloatRemap_1_1_1_1_TargetMinimum__Const; // 0x168(0x04)
};

// RigVMMemoryStorageGeneratorClass f_med_nrw_top_hoodie_CtrlRig.RigVMMemory_Work
// Size: 0xb20 (Inherited: 0x28)
struct URigVMMemory_Work : URigVMMemoryStorage {
	char pad_28[0x8]; // 0x28(0x08)
	struct FControlRigExecuteContext ExecuteContext_; // 0x30(0xc0)
	struct FRotator MathQuaternionToRotator_Result; // 0xf0(0x18)
	char pad_108[0x8]; // 0x108(0x08)
	struct FQuat MathQuaternionSwingTwist_Swing; // 0x110(0x20)
	struct FTransform MathTransformMakeRelative_Local; // 0x130(0x60)
	struct FTransform GetTransform_Transform; // 0x190(0x60)
	struct TArray<struct FCachedRigElement> GetTransform_CachedIndex; // 0x1f0(0x10)
	struct FTransform GetTransform_1_Transform; // 0x200(0x60)
	struct TArray<struct FCachedRigElement> GetTransform_1_CachedIndex; // 0x260(0x10)
	struct FQuat MathQuaternionSwingTwist_Input; // 0x270(0x20)
	struct FQuat MathQuaternionSwingTwist_Twist; // 0x290(0x20)
	struct FRotator MathQuaternionToRotator_2_Result; // 0x2b0(0x18)
	struct FVector MathVectorAdd_2_2_Result; // 0x2c8(0x18)
	float MathFloatMul_Result; // 0x2e0(0x04)
	float MathFloatRemap_4_Result; // 0x2e4(0x04)
	float MathFloatRemap_4_Value; // 0x2e8(0x04)
	float MathFloatRemap_2_Result; // 0x2ec(0x04)
	float MathFloatRemap_2_Value; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct FVector MathVectorAdd_2_2_A__IO; // 0x2f8(0x18)
	struct FVector MathVectorAdd_2_2_B__IO; // 0x310(0x18)
	char pad_328[0x8]; // 0x328(0x08)
	struct FTransform RigUnit_SetRelativeTransformForItem_RelativeTransform__IO; // 0x330(0x60)
	struct TArray<struct FCachedRigElement> RigUnit_SetRelativeTransformForItem_CachedChild; // 0x390(0x10)
	struct TArray<struct FCachedRigElement> RigUnit_SetRelativeTransformForItem_CachedParent; // 0x3a0(0x10)
	struct FVector MathVectorAdd_2_Result; // 0x3b0(0x18)
	float MathFloatRemap_Result; // 0x3c8(0x04)
	float MathFloatRemap_Value; // 0x3cc(0x04)
	struct FVector MathVectorAdd_2_A__IO; // 0x3d0(0x18)
	float MathFloatMul_1_Result; // 0x3e8(0x04)
	float MathFloatRemap_4_1_Result; // 0x3ec(0x04)
	float MathFloatRemap_4_1_Value; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct FVector MathVectorAdd_2_B__IO; // 0x3f8(0x18)
	struct FTransform RigUnit_SetRelativeTransformForItem_1_RelativeTransform__IO; // 0x410(0x60)
	struct TArray<struct FCachedRigElement> RigUnit_SetRelativeTransformForItem_1_CachedChild; // 0x470(0x10)
	struct TArray<struct FCachedRigElement> RigUnit_SetRelativeTransformForItem_1_CachedParent; // 0x480(0x10)
	struct FVector MathVectorAdd_2_1_Result; // 0x490(0x18)
	float MathFloatRemap_1_Result; // 0x4a8(0x04)
	float MathFloatRemap_1_Value; // 0x4ac(0x04)
	struct FVector MathVectorAdd_2_1_A__IO; // 0x4b0(0x18)
	char pad_4C8[0x8]; // 0x4c8(0x08)
	struct FTransform RigUnit_SetRelativeTransformForItem_2_RelativeTransform__IO; // 0x4d0(0x60)
	struct TArray<struct FCachedRigElement> RigUnit_SetRelativeTransformForItem_2_CachedChild; // 0x530(0x10)
	struct TArray<struct FCachedRigElement> RigUnit_SetRelativeTransformForItem_2_CachedParent; // 0x540(0x10)
	struct FVector SpringInterpVectorV2_Result; // 0x550(0x18)
	struct FVector MathVectorAdd_2_1_1_Result; // 0x568(0x18)
	float MathFloatRemap_2_1_Result; // 0x580(0x04)
	char pad_584[0x4]; // 0x584(0x04)
	struct FRotator MathQuaternionToRotator_1_Result; // 0x588(0x18)
	struct FQuat MathQuaternionSwingTwist_1_Swing; // 0x5a0(0x20)
	struct FTransform MathTransformMakeRelative_1_Local; // 0x5c0(0x60)
	struct FTransform GetTransform_2_Transform; // 0x620(0x60)
	struct TArray<struct FCachedRigElement> GetTransform_2_CachedIndex; // 0x680(0x10)
	struct FTransform GetTransform_2_1_Transform; // 0x690(0x60)
	struct TArray<struct FCachedRigElement> GetTransform_2_1_CachedIndex; // 0x6f0(0x10)
	struct FQuat MathQuaternionSwingTwist_1_Input; // 0x700(0x20)
	struct FQuat MathQuaternionSwingTwist_1_Twist; // 0x720(0x20)
	float MathFloatRemap_2_1_Value; // 0x740(0x04)
	char pad_744[0x4]; // 0x744(0x04)
	struct FVector MathVectorAdd_2_1_1_A__IO; // 0x748(0x18)
	float MathFloatRemap_3_Result; // 0x760(0x04)
	float MathFloatRemap_3_Value; // 0x764(0x04)
	float MathFloatRemap_1_1_Result; // 0x768(0x04)
	float MathFloatRemap_1_1_Value; // 0x76c(0x04)
	struct FVector MathVectorAdd_2_1_1_B__IO; // 0x770(0x18)
	struct FVector SpringInterpVectorV2_Velocity; // 0x788(0x18)
	struct TArray<struct FVector> SpringInterpVectorV2_SimulatedResult; // 0x7a0(0x10)
	struct TArray<struct FVectorSpringState> SpringInterpVectorV2_SpringState; // 0x7b0(0x10)
	struct FTransform RigUnit_SetRelativeTransformForItem_3_RelativeTransform__IO; // 0x7c0(0x60)
	struct TArray<struct FCachedRigElement> RigUnit_SetRelativeTransformForItem_3_CachedChild; // 0x820(0x10)
	struct TArray<struct FCachedRigElement> RigUnit_SetRelativeTransformForItem_3_CachedParent; // 0x830(0x10)
	struct FVector SpringInterpVectorV2_1_Result; // 0x840(0x18)
	struct FVector MathVectorAdd_2_1_1_1_Result; // 0x858(0x18)
	float MathFloatRemap_2_1_1_Result; // 0x870(0x04)
	char pad_874[0x4]; // 0x874(0x04)
	struct FRotator MathQuaternionToRotator_1_1_Result; // 0x878(0x18)
	struct FQuat MathQuaternionSwingTwist_1_1_Swing; // 0x890(0x20)
	struct FTransform MathTransformMakeRelative_1_1_Local; // 0x8b0(0x60)
	struct FTransform GetTransform_2_2_Transform; // 0x910(0x60)
	struct TArray<struct FCachedRigElement> GetTransform_2_2_CachedIndex; // 0x970(0x10)
	struct FTransform GetTransform_2_1_1_Transform; // 0x980(0x60)
	struct TArray<struct FCachedRigElement> GetTransform_2_1_1_CachedIndex; // 0x9e0(0x10)
	struct FQuat MathQuaternionSwingTwist_1_1_Input; // 0x9f0(0x20)
	struct FQuat MathQuaternionSwingTwist_1_1_Twist; // 0xa10(0x20)
	float MathFloatRemap_2_1_1_Value; // 0xa30(0x04)
	float MathFloatRemap_1_1_1_Result; // 0xa34(0x04)
	float MathFloatRemap_1_1_1_Value; // 0xa38(0x04)
	float MathFloatRemap_1_1_1_1_Result; // 0xa3c(0x04)
	float MathFloatRemap_1_1_1_1_Value; // 0xa40(0x04)
	char pad_A44[0x4]; // 0xa44(0x04)
	struct FVector MathVectorAdd_2_1_1_1_B__IO; // 0xa48(0x18)
	struct FVector SpringInterpVectorV2_1_Velocity; // 0xa60(0x18)
	struct TArray<struct FVector> SpringInterpVectorV2_1_SimulatedResult; // 0xa78(0x10)
	struct TArray<struct FVectorSpringState> SpringInterpVectorV2_1_SpringState; // 0xa88(0x10)
	char pad_A98[0x8]; // 0xa98(0x08)
	struct FTransform RigUnit_SetRelativeTransformForItem_3_1_RelativeTransform__IO; // 0xaa0(0x60)
	struct TArray<struct FCachedRigElement> RigUnit_SetRelativeTransformForItem_3_1_CachedChild; // 0xb00(0x10)
	struct TArray<struct FCachedRigElement> RigUnit_SetRelativeTransformForItem_3_1_CachedParent; // 0xb10(0x10)
};

