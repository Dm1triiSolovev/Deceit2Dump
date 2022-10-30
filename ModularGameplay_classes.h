// Class ModularGameplay.GameFrameworkComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UGameFrameworkComponent : UActorComponent {
};

// Class ModularGameplay.GameStateComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UGameStateComponent : UGameFrameworkComponent {
};

// Class ModularGameplay.ControllerComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UControllerComponent : UGameFrameworkComponent {
};

// Class ModularGameplay.GameFrameworkComponentManager
// Size: 0x170 (Inherited: 0x30)
struct UGameFrameworkComponentManager : UGameInstanceSubsystem {
	char pad_30[0x140]; // 0x30(0x140)

	void SendExtensionEvent(struct AActor* Receiver, struct FName EventName, bool bOnlyInGameWorlds); // Function ModularGameplay.GameFrameworkComponentManager.SendExtensionEvent // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xdf4560
	void RemoveReceiver(struct AActor* Receiver); // Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xdf44d0
	void AddReceiver(struct AActor* Receiver, bool bAddOnlyInGameWorlds); // Function ModularGameplay.GameFrameworkComponentManager.AddReceiver // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xdf4400
};

// Class ModularGameplay.PawnComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UPawnComponent : UGameFrameworkComponent {
};

// Class ModularGameplay.PlayerStateComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UPlayerStateComponent : UGameFrameworkComponent {
};

