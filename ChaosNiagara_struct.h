// Enum ChaosNiagara.EDataSortTypeEnum
enum class EDataSortTypeEnum : uint8 {
	ChaosNiagara_DataSortType_NoSorting = 0,
	ChaosNiagara_DataSortType_RandomShuffle = 1,
	ChaosNiagara_DataSortType_SortByMassMaxToMin = 2,
	ChaosNiagara_DataSortType_SortByMassMinToMax = 3,
	ChaosNiagara_Max = 4
};

// Enum ChaosNiagara.ERandomVelocityGenerationTypeEnum
enum class ERandomVelocityGenerationTypeEnum : uint8 {
	ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
	ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
	ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
	ChaosNiagara_Max = 3
};

// Enum ChaosNiagara.EDebugTypeEnum
enum class EDebugTypeEnum : uint8 {
	ChaosNiagara_DebugType_NoDebug = 0,
	ChaosNiagara_DebugType_ColorBySolver = 1,
	ChaosNiagara_DebugType_ColorByParticleIndex = 2,
	ChaosNiagara_Max = 3
};

// Enum ChaosNiagara.EDataSourceTypeEnum
enum class EDataSourceTypeEnum : uint8 {
	ChaosNiagara_DataSourceType_Collision = 0,
	ChaosNiagara_DataSourceType_Breaking = 1,
	ChaosNiagara_DataSourceType_Trailing = 2,
	ChaosNiagara_Max = 3
};

// Enum ChaosNiagara.ELocationFilteringModeEnum
enum class ELocationFilteringModeEnum : uint8 {
	ChaosNiagara_LocationFilteringMode_Inclusive = 0,
	ChaosNiagara_LocationFilteringMode_Exclusive = 1,
	ChaosNiagara_Max = 2
};

// Enum ChaosNiagara.ELocationXToSpawnEnum
enum class ELocationXToSpawnEnum : uint8 {
	ChaosNiagara_LocationXToSpawn_None = 0,
	ChaosNiagara_LocationXToSpawn_Min = 1,
	ChaosNiagara_LocationXToSpawn_Max = 2,
	ChaosNiagara_LocationXToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4
};

// Enum ChaosNiagara.ELocationYToSpawnEnum
enum class ELocationYToSpawnEnum : uint8 {
	ChaosNiagara_LocationYToSpawn_None = 0,
	ChaosNiagara_LocationYToSpawn_Min = 1,
	ChaosNiagara_LocationYToSpawn_Max = 2,
	ChaosNiagara_LocationYToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4
};

// Enum ChaosNiagara.ELocationZToSpawnEnum
enum class ELocationZToSpawnEnum : uint8 {
	ChaosNiagara_LocationZToSpawn_None = 0,
	ChaosNiagara_LocationZToSpawn_Min = 1,
	ChaosNiagara_LocationZToSpawn_Max = 2,
	ChaosNiagara_LocationZToSpawn_MinMax = 3,
	ChaosNiagara_Max = 4
};

// ScriptStruct ChaosNiagara.ChaosDestructionEvent
// Size: 0x78 (Inherited: 0x00)
struct FChaosDestructionEvent {
	struct FVector position; // 0x00(0x18)
	struct FVector Normal; // 0x18(0x18)
	struct FVector Velocity; // 0x30(0x18)
	struct FVector AngularVelocity; // 0x48(0x18)
	float ExtentMin; // 0x60(0x04)
	float ExtentMax; // 0x64(0x04)
	int32_t ParticleID; // 0x68(0x04)
	float Time; // 0x6c(0x04)
	int32_t Type; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

