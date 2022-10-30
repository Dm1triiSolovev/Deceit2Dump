// BlueprintGeneratedClass B_MusicManagerComponent_Base.B_MusicManagerComponent_Base_C
// Size: 0xd1 (Inherited: 0xb0)
struct UB_MusicManagerComponent_Base_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UAudioComponent* Music System; // 0xb8(0x08)
	double Alpha_Intensity; // 0xc0(0x08)
	double Alpha_Mvmt; // 0xc8(0x08)
	bool bIsMenu; // 0xd0(0x01)

	void SetIsMenu(bool InBool); // Function B_MusicManagerComponent_Base.B_MusicManagerComponent_Base_C.SetIsMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnMessageReceived_E821ABBA45C2AECD30DB0EB4E4BADC9B(struct UAsyncAction_ListenForGameplayMessage* ProxyObject, struct FGameplayTag ActualChannel); // Function B_MusicManagerComponent_Base.B_MusicManagerComponent_Base_C.OnMessageReceived_E821ABBA45C2AECD30DB0EB4E4BADC9B // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnMessageReceived_509B8ED54AE1FD836C97B1B5CC1840B9(struct UAsyncAction_ListenForGameplayMessage* ProxyObject, struct FGameplayTag ActualChannel); // Function B_MusicManagerComponent_Base.B_MusicManagerComponent_Base_C.OnMessageReceived_509B8ED54AE1FD836C97B1B5CC1840B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ReceiveBeginPlay(); // Function B_MusicManagerComponent_Base.B_MusicManagerComponent_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void ReceiveTick(float DeltaSeconds); // Function B_MusicManagerComponent_Base.B_MusicManagerComponent_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void Receive Weapon Fire(struct AActor* Player, double Strength); // Function B_MusicManagerComponent_Base.B_MusicManagerComponent_Base_C.Receive Weapon Fire // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Receive Player Death(struct AActor* Player); // Function B_MusicManagerComponent_Base.B_MusicManagerComponent_Base_C.Receive Player Death // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Fire Stinger(bool Positive); // Function B_MusicManagerComponent_Base.B_MusicManagerComponent_Base_C.Fire Stinger // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_MusicManagerComponent_Base(int32_t EntryPoint); // Function B_MusicManagerComponent_Base.B_MusicManagerComponent_Base_C.ExecuteUbergraph_B_MusicManagerComponent_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

