// Class InteractiveToolsFramework.InteractiveToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UInteractiveToolBuilder : UObject {
};

// Class InteractiveToolsFramework.InteractiveToolPropertySet
// Size: 0xa8 (Inherited: 0x28)
struct UInteractiveToolPropertySet : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct TMap<struct FString, struct UInteractiveToolPropertySet*> CachedPropertiesMap; // 0x38(0x50)
	bool bIsPropertySetEnabled; // 0x88(0x01)
	char pad_89[0x1f]; // 0x89(0x1f)
};

// Class InteractiveToolsFramework.InteractiveTool
// Size: 0x98 (Inherited: 0x28)
struct UInteractiveTool : UObject {
	char pad_28[0x38]; // 0x28(0x38)
	struct UInputBehaviorSet* InputBehaviors; // 0x60(0x08)
	struct TArray<struct UObject*> ToolPropertyObjects; // 0x68(0x10)
	char pad_78[0x20]; // 0x78(0x20)
};

// Class InteractiveToolsFramework.SingleClickTool
// Size: 0xa0 (Inherited: 0x98)
struct USingleClickTool : UInteractiveTool {
	char pad_98[0x8]; // 0x98(0x08)
};

// Class InteractiveToolsFramework.InteractiveToolWithToolTargetsBuilder
// Size: 0x28 (Inherited: 0x28)
struct UInteractiveToolWithToolTargetsBuilder : UInteractiveToolBuilder {
};

// Class InteractiveToolsFramework.MultiSelectionTool
// Size: 0xb0 (Inherited: 0x98)
struct UMultiSelectionTool : UInteractiveTool {
	char pad_98[0x8]; // 0x98(0x08)
	struct TArray<struct UToolTarget*> Targets; // 0xa0(0x10)
};

// Class InteractiveToolsFramework.SingleSelectionTool
// Size: 0xa8 (Inherited: 0x98)
struct USingleSelectionTool : UInteractiveTool {
	char pad_98[0x8]; // 0x98(0x08)
	struct UToolTarget* Target; // 0xa0(0x08)
};

// Class InteractiveToolsFramework.InteractionMechanic
// Size: 0x30 (Inherited: 0x28)
struct UInteractionMechanic : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UMeshSurfacePointToolBuilder : UInteractiveToolWithToolTargetsBuilder {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class InteractiveToolsFramework.SceneSnappingManager
// Size: 0x28 (Inherited: 0x28)
struct USceneSnappingManager : UObject {
};

// Class InteractiveToolsFramework.InternalToolFrameworkActor
// Size: 0x280 (Inherited: 0x278)
struct AInternalToolFrameworkActor : AActor {
	bool bIsSelectableInEditor; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
};

// Class InteractiveToolsFramework.InputBehavior
// Size: 0x30 (Inherited: 0x28)
struct UInputBehavior : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class InteractiveToolsFramework.AnyButtonInputBehavior
// Size: 0x80 (Inherited: 0x30)
struct UAnyButtonInputBehavior : UInputBehavior {
	char pad_30[0x50]; // 0x30(0x50)
};

// Class InteractiveToolsFramework.AssetBackedTarget
// Size: 0x28 (Inherited: 0x28)
struct UAssetBackedTarget : UInterface {
};

// Class InteractiveToolsFramework.InteractiveGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UInteractiveGizmoBuilder : UObject {
};

// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UAxisAngleGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.InteractiveGizmo
// Size: 0x38 (Inherited: 0x28)
struct UInteractiveGizmo : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UInputBehaviorSet* InputBehaviors; // 0x30(0x08)
};

// Class InteractiveToolsFramework.AxisAngleGizmo
// Size: 0x1d0 (Inherited: 0x38)
struct UAxisAngleGizmo : UInteractiveGizmo {
	char pad_38[0x10]; // 0x38(0x10)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	struct TScriptInterface<IGizmoFloatParameterSource> AngleSource; // 0x58(0x10)
	struct TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68(0x10)
	struct TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78(0x10)
	struct UClickDragInputBehavior* MouseBehavior; // 0x88(0x08)
	char pad_90[0x80]; // 0x90(0x80)
	bool bInInteraction; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FVector RotationOrigin; // 0x118(0x18)
	struct FVector RotationAxis; // 0x130(0x18)
	struct FVector RotationPlaneX; // 0x148(0x18)
	struct FVector RotationPlaneY; // 0x160(0x18)
	struct FVector InteractionStartPoint; // 0x178(0x18)
	struct FVector InteractionCurPoint; // 0x190(0x18)
	float InteractionStartAngle; // 0x1a8(0x04)
	float InteractionCurAngle; // 0x1ac(0x04)
	char pad_1B0[0x20]; // 0x1b0(0x20)
};

// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UAxisPositionGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.AxisPositionGizmo
// Size: 0x1c0 (Inherited: 0x38)
struct UAxisPositionGizmo : UInteractiveGizmo {
	char pad_38[0x10]; // 0x38(0x10)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	struct TScriptInterface<IGizmoFloatParameterSource> ParameterSource; // 0x58(0x10)
	struct UGizmoViewContext* GizmoViewContext; // 0x68(0x08)
	struct TScriptInterface<IGizmoClickTarget> HitTarget; // 0x70(0x10)
	struct TScriptInterface<IGizmoStateTarget> StateTarget; // 0x80(0x10)
	struct UClickDragInputBehavior* MouseBehavior; // 0x90(0x08)
	bool bEnableSignedAxis; // 0x98(0x01)
	char pad_99[0x88]; // 0x99(0x88)
	bool bInInteraction; // 0x121(0x01)
	char pad_122[0x6]; // 0x122(0x06)
	struct FVector InteractionOrigin; // 0x128(0x18)
	struct FVector InteractionAxis; // 0x140(0x18)
	struct FVector InteractionStartPoint; // 0x158(0x18)
	struct FVector InteractionCurPoint; // 0x170(0x18)
	float InteractionStartParameter; // 0x188(0x04)
	float InteractionCurParameter; // 0x18c(0x04)
	float ParameterSign; // 0x190(0x04)
	char pad_194[0x2c]; // 0x194(0x2c)
};

// Class InteractiveToolsFramework.GizmoConstantAxisSource
// Size: 0x60 (Inherited: 0x28)
struct UGizmoConstantAxisSource : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FVector Origin; // 0x30(0x18)
	struct FVector Direction; // 0x48(0x18)
};

// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
// Size: 0x90 (Inherited: 0x28)
struct UGizmoConstantFrameAxisSource : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FVector Origin; // 0x30(0x18)
	struct FVector Direction; // 0x48(0x18)
	struct FVector TangentX; // 0x60(0x18)
	struct FVector TangentY; // 0x78(0x18)
};

// Class InteractiveToolsFramework.GizmoWorldAxisSource
// Size: 0x50 (Inherited: 0x28)
struct UGizmoWorldAxisSource : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FVector Origin; // 0x30(0x18)
	int32_t AxisIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class InteractiveToolsFramework.GizmoComponentAxisSource
// Size: 0x40 (Inherited: 0x28)
struct UGizmoComponentAxisSource : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct USceneComponent* Component; // 0x30(0x08)
	int32_t AxisIndex; // 0x38(0x04)
	bool bLocalAxes; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// Class InteractiveToolsFramework.BrushBaseProperties
// Size: 0xc0 (Inherited: 0xa8)
struct UBrushBaseProperties : UInteractiveToolPropertySet {
	float BrushSize; // 0xa8(0x04)
	bool bSpecifyRadius; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float BrushRadius; // 0xb0(0x04)
	float BrushStrength; // 0xb4(0x04)
	float BrushFalloffAmount; // 0xb8(0x04)
	bool bShowStrength; // 0xbc(0x01)
	bool bShowFalloff; // 0xbd(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
};

// Class InteractiveToolsFramework.MeshSurfacePointTool
// Size: 0xf8 (Inherited: 0xa8)
struct UMeshSurfacePointTool : USingleSelectionTool {
	char pad_A8[0x50]; // 0xa8(0x50)
};

// Class InteractiveToolsFramework.BaseBrushTool
// Size: 0x270 (Inherited: 0xf8)
struct UBaseBrushTool : UMeshSurfacePointTool {
	struct UBrushBaseProperties* BrushProperties; // 0xf8(0x08)
	bool bInBrushStroke; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	float WorldToLocalScale; // 0x104(0x04)
	struct FBrushStampData LastBrushStamp; // 0x108(0x128)
	char pad_230[0x10]; // 0x230(0x10)
	struct TSoftClassPtr<UObject> PropertyClass; // 0x240(0x28)
	struct UBrushStampIndicator* BrushStampIndicator; // 0x268(0x08)
};

// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
// Size: 0x28 (Inherited: 0x28)
struct UBrushStampIndicatorBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.BrushStampIndicator
// Size: 0xd8 (Inherited: 0x38)
struct UBrushStampIndicator : UInteractiveGizmo {
	bool bVisible; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float BrushRadius; // 0x3c(0x04)
	float BrushFalloff; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FVector BrushPosition; // 0x48(0x18)
	struct FVector BrushNormal; // 0x60(0x18)
	bool bDrawIndicatorLines; // 0x78(0x01)
	bool bDrawRadiusCircle; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	int32_t SampleStepCount; // 0x7c(0x04)
	struct FLinearColor LineColor; // 0x80(0x10)
	float LineThickness; // 0x90(0x04)
	bool bDepthTested; // 0x94(0x01)
	bool bDrawSecondaryLines; // 0x95(0x01)
	char pad_96[0x2]; // 0x96(0x02)
	float SecondaryLineThickness; // 0x98(0x04)
	struct FLinearColor SecondaryLineColor; // 0x9c(0x10)
	char pad_AC[0x4]; // 0xac(0x04)
	struct UPrimitiveComponent* AttachedComponent; // 0xb0(0x08)
	char pad_B8[0x20]; // 0xb8(0x20)
};

// Class InteractiveToolsFramework.ClickDragInputBehavior
// Size: 0x140 (Inherited: 0x80)
struct UClickDragInputBehavior : UAnyButtonInputBehavior {
	char pad_80[0xa0]; // 0x80(0xa0)
	bool bUpdateModifiersDuringDrag; // 0x120(0x01)
	char pad_121[0x1f]; // 0x121(0x1f)
};

// Class InteractiveToolsFramework.LocalClickDragInputBehavior
// Size: 0x280 (Inherited: 0x140)
struct ULocalClickDragInputBehavior : UClickDragInputBehavior {
	char pad_140[0x140]; // 0x140(0x140)
};

// Class InteractiveToolsFramework.ClickDragToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UClickDragToolBuilder : UInteractiveToolBuilder {
};

// Class InteractiveToolsFramework.ClickDragTool
// Size: 0xa0 (Inherited: 0x98)
struct UClickDragTool : UInteractiveTool {
	char pad_98[0x8]; // 0x98(0x08)
};

// Class InteractiveToolsFramework.GizmoActor
// Size: 0x280 (Inherited: 0x280)
struct AGizmoActor : AInternalToolFrameworkActor {
};

// Class InteractiveToolsFramework.CombinedTransformGizmoActor
// Size: 0x300 (Inherited: 0x280)
struct ACombinedTransformGizmoActor : AGizmoActor {
	struct UPrimitiveComponent* TranslateX; // 0x280(0x08)
	struct UPrimitiveComponent* TranslateY; // 0x288(0x08)
	struct UPrimitiveComponent* TranslateZ; // 0x290(0x08)
	struct UPrimitiveComponent* TranslateYZ; // 0x298(0x08)
	struct UPrimitiveComponent* TranslateXZ; // 0x2a0(0x08)
	struct UPrimitiveComponent* TranslateXY; // 0x2a8(0x08)
	struct UPrimitiveComponent* RotateX; // 0x2b0(0x08)
	struct UPrimitiveComponent* RotateY; // 0x2b8(0x08)
	struct UPrimitiveComponent* RotateZ; // 0x2c0(0x08)
	struct UPrimitiveComponent* UniformScale; // 0x2c8(0x08)
	struct UPrimitiveComponent* AxisScaleX; // 0x2d0(0x08)
	struct UPrimitiveComponent* AxisScaleY; // 0x2d8(0x08)
	struct UPrimitiveComponent* AxisScaleZ; // 0x2e0(0x08)
	struct UPrimitiveComponent* PlaneScaleYZ; // 0x2e8(0x08)
	struct UPrimitiveComponent* PlaneScaleXZ; // 0x2f0(0x08)
	struct UPrimitiveComponent* PlaneScaleXY; // 0x2f8(0x08)
};

// Class InteractiveToolsFramework.CombinedTransformGizmoBuilder
// Size: 0xf0 (Inherited: 0x28)
struct UCombinedTransformGizmoBuilder : UInteractiveGizmoBuilder {
	char pad_28[0xc8]; // 0x28(0xc8)
};

// Class InteractiveToolsFramework.CombinedTransformGizmo
// Size: 0x2a0 (Inherited: 0x38)
struct UCombinedTransformGizmo : UInteractiveGizmo {
	struct UTransformProxy* ActiveTarget; // 0x38(0x08)
	bool bSnapToWorldGrid; // 0x40(0x01)
	bool bGridSizeIsExplicit; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FVector ExplicitGridSize; // 0x48(0x18)
	bool bRotationGridSizeIsExplicit; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FRotator ExplicitRotationGridSize; // 0x68(0x18)
	bool bSnapToWorldRotGrid; // 0x80(0x01)
	bool bUseContextCoordinateSystem; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	enum class EToolContextCoordinateSystem CurrentCoordinateSystem; // 0x84(0x04)
	char pad_88[0xc8]; // 0x88(0xc8)
	struct TArray<struct UPrimitiveComponent*> ActiveComponents; // 0x150(0x10)
	struct TArray<struct UPrimitiveComponent*> NonuniformScaleComponents; // 0x160(0x10)
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos; // 0x170(0x10)
	char pad_180[0x10]; // 0x180(0x10)
	struct UGizmoConstantFrameAxisSource* CameraAxisSource; // 0x190(0x08)
	struct UGizmoComponentAxisSource* AxisXSource; // 0x198(0x08)
	struct UGizmoComponentAxisSource* AxisYSource; // 0x1a0(0x08)
	struct UGizmoComponentAxisSource* AxisZSource; // 0x1a8(0x08)
	struct UGizmoComponentAxisSource* UnitAxisXSource; // 0x1b0(0x08)
	struct UGizmoComponentAxisSource* UnitAxisYSource; // 0x1b8(0x08)
	struct UGizmoComponentAxisSource* UnitAxisZSource; // 0x1c0(0x08)
	struct UGizmoTransformChangeStateTarget* StateTarget; // 0x1c8(0x08)
	char pad_1D0[0xd0]; // 0x1d0(0xd0)
};

// Class InteractiveToolsFramework.ContextObjectStore
// Size: 0x38 (Inherited: 0x28)
struct UContextObjectStore : UObject {
	struct TArray<struct UObject*> ContextObjects; // 0x28(0x10)
};

// Class InteractiveToolsFramework.GizmoBaseComponent
// Size: 0x570 (Inherited: 0x540)
struct UGizmoBaseComponent : UPrimitiveComponent {
	struct FLinearColor Color; // 0x540(0x10)
	float HoverSizeMultiplier; // 0x550(0x04)
	float PixelHitDistanceThreshold; // 0x554(0x04)
	char pad_558[0x8]; // 0x558(0x08)
	struct UGizmoViewContext* GizmoViewContext; // 0x560(0x08)
	char pad_568[0x8]; // 0x568(0x08)

	void UpdateWorldLocalState(bool bWorldIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState // (Final|Native|Public) // @ game+0x4e26680
	void UpdateHoverState(bool bHoveringIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState // (Final|Native|Public) // @ game+0x4e26560
};

// Class InteractiveToolsFramework.GizmoArrowComponent
// Size: 0x5a0 (Inherited: 0x570)
struct UGizmoArrowComponent : UGizmoBaseComponent {
	struct FVector Direction; // 0x570(0x18)
	float Gap; // 0x588(0x04)
	float Length; // 0x58c(0x04)
	float Thickness; // 0x590(0x04)
	char pad_594[0xc]; // 0x594(0x0c)
};

// Class InteractiveToolsFramework.GizmoBoxComponent
// Size: 0x5d0 (Inherited: 0x570)
struct UGizmoBoxComponent : UGizmoBaseComponent {
	struct FVector Origin; // 0x570(0x18)
	char pad_588[0x8]; // 0x588(0x08)
	struct FQuat Rotation; // 0x590(0x20)
	struct FVector Dimensions; // 0x5b0(0x18)
	float LineThickness; // 0x5c8(0x04)
	bool bRemoveHiddenLines; // 0x5cc(0x01)
	bool bEnableAxisFlip; // 0x5cd(0x01)
	char pad_5CE[0x2]; // 0x5ce(0x02)
};

// Class InteractiveToolsFramework.GizmoCircleComponent
// Size: 0x5a0 (Inherited: 0x570)
struct UGizmoCircleComponent : UGizmoBaseComponent {
	struct FVector Normal; // 0x570(0x18)
	float Radius; // 0x588(0x04)
	float Thickness; // 0x58c(0x04)
	int32_t NumSides; // 0x590(0x04)
	bool bViewAligned; // 0x594(0x01)
	bool bDrawFullCircle; // 0x595(0x01)
	bool bOnlyAllowFrontFacingHits; // 0x596(0x01)
	char pad_597[0x9]; // 0x597(0x09)
};

// Class InteractiveToolsFramework.GizmoTransformSource
// Size: 0x28 (Inherited: 0x28)
struct UGizmoTransformSource : UInterface {

	void SetTransform(struct FTransform& NewTransform); // Function InteractiveToolsFramework.GizmoTransformSource.SetTransform // (Native|Public|HasOutParms|HasDefaults) // @ game+0x4e263c0
	struct FTransform GetTransform(); // Function InteractiveToolsFramework.GizmoTransformSource.GetTransform // (Native|Public|HasDefaults|Const) // @ game+0x4e261e0
};

// Class InteractiveToolsFramework.GizmoAxisSource
// Size: 0x28 (Inherited: 0x28)
struct UGizmoAxisSource : UInterface {

	bool HasTangentVectors(); // Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors // (Native|Public|Const) // @ game+0x4e26270
	void GetTangentVectors(struct FVector& TangentXOut, struct FVector& TangentYOut); // Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors // (Native|Public|HasOutParms|HasDefaults|Const) // @ game+0x4e260f0
	struct FVector GetOrigin(); // Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin // (Native|Public|HasDefaults|Const) // @ game+0x4e26040
	struct FVector GetDirection(); // Function InteractiveToolsFramework.GizmoAxisSource.GetDirection // (Native|Public|HasDefaults|Const) // @ game+0x4e26000
};

// Class InteractiveToolsFramework.GizmoClickTarget
// Size: 0x28 (Inherited: 0x28)
struct UGizmoClickTarget : UInterface {

	void UpdateInteractingState(bool bInteracting); // Function InteractiveToolsFramework.GizmoClickTarget.UpdateInteractingState // (Native|Public) // @ game+0x4e265f0
	void UpdateHoverState(bool bHovering); // Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState // (Native|Public) // @ game+0x4e264d0
};

// Class InteractiveToolsFramework.GizmoStateTarget
// Size: 0x28 (Inherited: 0x28)
struct UGizmoStateTarget : UInterface {

	void EndUpdate(); // Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate // (Native|Public) // @ game+0x19b4740
	void BeginUpdate(); // Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate // (Native|Public) // @ game+0x19b4720
};

// Class InteractiveToolsFramework.GizmoFloatParameterSource
// Size: 0x28 (Inherited: 0x28)
struct UGizmoFloatParameterSource : UInterface {

	void SetParameter(float NewValue); // Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter // (Native|Public) // @ game+0x4e262a0
	float GetParameter(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter // (Native|Public|Const) // @ game+0x4e26080
	void EndModify(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify // (Native|Public) // @ game+0x1011e30
	void BeginModify(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify // (Native|Public) // @ game+0x19b4740
};

// Class InteractiveToolsFramework.GizmoVec2ParameterSource
// Size: 0x28 (Inherited: 0x28)
struct UGizmoVec2ParameterSource : UInterface {

	void SetParameter(struct FVector2D& NewValue); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter // (Native|Public|HasOutParms|HasDefaults) // @ game+0x4e26330
	struct FVector2D GetParameter(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter // (Native|Public|HasDefaults|Const) // @ game+0x4e260b0
	void EndModify(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify // (Native|Public) // @ game+0x1011e30
	void BeginModify(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify // (Native|Public) // @ game+0x19b4740
};

// Class InteractiveToolsFramework.GizmoLineHandleComponent
// Size: 0x5b0 (Inherited: 0x570)
struct UGizmoLineHandleComponent : UGizmoBaseComponent {
	struct FVector Normal; // 0x570(0x18)
	float HandleSize; // 0x588(0x04)
	float Thickness; // 0x58c(0x04)
	struct FVector Direction; // 0x590(0x18)
	float Length; // 0x5a8(0x04)
	bool bImageScale; // 0x5ac(0x01)
	char pad_5AD[0x3]; // 0x5ad(0x03)
};

// Class InteractiveToolsFramework.GizmoRectangleComponent
// Size: 0x5c0 (Inherited: 0x570)
struct UGizmoRectangleComponent : UGizmoBaseComponent {
	struct FVector DirectionX; // 0x570(0x18)
	struct FVector DirectionY; // 0x588(0x18)
	bool bOrientYAccordingToCamera; // 0x5a0(0x01)
	char pad_5A1[0x3]; // 0x5a1(0x03)
	float OffsetX; // 0x5a4(0x04)
	float OffsetY; // 0x5a8(0x04)
	float LengthX; // 0x5ac(0x04)
	float LengthY; // 0x5b0(0x04)
	float Thickness; // 0x5b4(0x04)
	char SegmentFlags; // 0x5b8(0x01)
	char pad_5B9[0x7]; // 0x5b9(0x07)
};

// Class InteractiveToolsFramework.GizmoViewContext
// Size: 0x160 (Inherited: 0x28)
struct UGizmoViewContext : UObject {
	char pad_28[0x138]; // 0x28(0x138)
};

// Class InteractiveToolsFramework.GizmoLambdaHitTarget
// Size: 0xf0 (Inherited: 0x28)
struct UGizmoLambdaHitTarget : UObject {
	char pad_28[0xc8]; // 0x28(0xc8)
};

// Class InteractiveToolsFramework.GizmoComponentHitTarget
// Size: 0x100 (Inherited: 0x28)
struct UGizmoComponentHitTarget : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UPrimitiveComponent* Component; // 0x30(0x08)
	char pad_38[0xc8]; // 0x38(0xc8)
};

// Class InteractiveToolsFramework.InputBehaviorSet
// Size: 0x38 (Inherited: 0x28)
struct UInputBehaviorSet : UObject {
	struct TArray<struct FBehaviorInfo> Behaviors; // 0x28(0x10)
};

// Class InteractiveToolsFramework.InputBehaviorSource
// Size: 0x28 (Inherited: 0x28)
struct UInputBehaviorSource : UInterface {
};

// Class InteractiveToolsFramework.LocalInputBehaviorSource
// Size: 0x70 (Inherited: 0x28)
struct ULocalInputBehaviorSource : UObject {
	char pad_28[0x48]; // 0x28(0x48)
};

// Class InteractiveToolsFramework.InputRouter
// Size: 0xb0 (Inherited: 0x28)
struct UInputRouter : UObject {
	bool bAutoInvalidateOnHover; // 0x28(0x01)
	bool bAutoInvalidateOnCapture; // 0x29(0x01)
	char pad_2A[0xe]; // 0x2a(0x0e)
	struct UInputBehaviorSet* ActiveInputBehaviors; // 0x38(0x08)
	char pad_40[0x70]; // 0x40(0x70)
};

// Class InteractiveToolsFramework.InteractiveGizmoManager
// Size: 0xc0 (Inherited: 0x28)
struct UInteractiveGizmoManager : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct FActiveGizmo> ActiveGizmos; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)
	struct TMap<struct FString, struct UInteractiveGizmoBuilder*> GizmoBuilders; // 0x58(0x50)
	char pad_A8[0x18]; // 0xa8(0x18)
};

// Class InteractiveToolsFramework.ToolContextTransactionProvider
// Size: 0x28 (Inherited: 0x28)
struct UToolContextTransactionProvider : UInterface {
};

// Class InteractiveToolsFramework.InteractiveToolManager
// Size: 0x170 (Inherited: 0x28)
struct UInteractiveToolManager : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UInteractiveTool* ActiveLeftTool; // 0x30(0x08)
	struct UInteractiveTool* ActiveRightTool; // 0x38(0x08)
	char pad_40[0x80]; // 0x40(0x80)
	struct TMap<struct FString, struct UInteractiveToolBuilder*> ToolBuilders; // 0xc0(0x50)
	char pad_110[0x60]; // 0x110(0x60)
};

// Class InteractiveToolsFramework.ToolFrameworkComponent
// Size: 0x28 (Inherited: 0x28)
struct UToolFrameworkComponent : UInterface {
};

// Class InteractiveToolsFramework.InteractiveToolCameraFocusAPI
// Size: 0x28 (Inherited: 0x28)
struct UInteractiveToolCameraFocusAPI : UInterface {
};

// Class InteractiveToolsFramework.InteractiveToolNestedAcceptCancelAPI
// Size: 0x28 (Inherited: 0x28)
struct UInteractiveToolNestedAcceptCancelAPI : UInterface {
};

// Class InteractiveToolsFramework.InteractiveToolExclusiveToolAPI
// Size: 0x28 (Inherited: 0x28)
struct UInteractiveToolExclusiveToolAPI : UInterface {
};

// Class InteractiveToolsFramework.InteractiveToolsContext
// Size: 0x330 (Inherited: 0x28)
struct UInteractiveToolsContext : UObject {
	char pad_28[0x30]; // 0x28(0x30)
	struct UInputRouter* InputRouter; // 0x58(0x08)
	struct UToolTargetManager* TargetManager; // 0x60(0x08)
	struct UInteractiveToolManager* ToolManager; // 0x68(0x08)
	struct UInteractiveGizmoManager* GizmoManager; // 0x70(0x08)
	struct UContextObjectStore* ContextObjectStore; // 0x78(0x08)
	char pad_80[0x280]; // 0x80(0x280)
	struct TSoftClassPtr<UObject> ToolManagerClass; // 0x300(0x28)
	char pad_328[0x8]; // 0x328(0x08)
};

// Class InteractiveToolsFramework.IntervalGizmoActor
// Size: 0x298 (Inherited: 0x280)
struct AIntervalGizmoActor : AGizmoActor {
	struct UGizmoLineHandleComponent* UpIntervalComponent; // 0x280(0x08)
	struct UGizmoLineHandleComponent* DownIntervalComponent; // 0x288(0x08)
	struct UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x290(0x08)
};

// Class InteractiveToolsFramework.IntervalGizmoBuilder
// Size: 0xc0 (Inherited: 0x28)
struct UIntervalGizmoBuilder : UInteractiveGizmoBuilder {
	char pad_28[0x98]; // 0x28(0x98)
};

// Class InteractiveToolsFramework.IntervalGizmo
// Size: 0x200 (Inherited: 0x38)
struct UIntervalGizmo : UInteractiveGizmo {
	struct UGizmoTransformChangeStateTarget* StateTarget; // 0x38(0x08)
	char pad_40[0x58]; // 0x40(0x58)
	struct UTransformProxy* TransformProxy; // 0x98(0x08)
	struct TArray<struct UPrimitiveComponent*> ActiveComponents; // 0xa0(0x10)
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos; // 0xb0(0x10)
	char pad_C0[0x18]; // 0xc0(0x18)
	struct UGizmoComponentAxisSource* AxisYSource; // 0xd8(0x08)
	struct UGizmoComponentAxisSource* AxisZSource; // 0xe0(0x08)
	char pad_E8[0x118]; // 0xe8(0x118)
};

// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// Size: 0x48 (Inherited: 0x28)
struct UGizmoBaseFloatParameterSource : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
// Size: 0x60 (Inherited: 0x48)
struct UGizmoAxisIntervalParameterSource : UGizmoBaseFloatParameterSource {
	struct TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource; // 0x48(0x10)
	float MinParameter; // 0x58(0x04)
	float MaxParameter; // 0x5c(0x04)
};

// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// Size: 0x98 (Inherited: 0x30)
struct UKeyAsModifierInputBehavior : UInputBehavior {
	char pad_30[0x68]; // 0x30(0x68)
};

// Class InteractiveToolsFramework.MaterialProvider
// Size: 0x28 (Inherited: 0x28)
struct UMaterialProvider : UInterface {
};

// Class InteractiveToolsFramework.MeshDescriptionCommitter
// Size: 0x28 (Inherited: 0x28)
struct UMeshDescriptionCommitter : UInterface {
};

// Class InteractiveToolsFramework.MeshDescriptionProvider
// Size: 0x28 (Inherited: 0x28)
struct UMeshDescriptionProvider : UInterface {
};

// Class InteractiveToolsFramework.MouseHoverBehavior
// Size: 0x98 (Inherited: 0x30)
struct UMouseHoverBehavior : UInputBehavior {
	char pad_30[0x68]; // 0x30(0x68)
};

// Class InteractiveToolsFramework.LocalMouseHoverBehavior
// Size: 0x1a0 (Inherited: 0x98)
struct ULocalMouseHoverBehavior : UMouseHoverBehavior {
	char pad_98[0x108]; // 0x98(0x108)
};

// Class InteractiveToolsFramework.MouseWheelInputBehavior
// Size: 0x130 (Inherited: 0x80)
struct UMouseWheelInputBehavior : UAnyButtonInputBehavior {
	char pad_80[0xb0]; // 0x80(0xb0)
};

// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// Size: 0x130 (Inherited: 0x80)
struct UMultiClickSequenceInputBehavior : UAnyButtonInputBehavior {
	char pad_80[0xb0]; // 0x80(0xb0)
};

// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// Size: 0x58 (Inherited: 0x48)
struct UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource {
	float Value; // 0x48(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// Size: 0x48 (Inherited: 0x28)
struct UGizmoBaseVec2ParameterSource : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// Size: 0x78 (Inherited: 0x48)
struct UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource {
	struct FVector2D Value; // 0x48(0x10)
	struct FGizmoVec2ParameterChange LastChange; // 0x58(0x20)
};

// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// Size: 0x150 (Inherited: 0x48)
struct UGizmoAxisTranslationParameterSource : UGizmoBaseFloatParameterSource {
	char pad_48[0x48]; // 0x48(0x48)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0(0x10)
	float Parameter; // 0xb0(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0xb4(0x08)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FVector CurTranslationAxis; // 0xc0(0x18)
	struct FVector CurTranslationOrigin; // 0xd8(0x18)
	struct FTransform InitialTransform; // 0xf0(0x60)
};

// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// Size: 0x1a0 (Inherited: 0x48)
struct UGizmoPlaneTranslationParameterSource : UGizmoBaseVec2ParameterSource {
	char pad_48[0x48]; // 0x48(0x48)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0(0x10)
	struct FVector2D Parameter; // 0xb0(0x10)
	struct FGizmoVec2ParameterChange LastChange; // 0xc0(0x20)
	struct FVector CurTranslationOrigin; // 0xe0(0x18)
	struct FVector CurTranslationNormal; // 0xf8(0x18)
	struct FVector CurTranslationAxisX; // 0x110(0x18)
	struct FVector CurTranslationAxisY; // 0x128(0x18)
	struct FTransform InitialTransform; // 0x140(0x60)
};

// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// Size: 0x150 (Inherited: 0x48)
struct UGizmoAxisRotationParameterSource : UGizmoBaseFloatParameterSource {
	char pad_48[0x48]; // 0x48(0x48)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0(0x10)
	float Angle; // 0xb0(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0xb4(0x08)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FVector CurRotationAxis; // 0xc0(0x18)
	struct FVector CurRotationOrigin; // 0xd8(0x18)
	struct FTransform InitialTransform; // 0xf0(0x60)
};

// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
// Size: 0x160 (Inherited: 0x48)
struct UGizmoUniformScaleParameterSource : UGizmoBaseVec2ParameterSource {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0x58(0x10)
	float ScaleMultiplier; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FVector2D Parameter; // 0x70(0x10)
	struct FGizmoVec2ParameterChange LastChange; // 0x80(0x20)
	struct FVector CurScaleOrigin; // 0xa0(0x18)
	struct FVector CurScaleNormal; // 0xb8(0x18)
	struct FVector CurScaleAxisX; // 0xd0(0x18)
	struct FVector CurScaleAxisY; // 0xe8(0x18)
	struct FTransform InitialTransform; // 0x100(0x60)
};

// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
// Size: 0x110 (Inherited: 0x48)
struct UGizmoAxisScaleParameterSource : UGizmoBaseFloatParameterSource {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0x58(0x10)
	float ScaleMultiplier; // 0x68(0x04)
	bool bClampToZero; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float Parameter; // 0x70(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0x74(0x08)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FVector CurScaleAxis; // 0x80(0x18)
	struct FVector CurScaleOrigin; // 0x98(0x18)
	struct FTransform InitialTransform; // 0xb0(0x60)
};

// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
// Size: 0x1b0 (Inherited: 0x48)
struct UGizmoPlaneScaleParameterSource : UGizmoBaseVec2ParameterSource {
	char pad_48[0x48]; // 0x48(0x48)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0(0x10)
	float ScaleMultiplier; // 0xb0(0x04)
	bool bUseEqualScaling; // 0xb4(0x01)
	bool bClampToZero; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
	struct FVector2D Parameter; // 0xb8(0x10)
	struct FGizmoVec2ParameterChange LastChange; // 0xc8(0x20)
	struct FVector CurScaleOrigin; // 0xe8(0x18)
	struct FVector CurScaleNormal; // 0x100(0x18)
	struct FVector CurScaleAxisX; // 0x118(0x18)
	struct FVector CurScaleAxisY; // 0x130(0x18)
	char pad_148[0x8]; // 0x148(0x08)
	struct FTransform InitialTransform; // 0x150(0x60)
};

// Class InteractiveToolsFramework.PhysicsDataSource
// Size: 0x28 (Inherited: 0x28)
struct UPhysicsDataSource : UInterface {
};

// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UPlanePositionGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.PlanePositionGizmo
// Size: 0x270 (Inherited: 0x38)
struct UPlanePositionGizmo : UInteractiveGizmo {
	char pad_38[0x10]; // 0x38(0x10)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	struct TScriptInterface<IGizmoVec2ParameterSource> ParameterSource; // 0x58(0x10)
	struct TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68(0x10)
	struct TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78(0x10)
	struct UClickDragInputBehavior* MouseBehavior; // 0x88(0x08)
	bool bEnableSignedAxis; // 0x90(0x01)
	bool bFlipX; // 0x91(0x01)
	bool bFlipY; // 0x92(0x01)
	char pad_93[0x8d]; // 0x93(0x8d)
	bool bInInteraction; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct FVector InteractionOrigin; // 0x128(0x18)
	struct FVector InteractionNormal; // 0x140(0x18)
	struct FVector InteractionAxisX; // 0x158(0x18)
	struct FVector InteractionAxisY; // 0x170(0x18)
	struct FVector InteractionStartPoint; // 0x188(0x18)
	struct FVector InteractionCurPoint; // 0x1a0(0x18)
	struct FVector2D InteractionStartParameter; // 0x1b8(0x10)
	struct FVector2D InteractionCurParameter; // 0x1c8(0x10)
	struct FVector2D ParameterSigns; // 0x1d8(0x10)
	char pad_1E8[0x88]; // 0x1e8(0x88)
};

// Class InteractiveToolsFramework.PrimitiveComponentBackedTarget
// Size: 0x28 (Inherited: 0x28)
struct UPrimitiveComponentBackedTarget : UInterface {
};

// Class InteractiveToolsFramework.ToolTarget
// Size: 0x28 (Inherited: 0x28)
struct UToolTarget : UObject {
};

// Class InteractiveToolsFramework.PrimitiveComponentToolTarget
// Size: 0x38 (Inherited: 0x28)
struct UPrimitiveComponentToolTarget : UToolTarget {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class InteractiveToolsFramework.ToolTargetFactory
// Size: 0x28 (Inherited: 0x28)
struct UToolTargetFactory : UObject {
};

// Class InteractiveToolsFramework.PrimitiveComponentToolTargetFactory
// Size: 0x28 (Inherited: 0x28)
struct UPrimitiveComponentToolTargetFactory : UToolTargetFactory {
};

// Class InteractiveToolsFramework.RepositionableTransformGizmoBuilder
// Size: 0xf0 (Inherited: 0xf0)
struct URepositionableTransformGizmoBuilder : UCombinedTransformGizmoBuilder {
};

// Class InteractiveToolsFramework.RepositionableTransformGizmo
// Size: 0x340 (Inherited: 0x2a0)
struct URepositionableTransformGizmo : UCombinedTransformGizmo {
	char pad_2A0[0x90]; // 0x2a0(0x90)
	struct UGizmoTransformChangeStateTarget* RepositionStateTarget; // 0x330(0x08)
	char pad_338[0x8]; // 0x338(0x08)
};

// Class InteractiveToolsFramework.ScalableSphereGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UScalableSphereGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.ScalableSphereGizmo
// Size: 0x100 (Inherited: 0x38)
struct UScalableSphereGizmo : UInteractiveGizmo {
	char pad_38[0x48]; // 0x38(0x48)
	float HitErrorThreshold; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FText TransactionDescription; // 0x88(0x18)
	float Radius; // 0xa0(0x04)
	bool bIsHovering; // 0xa4(0x01)
	bool bIsDragging; // 0xa5(0x01)
	char pad_A6[0x2]; // 0xa6(0x02)
	struct UTransformProxy* ActiveTarget; // 0xa8(0x08)
	struct FVector ActiveAxis; // 0xb0(0x18)
	struct FVector DragStartWorldPosition; // 0xc8(0x18)
	struct FVector DragCurrentPositionProjected; // 0xe0(0x18)
	float InteractionStartParameter; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class InteractiveToolsFramework.ScalableSphereGizmoInputBehavior
// Size: 0xd0 (Inherited: 0x80)
struct UScalableSphereGizmoInputBehavior : UAnyButtonInputBehavior {
	char pad_80[0x50]; // 0x80(0x50)
};

// Class InteractiveToolsFramework.SelectionSet
// Size: 0x40 (Inherited: 0x28)
struct USelectionSet : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class InteractiveToolsFramework.MeshSelectionSet
// Size: 0x80 (Inherited: 0x40)
struct UMeshSelectionSet : USelectionSet {
	struct TArray<int32_t> Vertices; // 0x40(0x10)
	struct TArray<int32_t> Edges; // 0x50(0x10)
	struct TArray<int32_t> Faces; // 0x60(0x10)
	struct TArray<int32_t> Groups; // 0x70(0x10)
};

// Class InteractiveToolsFramework.SingleClickInputBehavior
// Size: 0x130 (Inherited: 0x80)
struct USingleClickInputBehavior : UAnyButtonInputBehavior {
	char pad_80[0x40]; // 0x80(0x40)
	bool HitTestOnRelease; // 0xc0(0x01)
	char pad_C1[0x6f]; // 0xc1(0x6f)
};

// Class InteractiveToolsFramework.LocalSingleClickInputBehavior
// Size: 0x1c0 (Inherited: 0x130)
struct ULocalSingleClickInputBehavior : USingleClickInputBehavior {
	char pad_130[0x90]; // 0x130(0x90)
};

// Class InteractiveToolsFramework.SingleClickOrDragInputBehavior
// Size: 0x180 (Inherited: 0x80)
struct USingleClickOrDragInputBehavior : UAnyButtonInputBehavior {
	char pad_80[0xa0]; // 0x80(0xa0)
	bool bBeginDragIfClickTargetNotHit; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float ClickDistanceThreshold; // 0x124(0x04)
	char pad_128[0x58]; // 0x128(0x58)
};

// Class InteractiveToolsFramework.SingleClickToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct USingleClickToolBuilder : UInteractiveToolBuilder {
};

// Class InteractiveToolsFramework.SingleKeyCaptureBehavior
// Size: 0x110 (Inherited: 0x30)
struct USingleKeyCaptureBehavior : UInputBehavior {
	char pad_30[0xe0]; // 0x30(0xe0)
};

// Class InteractiveToolsFramework.SkeletalMeshBackedTarget
// Size: 0x28 (Inherited: 0x28)
struct USkeletalMeshBackedTarget : UAssetBackedTarget {
};

// Class InteractiveToolsFramework.GizmoNilStateTarget
// Size: 0x30 (Inherited: 0x28)
struct UGizmoNilStateTarget : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class InteractiveToolsFramework.GizmoLambdaStateTarget
// Size: 0xb0 (Inherited: 0x28)
struct UGizmoLambdaStateTarget : UObject {
	char pad_28[0x88]; // 0x28(0x88)
};

// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// Size: 0x58 (Inherited: 0x28)
struct UGizmoObjectModifyStateTarget : UObject {
	char pad_28[0x30]; // 0x28(0x30)
};

// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// Size: 0x140 (Inherited: 0x28)
struct UGizmoTransformChangeStateTarget : UObject {
	char pad_28[0x28]; // 0x28(0x28)
	struct TScriptInterface<IToolContextTransactionProvider> TransactionManager; // 0x50(0x10)
	char pad_60[0xe0]; // 0x60(0xe0)
};

// Class InteractiveToolsFramework.StaticMeshBackedTarget
// Size: 0x28 (Inherited: 0x28)
struct UStaticMeshBackedTarget : UAssetBackedTarget {
};

// Class InteractiveToolsFramework.ToolTargetManager
// Size: 0x40 (Inherited: 0x28)
struct UToolTargetManager : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct UToolTargetFactory*> Factories; // 0x30(0x10)
};

// Class InteractiveToolsFramework.CombinedTransformGizmoContextObject
// Size: 0x40 (Inherited: 0x28)
struct UCombinedTransformGizmoContextObject : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class InteractiveToolsFramework.TransformProxy
// Size: 0x1b0 (Inherited: 0x28)
struct UTransformProxy : UObject {
	char pad_28[0xa8]; // 0x28(0xa8)
	bool bRotatePerObject; // 0xd0(0x01)
	bool bSetPivotMode; // 0xd1(0x01)
	char pad_D2[0x1e]; // 0xd2(0x1e)
	struct FTransform SharedTransform; // 0xf0(0x60)
	struct FTransform InitialSharedTransform; // 0x150(0x60)
};

// Class InteractiveToolsFramework.GizmoBaseTransformSource
// Size: 0x48 (Inherited: 0x28)
struct UGizmoBaseTransformSource : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// Size: 0x58 (Inherited: 0x48)
struct UGizmoComponentWorldTransformSource : UGizmoBaseTransformSource {
	struct USceneComponent* Component; // 0x48(0x08)
	bool bModifyComponentOnTransform; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class InteractiveToolsFramework.GizmoScaledTransformSource
// Size: 0xe0 (Inherited: 0x48)
struct UGizmoScaledTransformSource : UGizmoBaseTransformSource {
	struct TScriptInterface<IGizmoTransformSource> ChildTransformSource; // 0x48(0x10)
	char pad_58[0x88]; // 0x58(0x88)
};

// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// Size: 0x70 (Inherited: 0x48)
struct UGizmoTransformProxyTransformSource : UGizmoBaseTransformSource {
	struct UTransformProxy* Proxy; // 0x48(0x08)
	char pad_50[0x20]; // 0x50(0x20)
};

// Class InteractiveToolsFramework.GizmoScaledAndUnscaledTransformSources
// Size: 0x68 (Inherited: 0x48)
struct UGizmoScaledAndUnscaledTransformSources : UGizmoBaseTransformSource {
	struct TScriptInterface<IGizmoTransformSource> ScaledTransformSource; // 0x48(0x10)
	struct TScriptInterface<IGizmoTransformSource> UnscaledTransformSource; // 0x58(0x10)
};

