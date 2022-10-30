// AnimBlueprintGeneratedClass RTG_metahuman_base_skel_AnimBP.RTG_metahuman_base_skel_AnimBP_C
// Size: 0x3e8 (Inherited: 0x350)
struct URTG_metahuman_base_skel_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x368(0x20)
	struct FAnimNode_RetargetPoseFromMesh AnimGraphNode_RetargetPoseFromMesh; // 0x388(0x60)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function RTG_metahuman_base_skel_AnimBP.RTG_metahuman_base_skel_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_RTG_metahuman_base_skel_AnimBP(int32_t EntryPoint); // Function RTG_metahuman_base_skel_AnimBP.RTG_metahuman_base_skel_AnimBP_C.ExecuteUbergraph_RTG_metahuman_base_skel_AnimBP // (Final|UbergraphFunction) // @ game+0x2552560
};

