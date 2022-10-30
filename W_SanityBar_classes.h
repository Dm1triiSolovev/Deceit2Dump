// WidgetBlueprintGeneratedClass W_SanityBar.W_SanityBar_C
// Size: 0x2a8 (Inherited: 0x290)
struct UW_SanityBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UImage* Image_104; // 0x298(0x08)
	struct UProgressBar* SanityBar; // 0x2a0(0x08)

	void Changed_9E724BB942C4BA6ACC895EACD6B13EBA(struct FGameplayAttribute Attribute, float NewValue, float OldValue); // Function W_SanityBar.W_SanityBar_C.Changed_9E724BB942C4BA6ACC895EACD6B13EBA // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnInitialized(); // Function W_SanityBar.W_SanityBar_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_W_SanityBar(int32_t EntryPoint); // Function W_SanityBar.W_SanityBar_C.ExecuteUbergraph_W_SanityBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

