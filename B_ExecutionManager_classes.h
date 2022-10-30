// BlueprintGeneratedClass B_ExecutionManager.B_ExecutionManager_C
// Size: 0xc9 (Inherited: 0xb0)
struct UB_ExecutionManager_C : UGameStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct TArray<struct AActor*> Temporary Actors; // 0xb8(0x10)
	bool In Execution; // 0xc8(0x01)

	void Is Playing(bool& Result); // Function B_ExecutionManager.B_ExecutionManager_C.Is Playing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Start Execution(struct APlayerState* Instigator, struct APlayerState* Target); // Function B_ExecutionManager.B_ExecutionManager_C.Start Execution // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Play Execution(struct APlayerState* Instigator, struct APlayerState* Target); // Function B_ExecutionManager.B_ExecutionManager_C.Play Execution // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void On Finished(); // Function B_ExecutionManager.B_ExecutionManager_C.On Finished // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_ExecutionManager(int32_t EntryPoint); // Function B_ExecutionManager.B_ExecutionManager_C.ExecuteUbergraph_B_ExecutionManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

