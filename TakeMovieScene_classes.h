// Class TakeMovieScene.MovieSceneTakeSection
// Size: 0x618 (Inherited: 0xe8)
struct UMovieSceneTakeSection : UMovieSceneSection {
	struct FMovieSceneIntegerChannel HoursCurve; // 0xe8(0xd8)
	struct FMovieSceneIntegerChannel MinutesCurve; // 0x1c0(0xd8)
	struct FMovieSceneIntegerChannel SecondsCurve; // 0x298(0xd8)
	struct FMovieSceneIntegerChannel FramesCurve; // 0x370(0xd8)
	struct FMovieSceneFloatChannel SubFramesCurve; // 0x448(0xe8)
	struct FMovieSceneStringChannel Slate; // 0x530(0xe8)
};

// Class TakeMovieScene.MovieSceneTakeSettings
// Size: 0x88 (Inherited: 0x28)
struct UMovieSceneTakeSettings : UObject {
	struct FString HoursName; // 0x28(0x10)
	struct FString MinutesName; // 0x38(0x10)
	struct FString SecondsName; // 0x48(0x10)
	struct FString FramesName; // 0x58(0x10)
	struct FString SubFramesName; // 0x68(0x10)
	struct FString SlateName; // 0x78(0x10)
};

// Class TakeMovieScene.MovieSceneTakeTrack
// Size: 0xa0 (Inherited: 0x90)
struct UMovieSceneTakeTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x90(0x10)
};

