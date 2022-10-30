// BlueprintGeneratedClass Phase_Startup.Phase_Startup_C
// Size: 0x4a4 (Inherited: 0x480)
struct UPhase_Startup_C : ULyraGamePhaseAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct FTimerHandle Timer; // 0x488(0x08)
	bool EndNextTick; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	double CancellationTime; // 0x498(0x08)
	int32_t LastNumPlayers; // 0x4a0(0x04)

	void CreatePlayerPawns(bool& AllPawnsAcknowledged); // Function Phase_Startup.Phase_Startup_C.CreatePlayerPawns // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void TimerTick(); // Function Phase_Startup.Phase_Startup_C.TimerTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void K2_ActivateAbility(); // Function Phase_Startup.Phase_Startup_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void K2_OnEndAbility(bool bWasCancelled); // Function Phase_Startup.Phase_Startup_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_Phase_Startup(int32_t EntryPoint); // Function Phase_Startup.Phase_Startup_C.ExecuteUbergraph_Phase_Startup // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

