// AnimBlueprintGeneratedClass m_med_nrw_top_hoodie_Skeleton_AnimBP.m_med_nrw_top_hoodie_Skeleton_AnimBP_C
// Size: 0x1d18 (Inherited: 0x350)
struct Um_med_nrw_top_hoodie_Skeleton_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x368(0x20)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x388(0x1d8)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody_2; // 0x560(0x990)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0xef0(0x990)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1880(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x18a0(0x20)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; // 0x18c0(0x458)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function m_med_nrw_top_hoodie_Skeleton_AnimBP.m_med_nrw_top_hoodie_Skeleton_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_m_med_nrw_top_hoodie_Skeleton_AnimBP(int32_t EntryPoint); // Function m_med_nrw_top_hoodie_Skeleton_AnimBP.m_med_nrw_top_hoodie_Skeleton_AnimBP_C.ExecuteUbergraph_m_med_nrw_top_hoodie_Skeleton_AnimBP // (Final|UbergraphFunction) // @ game+0x2552560
};

