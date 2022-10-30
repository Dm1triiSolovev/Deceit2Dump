// BlueprintGeneratedClass GA_TransformToTerror.GA_TransformToTerror_C
// Size: 0x4e0 (Inherited: 0x4c8)
struct UGA_TransformToTerror_C : UGA_AbilityWithWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	struct UAnimMontage* TransformMontage; // 0x4d0(0x08)
	double TransformDuration; // 0x4d8(0x08)

	void OnCancelled_FACC912042A8A0952389BAA475F99388(); // Function GA_TransformToTerror.GA_TransformToTerror_C.OnCancelled_FACC912042A8A0952389BAA475F99388 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnInterrupted_FACC912042A8A0952389BAA475F99388(); // Function GA_TransformToTerror.GA_TransformToTerror_C.OnInterrupted_FACC912042A8A0952389BAA475F99388 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnBlendOut_FACC912042A8A0952389BAA475F99388(); // Function GA_TransformToTerror.GA_TransformToTerror_C.OnBlendOut_FACC912042A8A0952389BAA475F99388 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnCompleted_FACC912042A8A0952389BAA475F99388(); // Function GA_TransformToTerror.GA_TransformToTerror_C.OnCompleted_FACC912042A8A0952389BAA475F99388 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void K2_ActivateAbility(); // Function GA_TransformToTerror.GA_TransformToTerror_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void EnableTerrorModel(struct AB_Hero_Deceit_C* Hero, bool Enable); // Function GA_TransformToTerror.GA_TransformToTerror_C.EnableTerrorModel // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GA_TransformToTerror(int32_t EntryPoint); // Function GA_TransformToTerror.GA_TransformToTerror_C.ExecuteUbergraph_GA_TransformToTerror // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

