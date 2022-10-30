// ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
// Size: 0x5a0 (Inherited: 0x08)
struct FWidgetCarouselNavigationButtonStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FButtonStyle InnerButtonStyle; // 0x10(0x3f0)
	struct FSlateBrush NavigationButtonLeftImage; // 0x400(0xd0)
	struct FSlateBrush NavigationButtonRightImage; // 0x4d0(0xd0)
};

// ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
// Size: 0xcb0 (Inherited: 0x08)
struct FWidgetCarouselNavigationBarStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush HighlightBrush; // 0x10(0xd0)
	struct FButtonStyle LeftButtonStyle; // 0xe0(0x3f0)
	struct FButtonStyle CenterButtonStyle; // 0x4d0(0x3f0)
	struct FButtonStyle RightButtonStyle; // 0x8c0(0x3f0)
};

