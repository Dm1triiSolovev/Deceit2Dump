// BlueprintGeneratedClass B_DeceitPlayerState.B_DeceitPlayerState_C
// Size: 0x568 (Inherited: 0x550)
struct AB_DeceitPlayerState_C : ADeceitPlayerState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x558(0x08)
	struct ADeceitCharacterActor* CurrentCharacterClass; // 0x560(0x08)

	void OnLoaded_2EA6664E497407866BD8A481B70A6A2A(struct UObject* Loaded); // Function B_DeceitPlayerState.B_DeceitPlayerState_C.OnLoaded_2EA6664E497407866BD8A481B70A6A2A // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Completed_2441D85349C6DDC5FD752799D2D68777(struct TArray<struct UObject*>& Loaded); // Function B_DeceitPlayerState.B_DeceitPlayerState_C.Completed_2441D85349C6DDC5FD752799D2D68777 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ReceiveBeginPlay(); // Function B_DeceitPlayerState.B_DeceitPlayerState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void OnCharacterSet(); // Function B_DeceitPlayerState.B_DeceitPlayerState_C.OnCharacterSet // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_DeceitPlayerState(int32_t EntryPoint); // Function B_DeceitPlayerState.B_DeceitPlayerState_C.ExecuteUbergraph_B_DeceitPlayerState // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

