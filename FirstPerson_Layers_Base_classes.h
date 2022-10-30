// AnimBlueprintGeneratedClass FirstPerson_Layers_Base.FirstPerson_Layers_Base_C
// Size: 0xc20 (Inherited: 0x350)
struct UFirstPerson_Layers_Base_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x358(0x98)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x3f0(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3f8(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_18; // 0x400(0x20)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x420(0x48)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x468(0x40)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x4a8(0x40)
	struct FAnimNode_Root AnimGraphNode_Root_17; // 0x4e8(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16; // 0x508(0x40)
	struct FAnimNode_Root AnimGraphNode_Root_16; // 0x548(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0x568(0x40)
	struct FAnimNode_Root AnimGraphNode_Root_15; // 0x5a8(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x5c8(0x40)
	struct FAnimNode_Root AnimGraphNode_Root_14; // 0x608(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x628(0x40)
	struct FAnimNode_Root AnimGraphNode_Root_13; // 0x668(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x688(0x40)
	struct FAnimNode_Root AnimGraphNode_Root_12; // 0x6c8(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x6e8(0x40)
	struct FAnimNode_Root AnimGraphNode_Root_11; // 0x728(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x748(0x40)
	struct FAnimNode_Root AnimGraphNode_Root_10; // 0x788(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x7a8(0x40)
	struct FAnimNode_Root AnimGraphNode_Root_9; // 0x7e8(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x808(0x40)
	struct FAnimNode_Root AnimGraphNode_Root_8; // 0x848(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x868(0x40)
	struct FAnimNode_Root AnimGraphNode_Root_7; // 0x8a8(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x8c8(0x40)
	struct FAnimNode_Root AnimGraphNode_Root_6; // 0x908(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x928(0x40)
	struct FAnimNode_Root AnimGraphNode_Root_5; // 0x968(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x988(0x40)
	struct FAnimNode_Root AnimGraphNode_Root_4; // 0x9c8(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x9e8(0x40)
	struct FAnimNode_Root AnimGraphNode_Root_3; // 0xa28(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xa48(0x40)
	struct FAnimNode_Root AnimGraphNode_Root_2; // 0xa88(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xaa8(0x40)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xae8(0x20)
	enum class AnimEnum_CardinalDirection K2Node_PropertyAccess_5; // 0xb08(0x01)
	enum class AnimEnum_CardinalDirection K2Node_PropertyAccess_4; // 0xb09(0x01)
	enum class AnimEnum_CardinalDirection K2Node_PropertyAccess_3; // 0xb0a(0x01)
	enum class AnimEnum_CardinalDirection K2Node_PropertyAccess_2; // 0xb0b(0x01)
	char pad_B0C[0x4]; // 0xb0c(0x04)
	struct UAnimInstance* K2Node_PropertyAccess; // 0xb10(0x08)
	struct UAnimSequence* Idle; // 0xb18(0x08)
	struct UAnimSequence* SprintStartForward; // 0xb20(0x08)
	struct UAnimSequence* SprintStartBackward; // 0xb28(0x08)
	struct UAnimSequence* SprintStartLeft; // 0xb30(0x08)
	struct UAnimSequence* SprintStartRight; // 0xb38(0x08)
	struct UAnimSequence* SprintForward; // 0xb40(0x08)
	struct UAnimSequence* SprintBackward; // 0xb48(0x08)
	struct UAnimSequence* SprintLeft; // 0xb50(0x08)
	struct UAnimSequence* SprintRight; // 0xb58(0x08)
	struct UAnimSequence* WalkForward; // 0xb60(0x08)
	struct UAnimSequence* WalkBackward; // 0xb68(0x08)
	struct UAnimSequence* WalkLeft; // 0xb70(0x08)
	struct UAnimSequence* WalkRight; // 0xb78(0x08)
	struct UAnimSequence* JumpStart; // 0xb80(0x08)
	struct UAnimSequence* JumpIdle; // 0xb88(0x08)
	struct UAnimSequence* JumpEnd; // 0xb90(0x08)
	struct UAnimSequence* ADS_Idle; // 0xb98(0x08)
	struct UAnimSequence* ADS_WalkForward; // 0xba0(0x08)
	struct UAnimSequence* ADS_WalkBackwards; // 0xba8(0x08)
	struct UAnimSequence* ADS_WalkLeft; // 0xbb0(0x08)
	struct UAnimSequence* ADS_WalkRight; // 0xbb8(0x08)
	struct UAnimSequence* ADS_IntoIdle; // 0xbc0(0x08)
	struct UAnimSequence* Hip_IntoIdle; // 0xbc8(0x08)
	struct UAnimSequence* Idle_Into_Crouch; // 0xbd0(0x08)
	struct UAnimSequence* Crouch_Into_Idle; // 0xbd8(0x08)
	struct UAnimSequence* Crouch_Walk_Forward; // 0xbe0(0x08)
	struct UAnimSequence* Crouch_Walk_Backward; // 0xbe8(0x08)
	struct UAnimSequence* Crouch_Walk_Left; // 0xbf0(0x08)
	struct UAnimSequence* Crouch_Walk_Right; // 0xbf8(0x08)
	struct UAnimSequence* Crouch_Idle; // 0xc00(0x08)
	struct UAnimSequence* Crouch_Into_ADS; // 0xc08(0x08)
	struct UAnimSequence* BaseAdditive; // 0xc10(0x08)
	struct UAnimSequence* BaseAdditiveADS; // 0xc18(0x08)

	void EvaluateAdditive(struct FPoseLink& EvaluateAdditive); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.EvaluateAdditive // (HasOutParms|BlueprintCallable) // @ game+0x2552560
	void CrouchToADSState(struct FPoseLink& CrouchToADSState); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.CrouchToADSState // (HasOutParms|BlueprintCallable) // @ game+0x2552560
	void CrouchWalkState(struct FPoseLink& CrouchWalkState); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.CrouchWalkState // (HasOutParms|BlueprintCallable) // @ game+0x2552560
	void CrouchToIdleState(struct FPoseLink& CrouchToIdleState); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.CrouchToIdleState // (HasOutParms|BlueprintCallable) // @ game+0x2552560
	void IdleToCrouchState(struct FPoseLink& IdleToCrouchState); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.IdleToCrouchState // (HasOutParms|BlueprintCallable) // @ game+0x2552560
	void CrouchIdleState(struct FPoseLink& CrouchIdleState); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.CrouchIdleState // (HasOutParms|BlueprintCallable) // @ game+0x2552560
	void ADSWalkState(struct FPoseLink& ADSWalkState); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.ADSWalkState // (HasOutParms|BlueprintCallable) // @ game+0x2552560
	void ADSIdleState(struct FPoseLink& ADSIdleState); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.ADSIdleState // (HasOutParms|BlueprintCallable) // @ game+0x2552560
	void HipIntoIdleState(struct FPoseLink& HipIntoIdleState); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.HipIntoIdleState // (HasOutParms|BlueprintCallable) // @ game+0x2552560
	void ADSIntoIdleState(struct FPoseLink& ADSIntoIdleState); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.ADSIntoIdleState // (HasOutParms|BlueprintCallable) // @ game+0x2552560
	void IdleState(struct FPoseLink& IdleState); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.IdleState // (HasOutParms|BlueprintCallable) // @ game+0x2552560
	void SprintStartState(struct FPoseLink& SprintStartState); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.SprintStartState // (HasOutParms|BlueprintCallable) // @ game+0x2552560
	void SprintState(struct FPoseLink& SprintState); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.SprintState // (HasOutParms|BlueprintCallable) // @ game+0x2552560
	void WalkState(struct FPoseLink& WalkState); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.WalkState // (HasOutParms|BlueprintCallable) // @ game+0x2552560
	void JumpStartState(struct FPoseLink& JumpStartState); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.JumpStartState // (HasOutParms|BlueprintCallable) // @ game+0x2552560
	void JumpIdleState(struct FPoseLink& JumpIdleState); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.JumpIdleState // (HasOutParms|BlueprintCallable) // @ game+0x2552560
	void JumpEndState(struct FPoseLink& JumpEndState); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.JumpEndState // (HasOutParms|BlueprintCallable) // @ game+0x2552560
	void AnimGraph(struct FPoseLink& AnimGraph); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	struct UFirstPerson_AnimBP_C* GetMainAnimBPThreadSafe(); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.GetMainAnimBPThreadSafe // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2552560
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_Layers_Base_AnimGraphNode_SequencePlayer_C99D885A4E230C77402A66BAD1C72E05(); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_Layers_Base_AnimGraphNode_SequencePlayer_C99D885A4E230C77402A66BAD1C72E05 // (BlueprintEvent) // @ game+0x2552560
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_Layers_Base_AnimGraphNode_SequencePlayer_1730ED074C388D365019688711E1237B(); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_Layers_Base_AnimGraphNode_SequencePlayer_1730ED074C388D365019688711E1237B // (BlueprintEvent) // @ game+0x2552560
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_Layers_Base_AnimGraphNode_SequencePlayer_E134ED3343CF348654B10F9E76F3D4A1(); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_Layers_Base_AnimGraphNode_SequencePlayer_E134ED3343CF348654B10F9E76F3D4A1 // (BlueprintEvent) // @ game+0x2552560
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_Layers_Base_AnimGraphNode_SequencePlayer_319FE6464FF4685D80F5DBAC4DFB4D96(); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_Layers_Base_AnimGraphNode_SequencePlayer_319FE6464FF4685D80F5DBAC4DFB4D96 // (BlueprintEvent) // @ game+0x2552560
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_Layers_Base_AnimGraphNode_SequencePlayer_EC509C324622216BACB7BD9B239AF11D(); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_Layers_Base_AnimGraphNode_SequencePlayer_EC509C324622216BACB7BD9B239AF11D // (BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_FirstPerson_Layers_Base(int32_t EntryPoint); // Function FirstPerson_Layers_Base.FirstPerson_Layers_Base_C.ExecuteUbergraph_FirstPerson_Layers_Base // (Final|UbergraphFunction) // @ game+0x2552560
};

