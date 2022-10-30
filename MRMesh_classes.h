// Class MRMesh.MeshReconstructorBase
// Size: 0x28 (Inherited: 0x28)
struct UMeshReconstructorBase : UObject {

	void StopReconstruction(); // Function MRMesh.MeshReconstructorBase.StopReconstruction // (Native|Public|BlueprintCallable) // @ game+0x3929e50
	void StartReconstruction(); // Function MRMesh.MeshReconstructorBase.StartReconstruction // (Native|Public|BlueprintCallable) // @ game+0x19fbd60
	void PauseReconstruction(); // Function MRMesh.MeshReconstructorBase.PauseReconstruction // (Native|Public|BlueprintCallable) // @ game+0x122ec10
	bool IsReconstructionStarted(); // Function MRMesh.MeshReconstructorBase.IsReconstructionStarted // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19fba90
	bool IsReconstructionPaused(); // Function MRMesh.MeshReconstructorBase.IsReconstructionPaused // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a303d0
	void DisconnectMRMesh(); // Function MRMesh.MeshReconstructorBase.DisconnectMRMesh // (Native|Public) // @ game+0x1a008d0
	void ConnectMRMesh(struct UMRMeshComponent* Mesh); // Function MRMesh.MeshReconstructorBase.ConnectMRMesh // (Native|Public) // @ game+0xe79620
};

// Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x320 (Inherited: 0x2b0)
struct UMockDataMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x2b0(0x10)
	bool ScanWorld; // 0x2c0(0x01)
	bool RequestNormals; // 0x2c1(0x01)
	bool RequestVertexConfidence; // 0x2c2(0x01)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x2c3(0x01)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct TArray<struct FColor> BlockVertexColors; // 0x2c8(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x2d8(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x2e8(0x10)
	float UpdateInterval; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct UMRMeshComponent* MRMesh; // 0x300(0x08)
	char pad_308[0x18]; // 0x308(0x18)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2552560
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x3929b20
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x3929a90
};

// Class MRMesh.MRMeshBodyHolder
// Size: 0x230 (Inherited: 0x28)
struct UMRMeshBodyHolder : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UBodySetup* BodySetup; // 0x30(0x08)
	struct FBodyInstance BodyInstance; // 0x38(0x190)
	char pad_1C8[0x68]; // 0x1c8(0x68)
};

// Class MRMesh.MRMeshComponent
// Size: 0x5c0 (Inherited: 0x540)
struct UMRMeshComponent : UPrimitiveComponent {
	char pad_540[0x8]; // 0x540(0x08)
	struct UMaterialInterface* Material; // 0x548(0x08)
	struct UMaterialInterface* WireframeMaterial; // 0x550(0x08)
	bool bCreateMeshProxySections; // 0x558(0x01)
	bool bUpdateNavMeshOnMeshUpdate; // 0x559(0x01)
	char pad_55A[0x1]; // 0x55a(0x01)
	bool bNeverCreateCollisionMesh; // 0x55b(0x01)
	char pad_55C[0x44]; // 0x55c(0x44)
	struct TArray<struct UMRMeshBodyHolder*> BodyHolders; // 0x5a0(0x10)
	char pad_5B0[0x10]; // 0x5b0(0x10)

	void SetWireframeMaterial(struct UMaterialInterface* InMaterial); // Function MRMesh.MRMeshComponent.SetWireframeMaterial // (Native|Public|BlueprintCallable) // @ game+0x1cd29e0
	void SetWireframeColor(struct FLinearColor& InColor); // Function MRMesh.MRMeshComponent.SetWireframeColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3929dc0
	void SetUseWireframe(bool bUseWireframe); // Function MRMesh.MRMeshComponent.SetUseWireframe // (Final|Native|Public|BlueprintCallable) // @ game+0x3929d30
	void SetEnableMeshOcclusion(bool bEnable); // Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion // (Final|Native|Public|BlueprintCallable) // @ game+0x3929ca0
	void RequestNavMeshUpdate(); // Function MRMesh.MRMeshComponent.RequestNavMeshUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x3929c80
	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3929c40
	struct FLinearColor GetWireframeColor(); // Function MRMesh.MRMeshComponent.GetWireframeColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3929c10
	bool GetUseWireframe(); // Function MRMesh.MRMeshComponent.GetUseWireframe // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3929bf0
	bool GetEnableMeshOcclusion(); // Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3929bd0
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x3929bb0
	void Clear(); // Function MRMesh.MRMeshComponent.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x3929a60
};

