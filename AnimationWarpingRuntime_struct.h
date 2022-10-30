// ScriptStruct AnimationWarpingRuntime.AnimNode_OrientationWarping
// Size: 0x160 (Inherited: 0xc8)
struct FAnimNode_OrientationWarping : FAnimNode_SkeletalControlBase {
	enum class EWarpingEvaluationMode Mode; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float OrientationAngle; // 0xcc(0x04)
	float LocomotionAngle; // 0xd0(0x04)
	float LocomotionAngleDeltaThreshold; // 0xd4(0x04)
	struct TArray<struct FBoneReference> SpineBones; // 0xd8(0x10)
	struct FBoneReference IKFootRootBone; // 0xe8(0x10)
	struct TArray<struct FBoneReference> IKFootBones; // 0xf8(0x10)
	enum class EAxis RotationAxis; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float DistributedBoneOrientationAlpha; // 0x10c(0x04)
	float RotationInterpSpeed; // 0x110(0x04)
	char pad_114[0x4c]; // 0x114(0x4c)
};

// ScriptStruct AnimationWarpingRuntime.SlopeWarpingFootDefinition
// Size: 0x28 (Inherited: 0x00)
struct FSlopeWarpingFootDefinition {
	struct FBoneReference IKFootBone; // 0x00(0x10)
	struct FBoneReference FKFootBone; // 0x10(0x10)
	int32_t NumBonesInLimb; // 0x20(0x04)
	float FootSize; // 0x24(0x04)
};

// ScriptStruct AnimationWarpingRuntime.SlopeWarpingFootData
// Size: 0xb0 (Inherited: 0x00)
struct FSlopeWarpingFootData {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct AnimationWarpingRuntime.AnimNode_SlopeWarping
// Size: 0x2e0 (Inherited: 0xc8)
struct FAnimNode_SlopeWarping : FAnimNode_SkeletalControlBase {
	char pad_C8[0x18]; // 0xc8(0x18)
	struct FBoneReference IKFootRootBone; // 0xe0(0x10)
	struct FBoneReference PelvisBone; // 0xf0(0x10)
	struct TArray<struct FSlopeWarpingFootDefinition> FeetDefinitions; // 0x100(0x10)
	struct TArray<struct FSlopeWarpingFootData> FeetData; // 0x110(0x10)
	struct FVectorRK4SpringInterpolator PelvisOffsetInterpolator; // 0x120(0x08)
	char pad_128[0x58]; // 0x128(0x58)
	struct FVector GravityDir; // 0x180(0x18)
	struct FVector CustomFloorOffset; // 0x198(0x18)
	float CachedDeltaTime; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct FVector TargetFloorNormalWorldSpace; // 0x1b8(0x18)
	struct FVectorRK4SpringInterpolator FloorNormalInterpolator; // 0x1d0(0x08)
	char pad_1D8[0x58]; // 0x1d8(0x58)
	struct FVector TargetFloorOffsetLocalSpace; // 0x230(0x18)
	struct FVectorRK4SpringInterpolator FloorOffsetInterpolator; // 0x248(0x08)
	char pad_250[0x58]; // 0x250(0x58)
	float MaxStepHeight; // 0x2a8(0x04)
	char bKeepMeshInsideOfCapsule : 1; // 0x2ac(0x01)
	char bPullPelvisDown : 1; // 0x2ac(0x01)
	char bUseCustomFloorOffset : 1; // 0x2ac(0x01)
	char bWasOnGround : 1; // 0x2ac(0x01)
	char bShowDebug : 1; // 0x2ac(0x01)
	char bFloorSmoothingInitialized : 1; // 0x2ac(0x01)
	char pad_2AC_6 : 2; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct FVector ActorLocation; // 0x2b0(0x18)
	struct FVector GravityDirCompSpace; // 0x2c8(0x18)
};

// ScriptStruct AnimationWarpingRuntime.StrideWarpingFootDefinition
// Size: 0x30 (Inherited: 0x00)
struct FStrideWarpingFootDefinition {
	struct FBoneReference IKFootBone; // 0x00(0x10)
	struct FBoneReference FKFootBone; // 0x10(0x10)
	struct FBoneReference ThighBone; // 0x20(0x10)
};

// ScriptStruct AnimationWarpingRuntime.AnimNode_StrideWarping
// Size: 0x238 (Inherited: 0xc8)
struct FAnimNode_StrideWarping : FAnimNode_SkeletalControlBase {
	enum class EWarpingEvaluationMode Mode; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FVector StrideDirection; // 0xd0(0x18)
	float StrideScale; // 0xe8(0x04)
	float LocomotionSpeed; // 0xec(0x04)
	float MinLocomotionSpeedThreshold; // 0xf0(0x04)
	struct FBoneReference PelvisBone; // 0xf4(0x10)
	struct FBoneReference IKFootRootBone; // 0x104(0x10)
	char pad_114[0x4]; // 0x114(0x04)
	struct TArray<struct FStrideWarpingFootDefinition> FootDefinitions; // 0x118(0x10)
	struct FInputClampConstants StrideScaleModifier; // 0x128(0x14)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FWarpingVectorValue FloorNormalDirection; // 0x140(0x20)
	struct FWarpingVectorValue GravityDirection; // 0x160(0x20)
	struct FIKFootPelvisPullDownSolver PelvisIKFootSolver; // 0x180(0x70)
	bool bOrientStrideDirectionUsingFloorNormal; // 0x1f0(0x01)
	bool bCompensateIKUsingFKThighRotation; // 0x1f1(0x01)
	bool bClampIKUsingFKLimits; // 0x1f2(0x01)
	char pad_1F3[0x45]; // 0x1f3(0x45)
};

