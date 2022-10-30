// BlueprintGeneratedClass GCNL_Test_Looping.GCNL_Test_Looping_C
// Size: 0xfb8 (Inherited: 0xfb0)
struct AGCNL_Test_Looping_C : AGameplayCueNotify_Looping {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xfb0(0x08)

	void OnLoopingStart(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GCNL_Test_Looping.GCNL_Test_Looping_C.OnLoopingStart // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void OnRecurring(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GCNL_Test_Looping.GCNL_Test_Looping_C.OnRecurring // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void OnRemoval(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GCNL_Test_Looping.GCNL_Test_Looping_C.OnRemoval // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GCNL_Test_Looping(int32_t EntryPoint); // Function GCNL_Test_Looping.GCNL_Test_Looping_C.ExecuteUbergraph_GCNL_Test_Looping // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

