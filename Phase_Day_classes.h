// BlueprintGeneratedClass Phase_Day.Phase_Day_C
// Size: 0x510 (Inherited: 0x480)
struct UPhase_Day_C : ULyraGamePhaseAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	double Duration; // 0x488(0x08)
	struct UAbilityTask_WaitDelay* TimerTask; // 0x490(0x08)
	struct UAsyncAction_ListenForGameplayMessage* GameplayMessageTask; // 0x498(0x08)
	struct UDataTable* Durations; // 0x4a0(0x08)
	struct UB_DeceitGameState_C* GameState; // 0x4a8(0x08)
	int32_t BloodOfferingsRequired; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct TMap<struct UAbilitySystemComponent*, struct FActiveGameplayEffectHandle> BloodOfferingCooldownHandles; // 0x4b8(0x50)
	int32_t BloodOffered; // 0x508(0x04)
	int32_t BloodsOffering; // 0x50c(0x04)

	void ApplyBloodOfferingCooldown(struct UAbilitySystemComponent* AbilitySystem); // Function Phase_Day.Phase_Day_C.ApplyBloodOfferingCooldown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void CalculateBloodOfferingsRequired(); // Function Phase_Day.Phase_Day_C.CalculateBloodOfferingsRequired // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SendBloodOfferingsRequired(); // Function Phase_Day.Phase_Day_C.SendBloodOfferingsRequired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnMessageReceived_CE21218E4C211B967E79DF8A8F475069(struct UAsyncAction_ListenForGameplayMessage* ProxyObject, struct FGameplayTag ActualChannel); // Function Phase_Day.Phase_Day_C.OnMessageReceived_CE21218E4C211B967E79DF8A8F475069 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void K2_ActivateAbility(); // Function Phase_Day.Phase_Day_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void On Blood Offered(); // Function Phase_Day.Phase_Day_C.On Blood Offered // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void K2_OnEndAbility(bool bWasCancelled); // Function Phase_Day.Phase_Day_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void Blood Tick(); // Function Phase_Day.Phase_Day_C.Blood Tick // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_Phase_Day(int32_t EntryPoint); // Function Phase_Day.Phase_Day_C.ExecuteUbergraph_Phase_Day // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

