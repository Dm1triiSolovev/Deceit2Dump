// BlueprintGeneratedClass Phase_NightEnding.Phase_NightEnding_C
// Size: 0x498 (Inherited: 0x480)
struct UPhase_NightEnding_C : ULyraGamePhaseAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct TArray<struct AActor*> Temporary Actors; // 0x488(0x10)

	void OnMessageReceived_4C623BBE4F78897552D3C798C4091FAB(struct UAsyncAction_ListenForGameplayMessage* ProxyObject, struct FGameplayTag ActualChannel); // Function Phase_NightEnding.Phase_NightEnding_C.OnMessageReceived_4C623BBE4F78897552D3C798C4091FAB // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void K2_ActivateAbility(); // Function Phase_NightEnding.Phase_NightEnding_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void K2_OnEndAbility(bool bWasCancelled); // Function Phase_NightEnding.Phase_NightEnding_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_Phase_NightEnding(int32_t EntryPoint); // Function Phase_NightEnding.Phase_NightEnding_C.ExecuteUbergraph_Phase_NightEnding // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

