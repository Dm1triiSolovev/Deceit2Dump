// BlueprintGeneratedClass B_DestroyableWall.B_DestroyableWall_C
// Size: 0x2e1 (Inherited: 0x278)
struct AB_DestroyableWall_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UStaticMeshComponent* Plug; // 0x280(0x08)
	struct USteamAudioGeometryComponent* SteamAudioGeometry1; // 0x288(0x08)
	struct USteamAudioGeometryComponent* SteamAudioGeometry; // 0x290(0x08)
	struct USteamAudioSourceComponent* SteamAudioSource; // 0x298(0x08)
	struct USteamAudioBakedSourceComponent* SteamAudioBakedSource; // 0x2a0(0x08)
	struct UAbilitySystemComponent* AbilitySystem; // 0x2a8(0x08)
	struct UNiagaraComponent* Niagara; // 0x2b0(0x08)
	struct UAudioComponent* AudioComponent; // 0x2b8(0x08)
	struct UStaticMeshComponent* Mesh; // 0x2c0(0x08)
	struct UBoxComponent* BackCollision; // 0x2c8(0x08)
	struct UBoxComponent* FrontCollision; // 0x2d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d8(0x08)
	bool Broken; // 0x2e0(0x01)

	void DestroyWall(); // Function B_DestroyableWall.B_DestroyableWall_C.DestroyWall // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnRep_Broken(); // Function B_DestroyableWall.B_DestroyableWall_C.OnRep_Broken // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Try Destroy Wall(struct AActor* Actor, bool Front); // Function B_DestroyableWall.B_DestroyableWall_C.Try Destroy Wall // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnMessageReceived_E6E991CE4FB9CC80628D34986E3351A7(struct UAsyncAction_ListenForGameplayMessage* ProxyObject, struct FGameplayTag ActualChannel); // Function B_DestroyableWall.B_DestroyableWall_C.OnMessageReceived_E6E991CE4FB9CC80628D34986E3351A7 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void BndEvt__B_DestroyableWall_FrontCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function B_DestroyableWall.B_DestroyableWall_C.BndEvt__B_DestroyableWall_FrontCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2552560
	void BndEvt__B_DestroyableWall_BackCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function B_DestroyableWall.B_DestroyableWall_C.BndEvt__B_DestroyableWall_BackCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2552560
	void ReceiveBeginPlay(); // Function B_DestroyableWall.B_DestroyableWall_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void OnMadeNotAccessible(); // Function B_DestroyableWall.B_DestroyableWall_C.OnMadeNotAccessible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_DestroyableWall(int32_t EntryPoint); // Function B_DestroyableWall.B_DestroyableWall_C.ExecuteUbergraph_B_DestroyableWall // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

