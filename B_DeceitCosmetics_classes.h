// BlueprintGeneratedClass B_DeceitCosmetics.B_DeceitCosmetics_C
// Size: 0xd1 (Inherited: 0xc0)
struct UB_DeceitCosmetics_C : ULyraControllerComponent_CharacterParts {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct AActor* CurrentActorClass; // 0xc8(0x08)
	bool HasValidCharacter; // 0xd0(0x01)

	void SetupFirstPerson(); // Function B_DeceitCosmetics.B_DeceitCosmetics_C.SetupFirstPerson // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SetCharacterFromState(struct AB_DeceitPlayerState_C* PlayerState); // Function B_DeceitCosmetics.B_DeceitCosmetics_C.SetCharacterFromState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SetActorClass(struct AActor* ActorClass); // Function B_DeceitCosmetics.B_DeceitCosmetics_C.SetActorClass // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ReceiveBeginPlay(); // Function B_DeceitCosmetics.B_DeceitCosmetics_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_DeceitCosmetics(int32_t EntryPoint); // Function B_DeceitCosmetics.B_DeceitCosmetics_C.ExecuteUbergraph_B_DeceitCosmetics // (Final|UbergraphFunction) // @ game+0x2552560
};

