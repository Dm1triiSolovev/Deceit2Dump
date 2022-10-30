// BlueprintGeneratedClass GA_ADS.GA_ADS_C
// Size: 0x4f0 (Inherited: 0x4c8)
struct UGA_ADS_C : UGA_AbilityWithWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	double Max Walk SpeedDefault; // 0x4d0(0x08)
	double ADSMultiplier; // 0x4d8(0x08)
	struct FStruct_UIMessaging MessageUI; // 0x4e0(0x10)

	void BroadcastToUI(bool On); // Function GA_ADS.GA_ADS_C.BroadcastToUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnRelease_8B98C162445BD85783677784F7D711D9(float TimeHeld); // Function GA_ADS.GA_ADS_C.OnRelease_8B98C162445BD85783677784F7D711D9 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void K2_ActivateAbility(); // Function GA_ADS.GA_ADS_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_ADS.GA_ADS_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GA_ADS(int32_t EntryPoint); // Function GA_ADS.GA_ADS_C.ExecuteUbergraph_GA_ADS // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

