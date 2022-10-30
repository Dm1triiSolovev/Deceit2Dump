// AnimBlueprintGeneratedClass ABP_Mannequin_Retarget_Experiment.ABP_Mannequin_Retarget_Experiment_C
// Size: 0x3f0 (Inherited: 0x350)
struct UABP_Mannequin_Retarget_Experiment_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x368(0x20)
	struct FAnimNode_RetargetPoseFromMesh AnimGraphNode_RetargetPoseFromMesh; // 0x388(0x60)
	struct USkeletalMeshComponent* ComponentPlayingAnim; // 0x3e8(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Mannequin_Retarget_Experiment.ABP_Mannequin_Retarget_Experiment_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Mannequin_Retarget_Experiment.ABP_Mannequin_Retarget_Experiment_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_ABP_Mannequin_Retarget_Experiment(int32_t EntryPoint); // Function ABP_Mannequin_Retarget_Experiment.ABP_Mannequin_Retarget_Experiment_C.ExecuteUbergraph_ABP_Mannequin_Retarget_Experiment // (Final|UbergraphFunction) // @ game+0x2552560
};

