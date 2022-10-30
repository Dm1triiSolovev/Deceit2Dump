// AnimBlueprintGeneratedClass Face_AnimBP.Face_AnimBP_C
// Size: 0xec8 (Inherited: 0x350)
struct UFace_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x368(0x20)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x388(0x1d8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x560(0x108)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x668(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x690(0x28)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x6b8(0xe0)
	struct FAnimNode_LiveLinkPose AnimGraphNode_LiveLinkPose; // 0x798(0x48)
	struct FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode; // 0x7e0(0xb0)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_4; // 0x890(0x100)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x990(0x48)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x9d8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x9f8(0x20)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_3; // 0xa18(0x100)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_2; // 0xb18(0x100)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve; // 0xc18(0x100)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xd18(0x128)
	struct FLiveLinkSubjectName LLink_Face_Subj; // 0xe40(0x08)
	struct FRotator ARKit_HeadRotation; // 0xe48(0x18)
	double JawOpenAlpha; // 0xe60(0x08)
	double TeethShowAlpha; // 0xe68(0x08)
	bool LLink_Face_Head; // 0xe70(0x01)
	char pad_E71[0x7]; // 0xe71(0x07)
	struct TMap<struct FName, double> CustomControlValues; // 0xe78(0x50)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function Face_AnimBP.Face_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void GetCustomControls(struct TMap<struct FName, double>& Curves); // Function Face_AnimBP.Face_AnimBP_C.GetCustomControls // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2552560
	void ResetControls(); // Function Face_AnimBP.Face_AnimBP_C.ResetControls // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Set Control(struct FName ControlName, double Value, bool& bControlAdded); // Function Face_AnimBP.Face_AnimBP_C.Set Control // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Face_AnimBP_AnimGraphNode_ModifyCurve_113C8ABF4B03D13E1BA9D480482DC46F(); // Function Face_AnimBP.Face_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Face_AnimBP_AnimGraphNode_ModifyCurve_113C8ABF4B03D13E1BA9D480482DC46F // (BlueprintEvent) // @ game+0x2552560
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Face_AnimBP_AnimGraphNode_ModifyCurve_FD1525DF4D22C26532C5D7A3DD08F9A7(); // Function Face_AnimBP.Face_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Face_AnimBP_AnimGraphNode_ModifyCurve_FD1525DF4D22C26532C5D7A3DD08F9A7 // (BlueprintEvent) // @ game+0x2552560
	void BlueprintBeginPlay(); // Function Face_AnimBP.Face_AnimBP_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Face_AnimBP.Face_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_Face_AnimBP(int32_t EntryPoint); // Function Face_AnimBP.Face_AnimBP_C.ExecuteUbergraph_Face_AnimBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

