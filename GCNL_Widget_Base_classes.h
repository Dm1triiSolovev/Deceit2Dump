// BlueprintGeneratedClass GCNL_Widget_Base.GCNL_Widget_Base_C
// Size: 0xfd0 (Inherited: 0xfb0)
struct AGCNL_Widget_Base_C : AGameplayCueNotify_Looping {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xfb0(0x08)
	struct UUserWidget* WidgetToSpawn; // 0xfb8(0x08)
	struct UUserWidget* SpawnedWidget; // 0xfc0(0x08)
	struct APlayerController* OptionalLocalController; // 0xfc8(0x08)

	void OnLoopingStart(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GCNL_Widget_Base.GCNL_Widget_Base_C.OnLoopingStart // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void OnRemoval(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GCNL_Widget_Base.GCNL_Widget_Base_C.OnRemoval // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GCNL_Widget_Base(int32_t EntryPoint); // Function GCNL_Widget_Base.GCNL_Widget_Base_C.ExecuteUbergraph_GCNL_Widget_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

