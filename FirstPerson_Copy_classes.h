// AnimBlueprintGeneratedClass FirstPerson_Copy.FirstPerson_Copy_C
// Size: 0x560 (Inherited: 0x350)
struct UFirstPerson_Copy_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x368(0x20)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x388(0x1d8)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function FirstPerson_Copy.FirstPerson_Copy_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_FirstPerson_Copy(int32_t EntryPoint); // Function FirstPerson_Copy.FirstPerson_Copy_C.ExecuteUbergraph_FirstPerson_Copy // (Final|UbergraphFunction) // @ game+0x2552560
};

