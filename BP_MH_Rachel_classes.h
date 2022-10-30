// BlueprintGeneratedClass BP_MH_Rachel.BP_MH_Rachel_C
// Size: 0x300 (Inherited: 0x278)
struct ABP_MH_Rachel_C : AActor {
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
	struct FLiveLinkSubjectName LLink Face Subj; // 0x2e8(0x08)
	bool LLink Face Head; // 0x2f0(0x01)
	bool RetargetModeEnabled; // 0x2f1(0x01)
	enum class EAnimationMode RetargetOrigBodyAnimMode; // 0x2f2(0x01)
	char pad_2F3[0x5]; // 0x2f3(0x05)
	struct UAnimInstance* RetargetOrigAnimClass; // 0x2f8(0x08)

	void RetargetSetup(); // Function BP_MH_Rachel.BP_MH_Rachel_C.RetargetSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ARKit_Setup(); // Function BP_MH_Rachel.BP_MH_Rachel_C.ARKit_Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void EnableMasterPose(struct USkeletalMeshComponent* SkeletalMeshComponent); // Function BP_MH_Rachel.BP_MH_Rachel_C.EnableMasterPose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void UserConstructionScript(); // Function BP_MH_Rachel.BP_MH_Rachel_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ReceiveBeginPlay(); // Function BP_MH_Rachel.BP_MH_Rachel_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_BP_MH_Rachel(int32_t EntryPoint); // Function BP_MH_Rachel.BP_MH_Rachel_C.ExecuteUbergraph_BP_MH_Rachel // (Final|UbergraphFunction) // @ game+0x2552560
};

