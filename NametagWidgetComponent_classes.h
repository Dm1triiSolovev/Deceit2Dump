// BlueprintGeneratedClass NametagWidgetComponent.NametagWidgetComponent_C
// Size: 0x6e0 (Inherited: 0x6b8)
struct UNametagWidgetComponent_C : ULocalFacingWidgetComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct APawn* Pawn; // 0x6c0(0x08)
	struct FString Name text; // 0x6c8(0x10)
	struct UW_Nametag_C* Nametag; // 0x6d8(0x08)

	void ReceiveBeginPlay(); // Function NametagWidgetComponent.NametagWidgetComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void InitializeNametag(struct APawn* Pawn, struct FString Name); // Function NametagWidgetComponent.NametagWidgetComponent_C.InitializeNametag // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void PawnReady(); // Function NametagWidgetComponent.NametagWidgetComponent_C.PawnReady // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_NametagWidgetComponent(int32_t EntryPoint); // Function NametagWidgetComponent.NametagWidgetComponent_C.ExecuteUbergraph_NametagWidgetComponent // (Final|UbergraphFunction) // @ game+0x2552560
};

