// BlueprintGeneratedClass BP_MH_Jak.BP_MH_Jak_C
// Size: 0x318 (Inherited: 0x278)
struct ABP_MH_Jak_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UGroomComponent* Beard; // 0x280(0x08)
	struct UGroomComponent* Mustache; // 0x288(0x08)
	struct UGroomComponent* Eyelashes; // 0x290(0x08)
	struct USkeletalMeshComponent* Feet; // 0x298(0x08)
	struct USkeletalMeshComponent* Legs; // 0x2a0(0x08)
	struct USkeletalMeshComponent* Torso; // 0x2a8(0x08)
	struct UGroomComponent* Fuzz; // 0x2b0(0x08)
	struct UGroomComponent* Eyebrows; // 0x2b8(0x08)
	struct UGroomComponent* Hair; // 0x2c0(0x08)
	struct ULODSyncComponent* LODSync; // 0x2c8(0x08)
	struct USkeletalMeshComponent* Face; // 0x2d0(0x08)
	struct USkeletalMeshComponent* Body; // 0x2d8(0x08)
	struct USceneComponent* Root; // 0x2e0(0x08)
	struct FLiveLinkSubjectName ARKitFaceSubj; // 0x2e8(0x08)
	bool UseARKitFace; // 0x2f0(0x01)
	bool UseLiveRetargetMode; // 0x2f1(0x01)
	enum class EAnimationMode RetargetOrigBodyAnimMode; // 0x2f2(0x01)
	char pad_2F3[0x5]; // 0x2f3(0x05)
	struct UAnimInstance* RetargetOrigAnimClass; // 0x2f8(0x08)
	struct FLiveLinkSubjectName LiveLinkBodySubj; // 0x300(0x08)
	bool UseLiveLinkBody; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct ULiveLinkRetargetAsset* LiveLinkBodyRetarget; // 0x310(0x08)

	void SetUpdateAnimationInEditor(bool IsEnabled); // Function BP_MH_Jak.BP_MH_Jak_C.SetUpdateAnimationInEditor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void HairLODSetup(); // Function BP_MH_Jak.BP_MH_Jak_C.HairLODSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void LiveLinkSetup(struct USkeletalMeshComponent* SkeletalMesh, struct FLiveLinkSubjectName SubjectName, struct ULiveLinkRetargetAsset* RetargetAsset, bool UseLiveLink); // Function BP_MH_Jak.BP_MH_Jak_C.LiveLinkSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void LiveRetargetSetup(); // Function BP_MH_Jak.BP_MH_Jak_C.LiveRetargetSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ARKitFaceSetup(); // Function BP_MH_Jak.BP_MH_Jak_C.ARKitFaceSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void EnableMasterPose(struct USkeletalMeshComponent* SkeletalMeshComponent); // Function BP_MH_Jak.BP_MH_Jak_C.EnableMasterPose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void UserConstructionScript(); // Function BP_MH_Jak.BP_MH_Jak_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ReceiveBeginPlay(); // Function BP_MH_Jak.BP_MH_Jak_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void BndEvt__MetaHumanTemplateBP_Body_K2Node_ComponentBoundEvent_0_OnAnimInitialized__DelegateSignature(); // Function BP_MH_Jak.BP_MH_Jak_C.BndEvt__MetaHumanTemplateBP_Body_K2Node_ComponentBoundEvent_0_OnAnimInitialized__DelegateSignature // (BlueprintEvent) // @ game+0x2552560
	void BndEvt__MetaHumanTemplateBP_Face_K2Node_ComponentBoundEvent_1_OnAnimInitialized__DelegateSignature(); // Function BP_MH_Jak.BP_MH_Jak_C.BndEvt__MetaHumanTemplateBP_Face_K2Node_ComponentBoundEvent_1_OnAnimInitialized__DelegateSignature // (BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_BP_MH_Jak(int32_t EntryPoint); // Function BP_MH_Jak.BP_MH_Jak_C.ExecuteUbergraph_BP_MH_Jak // (Final|UbergraphFunction) // @ game+0x2552560
};

