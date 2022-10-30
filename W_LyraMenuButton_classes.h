// WidgetBlueprintGeneratedClass W_LyraMenuButton.W_LyraMenuButton_C
// Size: 0x1338 (Inherited: 0x1090)
struct UW_LyraMenuButton_C : ULyraButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1090(0x08)
	struct UWidgetAnimation* OnPressed; // 0x1098(0x08)
	struct UWidgetAnimation* OnHovered; // 0x10a0(0x08)
	struct USpacer* AnimBoundSpacer_Left; // 0x10a8(0x08)
	struct USpacer* AnimBoundSpacer_Right; // 0x10b0(0x08)
	struct UBorder* ButtonBorder; // 0x10b8(0x08)
	struct UCommonTextBlock* ButtonTextBlock; // 0x10c0(0x08)
	struct UImage* Glow; // 0x10c8(0x08)
	struct UImage* Icon; // 0x10d0(0x08)
	struct UOverlay* IconOvr; // 0x10d8(0x08)
	struct UImage* ring; // 0x10e0(0x08)
	struct UWidgetSwitcher* TextIconSwitch; // 0x10e8(0x08)
	struct UOverlay* TextOvr; // 0x10f0(0x08)
	struct UImage* TextShadow; // 0x10f8(0x08)
	double TextLeftRightPadding; // 0x1100(0x08)
	double HitTestPadding_X; // 0x1108(0x08)
	double HitTestPadding_Y; // 0x1110(0x08)
	double PressProgress; // 0x1118(0x08)
	struct FSlateFontInfo Font; // 0x1120(0x58)
	char pad_1178[0x8]; // 0x1178(0x08)
	struct FSlateBrush ButtonBorderBrush; // 0x1180(0xd0)
	struct FSlateBrush IconBrush; // 0x1250(0xd0)
	enum class ETextTransformPolicy TextCase; // 0x1320(0x01)
	bool FlipIconXDimension; // 0x1321(0x01)
	bool IsDisabled; // 0x1322(0x01)
	bool UseImageOverlays; // 0x1323(0x01)
	bool UseScaleChangeSpacers; // 0x1324(0x01)
	bool UseIconOverride; // 0x1325(0x01)
	enum class EHorizontalAlignment InputHorzAlignment; // 0x1326(0x01)
	enum class EVerticalAlignment InputVertAlignment; // 0x1327(0x01)
	struct FMargin InputPadding; // 0x1328(0x10)

	void UpdateButtonStyles(); // Function W_LyraMenuButton.W_LyraMenuButton_C.UpdateButtonStyles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ResetMaterials(); // Function W_LyraMenuButton.W_LyraMenuButton_C.ResetMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void GetPressProgress(double& Progress); // Function W_LyraMenuButton.W_LyraMenuButton_C.GetPressProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void UpdateTextStyle(); // Function W_LyraMenuButton.W_LyraMenuButton_C.UpdateTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Finished_D61E6B2E4C7C79D1B4BCF29E8E3B3418(); // Function W_LyraMenuButton.W_LyraMenuButton_C.Finished_D61E6B2E4C7C79D1B4BCF29E8E3B3418 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void PreConstruct(bool IsDesignTime); // Function W_LyraMenuButton.W_LyraMenuButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2552560
	void BP_OnHovered(); // Function W_LyraMenuButton.W_LyraMenuButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnUnhovered(); // Function W_LyraMenuButton.W_LyraMenuButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnClicked(); // Function W_LyraMenuButton.W_LyraMenuButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnSelected(); // Function W_LyraMenuButton.W_LyraMenuButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnDeselected(); // Function W_LyraMenuButton.W_LyraMenuButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnDisabled(); // Function W_LyraMenuButton.W_LyraMenuButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BP_OnEnabled(); // Function W_LyraMenuButton.W_LyraMenuButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void Construct(); // Function W_LyraMenuButton.W_LyraMenuButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2552560
	void UpdateButtonText(struct FText& InText); // Function W_LyraMenuButton.W_LyraMenuButton_C.UpdateButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_W_LyraMenuButton(int32_t EntryPoint); // Function W_LyraMenuButton.W_LyraMenuButton_C.ExecuteUbergraph_W_LyraMenuButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

