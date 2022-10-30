// Class ArchVisCharacter.ArchVisCharacter
// Size: 0x660 (Inherited: 0x600)
struct AArchVisCharacter : ACharacter {
	struct FString LookUpAxisName; // 0x5f8(0x10)
	struct FString LookUpAtRateAxisName; // 0x608(0x10)
	struct FString TurnAxisName; // 0x618(0x10)
	struct FString TurnAtRateAxisName; // 0x628(0x10)
	struct FString MoveForwardAxisName; // 0x638(0x10)
	struct FString MoveRightAxisName; // 0x648(0x10)
	float MouseSensitivityScale_Pitch; // 0x658(0x04)
	float MouseSensitivityScale_Yaw; // 0x65c(0x04)
};

// Class ArchVisCharacter.ArchVisCharMovementComponent
// Size: 0xf90 (Inherited: 0xf00)
struct UArchVisCharMovementComponent : UCharacterMovementComponent {
	struct FRotator RotationalAcceleration; // 0xef8(0x18)
	struct FRotator RotationalDeceleration; // 0xf10(0x18)
	struct FRotator MaxRotationalVelocity; // 0xf28(0x18)
	float MinPitch; // 0xf40(0x04)
	float MaxPitch; // 0xf44(0x04)
	float WalkingFriction; // 0xf48(0x04)
	float WalkingSpeed; // 0xf4c(0x04)
	float WalkingAcceleration; // 0xf50(0x04)
	char pad_F5C[0x34]; // 0xf5c(0x34)
};

