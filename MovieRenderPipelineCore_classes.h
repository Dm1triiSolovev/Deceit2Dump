// Class MovieRenderPipelineCore.MoviePipeline
// Size: 0x310 (Inherited: 0x28)
struct UMoviePipeline : UObject {
	struct FMulticastInlineDelegate OnMoviePipelineFinishedDelegate; // 0x28(0x10)
	struct FMulticastInlineDelegate OnMoviePipelineWorkFinishedDelegate; // 0x38(0x10)
	struct FMulticastInlineDelegate OnMoviePipelineShotWorkFinishedDelegate; // 0x48(0x10)
	struct UMoviePipelineCustomTimeStep* CustomTimeStep; // 0x58(0x08)
	char pad_60[0x10]; // 0x60(0x10)
	struct UEngineCustomTimeStep* CachedPrevCustomTimeStep; // 0x70(0x08)
	struct ULevelSequence* TargetSequence; // 0x78(0x08)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x80(0x08)
	struct UMovieRenderDebugWidget* DebugWidget; // 0x88(0x08)
	struct UTexture* PreviewTexture; // 0x90(0x08)
	char pad_98[0x238]; // 0x98(0x238)
	struct UMovieRenderDebugWidget* DebugWidgetClass; // 0x2d0(0x08)
	struct UMoviePipelineExecutorJob* CurrentJob; // 0x2d8(0x08)
	char pad_2E0[0x30]; // 0x2e0(0x30)

	void Shutdown(bool bError); // Function MovieRenderPipelineCore.MoviePipeline.Shutdown // (Final|Native|Public|BlueprintCallable) // @ game+0x19fcab0
	void SetInitializationTime(struct FDateTime& InDateTime); // Function MovieRenderPipelineCore.MoviePipeline.SetInitializationTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x19fc850
	void RequestShutdown(bool bIsError); // Function MovieRenderPipelineCore.MoviePipeline.RequestShutdown // (Final|Native|Public|BlueprintCallable) // @ game+0x19fbe10
	void OnMoviePipelineFinishedImpl(); // Function MovieRenderPipelineCore.MoviePipeline.OnMoviePipelineFinishedImpl // (Native|Protected|BlueprintCallable) // @ game+0x19fbd60
	bool IsShutdownRequested(); // Function MovieRenderPipelineCore.MoviePipeline.IsShutdownRequested // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19fbac0
	void Initialize(struct UMoviePipelineExecutorJob* InJob); // Function MovieRenderPipelineCore.MoviePipeline.Initialize // (Final|Native|Public|BlueprintCallable) // @ game+0x19fba00
	struct UTexture* GetPreviewTexture(); // Function MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19fb8a0
	struct UMoviePipelineMasterConfig* GetPipelineMasterConfig(); // Function MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19fb7e0
	struct FDateTime GetInitializationTime(); // Function MovieRenderPipelineCore.MoviePipeline.GetInitializationTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x19fb020
	struct UMoviePipelineExecutorJob* GetCurrentJob(); // Function MovieRenderPipelineCore.MoviePipeline.GetCurrentJob // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19fa970
};

// Class MovieRenderPipelineCore.MoviePipelineCustomTimeStep
// Size: 0x30 (Inherited: 0x28)
struct UMoviePipelineCustomTimeStep : UEngineCustomTimeStep {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MovieRenderPipelineCore.MoviePipelineSetting
// Size: 0x48 (Inherited: 0x28)
struct UMoviePipelineSetting : UObject {
	struct TWeakObjectPtr<struct UMoviePipeline> CachedPipeline; // 0x28(0x08)
	bool bEnabled; // 0x30(0x01)
	char pad_31[0x17]; // 0x31(0x17)

	void BuildNewProcessCommandLineArgs(struct TArray<struct FString>& InOutUnrealURLParams, struct TArray<struct FString>& InOutCommandLineArgs, struct TArray<struct FString>& InOutDeviceProfileCvars, struct TArray<struct FString>& InOutExecCmds); // Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLineArgs // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x19ffcf0
	void BuildNewProcessCommandLine(struct FString& InOutUnrealURLParams, struct FString& InOutCommandLineArgs); // Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x19ffbd0
};

// Class MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
// Size: 0x68 (Inherited: 0x48)
struct UMoviePipelineAntiAliasingSetting : UMoviePipelineSetting {
	int32_t SpatialSampleCount; // 0x48(0x04)
	int32_t TemporalSampleCount; // 0x4c(0x04)
	bool bOverrideAntiAliasing; // 0x50(0x01)
	enum class EAntiAliasingMethod AntiAliasingMethod; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	int32_t RenderWarmUpCount; // 0x54(0x04)
	bool bUseCameraCutForWarmUp; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32_t EngineWarmUpCount; // 0x5c(0x04)
	bool bRenderWarmUpFrames; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class MovieRenderPipelineCore.MoviePipelineBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMoviePipelineBlueprintLibrary : UBlueprintFunctionLibrary {

	void UpdateJobShotListFromSequence(struct ULevelSequence* InSequence, struct UMoviePipelineExecutorJob* InJob, bool& bShotsChanged); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x19fcb40
	int32_t ResolveVersionNumber(struct FMoviePipelineFilenameResolveParams InParams); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x19fc260
	void ResolveFilenameFormatArguments(struct FString InFormatString, struct FMoviePipelineFilenameResolveParams& InParams, struct FString& OutFinalPath, struct FMoviePipelineFormatArgs& OutMergedFormatArgs); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x19fbea0
	struct UMoviePipelineQueue* LoadManifestFileFromString(struct FString InManifestFilePath); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.LoadManifestFileFromString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x19fbb20
	enum class EMovieRenderPipelineState GetPipelineState(struct UMoviePipeline* InPipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x19fb810
	void GetOverallSegmentCounts(struct UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x19fb6c0
	void GetOverallOutputFrames(struct UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x19fb5a0
	struct FText GetMoviePipelineEngineChangelistLabel(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMoviePipelineEngineChangelistLabel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x19fb4b0
	struct FTimecode GetMasterTimecode(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x19fb410
	struct FFrameNumber GetMasterFrameNumber(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x19fb380
	struct FString GetMapPackageName(struct UMoviePipelineExecutorJob* InJob); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x19fb2b0
	struct FText GetJobName(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x19fb1c0
	struct FDateTime GetJobInitializationTime(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x19fb130
	struct FText GetJobAuthor(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x19fb040
	bool GetEstimatedTimeRemaining(struct UMoviePipeline* InPipeline, struct FTimespan& OutEstimate); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x19faf40
	struct FIntPoint GetEffectiveOutputResolution(struct UMoviePipelineMasterConfig* InMasterConfig, struct UMoviePipelineExecutorShot* InPipelineExecutorShot); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x19fae70
	struct FTimecode GetCurrentShotTimecode(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x19fadd0
	struct FFrameNumber GetCurrentShotFrameNumber(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x19fad40
	struct ULevelSequence* GetCurrentSequence(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSequence // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x19facb0
	struct FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x19fabc0
	enum class EMovieRenderShotState GetCurrentSegmentState(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x19fab30
	void GetCurrentSegmentName(struct UMoviePipeline* InMoviePipeline, struct FText& OutOuterName, struct FText& OutInnerName); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x19fa990
	float GetCurrentFocusDistance(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x19fa8e0
	float GetCurrentFocalLength(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x19fa850
	struct UMoviePipelineExecutorShot* GetCurrentExecutorShot(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentExecutorShot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x19fa7c0
	float GetCurrentAperture(struct UMoviePipeline* InMoviePipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x19fa730
	float GetCompletionPercentage(struct UMoviePipeline* InPipeline); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x19fa6a0
	struct UMoviePipelineSetting* FindOrGetDefaultSettingForShot(struct UMoviePipelineSetting* InSettingType, struct UMoviePipelineMasterConfig* InMasterConfig, struct UMoviePipelineExecutorShot* InShot); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x19fa130
	struct UMovieSceneSequence* DuplicateSequence(struct UObject* Outer, struct UMovieSceneSequence* InSequence); // Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x19f9f00
};

// Class MovieRenderPipelineCore.MoviePipelineCameraSetting
// Size: 0x50 (Inherited: 0x48)
struct UMoviePipelineCameraSetting : UMoviePipelineSetting {
	enum class EMoviePipelineShutterTiming ShutterTiming; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float OverscanPercentage; // 0x4c(0x04)
};

// Class MovieRenderPipelineCore.MoviePipelineColorSetting
// Size: 0xb0 (Inherited: 0x48)
struct UMoviePipelineColorSetting : UMoviePipelineSetting {
	struct FOpenColorIODisplayConfiguration OCIOConfiguration; // 0x48(0x60)
	bool bDisableToneCurve; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoder
// Size: 0x88 (Inherited: 0x48)
struct UMoviePipelineCommandLineEncoder : UMoviePipelineSetting {
	struct FString FileNameFormatOverride; // 0x48(0x10)
	enum class EMoviePipelineEncodeQuality Quality; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString AdditionalCommandLineArgs; // 0x60(0x10)
	bool bDeleteSourceFiles; // 0x70(0x01)
	bool bSkipEncodeOnRenderCanceled; // 0x71(0x01)
	char pad_72[0x16]; // 0x72(0x16)
};

// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings
// Size: 0x100 (Inherited: 0x38)
struct UMoviePipelineCommandLineEncoderSettings : UDeveloperSettings {
	struct FString ExecutablePath; // 0x38(0x10)
	struct FText CodecHelpText; // 0x48(0x18)
	struct FString VideoCodec; // 0x60(0x10)
	struct FString AudioCodec; // 0x70(0x10)
	struct FString OutputFileExtension; // 0x80(0x10)
	struct FString CommandLineFormat; // 0x90(0x10)
	struct FString VideoInputStringFormat; // 0xa0(0x10)
	struct FString AudioInputStringFormat; // 0xb0(0x10)
	struct FString EncodeSettings_Low; // 0xc0(0x10)
	struct FString EncodeSettings_Med; // 0xd0(0x10)
	struct FString EncodeSettings_High; // 0xe0(0x10)
	struct FString EncodeSettings_Epic; // 0xf0(0x10)
};

// Class MovieRenderPipelineCore.MoviePipelineConfigBase
// Size: 0x50 (Inherited: 0x28)
struct UMoviePipelineConfigBase : UObject {
	struct FString DisplayName; // 0x28(0x10)
	struct TArray<struct UMoviePipelineSetting*> Settings; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)

	void RemoveSetting(struct UMoviePipelineSetting* InSetting); // Function MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting // (Native|Public|BlueprintCallable) // @ game+0x19fbd80
	struct TArray<struct UMoviePipelineSetting*> GetUserSettings(); // Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19fb980
	struct TArray<struct UMoviePipelineSetting*> FindSettingsByClass(struct UMoviePipelineSetting* InClass, bool bIncludeDisabledSettings); // Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19fa460
	struct UMoviePipelineSetting* FindSettingByClass(struct UMoviePipelineSetting* InClass, bool bIncludeDisabledSettings); // Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19fa230
	struct UMoviePipelineSetting* FindOrAddSettingByClass(struct UMoviePipelineSetting* InClass, bool bIncludeDisabledSettings); // Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x19fa060
	void CopyFrom(struct UMoviePipelineConfigBase* InConfig); // Function MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom // (Native|Public|BlueprintCallable) // @ game+0x19f9e50
};

// Class MovieRenderPipelineCore.MoviePipelineDebugSettings
// Size: 0x58 (Inherited: 0x48)
struct UMoviePipelineDebugSettings : UMoviePipelineSetting {
	bool bWriteAllSamples; // 0x48(0x01)
	bool bCaptureFramesWithRenderDoc; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32_t CaptureFrame; // 0x4c(0x04)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class MovieRenderPipelineCore.MoviePipelineExecutorBase
// Size: 0x108 (Inherited: 0x28)
struct UMoviePipelineExecutorBase : UObject {
	struct FMulticastInlineDelegate OnExecutorFinishedDelegate; // 0x28(0x10)
	char pad_38[0x18]; // 0x38(0x18)
	struct FMulticastInlineDelegate OnExecutorErroredDelegate; // 0x50(0x10)
	char pad_60[0x20]; // 0x60(0x20)
	struct FMulticastInlineDelegate SocketMessageRecievedDelegate; // 0x80(0x10)
	struct FMulticastInlineDelegate HTTPResponseRecievedDelegate; // 0x90(0x10)
	struct UMovieRenderDebugWidget* DebugWidgetClass; // 0xa0(0x08)
	struct FString UserData; // 0xa8(0x10)
	struct UMoviePipeline* TargetPipelineClass; // 0xb8(0x08)
	char pad_C0[0x48]; // 0xc0(0x48)

	void SetStatusProgress(float InProgress); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19fca20
	void SetStatusMessage(struct FString InStatus); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19fc980
	void SetMoviePipelineClass(struct UObject* InPipelineClass); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass // (Final|Native|Public|BlueprintCallable) // @ game+0x19fc8f0
	bool SendSocketMessage(struct FString InMessage); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage // (Final|Native|Protected|BlueprintCallable) // @ game+0x19fc7a0
	int32_t SendHTTPRequest(struct FString InURL, struct FString InVerb, struct FString InMessage, struct TMap<struct FString, struct FString>& InHeaders); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x19fc590
	void OnExecutorFinishedImpl(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorFinishedImpl // (Native|Protected|BlueprintCallable) // @ game+0x19fbd60
	void OnExecutorErroredImpl(struct UMoviePipeline* ErroredPipeline, bool bFatal, struct FText ErrorReason); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl // (Native|Protected|BlueprintCallable) // @ game+0x19fbbe0
	void OnBeginFrame(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnBeginFrame // (Native|Event|Public|BlueprintEvent) // @ game+0x19fbbc0
	bool IsSocketConnected(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x19fbaf0
	bool IsRendering(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19fba90
	float GetStatusProgress(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19fb940
	struct FString GetStatusMessage(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19fb8c0
	void Execute(struct UMoviePipelineQueue* InPipelineQueue); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19f9fd0
	void DisconnectSocket(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.DisconnectSocket // (Final|Native|Protected|BlueprintCallable) // @ game+0x19f9ee0
	bool ConnectSocket(struct FString InHostName, int32_t InPort); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket // (Final|Native|Protected|BlueprintCallable) // @ game+0x19f9d60
	void CancelCurrentJob(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelCurrentJob // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xacd670
	void CancelAllJobs(); // Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelAllJobs // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xea87a0
};

// Class MovieRenderPipelineCore.MoviePipelineOutputBase
// Size: 0x48 (Inherited: 0x48)
struct UMoviePipelineOutputBase : UMoviePipelineSetting {
};

// Class MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
// Size: 0x80 (Inherited: 0x48)
struct UMoviePipelineFCPXMLExporter : UMoviePipelineOutputBase {
	char pad_48[0x8]; // 0x48(0x08)
	struct FString FileNameFormatOverride; // 0x50(0x10)
	enum class FCPXMLExportDataSource DataSource; // 0x60(0x01)
	char pad_61[0x1f]; // 0x61(0x1f)
};

// Class MovieRenderPipelineCore.MoviePipelineGameMode
// Size: 0x318 (Inherited: 0x318)
struct AMoviePipelineGameMode : AGameModeBase {
};

// Class MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
// Size: 0x110 (Inherited: 0x48)
struct UMoviePipelineGameOverrideSetting : UMoviePipelineSetting {
	struct AGameModeBase* GameModeOverride; // 0x48(0x08)
	bool bCinematicQualitySettings; // 0x50(0x01)
	enum class EMoviePipelineTextureStreamingMethod TextureStreaming; // 0x51(0x01)
	bool bUseLODZero; // 0x52(0x01)
	bool bDisableHLODs; // 0x53(0x01)
	bool bUseHighQualityShadows; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32_t ShadowDistanceScale; // 0x58(0x04)
	float ShadowRadiusThreshold; // 0x5c(0x04)
	bool bOverrideViewDistanceScale; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t ViewDistanceScale; // 0x64(0x04)
	bool bFlushGrassStreaming; // 0x68(0x01)
	char pad_69[0xa7]; // 0x69(0xa7)
};

// Class MovieRenderPipelineCore.MoviePipelineHighResSetting
// Size: 0x60 (Inherited: 0x48)
struct UMoviePipelineHighResSetting : UMoviePipelineSetting {
	int32_t TileCount; // 0x48(0x04)
	float TextureSharpnessBias; // 0x4c(0x04)
	float OverlapRatio; // 0x50(0x04)
	bool bOverrideSubSurfaceScattering; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32_t BurleySampleCount; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
// Size: 0x130 (Inherited: 0x108)
struct UMoviePipelineLinearExecutorBase : UMoviePipelineExecutorBase {
	struct UMoviePipelineQueue* Queue; // 0x108(0x08)
	struct UMoviePipeline* ActiveMoviePipeline; // 0x110(0x08)
	char pad_118[0x18]; // 0x118(0x18)
};

// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutor
// Size: 0x168 (Inherited: 0x130)
struct UMoviePipelineInProcessExecutor : UMoviePipelineLinearExecutorBase {
	bool bUseCurrentLevel; // 0x130(0x01)
	char pad_131[0x37]; // 0x131(0x37)
};

// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
// Size: 0x68 (Inherited: 0x38)
struct UMoviePipelineInProcessExecutorSettings : UDeveloperSettings {
	bool bCloseEditor; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString AdditionalCommandLineArguments; // 0x40(0x10)
	struct FString InheritedCommandLineArguments; // 0x50(0x10)
	int32_t InitialDelayFrameCount; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class MovieRenderPipelineCore.MoviePipelineMasterConfig
// Size: 0xb8 (Inherited: 0x50)
struct UMoviePipelineMasterConfig : UMoviePipelineConfigBase {
	struct TMap<struct FString, struct UMoviePipelineShotConfig*> PerShotConfigMapping; // 0x50(0x50)
	struct UMoviePipelineOutputSetting* OutputSetting; // 0xa0(0x08)
	struct TArray<struct UMoviePipelineSetting*> TransientSettings; // 0xa8(0x10)

	void InitializeTransientSettings(); // Function MovieRenderPipelineCore.MoviePipelineMasterConfig.InitializeTransientSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x1a00840
	struct TArray<struct UMoviePipelineSetting*> GetTransientSettings(); // Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetTransientSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a00780
	struct FFrameRate GetEffectiveFrameRate(struct ULevelSequence* InSequence); // Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetEffectiveFrameRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a00310
	struct TArray<struct UMoviePipelineSetting*> GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings); // Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetAllSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a001e0
};

// Class MovieRenderPipelineCore.MoviePipelineOutputSetting
// Size: 0xb0 (Inherited: 0x48)
struct UMoviePipelineOutputSetting : UMoviePipelineSetting {
	struct FDirectoryPath OutputDirectory; // 0x48(0x10)
	struct FString FileNameFormat; // 0x58(0x10)
	struct FIntPoint OutputResolution; // 0x68(0x08)
	bool bUseCustomFrameRate; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FFrameRate OutputFrameRate; // 0x74(0x08)
	char pad_7C[0x4]; // 0x7c(0x04)
	bool bOverrideExistingOutput; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32_t HandleFrameCount; // 0x84(0x04)
	int32_t OutputFrameStep; // 0x88(0x04)
	bool bUseCustomPlaybackRange; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	int32_t CustomStartFrame; // 0x90(0x04)
	int32_t CustomEndFrame; // 0x94(0x04)
	int32_t VersionNumber; // 0x98(0x04)
	bool bAutoVersion; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	int32_t ZeroPadFrameNumbers; // 0xa0(0x04)
	int32_t FrameNumberOffset; // 0xa4(0x04)
	bool bFlushDiskWritesPerShot; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
// Size: 0x120 (Inherited: 0x108)
struct UMoviePipelinePythonHostExecutor : UMoviePipelineExecutorBase {
	struct UMoviePipelinePythonHostExecutor* ExecutorClass; // 0x108(0x08)
	struct UMoviePipelineQueue* PipelineQueue; // 0x110(0x08)
	struct UWorld* LastLoadedWorld; // 0x118(0x08)

	void OnMapLoad(struct UWorld* InWorld); // Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad // (Native|Event|Public|BlueprintEvent) // @ game+0x1a008f0
	struct UWorld* GetLastLoadedWorld(); // Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a00460
	void ExecuteDelayed(struct UMoviePipelineQueue* InPipelineQueue); // Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed // (Native|Event|Public|BlueprintEvent) // @ game+0x1a00150
};

// Class MovieRenderPipelineCore.MoviePipelineExecutorShot
// Size: 0x138 (Inherited: 0x28)
struct UMoviePipelineExecutorShot : UObject {
	bool bEnabled; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString OuterName; // 0x30(0x10)
	struct FString InnerName; // 0x40(0x10)
	char pad_50[0xa0]; // 0x50(0xa0)
	float Progress; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FString StatusMessage; // 0xf8(0x10)
	struct UMoviePipelineShotConfig* ShotOverrideConfig; // 0x108(0x08)
	struct TSoftObjectPtr<UMoviePipelineShotConfig> ShotOverridePresetOrigin; // 0x110(0x28)

	bool ShouldRender(); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a01080
	void SetStatusProgress(float InProgress); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a00ff0
	void SetStatusMessage(struct FString InStatus); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a00f50
	void SetShotOverridePresetOrigin(struct UMoviePipelineShotConfig* InPreset); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin // (Final|Native|Public|BlueprintCallable) // @ game+0x1a00ec0
	void SetShotOverrideConfiguration(struct UMoviePipelineShotConfig* InPreset); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration // (Final|Native|Public|BlueprintCallable) // @ game+0x1a00e30
	float GetStatusProgress(); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a00740
	struct FString GetStatusMessage(); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19fb980
	struct UMoviePipelineShotConfig* GetShotOverridePresetOrigin(); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a005a0
	struct UMoviePipelineShotConfig* GetShotOverrideConfiguration(); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a00580
	struct UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(struct UMoviePipelineShotConfig* InConfigType); // Function MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig // (Final|Native|Public|BlueprintCallable) // @ game+0x19ffb30
};

// Class MovieRenderPipelineCore.MoviePipelineExecutorJob
// Size: 0xe0 (Inherited: 0x28)
struct UMoviePipelineExecutorJob : UObject {
	struct FString JobName; // 0x28(0x10)
	struct FSoftObjectPath Sequence; // 0x38(0x18)
	struct FSoftObjectPath Map; // 0x50(0x18)
	struct FString Author; // 0x68(0x10)
	struct TArray<struct UMoviePipelineExecutorShot*> ShotInfo; // 0x78(0x10)
	struct FString UserData; // 0x88(0x10)
	struct FString StatusMessage; // 0x98(0x10)
	float StatusProgress; // 0xa8(0x04)
	bool bIsConsumed; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct UMoviePipelineMasterConfig* Configuration; // 0xb0(0x08)
	struct TSoftObjectPtr<UMoviePipelineMasterConfig> PresetOrigin; // 0xb8(0x28)

	void SetStatusProgress(float InProgress); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a00ff0
	void SetStatusMessage(struct FString InStatus); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a00f50
	void SetSequence(struct FSoftObjectPath InSequence); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1a00d30
	void SetPresetOrigin(struct UMoviePipelineMasterConfig* InPreset); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin // (Final|Native|Public|BlueprintCallable) // @ game+0x1a00ca0
	void SetConsumed(bool bInConsumed); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a00b40
	void SetConfiguration(struct UMoviePipelineMasterConfig* InPreset); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration // (Final|Native|Public|BlueprintCallable) // @ game+0x1a00ab0
	void OnDuplicated(); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.OnDuplicated // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a008d0
	bool IsConsumed(); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a00860
	float GetStatusProgress(); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a00700
	struct FString GetStatusMessage(); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a00680
	struct UMoviePipelineMasterConfig* GetPresetOrigin(); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a00480
	struct UMoviePipelineMasterConfig* GetConfiguration(); // Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19fb020
};

// Class MovieRenderPipelineCore.MoviePipelineQueue
// Size: 0x40 (Inherited: 0x28)
struct UMoviePipelineQueue : UObject {
	struct TArray<struct UMoviePipelineExecutorJob*> Jobs; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)

	void SetJobIndex(struct UMoviePipelineExecutorJob* InJob, int32_t Index); // Function MovieRenderPipelineCore.MoviePipelineQueue.SetJobIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x1a00bd0
	struct TArray<struct UMoviePipelineExecutorJob*> GetJobs(); // Function MovieRenderPipelineCore.MoviePipelineQueue.GetJobs // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a003a0
	struct UMoviePipelineExecutorJob* DuplicateJob(struct UMoviePipelineExecutorJob* InJob); // Function MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob // (Final|Native|Public|BlueprintCallable) // @ game+0x1a000b0
	void DeleteJob(struct UMoviePipelineExecutorJob* InJob); // Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob // (Final|Native|Public|BlueprintCallable) // @ game+0x1a00020
	void DeleteAllJobs(); // Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteAllJobs // (Final|Native|Public|BlueprintCallable) // @ game+0x1a00000
	void CopyFrom(struct UMoviePipelineQueue* InQueue); // Function MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom // (Final|Native|Public|BlueprintCallable) // @ game+0x19fff70
	struct UMoviePipelineExecutorJob* AllocateNewJob(struct UMoviePipelineExecutorJob* InJobType); // Function MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob // (Final|Native|Public|BlueprintCallable) // @ game+0x19ffa90
};

// Class MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
// Size: 0x40 (Inherited: 0x30)
struct UMoviePipelineQueueEngineSubsystem : UEngineSubsystem {
	struct UMoviePipelineExecutorBase* ActiveExecutor; // 0x30(0x08)
	struct UMoviePipelineQueue* CurrentQueue; // 0x38(0x08)

	void RenderQueueWithExecutorInstance(struct UMoviePipelineExecutorBase* InExecutor); // Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x1a00a20
	struct UMoviePipelineExecutorBase* RenderQueueWithExecutor(struct UMoviePipelineExecutorBase* InExecutorType); // Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor // (Final|Native|Public|BlueprintCallable) // @ game+0x1a00980
	bool IsRendering(); // Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a00890
	struct UMoviePipelineQueue* GetQueue(); // Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a00560
	struct UMoviePipelineExecutorBase* GetActiveExecutor(); // Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10123d0
};

// Class MovieRenderPipelineCore.MoviePipelineRenderPass
// Size: 0x48 (Inherited: 0x48)
struct UMoviePipelineRenderPass : UMoviePipelineSetting {
};

// Class MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase
// Size: 0x68 (Inherited: 0x48)
struct UMoviePipelineSetting_BlueprintBase : UMoviePipelineSetting {
	struct FText CategoryText; // 0x48(0x18)
	bool bIsValidOnMaster; // 0x60(0x01)
	bool bIsValidOnShots; // 0x61(0x01)
	bool bCanBeDisabled; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)

	void ReceiveTeardownForPipelineImpl(struct UMoviePipeline* InPipeline); // Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveTeardownForPipelineImpl // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void ReceiveSetupForPipelineImpl(struct UMoviePipeline* InPipeline); // Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveSetupForPipelineImpl // (Event|Public|BlueprintEvent) // @ game+0x2552560
	struct FMoviePipelineFormatArgs ReceiveGetFormatArguments(struct FMoviePipelineFormatArgs& InOutFormatArgs); // Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveGetFormatArguments // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x1a036b0
	void OnEngineTickBeginFrame(); // Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.OnEngineTickBeginFrame // (Event|Public|BlueprintEvent) // @ game+0x2552560
};

// Class MovieRenderPipelineCore.MoviePipelineShotConfig
// Size: 0x50 (Inherited: 0x50)
struct UMoviePipelineShotConfig : UMoviePipelineConfigBase {
};

// Class MovieRenderPipelineCore.MoviePipelineVideoOutputBase
// Size: 0x88 (Inherited: 0x48)
struct UMoviePipelineVideoOutputBase : UMoviePipelineOutputBase {
	char pad_48[0x40]; // 0x48(0x40)
};

// Class MovieRenderPipelineCore.MoviePipelineViewFamilySetting
// Size: 0x48 (Inherited: 0x48)
struct UMoviePipelineViewFamilySetting : UMoviePipelineSetting {
};

// Class MovieRenderPipelineCore.MovieRenderDebugWidget
// Size: 0x290 (Inherited: 0x290)
struct UMovieRenderDebugWidget : UUserWidget {

	void OnInitializedForPipeline(struct UMoviePipeline* ForPipeline); // Function MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline // (Event|Public|BlueprintEvent) // @ game+0x2552560
};

