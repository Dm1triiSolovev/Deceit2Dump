// BlueprintGeneratedClass GA_Heartbeat.GA_Heartbeat_C
// Size: 0x4b8 (Inherited: 0x478)
struct UGA_Heartbeat_C : ULyraGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UAudioComponent* Audio; // 0x480(0x08)
	double TickRate; // 0x488(0x08)
	double ClosestTerror; // 0x490(0x08)
	struct UCurveFloat* Curve; // 0x498(0x08)
	struct FVector LocalPosition; // 0x4a0(0x18)

	void OnFinish_F91980FA452AD97293597EA5FD7DC65B(); // Function GA_Heartbeat.GA_Heartbeat_C.OnFinish_F91980FA452AD97293597EA5FD7DC65B // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void K2_ActivateAbility(); // Function GA_Heartbeat.GA_Heartbeat_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Heartbeat.GA_Heartbeat_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void Tick(); // Function GA_Heartbeat.GA_Heartbeat_C.Tick // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GA_Heartbeat(int32_t EntryPoint); // Function GA_Heartbeat.GA_Heartbeat_C.ExecuteUbergraph_GA_Heartbeat // (Final|UbergraphFunction) // @ game+0x2552560
};

