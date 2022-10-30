// BlueprintGeneratedClass B_DeceitPrivateProperties.B_DeceitPrivateProperties_C
// Size: 0xf0 (Inherited: 0xb0)
struct UB_DeceitPrivateProperties_C : UControllerComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	bool IsInfected; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct TArray<struct APlayerState*> InfectedPartners; // 0xc0(0x10)
	struct TArray<int32_t> InspectionPin; // 0xd0(0x10)
	double GamePhaseEndTime; // 0xe0(0x08)
	int32_t BloodOfferingsRequired; // 0xe8(0x04)
	int32_t BloodOffered; // 0xec(0x04)

	void OnRep_InspectionPin(); // Function B_DeceitPrivateProperties.B_DeceitPrivateProperties_C.OnRep_InspectionPin // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnRep_InfectedPartners(); // Function B_DeceitPrivateProperties.B_DeceitPrivateProperties_C.OnRep_InfectedPartners // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnRep_IsInfected(); // Function B_DeceitPrivateProperties.B_DeceitPrivateProperties_C.OnRep_IsInfected // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ReceiveBeginPlay(); // Function B_DeceitPrivateProperties.B_DeceitPrivateProperties_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void SetOutlineOnHero(struct AB_Hero_Deceit_C* Hero, int32_t Value); // Function B_DeceitPrivateProperties.B_DeceitPrivateProperties_C.SetOutlineOnHero // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_DeceitPrivateProperties(int32_t EntryPoint); // Function B_DeceitPrivateProperties.B_DeceitPrivateProperties_C.ExecuteUbergraph_B_DeceitPrivateProperties // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

