// ScriptStruct VolumeSequencer.MovieSceneVolumeParams
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneVolumeParams {
	struct UObject* Volume; // 0x00(0x08)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x08(0x04)
	struct FFrameNumber StartFrameOffset; // 0x0c(0x04)
	struct FFrameNumber EndFrameOffset; // 0x10(0x04)
	float PlayRate; // 0x14(0x04)
	char bReverse : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	uint32_t TrackHandlerId; // 0x1c(0x04)
};

// ScriptStruct VolumeSequencer.MovieSceneVolumeSectionTemplateParameters
// Size: 0x28 (Inherited: 0x20)
struct FMovieSceneVolumeSectionTemplateParameters : FMovieSceneVolumeParams {
	struct FFrameNumber SectionStartTime; // 0x20(0x04)
	struct FFrameNumber SectionEndTime; // 0x24(0x04)
};

// ScriptStruct VolumeSequencer.MovieSceneVolumeSectionTemplate
// Size: 0x48 (Inherited: 0x20)
struct FMovieSceneVolumeSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneVolumeSectionTemplateParameters Params; // 0x20(0x28)
};

