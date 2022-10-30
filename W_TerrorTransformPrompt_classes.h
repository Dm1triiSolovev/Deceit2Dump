// WidgetBlueprintGeneratedClass W_TerrorTransformPrompt.W_TerrorTransformPrompt_C
// Size: 0x32a (Inherited: 0x320)
struct UW_TerrorTransformPrompt_C : ULyraTaggedWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	bool IsInfected; // 0x328(0x01)
	bool IsNight; // 0x329(0x01)

	void UpdateVisibility(); // Function W_TerrorTransformPrompt.W_TerrorTransformPrompt_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnMessageReceived_4628BF3346F9FCA9C604B399AC2C079E(struct UAsyncAction_ListenForGameplayMessage* ProxyObject, struct FGameplayTag ActualChannel); // Function W_TerrorTransformPrompt.W_TerrorTransformPrompt_C.OnMessageReceived_4628BF3346F9FCA9C604B399AC2C079E // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnMessageReceived_E6FC32794574207F5F1DA698BB49EC70(struct UAsyncAction_ListenForGameplayMessage* ProxyObject, struct FGameplayTag ActualChannel); // Function W_TerrorTransformPrompt.W_TerrorTransformPrompt_C.OnMessageReceived_E6FC32794574207F5F1DA698BB49EC70 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Construct(); // Function W_TerrorTransformPrompt.W_TerrorTransformPrompt_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2552560
	void OnInitialized(); // Function W_TerrorTransformPrompt.W_TerrorTransformPrompt_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_W_TerrorTransformPrompt(int32_t EntryPoint); // Function W_TerrorTransformPrompt.W_TerrorTransformPrompt_C.ExecuteUbergraph_W_TerrorTransformPrompt // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

