// AnimBlueprintGeneratedClass Face_PostProcess_AnimBP.Face_PostProcess_AnimBP_C
// Size: 0x8c0 (Inherited: 0x350)
struct UFace_PostProcess_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x368(0x20)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; // 0x388(0x458)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x7e0(0xc8)
	double __CustomProperty_neckCorrMultD_DCCD3E2440708BE26387709DE97C810B; // 0x8a8(0x08)
	double __CustomProperty_neckCorrMultM_DCCD3E2440708BE26387709DE97C810B; // 0x8b0(0x08)
	double __CustomProperty_neckCorrMultU_DCCD3E2440708BE26387709DE97C810B; // 0x8b8(0x08)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function Face_PostProcess_AnimBP.Face_PostProcess_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_Face_PostProcess_AnimBP(int32_t EntryPoint); // Function Face_PostProcess_AnimBP.Face_PostProcess_AnimBP_C.ExecuteUbergraph_Face_PostProcess_AnimBP // (Final|UbergraphFunction) // @ game+0x2552560
};

