// BlueprintGeneratedClass AN_PlayLinkedMontage.AN_PlayLinkedMontage_C
// Size: 0x48 (Inherited: 0x38)
struct UAN_PlayLinkedMontage_C : UAnimNotify {
	struct UAnimMontage* MontageToPlay; // 0x38(0x08)
	double RateScale; // 0x40(0x08)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference); // Function AN_PlayLinkedMontage.AN_PlayLinkedMontage_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2552560
};

