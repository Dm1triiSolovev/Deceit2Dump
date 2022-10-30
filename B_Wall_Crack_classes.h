// BlueprintGeneratedClass B_Wall_Crack.B_Wall_Crack_C
// Size: 0x2c1 (Inherited: 0x278)
struct AB_Wall_Crack_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UAbilitySystemComponent* AbilitySystem; // 0x280(0x08)
	struct UDeceitInteractableComponent* DeceitInteractable; // 0x288(0x08)
	struct UStaticMeshComponent* InteractionHelper; // 0x290(0x08)
	struct UStaticMeshComponent* Crack; // 0x298(0x08)
	struct UStaticMeshComponent* Cube1; // 0x2a0(0x08)
	struct UStaticMeshComponent* Cube2; // 0x2a8(0x08)
	struct UStaticMeshComponent* DestroyedCrack; // 0x2b0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b8(0x08)
	bool Is Destroyed; // 0x2c0(0x01)

	void OnRep_Is Destroyed(); // Function B_Wall_Crack.B_Wall_Crack_C.OnRep_Is Destroyed // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnMessageReceived_8CE149454D236EC4C78E6E9A1F26FF2F(struct UAsyncAction_ListenForGameplayMessage* ProxyObject, struct FGameplayTag ActualChannel); // Function B_Wall_Crack.B_Wall_Crack_C.OnMessageReceived_8CE149454D236EC4C78E6E9A1F26FF2F // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ReceiveBeginPlay(); // Function B_Wall_Crack.B_Wall_Crack_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void OnMadeNotAccessible(); // Function B_Wall_Crack.B_Wall_Crack_C.OnMadeNotAccessible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SetupInteractionIndicator(struct UIndicatorDescriptor* Indicator); // Function B_Wall_Crack.B_Wall_Crack_C.SetupInteractionIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_Wall_Crack(int32_t EntryPoint); // Function B_Wall_Crack.B_Wall_Crack_C.ExecuteUbergraph_B_Wall_Crack // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

