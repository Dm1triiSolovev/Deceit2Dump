// WidgetBlueprintGeneratedClass W_OverallUILayout.W_OverallUILayout_C
// Size: 0x348 (Inherited: 0x320)
struct UW_OverallUILayout_C : UPrimaryGameLayout {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UCommonActivatableWidgetStack* GameLayer_Stack; // 0x328(0x08)
	struct UCommonActivatableWidgetStack* GameMenu_Stack; // 0x330(0x08)
	struct UCommonActivatableWidgetStack* Menu_Stack; // 0x338(0x08)
	struct UCommonActivatableWidgetStack* Modal_Stack; // 0x340(0x08)

	void OnInitialized(); // Function W_OverallUILayout.W_OverallUILayout_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_W_OverallUILayout(int32_t EntryPoint); // Function W_OverallUILayout.W_OverallUILayout_C.ExecuteUbergraph_W_OverallUILayout // (Final|UbergraphFunction) // @ game+0x2552560
};

