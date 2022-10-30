// Class VolumeSequencer.MovieSceneVolumeSection
// Size: 0x108 (Inherited: 0xe8)
struct UMovieSceneVolumeSection : UMovieSceneSection {
	struct FMovieSceneVolumeParams Params; // 0xe8(0x20)
};

// Class VolumeSequencer.MovieSceneVolumeTrack
// Size: 0xa8 (Inherited: 0x90)
struct UMovieSceneVolumeTrack : UMovieSceneNameableTrack {
	char pad_90[0x8]; // 0x90(0x08)
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x98(0x10)
};

