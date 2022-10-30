// WidgetBlueprintGeneratedClass W_SingleTextStat.W_SingleTextStat_C
// Size: 0x330 (Inherited: 0x2c8)
struct UW_SingleTextStat_C : ULyraPerfStatWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UCommonTextBlock* StatLabelWidget; // 0x2d0(0x08)
	struct USizeBox* StatValueSizer; // 0x2d8(0x08)
	struct UCommonTextBlock* StatValueWidget; // 0x2e0(0x08)
	struct FText StatDisplayName; // 0x2e8(0x18)
	struct FText StatValueFormat; // 0x300(0x18)
	int32_t FractionalDigits; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	double ValuePaddingWidth; // 0x320(0x08)
	double ScaleFactor; // 0x328(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_SingleTextStat.W_SingleTextStat_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2552560
	void PreConstruct(bool IsDesignTime); // Function W_SingleTextStat.W_SingleTextStat_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_W_SingleTextStat(int32_t EntryPoint); // Function W_SingleTextStat.W_SingleTextStat_C.ExecuteUbergraph_W_SingleTextStat // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

