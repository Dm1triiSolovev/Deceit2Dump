// Class MovieSceneTracks.MovieSceneParameterSection
// Size: 0x148 (Inherited: 0xe8)
struct UMovieSceneParameterSection : UMovieSceneSection {
	struct TArray<struct FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xe8(0x10)
	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xf8(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x108(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x118(0x10)
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x128(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x138(0x10)

	bool RemoveVectorParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x3eca2c0
	bool RemoveVector2DParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x3eca220
	bool RemoveTransformParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x3eca180
	bool RemoveScalarParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x3eca0e0
	bool RemoveColorParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x3eca040
	bool RemoveBoolParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x3ec9fa0
	void GetParameterNames(struct TSet<struct FName>& ParameterNames); // Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ec9e30
	void AddVectorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3ec9cd0
	void AddVector2DParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector2D InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3ec9bb0
	void AddTransformParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FTransform& InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3ec9a20
	void AddScalarParameterKey(struct FName InParameterName, struct FFrameNumber InTime, float InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3ec9900
	void AddColorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FLinearColor InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3ec97e0
	void AddBoolParameterKey(struct FName InParameterName, struct FFrameNumber InTime, bool InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3ec96d0
};

// Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 0xc0 (Inherited: 0x90)
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	struct UMovieSceneSection* SectionToKey; // 0x90(0x08)
	struct FMovieScenePropertyBinding PropertyBinding; // 0x98(0x14)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb0(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraShakeEvaluator
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneCameraShakeEvaluator : UObject {
};

// Class MovieSceneTracks.ByteChannelEvaluatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UByteChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.DoubleChannelEvaluatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UDoubleChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.FloatChannelEvaluatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UFloatChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneTransformOrigin
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneTransformOrigin : UInterface {

	struct FTransform BP_GetTransformOrigin(); // Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin // (Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2552560
};

// Class MovieSceneTracks.IntegerChannelEvaluatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UIntegerChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieScene3DConstraintSection
// Size: 0x110 (Inherited: 0xe8)
struct UMovieScene3DConstraintSection : UMovieSceneSection {
	struct FGuid ConstraintId; // 0xe8(0x10)
	struct FMovieSceneObjectBindingID ConstraintBindingID; // 0xf8(0x18)

	void SetConstraintBindingID(struct FMovieSceneObjectBindingID& InConstraintBindingID); // Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3ec09e0
	struct FMovieSceneObjectBindingID GetConstraintBindingID(); // Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ec08b0
};

// Class MovieSceneTracks.MovieScene3DAttachSection
// Size: 0x130 (Inherited: 0x110)
struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection {
	char pad_110[0x8]; // 0x110(0x08)
	struct FName AttachSocketName; // 0x118(0x08)
	struct FName AttachComponentName; // 0x120(0x08)
	enum class EAttachmentRule AttachmentLocationRule; // 0x128(0x01)
	enum class EAttachmentRule AttachmentRotationRule; // 0x129(0x01)
	enum class EAttachmentRule AttachmentScaleRule; // 0x12a(0x01)
	enum class EDetachmentRule DetachmentLocationRule; // 0x12b(0x01)
	enum class EDetachmentRule DetachmentRotationRule; // 0x12c(0x01)
	enum class EDetachmentRule DetachmentScaleRule; // 0x12d(0x01)
	char pad_12E[0x2]; // 0x12e(0x02)
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0xa0 (Inherited: 0x90)
struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> ConstraintSections; // 0x90(0x10)
};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// Size: 0xa0 (Inherited: 0xa0)
struct UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DPathSection
// Size: 0x200 (Inherited: 0x110)
struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	struct FMovieSceneFloatChannel TimingCurve; // 0x110(0xe8)
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1f8(0x01)
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0x1f9(0x01)
	char pad_1FA[0x2]; // 0x1fa(0x02)
	char bFollow : 1; // 0x1fc(0x01)
	char bReverse : 1; // 0x1fc(0x01)
	char bForceUpright : 1; // 0x1fc(0x01)
	char pad_1FC_3 : 5; // 0x1fc(0x01)
	char pad_1FD[0x3]; // 0x1fd(0x03)
};

// Class MovieSceneTracks.MovieScene3DPathTrack
// Size: 0xa8 (Inherited: 0xa0)
struct UMovieScene3DPathTrack : UMovieScene3DConstraintTrack {
	char pad_A0[0x8]; // 0xa0(0x08)
};

// Class MovieSceneTracks.MovieScenePropertySystem
// Size: 0x58 (Inherited: 0x40)
struct UMovieScenePropertySystem : UMovieSceneEntitySystem {
	char pad_40[0x8]; // 0x40(0x08)
	struct UMovieScenePropertyInstantiatorSystem* InstantiatorSystem; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class MovieSceneTracks.MovieScene3DTransformPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieScene3DTransformPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieScene3DTransformSection
// Size: 0xa58 (Inherited: 0xe8)
struct UMovieScene3DTransformSection : UMovieSceneSection {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMovieSceneTransformMask TransformMask; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FMovieSceneDoubleChannel Translation[0x3]; // 0xf8(0x2d0)
	struct FMovieSceneDoubleChannel Rotation[0x3]; // 0x3c8(0x2d0)
	struct FMovieSceneDoubleChannel Scale[0x3]; // 0x698(0x2d0)
	struct FMovieSceneFloatChannel ManualWeight; // 0x968(0xe8)
	bool bUseQuaternionInterpolation; // 0xa50(0x01)
	char pad_A51[0x7]; // 0xa51(0x07)
};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
// Size: 0x270 (Inherited: 0xe8)
struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0xe8(0xf8)
	struct FIntegralCurve ActorGuidIndexCurve; // 0x1e0(0x80)
	struct TArray<struct FString> ActorGuidStrings; // 0x260(0x10)
};

// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class MovieSceneTracks.MovieSceneAudioSection
// Size: 0x5a0 (Inherited: 0xe8)
struct UMovieSceneAudioSection : UMovieSceneSection {
	struct USoundBase* Sound; // 0xe8(0x08)
	struct FFrameNumber StartFrameOffset; // 0xf0(0x04)
	float StartOffset; // 0xf4(0x04)
	float AudioStartTime; // 0xf8(0x04)
	float AudioDilationFactor; // 0xfc(0x04)
	float AudioVolume; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FMovieSceneFloatChannel SoundVolume; // 0x108(0xe8)
	struct FMovieSceneFloatChannel PitchMultiplier; // 0x1f0(0xe8)
	struct TMap<struct FName, struct FMovieSceneFloatChannel> Inputs_Float; // 0x2d8(0x50)
	struct TMap<struct FName, struct FMovieSceneStringChannel> Inputs_String; // 0x328(0x50)
	struct TMap<struct FName, struct FMovieSceneBoolChannel> Inputs_Bool; // 0x378(0x50)
	struct TMap<struct FName, struct FMovieSceneIntegerChannel> Inputs_Int; // 0x3c8(0x50)
	struct TMap<struct FName, struct FMovieSceneAudioTriggerChannel> Inputs_Trigger; // 0x418(0x50)
	struct FMovieSceneActorReferenceData AttachActorData; // 0x468(0xf8)
	bool bLooping; // 0x560(0x01)
	bool bSuppressSubtitles; // 0x561(0x01)
	bool bOverrideAttenuation; // 0x562(0x01)
	char pad_563[0x5]; // 0x563(0x05)
	struct USoundAttenuation* AttenuationSettings; // 0x568(0x08)
	struct FDelegate OnQueueSubtitles; // 0x570(0x10)
	struct FMulticastInlineDelegate OnAudioFinished; // 0x580(0x10)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x590(0x10)

	void SetStartOffset(struct FFrameNumber InStartOffset); // Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3ec0b30
	void SetSound(struct USoundBase* InSound); // Function MovieSceneTracks.MovieSceneAudioSection.SetSound // (Final|Native|Public|BlueprintCallable) // @ game+0x3ec0aa0
	struct FFrameNumber GetStartOffset(); // Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ec0900
	struct USoundBase* GetSound(); // Function MovieSceneTracks.MovieSceneAudioSection.GetSound // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ec08e0
};

// Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0xa8 (Inherited: 0x90)
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	char pad_90[0x8]; // 0x90(0x08)
	struct TArray<struct UMovieSceneSection*> AudioSections; // 0x98(0x10)
};

// Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneBaseValueEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneBoolPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneBoolPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneBoolTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneBoolTrack : UMovieScenePropertyTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class MovieSceneTracks.MovieSceneBytePropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneBytePropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x1d0 (Inherited: 0xe8)
struct UMovieSceneByteSection : UMovieSceneSection {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMovieSceneByteChannel ByteCurve; // 0xf0(0xe0)
};

// Class MovieSceneTracks.MovieSceneByteTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	struct UEnum* Enum; // 0xc0(0x08)
};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
// Size: 0x128 (Inherited: 0xe8)
struct UMovieSceneCameraAnimSection : UMovieSceneSection {
	struct FMovieSceneCameraAnimSectionData AnimData; // 0xe8(0x20)
	struct UCameraAnim* CameraAnim; // 0x108(0x08)
	float PlayRate; // 0x110(0x04)
	float PlayScale; // 0x114(0x04)
	float BlendInTime; // 0x118(0x04)
	float BlendOutTime; // 0x11c(0x04)
	bool bLooping; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// Size: 0xa8 (Inherited: 0x90)
struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	char pad_90[0x8]; // 0x90(0x08)
	struct TArray<struct UMovieSceneSection*> CameraAnimSections; // 0x98(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0x190 (Inherited: 0xe8)
struct UMovieSceneCameraCutSection : UMovieSceneSection {
	char pad_E8[0x8]; // 0xe8(0x08)
	bool bLockPreviousCamera; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FGuid CameraGuid; // 0xf4(0x10)
	struct FMovieSceneObjectBindingID CameraBindingID; // 0x104(0x18)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FTransform InitialCameraCutTransform; // 0x120(0x60)
	bool bHasInitialCameraCutTransform; // 0x180(0x01)
	char pad_181[0xf]; // 0x181(0x0f)

	void SetCameraBindingID(struct FMovieSceneObjectBindingID& InCameraBindingID); // Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3ec0920
	struct FMovieSceneObjectBindingID GetCameraBindingID(); // Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ec0880
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0xa8 (Inherited: 0x90)
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	bool bCanBlend; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x98(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
// Size: 0xc8 (Inherited: 0x50)
struct UMovieSceneCameraCutTrackInstance : UMovieSceneTrackInstance {
	char pad_50[0x78]; // 0x50(0x78)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
// Size: 0x138 (Inherited: 0xe8)
struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xe8(0x28)
	struct UCameraShakeBase* ShakeClass; // 0x110(0x08)
	float PlayScale; // 0x118(0x04)
	enum class ECameraShakePlaySpace PlaySpace; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct FRotator UserDefinedPlaySpace; // 0x120(0x18)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
// Size: 0x110 (Inherited: 0xe8)
struct UMovieSceneCameraShakeSourceShakeSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xe8(0x28)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
// Size: 0xa8 (Inherited: 0x90)
struct UMovieSceneCameraShakeSourceShakeTrack : UMovieSceneNameableTrack {
	char pad_90[0x8]; // 0x90(0x08)
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // 0x98(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
// Size: 0x1b8 (Inherited: 0xe8)
struct UMovieSceneCameraShakeSourceTriggerSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSourceTriggerChannel Channel; // 0xe8(0xd0)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
// Size: 0xa8 (Inherited: 0x90)
struct UMovieSceneCameraShakeSourceTriggerTrack : UMovieSceneTrack {
	char pad_90[0x8]; // 0x90(0x08)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x98(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// Size: 0xa8 (Inherited: 0x90)
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	char pad_90[0x8]; // 0x90(0x08)
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // 0x98(0x10)
};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
// Size: 0x150 (Inherited: 0x128)
struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	struct FString ShotDisplayName; // 0x128(0x10)
	struct FText DisplayName; // 0x138(0x18)

	void SetShotDisplayName(struct FString InShotDisplayName); // Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName // (Final|Native|Public|BlueprintCallable) // @ game+0x3ec5470
	struct FString GetShotDisplayName(); // Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ec5090
};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Size: 0xa0 (Inherited: 0xa0)
struct UMovieSceneCinematicShotTrack : UMovieSceneSubTrack {
};

// Class MovieSceneTracks.MovieSceneColorPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneColorPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x490 (Inherited: 0xe8)
struct UMovieSceneColorSection : UMovieSceneSection {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMovieSceneFloatChannel RedCurve; // 0xf0(0xe8)
	struct FMovieSceneFloatChannel GreenCurve; // 0x1d8(0xe8)
	struct FMovieSceneFloatChannel BlueCurve; // 0x2c0(0xe8)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x3a8(0xe8)
};

// Class MovieSceneTracks.MovieSceneColorTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	bool bIsSlateColor; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneComponentAttachmentInvalidatorSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
// Size: 0x1c0 (Inherited: 0x40)
struct UMovieSceneComponentAttachmentSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0x180]; // 0x40(0x180)
};

// Class MovieSceneTracks.MovieSceneComponentMobilitySystem
// Size: 0x220 (Inherited: 0x40)
struct UMovieSceneComponentMobilitySystem : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0x1e0]; // 0x40(0x1e0)
};

// Class MovieSceneTracks.MovieSceneComponentTransformSystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneComponentTransformSystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneCVarSection
// Size: 0x140 (Inherited: 0xe8)
struct UMovieSceneCVarSection : UMovieSceneSection {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMovieSceneCVarOverrides ConsoleVariables; // 0xf0(0x50)

	void SetFromString(struct FString InString); // Function MovieSceneTracks.MovieSceneCVarSection.SetFromString // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3ec5350
	struct FString GetString(); // Function MovieSceneTracks.MovieSceneCVarSection.GetString // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ec5110
};

// Class MovieSceneTracks.MovieSceneCVarTrack
// Size: 0xa0 (Inherited: 0x90)
struct UMovieSceneCVarTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x90(0x10)
};

// Class MovieSceneTracks.MovieSceneCVarTrackInstance
// Size: 0xa0 (Inherited: 0x50)
struct UMovieSceneCVarTrackInstance : UMovieSceneTrackInstance {
	char pad_50[0x50]; // 0x50(0x50)
};

// Class MovieSceneTracks.MovieSceneDataLayerSection
// Size: 0x108 (Inherited: 0xe8)
struct UMovieSceneDataLayerSection : UMovieSceneSection {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct TArray<struct FActorDataLayer> DataLayers; // 0xf0(0x10)
	enum class EDataLayerRuntimeState DesiredState; // 0x100(0x01)
	enum class EDataLayerRuntimeState PrerollState; // 0x101(0x01)
	bool bFlushOnUnload; // 0x102(0x01)
	char pad_103[0x5]; // 0x103(0x05)

	void SetPrerollState(enum class EDataLayerRuntimeState InPrerollState); // Function MovieSceneTracks.MovieSceneDataLayerSection.SetPrerollState // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3ec53f0
	void SetFlushOnUnload(bool bFlushOnUnload); // Function MovieSceneTracks.MovieSceneDataLayerSection.SetFlushOnUnload // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3ec52c0
	void SetDesiredState(enum class EDataLayerRuntimeState InDesiredState); // Function MovieSceneTracks.MovieSceneDataLayerSection.SetDesiredState // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3ec5240
	void SetDataLayers(struct TArray<struct FActorDataLayer>& InDataLayers); // Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayers // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3ec5190
	enum class EDataLayerRuntimeState GetPrerollState(); // Function MovieSceneTracks.MovieSceneDataLayerSection.GetPrerollState // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ec5060
	bool GetFlushOnUnload(); // Function MovieSceneTracks.MovieSceneDataLayerSection.GetFlushOnUnload // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ec5030
	enum class EDataLayerRuntimeState GetDesiredState(); // Function MovieSceneTracks.MovieSceneDataLayerSection.GetDesiredState // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3951fe0
	struct TArray<struct FActorDataLayer> GetDataLayers(); // Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ec5000
};

// Class MovieSceneTracks.MovieSceneDataLayerSystem
// Size: 0xd0 (Inherited: 0x40)
struct UMovieSceneDataLayerSystem : UMovieSceneEntitySystem {
	char pad_40[0x90]; // 0x40(0x90)
};

// Class MovieSceneTracks.MovieSceneDataLayerTrack
// Size: 0xa0 (Inherited: 0x90)
struct UMovieSceneDataLayerTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x90(0x10)
};

// Class MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
// Size: 0x58 (Inherited: 0x40)
struct UMovieSceneDeferredComponentMovementSystem : UMovieSceneEntitySystem {
	char pad_40[0x18]; // 0x40(0x18)
};

// Class MovieSceneTracks.MovieSceneDoublePropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneDoublePropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneDoubleSection
// Size: 0x1e0 (Inherited: 0xe8)
struct UMovieSceneDoubleSection : UMovieSceneSection {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMovieSceneDoubleChannel DoubleCurve; // 0xf0(0xf0)
};

// Class MovieSceneTracks.MovieSceneDoubleTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieSceneDoubleTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneEnumPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneEnumPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneEnumSection
// Size: 0x1d0 (Inherited: 0xe8)
struct UMovieSceneEnumSection : UMovieSceneSection {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMovieSceneByteChannel EnumCurve; // 0xf0(0xe0)
};

// Class MovieSceneTracks.MovieSceneEnumTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	struct UEnum* Enum; // 0xc0(0x08)
};

// Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneEulerTransformPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieSceneEulerTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneEventSectionBase
// Size: 0xe8 (Inherited: 0xe8)
struct UMovieSceneEventSectionBase : UMovieSceneSection {
};

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// Size: 0x118 (Inherited: 0xe8)
struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMovieSceneEvent Event; // 0xf0(0x28)
};

// Class MovieSceneTracks.MovieSceneEventSection
// Size: 0x230 (Inherited: 0xe8)
struct UMovieSceneEventSection : UMovieSceneSection {
	struct FNameCurve Events; // 0xe8(0x78)
	struct FMovieSceneEventSectionData EventData; // 0x160(0xd0)
};

// Class MovieSceneTracks.MovieSceneEventSystem
// Size: 0x90 (Inherited: 0x40)
struct UMovieSceneEventSystem : UMovieSceneEntitySystem {
	char pad_40[0x50]; // 0x40(0x50)
};

// Class MovieSceneTracks.MovieScenePreSpawnEventSystem
// Size: 0x90 (Inherited: 0x90)
struct UMovieScenePreSpawnEventSystem : UMovieSceneEventSystem {
};

// Class MovieSceneTracks.MovieScenePostSpawnEventSystem
// Size: 0x90 (Inherited: 0x90)
struct UMovieScenePostSpawnEventSystem : UMovieSceneEventSystem {
};

// Class MovieSceneTracks.MovieScenePostEvalEventSystem
// Size: 0x90 (Inherited: 0x90)
struct UMovieScenePostEvalEventSystem : UMovieSceneEventSystem {
};

// Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0xb8 (Inherited: 0x90)
struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char pad_90[0x10]; // 0x90(0x10)
	char bFireEventsWhenForwards : 1; // 0xa0(0x01)
	char bFireEventsWhenBackwards : 1; // 0xa0(0x01)
	char pad_A0_2 : 6; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	enum class EFireEventsAtPosition EventPosition; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xa8(0x10)
};

// Class MovieSceneTracks.MovieSceneEventTriggerSection
// Size: 0x1c0 (Inherited: 0xe8)
struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMovieSceneEventChannel EventChannel; // 0xf0(0xd0)
};

// Class MovieSceneTracks.MovieSceneFadeSection
// Size: 0x1e8 (Inherited: 0xe8)
struct UMovieSceneFadeSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel FloatCurve; // 0xe8(0xe8)
	struct FLinearColor FadeColor; // 0x1d0(0x10)
	char bFadeAudio : 1; // 0x1e0(0x01)
	char pad_1E0_1 : 7; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
};

// Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieSceneFloatTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneFadeTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneFadeTrack : UMovieSceneFloatTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class MovieSceneTracks.MovieSceneFloatPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneFloatPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x1d8 (Inherited: 0xe8)
struct UMovieSceneFloatSection : UMovieSceneSection {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMovieSceneFloatChannel FloatCurve; // 0xf0(0xe8)
};

// Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneHierarchicalBiasSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneInitialValueSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneInitialValueSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneIntegerPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneIntegerPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneIntegerSection
// Size: 0x1c8 (Inherited: 0xe8)
struct UMovieSceneIntegerSection : UMovieSceneSection {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMovieSceneIntegerChannel IntegerCurve; // 0xf0(0xd8)
};

// Class MovieSceneTracks.MovieSceneIntegerTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieSceneIntegerTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
// Size: 0x1e8 (Inherited: 0x40)
struct UMovieSceneInterrogatedPropertyInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0x1a8]; // 0x40(0x1a8)
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// Size: 0x108 (Inherited: 0xe8)
struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	char pad_E8[0x8]; // 0xe8(0x08)
	enum class ELevelVisibility Visibility; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct TArray<struct FName> LevelNames; // 0xf8(0x10)

	void SetVisibility(enum class ELevelVisibility InVisibility); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x3eca410
	void SetLevelNames(struct TArray<struct FName>& InLevelNames); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3eca360
	enum class ELevelVisibility GetVisibility(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ec9f70
	struct TArray<struct FName> GetLevelNames(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ec9e00
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
// Size: 0x1a8 (Inherited: 0x40)
struct UMovieSceneLevelVisibilitySystem : UMovieSceneEntitySystem {
	char pad_40[0x168]; // 0x40(0x168)
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Size: 0xa0 (Inherited: 0x90)
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x90(0x10)
};

// Class MovieSceneTracks.MovieSceneMaterialTrack
// Size: 0xa0 (Inherited: 0x90)
struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x90(0x10)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0xb0 (Inherited: 0xa0)
struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct UMaterialParameterCollection* MPC; // 0xa8(0x08)
};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// Size: 0xb0 (Inherited: 0xa0)
struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	char pad_A0[0x8]; // 0xa0(0x08)
	int32_t MaterialIndex; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
// Size: 0x98 (Inherited: 0x40)
struct UMovieSceneMotionVectorSimulationSystem : UMovieSceneEntitySystem {
	char pad_40[0x58]; // 0x40(0x58)
};

// Class MovieSceneTracks.MovieSceneObjectPropertySection
// Size: 0x1f0 (Inherited: 0xe8)
struct UMovieSceneObjectPropertySection : UMovieSceneSection {
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0xe8(0x108)
};

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
	ClassPtrProperty PropertyClass; // 0xc8(0x08)
};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// Size: 0xa8 (Inherited: 0x90)
struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	char pad_90[0x8]; // 0x90(0x08)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x98(0x10)
};

// Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x1c8 (Inherited: 0xe8)
struct UMovieSceneParticleSection : UMovieSceneSection {
	struct FMovieSceneParticleChannel ParticleKeys; // 0xe8(0xe0)
};

// Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0xa8 (Inherited: 0x90)
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	char pad_90[0x8]; // 0x90(0x08)
	struct TArray<struct UMovieSceneSection*> ParticleSections; // 0x98(0x10)
};

// Class MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
// Size: 0x90 (Inherited: 0x68)
struct UMovieScenePiecewiseBoolBlenderSystem : UMovieSceneBlenderSystem {
	char pad_68[0x28]; // 0x68(0x28)
};

// Class MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
// Size: 0x90 (Inherited: 0x68)
struct UMovieScenePiecewiseByteBlenderSystem : UMovieSceneBlenderSystem {
	char pad_68[0x28]; // 0x68(0x28)
};

// Class MovieSceneTracks.MovieScenePiecewiseDoubleBlenderSystem
// Size: 0x128 (Inherited: 0x68)
struct UMovieScenePiecewiseDoubleBlenderSystem : UMovieSceneBlenderSystem {
	char pad_68[0xc0]; // 0x68(0xc0)
};

// Class MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem
// Size: 0x90 (Inherited: 0x68)
struct UMovieScenePiecewiseEnumBlenderSystem : UMovieSceneBlenderSystem {
	char pad_68[0x28]; // 0x68(0x28)
};

// Class MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem
// Size: 0x128 (Inherited: 0x68)
struct UMovieScenePiecewiseFloatBlenderSystem : UMovieSceneBlenderSystem {
	char pad_68[0xc0]; // 0x68(0xc0)
};

// Class MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem
// Size: 0xb0 (Inherited: 0x68)
struct UMovieScenePiecewiseIntegerBlenderSystem : UMovieSceneBlenderSystem {
	char pad_68[0x48]; // 0x68(0x48)
};

// Class MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction
// Size: 0x80 (Inherited: 0x30)
struct UMovieSceneAsyncAction_SequencePrediction : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Result; // 0x30(0x10)
	struct FMulticastInlineDelegate Failure; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	struct UMovieSceneSequencePlayer* SequencePlayer; // 0x60(0x08)
	struct USceneComponent* SceneComponent; // 0x68(0x08)
	char pad_70[0x10]; // 0x70(0x10)

	struct UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtTime(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, float TimeInSeconds); // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3eceba0
	struct UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtFrame(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, struct FFrameTime FrameTime); // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3ecea90
	struct UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtTime(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, float TimeInSeconds); // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3ece980
	struct UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtFrame(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, struct FFrameTime FrameTime); // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3ece870
};

// Class MovieSceneTracks.MovieScenePredictionSystem
// Size: 0xf0 (Inherited: 0x40)
struct UMovieScenePredictionSystem : UMovieSceneEntitySystem {
	char pad_40[0x90]; // 0x40(0x90)
	struct TArray<struct UMovieSceneAsyncAction_SequencePrediction*> PendingPredictions; // 0xd0(0x10)
	struct TArray<struct UMovieSceneAsyncAction_SequencePrediction*> ProcessingPredictions; // 0xe0(0x10)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// Size: 0x1f0 (Inherited: 0xe8)
struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection {
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0xe8(0x108)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
	int32_t MaterialIndex; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
// Size: 0x248 (Inherited: 0x40)
struct UMovieScenePropertyInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0x208]; // 0x40(0x208)
};

// Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneQuaternionInterpolationRotationSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x320 (Inherited: 0xe8)
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	struct FMovieSceneSkeletalAnimationParams Params; // 0xe8(0x128)
	struct UAnimSequence* AnimSequence; // 0x210(0x08)
	struct UAnimSequenceBase* Animation; // 0x218(0x08)
	float StartOffset; // 0x220(0x04)
	float EndOffset; // 0x224(0x04)
	float PlayRate; // 0x228(0x04)
	char bReverse : 1; // 0x22c(0x01)
	char pad_22C_1 : 7; // 0x22c(0x01)
	char pad_22D[0x3]; // 0x22d(0x03)
	struct FName SlotName; // 0x230(0x08)
	struct FVector StartLocationOffset; // 0x238(0x18)
	struct FRotator StartRotationOffset; // 0x250(0x18)
	bool bMatchWithPrevious; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	struct FName MatchedBoneName; // 0x26c(0x08)
	char pad_274[0x4]; // 0x274(0x04)
	struct FVector MatchedLocationOffset; // 0x278(0x18)
	struct FRotator MatchedRotationOffset; // 0x290(0x18)
	bool bMatchTranslation; // 0x2a8(0x01)
	bool bMatchIncludeZHeight; // 0x2a9(0x01)
	bool bMatchRotationYaw; // 0x2aa(0x01)
	bool bMatchRotationPitch; // 0x2ab(0x01)
	bool bMatchRotationRoll; // 0x2ac(0x01)
	char pad_2AD[0x73]; // 0x2ad(0x73)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size: 0xe8 (Inherited: 0x90)
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	char pad_90[0x8]; // 0x90(0x08)
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x98(0x10)
	bool bUseLegacySectionIndexBlend; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams; // 0xb0(0x30)
	bool bBlendFirstChildOfRoot; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
};

// Class MovieSceneTracks.MovieSceneSlomoSection
// Size: 0x1d0 (Inherited: 0xe8)
struct UMovieSceneSlomoSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel FloatCurve; // 0xe8(0xe8)
};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneSlomoTrack : UMovieSceneFloatTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class MovieSceneTracks.MovieSceneStringSection
// Size: 0x1d0 (Inherited: 0xe8)
struct UMovieSceneStringSection : UMovieSceneSection {
	struct FMovieSceneStringChannel StringCurve; // 0xe8(0xe8)
};

// Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneStringTrack : UMovieScenePropertyTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class MovieSceneTracks.MovieSceneTransformOriginSystem
// Size: 0x78 (Inherited: 0x40)
struct UMovieSceneTransformOriginSystem : UMovieSceneEntitySystem {
	char pad_40[0x38]; // 0x40(0x38)
};

// Class MovieSceneTracks.MovieSceneTransformTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieSceneTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneFloatVectorPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneFloatVectorPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneDoubleVectorPropertySystem
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneDoubleVectorPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneFloatVectorSection
// Size: 0x498 (Inherited: 0xe8)
struct UMovieSceneFloatVectorSection : UMovieSceneSection {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMovieSceneFloatChannel Curves[0x4]; // 0xf0(0x3a0)
	int32_t ChannelsUsed; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
};

// Class MovieSceneTracks.MovieSceneDoubleVectorSection
// Size: 0x4b8 (Inherited: 0xe8)
struct UMovieSceneDoubleVectorSection : UMovieSceneSection {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMovieSceneDoubleChannel Curves[0x4]; // 0xf0(0x3c0)
	int32_t ChannelsUsed; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
};

// Class MovieSceneTracks.MovieSceneFloatVectorTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneFloatVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class MovieSceneTracks.MovieSceneDoubleVectorTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneDoubleVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// Size: 0xc8 (Inherited: 0xc8)
struct UMovieSceneVisibilityTrack : UMovieSceneBoolTrack {
};

// Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
// Size: 0x90 (Inherited: 0x40)
struct UMovieSceneHierarchicalEasingInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0x50]; // 0x40(0x50)
};

// Class MovieSceneTracks.WeightAndEasingEvaluatorSystem
// Size: 0x78 (Inherited: 0x40)
struct UWeightAndEasingEvaluatorSystem : UMovieSceneEntitySystem {
	char pad_40[0x38]; // 0x40(0x38)
};

