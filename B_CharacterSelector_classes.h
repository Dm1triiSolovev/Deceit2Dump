// BlueprintGeneratedClass B_CharacterSelector.B_CharacterSelector_C
// Size: 0x339 (Inherited: 0x278)
struct AB_CharacterSelector_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UChildActorComponent* Character; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct TMap<enum class EDeceitCharacter, struct TSoftClassPtr<UObject>> CharacterClasses; // 0x290(0x50)
	enum class EDeceitCharacter CurrentCharacter; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct TSet<enum class EDeceitCharacter> RaisedUpCharacters; // 0x2e8(0x50)
	bool CharacterBeingLoaded; // 0x338(0x01)

	void OnMessageReceived_45A8BD7E4F72532B03C524AC4A97D71C(struct UAsyncAction_ListenForGameplayMessage* ProxyObject, struct FGameplayTag ActualChannel); // Function B_CharacterSelector.B_CharacterSelector_C.OnMessageReceived_45A8BD7E4F72532B03C524AC4A97D71C // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Completed_39E873344194D43E985BECBF32AB396B(struct TArray<struct UObject*>& Loaded); // Function B_CharacterSelector.B_CharacterSelector_C.Completed_39E873344194D43E985BECBF32AB396B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnLoaded_91517E2C49FE4A1F9440E38E8095B704(struct UObject* Loaded); // Function B_CharacterSelector.B_CharacterSelector_C.OnLoaded_91517E2C49FE4A1F9440E38E8095B704 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnLoaded_9F7D65874E54C056715503AC0F84430A(struct UObject* Loaded); // Function B_CharacterSelector.B_CharacterSelector_C.OnLoaded_9F7D65874E54C056715503AC0F84430A // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ReceiveBeginPlay(); // Function B_CharacterSelector.B_CharacterSelector_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void PreviewCharacter(enum class EDeceitCharacter Character); // Function B_CharacterSelector.B_CharacterSelector_C.PreviewCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_CharacterSelector(int32_t EntryPoint); // Function B_CharacterSelector.B_CharacterSelector_C.ExecuteUbergraph_B_CharacterSelector // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

