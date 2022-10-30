// BlueprintGeneratedClass B_DeceitSpectatorPawn.B_DeceitSpectatorPawn_C
// Size: 0x330 (Inherited: 0x320)
struct AB_DeceitSpectatorPawn_C : ASpectatorPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct APlayerState* ViewedPlayerState; // 0x328(0x08)

	void DisableCurrentSpectate(); // Function B_DeceitSpectatorPawn.B_DeceitSpectatorPawn_C.DisableCurrentSpectate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void View Next Player(bool Forward); // Function B_DeceitSpectatorPawn.B_DeceitSpectatorPawn_C.View Next Player // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void InpActEvt_IA_Weapon_Fire_K2Node_EnhancedInputActionEvent_2(struct FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, struct UInputAction* SourceAction); // Function B_DeceitSpectatorPawn.B_DeceitSpectatorPawn_C.InpActEvt_IA_Weapon_Fire_K2Node_EnhancedInputActionEvent_2 // (BlueprintEvent) // @ game+0x2552560
	void InpActEvt_IA_ADS_K2Node_EnhancedInputActionEvent_1(struct FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, struct UInputAction* SourceAction); // Function B_DeceitSpectatorPawn.B_DeceitSpectatorPawn_C.InpActEvt_IA_ADS_K2Node_EnhancedInputActionEvent_1 // (BlueprintEvent) // @ game+0x2552560
	void ReceivePossessed(struct AController* NewController); // Function B_DeceitSpectatorPawn.B_DeceitSpectatorPawn_C.ReceivePossessed // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x2552560
	void ReceiveTick(float DeltaSeconds); // Function B_DeceitSpectatorPawn.B_DeceitSpectatorPawn_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void ReceiveUnpossessed(struct AController* OldController); // Function B_DeceitSpectatorPawn.B_DeceitSpectatorPawn_C.ReceiveUnpossessed // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x2552560
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function B_DeceitSpectatorPawn.B_DeceitSpectatorPawn_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_DeceitSpectatorPawn(int32_t EntryPoint); // Function B_DeceitSpectatorPawn.B_DeceitSpectatorPawn_C.ExecuteUbergraph_B_DeceitSpectatorPawn // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

