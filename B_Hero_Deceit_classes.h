// BlueprintGeneratedClass B_Hero_Deceit.B_Hero_Deceit_C
// Size: 0x838 (Inherited: 0x6a8)
struct AB_Hero_Deceit_C : AB_Hero_Default_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6a8(0x08)
	struct UPointLightComponent* PlayerLight; // 0x6b0(0x08)
	struct UB_AlertSceneComponent_C* B_AlertSceneComponent; // 0x6b8(0x08)
	struct USteamAudioSourceComponent* SteamAudioSource; // 0x6c0(0x08)
	struct UNametagWidgetComponent_C* NametagWidgetComponent; // 0x6c8(0x08)
	struct UB_DeceitVOIP_C* VOIPTalker; // 0x6d0(0x08)
	struct UDeceitInteractableComponent* DeceitInteractable; // 0x6d8(0x08)
	struct UFirstPersonComponent* FirstPerson; // 0x6e0(0x08)
	struct UB_MannequinPawnCosmetics_C* PawnCosmeticsComponent; // 0x6e8(0x08)
	struct UAimAssistTargetComponent* AimAssistTarget; // 0x6f0(0x08)
	struct TArray<struct ULyraInventoryItemDefinition*> InitialInventoryItems; // 0x6f8(0x10)
	struct UMaterialInstanceDynamic* MPP_outlineMaterial; // 0x708(0x08)
	struct UAudioComponent* Emote_AudioComponent; // 0x710(0x08)
	bool IsInTerrorForm; // 0x718(0x01)
	bool IsFirstPerson; // 0x719(0x01)
	char pad_71A[0x6]; // 0x71a(0x06)
	struct ULyraAbilitySet* HumanAbilitySet; // 0x720(0x08)
	struct ULyraAbilitySet* TerrorAbilitySet; // 0x728(0x08)
	struct FLyraAbilitySet_GrantedHandles GrantedHandles; // 0x730(0x30)
	int32_t LastHumanInventorySlot; // 0x760(0x04)
	char pad_764[0x4]; // 0x764(0x04)
	struct TArray<struct FUIExtensionHandle> CrouchIndicatorHandles; // 0x768(0x10)
	bool VoipSetup; // 0x778(0x01)
	char pad_779[0x7]; // 0x779(0x07)
	struct FGameplayTagContainer EffectContexts; // 0x780(0x20)
	bool IsGhostCharacter; // 0x7a0(0x01)
	char pad_7A1[0x3]; // 0x7a1(0x03)
	int32_t LastStencilIdSet; // 0x7a4(0x04)
	struct FRotator BO_Prop_R_Rot; // 0x7a8(0x18)
	struct FVector BO_Prop_R_Pos; // 0x7c0(0x18)
	struct FRotator BO_LowerArm_R_Rot; // 0x7d8(0x18)
	struct FRotator BO_LowerArm_L_Rot; // 0x7f0(0x18)
	struct FRotator BO_UpperArm_L_Rot; // 0x808(0x18)
	double Ghost Character Last Changed; // 0x820(0x08)
	double Ghost Character Radius; // 0x828(0x08)
	double Ghost Character Latch; // 0x830(0x08)

	void GetEmoteAudioComponent(struct UAudioComponent*& AudioComponent); // Function B_Hero_Deceit.B_Hero_Deceit_C.GetEmoteAudioComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SetupIKOffsetsFromCharacter(struct AB_Deceit_Char_Base_C* CharActor); // Function B_Hero_Deceit.B_Hero_Deceit_C.SetupIKOffsetsFromCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void RefreshAnimLayers1P(); // Function B_Hero_Deceit.B_Hero_Deceit_C.RefreshAnimLayers1P // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void UpdateCustomStencilFromTeamID(int32_t TeamId); // Function B_Hero_Deceit.B_Hero_Deceit_C.UpdateCustomStencilFromTeamID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void DisableFirstPersonActor(); // Function B_Hero_Deceit.B_Hero_Deceit_C.DisableFirstPersonActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void EnableFirstPersonActor(struct AActor* Character Class); // Function B_Hero_Deceit.B_Hero_Deceit_C.EnableFirstPersonActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void GetVisibleActor(struct AActor*& Actor); // Function B_Hero_Deceit.B_Hero_Deceit_C.GetVisibleActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void RefreshAnimLayers(); // Function B_Hero_Deceit.B_Hero_Deceit_C.RefreshAnimLayers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void EnableTerrorVision(bool Enable); // Function B_Hero_Deceit.B_Hero_Deceit_C.EnableTerrorVision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Set Ghost Character(bool Ghost); // Function B_Hero_Deceit.B_Hero_Deceit_C.Set Ghost Character // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Update Movement Context Effects(); // Function B_Hero_Deceit.B_Hero_Deceit_C.Update Movement Context Effects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void EnableTerrorContextEffects(bool Enable); // Function B_Hero_Deceit.B_Hero_Deceit_C.EnableTerrorContextEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SetupFirstPersonWeapon(struct ULyraEquipmentInstance* Equipment); // Function B_Hero_Deceit.B_Hero_Deceit_C.SetupFirstPersonWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SetFirstPersonAnims(); // Function B_Hero_Deceit.B_Hero_Deceit_C.SetFirstPersonAnims // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void UpdateFirstPerson(); // Function B_Hero_Deceit.B_Hero_Deceit_C.UpdateFirstPerson // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SetupShadowCharacter(); // Function B_Hero_Deceit.B_Hero_Deceit_C.SetupShadowCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void TogglePlayerLight(bool IsOn); // Function B_Hero_Deceit.B_Hero_Deceit_C.TogglePlayerLight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void CallFirstPersonListener(struct USceneComponent* Component); // Function B_Hero_Deceit.B_Hero_Deceit_C.CallFirstPersonListener // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SetupVOIP(); // Function B_Hero_Deceit.B_Hero_Deceit_C.SetupVOIP // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void EnableHumanInventory(bool Enable); // Function B_Hero_Deceit.B_Hero_Deceit_C.EnableHumanInventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void EnableTerrorAbilities(bool Enable); // Function B_Hero_Deceit.B_Hero_Deceit_C.EnableTerrorAbilities // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void EnableTerrorForm(bool Enable); // Function B_Hero_Deceit.B_Hero_Deceit_C.EnableTerrorForm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void EnableTerrorModel(bool Enable); // Function B_Hero_Deceit.B_Hero_Deceit_C.EnableTerrorModel // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnTeamOrCosmeticsChanged(int32_t TeamId, struct ULyraTeamDisplayAsset* TeamDisplayAsset); // Function B_Hero_Deceit.B_Hero_Deceit_C.OnTeamOrCosmeticsChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnRep_PlayerInfo(); // Function B_Hero_Deceit.B_Hero_Deceit_C.OnRep_PlayerInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void CreateOrUpdateOutlineIfNeeded(); // Function B_Hero_Deceit.B_Hero_Deceit_C.CreateOrUpdateOutlineIfNeeded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ClearInventory(); // Function B_Hero_Deceit.B_Hero_Deceit_C.ClearInventory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void AddInitialInventory(); // Function B_Hero_Deceit.B_Hero_Deceit_C.AddInitialInventory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ChangeQuickbarSlot(int32_t NewSlotIndex, struct FGameplayTag SlotActionTag); // Function B_Hero_Deceit.B_Hero_Deceit_C.ChangeQuickbarSlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void UserConstructionScript(); // Function B_Hero_Deceit.B_Hero_Deceit_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnReady_85FFEBE24BF0D0E5EDA099AF1C6FA660(); // Function B_Hero_Deceit.B_Hero_Deceit_C.OnReady_85FFEBE24BF0D0E5EDA099AF1C6FA660 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void InpActEvt_IA_QuickSlot1_K2Node_EnhancedInputActionEvent_7(struct FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, struct UInputAction* SourceAction); // Function B_Hero_Deceit.B_Hero_Deceit_C.InpActEvt_IA_QuickSlot1_K2Node_EnhancedInputActionEvent_7 // (BlueprintEvent) // @ game+0x2552560
	void InpActEvt_IA_QuickSlot2_K2Node_EnhancedInputActionEvent_6(struct FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, struct UInputAction* SourceAction); // Function B_Hero_Deceit.B_Hero_Deceit_C.InpActEvt_IA_QuickSlot2_K2Node_EnhancedInputActionEvent_6 // (BlueprintEvent) // @ game+0x2552560
	void InpActEvt_IA_QuickSlot3_K2Node_EnhancedInputActionEvent_5(struct FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, struct UInputAction* SourceAction); // Function B_Hero_Deceit.B_Hero_Deceit_C.InpActEvt_IA_QuickSlot3_K2Node_EnhancedInputActionEvent_5 // (BlueprintEvent) // @ game+0x2552560
	void InpActEvt_IA_QuickSlot_CycleBackward_K2Node_EnhancedInputActionEvent_4(struct FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, struct UInputAction* SourceAction); // Function B_Hero_Deceit.B_Hero_Deceit_C.InpActEvt_IA_QuickSlot_CycleBackward_K2Node_EnhancedInputActionEvent_4 // (BlueprintEvent) // @ game+0x2552560
	void InpActEvt_IA_QuickSlot_CycleForward_K2Node_EnhancedInputActionEvent_3(struct FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, struct UInputAction* SourceAction); // Function B_Hero_Deceit.B_Hero_Deceit_C.InpActEvt_IA_QuickSlot_CycleForward_K2Node_EnhancedInputActionEvent_3 // (BlueprintEvent) // @ game+0x2552560
	void OnTeamChanged_E4ADF1C54107BB7FFFAEF2B707AEFA51(bool bTeamSet, int32_t TeamId, struct ULyraTeamDisplayAsset* DisplayAsset); // Function B_Hero_Deceit.B_Hero_Deceit_C.OnTeamChanged_E4ADF1C54107BB7FFFAEF2B707AEFA51 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void InpActEvt_IA_QuickSlot4_K2Node_EnhancedInputActionEvent_2(struct FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, struct UInputAction* SourceAction); // Function B_Hero_Deceit.B_Hero_Deceit_C.InpActEvt_IA_QuickSlot4_K2Node_EnhancedInputActionEvent_2 // (BlueprintEvent) // @ game+0x2552560
	void InpActEvt_IA_QuickSlot5_K2Node_EnhancedInputActionEvent_1(struct FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, struct UInputAction* SourceAction); // Function B_Hero_Deceit.B_Hero_Deceit_C.InpActEvt_IA_QuickSlot5_K2Node_EnhancedInputActionEvent_1 // (BlueprintEvent) // @ game+0x2552560
	void Added_E9A0FBDE4DD22E0E0B5589BE0A5EBB9C(); // Function B_Hero_Deceit.B_Hero_Deceit_C.Added_E9A0FBDE4DD22E0E0B5589BE0A5EBB9C // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Removed_5083C44B467A9F151E160C911FE3105B(); // Function B_Hero_Deceit.B_Hero_Deceit_C.Removed_5083C44B467A9F151E160C911FE3105B // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnMessageReceived_4ACF1FDF412811A57D27C49EC0F338B6(struct UAsyncAction_ListenForGameplayMessage* ProxyObject, struct FGameplayTag ActualChannel); // Function B_Hero_Deceit.B_Hero_Deceit_C.OnMessageReceived_4ACF1FDF412811A57D27C49EC0F338B6 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Added_97941FCF4D0D3C5D3B2B109F7E2DC88D(); // Function B_Hero_Deceit.B_Hero_Deceit_C.Added_97941FCF4D0D3C5D3B2B109F7E2DC88D // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Removed_7914038A48BF6200A9231C9726F04693(); // Function B_Hero_Deceit.B_Hero_Deceit_C.Removed_7914038A48BF6200A9231C9726F04693 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void K2_OnDeathFinished(); // Function B_Hero_Deceit.B_Hero_Deceit_C.K2_OnDeathFinished // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BndEvt__Hero_ShooterMannequin_HealthComponent_K2Node_ComponentBoundEvent_0_LyraHealth_AttributeChanged__DelegateSignature(struct ULyraHealthComponent* HealthComponent, float OldValue, float NewValue, struct AActor* Instigator); // Function B_Hero_Deceit.B_Hero_Deceit_C.BndEvt__Hero_ShooterMannequin_HealthComponent_K2Node_ComponentBoundEvent_0_LyraHealth_AttributeChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2552560
	void K2_OnReset(); // Function B_Hero_Deceit.B_Hero_Deceit_C.K2_OnReset // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void ReceiveBeginPlay(); // Function B_Hero_Deceit.B_Hero_Deceit_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ListenForTeam(); // Function B_Hero_Deceit.B_Hero_Deceit_C.ListenForTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void SetEmoteAudioComponent(struct UAudioComponent* AudioComponent); // Function B_Hero_Deceit.B_Hero_Deceit_C.SetEmoteAudioComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void BndEvt__B_Hero_ShooterMannequin_PawnCosmeticsComponent_K2Node_ComponentBoundEvent_2_LyraSpawnedCharacterPartsChanged__DelegateSignature(struct ULyraPawnComponent_CharacterParts* ComponentWithChangedParts); // Function B_Hero_Deceit.B_Hero_Deceit_C.BndEvt__B_Hero_ShooterMannequin_PawnCosmeticsComponent_K2Node_ComponentBoundEvent_2_LyraSpawnedCharacterPartsChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2552560
	void ReceivePossessed(struct AController* NewController); // Function B_Hero_Deceit.B_Hero_Deceit_C.ReceivePossessed // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x2552560
	void BndEvt__B_Hero_ShooterMannequin_PawnExtComponent_K2Node_ComponentBoundEvent_1_LyraDynamicMulticastDelegate__DelegateSignature(); // Function B_Hero_Deceit.B_Hero_Deceit_C.BndEvt__B_Hero_ShooterMannequin_PawnExtComponent_K2Node_ComponentBoundEvent_1_LyraDynamicMulticastDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x2552560
	void ShowPawnAgainNextFrame(); // Function B_Hero_Deceit.B_Hero_Deceit_C.ShowPawnAgainNextFrame // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void BndEvt__B_Hero_Deceit_FirstPerson_K2Node_ComponentBoundEvent_3_FirstPersonChanged__DelegateSignature(bool FirstPerson); // Function B_Hero_Deceit.B_Hero_Deceit_C.BndEvt__B_Hero_Deceit_FirstPerson_K2Node_ComponentBoundEvent_3_FirstPersonChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2552560
	void K2_OnEquipmentEquipped(struct ULyraEquipmentInstance* EquipmentInstance); // Function B_Hero_Deceit.B_Hero_Deceit_C.K2_OnEquipmentEquipped // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void SetupContextEffects(); // Function B_Hero_Deceit.B_Hero_Deceit_C.SetupContextEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ReceiveTick(float DeltaSeconds); // Function B_Hero_Deceit.B_Hero_Deceit_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_Hero_Deceit(int32_t EntryPoint); // Function B_Hero_Deceit.B_Hero_Deceit_C.ExecuteUbergraph_B_Hero_Deceit // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

