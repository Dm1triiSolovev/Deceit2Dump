// BlueprintGeneratedClass B_Deceit_Char_Base.B_Deceit_Char_Base_C
// Size: 0x3a8 (Inherited: 0x2b0)
struct AB_Deceit_Char_Base_C : ADeceitCharacterActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UNiagaraComponent* GhostNiagara; // 0x2b8(0x08)
	struct USkeletalMeshComponent* GhostCharacter; // 0x2c0(0x08)
	struct USkeletalMeshComponent* Face; // 0x2c8(0x08)
	struct USkeletalMeshComponent* MeshComponent; // 0x2d0(0x08)
	struct USkeletalMesh* CachedFaceMesh; // 0x2d8(0x08)
	struct TMap<struct TSoftObjectPtr<UGroomComponent>, struct TSoftObjectPtr<UGroomAsset>> CachedGroomAssets; // 0x2e0(0x50)
	struct FRotator BO_Prop_R_Rot; // 0x330(0x18)
	struct FVector BO_Prop_R_Pos; // 0x348(0x18)
	struct FRotator BO_LowerArm_R_Rot; // 0x360(0x18)
	struct FRotator BO_LowerArm_L_Rot; // 0x378(0x18)
	struct FRotator BO_UpperArm_L_Rot; // 0x390(0x18)

	void Set Ghost Form(bool Active); // Function B_Deceit_Char_Base.B_Deceit_Char_Base_C.Set Ghost Form // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void UserConstructionScript(); // Function B_Deceit_Char_Base.B_Deceit_Char_Base_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnFirstPersonChanged(bool FirstPerson); // Function B_Deceit_Char_Base.B_Deceit_Char_Base_C.OnFirstPersonChanged // (Event|Public|BlueprintEvent) // @ game+0x2552560
	void SetupShadowCharacter(); // Function B_Deceit_Char_Base.B_Deceit_Char_Base_C.SetupShadowCharacter // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void DisableShadowCharacter(); // Function B_Deceit_Char_Base.B_Deceit_Char_Base_C.DisableShadowCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_Deceit_Char_Base(int32_t EntryPoint); // Function B_Deceit_Char_Base.B_Deceit_Char_Base_C.ExecuteUbergraph_B_Deceit_Char_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

