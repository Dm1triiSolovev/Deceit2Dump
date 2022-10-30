// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8 {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5
};

// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8 {
	Default = 0,
	Number = 1,
	Web = 2,
	Email = 3,
	Password = 4,
	AlphaNumeric = 5,
	EVirtualKeyboardType_MAX = 6
};

// Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8 {
	NotAccessible = 0,
	Auto = 1,
	Summary = 2,
	Custom = 3,
	ToolTip = 4,
	ESlateAccessibleBehavior_MAX = 5
};

// Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8 {
	Started = 0,
	Finished = 1,
	EWidgetAnimationEvent_MAX = 2
};

// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8 {
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3
};

// Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8 {
	Never = 0,
	Auto = 1,
	EWidgetTickFrequency_MAX = 2
};

// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8 {
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2
};

// Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8 {
	Horizontal = 0,
	Vertical = 1,
	Wrap = 2,
	VerticalWrap = 3,
	Radial = 4,
	Overlay = 5,
	EDynamicBoxType_MAX = 6
};

// Enum UMG.EDragPivot
enum class EDragPivot : uint8 {
	MouseDown = 0,
	TopLeft = 1,
	TopCenter = 2,
	TopRight = 3,
	CenterLeft = 4,
	CenterCenter = 5,
	CenterRight = 6,
	BottomLeft = 7,
	BottomCenter = 8,
	BottomRight = 9,
	EDragPivot_MAX = 10
};

// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8 {
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 4,
	EWidgetDesignFlags_MAX = 5
};

// Enum UMG.EBindingKind
enum class EBindingKind : uint8 {
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2
};

// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8 {
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2
};

// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8 {
	RealTime = 0,
	GameTime = 1,
	EWidgetTimingPolicy_MAX = 2
};

// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8 {
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3
};

// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8 {
	Plane = 0,
	Cylinder = 1,
	EWidgetGeometryMode_MAX = 2
};

// Enum UMG.EWindowVisibility
enum class EWindowVisibility : uint8 {
	Visible = 0,
	SelfHitTestInvisible = 1,
	EWindowVisibility_MAX = 2
};

// Enum UMG.ETickMode
enum class ETickMode : uint8 {
	Disabled = 0,
	Enabled = 1,
	Automatic = 2,
	ETickMode_MAX = 3
};

// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8 {
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	EWidgetInteractionSource_MAX = 4
};

// ScriptStruct UMG.EventReply
// Size: 0xb8 (Inherited: 0x00)
struct FEventReply {
	char pad_0[0xb8]; // 0x00(0xb8)
};

// ScriptStruct UMG.WidgetTransform
// Size: 0x38 (Inherited: 0x00)
struct FWidgetTransform {
	struct FVector2D Translation; // 0x00(0x10)
	struct FVector2D Scale; // 0x10(0x10)
	struct FVector2D Shear; // 0x20(0x10)
	float Angle; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct UMG.ShapedTextOptions
// Size: 0x03 (Inherited: 0x00)
struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x00(0x01)
	char bOverride_TextFlowDirection : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	enum class ETextShapingMethod TextShapingMethod; // 0x01(0x01)
	enum class ETextFlowDirection TextFlowDirection; // 0x02(0x01)
};

// ScriptStruct UMG.PaintContext
// Size: 0x30 (Inherited: 0x00)
struct FPaintContext {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct UMG.AnimationEventBinding
// Size: 0x28 (Inherited: 0x00)
struct FAnimationEventBinding {
	struct UWidgetAnimation* Animation; // 0x00(0x08)
	struct FDelegate Delegate; // 0x08(0x10)
	enum class EWidgetAnimationEvent AnimationEvent; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName UserTag; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct UMG.NamedSlotBinding
// Size: 0x10 (Inherited: 0x00)
struct FNamedSlotBinding {
	struct FName Name; // 0x00(0x08)
	struct UWidget* Content; // 0x08(0x08)
};

// ScriptStruct UMG.RadialBoxSettings
// Size: 0x10 (Inherited: 0x00)
struct FRadialBoxSettings {
	float StartingAngle; // 0x00(0x04)
	bool bDistributeItemsEvenly; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float AngleBetweenItems; // 0x08(0x04)
	float SectorCentralAngle; // 0x0c(0x04)
};

// ScriptStruct UMG.UserWidgetPool
// Size: 0x88 (Inherited: 0x00)
struct FUserWidgetPool {
	struct TArray<struct UUserWidget*> ActiveWidgets; // 0x00(0x10)
	struct TArray<struct UUserWidget*> InactiveWidgets; // 0x10(0x10)
	char pad_20[0x68]; // 0x20(0x68)
};

// ScriptStruct UMG.SlateChildSize
// Size: 0x08 (Inherited: 0x00)
struct FSlateChildSize {
	float Value; // 0x00(0x04)
	enum class ESlateSizeRule SizeRule; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct UMG.AnchorData
// Size: 0x40 (Inherited: 0x00)
struct FAnchorData {
	struct FMargin Offsets; // 0x00(0x10)
	struct FAnchors Anchors; // 0x10(0x20)
	struct FVector2D Alignment; // 0x30(0x10)
};

// ScriptStruct UMG.DynamicPropertyPath
// Size: 0x28 (Inherited: 0x28)
struct FDynamicPropertyPath : FCachedPropertyPath {
};

// ScriptStruct UMG.MovieScene2DTransformMask
// Size: 0x04 (Inherited: 0x00)
struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x00(0x04)
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// Size: 0x90 (Inherited: 0x80)
struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	struct TArray<struct FName> BrushPropertyNamePath; // 0x80(0x10)
};

// ScriptStruct UMG.RichTextStyleRow
// Size: 0x350 (Inherited: 0x08)
struct FRichTextStyleRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTextBlockStyle TextStyle; // 0x10(0x340)
};

// ScriptStruct UMG.RichImageRow
// Size: 0xe0 (Inherited: 0x08)
struct FRichImageRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush Brush; // 0x10(0xd0)
};

// ScriptStruct UMG.SlateMeshVertex
// Size: 0x3c (Inherited: 0x00)
struct FSlateMeshVertex {
	struct FVector2f position; // 0x00(0x08)
	struct FColor Color; // 0x08(0x04)
	struct FVector2f UV0; // 0x0c(0x08)
	struct FVector2f UV1; // 0x14(0x08)
	struct FVector2f UV2; // 0x1c(0x08)
	struct FVector2f UV3; // 0x24(0x08)
	struct FVector2f UV4; // 0x2c(0x08)
	struct FVector2f UV5; // 0x34(0x08)
};

// ScriptStruct UMG.SequenceTickManagerWidgetData
// Size: 0x03 (Inherited: 0x00)
struct FSequenceTickManagerWidgetData {
	char pad_0[0x3]; // 0x00(0x03)
};

// ScriptStruct UMG.WidgetAnimationBinding
// Size: 0x24 (Inherited: 0x00)
struct FWidgetAnimationBinding {
	struct FName WidgetName; // 0x00(0x08)
	struct FName SlotWidgetName; // 0x08(0x08)
	struct FGuid AnimationGuid; // 0x10(0x10)
	bool bIsRootWidget; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
// Size: 0x1c (Inherited: 0x00)
struct FBlueprintWidgetAnimationDelegateBinding {
	enum class EWidgetAnimationEvent Action; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName AnimationToBind; // 0x04(0x08)
	struct FName FunctionNameToBind; // 0x0c(0x08)
	struct FName UserTag; // 0x14(0x08)
};

// ScriptStruct UMG.DelegateRuntimeBinding
// Size: 0x50 (Inherited: 0x00)
struct FDelegateRuntimeBinding {
	struct FString ObjectName; // 0x00(0x10)
	struct FName PropertyName; // 0x10(0x08)
	struct FName FunctionName; // 0x18(0x08)
	struct FDynamicPropertyPath SourcePath; // 0x20(0x28)
	enum class EBindingKind Kind; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct UMG.WidgetComponentInstanceData
// Size: 0xc8 (Inherited: 0xb8)
struct FWidgetComponentInstanceData : FSceneComponentInstanceData {
	char pad_B8[0x10]; // 0xb8(0x10)
};

// ScriptStruct UMG.WidgetNavigationData
// Size: 0x24 (Inherited: 0x00)
struct FWidgetNavigationData {
	enum class EUINavigationRule Rule; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName WidgetToFocus; // 0x04(0x08)
	struct TWeakObjectPtr<struct UWidget> Widget; // 0x0c(0x08)
	struct FDelegate CustomDelegate; // 0x14(0x10)
};

