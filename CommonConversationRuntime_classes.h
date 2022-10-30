// Class CommonConversationRuntime.ConversationNode
// Size: 0x58 (Inherited: 0x28)
struct UConversationNode : UObject {
	struct UObject* EvalWorldContextObj; // 0x28(0x08)
	struct FString NodeName; // 0x30(0x10)
	struct FGuid Compiled_NodeGUID; // 0x40(0x10)
	struct UConversationNode* ParentNode; // 0x50(0x08)

	struct FLinearColor GetDebugParticipantColor(struct FGameplayTag ParticipantID); // Function CommonConversationRuntime.ConversationNode.GetDebugParticipantColor // (Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f530
};

// Class CommonConversationRuntime.ConversationSubNode
// Size: 0x58 (Inherited: 0x58)
struct UConversationSubNode : UConversationNode {
};

// Class CommonConversationRuntime.ConversationChoiceNode
// Size: 0x90 (Inherited: 0x58)
struct UConversationChoiceNode : UConversationSubNode {
	struct FText DefaultChoiceDisplayText; // 0x58(0x18)
	struct FGameplayTagContainer ChoiceTags; // 0x70(0x20)

	void FillChoice(struct FConversationContext& Context, struct FClientConversationOptionEntry& ChoiceEntry); // Function CommonConversationRuntime.ConversationChoiceNode.FillChoice // (Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x102ed70
};

// Class CommonConversationRuntime.ConversationContextHelpers
// Size: 0x28 (Inherited: 0x28)
struct UConversationContextHelpers : UBlueprintFunctionLibrary {

	struct FConversationTaskResult ReturnToLastClientChoice(struct FConversationContext& Context); // Function CommonConversationRuntime.ConversationContextHelpers.ReturnToLastClientChoice // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1030020
	struct FConversationTaskResult ReturnToCurrentClientChoice(struct FConversationContext& Context); // Function CommonConversationRuntime.ConversationContextHelpers.ReturnToCurrentClientChoice // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102ff20
	struct FConversationTaskResult ReturnToConversationStart(struct FConversationContext& Context); // Function CommonConversationRuntime.ConversationContextHelpers.ReturnToConversationStart // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102fe20
	struct FConversationTaskResult PauseConversationAndSendClientChoices(struct FConversationContext& Context, struct FClientConversationMessage& Message); // Function CommonConversationRuntime.ConversationContextHelpers.PauseConversationAndSendClientChoices // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102fac0
	void MakeConversationParticipant(struct FConversationContext& Context, struct AActor* ParticipantActor, struct FGameplayTag ParticipantTag); // Function CommonConversationRuntime.ConversationContextHelpers.MakeConversationParticipant // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102f8e0
	struct FConversationNodeHandle GetCurrentConversationNodeHandle(struct FConversationContext& Context); // Function CommonConversationRuntime.ConversationContextHelpers.GetCurrentConversationNodeHandle // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x102f470
	struct AActor* GetConversationParticipantActor(struct FConversationContext& Context, struct FGameplayTag ParticipantTag); // Function CommonConversationRuntime.ConversationContextHelpers.GetConversationParticipantActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102f360
	struct UConversationParticipantComponent* GetConversationParticipant(struct FConversationContext& Context, struct FGameplayTag ParticipantTag); // Function CommonConversationRuntime.ConversationContextHelpers.GetConversationParticipant // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102f250
	struct UConversationInstance* GetConversationInstance(struct FConversationContext& Context); // Function CommonConversationRuntime.ConversationContextHelpers.GetConversationInstance // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x102f190
	struct UConversationParticipantComponent* FindConversationComponent(struct AActor* Actor); // Function CommonConversationRuntime.ConversationContextHelpers.FindConversationComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x102efa0
	bool CanConversationContinue(struct FConversationTaskResult& ConversationTasResult); // Function CommonConversationRuntime.ConversationContextHelpers.CanConversationContinue // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102e320
	struct FConversationTaskResult AdvanceConversationWithChoice(struct FConversationContext& Context, struct FAdvanceConversationRequest& Choice); // Function CommonConversationRuntime.ConversationContextHelpers.AdvanceConversationWithChoice // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102e120
	struct FConversationTaskResult AdvanceConversation(struct FConversationContext& Context); // Function CommonConversationRuntime.ConversationContextHelpers.AdvanceConversation // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102e020
	struct FConversationTaskResult AbortConversation(struct FConversationContext& Context); // Function CommonConversationRuntime.ConversationContextHelpers.AbortConversation // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x102df20
};

// Class CommonConversationRuntime.ConversationDatabase
// Size: 0xe8 (Inherited: 0x30)
struct UConversationDatabase : UPrimaryDataAsset {
	int32_t CompilerVersion; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TMap<struct FGuid, struct UConversationNode*> ReachableNodeMap; // 0x38(0x50)
	struct TArray<struct FConversationEntryList> EntryTags; // 0x88(0x10)
	struct FGameplayTagContainer ExitTags; // 0x98(0x20)
	struct TArray<struct FGuid> InternalNodeIds; // 0xb8(0x10)
	struct TArray<struct FGuid> LinkedToNodeIds; // 0xc8(0x10)
	struct TArray<struct FCommonDialogueBankParticipant> Speakers; // 0xd8(0x10)
};

// Class CommonConversationRuntime.ConversationNodeWithLinks
// Size: 0x68 (Inherited: 0x58)
struct UConversationNodeWithLinks : UConversationNode {
	struct TArray<struct FGuid> OutputConnections; // 0x58(0x10)
};

// Class CommonConversationRuntime.ConversationEntryPointNode
// Size: 0x70 (Inherited: 0x68)
struct UConversationEntryPointNode : UConversationNodeWithLinks {
	struct FGameplayTag EntryTag; // 0x68(0x08)
};

// Class CommonConversationRuntime.ConversationInstance
// Size: 0x228 (Inherited: 0x28)
struct UConversationInstance : UObject {
	char pad_28[0x28]; // 0x28(0x28)
	struct FConversationParticipants Participants; // 0x50(0x10)
	char pad_60[0x1c8]; // 0x60(0x1c8)
};

// Class CommonConversationRuntime.ConversationLibrary
// Size: 0x28 (Inherited: 0x28)
struct UConversationLibrary : UBlueprintFunctionLibrary {

	struct UConversationInstance* StartConversation(struct FGameplayTag ConversationEntryTag, struct AActor* Instigator, struct FGameplayTag InstigatorTag, struct AActor* Target, struct FGameplayTag TargetTag); // Function CommonConversationRuntime.ConversationLibrary.StartConversation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1030250
};

// Class CommonConversationRuntime.ConversationTaskNode
// Size: 0x80 (Inherited: 0x68)
struct UConversationTaskNode : UConversationNodeWithLinks {
	struct TArray<struct UConversationSubNode*> SubNodes; // 0x68(0x10)
	bool bIgnoreRequirementsWhileAdvancingConversations; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)

	enum class EConversationRequirementResult IsRequirementSatisfied(struct FConversationContext& Context); // Function CommonConversationRuntime.ConversationTaskNode.IsRequirementSatisfied // (BlueprintAuthorityOnly|Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x102f810
	bool GetNodeBodyColor(struct FLinearColor& BodyColor); // Function CommonConversationRuntime.ConversationTaskNode.GetNodeBodyColor // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x102f5d0
	void GatherStaticExtraData(struct FConversationContext& Context, struct TArray<struct FConversationNodeParameterPair>& InOutExtraData); // Function CommonConversationRuntime.ConversationTaskNode.GatherStaticExtraData // (BlueprintAuthorityOnly|Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x102f030
	struct FConversationTaskResult ExecuteTaskNode(struct FConversationContext& Context); // Function CommonConversationRuntime.ConversationTaskNode.ExecuteTaskNode // (BlueprintAuthorityOnly|Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x102ec60
	void ExecuteClientEffects(struct FConversationContext& Context); // Function CommonConversationRuntime.ConversationTaskNode.ExecuteClientEffects // (BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x102eba0
};

// Class CommonConversationRuntime.ConversationLinkNode
// Size: 0x88 (Inherited: 0x80)
struct UConversationLinkNode : UConversationTaskNode {
	struct FGameplayTag RemoteEntryTag; // 0x80(0x08)
};

// Class CommonConversationRuntime.ConversationParticipantComponent
// Size: 0x248 (Inherited: 0xb0)
struct UConversationParticipantComponent : UActorComponent {
	char pad_B0[0xf4]; // 0xb0(0xf4)
	int32_t ConversationsActive; // 0x1a4(0x04)
	char pad_1A8[0x80]; // 0x1a8(0x80)
	struct UConversationInstance* Auth_CurrentConversation; // 0x228(0x08)
	struct TArray<struct UConversationInstance*> Auth_Conversations; // 0x230(0x10)
	char pad_240[0x8]; // 0x240(0x08)

	void ServerAdvanceConversation(struct FAdvanceConversationRequest InChoicePicked); // Function CommonConversationRuntime.ConversationParticipantComponent.ServerAdvanceConversation // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x1030120
	void RequestServerAdvanceConversation(struct FAdvanceConversationRequest& InChoicePicked); // Function CommonConversationRuntime.ConversationParticipantComponent.RequestServerAdvanceConversation // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x102fcf0
	void OnRep_ConversationsActive(int32_t OldConversationsActive); // Function CommonConversationRuntime.ConversationParticipantComponent.OnRep_ConversationsActive // (Final|Native|Protected) // @ game+0x102fa30
	bool IsInActiveConversation(); // Function CommonConversationRuntime.ConversationParticipantComponent.IsInActiveConversation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x102f710
	struct FText GetParticipantDisplayName(); // Function CommonConversationRuntime.ConversationParticipantComponent.GetParticipantDisplayName // (Native|Public|BlueprintCallable) // @ game+0x102f670
	void ClientUpdateParticipants(struct FConversationParticipants InParticipants); // Function CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateParticipants // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x102eb00
	void ClientUpdateConversationTaskChoiceData(struct FConversationNodeHandle Handle, struct FClientConversationOptionEntry OptionEntry); // Function CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversationTaskChoiceData // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x102e870
	void ClientUpdateConversations(int32_t InConversationsActive); // Function CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversations // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x102ea70
	void ClientUpdateConversation(struct FClientConversationMessagePayload Message); // Function CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversation // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x102e670
	void ClientStartConversation(struct FGameplayTag AsParticipant); // Function CommonConversationRuntime.ConversationParticipantComponent.ClientStartConversation // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x102e5e0
	void ClientExecuteTaskAndSideEffects(struct FConversationNodeHandle Handle); // Function CommonConversationRuntime.ConversationParticipantComponent.ClientExecuteTaskAndSideEffects // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x102e540
};

// Class CommonConversationRuntime.ConversationRegistry
// Size: 0x1f8 (Inherited: 0x30)
struct UConversationRegistry : UWorldSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct FNetSerializeScriptStructCache_ConvVersion ConversationChoiceDataStructCache; // 0x38(0x60)
	char pad_98[0x160]; // 0x98(0x160)
};

// Class CommonConversationRuntime.ConversationRequirementNode
// Size: 0x58 (Inherited: 0x58)
struct UConversationRequirementNode : UConversationSubNode {

	enum class EConversationRequirementResult IsRequirementSatisfied(struct FConversationContext& Context); // Function CommonConversationRuntime.ConversationRequirementNode.IsRequirementSatisfied // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x102f740
};

// Class CommonConversationRuntime.ConversationSettings
// Size: 0x60 (Inherited: 0x38)
struct UConversationSettings : UDeveloperSettings {
	struct TSoftClassPtr<UObject> ConversationInstanceClass; // 0x38(0x28)
};

// Class CommonConversationRuntime.ConversationSideEffectNode
// Size: 0x58 (Inherited: 0x58)
struct UConversationSideEffectNode : UConversationSubNode {

	void ServerCauseSideEffect(struct FConversationContext& Context); // Function CommonConversationRuntime.ConversationSideEffectNode.ServerCauseSideEffect // (BlueprintAuthorityOnly|Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x102eba0
	void ClientCauseSideEffect(struct FConversationContext& Context); // Function CommonConversationRuntime.ConversationSideEffectNode.ClientCauseSideEffect // (BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x102e480
};

