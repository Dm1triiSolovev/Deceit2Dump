// Class ARUtilities.ARLiveLinkRetargetAsset
// Size: 0xb0 (Inherited: 0x28)
struct UARLiveLinkRetargetAsset : ULiveLinkRetargetAsset {
	enum class EARLiveLinkSourceType SourceType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TMap<struct FName, struct FName> BoneMap; // 0x30(0x50)
	struct FARKitPoseTrackingConfig ARKitPoseTrackingConfig; // 0x80(0x30)
};

// Class ARUtilities.ARPassthroughManager
// Size: 0x290 (Inherited: 0x278)
struct AARPassthroughManager : AActor {
	struct TArray<struct UARComponent*> ARComponentClasses; // 0x278(0x10)
	struct UPassthroughMaterialUpdateComponent* PassthroughUpdateComponent; // 0x288(0x08)

	struct UPassthroughMaterialUpdateComponent* GetPassthroughMaterialUpdateComponent(); // Function ARUtilities.ARPassthroughManager.GetPassthroughMaterialUpdateComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1dfa700
};

// Class ARUtilities.ARUtilitiesFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UARUtilitiesFunctionLibrary : UBlueprintFunctionLibrary {

	void UpdateWorldToMeterScale(struct UMaterialInstanceDynamic* MaterialInstance, float WorldToMeterScale); // Function ARUtilities.ARUtilitiesFunctionLibrary.UpdateWorldToMeterScale // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1dfaa70
	void UpdateSceneDepthTexture(struct UMaterialInstanceDynamic* MaterialInstance, struct UTexture* SceneDepthTexture, float DepthToMeterScale); // Function ARUtilities.ARUtilitiesFunctionLibrary.UpdateSceneDepthTexture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1dfa960
	void UpdateCameraTextureParam(struct UMaterialInstanceDynamic* MaterialInstance, struct UTexture* CameraTexture, float ColorScale); // Function ARUtilities.ARUtilitiesFunctionLibrary.UpdateCameraTextureParam // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1dfa850
};

// Class ARUtilities.PassthroughMaterialUpdateComponent
// Size: 0xf8 (Inherited: 0xb0)
struct UPassthroughMaterialUpdateComponent : UActorComponent {
	enum class EARTextureType TextureType; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct UMaterialInterface* PassthroughMaterial; // 0xb8(0x08)
	struct UMaterialInterface* PassthroughMaterialExternalTexture; // 0xc0(0x08)
	struct FLinearColor PassthroughDebugColor; // 0xc8(0x10)
	struct TArray<struct UPrimitiveComponent*> AffectedComponents; // 0xd8(0x10)
	struct TArray<struct UPrimitiveComponent*> PendingComponents; // 0xe8(0x10)

	void SetPassthroughDebugColor(struct FLinearColor NewDebugColor); // Function ARUtilities.PassthroughMaterialUpdateComponent.SetPassthroughDebugColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1dfa7c0
	void RemoveAffectedComponent(struct UPrimitiveComponent* InComponent); // Function ARUtilities.PassthroughMaterialUpdateComponent.RemoveAffectedComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1dfa730
	void AddAffectedComponent(struct UPrimitiveComponent* InComponent); // Function ARUtilities.PassthroughMaterialUpdateComponent.AddAffectedComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1dfa670
};

