// BlueprintGeneratedClass B_AlertSceneComponent.B_AlertSceneComponent_C
// Size: 0x378 (Inherited: 0x2b0)
struct UB_AlertSceneComponent_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	double Duration; // 0x2b8(0x08)
	bool Visible; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	double StartTime; // 0x2c8(0x08)
	struct UMetaSoundSource* Sound; // 0x2d0(0x08)
	struct UNiagaraComponent* ParticleEffectComponent; // 0x2d8(0x08)
	struct UNiagaraSystem* ParticleEffect; // 0x2e0(0x08)
	struct FVector ParticleOffset; // 0x2e8(0x18)
	struct UIndicatorDescriptor* Indicator; // 0x300(0x08)
	struct TSoftClassPtr<UObject> AlertWidget; // 0x308(0x28)
	struct TArray<struct UAbilityAsync_WaitGameplayTagAdded*> TagAddedListeners; // 0x330(0x10)
	struct TArray<struct UAbilityAsync_WaitGameplayTagRemoved*> TagRemovedListeners; // 0x340(0x10)
	bool SystemActivated; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	int32_t ColourValue; // 0x354(0x04)
	struct FVector WidgetOffset; // 0x358(0x18)
	double FadeWaypointDuration; // 0x370(0x08)

	void ChangeOutline(bool Remove); // Function B_AlertSceneComponent.B_AlertSceneComponent_C.ChangeOutline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void CleanUp(); // Function B_AlertSceneComponent.B_AlertSceneComponent_C.CleanUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void UnregisterListeners(); // Function B_AlertSceneComponent.B_AlertSceneComponent_C.UnregisterListeners // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ShouldShow(struct FGameplayTagContainer RequiredTags, struct FGameplayTagContainer BlockedTags, bool& Show); // Function B_AlertSceneComponent.B_AlertSceneComponent_C.ShouldShow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void CreateIndicator(); // Function B_AlertSceneComponent.B_AlertSceneComponent_C.CreateIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void HideAlert(); // Function B_AlertSceneComponent.B_AlertSceneComponent_C.HideAlert // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ShowAlert(); // Function B_AlertSceneComponent.B_AlertSceneComponent_C.ShowAlert // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Added_69EDC1D445BB7C78B4B76DBCD296FC34(); // Function B_AlertSceneComponent.B_AlertSceneComponent_C.Added_69EDC1D445BB7C78B4B76DBCD296FC34 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Removed_90D8118E49C1FD306CD82BA95DCBB766(); // Function B_AlertSceneComponent.B_AlertSceneComponent_C.Removed_90D8118E49C1FD306CD82BA95DCBB766 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Added_CD8612474C627B49A456429C7364523B(); // Function B_AlertSceneComponent.B_AlertSceneComponent_C.Added_CD8612474C627B49A456429C7364523B // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Removed_7E55CBEE46EED8083A3B7092FEFA29B1(); // Function B_AlertSceneComponent.B_AlertSceneComponent_C.Removed_7E55CBEE46EED8083A3B7092FEFA29B1 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ReceiveTick(float DeltaSeconds); // Function B_AlertSceneComponent.B_AlertSceneComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void SetupListeners(struct FGameplayTagContainer Required, struct FGameplayTagContainer bLocked); // Function B_AlertSceneComponent.B_AlertSceneComponent_C.SetupListeners // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ActivateAlert(struct FGameplayTagContainer RequiredTags, struct FGameplayTagContainer BlockedTags); // Function B_AlertSceneComponent.B_AlertSceneComponent_C.ActivateAlert // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void DeactivateAlert(); // Function B_AlertSceneComponent.B_AlertSceneComponent_C.DeactivateAlert // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ActivateAlertLocal(); // Function B_AlertSceneComponent.B_AlertSceneComponent_C.ActivateAlertLocal // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_AlertSceneComponent(int32_t EntryPoint); // Function B_AlertSceneComponent.B_AlertSceneComponent_C.ExecuteUbergraph_B_AlertSceneComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

