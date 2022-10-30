// BlueprintGeneratedClass GA_ItemSelection.GA_ItemSelection_C
// Size: 0x488 (Inherited: 0x478)
struct UGA_ItemSelection_C : ULyraGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct ULyraQuickBarComponent* QuickBarComponent; // 0x480(0x08)

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_ItemSelection.GA_ItemSelection_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GA_ItemSelection(int32_t EntryPoint); // Function GA_ItemSelection.GA_ItemSelection_C.ExecuteUbergraph_GA_ItemSelection // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

