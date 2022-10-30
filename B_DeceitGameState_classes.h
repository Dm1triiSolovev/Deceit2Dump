// BlueprintGeneratedClass B_DeceitGameState.B_DeceitGameState_C
// Size: 0xf0 (Inherited: 0xb0)
struct UB_DeceitGameState_C : UGameStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct TArray<struct APlayerState*> InfectedPlayers; // 0xb8(0x10)
	struct FStruct_CurrentGamePhase CurrentGamePhase; // 0xc8(0x10)
	double GamePhaseEndTime; // 0xd8(0x08)
	int32_t PlayersOnGameStart; // 0xe0(0x04)
	int32_t BanishesCommitted; // 0xe4(0x04)
	struct ULoadingProcessTask* LoadingScreenTask; // 0xe8(0x08)

	void PhaseDuration(double& Duration); // Function B_DeceitGameState.B_DeceitGameState_C.PhaseDuration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void PhaseStartTime(double& Time); // Function B_DeceitGameState.B_DeceitGameState_C.PhaseStartTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void StartGame(int32_t NumberOfPlayers); // Function B_DeceitGameState.B_DeceitGameState_C.StartGame // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void CalculateNumberOfRequiredPlayers(int32_t& NumPlayers); // Function B_DeceitGameState.B_DeceitGameState_C.CalculateNumberOfRequiredPlayers // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2552560
	void InAnyNightPhase(bool& InPhase); // Function B_DeceitGameState.B_DeceitGameState_C.InAnyNightPhase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2552560
	void InAnyDayPhase(bool& InPhase); // Function B_DeceitGameState.B_DeceitGameState_C.InAnyDayPhase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2552560
	void CalculateNumInnocent(int32_t& Num Innocent); // Function B_DeceitGameState.B_DeceitGameState_C.CalculateNumInnocent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void GetGamePhaseEndTime(double& GamePhaseEndTime); // Function B_DeceitGameState.B_DeceitGameState_C.GetGamePhaseEndTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SetGamePhaseEndTime(double EndTime); // Function B_DeceitGameState.B_DeceitGameState_C.SetGamePhaseEndTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void IsInPhase(enum class Enum_GamePhase Phase, bool& InPhase); // Function B_DeceitGameState.B_DeceitGameState_C.IsInPhase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2552560
	void SetCurrentPhase(enum class Enum_GamePhase GamePhase, int32_t Floor, bool Force); // Function B_DeceitGameState.B_DeceitGameState_C.SetCurrentPhase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void IncrementBanishesCommitted(); // Function B_DeceitGameState.B_DeceitGameState_C.IncrementBanishesCommitted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void CalculateNumInfected(int32_t NumPlayers, int32_t& NumInfected); // Function B_DeceitGameState.B_DeceitGameState_C.CalculateNumInfected // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ShouldEndGame(bool& EndGame, bool& InfectedWin); // Function B_DeceitGameState.B_DeceitGameState_C.ShouldEndGame // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void EndGame(bool InfectedWin); // Function B_DeceitGameState.B_DeceitGameState_C.EndGame // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnRep_CurrentGamePhase(); // Function B_DeceitGameState.B_DeceitGameState_C.OnRep_CurrentGamePhase // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void AssignInfected(); // Function B_DeceitGameState.B_DeceitGameState_C.AssignInfected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void RespawnPlayers(bool IncapacitatedOnly); // Function B_DeceitGameState.B_DeceitGameState_C.RespawnPlayers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnReady_B24BA65D4B463A452FFBB499987A0420(); // Function B_DeceitGameState.B_DeceitGameState_C.OnReady_B24BA65D4B463A452FFBB499987A0420 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ReceiveBeginPlay(); // Function B_DeceitGameState.B_DeceitGameState_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void On Day Ended(struct FGameplayTag& PhaseTag); // Function B_DeceitGameState.B_DeceitGameState_C.On Day Ended // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void On Night Ended(struct FGameplayTag& PhaseTag); // Function B_DeceitGameState.B_DeceitGameState_C.On Night Ended // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ReceiveTick(float DeltaSeconds); // Function B_DeceitGameState.B_DeceitGameState_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void On Startup Ended(struct FGameplayTag& PhaseTag); // Function B_DeceitGameState.B_DeceitGameState_C.On Startup Ended // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void On Day Ending Ended(struct FGameplayTag& PhaseTag); // Function B_DeceitGameState.B_DeceitGameState_C.On Day Ending Ended // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void On Night Ending Ended(struct FGameplayTag& PhaseTag); // Function B_DeceitGameState.B_DeceitGameState_C.On Night Ending Ended // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_DeceitGameState(int32_t EntryPoint); // Function B_DeceitGameState.B_DeceitGameState_C.ExecuteUbergraph_B_DeceitGameState // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

