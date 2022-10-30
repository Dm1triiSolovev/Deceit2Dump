// BlueprintGeneratedClass L_DeceitMenu.L_DeceitMenu_C
// Size: 0x298 (Inherited: 0x280)
struct AL_DeceitMenu_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct ACameraActor* CameraActor_4_ExecuteUbergraph_L_DeceitMenu_RefProperty; // 0x288(0x08)
	struct ACameraActor* CameraActor_0_ExecuteUbergraph_L_DeceitMenu_RefProperty; // 0x290(0x08)

	void OnMessageReceived_CA76BD0B4A76205B7C25EDAD439D1335(struct UAsyncAction_ListenForGameplayMessage* ProxyObject, struct FGameplayTag ActualChannel); // Function L_DeceitMenu.L_DeceitMenu_C.OnMessageReceived_CA76BD0B4A76205B7C25EDAD439D1335 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ReceiveBeginPlay(); // Function L_DeceitMenu.L_DeceitMenu_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_L_DeceitMenu(int32_t EntryPoint); // Function L_DeceitMenu.L_DeceitMenu_C.ExecuteUbergraph_L_DeceitMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

