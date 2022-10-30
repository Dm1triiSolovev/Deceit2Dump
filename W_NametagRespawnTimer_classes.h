// WidgetBlueprintGeneratedClass W_NametagRespawnTimer.W_NametagRespawnTimer_C
// Size: 0x2e8 (Inherited: 0x290)
struct UW_NametagRespawnTimer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetAnimation* Outro; // 0x298(0x08)
	struct UWidgetAnimation* Intro; // 0x2a0(0x08)
	struct UImage* Fill; // 0x2a8(0x08)
	struct UImage* FillGlow; // 0x2b0(0x08)
	struct UCommonNumericTextBlock* Time; // 0x2b8(0x08)
	struct FTimerHandle CooldownTimer; // 0x2c0(0x08)
	double Duration; // 0x2c8(0x08)
	double StartTime; // 0x2d0(0x08)
	bool Respawning; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct APlayerState* OwningPlayer; // 0x2e0(0x08)

	void OnTimerFinished(); // Function W_NametagRespawnTimer.W_NametagRespawnTimer_C.OnTimerFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void UpdateRespawnText(); // Function W_NametagRespawnTimer.W_NametagRespawnTimer_C.UpdateRespawnText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnMessageReceived_C02BF7344FEBB60820EAECBA24580045(struct UAsyncAction_ListenForGameplayMessage* ProxyObject, struct FGameplayTag ActualChannel); // Function W_NametagRespawnTimer.W_NametagRespawnTimer_C.OnMessageReceived_C02BF7344FEBB60820EAECBA24580045 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnMessageReceived_3F0CB73445089DA28BFEF6B4C8DC2A30(struct UAsyncAction_ListenForGameplayMessage* ProxyObject, struct FGameplayTag ActualChannel); // Function W_NametagRespawnTimer.W_NametagRespawnTimer_C.OnMessageReceived_3F0CB73445089DA28BFEF6B4C8DC2A30 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ListenForDuration(); // Function W_NametagRespawnTimer.W_NametagRespawnTimer_C.ListenForDuration // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnInitialized(); // Function W_NametagRespawnTimer.W_NametagRespawnTimer_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_W_NametagRespawnTimer(int32_t EntryPoint); // Function W_NametagRespawnTimer.W_NametagRespawnTimer_C.ExecuteUbergraph_W_NametagRespawnTimer // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

