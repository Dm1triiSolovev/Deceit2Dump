// Class TopDownArenaRuntime.LyraCameraMode_TopDownArenaCamera
// Size: 0x150 (Inherited: 0xa8)
struct ULyraCameraMode_TopDownArenaCamera : ULyraCameraMode {
	float ArenaWidth; // 0xa8(0x04)
	float ArenaHeight; // 0xac(0x04)
	struct FRotator DefaultPivotRotation; // 0xb0(0x18)
	struct FRuntimeFloatCurve BoundsSizeToDistance; // 0xc8(0x88)
};

// Class TopDownArenaRuntime.TopDownArenaAttributeSet
// Size: 0x70 (Inherited: 0x30)
struct UTopDownArenaAttributeSet : ULyraAttributeSet {
	struct FGameplayAttributeData BombsRemaining; // 0x30(0x10)
	struct FGameplayAttributeData BombCapacity; // 0x40(0x10)
	struct FGameplayAttributeData BombRange; // 0x50(0x10)
	struct FGameplayAttributeData MovementSpeed; // 0x60(0x10)

	void OnRep_MovementSpeed(struct FGameplayAttributeData& OldValue); // Function TopDownArenaRuntime.TopDownArenaAttributeSet.OnRep_MovementSpeed // (Final|Native|Protected|HasOutParms) // @ game+0x10157c0
	void OnRep_BombsRemaining(struct FGameplayAttributeData& OldValue); // Function TopDownArenaRuntime.TopDownArenaAttributeSet.OnRep_BombsRemaining // (Final|Native|Protected|HasOutParms) // @ game+0x1015720
	void OnRep_BombRange(struct FGameplayAttributeData& OldValue); // Function TopDownArenaRuntime.TopDownArenaAttributeSet.OnRep_BombRange // (Final|Native|Protected|HasOutParms) // @ game+0x1015680
	void OnRep_BombCapacity(struct FGameplayAttributeData& OldValue); // Function TopDownArenaRuntime.TopDownArenaAttributeSet.OnRep_BombCapacity // (Final|Native|Protected|HasOutParms) // @ game+0x10155e0
};

// Class TopDownArenaRuntime.TopDownArenaMovementComponent
// Size: 0x1000 (Inherited: 0x1000)
struct UTopDownArenaMovementComponent : ULyraCharacterMovementComponent {
};

// Class TopDownArenaRuntime.TopDownArenaPickupUIData
// Size: 0x70 (Inherited: 0x28)
struct UTopDownArenaPickupUIData : UGameplayEffectUIData {
	struct FText Description; // 0x28(0x18)
	struct FText ShortDescriptionForToast; // 0x40(0x18)
	struct UTexture2D* IconTexture; // 0x58(0x08)
	struct UNiagaraSystem* PickupVFX; // 0x60(0x08)
	struct USoundBase* PickupSFX; // 0x68(0x08)
};

