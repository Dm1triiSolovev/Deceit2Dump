// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UChaosDebugDrawComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UChaosEventListenerComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x2c8 (Inherited: 0xb8)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	char pad_B8[0x110]; // 0xb8(0x110)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x1c8(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x218(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FRemovalEventCallbackWrapper> RemovalEventRegistrations; // 0x268(0x50)
	char pad_2B8[0x10]; // 0x2b8(0x10)
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct UChaosNotifyHandlerInterface : UInterface {
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3cc65d0
};

// Class ChaosSolverEngine.ChaosSolver
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolver : UObject {
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x378 (Inherited: 0x278)
struct AChaosSolverActor : AActor {
	struct FChaosSolverConfiguration Properties; // 0x278(0x6c)
	float TimeStepMultiplier; // 0x2e4(0x04)
	int32_t CollisionIterations; // 0x2e8(0x04)
	int32_t PushOutIterations; // 0x2ec(0x04)
	int32_t PushOutPairIterations; // 0x2f0(0x04)
	float ClusterConnectionFactor; // 0x2f4(0x04)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x2f8(0x01)
	bool DoGenerateCollisionData; // 0x2f9(0x01)
	char pad_2FA[0x2]; // 0x2fa(0x02)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x2fc(0x10)
	bool DoGenerateBreakingData; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x310(0x10)
	bool DoGenerateTrailingData; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x324(0x10)
	float MassScale; // 0x334(0x04)
	bool bGenerateContactGraph; // 0x338(0x01)
	bool bHasFloor; // 0x339(0x01)
	char pad_33A[0x2]; // 0x33a(0x02)
	float FloorHeight; // 0x33c(0x04)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x340(0x03)
	char pad_343[0x5]; // 0x343(0x05)
	struct UBillboardComponent* SpriteComponent; // 0x348(0x08)
	char pad_350[0x18]; // 0x350(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x368(0x08)
	char pad_370[0x8]; // 0x370(0x08)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive // (Native|Public|BlueprintCallable) // @ game+0x1cd9140
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver // (Final|Native|Public|BlueprintCallable) // @ game+0x3cc66f0
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x58 (Inherited: 0x38)
struct UChaosSolverSettings : UDeveloperSettings {
	char pad_38[0x8]; // 0x38(0x08)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x40(0x18)
};

