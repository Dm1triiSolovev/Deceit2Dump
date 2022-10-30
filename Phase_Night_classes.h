// BlueprintGeneratedClass Phase_Night.Phase_Night_C
// Size: 0x490 (Inherited: 0x480)
struct UPhase_Night_C : ULyraGamePhaseAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	double Max Duration; // 0x488(0x08)

	void OnMessageReceived_E2B62068422A6327C56BB48A0F0426DA(struct UAsyncAction_ListenForGameplayMessage* ProxyObject, struct FGameplayTag ActualChannel); // Function Phase_Night.Phase_Night_C.OnMessageReceived_E2B62068422A6327C56BB48A0F0426DA // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void K2_ActivateAbility(); // Function Phase_Night.Phase_Night_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void K2_OnEndAbility(bool bWasCancelled); // Function Phase_Night.Phase_Night_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_Phase_Night(int32_t EntryPoint); // Function Phase_Night.Phase_Night_C.ExecuteUbergraph_Phase_Night // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

