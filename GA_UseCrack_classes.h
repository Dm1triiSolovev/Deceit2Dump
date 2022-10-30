// BlueprintGeneratedClass GA_UseCrack.GA_UseCrack_C
// Size: 0x4a0 (Inherited: 0x478)
struct UGA_UseCrack_C : ULyraGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UGameplayTask* Async Task; // 0x480(0x08)
	bool TravelDirection; // 0x488(0x01)
	bool TagsSet; // 0x489(0x01)
	char pad_48A[0x2]; // 0x48a(0x02)
	struct FName OriginalCollisionProfile; // 0x48c(0x08)
	bool CollisionSet; // 0x494(0x01)
	char pad_495[0x3]; // 0x495(0x03)
	struct AB_Wall_Crack_C* WallCrack; // 0x498(0x08)

	double GetInteractAngle(struct AActor* WallCrack, struct AActor* Player); // Function GA_UseCrack.GA_UseCrack_C.GetInteractAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2552560
	void OnRequestFailed_E5D849554ACC894E3470528AB121BC3D(); // Function GA_UseCrack.GA_UseCrack_C.OnRequestFailed_E5D849554ACC894E3470528AB121BC3D // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void MoveFinished_E5D849554ACC894E3470528AB121BC3D(enum class EPathFollowingResult Result); // Function GA_UseCrack.GA_UseCrack_C.MoveFinished_E5D849554ACC894E3470528AB121BC3D // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnCancelled_9581C5DE46032B2D47908787836432B9(); // Function GA_UseCrack.GA_UseCrack_C.OnCancelled_9581C5DE46032B2D47908787836432B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnInterrupted_9581C5DE46032B2D47908787836432B9(); // Function GA_UseCrack.GA_UseCrack_C.OnInterrupted_9581C5DE46032B2D47908787836432B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnBlendOut_9581C5DE46032B2D47908787836432B9(); // Function GA_UseCrack.GA_UseCrack_C.OnBlendOut_9581C5DE46032B2D47908787836432B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnCompleted_9581C5DE46032B2D47908787836432B9(); // Function GA_UseCrack.GA_UseCrack_C.OnCompleted_9581C5DE46032B2D47908787836432B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnSync_332E6A27474F707C81F8FA8C027A63C0(); // Function GA_UseCrack.GA_UseCrack_C.OnSync_332E6A27474F707C81F8FA8C027A63C0 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_UseCrack.GA_UseCrack_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_UseCrack.GA_UseCrack_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GA_UseCrack(int32_t EntryPoint); // Function GA_UseCrack.GA_UseCrack_C.ExecuteUbergraph_GA_UseCrack // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

