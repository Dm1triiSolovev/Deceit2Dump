// Class GameSubtitles.MediaSubtitlesPlayer
// Size: 0x48 (Inherited: 0x28)
struct UMediaSubtitlesPlayer : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UOverlays* SourceSubtitles; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)

	void Stop(); // Function GameSubtitles.MediaSubtitlesPlayer.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0xff9c00
	void SetSubtitles(struct UOverlays* Subtitles); // Function GameSubtitles.MediaSubtitlesPlayer.SetSubtitles // (Final|Native|Public|BlueprintCallable) // @ game+0xff9b70
	void Play(); // Function GameSubtitles.MediaSubtitlesPlayer.Play // (Final|Native|Public|BlueprintCallable) // @ game+0xff9b50
	void BindToMediaPlayer(struct UMediaPlayer* InMediaPlayer); // Function GameSubtitles.MediaSubtitlesPlayer.BindToMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0xff9a90
};

// Class GameSubtitles.SubtitleDisplay
// Size: 0x580 (Inherited: 0x128)
struct USubtitleDisplay : UWidget {
	struct FSubtitleFormat Format; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct USubtitleDisplayOptions* Options; // 0x130(0x08)
	float WrapTextAt; // 0x138(0x04)
	bool bPreviewMode; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	struct FText PreviewText; // 0x140(0x18)
	char pad_158[0x8]; // 0x158(0x08)
	struct FTextBlockStyle GeneratedStyle; // 0x160(0x340)
	struct FSlateBrush GeneratedBackgroundBorder; // 0x4a0(0xd0)
	char pad_570[0x10]; // 0x570(0x10)

	bool HasSubtitles(); // Function GameSubtitles.SubtitleDisplay.HasSubtitles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xff9b20
};

// Class GameSubtitles.SubtitleDisplayOptions
// Size: 0x1b0 (Inherited: 0x30)
struct USubtitleDisplayOptions : UDataAsset {
	struct FSlateFontInfo Font; // 0x30(0x58)
	int32_t DisplayTextSizes[0x5]; // 0x88(0x14)
	struct FLinearColor DisplayTextColors[0x2]; // 0x9c(0x20)
	float DisplayBorderSize[0x3]; // 0xbc(0x0c)
	float DisplayBackgroundOpacity[0x5]; // 0xc8(0x14)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FSlateBrush BackgroundBrush; // 0xe0(0xd0)
};

// Class GameSubtitles.SubtitleDisplaySubsystem
// Size: 0x50 (Inherited: 0x30)
struct USubtitleDisplaySubsystem : UGameInstanceSubsystem {
	char pad_30[0x18]; // 0x30(0x18)
	struct FSubtitleFormat SubtitleFormat; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

