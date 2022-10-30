// Enum DeceitCoreRuntime.EDeceitCharacter
enum class EDeceitCharacter : uint8 {
	Alex = 0,
	Lisa = 1,
	Chang = 2,
	Rachel = 3,
	Hans = 4,
	Nina = 5,
	Jak = 6,
	Priya = 7,
	Beck = 8,
	Last = 9,
	EDeceitCharacter_MAX = 10
};

// Enum DeceitCoreRuntime.EGamePhaseRestriction
enum class EGamePhaseRestriction : uint8 {
	None = 0,
	DayOnly = 1,
	NightOnly = 2,
	EGamePhaseRestriction_MAX = 3
};

// ScriptStruct DeceitCoreRuntime.DeceitInteractionOption
// Size: 0x108 (Inherited: 0x00)
struct FDeceitInteractionOption {
	struct FInteractionOption Option; // 0x00(0x88)
	struct FGameplayTagContainer InstigatorRequiredTags; // 0x88(0x20)
	struct FGameplayTagContainer InstigatorBlockedTags; // 0xa8(0x20)
	struct FGameplayTagContainer TargetRequiredTags; // 0xc8(0x20)
	struct FGameplayTagContainer TargetBlockedTags; // 0xe8(0x20)
};

