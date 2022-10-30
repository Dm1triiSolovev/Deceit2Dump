// Class AudioGameplay.AudioGameplayComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UAudioGameplayComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class AudioGameplay.AudioGameplayCondition
// Size: 0x28 (Inherited: 0x28)
struct UAudioGameplayCondition : UInterface {

	bool ConditionMet_Position(struct FVector& position); // Function AudioGameplay.AudioGameplayCondition.ConditionMet_Position // (RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19b4680
	bool ConditionMet(); // Function AudioGameplay.AudioGameplayCondition.ConditionMet // (RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19b4650
};

// Class AudioGameplay.AudioGameplayVolumeInteraction
// Size: 0x28 (Inherited: 0x28)
struct UAudioGameplayVolumeInteraction : UInterface {

	void OnListenerExit(); // Function AudioGameplay.AudioGameplayVolumeInteraction.OnListenerExit // (RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19b4740
	void OnListenerEnter(); // Function AudioGameplay.AudioGameplayVolumeInteraction.OnListenerEnter // (RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19b4720
};

