// Class AnimGraphRuntime.AnimationStateMachineLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnimationStateMachineLibrary : UBlueprintFunctionLibrary {

	bool IsStateBlendingOut(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d5fc60
	bool IsStateBlendingIn(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d5fb40
	void ConvertToAnimationStateResultPure(struct FAnimNodeReference& Node, struct FAnimationStateResultReference& AnimationState, bool& Result); // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d5f1a0
	void ConvertToAnimationStateResult(struct FAnimNodeReference& Node, struct FAnimationStateResultReference& AnimationState, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d5f060
};

// Class AnimGraphRuntime.AnimExecutionContextLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnimExecutionContextLibrary : UBlueprintFunctionLibrary {

	float GetDeltaTime(struct FAnimUpdateContext& Context); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d5fa80
	float GetCurrentWeight(struct FAnimUpdateContext& Context); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d5f9c0
	struct FAnimNodeReference GetAnimNodeReference(struct UAnimInstance* Instance, int32_t Index); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3d5f8f0
	struct UAnimInstance* GetAnimInstance(struct FAnimExecutionContext& Context); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d5f830
	struct FAnimUpdateContext ConvertToUpdateContext(struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d5f6e0
	struct FAnimPoseContext ConvertToPoseContext(struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d5f590
	struct FAnimInitializationContext ConvertToInitializationContext(struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d5f440
	struct FAnimComponentSpacePoseContext ConvertToComponentSpacePoseContext(struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d5f2f0
};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_PlayMontageNotify : UAnimNotify {
	struct FName NotifyName; // 0x38(0x08)
};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState {
	struct FName NotifyName; // 0x30(0x08)
};

// Class AnimGraphRuntime.AnimSequencerInstance
// Size: 0x350 (Inherited: 0x350)
struct UAnimSequencerInstance : UAnimInstance {
};

// Class AnimGraphRuntime.KismetAnimationLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetAnimationLibrary : UBlueprintFunctionLibrary {

	void K2_TwoBoneIK(struct FVector& RootPos, struct FVector& JointPos, struct FVector& EndPos, struct FVector& JointTarget, struct FVector& Effector, struct FVector& OutJointPos, struct FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3d6c360
	void K2_StartProfilingTimer(); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3d6c340
	struct FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3d6c060
	float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3d6bf40
	struct FTransform K2_LookAt(struct FTransform& CurrentTransform, struct FVector& TargetPosition, struct FVector LookAtVector, bool bUseUpVector, struct FVector UpVector, float ClampConeInDegree); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3d6bc60
	float K2_EndProfilingTimer(bool bLog, struct FString LogPrefix); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3d6bb70
	float K2_DistanceBetweenTwoSocketsAndMapRange(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, struct FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3d6b880
	struct FVector K2_DirectionBetweenSockets(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameFrom, struct FName SocketOrBoneNameTo); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3d6b770
	float K2_CalculateVelocityFromSockets(float DeltaSeconds, struct USkeletalMeshComponent* Component, struct FName SocketOrBoneName, struct FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, struct FVector OffsetInBoneSpace, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, enum class EEasingFuncType EasingType, struct FRuntimeFloatCurve& CustomCurve); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3d6b310
	float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, struct FVector position, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3d6b0f0
	float CalculateDirection(struct FVector& Velocity, struct FRotator& BaseRotation); // Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3d6b000
};

// Class AnimGraphRuntime.LinkedAnimGraphLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULinkedAnimGraphLibrary : UBlueprintFunctionLibrary {

	bool HasLinkedAnimInstance(struct FLinkedAnimGraphReference& Node); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d6eff0
	struct UAnimInstance* GetLinkedAnimInstance(struct FLinkedAnimGraphReference& Node); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d6eb30
	void ConvertToLinkedAnimGraphPure(struct FAnimNodeReference& Node, struct FLinkedAnimGraphReference& LinkedAnimGraph, bool& Result); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d6df40
	struct FLinkedAnimGraphReference ConvertToLinkedAnimGraph(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d6de40
};

// Class AnimGraphRuntime.PlayMontageCallbackProxy
// Size: 0xa8 (Inherited: 0x28)
struct UPlayMontageCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnCompleted; // 0x28(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x38(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x48(0x10)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0x58(0x10)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0x68(0x10)
	char pad_78[0x30]; // 0x78(0x30)

	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived // (Final|Native|Protected|HasOutParms) // @ game+0x3d6f320
	void OnNotifyBeginReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived // (Final|Native|Protected|HasOutParms) // @ game+0x3d6f230
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded // (Final|Native|Protected) // @ game+0x3d6f160
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut // (Final|Native|Protected) // @ game+0x3d6f090
	struct UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(struct USkeletalMeshComponent* InSkeletalMeshComponent, struct UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection); // Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3d6e7c0
};

// Class AnimGraphRuntime.SequenceEvaluatorLibrary
// Size: 0x28 (Inherited: 0x28)
struct USequenceEvaluatorLibrary : UBlueprintFunctionLibrary {

	struct FSequenceEvaluatorReference SetSequenceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FSequenceEvaluatorReference& SequenceEvaluator, struct UAnimSequenceBase* Sequence, float BlendTime); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d6f9f0
	struct FSequenceEvaluatorReference SetSequence(struct FSequenceEvaluatorReference& SequenceEvaluator, struct UAnimSequenceBase* Sequence); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d6f810
	struct FSequenceEvaluatorReference SetExplicitTime(struct FSequenceEvaluatorReference& SequenceEvaluator, float Time); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d6f610
	struct UAnimSequenceBase* GetSequence(struct FSequenceEvaluatorReference& SequenceEvaluator); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d6ed10
	float GetAccumulatedTime(struct FSequenceEvaluatorReference& SequenceEvaluator); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d6e950
	void ConvertToSequenceEvaluatorPure(struct FAnimNodeReference& Node, struct FSequenceEvaluatorReference& SequenceEvaluator, bool& Result); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d6e1a0
	struct FSequenceEvaluatorReference ConvertToSequenceEvaluator(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d6e0a0
	struct FSequenceEvaluatorReference AdvanceTime(struct FAnimUpdateContext& UpdateContext, struct FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d6dcd0
};

// Class AnimGraphRuntime.SequencePlayerLibrary
// Size: 0x28 (Inherited: 0x28)
struct USequencePlayerLibrary : UBlueprintFunctionLibrary {

	struct FSequencePlayerReference SetStartPosition(struct FSequencePlayerReference& SequencePlayer, float StartPosition); // Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d6fdb0
	struct FSequencePlayerReference SetSequenceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FSequencePlayerReference& SequencePlayer, struct UAnimSequenceBase* Sequence, float BlendTime); // Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d6fbd0
	struct FSequencePlayerReference SetSequence(struct FSequencePlayerReference& SequencePlayer, struct UAnimSequenceBase* Sequence); // Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d6f900
	struct FSequencePlayerReference SetPlayRate(struct FSequencePlayerReference& SequencePlayer, float PlayRate); // Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d6f710
	struct FSequencePlayerReference SetAccumulatedTime(struct FSequencePlayerReference& SequencePlayer, float Time); // Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d6f410
	float GetStartPosition(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d6ef50
	struct UAnimSequenceBase* GetSequencePure(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d6eeb0
	struct FSequencePlayerReference GetSequence(struct FSequencePlayerReference& SequencePlayer, struct UAnimSequenceBase*& SequenceBase); // Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d6edb0
	float GetPlayRate(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d6ec70
	bool GetLoopAnimation(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d6ebd0
	float GetAccumulatedTime(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d6e9f0
	void ConvertToSequencePlayerPure(struct FAnimNodeReference& Node, struct FSequencePlayerReference& SequencePlayer, bool& Result); // Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d6e400
	struct FSequencePlayerReference ConvertToSequencePlayer(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d6e300
};

// Class AnimGraphRuntime.SequencerAnimationSupport
// Size: 0x28 (Inherited: 0x28)
struct USequencerAnimationSupport : UInterface {
};

// Class AnimGraphRuntime.SkeletalControlLibrary
// Size: 0x28 (Inherited: 0x28)
struct USkeletalControlLibrary : UBlueprintFunctionLibrary {

	struct FSkeletalControlReference SetAlpha(struct FSkeletalControlReference& SkeletalControl, float Alpha); // Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d6f510
	float GetAlpha(struct FSkeletalControlReference& SkeletalControl); // Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d6ea90
	void ConvertToSkeletalControlPure(struct FAnimNodeReference& Node, struct FSkeletalControlReference& SkeletalControl, bool& Result); // Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3d6e660
	struct FSkeletalControlReference ConvertToSkeletalControl(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d6e560
};

