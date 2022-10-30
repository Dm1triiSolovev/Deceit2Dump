// Class GeometryFramework.BaseDynamicMeshComponent
// Size: 0x5c0 (Inherited: 0x570)
struct UBaseDynamicMeshComponent : UMeshComponent {
	char pad_570[0x18]; // 0x570(0x18)
	bool bExplicitShowWireframe; // 0x588(0x01)
	bool bEnableViewModeOverrides; // 0x589(0x01)
	char pad_58A[0x6]; // 0x58a(0x06)
	struct UMaterialInterface* OverrideRenderMaterial; // 0x590(0x08)
	struct UMaterialInterface* SecondaryRenderMaterial; // 0x598(0x08)
	char pad_5A0[0x1]; // 0x5a0(0x01)
	bool bEnableRayTracing; // 0x5a1(0x01)
	char pad_5A2[0x6]; // 0x5a2(0x06)
	struct TArray<struct UMaterialInterface*> BaseMaterials; // 0x5a8(0x10)
	char pad_5B8[0x8]; // 0x5b8(0x08)

	void SetViewModeOverridesEnabled(bool bEnabled); // Function GeometryFramework.BaseDynamicMeshComponent.SetViewModeOverridesEnabled // (Native|Public|BlueprintCallable) // @ game+0x4e43700
	void SetShadowsEnabled(bool bEnabled); // Function GeometryFramework.BaseDynamicMeshComponent.SetShadowsEnabled // (Native|Public|BlueprintCallable) // @ game+0x4e435f0
	void SetSecondaryRenderMaterial(struct UMaterialInterface* Material); // Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryRenderMaterial // (Native|Public|BlueprintCallable) // @ game+0x4b6f7d0
	void SetSecondaryBuffersVisibility(bool bSetVisible); // Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryBuffersVisibility // (Native|Public|BlueprintCallable) // @ game+0x4e43560
	void SetOverrideRenderMaterial(struct UMaterialInterface* Material); // Function GeometryFramework.BaseDynamicMeshComponent.SetOverrideRenderMaterial // (Native|Public|BlueprintCallable) // @ game+0x4e434d0
	void SetEnableWireframeRenderPass(bool bEnable); // Function GeometryFramework.BaseDynamicMeshComponent.SetEnableWireframeRenderPass // (Native|Public|BlueprintCallable) // @ game+0x4e43440
	void SetEnableRaytracing(bool bSetEnabled); // Function GeometryFramework.BaseDynamicMeshComponent.SetEnableRaytracing // (Native|Public|BlueprintCallable) // @ game+0x4e433b0
	bool HasOverrideRenderMaterial(int32_t K); // Function GeometryFramework.BaseDynamicMeshComponent.HasOverrideRenderMaterial // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e42eb0
	bool GetViewModeOverridesEnabled(); // Function GeometryFramework.BaseDynamicMeshComponent.GetViewModeOverridesEnabled // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e42e80
	bool GetShadowsEnabled(); // Function GeometryFramework.BaseDynamicMeshComponent.GetShadowsEnabled // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e42e00
	struct UMaterialInterface* GetSecondaryRenderMaterial(); // Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryRenderMaterial // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e42dd0
	bool GetSecondaryBuffersVisibility(); // Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryBuffersVisibility // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e42da0
	struct UMaterialInterface* GetOverrideRenderMaterial(int32_t MaterialIndex); // Function GeometryFramework.BaseDynamicMeshComponent.GetOverrideRenderMaterial // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e42d00
	bool GetEnableWireframeRenderPass(); // Function GeometryFramework.BaseDynamicMeshComponent.GetEnableWireframeRenderPass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e42cd0
	bool GetEnableRaytracing(); // Function GeometryFramework.BaseDynamicMeshComponent.GetEnableRaytracing // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e42ca0
	struct UDynamicMesh* GetDynamicMesh(); // Function GeometryFramework.BaseDynamicMeshComponent.GetDynamicMesh // (Native|Public|BlueprintCallable) // @ game+0x4e42c50
	void ClearSecondaryRenderMaterial(); // Function GeometryFramework.BaseDynamicMeshComponent.ClearSecondaryRenderMaterial // (Native|Public|BlueprintCallable) // @ game+0x4b6f7b0
	void ClearOverrideRenderMaterial(); // Function GeometryFramework.BaseDynamicMeshComponent.ClearOverrideRenderMaterial // (Native|Public|BlueprintCallable) // @ game+0x4e42af0
};

// Class GeometryFramework.DynamicMeshActor
// Size: 0x290 (Inherited: 0x278)
struct ADynamicMeshActor : AActor {
	struct UDynamicMeshComponent* DynamicMeshComponent; // 0x278(0x08)
	bool bEnableComputeMeshPool; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct UDynamicMeshPool* DynamicMeshPool; // 0x288(0x08)

	bool ReleaseComputeMesh(struct UDynamicMesh* Mesh); // Function GeometryFramework.DynamicMeshActor.ReleaseComputeMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x4e42fa0
	void ReleaseAllComputeMeshes(); // Function GeometryFramework.DynamicMeshActor.ReleaseAllComputeMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x4e42f80
	struct UDynamicMeshComponent* GetDynamicMeshComponent(); // Function GeometryFramework.DynamicMeshActor.GetDynamicMeshComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e42c80
	struct UDynamicMeshPool* GetComputeMeshPool(); // Function GeometryFramework.DynamicMeshActor.GetComputeMeshPool // (Final|Native|Public|BlueprintCallable) // @ game+0x4e42c20
	void FreeAllComputeMeshes(); // Function GeometryFramework.DynamicMeshActor.FreeAllComputeMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x4e42be0
	struct UDynamicMesh* AllocateComputeMesh(); // Function GeometryFramework.DynamicMeshActor.AllocateComputeMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x4e42ac0
};

// Class GeometryFramework.DynamicMeshComponent
// Size: 0x750 (Inherited: 0x5c0)
struct UDynamicMeshComponent : UBaseDynamicMeshComponent {
	struct UDynamicMesh* MeshObject; // 0x5c0(0x08)
	char pad_5C8[0xf8]; // 0x5c8(0xf8)
	enum class EDynamicMeshComponentTangentsMode TangentsType; // 0x6c0(0x01)
	char pad_6C1[0x3f]; // 0x6c1(0x3f)
	enum class ECollisionTraceFlag CollisionType; // 0x700(0x01)
	bool bEnableComplexCollision; // 0x701(0x01)
	bool bDeferCollisionUpdates; // 0x702(0x01)
	char pad_703[0x5]; // 0x703(0x05)
	struct UBodySetup* MeshBodySetup; // 0x708(0x08)
	char pad_710[0x40]; // 0x710(0x40)

	bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots); // Function GeometryFramework.DynamicMeshComponent.ValidateMaterialSlots // (Final|Native|Public|BlueprintCallable) // @ game+0x4e43820
	void UpdateCollision(bool bOnlyIfPending); // Function GeometryFramework.DynamicMeshComponent.UpdateCollision // (Native|Public|BlueprintCallable) // @ game+0x4e43790
	void SetTangentsType(enum class EDynamicMeshComponentTangentsMode NewTangentsType); // Function GeometryFramework.DynamicMeshComponent.SetTangentsType // (Final|Native|Public|BlueprintCallable) // @ game+0x4e43680
	void SetDynamicMesh(struct UDynamicMesh* NewMesh); // Function GeometryFramework.DynamicMeshComponent.SetDynamicMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x4e43320
	void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate); // Function GeometryFramework.DynamicMeshComponent.SetDeferredCollisionUpdatesEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x4e43250
	void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate); // Function GeometryFramework.DynamicMeshComponent.SetComplexAsSimpleCollisionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x4e43180
	enum class EDynamicMeshComponentTangentsMode GetTangentsType(); // Function GeometryFramework.DynamicMeshComponent.GetTangentsType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e42e30
	void EnableComplexAsSimpleCollision(); // Function GeometryFramework.DynamicMeshComponent.EnableComplexAsSimpleCollision // (Final|Native|Public|BlueprintCallable) // @ game+0x4e42bc0
	void ConfigureMaterialSet(struct TArray<struct UMaterialInterface*>& NewMaterialSet); // Function GeometryFramework.DynamicMeshComponent.ConfigureMaterialSet // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e42b10
};

// Class GeometryFramework.MeshCommandChangeTarget
// Size: 0x28 (Inherited: 0x28)
struct UMeshCommandChangeTarget : UInterface {
};

// Class GeometryFramework.MeshReplacementCommandChangeTarget
// Size: 0x28 (Inherited: 0x28)
struct UMeshReplacementCommandChangeTarget : UInterface {
};

// Class GeometryFramework.MeshVertexCommandChangeTarget
// Size: 0x28 (Inherited: 0x28)
struct UMeshVertexCommandChangeTarget : UInterface {
};

// Class GeometryFramework.DynamicMeshGenerator
// Size: 0x28 (Inherited: 0x28)
struct UDynamicMeshGenerator : UObject {
};

// Class GeometryFramework.DynamicMesh
// Size: 0xb0 (Inherited: 0x28)
struct UDynamicMesh : UObject {
	char pad_28[0x48]; // 0x28(0x48)
	struct FMulticastInlineDelegate MeshModifiedBPEvent; // 0x70(0x10)
	char pad_80[0x20]; // 0x80(0x20)
	struct UDynamicMeshGenerator* MeshGenerator; // 0xa0(0x08)
	bool bEnableMeshGenerator; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	struct UDynamicMesh* ResetToCube(); // Function GeometryFramework.DynamicMesh.ResetToCube // (Final|Native|Public|BlueprintCallable) // @ game+0x4e430a0
	struct UDynamicMesh* Reset(); // Function GeometryFramework.DynamicMesh.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0x4e43070
	bool IsEmpty(); // Function GeometryFramework.DynamicMesh.IsEmpty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e42f50
	int32_t GetTriangleCount(); // Function GeometryFramework.DynamicMesh.GetTriangleCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e42e50
};

// Class GeometryFramework.DynamicMeshPool
// Size: 0x48 (Inherited: 0x28)
struct UDynamicMeshPool : UObject {
	struct TArray<struct UDynamicMesh*> CachedMeshes; // 0x28(0x10)
	struct TArray<struct UDynamicMesh*> AllCreatedMeshes; // 0x38(0x10)

	void ReturnMesh(struct UDynamicMesh* Mesh); // Function GeometryFramework.DynamicMeshPool.ReturnMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x4e430f0
	void ReturnAllMeshes(); // Function GeometryFramework.DynamicMeshPool.ReturnAllMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x4e430d0
	struct UDynamicMesh* RequestMesh(); // Function GeometryFramework.DynamicMeshPool.RequestMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x4e43040
	void FreeAllMeshes(); // Function GeometryFramework.DynamicMeshPool.FreeAllMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x4e42c00
};

