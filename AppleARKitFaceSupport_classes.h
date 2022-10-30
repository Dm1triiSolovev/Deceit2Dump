// Class AppleARKitFaceSupport.AppleARKitFaceMeshComponent
// Size: 0x6e0 (Inherited: 0x5f0)
struct UAppleARKitFaceMeshComponent : UProceduralMeshComponent {
	bool bWantsMeshUpdates; // 0x5e8(0x01)
	bool bWantsCollision; // 0x5e9(0x01)
	bool bAutoBindToLocalFaceMesh; // 0x5ea(0x01)
	enum class EARFaceComponentTransformMixing TransformSetting; // 0x5eb(0x01)
	bool bFlipTrackedRotation; // 0x5ec(0x01)
	struct UMaterialInterface* FaceMaterial; // 0x5f0(0x08)
	struct FName LiveLinkSubjectName; // 0x5f8(0x08)
	struct TArray<struct FNetQuantizeFaceCurve> RemoteCurves; // 0x600(0x10)
	char pad_615[0xcb]; // 0x615(0xcb)

	void UpdateMeshFromBlendShapes(); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.UpdateMeshFromBlendShapes // (Final|Native|Public|BlueprintCallable) // @ game+0x1de4190
	void UpdateMesh(struct TArray<struct FVector>& Vertices); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.UpdateMesh // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1de40e0
	void SetBlendShapes(struct TMap<enum class EARFaceBlendShape, float>& InBlendShapes); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.SetBlendShapes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1de3fa0
	void SetBlendShapeAmount(enum class EARFaceBlendShape BlendShape, float Amount); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.SetBlendShapeAmount // (Final|Native|Public|BlueprintCallable) // @ game+0x1de3ed0
	void SetAutoBind(bool bAutoBind); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.SetAutoBind // (Final|Native|Public|BlueprintCallable) // @ game+0x1de3e40
	void ServerUpdateFaceCurves(struct TArray<struct FNetQuantizeFaceCurve> ClientCurves); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.ServerUpdateFaceCurves // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x1de3d80
	void PublishViaLiveLink(struct FName SubjectName); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.PublishViaLiveLink // (Final|Native|Public|BlueprintCallable) // @ game+0x1de3cf0
	void OnRep_RemoteCurves(); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.OnRep_RemoteCurves // (Final|Native|Private) // @ game+0x1de3cd0
	struct FTransform GetTransform(); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1de3c40
	float GetLastUpdateTimestamp(); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetLastUpdateTimestamp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1de3c10
	int32_t GetLastUpdateFrameNumber(); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetLastUpdateFrameNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1de3be0
	float GetFaceBlendShapeAmount(enum class EARFaceBlendShape BlendShape); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetFaceBlendShapeAmount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1de3b50
	void CreateMesh(struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector2D>& UV0); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.CreateMesh // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1de39d0
};

