// WidgetBlueprintGeneratedClass W_WaitingForPlayers_Message.W_WaitingForPlayers_Message_C
// Size: 0x2d1 (Inherited: 0x290)
struct UW_WaitingForPlayers_Message_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetAnimation* Countdown; // 0x298(0x08)
	struct UImage* BackgroundDim; // 0x2a0(0x08)
	struct UImage* Border; // 0x2a8(0x08)
	struct UImage* Glow; // 0x2b0(0x08)
	struct UCommonTextBlock* MessageTextWidget; // 0x2b8(0x08)
	struct UImage* ring; // 0x2c0(0x08)
	struct UCommonRichTextBlock* TeamNotification; // 0x2c8(0x08)
	bool CountdownStarted; // 0x2d0(0x01)

	void OnMessageReceived_631AA6B74285E256B823EF895873FC62(struct UAsyncAction_ListenForGameplayMessage* ProxyObject, struct FGameplayTag ActualChannel); // Function W_WaitingForPlayers_Message.W_WaitingForPlayers_Message_C.OnMessageReceived_631AA6B74285E256B823EF895873FC62 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnInitialized(); // Function W_WaitingForPlayers_Message.W_WaitingForPlayers_Message_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_W_WaitingForPlayers_Message(int32_t EntryPoint); // Function W_WaitingForPlayers_Message.W_WaitingForPlayers_Message_C.ExecuteUbergraph_W_WaitingForPlayers_Message // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

