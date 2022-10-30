// Class TemplateSequence.TemplateSequence
// Size: 0x108 (Inherited: 0x60)
struct UTemplateSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x60(0x08)
	struct TSoftClassPtr<UObject> BoundActorClass; // 0x68(0x28)
	struct TSoftObjectPtr<AActor> BoundPreviewActor; // 0x90(0x28)
	struct TMap<struct FGuid, struct FName> BoundActorComponents; // 0xb8(0x50)
};

// Class TemplateSequence.CameraAnimationSequence
// Size: 0x108 (Inherited: 0x108)
struct UCameraAnimationSequence : UTemplateSequence {
};

// Class TemplateSequence.CameraAnimationSequenceCameraStandIn
// Size: 0x810 (Inherited: 0x28)
struct UCameraAnimationSequenceCameraStandIn : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	float FieldOfView; // 0x30(0x04)
	char bConstrainAspectRatio : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float AspectRatio; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x40(0x6c0)
	float PostProcessBlendWeight; // 0x700(0x04)
	struct FCameraFilmbackSettings Filmback; // 0x704(0x0c)
	struct FCameraLensSettings LensSettings; // 0x710(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x728(0x68)
	float CurrentFocalLength; // 0x790(0x04)
	float CurrentAperture; // 0x794(0x04)
	float CurrentFocusDistance; // 0x798(0x04)
	char pad_79C[0x74]; // 0x79c(0x74)
};

// Class TemplateSequence.CameraAnimationSequencePlayer
// Size: 0x3f8 (Inherited: 0x28)
struct UCameraAnimationSequencePlayer : UObject {
	char pad_28[0x280]; // 0x28(0x280)
	struct UObject* BoundObjectOverride; // 0x2a8(0x08)
	struct UMovieSceneSequence* Sequence; // 0x2b0(0x08)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x2b8(0xe0)
	char pad_398[0x60]; // 0x398(0x60)
};

// Class TemplateSequence.CameraAnimationSequenceSubsystem
// Size: 0xa0 (Inherited: 0x30)
struct UCameraAnimationSequenceSubsystem : UWorldSubsystem {
	struct UMovieSceneEntitySystemLinker* Linker; // 0x30(0x08)
	char pad_38[0x68]; // 0x38(0x68)
};

// Class TemplateSequence.SequenceCameraShakePattern
// Size: 0x58 (Inherited: 0x28)
struct USequenceCameraShakePattern : UCameraShakePattern {
	struct UCameraAnimationSequence* Sequence; // 0x28(0x08)
	float PlayRate; // 0x30(0x04)
	float Scale; // 0x34(0x04)
	float BlendInTime; // 0x38(0x04)
	float BlendOutTime; // 0x3c(0x04)
	float RandomSegmentDuration; // 0x40(0x04)
	bool bRandomSegment; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct UCameraAnimationSequencePlayer* Player; // 0x48(0x08)
	struct UCameraAnimationSequenceCameraStandIn* CameraStandIn; // 0x50(0x08)
};

// Class TemplateSequence.SequenceCameraShakeTestUtil
// Size: 0x28 (Inherited: 0x28)
struct USequenceCameraShakeTestUtil : UBlueprintFunctionLibrary {

	bool GetPostProcessBlendCache(struct APlayerController* PlayerController, int32_t PPIndex, struct FPostProcessSettings& OutPPSettings, float& OutPPBlendWeight); // Function TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x2047d20
	struct FMinimalViewInfo GetLastFrameCameraCachePOV(struct APlayerController* PlayerController); // Function TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2047c40
	struct FMinimalViewInfo GetCameraCachePOV(struct APlayerController* PlayerController); // Function TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2047b60
};

// Class TemplateSequence.TemplateSequenceActor
// Size: 0x2d0 (Inherited: 0x278)
struct ATemplateSequenceActor : AActor {
	char pad_278[0x10]; // 0x278(0x10)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x288(0x14)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct UTemplateSequencePlayer* SequencePlayer; // 0x2a0(0x08)
	struct FSoftObjectPath TemplateSequence; // 0x2a8(0x18)
	struct FTemplateSequenceBindingOverrideData BindingOverride; // 0x2c0(0x0c)
	char pad_2CC[0x4]; // 0x2cc(0x04)

	void SetSequence(struct UTemplateSequence* InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x2048030
	void SetBinding(struct AActor* Actor, bool bOverridesDefault); // Function TemplateSequence.TemplateSequenceActor.SetBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x2047f60
	struct UTemplateSequence* LoadSequence(); // Function TemplateSequence.TemplateSequenceActor.LoadSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2047f30
	struct UTemplateSequencePlayer* GetSequencePlayer(); // Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2047f00
	struct UTemplateSequence* GetSequence(); // Function TemplateSequence.TemplateSequenceActor.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2047ed0
};

// Class TemplateSequence.TemplateSequencePlayer
// Size: 0x4d8 (Inherited: 0x4d0)
struct UTemplateSequencePlayer : UMovieSceneSequencePlayer {
	char pad_4D0[0x8]; // 0x4d0(0x08)

	struct UTemplateSequencePlayer* CreateTemplateSequencePlayer(struct UObject* WorldContextObject, struct UTemplateSequence* TemplateSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ATemplateSequenceActor*& OutActor); // Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x20479e0
};

// Class TemplateSequence.TemplateSequenceSection
// Size: 0x140 (Inherited: 0x128)
struct UTemplateSequenceSection : UMovieSceneSubSection {
	char pad_128[0x8]; // 0x128(0x08)
	struct TArray<struct FTemplateSectionPropertyScale> PropertyScales; // 0x130(0x10)
};

// Class TemplateSequence.TemplateSequenceSystem
// Size: 0xb0 (Inherited: 0x40)
struct UTemplateSequenceSystem : UMovieSceneEntitySystem {
	char pad_40[0x70]; // 0x40(0x70)
};

// Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
// Size: 0x98 (Inherited: 0x40)
struct UTemplateSequencePropertyScalingInstantiatorSystem : UMovieSceneEntitySystem {
	char pad_40[0x58]; // 0x40(0x58)
};

// Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
// Size: 0x90 (Inherited: 0x40)
struct UTemplateSequencePropertyScalingEvaluatorSystem : UMovieSceneEntitySystem {
	char pad_40[0x50]; // 0x40(0x50)
};

// Class TemplateSequence.TemplateSequenceTrack
// Size: 0xa0 (Inherited: 0xa0)
struct UTemplateSequenceTrack : UMovieSceneSubTrack {
};

