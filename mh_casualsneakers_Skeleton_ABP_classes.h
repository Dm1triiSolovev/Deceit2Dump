// AnimBlueprintGeneratedClass mh_casualsneakers_Skeleton_ABP.mh_casualsneakers_Skeleton_ABP_C
// Size: 0x9b8 (Inherited: 0x350)
struct Umh_casualsneakers_Skeleton_ABP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x368(0x20)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; // 0x388(0x458)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x7e0(0x1d8)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function mh_casualsneakers_Skeleton_ABP.mh_casualsneakers_Skeleton_ABP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_mh_casualsneakers_Skeleton_ABP(int32_t EntryPoint); // Function mh_casualsneakers_Skeleton_ABP.mh_casualsneakers_Skeleton_ABP_C.ExecuteUbergraph_mh_casualsneakers_Skeleton_ABP // (Final|UbergraphFunction) // @ game+0x2552560
};

