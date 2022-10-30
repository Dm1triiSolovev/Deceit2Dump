// BlueprintGeneratedClass B_Teleport.B_Teleport_C
// Size: 0x338 (Inherited: 0x278)
struct AB_Teleport_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UBoxComponent* Box; // 0x280(0x08)
	struct UNiagaraComponent* Niagara; // 0x288(0x08)
	struct UArrowComponent* Exit Direction; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot1; // 0x298(0x08)
	struct TArray<struct AB_Teleport_C*> TeleportingTarget; // 0x2a0(0x10)
	bool bForceDirection; // 0x2b0(0x01)
	bool LaunchOnTeleport; // 0x2b1(0x01)
	bool KeepReleativeEntryUponExit; // 0x2b2(0x01)
	bool ReceiverOnly; // 0x2b3(0x01)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct ACharacter* Overlapping Pawn; // 0x2b8(0x08)
	struct FGameplayTag GameplayCueTag; // 0x2c0(0x08)
	double LaunchMultiplier; // 0x2c8(0x08)
	double TeleporterHeight; // 0x2d0(0x08)
	double TeleporterWidth; // 0x2d8(0x08)
	double TeleporterEdgeWidth; // 0x2e0(0x08)
	struct ACharacter* ReceivingPawn; // 0x2e8(0x08)
	int32_t TeleporterNumPlanes; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	double TeleporterSpread; // 0x2f8(0x08)
	double TeleporterPhase; // 0x300(0x08)
	int32_t TeleporterEntered; // 0x308(0x04)
	bool TeleporterInwardMotion; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	struct AB_Teleport_C* TeleporterDestination; // 0x310(0x08)
	double TeleporterBrigtness; // 0x318(0x08)
	struct FVector Audio Location; // 0x320(0x18)

	void Set Teleporter Destination(); // Function B_Teleport.B_Teleport_C.Set Teleporter Destination // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void UserConstructionScript(); // Function B_Teleport.B_Teleport_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void BndEvt__B_Teleport_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function B_Teleport.B_Teleport_C.BndEvt__B_Teleport_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2552560
	void Teleport Audio for Pawn(struct FVector Audio Location); // Function B_Teleport.B_Teleport_C.Teleport Audio for Pawn // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Teleport Audio for Grenade(struct FVector Audio Location); // Function B_Teleport.B_Teleport_C.Teleport Audio for Grenade // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_Teleport(int32_t EntryPoint); // Function B_Teleport.B_Teleport_C.ExecuteUbergraph_B_Teleport // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

