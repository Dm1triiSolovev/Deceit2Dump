// Class GameplayAbilities.AttributeSet
// Size: 0x30 (Inherited: 0x28)
struct UAttributeSet : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class GameplayAbilities.AbilityAsync
// Size: 0x38 (Inherited: 0x30)
struct UAbilityAsync : UCancellableAsyncAction {
	char pad_30[0x8]; // 0x30(0x08)

	void EndAction(); // Function GameplayAbilities.AbilityAsync.EndAction // (Native|Public|BlueprintCallable) // @ game+0xab84d0
};

// Class GameplayAbilities.AbilityAsync_WaitAttributeChanged
// Size: 0x90 (Inherited: 0x38)
struct UAbilityAsync_WaitAttributeChanged : UAbilityAsync {
	struct FMulticastInlineDelegate Changed; // 0x38(0x10)
	char pad_48[0x48]; // 0x48(0x48)

	struct UAbilityAsync_WaitAttributeChanged* WaitForAttributeChanged(struct AActor* TargetActor, struct FGameplayAttribute Attribute, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityAsync_WaitAttributeChanged.WaitForAttributeChanged // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xabedc0
	void AsyncWaitAttributeChangedDelegate__DelegateSignature(struct FGameplayAttribute Attribute, float NewValue, float OldValue); // DelegateFunction GameplayAbilities.AbilityAsync_WaitAttributeChanged.AsyncWaitAttributeChangedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2552560
};

// Class GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
// Size: 0xf8 (Inherited: 0x38)
struct UAbilityAsync_WaitGameplayEffectApplied : UAbilityAsync {
	struct FMulticastInlineDelegate OnApplied; // 0x38(0x10)
	char pad_48[0xb0]; // 0x48(0xb0)

	struct UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(struct AActor* TargetActor, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xabf010
	void OnAppliedDelegate__DelegateSignature(struct AActor* Source, struct FGameplayEffectSpecHandle SpecHandle, struct FActiveGameplayEffectHandle ActiveHandle); // DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2552560
};

// Class GameplayAbilities.AbilityAsync_WaitGameplayEvent
// Size: 0x60 (Inherited: 0x38)
struct UAbilityAsync_WaitGameplayEvent : UAbilityAsync {
	struct FMulticastInlineDelegate EventReceived; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	struct UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(struct AActor* TargetActor, struct FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact); // Function GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xabf3b0
	void EventReceivedDelegate__DelegateSignature(struct FGameplayEventData Payload); // DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2552560
};

// Class GameplayAbilities.AbilityAsync_WaitGameplayTag
// Size: 0x50 (Inherited: 0x38)
struct UAbilityAsync_WaitGameplayTag : UAbilityAsync {
	char pad_38[0x18]; // 0x38(0x18)
};

// Class GameplayAbilities.AbilityAsync_WaitGameplayTagAdded
// Size: 0x60 (Inherited: 0x50)
struct UAbilityAsync_WaitGameplayTagAdded : UAbilityAsync_WaitGameplayTag {
	struct FMulticastInlineDelegate Added; // 0x50(0x10)

	struct UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(struct AActor* TargetActor, struct FGameplayTag Tag, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityAsync_WaitGameplayTagAdded.WaitGameplayTagAddToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xabf510
};

// Class GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
// Size: 0x60 (Inherited: 0x50)
struct UAbilityAsync_WaitGameplayTagRemoved : UAbilityAsync_WaitGameplayTag {
	struct FMulticastInlineDelegate Removed; // 0x50(0x10)

	struct UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(struct AActor* TargetActor, struct FGameplayTag Tag, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved.WaitGameplayTagRemoveFromActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xabf610
};

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary {

	bool TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xabec40
	bool TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xabeac0
	bool TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xabe940
	bool TargetDataHasActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xabe7c0
	struct FGameplayEffectSpecHandle SetStackCountToMax(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xabe680
	struct FGameplayEffectSpecHandle SetStackCount(struct FGameplayEffectSpecHandle SpecHandle, int32_t StackCount); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xabe500
	struct FGameplayEffectSpecHandle SetDuration(struct FGameplayEffectSpecHandle SpecHandle, float Duration); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xabe380
	void SendGameplayEventToActor(struct AActor* Actor, struct FGameplayTag EventTag, struct FGameplayEventData Payload); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xabe040
	bool RemoveLooseGameplayTags(struct AActor* Actor, struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.RemoveLooseGameplayTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xabdef0
	bool NotEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xabdb80
	bool NotEqual_GameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& A, struct FGameplayAbilitySpecHandle& B); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAbilitySpecHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xabda90
	bool NotEqual_ActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle& A, struct FActiveGameplayEffectHandle& B); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_ActiveGameplayEffectHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xabd9a0
	struct FGameplayEffectSpecHandle MakeSpecHandle(struct UGameplayEffect* InGameplayEffect, struct AActor* InInstigator, struct AActor* InEffectCauser, float InLevel); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xabd7e0
	struct FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, struct FGameplayEffectContextHandle EffectContext, struct FGameplayTag MatchedTagName, struct FGameplayTag OriginalTag, struct FGameplayTagContainer AggregatedSourceTags, struct FGameplayTagContainer AggregatedTargetTags, struct FVector Location, struct FVector Normal, struct AActor* Instigator, struct AActor* EffectCauser, struct UObject* SourceObject, struct UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, struct USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xabcfe0
	struct FGameplayTargetDataFilterHandle MakeFilterHandle(struct FGameplayTargetDataFilter Filter, struct AActor* FilterActor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xabce60
	bool IsValid(struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xabcc80
	bool IsInstigatorLocallyControlledPlayer(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xabcad0
	bool IsInstigatorLocallyControlled(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xabc920
	bool HasHitResult(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xabc770
	struct FTransform GetTargetDataOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xabc5c0
	struct FTransform GetTargetDataEndPointTransform(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xabc410
	struct FVector GetTargetDataEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xabc280
	struct FVector GetOrigin(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xabc0c0
	float GetModifiedAttributeMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xabbe40
	struct FTransform GetInstigatorTransform(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xabbc50
	struct AActor* GetInstigatorActor(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xabbaa0
	struct FHitResult GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xabb890
	struct FHitResult GetHitResult(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xabb660
	struct UGameplayEffectUIData* GetGameplayEffectUIData(struct UGameplayEffect* EffectClass, struct UGameplayEffectUIData* DataType); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectUIData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xabb590
	struct UGameplayEffect* GetGameplayEffectFromActiveEffectHandle(struct FActiveGameplayEffectHandle& ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectFromActiveEffectHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xabb4f0
	bool GetGameplayCueEndLocationAndNormal(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector& Location, struct FVector& Normal); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xabb260
	bool GetGameplayCueDirection(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector& Direction); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xabb020
	struct UGameplayAbility* GetGameplayAbilityFromSpecHandle(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAbilitySpecHandle& AbilitySpecHandle, bool& bIsInstance); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayAbilityFromSpecHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xabaef0
	float GetFloatAttributeFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xabaca0
	float GetFloatAttributeBaseFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xabaa50
	float GetFloatAttributeBase(struct AActor* Actor, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaba800
	float GetFloatAttribute(struct AActor* Actor, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaba5b0
	struct FGameplayEffectContextHandle GetEffectContext(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xaba480
	int32_t GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaba340
	struct TArray<struct FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaba150
	struct TArray<struct AActor*> GetAllActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xab9fd0
	struct TArray<struct AActor*> GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xab9e10
	int32_t GetActorCount(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xab9c60
	struct AActor* GetActorByIndex(struct FGameplayCueParameters Parameters, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xab9a70
	float GetActiveGameplayEffectTotalDuration(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xab99e0
	float GetActiveGameplayEffectStartTime(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xab9950
	int32_t GetActiveGameplayEffectStackLimitCount(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xab98c0
	int32_t GetActiveGameplayEffectStackCount(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xab9830
	float GetActiveGameplayEffectRemainingDuration(struct UObject* WorldContextObject, struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xab9750
	float GetActiveGameplayEffectExpectedEndTime(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xab96c0
	struct FString GetActiveGameplayEffectDebugString(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xab95f0
	struct UAbilitySystemComponent* GetAbilitySystemComponent(struct AActor* Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xab9560
	void ForwardGameplayCueToTarget(struct TScriptInterface<IGameplayCueInterface> TargetCueInterface, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xab9320
	struct FGameplayAbilityTargetDataHandle FilterTargetData(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, struct FGameplayTargetDataFilterHandle ActorFilterClass); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xab9120
	float EvaluateAttributeValueWithTagsAndBase(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, float BaseValue, bool& bSuccess); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xab8d80
	float EvaluateAttributeValueWithTags(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, bool& bSuccess); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xab8a40
	bool EqualEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xab86d0
	bool EqualEqual_GameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& A, struct FGameplayAbilitySpecHandle& B); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAbilitySpecHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xab85e0
	bool EqualEqual_ActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle& A, struct FActiveGameplayEffectHandle& B); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_ActiveGameplayEffectHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xab84f0
	void EffectContextSetOrigin(struct FGameplayEffectContextHandle EffectContext, struct FVector Origin); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xab8380
	bool EffectContextIsValid(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xab8280
	bool EffectContextIsInstigatorLocallyControlled(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xab8180
	bool EffectContextHasHitResult(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xab8080
	struct UObject* EffectContextGetSourceObject(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xab7f80
	struct AActor* EffectContextGetOriginalInstigatorActor(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xab7e80
	struct FVector EffectContextGetOrigin(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xab7d70
	struct AActor* EffectContextGetInstigatorActor(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xab7c70
	struct FHitResult EffectContextGetHitResult(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xab7af0
	struct AActor* EffectContextGetEffectCauser(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xab79f0
	void EffectContextAddHitResult(struct FGameplayEffectContextHandle EffectContext, struct FHitResult HitResult, bool bReset); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xab76d0
	bool DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index, struct AActor* Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xab7510
	bool DoesGameplayCueMeetTagRequirements(struct FGameplayCueParameters Parameters, struct FGameplayTagRequirements& SourceTagReqs, struct FGameplayTagRequirements& TargetTagReqs); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xab7210
	struct FGameplayEffectSpecHandle CloneSpecHandle(struct AActor* InNewInstigator, struct AActor* InEffectCauser, struct FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xab7040
	void BreakGameplayCueParameters(struct FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, struct FGameplayEffectContextHandle& EffectContext, struct FGameplayTag& MatchedTagName, struct FGameplayTag& OriginalTag, struct FGameplayTagContainer& AggregatedSourceTags, struct FGameplayTagContainer& AggregatedTargetTags, struct FVector& Location, struct FVector& Normal, struct AActor*& Instigator, struct AActor*& EffectCauser, struct UObject*& SourceObject, struct UPhysicalMaterial*& PhysicalMaterial, int32_t& GameplayEffectLevel, int32_t& AbilityLevel, struct USceneComponent*& TargetAttachComponent, bool& bReplicateLocationWhenUsingMinimalRepProxy); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xab6810
	struct FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag DataTag, float Magnitude); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xab6640
	struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FName DataName, float Magnitude); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xab6470
	struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(struct FGameplayAbilityTargetDataHandle TargetHandle, struct FGameplayAbilityTargetDataHandle& HandleToAdd); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xab6250
	bool AddLooseGameplayTags(struct AActor* Actor, struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLooseGameplayTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xab6100
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xab5f20
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffect(struct FGameplayEffectSpecHandle SpecHandle, struct UGameplayEffect* LinkedGameplayEffect); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xab5da0
	struct FGameplayEffectSpecHandle AddGrantedTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xab5bd0
	struct FGameplayEffectSpecHandle AddGrantedTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xab5a50
	struct FGameplayEffectSpecHandle AddAssetTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xab5880
	struct FGameplayEffectSpecHandle AddAssetTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xab5700
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo& SourceLocation, struct FGameplayAbilityTargetingLocationInfo& TargetLocation); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xab5510
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(struct FHitResult& HitResult); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xab53d0
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(struct TArray<struct AActor*>& ActorArray, bool OneTargetPerHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xab52b0
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(struct AActor* Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xab51f0
};

// Class GameplayAbilities.AbilitySystemComponent
// Size: 0x13a8 (Inherited: 0x120)
struct UAbilitySystemComponent : UGameplayTasksComponent {
	char pad_120[0x10]; // 0x120(0x10)
	struct TArray<struct FAttributeDefaults> DefaultStartingData; // 0x130(0x10)
	struct TArray<struct UAttributeSet*> SpawnedAttributes; // 0x140(0x10)
	struct FName AffectedAnimInstanceTag; // 0x150(0x08)
	char pad_158[0x1a0]; // 0x158(0x1a0)
	float OutgoingDuration; // 0x2f8(0x04)
	float IncomingDuration; // 0x2fc(0x04)
	char pad_300[0x20]; // 0x300(0x20)
	struct TArray<struct FString> ClientDebugStrings; // 0x320(0x10)
	struct TArray<struct FString> ServerDebugStrings; // 0x330(0x10)
	char pad_340[0x60]; // 0x340(0x60)
	bool UserAbilityActivationInhibited; // 0x3a0(0x01)
	bool ReplicationProxyEnabled; // 0x3a1(0x01)
	bool bSuppressGrantAbility; // 0x3a2(0x01)
	bool bSuppressGameplayCues; // 0x3a3(0x01)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct TArray<struct AGameplayAbilityTargetActor*> SpawnedTargetActors; // 0x3a8(0x10)
	char pad_3B8[0x28]; // 0x3b8(0x28)
	struct AActor* OwnerActor; // 0x3e0(0x08)
	struct AActor* AvatarActor; // 0x3e8(0x08)
	char pad_3F0[0x10]; // 0x3f0(0x10)
	struct FGameplayAbilitySpecContainer ActivatableAbilities; // 0x400(0x120)
	char pad_520[0x30]; // 0x520(0x30)
	struct TArray<struct UGameplayAbility*> AllReplicatedInstancedAbilities; // 0x550(0x10)
	char pad_560[0x210]; // 0x560(0x210)
	struct FGameplayAbilityRepAnimMontage RepAnimMontageInfo; // 0x770(0x38)
	bool bCachedIsNetSimulated; // 0x7a8(0x01)
	bool bPendingMontageRep; // 0x7a9(0x01)
	char pad_7AA[0x6]; // 0x7aa(0x06)
	struct FGameplayAbilityLocalAnimMontage LocalAnimMontageInfo; // 0x7b0(0x30)
	char pad_7E0[0xa0]; // 0x7e0(0xa0)
	struct FActiveGameplayEffectsContainer ActiveGameplayEffects; // 0x880(0x478)
	struct FActiveGameplayCueContainer ActiveGameplayCues; // 0xcf8(0x128)
	struct FActiveGameplayCueContainer MinimalReplicationGameplayCues; // 0xe20(0x128)
	char pad_F48[0x128]; // 0xf48(0x128)
	struct TArray<char> BlockedAbilityBindings; // 0x1070(0x10)
	char pad_1080[0x128]; // 0x1080(0x128)
	struct FMinimalReplicationTagCountMap MinimalReplicationTags; // 0x11a8(0x60)
	char pad_1208[0x10]; // 0x1208(0x10)
	struct FMinimalReplicationTagCountMap ReplicatedLooseTags; // 0x1218(0x60)
	char pad_1278[0x8]; // 0x1278(0x08)
	struct FReplicatedPredictionKeyMap ReplicatedPredictionKeyMap; // 0x1280(0x118)
	char pad_1398[0x10]; // 0x1398(0x10)

	void UpdateActiveGameplayEffectSetByCallerMagnitudes(struct FActiveGameplayEffectHandle ActiveHandle, struct TMap<struct FGameplayTag, float>& NewSetByCallerValues); // Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitudes // (BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xac8c30
	void UpdateActiveGameplayEffectSetByCallerMagnitude(struct FActiveGameplayEffectHandle ActiveHandle, struct FGameplayTag SetByCallerTag, float NewValue); // Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitude // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xac8b20
	bool TryActivateAbilityByClass(struct UGameplayAbility* InAbilityToActivate, bool bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass // (Final|Native|Public|BlueprintCallable) // @ game+0xac8a50
	bool TryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate, bool bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbility // (Final|Native|Public|BlueprintCallable) // @ game+0xac8980
	bool TryActivateAbilitiesByTag(struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xac8870
	void TargetConfirm(); // Function GameplayAbilities.AbilitySystemComponent.TargetConfirm // (Native|Public|BlueprintCallable) // @ game+0xac8850
	void TargetCancel(); // Function GameplayAbilities.AbilitySystemComponent.TargetCancel // (Native|Public|BlueprintCallable) // @ game+0xac8830
	void SetUserAbilityActivationInhibited(bool NewInhibit); // Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited // (Native|Public|BlueprintCallable) // @ game+0xac87a0
	void SetActiveGameplayEffectLevelUsingQuery(struct FGameplayEffectQuery Query, int32_t NewLevel); // Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xac8690
	void SetActiveGameplayEffectLevel(struct FActiveGameplayEffectHandle ActiveHandle, int32_t NewLevel); // Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xac85b0
	void ServerTryActivateAbilityWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData); // Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xac8070
	void ServerTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xac7ef0
	void ServerSetReplicatedTargetDataCancelled(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xac7d40
	void ServerSetReplicatedTargetData(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, struct FGameplayTag ApplicationTag, struct FPredictionKey CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xac7a40
	void ServerSetReplicatedEventWithPayload(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey, struct FVector_NetQuantize100 VectorPayload); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xac77e0
	void ServerSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xac75f0
	void ServerSetInputReleased(struct FGameplayAbilitySpecHandle AbilityHandle); // Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xac7540
	void ServerSetInputPressed(struct FGameplayAbilitySpecHandle AbilityHandle); // Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xac7490
	void ServerPrintDebug_RequestWithStrings(struct TArray<struct FString> Strings); // Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xac73a0
	void ServerPrintDebug_Request(); // Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xac7350
	void ServerEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xac71a0
	void ServerCurrentMontageSetPlayRate(struct UAnimMontage* ClientAnimMontage, float InPlayRate); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xac7090
	void ServerCurrentMontageSetNextSectionName(struct UAnimMontage* ClientAnimMontage, float ClientPosition, struct FName SectionName, struct FName NextSectionName); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xac6ef0
	void ServerCurrentMontageJumpToSectionName(struct UAnimMontage* ClientAnimMontage, struct FName SectionName); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xac6de0
	void ServerCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xac6cb0
	void ServerAbilityRPCBatch(struct FServerAbilityRPCBatch BatchInfo); // Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xac6ac0
	void RemoveActiveGameplayEffectBySourceEffect(struct UGameplayEffect* GameplayEffect, struct UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xac69b0
	bool RemoveActiveGameplayEffect(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xac68d0
	int32_t RemoveActiveEffectsWithTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags // (Final|Native|Public|BlueprintCallable) // @ game+0xac67e0
	int32_t RemoveActiveEffectsWithSourceTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags // (Final|Native|Public|BlueprintCallable) // @ game+0xac66f0
	int32_t RemoveActiveEffectsWithGrantedTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags // (Final|Native|Public|BlueprintCallable) // @ game+0xac6600
	int32_t RemoveActiveEffectsWithAppliedTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags // (Final|Native|Public|BlueprintCallable) // @ game+0xac6600
	void ReleaseInputID(int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.ReleaseInputID // (Final|Native|Public|BlueprintCallable) // @ game+0xac6570
	void PressInputID(int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.PressInputID // (Final|Native|Public|BlueprintCallable) // @ game+0xac64e0
	void OnSpawnedAttributesEndPlayed(struct AActor* InActor, enum class EEndPlayReason EndPlayReason); // Function GameplayAbilities.AbilitySystemComponent.OnSpawnedAttributesEndPlayed // (Final|Native|Public) // @ game+0xac6410
	void OnRep_ServerDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString // (Native|Public) // @ game+0xac63f0
	void OnRep_ReplicatedAnimMontage(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage // (Native|Protected) // @ game+0xac63d0
	void OnRep_OwningActor(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor // (Final|Native|Public) // @ game+0xac63b0
	void OnRep_ClientDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString // (Native|Public) // @ game+0xac6390
	void OnRep_ActivateAbilities(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities // (Native|Protected) // @ game+0xac6370
	void OnOwnerActorDestroyed(struct AActor* InActor); // Function GameplayAbilities.AbilitySystemComponent.OnOwnerActorDestroyed // (Final|Native|Public) // @ game+0xac62e0
	void OnAvatarActorDestroyed(struct AActor* InActor); // Function GameplayAbilities.AbilitySystemComponent.OnAvatarActorDestroyed // (Final|Native|Public) // @ game+0xac6250
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0xac5fa0
	void NetMulticast_InvokeGameplayCuesExecuted(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted // (Net|Native|Event|NetMulticast|Public) // @ game+0xac5d90
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0xac5ae0
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0xac5890
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec // (Net|Native|Event|NetMulticast|Public) // @ game+0xac5750
	void NetMulticast_InvokeGameplayCueExecuted(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted // (Net|Native|Event|NetMulticast|Public) // @ game+0xac55a0
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0xac5100
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec // (Net|Native|Event|NetMulticast|Public) // @ game+0xac4ff0
	void NetMulticast_InvokeGameplayCueAdded_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0xac5350
	void NetMulticast_InvokeGameplayCueAdded(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded // (Net|Native|Event|NetMulticast|Public) // @ game+0xac4e40
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(struct UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xac4c30
	struct FGameplayEffectContextHandle MakeEffectContext(); // Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xac4ba0
	void K2_InitStats(struct UAttributeSet* Attributes, struct UDataTable* DataTable); // Function GameplayAbilities.AbilitySystemComponent.K2_InitStats // (Final|Native|Public|BlueprintCallable) // @ game+0xac4ad0
	struct FGameplayAbilitySpecHandle K2_GiveAbilityAndActivateOnce(struct UGameplayAbility* AbilityClass, int32_t Level, int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbilityAndActivateOnce // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xac49b0
	struct FGameplayAbilitySpecHandle K2_GiveAbility(struct UGameplayAbility* AbilityClass, int32_t Level, int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbility // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xac4890
	bool IsGameplayCueActive(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xac47f0
	void InputConfirm(); // Function GameplayAbilities.AbilitySystemComponent.InputConfirm // (Final|Native|Public|BlueprintCallable) // @ game+0xac47d0
	void InputCancel(); // Function GameplayAbilities.AbilitySystemComponent.InputCancel // (Final|Native|Public|BlueprintCallable) // @ game+0xac47b0
	bool GetUserAbilityActivationInhibited(); // Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xac4780
	int32_t GetGameplayTagCount(struct FGameplayTag GameplayTag); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayTagCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xac46e0
	float GetGameplayEffectMagnitude(struct FActiveGameplayEffectHandle Handle, struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xac44b0
	int32_t GetGameplayEffectCount(struct UGameplayEffect* SourceGameplayEffect, struct UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xac43a0
	float GetGameplayAttributeValue(struct FGameplayAttribute Attribute, bool& bFound); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayAttributeValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xac4170
	struct UAttributeSet* GetAttributeSet(struct UAttributeSet* AttributeSetClass); // Function GameplayAbilities.AbilitySystemComponent.GetAttributeSet // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xac40d0
	void GetAllAttributes(struct TArray<struct FGameplayAttribute>& OutAttributes); // Function GameplayAbilities.AbilitySystemComponent.GetAllAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xac3ff0
	void GetAllAbilities(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles); // Function GameplayAbilities.AbilitySystemComponent.GetAllAbilities // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0xac3f40
	struct TArray<struct FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xac3e10
	struct TArray<struct FActiveGameplayEffectHandle> GetActiveEffects(struct FGameplayEffectQuery& Query); // Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0xac3d10
	void FindAllAbilitiesWithTags(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles, struct FGameplayTagContainer Tags, bool bExactMatch); // Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithTags // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0xac3b80
	void FindAllAbilitiesWithInputID(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles, int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithInputID // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0xac3a80
	void FindAllAbilitiesMatchingQuery(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles, struct FGameplayTagQuery Query); // Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesMatchingQuery // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0xac3930
	void ClientTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate); // Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xac38a0
	void ClientSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xac3760
	void ClientPrintDebug_Response(struct TArray<struct FString> Strings, int32_t GameFlags); // Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xac3650
	void ClientEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xac3550
	void ClientCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xac3450
	void ClientActivateAbilitySucceedWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xac30e0
	void ClientActivateAbilitySucceed(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xac2fe0
	void ClientActivateAbilityFailed(struct FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xac2f00
	void ClearAllAbilitiesWithInputID(int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.ClearAllAbilitiesWithInputID // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xac2e70
	void ClearAllAbilities(); // Function GameplayAbilities.AbilitySystemComponent.ClearAllAbilities // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xac2e50
	void ClearAbility(struct FGameplayAbilitySpecHandle& Handle); // Function GameplayAbilities.AbilitySystemComponent.ClearAbility // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xac2db0
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(struct UGameplayEffect* GameplayEffectClass, struct UAbilitySystemComponent* Target, float Level, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget // (Final|Native|Public|BlueprintCallable) // @ game+0xac2be0
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(struct UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf // (Final|Native|Public|BlueprintCallable) // @ game+0xac2a30
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle& SpecHandle, struct UAbilitySystemComponent* Target); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xac2900
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle& SpecHandle); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xac2810
	void AbilityConfirmOrCancel__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2552560
	void AbilityAbilityKey__DelegateSignature(int32_t InputID); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2552560
};

// Class GameplayAbilities.AbilitySystemDebugHUD
// Size: 0x368 (Inherited: 0x368)
struct AAbilitySystemDebugHUD : AHUD {
};

// Class GameplayAbilities.AbilitySystemGlobals
// Size: 0x260 (Inherited: 0x28)
struct UAbilitySystemGlobals : UObject {
	struct FSoftClassPath AbilitySystemGlobalsClassName; // 0x28(0x18)
	char pad_40[0x28]; // 0x40(0x28)
	bool bUseDebugTargetFromHud; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FGameplayTag ActivateFailIsDeadTag; // 0x6c(0x08)
	struct FName ActivateFailIsDeadName; // 0x74(0x08)
	struct FGameplayTag ActivateFailCooldownTag; // 0x7c(0x08)
	struct FName ActivateFailCooldownName; // 0x84(0x08)
	struct FGameplayTag ActivateFailCostTag; // 0x8c(0x08)
	struct FName ActivateFailCostName; // 0x94(0x08)
	struct FGameplayTag ActivateFailTagsBlockedTag; // 0x9c(0x08)
	struct FName ActivateFailTagsBlockedName; // 0xa4(0x08)
	struct FGameplayTag ActivateFailTagsMissingTag; // 0xac(0x08)
	struct FName ActivateFailTagsMissingName; // 0xb4(0x08)
	struct FGameplayTag ActivateFailNetworkingTag; // 0xbc(0x08)
	struct FName ActivateFailNetworkingName; // 0xc4(0x08)
	int32_t MinimalReplicationTagCountBits; // 0xcc(0x04)
	struct FNetSerializeScriptStructCache TargetDataStructCache; // 0xd0(0x10)
	bool bAllowGameplayModEvaluationChannels; // 0xe0(0x01)
	enum class EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel; // 0xe1(0x01)
	char pad_E2[0x2]; // 0xe2(0x02)
	struct FName GameplayModEvaluationChannelAliases[0xa]; // 0xe4(0x50)
	char pad_134[0x4]; // 0x134(0x04)
	struct FSoftObjectPath GlobalCurveTableName; // 0x138(0x18)
	struct UCurveTable* GlobalCurveTable; // 0x150(0x08)
	struct FSoftObjectPath GlobalAttributeMetaDataTableName; // 0x158(0x18)
	struct UDataTable* GlobalAttributeMetaDataTable; // 0x170(0x08)
	struct FSoftObjectPath GlobalAttributeSetDefaultsTableName; // 0x178(0x18)
	struct TArray<struct FSoftObjectPath> GlobalAttributeSetDefaultsTableNames; // 0x190(0x10)
	struct TArray<struct UCurveTable*> GlobalAttributeDefaultsTables; // 0x1a0(0x10)
	struct FSoftObjectPath GlobalGameplayCueManagerClass; // 0x1b0(0x18)
	struct FSoftObjectPath GlobalGameplayCueManagerName; // 0x1c8(0x18)
	struct TArray<struct FString> GameplayCueNotifyPaths; // 0x1e0(0x10)
	struct FSoftObjectPath GameplayTagResponseTableName; // 0x1f0(0x18)
	struct UGameplayTagReponseTable* GameplayTagResponseTable; // 0x208(0x08)
	bool PredictTargetGameplayEffects; // 0x210(0x01)
	bool ReplicateActivationOwnedTags; // 0x211(0x01)
	char pad_212[0x6]; // 0x212(0x06)
	struct UGameplayCueManager* GlobalGameplayCueManager; // 0x218(0x08)
	char pad_220[0x40]; // 0x220(0x40)

	void ToggleIgnoreAbilitySystemCosts(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts // (Exec|Native|Public) // @ game+0xacd670
	void ToggleIgnoreAbilitySystemCooldowns(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns // (Exec|Native|Public) // @ game+0xacd650
	void ServerEndPlayerAbility(struct FString AbilityNameMatch); // Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility // (Final|Exec|Native|Public) // @ game+0xacd560
	void ServerCancelPlayerAbility(struct FString AbilityNameMatch); // Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility // (Final|Exec|Native|Public) // @ game+0xacd560
	void ServerActivatePlayerAbility(struct FString AbilityNameMatch); // Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility // (Final|Exec|Native|Public) // @ game+0xacd560
	void ListPlayerAbilities(); // Function GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities // (Final|Exec|Native|Public) // @ game+0xacd350
};

// Class GameplayAbilities.AbilitySystemInterface
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemInterface : UInterface {
};

// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemReplicationProxyInterface : UInterface {
};

// Class GameplayAbilities.AbilitySystemTestAttributeSet
// Size: 0x70 (Inherited: 0x30)
struct UAbilitySystemTestAttributeSet : UAttributeSet {
	float MaxHealth; // 0x30(0x04)
	float Health; // 0x34(0x04)
	float Mana; // 0x38(0x04)
	float MaxMana; // 0x3c(0x04)
	float Damage; // 0x40(0x04)
	float SpellDamage; // 0x44(0x04)
	float PhysicalDamage; // 0x48(0x04)
	float CritChance; // 0x4c(0x04)
	float CritMultiplier; // 0x50(0x04)
	float ArmorDamageReduction; // 0x54(0x04)
	float DodgeChance; // 0x58(0x04)
	float LifeSteal; // 0x5c(0x04)
	float Strength; // 0x60(0x04)
	float StackingAttribute1; // 0x64(0x04)
	float StackingAttribute2; // 0x68(0x04)
	float NoStackAttribute; // 0x6c(0x04)
};

// Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x340 (Inherited: 0x320)
struct AAbilitySystemTestPawn : ADefaultPawn {
	char pad_320[0x18]; // 0x320(0x18)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x338(0x08)
};

// Class GameplayAbilities.AbilityTask
// Size: 0x80 (Inherited: 0x68)
struct UAbilityTask : UGameplayTask {
	struct UGameplayAbility* Ability; // 0x68(0x08)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x70(0x08)
	char pad_78[0x8]; // 0x78(0x08)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xc8 (Inherited: 0x80)
struct UAbilityTask_ApplyRootMotion_Base : UAbilityTask {
	struct FName ForceName; // 0x80(0x08)
	enum class ERootMotionFinishVelocityMode FinishVelocityMode; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FVector FinishSetVelocity; // 0x90(0x18)
	float FinishClampVelocity; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct UCharacterMovementComponent* MovementComponent; // 0xb0(0x08)
	char pad_B8[0x10]; // 0xb8(0x10)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// Size: 0x110 (Inherited: 0xc8)
struct UAbilityTask_ApplyRootMotionConstantForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xc8(0x10)
	struct FVector WorldDirection; // 0xd8(0x18)
	float Strength; // 0xf0(0x04)
	float Duration; // 0xf4(0x04)
	bool bIsAdditive; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct UCurveFloat* StrengthOverTime; // 0x100(0x08)
	bool bEnableGravity; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)

	struct UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, struct UCurveFloat* StrengthOverTime, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity); // Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xacb6f0
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// Size: 0x130 (Inherited: 0xc8)
struct UAbilityTask_ApplyRootMotionJumpForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnLanded; // 0xd8(0x10)
	struct FRotator Rotation; // 0xe8(0x18)
	float Distance; // 0x100(0x04)
	float Height; // 0x104(0x04)
	float Duration; // 0x108(0x04)
	float MinimumLandedTriggerTime; // 0x10c(0x04)
	bool bFinishOnLanded; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct UCurveVector* PathOffsetCurve; // 0x118(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)

	void OnLandedCallback(struct FHitResult& Hit); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback // (Final|Native|Public|HasOutParms) // @ game+0xacd370
	void Finish(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish // (Final|Native|Public|BlueprintCallable) // @ game+0xacd330
	struct UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xacba40
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x168 (Inherited: 0xc8)
struct UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinished; // 0xc8(0x10)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FVector StartLocation; // 0xe0(0x18)
	struct FVector TargetLocation; // 0xf8(0x18)
	struct AActor* TargetActor; // 0x110(0x08)
	struct FVector TargetLocationOffset; // 0x118(0x18)
	enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	float Duration; // 0x134(0x04)
	bool bDisableDestinationReachedInterrupt; // 0x138(0x01)
	bool bSetNewMovementMode; // 0x139(0x01)
	enum class EMovementMode NewMovementMode; // 0x13a(0x01)
	bool bRestrictSpeedToExpected; // 0x13b(0x01)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct UCurveVector* PathOffsetCurve; // 0x140(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0x148(0x08)
	struct UCurveFloat* TargetLerpSpeedHorizontalCurve; // 0x150(0x08)
	struct UCurveFloat* TargetLerpSpeedVerticalCurve; // 0x158(0x08)
	char pad_160[0x8]; // 0x160(0x08)

	void OnTargetActorSwapped(struct AActor* OriginalTarget, struct AActor* NewTarget); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped // (Final|Native|Public) // @ game+0xacd490
	void OnRep_TargetLocation(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation // (Final|Native|Protected) // @ game+0xacd470
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, struct FVector TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xacc6a0
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct AActor* TargetActor, struct FVector TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xacbe30
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0x130 (Inherited: 0xc8)
struct UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnTimedOut; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnTimedOutAndDestinationReached; // 0xd8(0x10)
	struct FVector StartLocation; // 0xe8(0x18)
	struct FVector TargetLocation; // 0x100(0x18)
	float Duration; // 0x118(0x04)
	bool bSetNewMovementMode; // 0x11c(0x01)
	enum class EMovementMode NewMovementMode; // 0x11d(0x01)
	bool bRestrictSpeedToExpected; // 0x11e(0x01)
	char pad_11F[0x1]; // 0x11f(0x01)
	struct UCurveVector* PathOffsetCurve; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)

	struct UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector TargetLocation, float Duration, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xacc340
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x138 (Inherited: 0xc8)
struct UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xc8(0x10)
	struct FVector Location; // 0xd8(0x18)
	struct AActor* LocationActor; // 0xf0(0x08)
	float Strength; // 0xf8(0x04)
	float Duration; // 0xfc(0x04)
	float Radius; // 0x100(0x04)
	bool bIsPush; // 0x104(0x01)
	bool bIsAdditive; // 0x105(0x01)
	bool bNoZForce; // 0x106(0x01)
	char pad_107[0x1]; // 0x107(0x01)
	struct UCurveFloat* StrengthDistanceFalloff; // 0x108(0x08)
	struct UCurveFloat* StrengthOverTime; // 0x110(0x08)
	bool bUseFixedWorldDirection; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct FRotator FixedWorldDirection; // 0x120(0x18)

	struct UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, struct AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, struct UCurveFloat* StrengthDistanceFalloff, struct UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, struct FRotator FixedWorldDirection, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xaccdf0
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xe8 (Inherited: 0x80)
struct UAbilityTask_MoveToLocation : UAbilityTask {
	struct FMulticastInlineDelegate OnTargetLocationReached; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)
	struct FVector StartLocation; // 0x98(0x18)
	struct FVector TargetLocation; // 0xb0(0x18)
	float DurationOfMovement; // 0xc8(0x04)
	char pad_CC[0xc]; // 0xcc(0x0c)
	struct UCurveFloat* LerpCurve; // 0xd8(0x08)
	struct UCurveVector* LerpCurveVector; // 0xe0(0x08)

	struct UAbilityTask_MoveToLocation* MoveToLocation(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, float Duration, struct UCurveFloat* OptionalInterpolationCurve, struct UCurveVector* OptionalVectorInterpolationCurve); // Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xacfdf0
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0x98 (Inherited: 0x80)
struct UAbilityTask_NetworkSyncPoint : UAbilityTask {
	struct FMulticastInlineDelegate OnSync; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)

	struct UAbilityTask_NetworkSyncPoint* WaitNetSync(struct UGameplayAbility* OwningAbility, enum class EAbilityTaskNetSyncType SyncType); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad2250
	void OnSignalCallback(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback // (Final|Native|Public) // @ game+0xad0390
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x108 (Inherited: 0x80)
struct UAbilityTask_PlayMontageAndWait : UAbilityTask {
	struct FMulticastInlineDelegate OnCompleted; // 0x80(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x90(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnCancelled; // 0xb0(0x10)
	char pad_C0[0x28]; // 0xc0(0x28)
	struct UAnimMontage* MontageToPlay; // 0xe8(0x08)
	float Rate; // 0xf0(0x04)
	struct FName StartSection; // 0xf4(0x08)
	float AnimRootMotionTranslationScale; // 0xfc(0x04)
	float StartTimeSeconds; // 0x100(0x04)
	bool bStopWhenAbilityEnds; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)

	void OnMontageInterrupted(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted // (Final|Native|Public) // @ game+0xad0370
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded // (Final|Native|Public) // @ game+0xad02a0
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut // (Final|Native|Public) // @ game+0xad01d0
	struct UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct UAnimMontage* MontageToPlay, float Rate, struct FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xacf8f0
};

// Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_Repeat : UAbilityTask {
	struct FMulticastInlineDelegate OnPerformAction; // 0x80(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)

	struct UAbilityTask_Repeat* RepeatAction(struct UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount); // Function GameplayAbilities.AbilityTask_Repeat.RepeatAction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad03b0
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xc8 (Inherited: 0x80)
struct UAbilityTask_SpawnActor : UAbilityTask {
	struct FMulticastInlineDelegate Success; // 0x80(0x10)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x90(0x10)
	char pad_A0[0x28]; // 0xa0(0x28)

	struct UAbilityTask_SpawnActor* SpawnActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* Class); // Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad04c0
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor // (Final|Native|Public|BlueprintCallable) // @ game+0xacfb50
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* Class, struct AActor*& SpawnedActor); // Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xacf5c0
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_StartAbilityState : UAbilityTask {
	struct FMulticastInlineDelegate OnStateEnded; // 0x80(0x10)
	struct FMulticastInlineDelegate OnStateInterrupted; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)

	struct UAbilityTask_StartAbilityState* StartAbilityState(struct UGameplayAbility* OwningAbility, struct FName StateName, bool bEndCurrentState); // Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad0690
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_VisualizeTargeting : UAbilityTask {
	struct FMulticastInlineDelegate TimeElapsed; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)

	struct UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* TargetActor, struct FName TaskInstanceName, float Duration); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad08e0
	struct UAbilityTask_VisualizeTargeting* VisualizeTargeting(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct FName TaskInstanceName, float Duration); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad0790
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor // (Final|Native|Public|BlueprintCallable) // @ game+0xacfd20
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor*& SpawnedActor); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xacf7d0
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x138 (Inherited: 0x80)
struct UAbilityTask_WaitAbilityActivate : UAbilityTask {
	struct FMulticastInlineDelegate OnActivate; // 0x80(0x10)
	char pad_90[0xa8]; // 0x90(0xa8)

	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad0cf0
	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad0ef0
	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad0b50
	void OnAbilityActivate(struct UGameplayAbility* ActivatedAbility); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate // (Final|Native|Public) // @ game+0xacffe0
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0xf8 (Inherited: 0x80)
struct UAbilityTask_WaitAbilityCommit : UAbilityTask {
	struct FMulticastInlineDelegate OnCommit; // 0x80(0x10)
	char pad_90[0x68]; // 0x90(0x68)

	struct UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad1210
	struct UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTage, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad10c0
	void OnAbilityCommit(struct UGameplayAbility* ActivatedAbility); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit // (Final|Native|Public) // @ game+0xad0070
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0xf8 (Inherited: 0x80)
struct UAbilityTask_WaitAttributeChange : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x80(0x10)
	char pad_90[0x60]; // 0x90(0x60)
	struct UAbilitySystemComponent* ExternalOwner; // 0xf0(0x08)

	struct UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute InAttribute, struct FGameplayTag InWithTag, struct FGameplayTag InWithoutTag, enum class EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad1ea0
	struct UAbilityTask_WaitAttributeChange* WaitForAttributeChange(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, struct FGameplayTag WithSrcTag, struct FGameplayTag WithoutSrcTag, bool TriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad1390
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x140 (Inherited: 0x80)
struct UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x80(0x10)
	char pad_90[0xa8]; // 0x90(0xa8)
	struct UAbilitySystemComponent* ExternalOwner; // 0x138(0x08)

	struct UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute AttributeNumerator, struct FGameplayAttribute AttributeDenominator, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad16a0
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xf0 (Inherited: 0x80)
struct UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x80(0x10)
	char pad_90[0x58]; // 0x90(0x58)
	struct UAbilitySystemComponent* ExternalOwner; // 0xe8(0x08)

	struct UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad1b80
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0x98 (Inherited: 0x80)
struct UAbilityTask_WaitCancel : UAbilityTask {
	struct FMulticastInlineDelegate OnCancel; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)

	struct UAbilityTask_WaitCancel* WaitCancel(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad0a30
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback // (Final|Native|Public) // @ game+0xad01b0
	void OnCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback // (Final|Native|Public) // @ game+0xad0100
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitConfirm : UAbilityTask {
	struct FMulticastInlineDelegate OnConfirm; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	struct UAbilityTask_WaitConfirm* WaitConfirm(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad0ac0
	void OnConfirmCallback(struct UGameplayAbility* InAbility); // Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback // (Final|Native|Public) // @ game+0xad0120
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_WaitConfirmCancel : UAbilityTask {
	struct FMulticastInlineDelegate OnConfirm; // 0x80(0x10)
	struct FMulticastInlineDelegate OnCancel; // 0x90(0x10)
	char pad_A0[0x8]; // 0xa0(0x08)

	struct UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad50f0
	void OnLocalConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback // (Final|Native|Public) // @ game+0xad4b60
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback // (Final|Native|Public) // @ game+0xad4b40
	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback // (Final|Native|Public) // @ game+0xad46e0
	void OnCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback // (Final|Native|Public) // @ game+0xad46c0
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0x98 (Inherited: 0x80)
struct UAbilityTask_WaitDelay : UAbilityTask {
	struct FMulticastInlineDelegate OnFinish; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)

	struct UAbilityTask_WaitDelay* WaitDelay(struct UGameplayAbility* OwningAbility, float Time); // Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad5180
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x1b8 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask {
	char pad_80[0x128]; // 0x80(0x128)
	struct UAbilitySystemComponent* ExternalOwner; // 0x1a8(0x08)
	char pad_1B0[0x8]; // 0x1b0(0x08)

	void OnApplyGameplayEffectCallback(struct UAbilitySystemComponent* Target, struct FGameplayEffectSpec& SpecApplied, struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback // (Final|Native|Public|HasOutParms) // @ game+0xad4560
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x1d8 (Inherited: 0x1b8)
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastInlineDelegate OnApplied; // 0x1b8(0x10)
	char pad_1C8[0x10]; // 0x1c8(0x10)

	struct UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad5880
	struct UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad54a0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x1d8 (Inherited: 0x1b8)
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastInlineDelegate OnApplied; // 0x1b8(0x10)
	char pad_1C8[0x10]; // 0x1c8(0x10)

	struct UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad5fb0
	struct UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle TargetFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffects); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad5bd0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x128 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask {
	struct FMulticastInlineDelegate bLocked; // 0x80(0x10)
	char pad_90[0x88]; // 0x90(0x88)
	struct UAbilitySystemComponent* ExternalOwner; // 0x118(0x08)
	char pad_120[0x8]; // 0x120(0x08)

	struct UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad6300
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xc0 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask {
	struct FMulticastInlineDelegate OnRemoved; // 0x80(0x10)
	struct FMulticastInlineDelegate InvalidHandle; // 0x90(0x10)
	char pad_A0[0x20]; // 0xa0(0x20)

	struct UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad5250
	void OnGameplayEffectRemoved(struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved // (Final|Native|Public|HasOutParms) // @ game+0xad4700
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x80(0x10)
	struct FMulticastInlineDelegate InvalidHandle; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)

	struct UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad5330
	void OnGameplayEffectStackChange(struct FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange // (Final|Native|Public) // @ game+0xad47f0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xb0 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEvent : UAbilityTask {
	struct FMulticastInlineDelegate EventReceived; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	struct UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(struct UGameplayAbility* OwningAbility, struct FGameplayTag EventTag, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact); // Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad65d0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayTag : UAbilityTask {
	char pad_80[0x10]; // 0x80(0x10)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)

	void GameplayTagCallback(struct FGameplayTag Tag, int32_t NewCount); // Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback // (Native|Public) // @ game+0xad4490
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xb8 (Inherited: 0xa8)
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag {
	struct FMulticastInlineDelegate Added; // 0xa8(0x10)

	struct UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad6770
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xb8 (Inherited: 0xa8)
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag {
	struct FMulticastInlineDelegate Removed; // 0xa8(0x10)

	struct UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad68c0
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitInputPress : UAbilityTask {
	struct FMulticastInlineDelegate OnPress; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	struct UAbilityTask_WaitInputPress* WaitInputPress(struct UGameplayAbility* OwningAbility, bool bTestAlreadyPressed); // Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad6a10
	void OnPressCallback(); // Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback // (Final|Native|Public) // @ game+0xad4c90
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitInputRelease : UAbilityTask {
	struct FMulticastInlineDelegate OnRelease; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	struct UAbilityTask_WaitInputRelease* WaitInputRelease(struct UGameplayAbility* OwningAbility, bool bTestAlreadyReleased); // Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad6ae0
	void OnReleaseCallback(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback // (Final|Native|Public) // @ game+0xad4cb0
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitMovementModeChange : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	void OnMovementModeChange(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange // (Final|Native|Public) // @ game+0xad4b80
	struct UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(struct UGameplayAbility* OwningAbility, enum class EMovementMode NewMode); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad42f0
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x90 (Inherited: 0x80)
struct UAbilityTask_WaitOverlap : UAbilityTask {
	struct FMulticastInlineDelegate OnOverlap; // 0x80(0x10)

	struct UAbilityTask_WaitOverlap* WaitForOverlap(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad5410
	void OnHitCallback(struct UPrimitiveComponent* HitComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xad4910
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xc0 (Inherited: 0x80)
struct UAbilityTask_WaitTargetData : UAbilityTask {
	struct FMulticastInlineDelegate ValidData; // 0x80(0x10)
	struct FMulticastInlineDelegate Cancelled; // 0x90(0x10)
	struct AGameplayAbilityTargetActor* TargetClass; // 0xa0(0x08)
	struct AGameplayAbilityTargetActor* TargetActor; // 0xa8(0x08)
	char pad_B0[0x10]; // 0xb0(0x10)

	struct UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* TargetActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad6d00
	struct UAbilityTask_WaitTargetData* WaitTargetData(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* Class); // Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xad6bb0
	void OnTargetDataReplicatedCancelledCallback(); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback // (Final|Native|Public) // @ game+0xad50d0
	void OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle& Data, struct FGameplayTag ActivationTag); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback // (Final|Native|Public|HasOutParms) // @ game+0xad4f50
	void OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle& Data); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback // (Final|Native|Public|HasOutParms) // @ game+0xad4e10
	void OnTargetDataCancelledCallback(struct FGameplayAbilityTargetDataHandle& Data); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback // (Final|Native|Public|HasOutParms) // @ game+0xad4cd0
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor // (Final|Native|Public|BlueprintCallable) // @ game+0xad43c0
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor*& SpawnedActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xad41d0
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_WaitVelocityChange : UAbilityTask {
	struct FMulticastInlineDelegate OnVelocityChage; // 0x80(0x10)
	struct UMovementComponent* CachedMovementComponent; // 0x90(0x08)
	char pad_98[0x20]; // 0x98(0x20)

	struct UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(struct UGameplayAbility* OwningAbility, struct FVector Direction, float MinimumMagnitude); // Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xadeca0
};

// Class GameplayAbilities.AnimNotify_GameplayCue
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_GameplayCue : UAnimNotify {
	struct FGameplayCueTag GameplayCue; // 0x38(0x08)
};

// Class GameplayAbilities.AnimNotify_GameplayCueState
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotify_GameplayCueState : UAnimNotifyState {
	struct FGameplayCueTag GameplayCue; // 0x30(0x08)
};

// Class GameplayAbilities.GameplayAbility
// Size: 0x3b8 (Inherited: 0x28)
struct UGameplayAbility : UObject {
	char pad_28[0x80]; // 0x28(0x80)
	struct FGameplayTagContainer AbilityTags; // 0xa8(0x20)
	bool bReplicateInputDirectly; // 0xc8(0x01)
	bool RemoteInstanceEnded; // 0xc9(0x01)
	char pad_CA[0x4]; // 0xca(0x04)
	enum class EGameplayAbilityReplicationPolicy ReplicationPolicy; // 0xce(0x01)
	enum class EGameplayAbilityInstancingPolicy InstancingPolicy; // 0xcf(0x01)
	bool bServerRespectsRemoteAbilityCancellation; // 0xd0(0x01)
	bool bRetriggerInstancedAbility; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
	struct FGameplayAbilityActivationInfo CurrentActivationInfo; // 0xd8(0x20)
	struct FGameplayEventData CurrentEventData; // 0xf8(0xb0)
	enum class EGameplayAbilityNetExecutionPolicy NetExecutionPolicy; // 0x1a8(0x01)
	enum class EGameplayAbilityNetSecurityPolicy NetSecurityPolicy; // 0x1a9(0x01)
	char pad_1AA[0x6]; // 0x1aa(0x06)
	struct UGameplayEffect* CostGameplayEffectClass; // 0x1b0(0x08)
	struct TArray<struct FAbilityTriggerData> AbilityTriggers; // 0x1b8(0x10)
	struct UGameplayEffect* CooldownGameplayEffectClass; // 0x1c8(0x08)
	struct FGameplayTagContainer CancelAbilitiesWithTag; // 0x1d0(0x20)
	struct FGameplayTagContainer BlockAbilitiesWithTag; // 0x1f0(0x20)
	struct FGameplayTagContainer ActivationOwnedTags; // 0x210(0x20)
	struct FGameplayTagContainer ActivationRequiredTags; // 0x230(0x20)
	struct FGameplayTagContainer ActivationBlockedTags; // 0x250(0x20)
	struct FGameplayTagContainer SourceRequiredTags; // 0x270(0x20)
	struct FGameplayTagContainer SourceBlockedTags; // 0x290(0x20)
	struct FGameplayTagContainer TargetRequiredTags; // 0x2b0(0x20)
	struct FGameplayTagContainer TargetBlockedTags; // 0x2d0(0x20)
	char pad_2F0[0x20]; // 0x2f0(0x20)
	struct TArray<struct UGameplayTask*> ActiveTasks; // 0x310(0x10)
	char pad_320[0x10]; // 0x320(0x10)
	struct UAnimMontage* CurrentMontage; // 0x330(0x08)
	char pad_338[0x60]; // 0x338(0x60)
	bool bIsActive; // 0x398(0x01)
	bool bIsAbilityEnding; // 0x399(0x01)
	bool bIsCancelable; // 0x39a(0x01)
	bool bIsBlockingOtherAbilities; // 0x39b(0x01)
	char pad_39C[0x14]; // 0x39c(0x14)
	bool bMarkPendingKillOnAbilityEnd; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)

	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities); // Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities // (Native|Public|BlueprintCallable) // @ game+0xae0be0
	void SetCanBeCanceled(bool bCanBeCanceled); // Function GameplayAbilities.GameplayAbility.SetCanBeCanceled // (Native|Public|BlueprintCallable) // @ game+0xae0b50
	void SendGameplayEvent(struct FGameplayTag EventTag, struct FGameplayEventData Payload); // Function GameplayAbilities.GameplayAbility.SendGameplayEvent // (Native|Protected|BlueprintCallable) // @ game+0xae0860
	void RemoveGrantedByEffect(); // Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect // (Native|Public|BlueprintCallable) // @ game+0xae0840
	void MontageStop(float OverrideBlendOutTime); // Function GameplayAbilities.GameplayAbility.MontageStop // (Final|Native|Protected|BlueprintCallable) // @ game+0xae07c0
	void MontageSetNextSectionName(struct FName FromSectionName, struct FName ToSectionName); // Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName // (Final|Native|Protected|BlueprintCallable) // @ game+0xae06f0
	void MontageJumpToSection(struct FName SectionName); // Function GameplayAbilities.GameplayAbility.MontageJumpToSection // (Final|Native|Protected|BlueprintCallable) // @ game+0xae0660
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(struct FName SocketName); // Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0xae0530
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor(); // Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0xae0460
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(struct UGameplayEffect* GameplayEffectClass, float Level); // Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xae0320
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload); // Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent // (Event|Protected|BlueprintEvent|Const) // @ game+0x2552560
	void K2_RemoveGameplayCue(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue // (Native|Protected|BlueprintCallable) // @ game+0xae0290
	void K2_OnEndAbility(bool bWasCancelled); // Function GameplayAbilities.GameplayAbility.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	bool K2_HasAuthority(); // Function GameplayAbilities.GameplayAbility.K2_HasAuthority // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xae0260
	void K2_ExecuteGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters); // Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams // (Native|Protected|HasOutParms|BlueprintCallable) // @ game+0xae0090
	void K2_ExecuteGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue // (Native|Protected|BlueprintCallable) // @ game+0xadff40
	void K2_EndAbilityLocally(); // Function GameplayAbilities.GameplayAbility.K2_EndAbilityLocally // (Native|Protected|BlueprintCallable) // @ game+0xadff20
	void K2_EndAbility(); // Function GameplayAbilities.GameplayAbility.K2_EndAbility // (Native|Protected|BlueprintCallable) // @ game+0xadff00
	void K2_CommitExecute(); // Function GameplayAbilities.GameplayAbility.K2_CommitExecute // (Event|Public|BlueprintEvent) // @ game+0x2552560
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent); // Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost // (Native|Public|BlueprintCallable) // @ game+0xadfe60
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown); // Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown // (Native|Public|BlueprintCallable) // @ game+0xadfd70
	bool K2_CommitAbility(); // Function GameplayAbilities.GameplayAbility.K2_CommitAbility // (Native|Public|BlueprintCallable) // @ game+0xadfd40
	bool K2_CheckAbilityCost(); // Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost // (Native|Public|BlueprintCallable) // @ game+0xadfd10
	bool K2_CheckAbilityCooldown(); // Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown // (Native|Public|BlueprintCallable) // @ game+0xadfce0
	void K2_CancelAbility(); // Function GameplayAbilities.GameplayAbility.K2_CancelAbility // (Final|Native|Public|BlueprintCallable) // @ game+0xadfcc0
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x2552560
	struct TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle EffectSpecHandle, struct FGameplayAbilityTargetDataHandle TargetData); // Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget // (Final|Native|Protected|BlueprintCallable) // @ game+0xadfa80
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(struct FGameplayEffectSpecHandle EffectSpecHandle); // Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner // (Final|Native|Protected|BlueprintCallable) // @ game+0xadf990
	void K2_AddGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd); // Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams // (Native|Protected|HasOutParms|BlueprintCallable) // @ game+0xadf770
	void K2_AddGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd); // Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue // (Native|Protected|BlueprintCallable) // @ game+0xadf5e0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void K2_ActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	bool IsLocallyControlled(); // Function GameplayAbilities.GameplayAbility.IsLocallyControlled // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xadf5b0
	void InvalidateClientPredictionKey(); // Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xadf590
	struct UObject* GetSourceObject_BP(struct FGameplayAbilitySpecHandle Handle, struct FGameplayAbilityActorInfo& ActorInfo); // Function GameplayAbilities.GameplayAbility.GetSourceObject_BP // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xadf460
	struct USkeletalMeshComponent* GetOwningComponentFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadf430
	struct AActor* GetOwningActorFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadf400
	struct FGameplayEffectContextHandle GetGrantedByEffectContext(); // Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadf370
	struct UObject* GetCurrentSourceObject(); // Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadf340
	struct UAnimMontage* GetCurrentMontage(); // Function GameplayAbilities.GameplayAbility.GetCurrentMontage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadf310
	float GetCooldownTimeRemaining(); // Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadf2e0
	struct FGameplayEffectContextHandle GetContextFromOwner(struct FGameplayAbilityTargetDataHandle OptionalTargetData); // Function GameplayAbilities.GameplayAbility.GetContextFromOwner // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadf130
	struct AActor* GetAvatarActorFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadf100
	struct FGameplayAbilityActorInfo GetActorInfo(); // Function GameplayAbilities.GameplayAbility.GetActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadf090
	struct UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadf060
	int32_t GetAbilityLevel_BP(struct FGameplayAbilitySpecHandle Handle, struct FGameplayAbilityActorInfo& ActorInfo); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel_BP // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xadef30
	int32_t GetAbilityLevel(); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xadef00
	void EndTaskByInstanceName(struct FName InstanceName); // Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName // (Final|Native|Protected|BlueprintCallable) // @ game+0xadee70
	void EndAbilityState(struct FName OptionalStateNameToEnd); // Function GameplayAbilities.GameplayAbility.EndAbilityState // (Final|Native|Protected|BlueprintCallable) // @ game+0xadede0
	void ConfirmTaskByInstanceName(struct FName InstanceName, bool bEndTask); // Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName // (Final|Native|Protected|BlueprintCallable) // @ game+0xadebd0
	void CancelTaskByInstanceName(struct FName InstanceName); // Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName // (Final|Native|Protected|BlueprintCallable) // @ game+0xadeb40
	void BP_RemoveGameplayEffectFromOwnerWithHandle(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle // (Final|Native|Protected|BlueprintCallable) // @ game+0xadea60
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(struct FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags // (Final|Native|Protected|BlueprintCallable) // @ game+0xade940
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(struct FGameplayTagContainer WithAssetTags, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags // (Final|Native|Protected|BlueprintCallable) // @ game+0xade820
	struct TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(struct FGameplayAbilityTargetDataHandle TargetData, struct UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget // (Final|Native|Protected|BlueprintCallable) // @ game+0xade5d0
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(struct UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner // (Final|Native|Protected|BlueprintCallable) // @ game+0xade4b0
};

// Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0xa0 (Inherited: 0xa0)
struct UGameplayAbilityBlueprint : UBlueprint {
};

// Class GameplayAbilities.GameplayAbilitySet
// Size: 0x40 (Inherited: 0x30)
struct UGameplayAbilitySet : UDataAsset {
	struct TArray<struct FGameplayAbilityBindInfo> Abilities; // 0x30(0x10)
};

// Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x3c0 (Inherited: 0x278)
struct AGameplayAbilityTargetActor : AActor {
	bool ShouldProduceTargetDataOnServer; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct FGameplayAbilityTargetingLocationInfo StartLocation; // 0x280(0xa0)
	char pad_320[0x30]; // 0x320(0x30)
	struct APlayerController* MasterPC; // 0x350(0x08)
	struct UGameplayAbility* OwningAbility; // 0x358(0x08)
	bool bDestroyOnConfirmation; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct AActor* SourceActor; // 0x368(0x08)
	struct FWorldReticleParameters ReticleParams; // 0x370(0x18)
	struct AGameplayAbilityWorldReticle* ReticleClass; // 0x388(0x08)
	struct FGameplayTargetDataFilterHandle Filter; // 0x390(0x10)
	bool bDebug; // 0x3a0(0x01)
	char pad_3A1[0x17]; // 0x3a1(0x17)
	struct UAbilitySystemComponent* GenericDelegateBoundASC; // 0x3b8(0x08)

	void ConfirmTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting // (Native|Public) // @ game+0xae5290
	void CancelTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting // (Native|Public) // @ game+0xae5270
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// Size: 0x3e0 (Inherited: 0x3c0)
struct AGameplayAbilityTargetActor_Trace : AGameplayAbilityTargetActor {
	float MaxRange; // 0x3c0(0x04)
	struct FCollisionProfileName TraceProfile; // 0x3c4(0x08)
	bool bTraceAffectsAimPitch; // 0x3cc(0x01)
	char pad_3CD[0x13]; // 0x3cd(0x13)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// Size: 0x400 (Inherited: 0x3e0)
struct AGameplayAbilityTargetActor_GroundTrace : AGameplayAbilityTargetActor_Trace {
	float CollisionRadius; // 0x3d8(0x04)
	float CollisionHeight; // 0x3dc(0x04)
	char pad_3E8[0x18]; // 0x3e8(0x18)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// Size: 0x410 (Inherited: 0x400)
struct AGameplayAbilityTargetActor_ActorPlacement : AGameplayAbilityTargetActor_GroundTrace {
	struct UObject* PlacedActorClass; // 0x3f8(0x08)
	struct UMaterialInterface* PlacedActorMaterial; // 0x400(0x08)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// Size: 0x3d0 (Inherited: 0x3c0)
struct AGameplayAbilityTargetActor_Radius : AGameplayAbilityTargetActor {
	float Radius; // 0x3c0(0x04)
	char pad_3C4[0xc]; // 0x3c4(0x0c)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// Size: 0x3e0 (Inherited: 0x3e0)
struct AGameplayAbilityTargetActor_SingleLineTrace : AGameplayAbilityTargetActor_Trace {
};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x2a8 (Inherited: 0x278)
struct AGameplayAbilityWorldReticle : AActor {
	struct FWorldReticleParameters Parameters; // 0x278(0x18)
	bool bFaceOwnerFlat; // 0x290(0x01)
	bool bSnapToTargetedActor; // 0x291(0x01)
	bool bIsTargetValid; // 0x292(0x01)
	bool bIsTargetAnActor; // 0x293(0x01)
	char pad_294[0x4]; // 0x294(0x04)
	struct APlayerController* MasterPC; // 0x298(0x08)
	struct AActor* TargetingActor; // 0x2a0(0x08)

	void SetReticleMaterialParamVector(struct FName ParamName, struct FVector Value); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x2552560
	void SetReticleMaterialParamFloat(struct FName ParamName, float Value); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void OnValidTargetChanged(bool bNewValue); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void OnTargetingAnActor(bool bNewValue); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void OnParametersInitialized(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void FaceTowardSource(bool bFaceIn2D); // Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource // (Final|Native|Public|BlueprintCallable) // @ game+0xae54b0
};

// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// Size: 0x2c0 (Inherited: 0x2a8)
struct AGameplayAbilityWorldReticle_ActorVisualization : AGameplayAbilityWorldReticle {
	struct UCapsuleComponent* CollisionComponent; // 0x2a8(0x08)
	struct TArray<struct UActorComponent*> VisualizationComponents; // 0x2b0(0x10)
};

// Class GameplayAbilities.GameplayAbility_CharacterJump
// Size: 0x3b8 (Inherited: 0x3b8)
struct UGameplayAbility_CharacterJump : UGameplayAbility {
};

// Class GameplayAbilities.GameplayAbility_Montage
// Size: 0x3f0 (Inherited: 0x3b8)
struct UGameplayAbility_Montage : UGameplayAbility {
	struct UAnimMontage* MontageToPlay; // 0x3b8(0x08)
	float PlayRate; // 0x3c0(0x04)
	struct FName SectionName; // 0x3c4(0x08)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct TArray<struct UGameplayEffect*> GameplayEffectClassesWhileAnimating; // 0x3d0(0x10)
	struct TArray<struct UGameplayEffect*> GameplayEffectsWhileAnimating; // 0x3e0(0x10)
};

// Class GameplayAbilities.GameplayCueFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCueFunctionLibrary : UBlueprintFunctionLibrary {

	void RemoveGameplayCueOnActor(struct AActor* Target, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueFunctionLibrary.RemoveGameplayCueOnActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xae57f0
	struct FGameplayCueParameters MakeGameplayCueParametersFromHitResult(struct FHitResult& HitResult); // Function GameplayAbilities.GameplayCueFunctionLibrary.MakeGameplayCueParametersFromHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xae5560
	void ExecuteGameplayCueOnActor(struct AActor* Target, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueFunctionLibrary.ExecuteGameplayCueOnActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xae52b0
	void AddGameplayCueOnActor(struct AActor* Target, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueFunctionLibrary.AddGameplayCueOnActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xae5070
};

// Class GameplayAbilities.GameplayCueInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCueInterface : UInterface {

	void ForwardGameplayCueToParent(); // Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xae5540
	void BlueprintCustomHandler(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2552560
};

// Class GameplayAbilities.GameplayCueManager
// Size: 0x310 (Inherited: 0x30)
struct UGameplayCueManager : UDataAsset {
	char pad_30[0x18]; // 0x30(0x18)
	struct FGameplayCueObjectLibrary RuntimeGameplayCueObjectLibrary; // 0x48(0x50)
	struct FGameplayCueObjectLibrary EditorGameplayCueObjectLibrary; // 0x98(0x50)
	char pad_E8[0x1c8]; // 0xe8(0x1c8)
	struct TArray<struct UObject*> LoadedGameplayCueNotifyClasses; // 0x2b0(0x10)
	struct TArray<struct AGameplayCueNotify_Actor*> GameplayCueClassesForPreallocation; // 0x2c0(0x10)
	struct TArray<struct FGameplayCuePendingExecute> PendingExecuteCues; // 0x2d0(0x10)
	int32_t GameplayCueSendContextCount; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct TArray<struct FPreallocationInfo> PreallocationInfoList_Internal; // 0x2e8(0x10)
	char pad_2F8[0x18]; // 0x2f8(0x18)
};

// Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x2d8 (Inherited: 0x278)
struct AGameplayCueNotify_Actor : AActor {
	bool bAutoDestroyOnRemove; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float AutoDestroyDelay; // 0x27c(0x04)
	bool WarnIfTimelineIsStillRunning; // 0x280(0x01)
	bool WarnIfLatentActionIsStillRunning; // 0x281(0x01)
	char pad_282[0x2]; // 0x282(0x02)
	struct FGameplayTag GameplayCueTag; // 0x284(0x08)
	struct FName GameplayCueName; // 0x28c(0x08)
	bool bAutoAttachToOwner; // 0x294(0x01)
	bool IsOverride; // 0x295(0x01)
	bool bUniqueInstancePerInstigator; // 0x296(0x01)
	bool bUniqueInstancePerSourceObject; // 0x297(0x01)
	bool bAllowMultipleOnActiveEvents; // 0x298(0x01)
	bool bAllowMultipleWhileActiveEvents; // 0x299(0x01)
	char pad_29A[0x2]; // 0x29a(0x02)
	int32_t NumPreallocatedInstances; // 0x29c(0x04)
	char pad_2A0[0x38]; // 0x2a0(0x38)

	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xae9ad0
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xae98e0
	void OnOwnerDestroyed(struct AActor* DestroyedActor); // Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed // (Native|Public) // @ game+0xae9850
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xae9660
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnActive // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xae9470
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void K2_EndGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue // (Native|Public|BlueprintCallable) // @ game+0xae9450
};

// Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x40 (Inherited: 0x28)
struct UGameplayCueNotify_Static : UObject {
	struct FGameplayTag GameplayCueTag; // 0x28(0x08)
	struct FName GameplayCueName; // 0x30(0x08)
	bool IsOverride; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.WhileActive // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xaef540
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnRemove // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xaef350
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnExecute // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xaef160
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnActive // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xaeef70
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x2552560
};

// Class GameplayAbilities.GameplayCueNotify_Burst
// Size: 0x398 (Inherited: 0x40)
struct UGameplayCueNotify_Burst : UGameplayCueNotify_Static {
	struct FGameplayCueNotify_SpawnCondition DefaultSpawnCondition; // 0x40(0x38)
	struct FGameplayCueNotify_PlacementInfo DefaultPlacementInfo; // 0x78(0x40)
	struct FGameplayCueNotify_BurstEffects BurstEffects; // 0xb8(0x2e0)

	void OnBurst(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Burst.OnBurst // (Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x2552560
};

// Class GameplayAbilities.GameplayCueNotify_BurstLatent
// Size: 0x690 (Inherited: 0x2d8)
struct AGameplayCueNotify_BurstLatent : AGameplayCueNotify_Actor {
	struct FGameplayCueNotify_SpawnCondition DefaultSpawnCondition; // 0x2d8(0x38)
	struct FGameplayCueNotify_PlacementInfo DefaultPlacementInfo; // 0x310(0x40)
	struct FGameplayCueNotify_BurstEffects BurstEffects; // 0x350(0x2e0)
	struct FGameplayCueNotify_SpawnResult BurstSpawnResults; // 0x630(0x60)

	void OnBurst(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_BurstLatent.OnBurst // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
};

// Class GameplayAbilities.GameplayCueNotify_HitImpact
// Size: 0x50 (Inherited: 0x40)
struct UGameplayCueNotify_HitImpact : UGameplayCueNotify_Static {
	struct USoundBase* Sound; // 0x40(0x08)
	struct UParticleSystem* ParticleSystem; // 0x48(0x08)
};

// Class GameplayAbilities.GameplayCueNotify_Looping
// Size: 0xfb0 (Inherited: 0x2d8)
struct AGameplayCueNotify_Looping : AGameplayCueNotify_Actor {
	struct FGameplayCueNotify_SpawnCondition DefaultSpawnCondition; // 0x2d8(0x38)
	struct FGameplayCueNotify_PlacementInfo DefaultPlacementInfo; // 0x310(0x40)
	struct FGameplayCueNotify_BurstEffects ApplicationEffects; // 0x350(0x2e0)
	struct FGameplayCueNotify_SpawnResult ApplicationSpawnResults; // 0x630(0x60)
	struct FGameplayCueNotify_LoopingEffects LoopingEffects; // 0x690(0x238)
	struct FGameplayCueNotify_SpawnResult LoopingSpawnResults; // 0x8c8(0x60)
	struct FGameplayCueNotify_BurstEffects RecurringEffects; // 0x928(0x2e0)
	struct FGameplayCueNotify_SpawnResult RecurringSpawnResults; // 0xc08(0x60)
	struct FGameplayCueNotify_BurstEffects RemovalEffects; // 0xc68(0x2e0)
	struct FGameplayCueNotify_SpawnResult RemovalSpawnResults; // 0xf48(0x60)
	char pad_FA8[0x8]; // 0xfa8(0x08)

	void OnRemoval(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Looping.OnRemoval // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void OnRecurring(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Looping.OnRecurring // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void OnLoopingStart(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Looping.OnLoopingStart // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void OnApplication(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Looping.OnApplication // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
};

// Class GameplayAbilities.GameplayCueSet
// Size: 0x90 (Inherited: 0x30)
struct UGameplayCueSet : UDataAsset {
	struct TArray<struct FGameplayCueNotifyData> GameplayCueData; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)
};

// Class GameplayAbilities.GameplayCueTranslator
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCueTranslator : UObject {
};

// Class GameplayAbilities.GameplayCueTranslator_Test
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCueTranslator_Test : UGameplayCueTranslator {
};

// Class GameplayAbilities.GameplayEffect
// Size: 0x800 (Inherited: 0x28)
struct UGameplayEffect : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	enum class EGameplayEffectDurationType DurationPolicy; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FGameplayEffectModifierMagnitude DurationMagnitude; // 0x38(0x1e0)
	struct FScalableFloat Period; // 0x218(0x28)
	bool bExecutePeriodicEffectOnApplication; // 0x240(0x01)
	enum class EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy; // 0x241(0x01)
	char pad_242[0x6]; // 0x242(0x06)
	struct TArray<struct FGameplayModifierInfo> Modifiers; // 0x248(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x258(0x10)
	struct FScalableFloat ChanceToApplyToTarget; // 0x268(0x28)
	struct TArray<struct UGameplayEffectCustomApplicationRequirement*> ApplicationRequirements; // 0x290(0x10)
	struct TArray<struct UGameplayEffect*> TargetEffectClasses; // 0x2a0(0x10)
	struct TArray<struct FConditionalGameplayEffect> ConditionalGameplayEffects; // 0x2b0(0x10)
	struct TArray<struct UGameplayEffect*> OverflowEffects; // 0x2c0(0x10)
	bool bDenyOverflowApplication; // 0x2d0(0x01)
	bool bClearStackOnOverflow; // 0x2d1(0x01)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct TArray<struct UGameplayEffect*> PrematureExpirationEffectClasses; // 0x2d8(0x10)
	struct TArray<struct UGameplayEffect*> RoutineExpirationEffectClasses; // 0x2e8(0x10)
	bool bRequireModifierSuccessToTriggerCues; // 0x2f8(0x01)
	bool bSuppressStackingCues; // 0x2f9(0x01)
	char pad_2FA[0x6]; // 0x2fa(0x06)
	struct TArray<struct FGameplayEffectCue> GameplayCues; // 0x300(0x10)
	struct UGameplayEffectUIData* UIData; // 0x310(0x08)
	struct FInheritedTagContainer InheritableGameplayEffectTags; // 0x318(0x60)
	struct FInheritedTagContainer InheritableOwnedTagsContainer; // 0x378(0x60)
	struct FGameplayTagRequirements OngoingTagRequirements; // 0x3d8(0x40)
	struct FGameplayTagRequirements ApplicationTagRequirements; // 0x418(0x40)
	struct FGameplayTagRequirements RemovalTagRequirements; // 0x458(0x40)
	struct FInheritedTagContainer RemoveGameplayEffectsWithTags; // 0x498(0x60)
	struct FGameplayTagRequirements GrantedApplicationImmunityTags; // 0x4f8(0x40)
	struct FGameplayEffectQuery GrantedApplicationImmunityQuery; // 0x538(0x150)
	char pad_688[0x8]; // 0x688(0x08)
	struct FGameplayEffectQuery RemoveGameplayEffectQuery; // 0x690(0x150)
	char pad_7E0[0x1]; // 0x7e0(0x01)
	enum class EGameplayEffectStackingType StackingType; // 0x7e1(0x01)
	char pad_7E2[0x2]; // 0x7e2(0x02)
	int32_t StackLimitCount; // 0x7e4(0x04)
	enum class EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy; // 0x7e8(0x01)
	enum class EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy; // 0x7e9(0x01)
	enum class EGameplayEffectStackingExpirationPolicy StackExpirationPolicy; // 0x7ea(0x01)
	char pad_7EB[0x5]; // 0x7eb(0x05)
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilities; // 0x7f0(0x10)
};

// Class GameplayAbilities.GameplayEffectCalculation
// Size: 0x38 (Inherited: 0x28)
struct UGameplayEffectCalculation : UObject {
	struct TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture; // 0x28(0x10)
};

// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEffectCustomApplicationRequirement : UObject {

	bool CanApplyGameplayEffect(struct UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec& Spec, struct UAbilitySystemComponent* ASC); // Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xaf4170
};

// Class GameplayAbilities.GameplayEffectExecutionCalculation
// Size: 0x40 (Inherited: 0x38)
struct UGameplayEffectExecutionCalculation : UGameplayEffectCalculation {
	bool bRequiresPassedInTags; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput& OutExecutionOutput); // Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xaf42d0
};

// Class GameplayAbilities.GameplayEffectUIData
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEffectUIData : UObject {
};

// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// Size: 0x40 (Inherited: 0x28)
struct UGameplayEffectUIData_TextOnly : UGameplayEffectUIData {
	struct FText Description; // 0x28(0x18)
};

// Class GameplayAbilities.GameplayModMagnitudeCalculation
// Size: 0x40 (Inherited: 0x38)
struct UGameplayModMagnitudeCalculation : UGameplayEffectCalculation {
	bool bAllowNonNetAuthorityDependencyRegistration; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	float K2_GetCapturedAttributeMagnitude(struct FGameplayEffectSpec& EffectSpec, struct FGameplayAttribute Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags); // Function GameplayAbilities.GameplayModMagnitudeCalculation.K2_GetCapturedAttributeMagnitude // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0xaf4c00
	struct FGameplayTagContainer GetTargetSpecTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetSpecTags // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0xaf4b20
	struct FGameplayTagContainer GetTargetAggregatedTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetAggregatedTags // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0xaf4a20
	struct FGameplayTagContainer GetTargetActorTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetActorTags // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0xaf4940
	struct FGameplayTagContainer GetSourceSpecTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceSpecTags // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0xaf4860
	struct FGameplayTagContainer GetSourceAggregatedTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceAggregatedTags // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0xaf4760
	struct FGameplayTagContainer GetSourceActorTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceActorTags // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0xaf4680
	float GetSetByCallerMagnitudeByTag(struct FGameplayEffectSpec& EffectSpec, struct FGameplayTag& Tag); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByTag // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0xaf4560
	float GetSetByCallerMagnitudeByName(struct FGameplayEffectSpec& EffectSpec, struct FName& MagnitudeName); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByName // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0xaf4440
	float CalculateBaseMagnitude(struct FGameplayEffectSpec& Spec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xaf40a0
};

// Class GameplayAbilities.GameplayTagReponseTable
// Size: 0x1e8 (Inherited: 0x30)
struct UGameplayTagReponseTable : UDataAsset {
	struct TArray<struct FGameplayTagResponseTableEntry> Entries; // 0x30(0x10)
	char pad_40[0x1a8]; // 0x40(0x1a8)

	void TagResponseEvent(struct FGameplayTag Tag, int32_t NewCount, struct UAbilitySystemComponent* ASC, int32_t idx); // Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent // (Final|Native|Protected) // @ game+0xaf4f60
};

// Class GameplayAbilities.MovieSceneGameplayCueTriggerSection
// Size: 0x1d0 (Inherited: 0x100)
struct UMovieSceneGameplayCueTriggerSection : UMovieSceneHookSection {
	struct FMovieSceneGameplayCueChannel Channel; // 0x100(0xd0)
};

// Class GameplayAbilities.MovieSceneGameplayCueSection
// Size: 0x190 (Inherited: 0x100)
struct UMovieSceneGameplayCueSection : UMovieSceneHookSection {
	struct FMovieSceneGameplayCueKey Cue; // 0x100(0x90)
};

// Class GameplayAbilities.MovieSceneGameplayCueTrack
// Size: 0xa0 (Inherited: 0x90)
struct UMovieSceneGameplayCueTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x90(0x10)

	void SetSequencerTrackHandler(struct FDelegate InGameplayCueTrackHandler); // Function GameplayAbilities.MovieSceneGameplayCueTrack.SetSequencerTrackHandler // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xaf5960
};

// Class GameplayAbilities.TickableAttributeSetInterface
// Size: 0x28 (Inherited: 0x28)
struct UTickableAttributeSetInterface : UInterface {
};

