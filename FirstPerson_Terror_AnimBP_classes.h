// AnimBlueprintGeneratedClass FirstPerson_Terror_AnimBP.FirstPerson_Terror_AnimBP_C
// Size: 0x1772 (Inherited: 0x370)
struct UFirstPerson_Terror_AnimBP_C : ULyraAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x378(0x02)
	char pad_37A[0x6]; // 0x37a(0x06)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x380(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x388(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x390(0x20)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x3b0(0x1d8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x588(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x5b0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x5d8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x600(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x628(0x40)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x668(0x20)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x688(0x20)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x6a8(0x20)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x6c8(0xb8)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x780(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x7c8(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x8d0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0x8f0(0x20)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_3; // 0x910(0xf0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0xa00(0x128)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_2; // 0xb28(0xf0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xc18(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xc40(0x28)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xc68(0xe0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0xd48(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0xd68(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0xd88(0x128)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xeb0(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0xed0(0x128)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController; // 0xff8(0x118)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1110(0xf0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1200(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1228(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x1330(0x128)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x1458(0x128)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1580(0x128)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x16a8(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x16f0(0x20)
	struct USkeletalMeshComponent* ThirdPersonMesh; // 0x1710(0x08)
	struct AB_Hero_Deceit_C* Character; // 0x1718(0x08)
	bool IsMoving; // 0x1720(0x01)
	bool bIsInAir; // 0x1721(0x01)
	char pad_1722[0x6]; // 0x1722(0x06)
	struct FVector AimPosition; // 0x1728(0x18)
	struct FRotator AimRotation; // 0x1740(0x18)
	struct FRotator AimYaw; // 0x1758(0x18)
	bool IsSprinting; // 0x1770(0x01)
	bool bInCinematicAnimation; // 0x1771(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function FirstPerson_Terror_AnimBP.FirstPerson_Terror_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_Terror_AnimBP_AnimGraphNode_TransitionResult_23001FA9481C2DAEBDCF558D381CC203(); // Function FirstPerson_Terror_AnimBP.FirstPerson_Terror_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_Terror_AnimBP_AnimGraphNode_TransitionResult_23001FA9481C2DAEBDCF558D381CC203 // (BlueprintEvent) // @ game+0x2552560
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function FirstPerson_Terror_AnimBP.FirstPerson_Terror_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void BlueprintBeginPlay(); // Function FirstPerson_Terror_AnimBP.FirstPerson_Terror_AnimBP_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_FirstPerson_Terror_AnimBP(int32_t EntryPoint); // Function FirstPerson_Terror_AnimBP.FirstPerson_Terror_AnimBP_C.ExecuteUbergraph_FirstPerson_Terror_AnimBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

