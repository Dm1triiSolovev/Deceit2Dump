// WidgetBlueprintGeneratedClass W_MatchDecided_Message.W_MatchDecided_Message_C
// Size: 0x2ec (Inherited: 0x290)
struct UW_MatchDecided_Message_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetAnimation* DefeatIntro; // 0x298(0x08)
	struct UWidgetAnimation* VictoryIntro; // 0x2a0(0x08)
	struct UCommonTextBlock* DefeatMessage; // 0x2a8(0x08)
	struct UImage* GlowStripe; // 0x2b0(0x08)
	struct UImage* Logo; // 0x2b8(0x08)
	struct UImage* LogoGlow; // 0x2c0(0x08)
	struct UImage* SoftGlow; // 0x2c8(0x08)
	struct UImage* TextShadow; // 0x2d0(0x08)
	struct UCommonTextBlock* VictoryMessage; // 0x2d8(0x08)
	struct UWidgetSwitcher* VictoryOrDefeatWidgetSwitcher; // 0x2e0(0x08)
	int32_t Team; // 0x2e8(0x04)

	void SetTeamMaterials(); // Function W_MatchDecided_Message.W_MatchDecided_Message_C.SetTeamMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ConstructFromCueParams(struct FGameplayCueParameters Params); // Function W_MatchDecided_Message.W_MatchDecided_Message_C.ConstructFromCueParams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void PreConstruct(bool IsDesignTime); // Function W_MatchDecided_Message.W_MatchDecided_Message_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_W_MatchDecided_Message(int32_t EntryPoint); // Function W_MatchDecided_Message.W_MatchDecided_Message_C.ExecuteUbergraph_W_MatchDecided_Message // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

