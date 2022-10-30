// Class AudioWidgets.AudioMeter
// Size: 0x6b0 (Inherited: 0x128)
struct UAudioMeter : UWidget {
	struct TArray<struct FMeterChannelInfo> MeterChannelInfo; // 0x128(0x10)
	struct FDelegate MeterChannelInfoDelegate; // 0x138(0x10)
	char pad_148[0x8]; // 0x148(0x08)
	struct FAudioMeterStyle WidgetStyle; // 0x150(0x4d0)
	enum class EOrientation Orientation; // 0x620(0x01)
	char pad_621[0x3]; // 0x621(0x03)
	struct FLinearColor BackgroundColor; // 0x624(0x10)
	struct FLinearColor MeterBackgroundColor; // 0x634(0x10)
	struct FLinearColor MeterValueColor; // 0x644(0x10)
	struct FLinearColor MeterPeakColor; // 0x654(0x10)
	struct FLinearColor MeterClippingColor; // 0x664(0x10)
	struct FLinearColor MeterScaleColor; // 0x674(0x10)
	struct FLinearColor MeterScaleLabelColor; // 0x684(0x10)
	char pad_694[0x1c]; // 0x694(0x1c)

	void SetMeterValueColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterValueColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x15cf900
	void SetMeterScaleLabelColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterScaleLabelColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x15cf870
	void SetMeterScaleColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterScaleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x15cf7e0
	void SetMeterPeakColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterPeakColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x15cf750
	void SetMeterClippingColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterClippingColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x15cf6c0
	void SetMeterChannelInfo(struct TArray<struct FMeterChannelInfo>& InMeterChannelInfo); // Function AudioWidgets.AudioMeter.SetMeterChannelInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x15cf610
	void SetMeterBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x15cf580
	void SetBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x15cf3d0
	struct TArray<struct FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature(); // DelegateFunction AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature // (Public|Delegate) // @ game+0x2552560
	struct TArray<struct FMeterChannelInfo> GetMeterChannelInfo(); // Function AudioWidgets.AudioMeter.GetMeterChannelInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x15cf2b0
};

// Class AudioWidgets.AudioRadialSlider
// Size: 0x340 (Inherited: 0x128)
struct UAudioRadialSlider : UWidget {
	float Value; // 0x128(0x04)
	struct FDelegate ValueDelegate; // 0x12c(0x10)
	enum class EAudioRadialSliderLayout WidgetLayout; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	struct FLinearColor CenterBackgroundColor; // 0x140(0x10)
	struct FLinearColor SliderProgressColor; // 0x150(0x10)
	struct FLinearColor SliderBarColor; // 0x160(0x10)
	struct FVector2D HandStartEndRatio; // 0x170(0x10)
	struct FText UnitsText; // 0x180(0x18)
	struct FLinearColor TextLabelBackgroundColor; // 0x198(0x10)
	bool ShowLabelOnlyOnHover; // 0x1a8(0x01)
	bool ShowUnitsText; // 0x1a9(0x01)
	bool IsUnitsTextReadOnly; // 0x1aa(0x01)
	bool IsValueTextReadOnly; // 0x1ab(0x01)
	float SliderThickness; // 0x1ac(0x04)
	struct FVector2D OutputRange; // 0x1b0(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x1c0(0x10)
	char pad_1D0[0x170]; // 0x1d0(0x170)

	void SetWidgetLayout(enum class EAudioRadialSliderLayout InLayout); // Function AudioWidgets.AudioRadialSlider.SetWidgetLayout // (Final|Native|Public|BlueprintCallable) // @ game+0x15d0580
	void SetValueTextReadOnly(bool bIsReadOnly); // Function AudioWidgets.AudioRadialSlider.SetValueTextReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x15d03d0
	void SetUnitsTextReadOnly(bool bIsReadOnly); // Function AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x15d02b0
	void SetUnitsText(struct FText Units); // Function AudioWidgets.AudioRadialSlider.SetUnitsText // (Final|Native|Public|BlueprintCallable) // @ game+0x15d00f0
	void SetTextLabelBackgroundColor(struct FSlateColor InColor); // Function AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor // (Final|Native|Public|BlueprintCallable) // @ game+0x15cffb0
	void SetSliderThickness(float InThickness); // Function AudioWidgets.AudioRadialSlider.SetSliderThickness // (Final|Native|Public|BlueprintCallable) // @ game+0x15cfea0
	void SetSliderProgressColor(struct FLinearColor InValue); // Function AudioWidgets.AudioRadialSlider.SetSliderProgressColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x15cfe10
	void SetSliderBarColor(struct FLinearColor InValue); // Function AudioWidgets.AudioRadialSlider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x15cfcf0
	void SetShowUnitsText(bool bShowUnitsText); // Function AudioWidgets.AudioRadialSlider.SetShowUnitsText // (Final|Native|Public|BlueprintCallable) // @ game+0x15cfb40
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover); // Function AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover // (Final|Native|Public|BlueprintCallable) // @ game+0x15cfa20
	void SetOutputRange(struct FVector2D InOutputRange); // Function AudioWidgets.AudioRadialSlider.SetOutputRange // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x15cf990
	void SetHandStartEndRatio(struct FVector2D InHandStartEndRatio); // Function AudioWidgets.AudioRadialSlider.SetHandStartEndRatio // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x15cf4f0
	void SetCenterBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x15cf460
};

// Class AudioWidgets.AudioVolumeRadialSlider
// Size: 0x340 (Inherited: 0x340)
struct UAudioVolumeRadialSlider : UAudioRadialSlider {
};

// Class AudioWidgets.AudioFrequencyRadialSlider
// Size: 0x340 (Inherited: 0x340)
struct UAudioFrequencyRadialSlider : UAudioRadialSlider {
};

// Class AudioWidgets.AudioSliderBase
// Size: 0x970 (Inherited: 0x128)
struct UAudioSliderBase : UWidget {
	float Value; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FText UnitsText; // 0x130(0x18)
	struct FLinearColor TextLabelBackgroundColor; // 0x148(0x10)
	struct FDelegate TextLabelBackgroundColorDelegate; // 0x158(0x10)
	bool ShowLabelOnlyOnHover; // 0x168(0x01)
	bool ShowUnitsText; // 0x169(0x01)
	bool IsUnitsTextReadOnly; // 0x16a(0x01)
	bool IsValueTextReadOnly; // 0x16b(0x01)
	struct FDelegate ValueDelegate; // 0x16c(0x10)
	struct FLinearColor SliderBackgroundColor; // 0x17c(0x10)
	struct FDelegate SliderBackgroundColorDelegate; // 0x18c(0x10)
	struct FLinearColor SliderBarColor; // 0x19c(0x10)
	struct FDelegate SliderBarColorDelegate; // 0x1ac(0x10)
	struct FLinearColor SliderThumbColor; // 0x1bc(0x10)
	struct FDelegate SliderThumbColorDelegate; // 0x1cc(0x10)
	struct FLinearColor WidgetBackgroundColor; // 0x1dc(0x10)
	struct FDelegate WidgetBackgroundColorDelegate; // 0x1ec(0x10)
	enum class EOrientation Orientation; // 0x1fc(0x01)
	char pad_1FD[0x3]; // 0x1fd(0x03)
	struct FMulticastInlineDelegate OnValueChanged; // 0x200(0x10)
	char pad_210[0x760]; // 0x210(0x760)

	void SetWidgetBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x15d04f0
	void SetValueTextReadOnly(bool bIsReadOnly); // Function AudioWidgets.AudioSliderBase.SetValueTextReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x15d0460
	void SetUnitsTextReadOnly(bool bIsReadOnly); // Function AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x15d0340
	void SetUnitsText(struct FText Units); // Function AudioWidgets.AudioSliderBase.SetUnitsText // (Final|Native|Public|BlueprintCallable) // @ game+0x15d01d0
	void SetTextLabelBackgroundColor(struct FSlateColor InColor); // Function AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor // (Final|Native|Public|BlueprintCallable) // @ game+0x15d0050
	void SetSliderThumbColor(struct FLinearColor InValue); // Function AudioWidgets.AudioSliderBase.SetSliderThumbColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x15cff20
	void SetSliderBarColor(struct FLinearColor InValue); // Function AudioWidgets.AudioSliderBase.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x15cfd80
	void SetSliderBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioSliderBase.SetSliderBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x15cfc60
	void SetShowUnitsText(bool bShowUnitsText); // Function AudioWidgets.AudioSliderBase.SetShowUnitsText // (Final|Native|Public|BlueprintCallable) // @ game+0x15cfbd0
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover); // Function AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover // (Final|Native|Public|BlueprintCallable) // @ game+0x15cfab0
	float GetOutputValue(float LinValue); // Function AudioWidgets.AudioSliderBase.GetOutputValue // (Final|Native|Public|BlueprintCallable) // @ game+0x15cf330
	float GetLinValue(float OutputValue); // Function AudioWidgets.AudioSliderBase.GetLinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x15cf210
};

// Class AudioWidgets.AudioSlider
// Size: 0x980 (Inherited: 0x970)
struct UAudioSlider : UAudioSliderBase {
	struct TWeakObjectPtr<struct UCurveFloat> LinToOutputCurve; // 0x970(0x08)
	struct TWeakObjectPtr<struct UCurveFloat> OutputToLinCurve; // 0x978(0x08)
};

// Class AudioWidgets.AudioVolumeSlider
// Size: 0x980 (Inherited: 0x980)
struct UAudioVolumeSlider : UAudioSlider {
};

// Class AudioWidgets.AudioFrequencySlider
// Size: 0x980 (Inherited: 0x970)
struct UAudioFrequencySlider : UAudioSliderBase {
	struct FVector2D OutputRange; // 0x970(0x10)
};

