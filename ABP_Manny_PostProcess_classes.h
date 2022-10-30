// AnimBlueprintGeneratedClass ABP_Manny_PostProcess.ABP_Manny_PostProcess_C
// Size: 0x1e18 (Inherited: 0x350)
struct UABP_Manny_PostProcess_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x368(0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x388(0xc8)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; // 0x450(0x458)
	struct FAnimNode_PoseDriver AnimGraphNode_PoseDriver_14; // 0x8a8(0x188)
	struct FAnimNode_PoseDriver AnimGraphNode_PoseDriver_13; // 0xa30(0x188)
	struct FAnimNode_PoseDriver AnimGraphNode_PoseDriver_12; // 0xbb8(0x188)
	struct FAnimNode_PoseDriver AnimGraphNode_PoseDriver_11; // 0xd40(0x188)
	struct FAnimNode_PoseDriver AnimGraphNode_PoseDriver_10; // 0xec8(0x188)
	struct FAnimNode_PoseDriver AnimGraphNode_PoseDriver_9; // 0x1050(0x188)
	struct FAnimNode_PoseDriver AnimGraphNode_PoseDriver_8; // 0x11d8(0x188)
	struct FAnimNode_PoseDriver AnimGraphNode_PoseDriver_7; // 0x1360(0x188)
	struct FAnimNode_PoseDriver AnimGraphNode_PoseDriver_6; // 0x14e8(0x188)
	struct FAnimNode_PoseDriver AnimGraphNode_PoseDriver_5; // 0x1670(0x188)
	struct FAnimNode_PoseDriver AnimGraphNode_PoseDriver_4; // 0x17f8(0x188)
	struct FAnimNode_PoseDriver AnimGraphNode_PoseDriver_3; // 0x1980(0x188)
	struct FAnimNode_PoseDriver AnimGraphNode_PoseDriver_2; // 0x1b08(0x188)
	struct FAnimNode_PoseDriver AnimGraphNode_PoseDriver; // 0x1c90(0x188)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_Manny_PostProcess.ABP_Manny_PostProcess_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_ABP_Manny_PostProcess(int32_t EntryPoint); // Function ABP_Manny_PostProcess.ABP_Manny_PostProcess_C.ExecuteUbergraph_ABP_Manny_PostProcess // (Final|UbergraphFunction) // @ game+0x2552560
};

