// Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x560 (Inherited: 0x2b0)
struct UChaosDestructionListener : USceneComponent {
	char bIsCollisionEventListeningEnabled : 1; // 0x2b0(0x01)
	char bIsBreakingEventListeningEnabled : 1; // 0x2b0(0x01)
	char bIsTrailingEventListeningEnabled : 1; // 0x2b0(0x01)
	char bIsRemovalEventListeningEnabled : 1; // 0x2b0(0x01)
	char pad_2B0_4 : 4; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x2b4(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x2cc(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x2e4(0x18)
	struct FChaosRemovalEventRequestSettings RemovalEventRequestSettings; // 0x2fc(0x10)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors; // 0x310(0x50)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors; // 0x360(0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x3b0(0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x3c0(0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x3d0(0x10)
	struct FMulticastInlineDelegate OnRemovalEvents; // 0x3e0(0x10)
	char pad_3F0[0x170]; // 0x3f0(0x170)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d00060
	void SortRemovalEvents(struct TArray<struct FChaosRemovalEventData>& RemovalEvents, enum class EChaosRemovalSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3cfff60
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3cffe60
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3cffd60
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3cffcc0
	void SetTrailingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x3cffc30
	void SetRemovalEventRequestSettings(struct FChaosRemovalEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3cffb90
	void SetRemovalEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x3cffb00
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3cff940
	void SetCollisionEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x3cff8b0
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3cff810
	void SetBreakingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x3cff780
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x3cff6f0
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb5370
	bool IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cff3d0
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x3cff100
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb5370
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x288 (Inherited: 0x278)
struct AGeometryCollectionActor : AActor {
	struct UGeometryCollectionComponent* GeometryCollectionComponent; // 0x278(0x08)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x280(0x08)

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cff540
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x50 (Inherited: 0x28)
struct UGeometryCollectionCache : UObject {
	struct FRecordedTransformTrack RecordedData; // 0x28(0x10)
	struct UGeometryCollection* SupportedCollection; // 0x38(0x08)
	struct FGuid CompatibleCollectionState; // 0x40(0x10)
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0xab0 (Inherited: 0x570)
struct UGeometryCollectionComponent : UMeshComponent {
	struct AChaosSolverActor* ChaosSolverActor; // 0x570(0x08)
	char pad_578[0xe8]; // 0x578(0xe8)
	struct UGeometryCollection* RestCollection; // 0x660(0x08)
	struct TArray<struct AFieldSystemActor*> InitializationFields; // 0x668(0x10)
	bool Simulating; // 0x678(0x01)
	char pad_679[0x7]; // 0x679(0x07)
	enum class EObjectStateTypeEnum ObjectType; // 0x680(0x01)
	bool bForceMotionBlur; // 0x681(0x01)
	bool EnableClustering; // 0x682(0x01)
	char pad_683[0x1]; // 0x683(0x01)
	int32_t ClusterGroupIndex; // 0x684(0x04)
	int32_t MaxClusterLevel; // 0x688(0x04)
	char pad_68C[0x4]; // 0x68c(0x04)
	struct TArray<float> DamageThreshold; // 0x690(0x10)
	bool bUseSizeSpecificDamageThreshold; // 0x6a0(0x01)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x6a1(0x01)
	char pad_6A2[0x2]; // 0x6a2(0x02)
	int32_t CollisionGroup; // 0x6a4(0x04)
	float CollisionSampleFraction; // 0x6a8(0x04)
	float LinearEtherDrag; // 0x6ac(0x04)
	float AngularEtherDrag; // 0x6b0(0x04)
	char pad_6B4[0x4]; // 0x6b4(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x6b8(0x08)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x6c0(0x01)
	char pad_6C1[0x7]; // 0x6c1(0x07)
	struct FVector InitialLinearVelocity; // 0x6c8(0x18)
	struct FVector InitialAngularVelocity; // 0x6e0(0x18)
	struct UPhysicalMaterial* PhysicalMaterialOverride; // 0x6f8(0x08)
	struct FGeomComponentCacheParameters CacheParameters; // 0x700(0x50)
	struct TArray<struct FTransform> RestTransforms; // 0x750(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x760(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x770(0x10)
	char pad_780[0x18]; // 0x780(0x18)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x798(0x10)
	struct FMulticastInlineDelegate OnChaosRemovalEvent; // 0x7a8(0x10)
	float DesiredCacheTime; // 0x7b8(0x04)
	bool CachePlayback; // 0x7bc(0x01)
	char pad_7BD[0x3]; // 0x7bd(0x03)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x7c0(0x10)
	bool bNotifyBreaks; // 0x7d0(0x01)
	bool bNotifyCollisions; // 0x7d1(0x01)
	bool bNotifyTrailing; // 0x7d2(0x01)
	bool bNotifyRemovals; // 0x7d3(0x01)
	bool bStoreVelocities; // 0x7d4(0x01)
	bool bShowBoneColors; // 0x7d5(0x01)
	bool bEnableReplication; // 0x7d6(0x01)
	bool bEnableAbandonAfterLevel; // 0x7d7(0x01)
	int32_t ReplicationAbandonClusterLevel; // 0x7d8(0x04)
	char pad_7DC[0x4]; // 0x7dc(0x04)
	struct FGeometryCollectionRepData RepData; // 0x7e0(0x18)
	char pad_7F8[0x288]; // 0x7f8(0x288)
	struct UBodySetup* DummyBodySetup; // 0xa80(0x08)
	char pad_A88[0x8]; // 0xa88(0x08)
	struct TArray<struct UInstancedStaticMeshComponent*> EmbeddedGeometryComponents; // 0xa90(0x10)
	char pad_AA0[0x10]; // 0xaa0(0x10)

	void SetNotifyRemovals(bool bNewNotifyRemovals); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals // (Final|Native|Public|BlueprintCallable) // @ game+0x3cffa70
	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks // (Final|Native|Public|BlueprintCallable) // @ game+0x3cff9e0
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void OnRep_RepData(struct FGeometryCollectionRepData& OldData); // Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData // (Final|Native|Protected|HasOutParms) // @ game+0x3cff490
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2552560
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2552560
	void NetAbandonCluster(int32_t TransformIndex); // Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x3cff400
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x3cff270
	void ApplyKinematicField(float Radius, struct FVector position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3cff190
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x338 (Inherited: 0x278)
struct AGeometryCollectionDebugDrawActor : AActor {
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x280(0x18)
	bool bDebugDrawWholeCollection; // 0x298(0x01)
	bool bDebugDrawHierarchy; // 0x299(0x01)
	bool bDebugDrawClustering; // 0x29a(0x01)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x29b(0x01)
	bool bShowRigidBodyId; // 0x29c(0x01)
	bool bShowRigidBodyCollision; // 0x29d(0x01)
	bool bCollisionAtOrigin; // 0x29e(0x01)
	bool bShowRigidBodyTransform; // 0x29f(0x01)
	bool bShowRigidBodyInertia; // 0x2a0(0x01)
	bool bShowRigidBodyVelocity; // 0x2a1(0x01)
	bool bShowRigidBodyForce; // 0x2a2(0x01)
	bool bShowRigidBodyInfos; // 0x2a3(0x01)
	bool bShowTransformIndex; // 0x2a4(0x01)
	bool bShowTransform; // 0x2a5(0x01)
	bool bShowParent; // 0x2a6(0x01)
	bool bShowLevel; // 0x2a7(0x01)
	bool bShowConnectivityEdges; // 0x2a8(0x01)
	bool bShowGeometryIndex; // 0x2a9(0x01)
	bool bShowGeometryTransform; // 0x2aa(0x01)
	bool bShowBoundingBox; // 0x2ab(0x01)
	bool bShowFaces; // 0x2ac(0x01)
	bool bShowFaceIndices; // 0x2ad(0x01)
	bool bShowFaceNormals; // 0x2ae(0x01)
	bool bShowSingleFace; // 0x2af(0x01)
	int32_t SingleFaceIndex; // 0x2b0(0x04)
	bool bShowVertices; // 0x2b4(0x01)
	bool bShowVertexIndices; // 0x2b5(0x01)
	bool bShowVertexNormals; // 0x2b6(0x01)
	bool bUseActiveVisualization; // 0x2b7(0x01)
	float PointThickness; // 0x2b8(0x04)
	float LineThickness; // 0x2bc(0x04)
	bool bTextShadow; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float TextScale; // 0x2c4(0x04)
	float NormalScale; // 0x2c8(0x04)
	float AxisScale; // 0x2cc(0x04)
	float ArrowScale; // 0x2d0(0x04)
	struct FColor RigidBodyIdColor; // 0x2d4(0x04)
	float RigidBodyTransformScale; // 0x2d8(0x04)
	struct FColor RigidBodyCollisionColor; // 0x2dc(0x04)
	struct FColor RigidBodyInertiaColor; // 0x2e0(0x04)
	struct FColor RigidBodyVelocityColor; // 0x2e4(0x04)
	struct FColor RigidBodyForceColor; // 0x2e8(0x04)
	struct FColor RigidBodyInfoColor; // 0x2ec(0x04)
	struct FColor TransformIndexColor; // 0x2f0(0x04)
	float TransformScale; // 0x2f4(0x04)
	struct FColor LevelColor; // 0x2f8(0x04)
	struct FColor ParentColor; // 0x2fc(0x04)
	float ConnectivityEdgeThickness; // 0x300(0x04)
	struct FColor GeometryIndexColor; // 0x304(0x04)
	float GeometryTransformScale; // 0x308(0x04)
	struct FColor BoundingBoxColor; // 0x30c(0x04)
	struct FColor FaceColor; // 0x310(0x04)
	struct FColor FaceIndexColor; // 0x314(0x04)
	struct FColor FaceNormalColor; // 0x318(0x04)
	struct FColor SingleFaceColor; // 0x31c(0x04)
	struct FColor VertexColor; // 0x320(0x04)
	struct FColor VertexIndexColor; // 0x324(0x04)
	struct FColor VertexNormalColor; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct UBillboardComponent* SpriteComponent; // 0x330(0x08)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0xc8 (Inherited: 0xb0)
struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xb0(0x08)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xb8(0x08)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class GeometryCollectionEngine.GeometryCollection
// Size: 0x108 (Inherited: 0x28)
struct UGeometryCollection : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	bool EnableClustering; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t ClusterGroupIndex; // 0x34(0x04)
	int32_t MaxClusterLevel; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<float> DamageThreshold; // 0x40(0x10)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct UMaterialInterface*> Materials; // 0x58(0x10)
	struct TArray<struct FGeometryCollectionEmbeddedExemplar> EmbeddedGeometryExemplar; // 0x68(0x10)
	bool bUseFullPrecisionUVs; // 0x78(0x01)
	bool bStripOnCook; // 0x79(0x01)
	bool EnableNanite; // 0x7a(0x01)
	bool bMassAsDensity; // 0x7b(0x01)
	float Mass; // 0x7c(0x04)
	float MinimumMassClamp; // 0x80(0x04)
	bool bRemoveOnMaxSleep; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	struct FVector2D MaximumSleepTime; // 0x88(0x10)
	struct FVector2D RemovalDuration; // 0x98(0x10)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0xa8(0x10)
	bool EnableRemovePiecesOnFracture; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; // 0xc0(0x10)
	struct FGuid PersistentGuid; // 0xd0(0x10)
	struct FGuid StateGuid; // 0xe0(0x10)
	int32_t BoneSelectedMaterialIndex; // 0xf0(0x04)
	char pad_F4[0x14]; // 0xf4(0x14)
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x370 (Inherited: 0x278)
struct AGeometryCollectionRenderLevelSetActor : AActor {
	struct UVolumeTexture* TargetVolumeTexture; // 0x278(0x08)
	struct UMaterial* RayMarchMaterial; // 0x280(0x08)
	float SurfaceTolerance; // 0x288(0x04)
	float Isovalue; // 0x28c(0x04)
	bool Enabled; // 0x290(0x01)
	bool RenderVolumeBoundingBox; // 0x291(0x01)
	char pad_292[0xde]; // 0x292(0xde)
};

