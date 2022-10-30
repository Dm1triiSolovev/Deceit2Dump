// Class AudioLinkEngine.AudioLinkBlueprintInterface
// Size: 0x28 (Inherited: 0x28)
struct UAudioLinkBlueprintInterface : UInterface {

	void StopLink(); // Function AudioLinkEngine.AudioLinkBlueprintInterface.StopLink // (Native|Public|BlueprintCallable) // @ game+0x3fe3170
	void SetLinkSound(struct USoundBase* NewSound); // Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound // (Native|Public|BlueprintCallable) // @ game+0x3fe30e0
	void PlayLink(float StartTime); // Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink // (Native|Public|BlueprintCallable) // @ game+0x3fe3050
	bool IsLinkPlaying(); // Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fe3020
};

