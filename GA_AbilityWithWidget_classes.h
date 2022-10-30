// BlueprintGeneratedClass GA_AbilityWithWidget.GA_AbilityWithWidget_C
// Size: 0x4c8 (Inherited: 0x478)
struct UGA_AbilityWithWidget_C : ULyraGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct FUIExtensionHandle WidgetExtensionHandle; // 0x480(0x18)
	struct TArray<struct UUserWidget*> WidgetClasses; // 0x498(0x10)
	struct TArray<struct FGameplayTag> WidgetExtensionPointTags; // 0x4a8(0x10)
	struct TArray<struct FUIExtensionHandle> WidgetExtensionHandles; // 0x4b8(0x10)

	void K2_OnAbilityAdded(); // Function GA_AbilityWithWidget.GA_AbilityWithWidget_C.K2_OnAbilityAdded // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void K2_OnAbilityRemoved(); // Function GA_AbilityWithWidget.GA_AbilityWithWidget_C.K2_OnAbilityRemoved // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GA_AbilityWithWidget(int32_t EntryPoint); // Function GA_AbilityWithWidget.GA_AbilityWithWidget_C.ExecuteUbergraph_GA_AbilityWithWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

