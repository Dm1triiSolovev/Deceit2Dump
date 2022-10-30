// BlueprintGeneratedClass GC_Collect_Effect.GC_Collect_Effect_C
// Size: 0x328 (Inherited: 0x2d8)
struct AGC_Collect_Effect_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2e0(0x08)
	float ItemSuckUp_fxBlend_01CAB1614FF06C87B3844C9BE2366452; // 0x2e8(0x04)
	float ItemSuckUp_ItemScale_01CAB1614FF06C87B3844C9BE2366452; // 0x2ec(0x04)
	float ItemSuckUp_NewTrack_0_01CAB1614FF06C87B3844C9BE2366452; // 0x2f0(0x04)
	enum class ETimelineDirection ItemSuckUp__Direction_01CAB1614FF06C87B3844C9BE2366452; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	struct UTimelineComponent* ItemSuckUp; // 0x2f8(0x08)
	double SuckUpAnimTime; // 0x300(0x08)
	struct USplineComponent* Spline_PickedUpAnim; // 0x308(0x08)
	struct AActor* ActorToPickup; // 0x310(0x08)
	struct APawn* PawnWhoPickedUp; // 0x318(0x08)
	struct FName In Socket Name; // 0x320(0x08)

	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GC_Collect_Effect.GC_Collect_Effect_C.OnExecute // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ItemSuckUp__FinishedFunc(); // Function GC_Collect_Effect.GC_Collect_Effect_C.ItemSuckUp__FinishedFunc // (BlueprintEvent) // @ game+0x2552560
	void ItemSuckUp__UpdateFunc(); // Function GC_Collect_Effect.GC_Collect_Effect_C.ItemSuckUp__UpdateFunc // (BlueprintEvent) // @ game+0x2552560
	void PlayPickup(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GC_Collect_Effect.GC_Collect_Effect_C.PlayPickup // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GC_Collect_Effect(int32_t EntryPoint); // Function GC_Collect_Effect.GC_Collect_Effect_C.ExecuteUbergraph_GC_Collect_Effect // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

