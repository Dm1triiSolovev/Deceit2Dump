// Class ControlRig.ControlRig
// Size: 0x490 (Inherited: 0x28)
struct UControlRig : UObject {
	char pad_28[0x1e]; // 0x28(0x1e)
	enum class ERigExecutionType ExecutionType; // 0x46(0x01)
	char pad_47[0x9]; // 0x47(0x09)
	struct FRigVMRuntimeSettings VMRuntimeSettings; // 0x50(0x50)
	struct TMap<struct FRigElementKey, struct FRigControlElementCustomization> ControlCustomizations; // 0xa0(0x50)
	struct URigVM* VM; // 0xf0(0x08)
	struct URigHierarchy* DynamicHierarchy; // 0xf8(0x08)
	struct TSoftObjectPtr<UControlRigShapeLibrary> GizmoLibrary; // 0x100(0x28)
	struct TArray<struct TSoftObjectPtr<UControlRigShapeLibrary>> ShapeLibraries; // 0x128(0x10)
	char pad_138[0x10]; // 0x138(0x10)
	struct TMap<struct FName, struct FCachedPropertyPath> InputProperties; // 0x148(0x50)
	struct TMap<struct FName, struct FCachedPropertyPath> OutputProperties; // 0x198(0x50)
	char pad_1E8[0xa0]; // 0x1e8(0xa0)
	struct FControlRigDrawContainer DrawContainer; // 0x288(0x18)
	char pad_2A0[0x18]; // 0x2a0(0x18)
	struct UAnimationDataSourceRegistry* DataSourceRegistry; // 0x2b8(0x08)
	struct TArray<struct FName> EventQueue; // 0x2c0(0x10)
	char pad_2D0[0xa8]; // 0x2d0(0xa8)
	struct FRigInfluenceMapPerEvent Influences; // 0x378(0x60)
	struct UControlRig* InteractionRig; // 0x3d8(0x08)
	struct UControlRig* InteractionRigClass; // 0x3e0(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x3e8(0x10)
	char pad_3F8[0x98]; // 0x3f8(0x98)

	bool SupportsEvent(struct FName& InEventName); // Function ControlRig.ControlRig.SupportsEvent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cd44c0
	bool SetVariableFromString(struct FName& InVariableName, struct FString InValue); // Function ControlRig.ControlRig.SetVariableFromString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1cd43c0
	void SetInteractionRigClass(struct UControlRig* InInteractionRigClass); // Function ControlRig.ControlRig.SetInteractionRigClass // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd4240
	void SetInteractionRig(struct UControlRig* InInteractionRig); // Function ControlRig.ControlRig.SetInteractionRig // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd41b0
	void SetFramesPerSecond(float InFramesPerSecond); // Function ControlRig.ControlRig.SetFramesPerSecond // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd3d90
	void SetDeltaTime(float InDeltaTime); // Function ControlRig.ControlRig.SetDeltaTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd3d10
	void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero); // Function ControlRig.ControlRig.SetAbsoluteTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd2f30
	void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime); // Function ControlRig.ControlRig.SetAbsoluteAndDeltaTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd2e60
	void SelectControl(struct FName& InControlName, bool bSelect); // Function ControlRig.ControlRig.SelectControl // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1cd2d80
	void RequestSetup(); // Function ControlRig.ControlRig.RequestSetup // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd2d60
	void RequestInit(); // Function ControlRig.ControlRig.RequestInit // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd2d40
	bool IsControlSelected(struct FName& InControlName); // Function ControlRig.ControlRig.IsControlSelected // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cd2930
	struct URigVM* GetVM(); // Function ControlRig.ControlRig.GetVM // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1cd2760
	struct FName GetVariableType(struct FName& InVariableName); // Function ControlRig.ControlRig.GetVariableType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cd2870
	struct FString GetVariableAsString(struct FName& InVariableName); // Function ControlRig.ControlRig.GetVariableAsString // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cd2790
	struct TArray<struct FName> GetSupportedEvents(); // Function ControlRig.ControlRig.GetSupportedEvents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cd26e0
	struct TArray<struct FName> GetScriptAccessibleVariables(); // Function ControlRig.ControlRig.GetScriptAccessibleVariables // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cd2530
	struct UControlRig* GetInteractionRigClass(); // Function ControlRig.ControlRig.GetInteractionRigClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cd2510
	struct UControlRig* GetInteractionRig(); // Function ControlRig.ControlRig.GetInteractionRig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cd24f0
	struct URigHierarchy* GetHierarchy(); // Function ControlRig.ControlRig.GetHierarchy // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1cd2270
	float GetCurrentFramesPerSecond(); // Function ControlRig.ControlRig.GetCurrentFramesPerSecond // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cd2160
	float GetAbsoluteTime(); // Function ControlRig.ControlRig.GetAbsoluteTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cd1830
	struct TArray<struct UControlRig*> FindControlRigs(struct UObject* Outer, struct UControlRig* OptionalClass); // Function ControlRig.ControlRig.FindControlRigs // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cd1720
	void Execute(enum class EControlRigState State, struct FName& InEventName); // Function ControlRig.ControlRig.Execute // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1cd1640
	struct TArray<struct FName> CurrentControlSelection(); // Function ControlRig.ControlRig.CurrentControlSelection // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cd14f0
	bool ClearControlSelection(); // Function ControlRig.ControlRig.ClearControlSelection // (Native|Public|BlueprintCallable) // @ game+0xadfce0
	bool CanExecute(); // Function ControlRig.ControlRig.CanExecute // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10126c0
};

// Class ControlRig.AdditiveControlRig
// Size: 0x4a0 (Inherited: 0x490)
struct UAdditiveControlRig : UControlRig {
	char pad_490[0x10]; // 0x490(0x10)
};

// Class ControlRig.ControlRigAnimInstance
// Size: 0x350 (Inherited: 0x350)
struct UControlRigAnimInstance : UAnimInstance {
};

// Class ControlRig.ControlRigBlueprintGeneratedClass
// Size: 0x328 (Inherited: 0x328)
struct UControlRigBlueprintGeneratedClass : UBlueprintGeneratedClass {
};

// Class ControlRig.ControlRigComponent
// Size: 0x680 (Inherited: 0x540)
struct UControlRigComponent : UPrimitiveComponent {
	struct UControlRig* ControlRigClass; // 0x540(0x08)
	struct FMulticastInlineDelegate OnPreInitializeDelegate; // 0x548(0x10)
	struct FMulticastInlineDelegate OnPostInitializeDelegate; // 0x558(0x10)
	struct FMulticastInlineDelegate OnPreSetupDelegate; // 0x568(0x10)
	struct FMulticastInlineDelegate OnPostSetupDelegate; // 0x578(0x10)
	struct FMulticastInlineDelegate OnPreForwardsSolveDelegate; // 0x588(0x10)
	struct FMulticastInlineDelegate OnPostForwardsSolveDelegate; // 0x598(0x10)
	struct TArray<struct FControlRigComponentMappedElement> MappedElements; // 0x5a8(0x10)
	bool bEnableLazyEvaluation; // 0x5b8(0x01)
	char pad_5B9[0x3]; // 0x5b9(0x03)
	float LazyEvaluationPositionThreshold; // 0x5bc(0x04)
	float LazyEvaluationRotationThreshold; // 0x5c0(0x04)
	float LazyEvaluationScaleThreshold; // 0x5c4(0x04)
	bool bResetTransformBeforeTick; // 0x5c8(0x01)
	bool bResetInitialsBeforeSetup; // 0x5c9(0x01)
	bool bUpdateRigOnTick; // 0x5ca(0x01)
	bool bUpdateInEditor; // 0x5cb(0x01)
	bool bDrawBones; // 0x5cc(0x01)
	bool bShowDebugDrawing; // 0x5cd(0x01)
	char pad_5CE[0x2]; // 0x5ce(0x02)
	struct UControlRig* ControlRig; // 0x5d0(0x08)
	char pad_5D8[0xa8]; // 0x5d8(0xa8)

	void Update(float DeltaTime); // Function ControlRig.ControlRigComponent.Update // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd4560
	void SetMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements); // Function ControlRig.ControlRigComponent.SetMappedElements // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd42d0
	void SetInitialSpaceTransform(struct FName SpaceName, struct FTransform InitialTransform, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetInitialSpaceTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1cd4000
	void SetInitialBoneTransform(struct FName BoneName, struct FTransform InitialTransform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren); // Function ControlRig.ControlRigComponent.SetInitialBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1cd3e10
	void SetControlVector2D(struct FName ControlName, struct FVector2D Value); // Function ControlRig.ControlRigComponent.SetControlVector2D // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1cd3c40
	void SetControlTransform(struct FName ControlName, struct FTransform Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1cd3a90
	void SetControlScale(struct FName ControlName, struct FVector Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1cd3960
	void SetControlRotator(struct FName ControlName, struct FRotator Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlRotator // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1cd3830
	void SetControlPosition(struct FName ControlName, struct FVector Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1cd3700
	void SetControlOffset(struct FName ControlName, struct FTransform OffsetTransform, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1cd3550
	void SetControlInt(struct FName ControlName, int32_t Value); // Function ControlRig.ControlRigComponent.SetControlInt // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd3480
	void SetControlFloat(struct FName ControlName, float Value); // Function ControlRig.ControlRigComponent.SetControlFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd33b0
	void SetControlBool(struct FName ControlName, bool Value); // Function ControlRig.ControlRigComponent.SetControlBool // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd32e0
	void SetBoneTransform(struct FName BoneName, struct FTransform Transform, enum class EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren); // Function ControlRig.ControlRigComponent.SetBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1cd30a0
	void SetBoneInitialTransformsFromSkeletalMesh(struct USkeletalMesh* InSkeletalMesh); // Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd3010
	void OnPreSetup(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreSetup // (Native|Event|Public|BlueprintEvent) // @ game+0x1cd2cb0
	void OnPreInitialize(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreInitialize // (Native|Event|Public|BlueprintEvent) // @ game+0x1cd2c20
	void OnPreForwardsSolve(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreForwardsSolve // (Native|Event|Public|BlueprintEvent) // @ game+0x1cd2b90
	void OnPostSetup(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostSetup // (Native|Event|Public|BlueprintEvent) // @ game+0x1cd2b00
	void OnPostInitialize(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostInitialize // (Native|Event|Public|BlueprintEvent) // @ game+0x1cd2a70
	void OnPostForwardsSolve(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostForwardsSolve // (Native|Event|Public|BlueprintEvent) // @ game+0x1cd29e0
	void Initialize(); // Function ControlRig.ControlRigComponent.Initialize // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd2910
	struct FTransform GetSpaceTransform(struct FName SpaceName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetSpaceTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1cd25b0
	struct FTransform GetInitialSpaceTransform(struct FName SpaceName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetInitialSpaceTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1cd23c0
	struct FTransform GetInitialBoneTransform(struct FName BoneName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetInitialBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1cd2290
	struct TArray<struct FName> GetElementNames(enum class ERigElementType ElementType); // Function ControlRig.ControlRigComponent.GetElementNames // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1cd2190
	struct FVector2D GetControlVector2D(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlVector2D // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1cd20c0
	struct FTransform GetControlTransform(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1cd1f90
	struct FVector GetControlScale(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlScale // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1cd1eb0
	struct FRotator GetControlRotator(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlRotator // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1cd1dd0
	struct UControlRig* GetControlRig(); // Function ControlRig.ControlRigComponent.GetControlRig // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1cd1da0
	struct FVector GetControlPosition(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1cd1cc0
	struct FTransform GetControlOffset(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1cd1b90
	int32_t GetControlInt(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlInt // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1cd1af0
	float GetControlFloat(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlFloat // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1cd1a50
	bool GetControlBool(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlBool // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1cd19b0
	struct FTransform GetBoneTransform(struct FName BoneName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1cd1880
	float GetAbsoluteTime(); // Function ControlRig.ControlRigComponent.GetAbsoluteTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cd1850
	bool DoesElementExist(struct FName Name, enum class ERigElementType ElementType); // Function ControlRig.ControlRigComponent.DoesElementExist // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1cd1570
	void ClearMappedElements(); // Function ControlRig.ControlRigComponent.ClearMappedElements // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd14d0
	bool CanExecute(); // Function ControlRig.ControlRigComponent.CanExecute // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1cd14a0
	void AddMappedSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent, struct TArray<struct FControlRigComponentMappedBone> Bones, struct TArray<struct FControlRigComponentMappedCurve> Curves); // Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd12f0
	void AddMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements); // Function ControlRig.ControlRigComponent.AddMappedElements // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd1200
	void AddMappedComponents(struct TArray<struct FControlRigComponentMappedComponent> Components); // Function ControlRig.ControlRigComponent.AddMappedComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd1110
	void AddMappedCompleteSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent); // Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd1080
};

// Class ControlRig.ControlRigControlActor
// Size: 0x310 (Inherited: 0x278)
struct AControlRigControlActor : AActor {
	struct AActor* ActorToTrack; // 0x278(0x08)
	struct UControlRig* ControlRigClass; // 0x280(0x08)
	bool bRefreshOnTick; // 0x288(0x01)
	bool bIsSelectable; // 0x289(0x01)
	char pad_28A[0x6]; // 0x28a(0x06)
	struct UMaterialInterface* MaterialOverride; // 0x290(0x08)
	struct FString ColorParameter; // 0x298(0x10)
	bool bCastShadows; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct USceneComponent* ActorRootComponent; // 0x2b0(0x08)
	struct UControlRig* ControlRig; // 0x2b8(0x08)
	struct TArray<struct FName> ControlNames; // 0x2c0(0x10)
	struct TArray<struct FTransform> ShapeTransforms; // 0x2d0(0x10)
	struct TArray<struct UStaticMeshComponent*> Components; // 0x2e0(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Materials; // 0x2f0(0x10)
	struct FName ColorParameterName; // 0x300(0x08)
	char pad_308[0x8]; // 0x308(0x08)

	void Refresh(); // Function ControlRig.ControlRigControlActor.Refresh // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd8ea0
	void Clear(); // Function ControlRig.ControlRigControlActor.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd8930
};

// Class ControlRig.ControlRigShapeActor
// Size: 0x2a0 (Inherited: 0x278)
struct AControlRigShapeActor : AActor {
	struct USceneComponent* ActorRootComponent; // 0x278(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x280(0x08)
	uint32_t ControlRigIndex; // 0x288(0x04)
	struct FName ControlName; // 0x28c(0x08)
	struct FName ColorParameterName; // 0x294(0x08)
	char bEnabled : 1; // 0x29c(0x01)
	char bSelected : 1; // 0x29c(0x01)
	char bSelectable : 1; // 0x29c(0x01)
	char bHovered : 1; // 0x29c(0x01)
	char pad_29C_4 : 4; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)

	void SetSelected(bool bInSelected); // Function ControlRig.ControlRigShapeActor.SetSelected // (Native|Public|BlueprintCallable) // @ game+0x1cd9400
	void SetSelectable(bool bInSelectable); // Function ControlRig.ControlRigShapeActor.SetSelectable // (Native|Public|BlueprintCallable) // @ game+0x1cd9370
	void SetHovered(bool bInHovered); // Function ControlRig.ControlRigShapeActor.SetHovered // (Native|Public|BlueprintCallable) // @ game+0x1cd92e0
	void SetGlobalTransform(struct FTransform& InTransform); // Function ControlRig.ControlRigShapeActor.SetGlobalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1cd91d0
	void SetEnabled(bool bInEnabled); // Function ControlRig.ControlRigShapeActor.SetEnabled // (Native|Public|BlueprintCallable) // @ game+0x1cd9140
	void OnTransformChanged(struct FTransform& NewTransform); // Function ControlRig.ControlRigShapeActor.OnTransformChanged // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x2552560
	void OnSelectionChanged(bool bIsSelected); // Function ControlRig.ControlRigShapeActor.OnSelectionChanged // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void OnManipulatingChanged(bool bIsManipulating); // Function ControlRig.ControlRigShapeActor.OnManipulatingChanged // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void OnHoveredChanged(bool bIsSelected); // Function ControlRig.ControlRigShapeActor.OnHoveredChanged // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void OnEnabledChanged(bool bIsEnabled); // Function ControlRig.ControlRigShapeActor.OnEnabledChanged // (Event|Public|BlueprintEvent) // @ game+0x2552560
	bool IsSelectedInEditor(); // Function ControlRig.ControlRigShapeActor.IsSelectedInEditor // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cd8d60
	bool IsHovered(); // Function ControlRig.ControlRigShapeActor.IsHovered // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cd8d30
	bool IsEnabled(); // Function ControlRig.ControlRigShapeActor.IsEnabled // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cd8d00
	struct FTransform GetGlobalTransform(); // Function ControlRig.ControlRigShapeActor.GetGlobalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cd8c70
};

// Class ControlRig.ControlRigShapeLibrary
// Size: 0x120 (Inherited: 0x28)
struct UControlRigShapeLibrary : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FControlRigShapeDefinition DefaultShape; // 0x30(0xa0)
	struct TSoftObjectPtr<UMaterial> DefaultMaterial; // 0xd0(0x28)
	struct FName MaterialColorParameter; // 0xf8(0x08)
	struct TArray<struct FControlRigShapeDefinition> Shapes; // 0x100(0x10)
	char pad_110[0x10]; // 0x110(0x10)
};

// Class ControlRig.ControlRigLayerInstance
// Size: 0x350 (Inherited: 0x350)
struct UControlRigLayerInstance : UAnimInstance {
};

// Class ControlRig.ControlRigValidationPass
// Size: 0x28 (Inherited: 0x28)
struct UControlRigValidationPass : UObject {
};

// Class ControlRig.ControlRigNumericalValidationPass
// Size: 0xc0 (Inherited: 0x28)
struct UControlRigNumericalValidationPass : UControlRigValidationPass {
	bool bCheckControls; // 0x28(0x01)
	bool bCheckBones; // 0x29(0x01)
	bool bCheckCurves; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	float TranslationPrecision; // 0x2c(0x04)
	float RotationPrecision; // 0x30(0x04)
	float ScalePrecision; // 0x34(0x04)
	float CurvePrecision; // 0x38(0x04)
	struct FName EventNameA; // 0x3c(0x08)
	struct FName EventNameB; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FRigPose Pose; // 0x50(0x70)
};

// Class ControlRig.ControlRigObjectHolder
// Size: 0x38 (Inherited: 0x28)
struct UControlRigObjectHolder : UObject {
	struct TArray<struct UObject*> Objects; // 0x28(0x10)
};

// Class ControlRig.ControlRigPoseAsset
// Size: 0x88 (Inherited: 0x28)
struct UControlRigPoseAsset : UObject {
	struct FControlRigControlPose Pose; // 0x28(0x60)

	void SelectControls(struct UControlRig* InControlRig, bool bDoMirror); // Function ControlRig.ControlRigPoseAsset.SelectControls // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd9070
	void SavePose(struct UControlRig* InControlRig, bool bUseAll); // Function ControlRig.ControlRigPoseAsset.SavePose // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd8fa0
	void ReplaceControlName(struct FName& CurrentName, struct FName& NewName); // Function ControlRig.ControlRigPoseAsset.ReplaceControlName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1cd8ec0
	void PastePose(struct UControlRig* InControlRig, bool bDoKey, bool bDoMirror); // Function ControlRig.ControlRigPoseAsset.PastePose // (Final|Native|Public|BlueprintCallable) // @ game+0x1cd8d90
	void GetCurrentPose(struct UControlRig* InControlRig, struct FControlRigControlPose& OutPose); // Function ControlRig.ControlRigPoseAsset.GetCurrentPose // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1cd8ab0
	struct TArray<struct FName> GetControlNames(); // Function ControlRig.ControlRigPoseAsset.GetControlNames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cd8a30
	bool DoesMirrorMatch(struct UControlRig* ControlRig, struct FName& ControlName); // Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cd8950
};

// Class ControlRig.ControlRigPoseMirrorSettings
// Size: 0x50 (Inherited: 0x28)
struct UControlRigPoseMirrorSettings : UObject {
	struct FString RightSide; // 0x28(0x10)
	struct FString LeftSide; // 0x38(0x10)
	enum class EAxis MirrorAxis; // 0x48(0x01)
	enum class EAxis AxisToFlip; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// Class ControlRig.ControlRigPoseProjectSettings
// Size: 0x38 (Inherited: 0x28)
struct UControlRigPoseProjectSettings : UObject {
	struct TArray<struct FDirectoryPath> RootSaveDirs; // 0x28(0x10)
};

// Class ControlRig.ControlRigSequence
// Size: 0x220 (Inherited: 0x1c8)
struct UControlRigSequence : ULevelSequence {
	struct TSoftObjectPtr<UAnimSequence> LastExportedToAnimationSequence; // 0x1c8(0x28)
	struct TSoftObjectPtr<USkeletalMesh> LastExportedUsingSkeletalMesh; // 0x1f0(0x28)
	float LastExportedFrameRate; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
};

// Class ControlRig.ControlRigSettings
// Size: 0x38 (Inherited: 0x38)
struct UControlRigSettings : UDeveloperSettings {
};

// Class ControlRig.ControlRigEditorSettings
// Size: 0x38 (Inherited: 0x38)
struct UControlRigEditorSettings : UDeveloperSettings {
};

// Class ControlRig.ControlRigSnapSettings
// Size: 0x30 (Inherited: 0x28)
struct UControlRigSnapSettings : UObject {
	bool bKeepOffset; // 0x28(0x01)
	bool bSnapPosition; // 0x29(0x01)
	bool bSnapRotation; // 0x2a(0x01)
	bool bSnapScale; // 0x2b(0x01)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class ControlRig.ControlRigValidator
// Size: 0x68 (Inherited: 0x28)
struct UControlRigValidator : UObject {
	struct TArray<struct UControlRigValidationPass*> Passes; // 0x28(0x10)
	char pad_38[0x30]; // 0x38(0x30)
};

// Class ControlRig.FKControlRig
// Size: 0x4a0 (Inherited: 0x490)
struct UFKControlRig : UControlRig {
	struct TArray<bool> IsControlActive; // 0x488(0x10)
	enum class EControlRigFKRigExecuteMode ApplyMode; // 0x498(0x01)
};

// Class ControlRig.MovieSceneControlRigParameterSection
// Size: 0x348 (Inherited: 0x148)
struct UMovieSceneControlRigParameterSection : UMovieSceneParameterSection {
	char pad_148[0x18]; // 0x148(0x18)
	struct UControlRig* ControlRig; // 0x160(0x08)
	struct UControlRig* ControlRigClass; // 0x168(0x08)
	struct TArray<bool> ControlsMask; // 0x170(0x10)
	struct FMovieSceneTransformMask TransformMask; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FMovieSceneFloatChannel Weight; // 0x188(0xe8)
	struct TMap<struct FName, struct FChannelMapInfo> ControlChannelMap; // 0x270(0x50)
	struct TArray<struct FEnumParameterNameAndCurve> EnumParameterNamesAndCurves; // 0x2c0(0x10)
	struct TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves; // 0x2d0(0x10)
	struct TArray<struct FSpaceControlNameAndChannel> SpaceChannels; // 0x2e0(0x10)
	char pad_2F0[0x58]; // 0x2f0(0x58)
};

// Class ControlRig.MovieSceneControlRigParameterTrack
// Size: 0xe0 (Inherited: 0x90)
struct UMovieSceneControlRigParameterTrack : UMovieSceneNameableTrack {
	char pad_90[0x28]; // 0x90(0x28)
	struct UControlRig* ControlRig; // 0xb8(0x08)
	struct UMovieSceneSection* SectionToKey; // 0xc0(0x08)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xc8(0x10)
	struct FName TrackName; // 0xd8(0x08)
};

// Class ControlRig.RigHierarchy
// Size: 0x200 (Inherited: 0x28)
struct URigHierarchy : UObject {
	char pad_28[0x30]; // 0x28(0x30)
	uint16_t TopologyVersion; // 0x58(0x02)
	bool bEnableDirtyPropagation; // 0x5a(0x01)
	char pad_5B[0x75]; // 0x5b(0x75)
	int32_t TransformStackIndex; // 0xd0(0x04)
	char pad_D4[0x5c]; // 0xd4(0x5c)
	struct URigHierarchyController* HierarchyController; // 0x130(0x08)
	char pad_138[0x50]; // 0x138(0x50)
	struct TMap<struct FRigElementKey, struct FRigElementKey> PreviousNameMap; // 0x188(0x50)
	char pad_1D8[0x20]; // 0x1d8(0x20)
	struct URigHierarchy* HierarchyForCacheValidation; // 0x1f8(0x08)

	bool SwitchToWorldSpace(struct FRigElementKey InChild, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SwitchToWorldSpace // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce9e80
	bool SwitchToParent(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SwitchToParent // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce9c50
	bool SwitchToDefaultParent(struct FRigElementKey InChild, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SwitchToDefaultParent // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce9b10
	struct TArray<struct FRigElementKey> SortKeys(struct TArray<struct FRigElementKey>& InKeys); // Function ControlRig.RigHierarchy.SortKeys // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce99a0
	void SetPose_ForBlueprint(struct FRigPose InPose); // Function ControlRig.RigHierarchy.SetPose_ForBlueprint // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce96f0
	bool SetParentWeightArray(struct FRigElementKey InChild, struct TArray<struct FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SetParentWeightArray // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce9520
	bool SetParentWeight(struct FRigElementKey InChild, struct FRigElementKey InParent, struct FRigElementWeight InWeight, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SetParentWeight // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce9330
	void SetLocalTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetLocalTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ce9080
	void SetLocalTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetLocalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ce8ca0
	void SetGlobalTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetGlobalTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ce8a20
	void SetGlobalTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetGlobalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ce8680
	void SetCurveValueByIndex(int32_t InElementIndex, float InValue, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetCurveValueByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce8560
	void SetCurveValue(struct FRigElementKey InKey, float InValue, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetCurveValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce8340
	void SetControlVisibilityByIndex(int32_t InElementIndex, bool bVisibility); // Function ControlRig.RigHierarchy.SetControlVisibilityByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce8240
	void SetControlVisibility(struct FRigElementKey InKey, bool bVisibility); // Function ControlRig.RigHierarchy.SetControlVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce8070
	void SetControlValueByIndex(int32_t InElementIndex, struct FRigControlValue InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlValueByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce7d70
	void SetControlValue(struct FRigElementKey InKey, struct FRigControlValue InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce78f0
	void SetControlShapeTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ce76d0
	void SetControlShapeTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetControlShapeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ce7390
	void SetControlSettingsByIndex(int32_t InElementIndex, struct FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlSettingsByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce7110
	void SetControlSettings(struct FRigElementKey InKey, struct FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce6d80
	void SetControlOffsetTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ce6ae0
	void SetControlOffsetTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlOffsetTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ce6710
	void SendAutoKeyEvent(struct FRigElementKey InElement, float InOffsetInSeconds, bool bAsynchronous); // Function ControlRig.RigHierarchy.SendAutoKeyEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce65e0
	void ResetPoseToInitial(enum class ERigElementType InTypeFilter); // Function ControlRig.RigHierarchy.ResetPoseToInitial // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce6560
	void ResetCurveValues(); // Function ControlRig.RigHierarchy.ResetCurveValues // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce6540
	void Reset(); // Function ControlRig.RigHierarchy.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce6520
	int32_t Num(); // Function ControlRig.RigHierarchy.Num // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce6500
	struct FRigControlValue MakeControlValueFromVector2D(struct FVector2D InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromVector2D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1ce61c0
	struct FRigControlValue MakeControlValueFromVector(struct FVector InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromVector // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1ce6360
	struct FRigControlValue MakeControlValueFromTransformNoScale(struct FTransformNoScale InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1ce5f80
	struct FRigControlValue MakeControlValueFromTransform(struct FTransform InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1ce5c90
	struct FRigControlValue MakeControlValueFromRotator(struct FRotator InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromRotator // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1ce5ad0
	struct FRigControlValue MakeControlValueFromInt(int32_t InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromInt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1ce5970
	struct FRigControlValue MakeControlValueFromFloat(float InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1ce5810
	struct FRigControlValue MakeControlValueFromEulerTransform(struct FEulerTransform InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1ce5550
	struct FRigControlValue MakeControlValueFromBool(bool InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromBool // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1ce53f0
	bool IsValidIndex(int32_t InElementIndex); // Function ControlRig.RigHierarchy.IsValidIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce5350
	bool IsSelectedByIndex(int32_t InIndex); // Function ControlRig.RigHierarchy.IsSelectedByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce52a0
	bool IsSelected(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.IsSelected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce5120
	bool IsParentedTo(struct FRigElementKey InChild, struct FRigElementKey InParent); // Function ControlRig.RigHierarchy.IsParentedTo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce4de0
	struct FVector GetVectorFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetVectorFromControlValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1ce4c90
	struct FVector2D GetVector2DFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetVector2DFromControlValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1ce4b50
	struct FTransformNoScale GetTransformNoScaleFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1ce49c0
	struct FTransform GetTransformFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetTransformFromControlValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1ce4810
	struct TArray<struct FRigElementKey> GetSelectedKeys(enum class ERigElementType InTypeFilter); // Function ControlRig.RigHierarchy.GetSelectedKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce4730
	struct FRotator GetRotatorFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetRotatorFromControlValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1ce45d0
	struct TArray<struct FRigElementKey> GetRigidBodyKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetRigidBodyKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce4370
	struct TArray<struct FRigElementKey> GetReferenceKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetReferenceKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce4110
	struct FRigElementKey GetPreviousParent(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.GetPreviousParent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce4050
	struct FName GetPreviousName(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.GetPreviousName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce3fa0
	struct FRigPose GetPose(bool bInitial); // Function ControlRig.RigHierarchy.GetPose // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce3e10
	struct TArray<struct FRigElementWeight> GetParentWeightArray(struct FRigElementKey InChild, bool bInitial); // Function ControlRig.RigHierarchy.GetParentWeightArray // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce3b90
	struct FRigElementWeight GetParentWeight(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bInitial); // Function ControlRig.RigHierarchy.GetParentWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce3a30
	struct FTransform GetParentTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetParentTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce38a0
	struct FTransform GetParentTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetParentTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce3660
	struct TArray<struct FRigElementKey> GetParents(struct FRigElementKey InKey, bool bRecursive); // Function ControlRig.RigHierarchy.GetParents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce3cd0
	int32_t GetNumberOfParents(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetNumberOfParents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce35b0
	struct TArray<struct FRigElementKey> GetNullKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetNullKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce3350
	struct FTransform GetLocalTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetLocalTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce31a0
	struct FTransform GetLocalTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetLocalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce2f40
	struct FRigElementKey GetKey(int32_t InElementIndex); // Function ControlRig.RigHierarchy.GetKey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce2e80
	int32_t GetIntFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetIntFromControlValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1ce2d60
	int32_t GetIndex_ForBlueprint(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetIndex_ForBlueprint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce2c10
	struct FTransform GetGlobalTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce2a60
	struct FTransform GetGlobalTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce27f0
	struct FTransform GetGlobalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce2650
	struct FTransform GetGlobalControlShapeTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce2400
	struct FTransform GetGlobalControlOffsetTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce2260
	struct FTransform GetGlobalControlOffsetTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce2010
	float GetFloatFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetFloatFromControlValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1ce1ee0
	struct FRigElementKey GetFirstParent(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetFirstParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce1e20
	struct FEulerTransform GetEulerTransformFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1ce1c70
	float GetCurveValueByIndex(int32_t InElementIndex); // Function ControlRig.RigHierarchy.GetCurveValueByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce1bb0
	float GetCurveValue(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetCurveValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce1a40
	struct TArray<struct FRigElementKey> GetCurveKeys(); // Function ControlRig.RigHierarchy.GetCurveKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce1890
	struct FRigControlValue GetControlValueByIndex(int32_t InElementIndex, enum class ERigControlValueType InValueType); // Function ControlRig.RigHierarchy.GetControlValueByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce1580
	struct FRigControlValue GetControlValue(struct FRigElementKey InKey, enum class ERigControlValueType InValueType); // Function ControlRig.RigHierarchy.GetControlValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce1230
	struct URigHierarchyController* GetController(bool bCreateIfNeeded); // Function ControlRig.RigHierarchy.GetController // (Final|Native|Public|BlueprintCallable) // @ game+0x1ce17f0
	struct TArray<struct FRigElementKey> GetControlKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetControlKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce0fd0
	struct TArray<struct FRigElementKey> GetChildren(struct FRigElementKey InKey, bool bRecursive); // Function ControlRig.RigHierarchy.GetChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce0e90
	struct TArray<struct FRigElementKey> GetBoneKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetBoneKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce0c30
	struct TArray<struct FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse); // Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce0b40
	struct FRigNullElement FindNull_ForBlueprintOnly(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly // (Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce0990
	struct FRigControlElement FindControl_ForBlueprintOnly(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly // (Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce02f0
	struct FRigBoneElement FindBone_ForBlueprintOnly(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly // (Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ce00d0
	void CopyPose(struct URigHierarchy* InHierarchy, bool bCurrent, bool bInitial); // Function ControlRig.RigHierarchy.CopyPose // (Final|Native|Public|BlueprintCallable) // @ game+0x1cdffc0
	void CopyHierarchy(struct URigHierarchy* InHierarchy); // Function ControlRig.RigHierarchy.CopyHierarchy // (Final|Native|Public|BlueprintCallable) // @ game+0x1cdff30
	bool Contains_ForBlueprint(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.Contains_ForBlueprint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cdfdd0
};

// Class ControlRig.RigHierarchyController
// Size: 0xa0 (Inherited: 0x28)
struct URigHierarchyController : UObject {
	bool bReportWarningsAndErrors; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct TWeakObjectPtr<struct URigHierarchy> Hierarchy; // 0x2c(0x08)
	char pad_34[0x6c]; // 0x34(0x6c)

	bool SetSelection(struct TArray<struct FRigElementKey>& InKeys, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.SetSelection // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1cf1120
	bool SetParent(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.SetParent // (Final|Native|Public|BlueprintCallable) // @ game+0x1cf0f50
	void SetHierarchy(struct URigHierarchy* InHierarchy); // Function ControlRig.RigHierarchyController.SetHierarchy // (Final|Native|Public|BlueprintCallable) // @ game+0x1cf0ec0
	bool SetControlSettings(struct FRigElementKey InKey, struct FRigControlSettings InSettings, bool bSetupUndo); // Function ControlRig.RigHierarchyController.SetControlSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cf0d10
	bool SelectElement(struct FRigElementKey InKey, bool bSelect, bool bClearSelection); // Function ControlRig.RigHierarchyController.SelectElement // (Final|Native|Public|BlueprintCallable) // @ game+0x1cf0bd0
	struct FRigElementKey RenameElement(struct FRigElementKey InElement, struct FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection); // Function ControlRig.RigHierarchyController.RenameElement // (Final|Native|Public|BlueprintCallable) // @ game+0x1cf0a00
	bool RemoveParent(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.RemoveParent // (Final|Native|Public|BlueprintCallable) // @ game+0x1cf0830
	bool RemoveElement(struct FRigElementKey InElement, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.RemoveElement // (Final|Native|Public|BlueprintCallable) // @ game+0x1cf06f0
	bool RemoveAllParents(struct FRigElementKey InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.RemoveAllParents // (Final|Native|Public|BlueprintCallable) // @ game+0x1cf0540
	struct TArray<struct FRigElementKey> MirrorElements(struct TArray<struct FRigElementKey> InKeys, struct FRigMirrorSettings InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchyController.MirrorElements // (Final|Native|Public|BlueprintCallable) // @ game+0x1cf0240
	struct TArray<struct FRigElementKey> ImportFromText(struct FString InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchyController.ImportFromText // (Final|Native|Public|BlueprintCallable) // @ game+0x1cefff0
	struct TArray<struct FRigElementKey> ImportCurves(struct USkeleton* InSkeleton, struct FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.ImportCurves // (Final|Native|Public|BlueprintCallable) // @ game+0x1cefdd0
	struct TArray<struct FRigElementKey> ImportBones(struct USkeleton* InSkeleton, struct FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.ImportBones // (Final|Native|Public|BlueprintCallable) // @ game+0x1cefb40
	struct URigHierarchy* GetHierarchy(); // Function ControlRig.RigHierarchyController.GetHierarchy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cefb10
	struct FRigControlSettings GetControlSettings(struct FRigElementKey InKey); // Function ControlRig.RigHierarchyController.GetControlSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cef770
	struct FString ExportToText(struct TArray<struct FRigElementKey> InKeys); // Function ControlRig.RigHierarchyController.ExportToText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cef630
	struct FString ExportSelectionToText(); // Function ControlRig.RigHierarchyController.ExportSelectionToText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cef5b0
	struct TArray<struct FRigElementKey> DuplicateElements(struct TArray<struct FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchyController.DuplicateElements // (Final|Native|Public|BlueprintCallable) // @ game+0x1cef3a0
	bool DeselectElement(struct FRigElementKey InKey); // Function ControlRig.RigHierarchyController.DeselectElement // (Final|Native|Public|BlueprintCallable) // @ game+0x1cef2e0
	bool ClearSelection(); // Function ControlRig.RigHierarchyController.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x1cef280
	struct FRigElementKey AddRigidBody(struct FName InName, struct FRigElementKey InParent, struct FRigRigidBodySettings InSettings, struct FTransform InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddRigidBody // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ceefc0
	bool AddParent(struct FRigElementKey InChild, struct FRigElementKey InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo); // Function ControlRig.RigHierarchyController.AddParent // (Final|Native|Public|BlueprintCallable) // @ game+0x1ceedf0
	struct FRigElementKey AddNull(struct FName InName, struct FRigElementKey InParent, struct FTransform InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddNull // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1ceeb30
	struct FRigElementKey AddCurve(struct FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddCurve // (Final|Native|Public|BlueprintCallable) // @ game+0x1cee990
	struct FRigElementKey AddControl_ForBlueprint(struct FName InName, struct FRigElementKey InParent, struct FRigControlSettings InSettings, struct FRigControlValue InValue, bool bSetupUndo); // Function ControlRig.RigHierarchyController.AddControl_ForBlueprint // (Final|Native|Public|BlueprintCallable) // @ game+0x1cee480
	struct FRigElementKey AddBone(struct FName InName, struct FRigElementKey InParent, struct FTransform InTransform, bool bTransformInGlobal, enum class ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddBone // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1cee180
};

