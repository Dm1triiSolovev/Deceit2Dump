// Class AdvancedWidgets.RadialSlider
// Size: 0x7b0 (Inherited: 0x128)
struct URadialSlider : UWidget {
	float Value; // 0x128(0x04)
	struct FDelegate ValueDelegate; // 0x12c(0x10)
	bool bUseCustomDefaultValue; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	float CustomDefaultValue; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct FRuntimeFloatCurve SliderRange; // 0x148(0x88)
	struct TArray<float> ValueTags; // 0x1d0(0x10)
	float SliderHandleStartAngle; // 0x1e0(0x04)
	float SliderHandleEndAngle; // 0x1e4(0x04)
	float AngularOffset; // 0x1e8(0x04)
	char pad_1EC[0x4]; // 0x1ec(0x04)
	struct FVector2D HandStartEndRatio; // 0x1f0(0x10)
	struct FSliderStyle WidgetStyle; // 0x200(0x500)
	struct FLinearColor SliderBarColor; // 0x700(0x10)
	struct FLinearColor SliderProgressColor; // 0x710(0x10)
	struct FLinearColor SliderHandleColor; // 0x720(0x10)
	struct FLinearColor CenterBackgroundColor; // 0x730(0x10)
	bool Locked; // 0x740(0x01)
	bool MouseUsesStep; // 0x741(0x01)
	bool RequiresControllerLock; // 0x742(0x01)
	char pad_743[0x1]; // 0x743(0x01)
	float StepSize; // 0x744(0x04)
	bool IsFocusable; // 0x748(0x01)
	bool UseVerticalDrag; // 0x749(0x01)
	bool ShowSliderHandle; // 0x74a(0x01)
	bool ShowSliderHand; // 0x74b(0x01)
	char pad_74C[0x4]; // 0x74c(0x04)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x750(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x760(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x770(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x780(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x790(0x10)
	char pad_7A0[0x10]; // 0x7a0(0x10)

	void SetValueTags(struct TArray<float>& InValueTags); // Function AdvancedWidgets.RadialSlider.SetValueTags // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4de3e80
	void SetValue(float InValue); // Function AdvancedWidgets.RadialSlider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x4de3e00
	void SetUseVerticalDrag(bool InUseVerticalDrag); // Function AdvancedWidgets.RadialSlider.SetUseVerticalDrag // (Final|Native|Public|BlueprintCallable) // @ game+0x4de3d70
	void SetStepSize(float InValue); // Function AdvancedWidgets.RadialSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x4de3cf0
	void SetSliderRange(struct FRuntimeFloatCurve& InSliderRange); // Function AdvancedWidgets.RadialSlider.SetSliderRange // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4de3be0
	void SetSliderProgressColor(struct FLinearColor InValue); // Function AdvancedWidgets.RadialSlider.SetSliderProgressColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4de3b50
	void SetSliderHandleStartAngle(float InValue); // Function AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x4de3ad0
	void SetSliderHandleEndAngle(float InValue); // Function AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x4de3a50
	void SetSliderHandleColor(struct FLinearColor InValue); // Function AdvancedWidgets.RadialSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4de39c0
	void SetSliderBarColor(struct FLinearColor InValue); // Function AdvancedWidgets.RadialSlider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4de3930
	void SetShowSliderHandle(bool InShowSliderHandle); // Function AdvancedWidgets.RadialSlider.SetShowSliderHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x4de38a0
	void SetShowSliderHand(bool InShowSliderHand); // Function AdvancedWidgets.RadialSlider.SetShowSliderHand // (Final|Native|Public|BlueprintCallable) // @ game+0x4de3810
	void SetLocked(bool InValue); // Function AdvancedWidgets.RadialSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x4de3780
	void SetHandStartEndRatio(struct FVector2D InValue); // Function AdvancedWidgets.RadialSlider.SetHandStartEndRatio // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4de36f0
	void SetCustomDefaultValue(float InValue); // Function AdvancedWidgets.RadialSlider.SetCustomDefaultValue // (Final|Native|Public|BlueprintCallable) // @ game+0x4de3670
	void SetCenterBackgroundColor(struct FLinearColor InValue); // Function AdvancedWidgets.RadialSlider.SetCenterBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4de35e0
	void SetAngularOffset(float InValue); // Function AdvancedWidgets.RadialSlider.SetAngularOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x4de3560
	float GetValue(); // Function AdvancedWidgets.RadialSlider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4de3530
	float GetNormalizedSliderHandlePosition(); // Function AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4de3500
	float GetCustomDefaultValue(); // Function AdvancedWidgets.RadialSlider.GetCustomDefaultValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4de34d0
};

