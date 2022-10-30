// Class VariantManagerContent.LevelVariantSets
// Size: 0x90 (Inherited: 0x28)
struct ULevelVariantSets : UObject {
	ClassPtrProperty DirectorClass; // 0x28(0x08)
	struct TArray<struct UVariantSet*> VariantSets; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)

	struct UVariantSet* GetVariantSetByName(struct FString VariantSetName); // Function VariantManagerContent.LevelVariantSets.GetVariantSetByName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2072a70
	struct UVariantSet* GetVariantSet(int32_t VariantSetIndex); // Function VariantManagerContent.LevelVariantSets.GetVariantSet // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x20729d0
	int32_t GetNumVariantSets(); // Function VariantManagerContent.LevelVariantSets.GetNumVariantSets // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x20725c0
};

// Class VariantManagerContent.LevelVariantSetsActor
// Size: 0x2e0 (Inherited: 0x278)
struct ALevelVariantSetsActor : AActor {
	struct FSoftObjectPath LevelVariantSets; // 0x278(0x18)
	struct TMap<ClassPtrProperty, struct ULevelVariantSetsFunctionDirector*> DirectorInstances; // 0x290(0x50)

	bool SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName // (Final|Native|Public|BlueprintCallable) // @ game+0x20737f0
	bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x2073720
	void SetLevelVariantSets(struct ULevelVariantSets* InVariantSets); // Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets // (Final|Native|Public|BlueprintCallable) // @ game+0x2072f50
	struct ULevelVariantSets* GetLevelVariantSets(bool bLoad); // Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets // (Final|Native|Public|BlueprintCallable) // @ game+0x20724c0
};

// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// Size: 0x40 (Inherited: 0x28)
struct ULevelVariantSetsFunctionDirector : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class VariantManagerContent.PropertyValue
// Size: 0x1b8 (Inherited: 0x28)
struct UPropertyValue : UObject {
	char pad_28[0x60]; // 0x28(0x60)
	struct TArray<struct TFieldPath<FProperty>> Properties; // 0x88(0x10)
	struct TArray<int32_t> PropertyIndices; // 0x98(0x10)
	struct TArray<struct FCapturedPropSegment> CapturedPropSegments; // 0xa8(0x10)
	struct FString FullDisplayString; // 0xb8(0x10)
	struct FName PropertySetterName; // 0xc8(0x08)
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults; // 0xd0(0x50)
	bool bHasRecordedData; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	ClassPtrProperty LeafPropertyClass; // 0x128(0x08)
	char pad_130[0x8]; // 0x130(0x08)
	struct TArray<char> ValueBytes; // 0x138(0x10)
	enum class EPropertyValueCategory PropCategory; // 0x148(0x01)
	char pad_149[0x6f]; // 0x149(0x6f)

	bool HasRecordedData(); // Function VariantManagerContent.PropertyValue.HasRecordedData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2072b70
	struct FText GetPropertyTooltip(); // Function VariantManagerContent.PropertyValue.GetPropertyTooltip // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2072700
	struct FString GetFullDisplayString(); // Function VariantManagerContent.PropertyValue.GetFullDisplayString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2072480
};

// Class VariantManagerContent.PropertyValueTransform
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueTransform : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueVisibility
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueVisibility : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueColor
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueColor : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueMaterial
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueMaterial : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueOption
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueOption : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueSoftObject
// Size: 0x1b8 (Inherited: 0x1b8)
struct UPropertyValueSoftObject : UPropertyValue {
};

// Class VariantManagerContent.SwitchActor
// Size: 0x2a0 (Inherited: 0x278)
struct ASwitchActor : AActor {
	char pad_278[0x18]; // 0x278(0x18)
	struct USceneComponent* SceneComponent; // 0x290(0x08)
	int32_t LastSelectedOption; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)

	void SelectOption(int32_t OptionIndex); // Function VariantManagerContent.SwitchActor.SelectOption // (Final|Native|Public|BlueprintCallable) // @ game+0x2072bd0
	int32_t GetSelectedOption(); // Function VariantManagerContent.SwitchActor.GetSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x20727a0
	struct TArray<struct AActor*> GetOptions(); // Function VariantManagerContent.SwitchActor.GetOptions // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2072620
};

// Class VariantManagerContent.Variant
// Size: 0x80 (Inherited: 0x28)
struct UVariant : UObject {
	struct TArray<struct FVariantDependency> Dependencies; // 0x28(0x10)
	struct FText DisplayText; // 0x38(0x18)
	char pad_50[0x18]; // 0x50(0x18)
	struct TArray<struct UVariantObjectBinding*> ObjectBindings; // 0x68(0x10)
	struct UTexture2D* Thumbnail; // 0x78(0x08)

	void SwitchOn(); // Function VariantManagerContent.Variant.SwitchOn // (Final|Native|Public|BlueprintCallable) // @ game+0x2073700
	void SetThumbnailFromTexture(struct UTexture2D* NewThumbnail); // Function VariantManagerContent.Variant.SetThumbnailFromTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x20735e0
	void SetThumbnailFromFile(struct FString FilePath); // Function VariantManagerContent.Variant.SetThumbnailFromFile // (Final|Native|Public|BlueprintCallable) // @ game+0x2073400
	void SetThumbnailFromEditorViewport(); // Function VariantManagerContent.Variant.SetThumbnailFromEditorViewport // (Final|Native|Public|BlueprintCallable) // @ game+0xacd350
	void SetThumbnailFromCamera(struct UObject* WorldContextObject, struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // Function VariantManagerContent.Variant.SetThumbnailFromCamera // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2072fe0
	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.Variant.SetDisplayText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2072db0
	void SetDependency(int32_t Index, struct FVariantDependency& Dependency); // Function VariantManagerContent.Variant.SetDependency // (Final|Native|Public|HasOutParms) // @ game+0x2072c60
	bool IsActive(); // Function VariantManagerContent.Variant.IsActive // (Final|Native|Public|BlueprintCallable) // @ game+0x2072ba0
	struct UTexture2D* GetThumbnail(); // Function VariantManagerContent.Variant.GetThumbnail // (Final|Native|Public|BlueprintCallable) // @ game+0x20727d0
	struct UVariantSet* GetParent(); // Function VariantManagerContent.Variant.GetParent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x20726a0
	int32_t GetNumDependencies(); // Function VariantManagerContent.Variant.GetNumDependencies // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2072590
	int32_t GetNumActors(); // Function VariantManagerContent.Variant.GetNumActors // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2072560
	struct FText GetDisplayText(); // Function VariantManagerContent.Variant.GetDisplayText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2072340
	struct TArray<struct UVariant*> GetDependents(struct ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies); // Function VariantManagerContent.Variant.GetDependents // (Final|Native|Public|BlueprintCallable) // @ game+0x2072230
	struct FVariantDependency GetDependency(int32_t Index); // Function VariantManagerContent.Variant.GetDependency // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2072190
	struct AActor* GetActor(int32_t ActorIndex); // Function VariantManagerContent.Variant.GetActor // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x20720f0
	void DeleteDependency(int32_t Index); // Function VariantManagerContent.Variant.DeleteDependency // (Final|Native|Public) // @ game+0x2072060
	int32_t AddDependency(struct FVariantDependency& Dependency); // Function VariantManagerContent.Variant.AddDependency // (Final|Native|Public|HasOutParms) // @ game+0x2071f30
};

// Class VariantManagerContent.VariantObjectBinding
// Size: 0x90 (Inherited: 0x28)
struct UVariantObjectBinding : UObject {
	struct FString CachedActorLabel; // 0x28(0x10)
	struct FSoftObjectPath ObjectPtr; // 0x38(0x18)
	LazyObjectProperty LazyObjectPtr; // 0x50(0x1c)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct UPropertyValue*> CapturedProperties; // 0x70(0x10)
	struct TArray<struct FFunctionCaller> FunctionCallers; // 0x80(0x10)
};

// Class VariantManagerContent.VariantSet
// Size: 0x78 (Inherited: 0x28)
struct UVariantSet : UObject {
	struct FText DisplayText; // 0x28(0x18)
	char pad_40[0x18]; // 0x40(0x18)
	bool bExpanded; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<struct UVariant*> Variants; // 0x60(0x10)
	struct UTexture2D* Thumbnail; // 0x70(0x08)

	void SetThumbnailFromTexture(struct UTexture2D* NewThumbnail); // Function VariantManagerContent.VariantSet.SetThumbnailFromTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x2073670
	void SetThumbnailFromFile(struct FString FilePath); // Function VariantManagerContent.VariantSet.SetThumbnailFromFile // (Final|Native|Public|BlueprintCallable) // @ game+0x20734f0
	void SetThumbnailFromEditorViewport(); // Function VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport // (Final|Native|Public|BlueprintCallable) // @ game+0xacd350
	void SetThumbnailFromCamera(struct UObject* WorldContextObject, struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // Function VariantManagerContent.VariantSet.SetThumbnailFromCamera // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x20731f0
	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.VariantSet.SetDisplayText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2072e80
	struct UVariant* GetVariantByName(struct FString VariantName); // Function VariantManagerContent.VariantSet.GetVariantByName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x20728d0
	struct UVariant* GetVariant(int32_t VariantIndex); // Function VariantManagerContent.VariantSet.GetVariant // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2072830
	struct UTexture2D* GetThumbnail(); // Function VariantManagerContent.VariantSet.GetThumbnail // (Final|Native|Public|BlueprintCallable) // @ game+0x2072800
	struct ULevelVariantSets* GetParent(); // Function VariantManagerContent.VariantSet.GetParent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x20726d0
	int32_t GetNumVariants(); // Function VariantManagerContent.VariantSet.GetNumVariants // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x20725f0
	struct FText GetDisplayText(); // Function VariantManagerContent.VariantSet.GetDisplayText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x20723e0
};

