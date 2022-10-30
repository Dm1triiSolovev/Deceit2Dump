// BlueprintGeneratedClass GA_ForceTransformOut.GA_ForceTransformOut_C
// Size: 0x480 (Inherited: 0x478)
struct UGA_ForceTransformOut_C : ULyraGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)

	void K2_ActivateAbility(); // Function GA_ForceTransformOut.GA_ForceTransformOut_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void TransformOut(struct AB_Hero_Deceit_C* Hero); // Function GA_ForceTransformOut.GA_ForceTransformOut_C.TransformOut // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GA_ForceTransformOut(int32_t EntryPoint); // Function GA_ForceTransformOut.GA_ForceTransformOut_C.ExecuteUbergraph_GA_ForceTransformOut // (Final|UbergraphFunction) // @ game+0x2552560
};

