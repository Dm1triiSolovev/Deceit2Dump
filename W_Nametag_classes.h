// WidgetBlueprintGeneratedClass W_Nametag.W_Nametag_C
// Size: 0x358 (Inherited: 0x290)
struct UW_Nametag_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UImage* Health; // 0x298(0x08)
	struct UImage* InfectedSymbol; // 0x2a0(0x08)
	struct UCommonTextBlock* Name; // 0x2a8(0x08)
	struct UOverlay* PrimaryOvr; // 0x2b0(0x08)
	struct UImage* TalkingIndicator; // 0x2b8(0x08)
	struct UCheckBox* VoteBox1; // 0x2c0(0x08)
	struct UCheckBox* VoteBox2; // 0x2c8(0x08)
	struct UCheckBox* VoteBox3; // 0x2d0(0x08)
	struct UCheckBox* VoteBox4; // 0x2d8(0x08)
	struct UCheckBox* VoteBox5; // 0x2e0(0x08)
	struct UCheckBox* VoteBox6; // 0x2e8(0x08)
	struct UHorizontalBox* VotingInfo; // 0x2f0(0x08)
	struct UW_NametagRespawnTimer_C* W_NametagRespawnTimer; // 0x2f8(0x08)
	int32_t TeamId; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	struct APawn* Pawn; // 0x308(0x08)
	struct FString NameText; // 0x310(0x10)
	bool HideOwnerName; // 0x320(0x01)
	bool ShowTeamNamesOnly; // 0x321(0x01)
	char pad_322[0x6]; // 0x322(0x06)
	struct TArray<struct UAsyncAction_ListenForGameplayMessage*> GameplayMessageListeners; // 0x328(0x10)
	bool IsNight; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct UAbilityAsync_WaitGameplayTagAdded* GameplayTagListener; // 0x340(0x08)
	struct TArray<struct UCheckBox*> VotingBoxes; // 0x348(0x10)

	void UpdateVisibility(); // Function W_Nametag.W_Nametag_C.UpdateVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SetTeamVisuals(); // Function W_Nametag.W_Nametag_C.SetTeamVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnTeamChanged_DF422E414174759AB7561D922CE88170(bool bTeamSet, int32_t TeamId); // Function W_Nametag.W_Nametag_C.OnTeamChanged_DF422E414174759AB7561D922CE88170 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnMessageReceived_02C3E88A45B13C24CB56E2B937E5403A(struct UAsyncAction_ListenForGameplayMessage* ProxyObject, struct FGameplayTag ActualChannel); // Function W_Nametag.W_Nametag_C.OnMessageReceived_02C3E88A45B13C24CB56E2B937E5403A // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnMessageReceived_D25386D24AC031FD0D5E4E8655F104B3(struct UAsyncAction_ListenForGameplayMessage* ProxyObject, struct FGameplayTag ActualChannel); // Function W_Nametag.W_Nametag_C.OnMessageReceived_D25386D24AC031FD0D5E4E8655F104B3 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Added_CF78023B40F6B4062F53F98D54B851C5(); // Function W_Nametag.W_Nametag_C.Added_CF78023B40F6B4062F53F98D54B851C5 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void BindIndicator(struct UIndicatorDescriptor* Indicator); // Function W_Nametag.W_Nametag_C.BindIndicator // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void UnbindIndicator(struct UIndicatorDescriptor* Indicator); // Function W_Nametag.W_Nametag_C.UnbindIndicator // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void SetNameText(struct FString PlayerName); // Function W_Nametag.W_Nametag_C.SetNameText // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SetHealthBarPercent(double HealthPercent); // Function W_Nametag.W_Nametag_C.SetHealthBarPercent // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void InitializeNameplate(struct APawn* Pawn, struct FString Name); // Function W_Nametag.W_Nametag_C.InitializeNameplate // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Health Changed(struct ULyraHealthComponent* HealthComponent, float OldValue, float NewValue, struct AActor* Instigator); // Function W_Nametag.W_Nametag_C.Health Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void PawnReady(); // Function W_Nametag.W_Nametag_C.PawnReady // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void DeathStarted(struct AActor* OwningActor); // Function W_Nametag.W_Nametag_C.DeathStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnVotingInfoReceived(struct FMessage_NametagVotingInfo VotingInfo); // Function W_Nametag.W_Nametag_C.OnVotingInfoReceived // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Destruct(); // Function W_Nametag.W_Nametag_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_W_Nametag(int32_t EntryPoint); // Function W_Nametag.W_Nametag_C.ExecuteUbergraph_W_Nametag // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

