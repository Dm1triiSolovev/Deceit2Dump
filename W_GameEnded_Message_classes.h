// WidgetBlueprintGeneratedClass W_GameEnded_Message.W_GameEnded_Message_C
// Size: 0x2c4 (Inherited: 0x290)
struct UW_GameEnded_Message_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetAnimation* DefeatIntro; // 0x298(0x08)
	struct UWidgetAnimation* VictoryIntro; // 0x2a0(0x08)
	struct UCommonTextBlock* DefeatMessage; // 0x2a8(0x08)
	struct UCommonTextBlock* VictoryMessage; // 0x2b0(0x08)
	struct UWidgetSwitcher* VictoryOrDefeatWidgetSwitcher; // 0x2b8(0x08)
	int32_t Team; // 0x2c0(0x04)

	void SetTeamMaterials(); // Function W_GameEnded_Message.W_GameEnded_Message_C.SetTeamMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void PreConstruct(bool IsDesignTime); // Function W_GameEnded_Message.W_GameEnded_Message_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2552560
	void ConstructFromCueParams(struct FGameplayCueParameters Params); // Function W_GameEnded_Message.W_GameEnded_Message_C.ConstructFromCueParams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_W_GameEnded_Message(int32_t EntryPoint); // Function W_GameEnded_Message.W_GameEnded_Message_C.ExecuteUbergraph_W_GameEnded_Message // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

