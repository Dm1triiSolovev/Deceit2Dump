// Class AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnimCharacterMovementLibrary : UBlueprintFunctionLibrary {

	struct FVector PredictGroundMovementStopLocation(struct FVector& Velocity, bool bUseSeparateBrakingFriction, float BrakingFriction, float GroundFriction, float BrakingFrictionFactor, float BrakingDecelerationWalking); // Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementStopLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1956030
	struct FVector PredictGroundMovementPivotLocation(struct FVector& Acceleration, struct FVector& Velocity, float GroundFriction); // Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementPivotLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1955ee0
};

// Class AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnimDistanceMatchingLibrary : UBlueprintFunctionLibrary {

	struct FSequencePlayerReference SetPlayrateToMatchSpeed(struct FSequencePlayerReference& SequencePlayer, float SpeedToMatch, struct FVector2D PlayRateClamp); // Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.SetPlayrateToMatchSpeed // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1956240
	struct FSequenceEvaluatorReference DistanceMatchToTarget(struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceToTarget, struct FName DistanceCurveName); // Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.DistanceMatchToTarget // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1955db0
	struct FSequenceEvaluatorReference AdvanceTimeByDistanceMatching(struct FAnimUpdateContext& UpdateContext, struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceTraveled, struct FName DistanceCurveName, struct FVector2D PlayRateClamp); // Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.AdvanceTimeByDistanceMatching // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1955bb0
};

