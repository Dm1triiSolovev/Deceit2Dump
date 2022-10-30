// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8 {
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3
};

// Enum SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8 {
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4,
	EWidgetClipping_MAX = 5
};

// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8 {
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	Vector = 3,
	ESlateBrushImageType_MAX = 4
};

// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8 {
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4
};

// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8 {
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4
};

// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8 {
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	RoundedBox = 4,
	ESlateBrushDrawType_MAX = 5
};

// Enum SlateCore.ESlateBrushRoundingType
enum class ESlateBrushRoundingType : uint8 {
	FixedRadius = 0,
	HalfHeightRadius = 1,
	ESlateBrushRoundingType_MAX = 2
};

// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8 {
	UseColor_Specified = 0,
	UseColor_ColorTable = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_UseStyle = 4,
	UseColor_MAX = 5
};

// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8 {
	Escape = 0,
	Explicit = 1,
	Wrap = 2,
	Stop = 3,
	Custom = 4,
	CustomBoundary = 5,
	Invalid = 6,
	EUINavigationRule_MAX = 7
};

// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8 {
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Next = 4,
	Previous = 5,
	Num = 6,
	Invalid = 7,
	EUINavigation_MAX = 8
};

// Enum SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : uint8 {
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	EFlowDirectionPreference_MAX = 4
};

// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8 {
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4
};

// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8 {
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4
};

// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8 {
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4
};

// Enum SlateCore.ETextOverflowPolicy
enum class ETextOverflowPolicy : uint8 {
	Clip = 0,
	Ellipsis = 1,
	ETextOverflowPolicy_MAX = 2
};

// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8 {
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	ETextShapingMethod_MAX = 3
};

// Enum SlateCore.ETextTransformPolicy
enum class ETextTransformPolicy : uint8 {
	None = 0,
	ToLower = 1,
	ToUpper = 2,
	ETextTransformPolicy_MAX = 3
};

// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8 {
	MenuPlacement_BelowAnchor = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox = 3,
	MenuPlacement_ComboBoxRight = 4,
	MenuPlacement_MenuRight = 5,
	MenuPlacement_AboveAnchor = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft = 9,
	MenuPlacement_Center = 10,
	MenuPlacement_RightLeftCenter = 11,
	MenuPlacement_MatchBottomLeft = 12,
	MenuPlacement_MAX = 13
};

// Enum SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8 {
	NormalVision = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	EColorVisionDeficiency_MAX = 4
};

// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8 {
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4
};

// Enum SlateCore.EOrientation
enum class EOrientation : uint8 {
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2
};

// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8 {
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5
};

// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8 {
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	EFontLoadingPolicy_MAX = 3
};

// Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8 {
	Metrics = 0,
	BoundingBox = 1,
	EFontLayoutMethod_MAX = 2
};

// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8 {
	Mouse = 0,
	Navigation = 1,
	SetDirectly = 2,
	Cleared = 3,
	OtherWidgetLostFocus = 4,
	WindowActivate = 5,
	EFocusCause_MAX = 6
};

// Enum SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8 {
	MouseMove = 0,
	MouseEnter = 1,
	MouseLeave = 2,
	PreviewMouseButtonDown = 3,
	MouseButtonDown = 4,
	MouseButtonUp = 5,
	MouseButtonDoubleClick = 6,
	MouseWheel = 7,
	TouchStart = 8,
	TouchEnd = 9,
	TouchForceChanged = 10,
	TouchFirstMove = 11,
	TouchMoved = 12,
	DragDetected = 13,
	DragEnter = 14,
	DragLeave = 15,
	DragOver = 16,
	DragDrop = 17,
	DropMessage = 18,
	PreviewKeyDown = 19,
	KeyDown = 20,
	KeyUp = 21,
	KeyChar = 22,
	AnalogInput = 23,
	TouchGesture = 24,
	MotionDetected = 25,
	MAX = 26
};

// Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8 {
	MouseCaptureGained = 0,
	MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2
};

// Enum SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8 {
	Unknown = 0,
	Explicit = 1,
	CustomDelegateBound = 2,
	CustomDelegateUnbound = 3,
	NextOrPrevious = 4,
	HitTestGrid = 5,
	ESlateDebuggingNavigationMethod_MAX = 6
};

// Enum SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8 {
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2,
	MAX = 3
};

// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8 {
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	EButtonClickMethod_MAX = 4
};

// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8 {
	DownAndUp = 0,
	Down = 1,
	PreciseTap = 2,
	EButtonTouchMethod_MAX = 3
};

// Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8 {
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	EButtonPressMethod_MAX = 3
};

// Enum SlateCore.EUINavigationAction
enum class EUINavigationAction : uint8 {
	Accept = 0,
	Back = 1,
	Num = 2,
	Invalid = 3,
	EUINavigationAction_MAX = 4
};

// Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8 {
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	ENavigationSource_MAX = 2
};

// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8 {
	Keyboard = 0,
	Controller = 1,
	User = 2,
	ENavigationGenesis_MAX = 3
};

// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8 {
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2
};

// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8 {
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	EConsumeMouseWheel_MAX = 3
};

// Enum SlateCore.ESlateParentWindowSearchMethod
enum class ESlateParentWindowSearchMethod : uint8 {
	ActiveWindow = 0,
	MainWindow = 1,
	ESlateParentWindowSearchMethod_MAX = 2
};

// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8 {
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2
};

// Enum SlateCore.EStyleColor
enum class EStyleColor : uint8 {
	Black = 0,
	Background = 1,
	Title = 2,
	WindowBorder = 3,
	Foldout = 4,
	Input = 5,
	InputOutline = 6,
	Recessed = 7,
	Panel = 8,
	Header = 9,
	Dropdown = 10,
	DropdownOutline = 11,
	Hover = 12,
	Hover2 = 13,
	White = 14,
	White25 = 15,
	Highlight = 16,
	Primary = 17,
	PrimaryHover = 18,
	PrimaryPress = 19,
	Secondary = 20,
	Foreground = 21,
	ForegroundHover = 22,
	ForegroundInverted = 23,
	ForegroundHeader = 24,
	Select = 25,
	SelectInactive = 26,
	SelectParent = 27,
	SelectHover = 28,
	Notifications = 29,
	AccentBlue = 30,
	AccentPurple = 31,
	AccentPink = 32,
	AccentRed = 33,
	AccentOrange = 34,
	AccentYellow = 35,
	AccentGreen = 36,
	AccentBrown = 37,
	AccentBlack = 38,
	AccentGray = 39,
	AccentWhite = 40,
	AccentFolder = 41,
	Warning = 42,
	Error = 43,
	Success = 44,
	User1 = 45,
	User2 = 46,
	User3 = 47,
	User4 = 48,
	User5 = 49,
	User6 = 50,
	User7 = 51,
	User8 = 52,
	User9 = 53,
	User10 = 54,
	User11 = 55,
	User12 = 56,
	User13 = 57,
	User14 = 58,
	User15 = 59,
	User16 = 60,
	MAX = 61
};

// ScriptStruct SlateCore.Geometry
// Size: 0x40 (Inherited: 0x00)
struct FGeometry {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct SlateCore.SlateBrush
// Size: 0xd0 (Inherited: 0x00)
struct FSlateBrush {
	char pad_0[0x10]; // 0x00(0x10)
	struct FVector2D ImageSize; // 0x10(0x10)
	struct FMargin Margin; // 0x20(0x10)
	struct FSlateColor TintColor; // 0x30(0x14)
	char pad_44[0xc]; // 0x44(0x0c)
	struct FSlateBrushOutlineSettings OutlineSettings; // 0x50(0x40)
	struct UObject* ResourceObject; // 0x90(0x08)
	struct FName ResourceName; // 0x98(0x08)
	struct FBox2f UVRegion; // 0xa0(0x14)
	enum class ESlateBrushDrawType DrawAs; // 0xb4(0x01)
	enum class ESlateBrushTileType Tiling; // 0xb5(0x01)
	enum class ESlateBrushMirrorType Mirroring; // 0xb6(0x01)
	enum class ESlateBrushImageType ImageType; // 0xb7(0x01)
	char pad_B8[0x10]; // 0xb8(0x10)
	char bIsDynamicallyLoaded : 1; // 0xc8(0x01)
	char bHasUObject : 1; // 0xc8(0x01)
	char pad_C8_2 : 6; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct SlateCore.SlateBrushOutlineSettings
// Size: 0x40 (Inherited: 0x00)
struct FSlateBrushOutlineSettings {
	struct FVector4 CornerRadii; // 0x00(0x20)
	struct FSlateColor Color; // 0x20(0x14)
	float Width; // 0x34(0x04)
	enum class ESlateBrushRoundingType RoundingType; // 0x38(0x01)
	bool bUseBrushTransparency; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct SlateCore.SlateColor
// Size: 0x14 (Inherited: 0x00)
struct FSlateColor {
	struct FLinearColor SpecifiedColor; // 0x00(0x10)
	enum class ESlateColorStylingMode ColorUseRule; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct SlateCore.Margin
// Size: 0x10 (Inherited: 0x00)
struct FMargin {
	float Left; // 0x00(0x04)
	float Top; // 0x04(0x04)
	float Right; // 0x08(0x04)
	float Bottom; // 0x0c(0x04)
};

// ScriptStruct SlateCore.InputEvent
// Size: 0x18 (Inherited: 0x00)
struct FInputEvent {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct SlateCore.PointerEvent
// Size: 0x90 (Inherited: 0x18)
struct FPointerEvent : FInputEvent {
	char pad_18[0x78]; // 0x18(0x78)
};

// ScriptStruct SlateCore.SlateWidgetStyle
// Size: 0x08 (Inherited: 0x00)
struct FSlateWidgetStyle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SlateCore.TableRowStyle
// Size: 0xd50 (Inherited: 0x08)
struct FTableRowStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush SelectorFocusedBrush; // 0x10(0xd0)
	struct FSlateBrush ActiveHoveredBrush; // 0xe0(0xd0)
	struct FSlateBrush ActiveBrush; // 0x1b0(0xd0)
	struct FSlateBrush InactiveHoveredBrush; // 0x280(0xd0)
	struct FSlateBrush InactiveBrush; // 0x350(0xd0)
	bool bUseParentRowBrush; // 0x420(0x01)
	char pad_421[0xf]; // 0x421(0x0f)
	struct FSlateBrush ParentRowBackgroundBrush; // 0x430(0xd0)
	struct FSlateBrush ParentRowBackgroundHoveredBrush; // 0x500(0xd0)
	struct FSlateBrush EvenRowBackgroundHoveredBrush; // 0x5d0(0xd0)
	struct FSlateBrush EvenRowBackgroundBrush; // 0x6a0(0xd0)
	struct FSlateBrush OddRowBackgroundHoveredBrush; // 0x770(0xd0)
	struct FSlateBrush OddRowBackgroundBrush; // 0x840(0xd0)
	struct FSlateColor TextColor; // 0x910(0x14)
	struct FSlateColor SelectedTextColor; // 0x924(0x14)
	char pad_938[0x8]; // 0x938(0x08)
	struct FSlateBrush DropIndicator_Above; // 0x940(0xd0)
	struct FSlateBrush DropIndicator_Onto; // 0xa10(0xd0)
	struct FSlateBrush DropIndicator_Below; // 0xae0(0xd0)
	struct FSlateBrush ActiveHighlightedBrush; // 0xbb0(0xd0)
	struct FSlateBrush InactiveHighlightedBrush; // 0xc80(0xd0)
};

// ScriptStruct SlateCore.ComboBoxStyle
// Size: 0x660 (Inherited: 0x08)
struct FComboBoxStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FComboButtonStyle ComboButtonStyle; // 0x10(0x600)
	struct FSlateSound PressedSlateSound; // 0x610(0x18)
	struct FSlateSound SelectionChangeSlateSound; // 0x628(0x18)
	struct FMargin ContentPadding; // 0x640(0x10)
	struct FMargin MenuRowPadding; // 0x650(0x10)
};

// ScriptStruct SlateCore.SlateSound
// Size: 0x18 (Inherited: 0x00)
struct FSlateSound {
	struct UObject* ResourceObject; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct SlateCore.ComboButtonStyle
// Size: 0x600 (Inherited: 0x08)
struct FComboButtonStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FButtonStyle ButtonStyle; // 0x10(0x3f0)
	struct FSlateBrush DownArrowImage; // 0x400(0xd0)
	struct FVector2D ShadowOffset; // 0x4d0(0x10)
	struct FLinearColor ShadowColorAndOpacity; // 0x4e0(0x10)
	struct FSlateBrush MenuBorderBrush; // 0x4f0(0xd0)
	struct FMargin MenuBorderPadding; // 0x5c0(0x10)
	struct FMargin ContentPadding; // 0x5d0(0x10)
	struct FMargin DownArrowPadding; // 0x5e0(0x10)
	enum class EVerticalAlignment DownArrowAlign; // 0x5f0(0x01)
	char pad_5F1[0xf]; // 0x5f1(0x0f)
};

// ScriptStruct SlateCore.ButtonStyle
// Size: 0x3f0 (Inherited: 0x08)
struct FButtonStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush Normal; // 0x10(0xd0)
	struct FSlateBrush Hovered; // 0xe0(0xd0)
	struct FSlateBrush Pressed; // 0x1b0(0xd0)
	struct FSlateBrush Disabled; // 0x280(0xd0)
	struct FSlateColor NormalForeground; // 0x350(0x14)
	struct FSlateColor HoveredForeground; // 0x364(0x14)
	struct FSlateColor PressedForeground; // 0x378(0x14)
	struct FSlateColor DisabledForeground; // 0x38c(0x14)
	struct FMargin NormalPadding; // 0x3a0(0x10)
	struct FMargin PressedPadding; // 0x3b0(0x10)
	struct FSlateSound PressedSlateSound; // 0x3c0(0x18)
	struct FSlateSound HoveredSlateSound; // 0x3d8(0x18)
};

// ScriptStruct SlateCore.SlateFontInfo
// Size: 0x58 (Inherited: 0x00)
struct FSlateFontInfo {
	struct UObject* FontObject; // 0x00(0x08)
	struct UObject* FontMaterial; // 0x08(0x08)
	struct FFontOutlineSettings OutlineSettings; // 0x10(0x20)
	char pad_30[0x10]; // 0x30(0x10)
	struct FName TypefaceFontName; // 0x40(0x08)
	int32_t Size; // 0x48(0x04)
	int32_t LetterSpacing; // 0x4c(0x04)
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct SlateCore.FontOutlineSettings
// Size: 0x20 (Inherited: 0x00)
struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x00(0x04)
	bool bSeparateFillAlpha; // 0x04(0x01)
	bool bApplyOutlineToDropShadows; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct UObject* OutlineMaterial; // 0x08(0x08)
	struct FLinearColor OutlineColor; // 0x10(0x10)
};

// ScriptStruct SlateCore.EditableTextStyle
// Size: 0x2f0 (Inherited: 0x08)
struct FEditableTextStyle : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x08(0x58)
	struct FSlateColor ColorAndOpacity; // 0x60(0x14)
	char pad_74[0xc]; // 0x74(0x0c)
	struct FSlateBrush BackgroundImageSelected; // 0x80(0xd0)
	struct FSlateBrush BackgroundImageComposing; // 0x150(0xd0)
	struct FSlateBrush CaretImage; // 0x220(0xd0)
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// Size: 0xba0 (Inherited: 0x08)
struct FEditableTextBoxStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush BackgroundImageNormal; // 0x10(0xd0)
	struct FSlateBrush BackgroundImageHovered; // 0xe0(0xd0)
	struct FSlateBrush BackgroundImageFocused; // 0x1b0(0xd0)
	struct FSlateBrush BackgroundImageReadOnly; // 0x280(0xd0)
	struct FMargin Padding; // 0x350(0x10)
	struct FSlateFontInfo Font; // 0x360(0x58)
	struct FSlateColor ForegroundColor; // 0x3b8(0x14)
	struct FSlateColor BackgroundColor; // 0x3cc(0x14)
	struct FSlateColor ReadOnlyForegroundColor; // 0x3e0(0x14)
	struct FSlateColor FocusedForegroundColor; // 0x3f4(0x14)
	struct FMargin HScrollBarPadding; // 0x408(0x10)
	struct FMargin VScrollBarPadding; // 0x418(0x10)
	char pad_428[0x8]; // 0x428(0x08)
	struct FScrollBarStyle ScrollBarStyle; // 0x430(0x770)
};

// ScriptStruct SlateCore.ScrollBarStyle
// Size: 0x770 (Inherited: 0x08)
struct FScrollBarStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush HorizontalBackgroundImage; // 0x10(0xd0)
	struct FSlateBrush VerticalBackgroundImage; // 0xe0(0xd0)
	struct FSlateBrush VerticalTopSlotImage; // 0x1b0(0xd0)
	struct FSlateBrush HorizontalTopSlotImage; // 0x280(0xd0)
	struct FSlateBrush VerticalBottomSlotImage; // 0x350(0xd0)
	struct FSlateBrush HorizontalBottomSlotImage; // 0x420(0xd0)
	struct FSlateBrush NormalThumbImage; // 0x4f0(0xd0)
	struct FSlateBrush HoveredThumbImage; // 0x5c0(0xd0)
	struct FSlateBrush DraggedThumbImage; // 0x690(0xd0)
	float Thickness; // 0x760(0x04)
	char pad_764[0xc]; // 0x764(0x0c)
};

// ScriptStruct SlateCore.TextBlockStyle
// Size: 0x340 (Inherited: 0x08)
struct FTextBlockStyle : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x08(0x58)
	struct FSlateColor ColorAndOpacity; // 0x60(0x14)
	char pad_74[0x4]; // 0x74(0x04)
	struct FVector2D ShadowOffset; // 0x78(0x10)
	struct FLinearColor ShadowColorAndOpacity; // 0x88(0x10)
	struct FSlateColor SelectedBackgroundColor; // 0x98(0x14)
	struct FSlateColor HighlightColor; // 0xac(0x14)
	struct FSlateBrush HighlightShape; // 0xc0(0xd0)
	struct FSlateBrush StrikeBrush; // 0x190(0xd0)
	struct FSlateBrush UnderlineBrush; // 0x260(0xd0)
	enum class ETextTransformPolicy TransformPolicy; // 0x330(0x01)
	enum class ETextOverflowPolicy OverflowPolicy; // 0x331(0x01)
	char pad_332[0xe]; // 0x332(0x0e)
};

// ScriptStruct SlateCore.SpinBoxStyle
// Size: 0x600 (Inherited: 0x08)
struct FSpinBoxStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush BackgroundBrush; // 0x10(0xd0)
	struct FSlateBrush ActiveBackgroundBrush; // 0xe0(0xd0)
	struct FSlateBrush HoveredBackgroundBrush; // 0x1b0(0xd0)
	struct FSlateBrush ActiveFillBrush; // 0x280(0xd0)
	struct FSlateBrush HoveredFillBrush; // 0x350(0xd0)
	struct FSlateBrush InactiveFillBrush; // 0x420(0xd0)
	struct FSlateBrush ArrowsImage; // 0x4f0(0xd0)
	struct FSlateColor ForegroundColor; // 0x5c0(0x14)
	struct FMargin TextPadding; // 0x5d4(0x10)
	struct FMargin InsetPadding; // 0x5e4(0x10)
	char pad_5F4[0xc]; // 0x5f4(0x0c)
};

// ScriptStruct SlateCore.CharacterEvent
// Size: 0x20 (Inherited: 0x18)
struct FCharacterEvent : FInputEvent {
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct SlateCore.KeyEvent
// Size: 0x38 (Inherited: 0x18)
struct FKeyEvent : FInputEvent {
	char pad_18[0x20]; // 0x18(0x20)
};

// ScriptStruct SlateCore.NavigationEvent
// Size: 0x20 (Inherited: 0x18)
struct FNavigationEvent : FInputEvent {
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct SlateCore.AnalogInputEvent
// Size: 0x40 (Inherited: 0x38)
struct FAnalogInputEvent : FKeyEvent {
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct SlateCore.FocusEvent
// Size: 0x08 (Inherited: 0x00)
struct FFocusEvent {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SlateCore.MotionEvent
// Size: 0x78 (Inherited: 0x18)
struct FMotionEvent : FInputEvent {
	char pad_18[0x60]; // 0x18(0x60)
};

// ScriptStruct SlateCore.SliderStyle
// Size: 0x500 (Inherited: 0x08)
struct FSliderStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush NormalBarImage; // 0x10(0xd0)
	struct FSlateBrush HoveredBarImage; // 0xe0(0xd0)
	struct FSlateBrush DisabledBarImage; // 0x1b0(0xd0)
	struct FSlateBrush NormalThumbImage; // 0x280(0xd0)
	struct FSlateBrush HoveredThumbImage; // 0x350(0xd0)
	struct FSlateBrush DisabledThumbImage; // 0x420(0xd0)
	float BarThickness; // 0x4f0(0x04)
	char pad_4F4[0xc]; // 0x4f4(0x0c)
};

// ScriptStruct SlateCore.FontData
// Size: 0x28 (Inherited: 0x00)
struct FFontData {
	struct FString FontFilename; // 0x00(0x10)
	char pad_10[0x4]; // 0x10(0x04)
	enum class EFontHinting Hinting; // 0x14(0x01)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	int32_t SubFaceIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UObject* FontFaceAsset; // 0x20(0x08)
};

// ScriptStruct SlateCore.TypefaceEntry
// Size: 0x30 (Inherited: 0x00)
struct FTypefaceEntry {
	struct FName Name; // 0x00(0x08)
	struct FFontData Font; // 0x08(0x28)
};

// ScriptStruct SlateCore.Typeface
// Size: 0x10 (Inherited: 0x00)
struct FTypeface {
	struct TArray<struct FTypefaceEntry> Fonts; // 0x00(0x10)
};

// ScriptStruct SlateCore.CompositeFallbackFont
// Size: 0x18 (Inherited: 0x00)
struct FCompositeFallbackFont {
	struct FTypeface Typeface; // 0x00(0x10)
	float ScalingFactor; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct SlateCore.CompositeSubFont
// Size: 0x38 (Inherited: 0x18)
struct FCompositeSubFont : FCompositeFallbackFont {
	struct TArray<struct FInt32Range> CharacterRanges; // 0x18(0x10)
	struct FString Cultures; // 0x28(0x10)
};

// ScriptStruct SlateCore.CompositeFont
// Size: 0x38 (Inherited: 0x00)
struct FCompositeFont {
	struct FTypeface DefaultTypeface; // 0x00(0x10)
	struct FCompositeFallbackFont FallbackTypeface; // 0x10(0x18)
	struct TArray<struct FCompositeSubFont> SubTypefaces; // 0x28(0x10)
};

// ScriptStruct SlateCore.CaptureLostEvent
// Size: 0x08 (Inherited: 0x00)
struct FCaptureLostEvent {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SlateCore.SegmentedControlStyle
// Size: 0x2160 (Inherited: 0x08)
struct FSegmentedControlStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FCheckBoxStyle ControlStyle; // 0x10(0xad0)
	struct FCheckBoxStyle FirstControlStyle; // 0xae0(0xad0)
	struct FCheckBoxStyle LastControlStyle; // 0x15b0(0xad0)
	struct FSlateBrush BackgroundBrush; // 0x2080(0xd0)
	struct FMargin UniformPadding; // 0x2150(0x10)
};

// ScriptStruct SlateCore.CheckBoxStyle
// Size: 0xad0 (Inherited: 0x08)
struct FCheckBoxStyle : FSlateWidgetStyle {
	enum class ESlateCheckBoxType CheckBoxType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FSlateBrush UncheckedImage; // 0x10(0xd0)
	struct FSlateBrush UncheckedHoveredImage; // 0xe0(0xd0)
	struct FSlateBrush UncheckedPressedImage; // 0x1b0(0xd0)
	struct FSlateBrush CheckedImage; // 0x280(0xd0)
	struct FSlateBrush CheckedHoveredImage; // 0x350(0xd0)
	struct FSlateBrush CheckedPressedImage; // 0x420(0xd0)
	struct FSlateBrush UndeterminedImage; // 0x4f0(0xd0)
	struct FSlateBrush UndeterminedHoveredImage; // 0x5c0(0xd0)
	struct FSlateBrush UndeterminedPressedImage; // 0x690(0xd0)
	struct FMargin Padding; // 0x760(0x10)
	struct FSlateBrush BackgroundImage; // 0x770(0xd0)
	struct FSlateBrush BackgroundHoveredImage; // 0x840(0xd0)
	struct FSlateBrush BackgroundPressedImage; // 0x910(0xd0)
	struct FSlateColor ForegroundColor; // 0x9e0(0x14)
	struct FSlateColor HoveredForeground; // 0x9f4(0x14)
	struct FSlateColor PressedForeground; // 0xa08(0x14)
	struct FSlateColor CheckedForeground; // 0xa1c(0x14)
	struct FSlateColor CheckedHoveredForeground; // 0xa30(0x14)
	struct FSlateColor CheckedPressedForeground; // 0xa44(0x14)
	struct FSlateColor UndeterminedForeground; // 0xa58(0x14)
	struct FSlateColor BorderBackgroundColor; // 0xa6c(0x14)
	struct FSlateSound CheckedSlateSound; // 0xa80(0x18)
	struct FSlateSound UncheckedSlateSound; // 0xa98(0x18)
	struct FSlateSound HoveredSlateSound; // 0xab0(0x18)
	char pad_AC8[0x8]; // 0xac8(0x08)
};

// ScriptStruct SlateCore.HyperlinkStyle
// Size: 0x750 (Inherited: 0x08)
struct FHyperlinkStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FButtonStyle UnderlineStyle; // 0x10(0x3f0)
	struct FTextBlockStyle TextStyle; // 0x400(0x340)
	struct FMargin Padding; // 0x740(0x10)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// Size: 0xef0 (Inherited: 0x08)
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FEditableTextBoxStyle EditableTextBoxStyle; // 0x10(0xba0)
	struct FTextBlockStyle TextStyle; // 0xbb0(0x340)
};

// ScriptStruct SlateCore.ProgressBarStyle
// Size: 0x290 (Inherited: 0x08)
struct FProgressBarStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush BackgroundImage; // 0x10(0xd0)
	struct FSlateBrush FillImage; // 0xe0(0xd0)
	struct FSlateBrush MarqueeImage; // 0x1b0(0xd0)
	bool EnableFillAnimation; // 0x280(0x01)
	char pad_281[0xf]; // 0x281(0x0f)
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// Size: 0x1c0 (Inherited: 0x08)
struct FExpandableAreaStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush CollapsedImage; // 0x10(0xd0)
	struct FSlateBrush ExpandedImage; // 0xe0(0xd0)
	float RolloutAnimationSeconds; // 0x1b0(0x04)
	char pad_1B4[0xc]; // 0x1b4(0x0c)
};

// ScriptStruct SlateCore.SearchBoxStyle
// Size: 0xf70 (Inherited: 0x08)
struct FSearchBoxStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FEditableTextBoxStyle TextBoxStyle; // 0x10(0xba0)
	struct FSlateFontInfo ActiveFontInfo; // 0xbb0(0x58)
	char pad_C08[0x8]; // 0xc08(0x08)
	struct FSlateBrush UpArrowImage; // 0xc10(0xd0)
	struct FSlateBrush DownArrowImage; // 0xce0(0xd0)
	struct FSlateBrush GlassImage; // 0xdb0(0xd0)
	struct FSlateBrush ClearImage; // 0xe80(0xd0)
	struct FMargin ImagePadding; // 0xf50(0x10)
	bool bLeftAlignButtons; // 0xf60(0x01)
	char pad_F61[0xf]; // 0xf61(0x0f)
};

// ScriptStruct SlateCore.VolumeControlStyle
// Size: 0x920 (Inherited: 0x08)
struct FVolumeControlStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSliderStyle SliderStyle; // 0x10(0x500)
	struct FSlateBrush HighVolumeImage; // 0x510(0xd0)
	struct FSlateBrush MidVolumeImage; // 0x5e0(0xd0)
	struct FSlateBrush LowVolumeImage; // 0x6b0(0xd0)
	struct FSlateBrush NoVolumeImage; // 0x780(0xd0)
	struct FSlateBrush MutedImage; // 0x850(0xd0)
};

// ScriptStruct SlateCore.InlineTextImageStyle
// Size: 0xf0 (Inherited: 0x08)
struct FInlineTextImageStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush Image; // 0x10(0xd0)
	int16_t Baseline; // 0xe0(0x02)
	char pad_E2[0xe]; // 0xe2(0x0e)
};

// ScriptStruct SlateCore.SplitterStyle
// Size: 0x1b0 (Inherited: 0x08)
struct FSplitterStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush HandleNormalBrush; // 0x10(0xd0)
	struct FSlateBrush HandleHighlightBrush; // 0xe0(0xd0)
};

// ScriptStruct SlateCore.TableViewStyle
// Size: 0xe0 (Inherited: 0x08)
struct FTableViewStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush BackgroundBrush; // 0x10(0xd0)
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// Size: 0x760 (Inherited: 0x08)
struct FTableColumnHeaderStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush SortPrimaryAscendingImage; // 0x10(0xd0)
	struct FSlateBrush SortPrimaryDescendingImage; // 0xe0(0xd0)
	struct FSlateBrush SortSecondaryAscendingImage; // 0x1b0(0xd0)
	struct FSlateBrush SortSecondaryDescendingImage; // 0x280(0xd0)
	struct FSlateBrush NormalBrush; // 0x350(0xd0)
	struct FSlateBrush HoveredBrush; // 0x420(0xd0)
	struct FSlateBrush MenuDropdownImage; // 0x4f0(0xd0)
	struct FSlateBrush MenuDropdownNormalBorderBrush; // 0x5c0(0xd0)
	struct FSlateBrush MenuDropdownHoveredBorderBrush; // 0x690(0xd0)
};

// ScriptStruct SlateCore.HeaderRowStyle
// Size: 0x1260 (Inherited: 0x08)
struct FHeaderRowStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTableColumnHeaderStyle ColumnStyle; // 0x10(0x760)
	struct FTableColumnHeaderStyle LastColumnStyle; // 0x770(0x760)
	struct FSplitterStyle ColumnSplitterStyle; // 0xed0(0x1b0)
	float SplitterHandleSize; // 0x1080(0x04)
	char pad_1084[0xc]; // 0x1084(0x0c)
	struct FSlateBrush BackgroundBrush; // 0x1090(0xd0)
	struct FSlateColor ForegroundColor; // 0x1160(0x14)
	char pad_1174[0xc]; // 0x1174(0x0c)
	struct FSlateBrush HorizontalSeparatorBrush; // 0x1180(0xd0)
	float HorizontalSeparatorThickness; // 0x1250(0x04)
	char pad_1254[0xc]; // 0x1254(0x0c)
};

// ScriptStruct SlateCore.DockTabStyle
// Size: 0xd80 (Inherited: 0x08)
struct FDockTabStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FButtonStyle CloseButtonStyle; // 0x10(0x3f0)
	struct FSlateBrush NormalBrush; // 0x400(0xd0)
	struct FSlateBrush ColorOverlayTabBrush; // 0x4d0(0xd0)
	struct FSlateBrush ColorOverlayIconBrush; // 0x5a0(0xd0)
	struct FSlateBrush ForegroundBrush; // 0x670(0xd0)
	struct FSlateBrush HoveredBrush; // 0x740(0xd0)
	struct FSlateBrush ContentAreaBrush; // 0x810(0xd0)
	struct FSlateBrush TabWellBrush; // 0x8e0(0xd0)
	struct FTextBlockStyle TabTextStyle; // 0x9b0(0x340)
	struct FMargin TabPadding; // 0xcf0(0x10)
	struct FVector2D IconSize; // 0xd00(0x10)
	float OverlapWidth; // 0xd10(0x04)
	struct FSlateColor FlashColor; // 0xd14(0x14)
	struct FSlateColor NormalForegroundColor; // 0xd28(0x14)
	struct FSlateColor HoveredForegroundColor; // 0xd3c(0x14)
	struct FSlateColor ActiveForegroundColor; // 0xd50(0x14)
	struct FSlateColor ForegroundForegroundColor; // 0xd64(0x14)
	float IconBorderPadding; // 0xd78(0x04)
	char pad_D7C[0x4]; // 0xd7c(0x04)
};

// ScriptStruct SlateCore.ScrollBoxStyle
// Size: 0x350 (Inherited: 0x08)
struct FScrollBoxStyle : FSlateWidgetStyle {
	float BarThickness; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FSlateBrush TopShadowBrush; // 0x10(0xd0)
	struct FSlateBrush BottomShadowBrush; // 0xe0(0xd0)
	struct FSlateBrush LeftShadowBrush; // 0x1b0(0xd0)
	struct FSlateBrush RightShadowBrush; // 0x280(0xd0)
};

// ScriptStruct SlateCore.ScrollBorderStyle
// Size: 0x1b0 (Inherited: 0x08)
struct FScrollBorderStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush TopShadowBrush; // 0x10(0xd0)
	struct FSlateBrush BottomShadowBrush; // 0xe0(0xd0)
};

// ScriptStruct SlateCore.WindowStyle
// Size: 0x1940 (Inherited: 0x08)
struct FWindowStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FButtonStyle MinimizeButtonStyle; // 0x10(0x3f0)
	struct FButtonStyle MaximizeButtonStyle; // 0x400(0x3f0)
	struct FButtonStyle RestoreButtonStyle; // 0x7f0(0x3f0)
	struct FButtonStyle CloseButtonStyle; // 0xbe0(0x3f0)
	struct FTextBlockStyle TitleTextStyle; // 0xfd0(0x340)
	struct FSlateBrush ActiveTitleBrush; // 0x1310(0xd0)
	struct FSlateBrush InactiveTitleBrush; // 0x13e0(0xd0)
	struct FSlateBrush FlashTitleBrush; // 0x14b0(0xd0)
	struct FSlateColor BackgroundColor; // 0x1580(0x14)
	char pad_1594[0xc]; // 0x1594(0x0c)
	struct FSlateBrush OutlineBrush; // 0x15a0(0xd0)
	struct FSlateColor OutlineColor; // 0x1670(0x14)
	char pad_1684[0xc]; // 0x1684(0x0c)
	struct FSlateBrush BorderBrush; // 0x1690(0xd0)
	struct FSlateColor BorderColor; // 0x1760(0x14)
	char pad_1774[0xc]; // 0x1774(0x0c)
	struct FSlateBrush BackgroundBrush; // 0x1780(0xd0)
	struct FSlateBrush ChildBackgroundBrush; // 0x1850(0xd0)
	int32_t WindowCornerRadius; // 0x1920(0x04)
	struct FMargin BorderPadding; // 0x1924(0x10)
	char pad_1934[0xc]; // 0x1934(0x0c)
};

// ScriptStruct SlateCore.StyleColorList
// Size: 0x988 (Inherited: 0x00)
struct FStyleColorList {
	struct FLinearColor StyleColors[0x3d]; // 0x00(0x3d0)
	char pad_3D0[0x5b8]; // 0x3d0(0x5b8)
};

// ScriptStruct SlateCore.StyleTheme
// Size: 0x48 (Inherited: 0x00)
struct FStyleTheme {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct SlateCore.ToolBarStyle
// Size: 0x3b80 (Inherited: 0x08)
struct FToolBarStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush BackgroundBrush; // 0x10(0xd0)
	struct FSlateBrush ExpandBrush; // 0xe0(0xd0)
	struct FSlateBrush SeparatorBrush; // 0x1b0(0xd0)
	struct FTextBlockStyle LabelStyle; // 0x280(0x340)
	struct FEditableTextBoxStyle EditableTextStyle; // 0x5c0(0xba0)
	struct FCheckBoxStyle ToggleButton; // 0x1160(0xad0)
	struct FComboButtonStyle ComboButtonStyle; // 0x1c30(0x600)
	struct FButtonStyle SettingsButtonStyle; // 0x2230(0x3f0)
	struct FComboButtonStyle SettingsComboButton; // 0x2620(0x600)
	struct FCheckBoxStyle SettingsToggleButton; // 0x2c20(0xad0)
	struct FButtonStyle ButtonStyle; // 0x36f0(0x3f0)
	struct FMargin LabelPadding; // 0x3ae0(0x10)
	struct FMargin SeparatorPadding; // 0x3af0(0x10)
	struct FMargin ComboButtonPadding; // 0x3b00(0x10)
	struct FMargin ButtonPadding; // 0x3b10(0x10)
	struct FMargin CheckBoxPadding; // 0x3b20(0x10)
	struct FMargin BlockPadding; // 0x3b30(0x10)
	struct FMargin IndentedBlockPadding; // 0x3b40(0x10)
	struct FMargin BackgroundPadding; // 0x3b50(0x10)
	struct FVector2D IconSize; // 0x3b60(0x10)
	bool bShowLabels; // 0x3b70(0x01)
	char pad_3B71[0xf]; // 0x3b71(0x0f)
};

