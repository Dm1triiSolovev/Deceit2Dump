// Class FieldSystemEngine.FieldSystemActor
// Size: 0x280 (Inherited: 0x278)
struct AFieldSystemActor : AActor {
	struct UFieldSystemComponent* FieldSystemComponent; // 0x278(0x08)
};

// Class FieldSystemEngine.FieldSystem
// Size: 0x38 (Inherited: 0x28)
struct UFieldSystem : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class FieldSystemEngine.FieldSystemComponent
// Size: 0x610 (Inherited: 0x540)
struct UFieldSystemComponent : UPrimitiveComponent {
	struct UFieldSystem* FieldSystem; // 0x540(0x08)
	bool bIsWorldField; // 0x548(0x01)
	bool bIsChaosField; // 0x549(0x01)
	char pad_54A[0x6]; // 0x54a(0x06)
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x550(0x10)
	struct FFieldObjectCommands ConstructionCommands; // 0x560(0x30)
	struct FFieldObjectCommands BufferCommands; // 0x590(0x30)
	char pad_5C0[0x50]; // 0x5c0(0x50)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x3ccf990
	void RemovePersistentFields(); // Function FieldSystemEngine.FieldSystemComponent.RemovePersistentFields // (Final|Native|Public|BlueprintCallable) // @ game+0x3ccf970
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector position, struct FVector Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3ccf7a0
	void ApplyStrainField(bool Enabled, struct FVector position, float Radius, float Magnitude, int32_t Iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3ccf5d0
	void ApplyStayDynamicField(bool Enabled, struct FVector position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3ccf490
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3ccf300
	void ApplyRadialForce(bool Enabled, struct FVector position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3ccf1c0
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x3ccf060
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3ccef20
	void AddPersistentField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddPersistentField // (Final|Native|Public|BlueprintCallable) // @ game+0x3ccedc0
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand // (Final|Native|Public|BlueprintCallable) // @ game+0x3ccec60
};

// Class FieldSystemEngine.FieldSystemMetaData
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldSystemMetaData : UActorComponent {
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0xb8 (Inherited: 0xb0)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)

	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3ccfe70
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0xb8 (Inherited: 0xb0)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	enum class EFieldResolutionType ResolutionType; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3ccff10
};

// Class FieldSystemEngine.FieldSystemMetaDataFilter
// Size: 0xb8 (Inherited: 0xb0)
struct UFieldSystemMetaDataFilter : UFieldSystemMetaData {
	enum class EFieldFilterType FilterType; // 0xb0(0x01)
	enum class EFieldObjectType ObjectType; // 0xb1(0x01)
	enum class EFieldPositionType PositionType; // 0xb2(0x01)
	char pad_B3[0x5]; // 0xb3(0x05)

	struct UFieldSystemMetaDataFilter* SetMetaDataFilterType(enum class EFieldFilterType FilterType, enum class EFieldObjectType ObjectType, enum class EFieldPositionType PositionType); // Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3ccfd60
};

// Class FieldSystemEngine.FieldNodeBase
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldNodeBase : UActorComponent {
};

// Class FieldSystemEngine.FieldNodeInt
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldNodeInt : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeFloat
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldNodeFloat : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeVector
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldNodeVector : UFieldNodeBase {
};

// Class FieldSystemEngine.UniformInteger
// Size: 0xb8 (Inherited: 0xb0)
struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)

	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3ccfe70
};

// Class FieldSystemEngine.RadialIntMask
// Size: 0xe0 (Inherited: 0xb0)
struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FVector position; // 0xb8(0x18)
	int32_t InteriorValue; // 0xd0(0x04)
	int32_t ExteriorValue; // 0xd4(0x04)
	enum class ESetMaskConditionType SetMaskCondition; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)

	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3cd07b0
};

// Class FieldSystemEngine.UniformScalar
// Size: 0xb8 (Inherited: 0xb0)
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)

	struct UUniformScalar* SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3cd0a80
};

// Class FieldSystemEngine.WaveScalar
// Size: 0xe0 (Inherited: 0xb0)
struct UWaveScalar : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FVector position; // 0xb8(0x18)
	float WaveLength; // 0xd0(0x04)
	float Period; // 0xd4(0x04)
	enum class EWaveFunctionType Function; // 0xd8(0x01)
	enum class EFieldFalloffType Falloff; // 0xd9(0x01)
	char pad_DA[0x6]; // 0xda(0x06)

	struct UWaveScalar* SetWaveScalar(float Magnitude, struct FVector position, float WaveLength, float Period, float Time, enum class EWaveFunctionType Function, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.WaveScalar.SetWaveScalar // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3cd0be0
};

// Class FieldSystemEngine.RadialFalloff
// Size: 0xe8 (Inherited: 0xb0)
struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	float MinRange; // 0xb4(0x04)
	float MaxRange; // 0xb8(0x04)
	float Default; // 0xbc(0x04)
	float Radius; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FVector position; // 0xc8(0x18)
	enum class EFieldFalloffType Falloff; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)

	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector position, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3cd0560
};

// Class FieldSystemEngine.PlaneFalloff
// Size: 0x100 (Inherited: 0xb0)
struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	float MinRange; // 0xb4(0x04)
	float MaxRange; // 0xb8(0x04)
	float Default; // 0xbc(0x04)
	float Distance; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FVector position; // 0xc8(0x18)
	struct FVector Normal; // 0xe0(0x18)
	enum class EFieldFalloffType Falloff; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)

	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector position, struct FVector Normal, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3cd02c0
};

// Class FieldSystemEngine.BoxFalloff
// Size: 0x130 (Inherited: 0xb0)
struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	float MinRange; // 0xb4(0x04)
	float MaxRange; // 0xb8(0x04)
	float Default; // 0xbc(0x04)
	struct FTransform Transform; // 0xc0(0x60)
	enum class EFieldFalloffType Falloff; // 0x120(0x01)
	char pad_121[0xf]; // 0x121(0x0f)

	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3ccf9b0
};

// Class FieldSystemEngine.NoiseField
// Size: 0x120 (Inherited: 0xb0)
struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xb0(0x04)
	float MaxRange; // 0xb4(0x04)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FTransform Transform; // 0xc0(0x60)

	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3ccffa0
};

// Class FieldSystemEngine.UniformVector
// Size: 0xd0 (Inherited: 0xb0)
struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FVector Direction; // 0xb8(0x18)

	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3cd0990
};

// Class FieldSystemEngine.RadialVector
// Size: 0xd0 (Inherited: 0xb0)
struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FVector position; // 0xb8(0x18)

	struct URadialVector* SetRadialVector(float Magnitude, struct FVector position); // Function FieldSystemEngine.RadialVector.SetRadialVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3cd0990
};

// Class FieldSystemEngine.RandomVector
// Size: 0xb8 (Inherited: 0xb0)
struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)

	struct URandomVector* SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3cd0a80
};

// Class FieldSystemEngine.OperatorField
// Size: 0xd0 (Inherited: 0xb0)
struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct UFieldNodeBase* RightField; // 0xb8(0x08)
	struct UFieldNodeBase* LeftField; // 0xc0(0x08)
	enum class EFieldOperationType Operation; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)

	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* LeftField, struct UFieldNodeBase* RightField, enum class EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3cd0160
};

// Class FieldSystemEngine.ToIntegerField
// Size: 0xb8 (Inherited: 0xb0)
struct UToIntegerField : UFieldNodeInt {
	struct UFieldNodeFloat* FloatField; // 0xb0(0x08)

	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3cd0b40
};

// Class FieldSystemEngine.ToFloatField
// Size: 0xb8 (Inherited: 0xb0)
struct UToFloatField : UFieldNodeFloat {
	struct UFieldNodeInt* IntField; // 0xb0(0x08)

	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3cd0b40
};

// Class FieldSystemEngine.CullingField
// Size: 0xc8 (Inherited: 0xb0)
struct UCullingField : UFieldNodeBase {
	struct UFieldNodeBase* Culling; // 0xb0(0x08)
	struct UFieldNodeBase* Field; // 0xb8(0x08)
	enum class EFieldCullingOperationType Operation; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)

	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3ccfc50
};

// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0xb0 (Inherited: 0xb0)
struct UReturnResultsTerminal : UFieldNodeBase {

	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3cd0b10
};

