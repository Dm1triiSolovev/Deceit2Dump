// BlueprintGeneratedClass GCNL_Dash.GCNL_Dash_C
// Size: 0x728 (Inherited: 0x690)
struct AGCNL_Dash_C : AGameplayCueNotify_BurstLatent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x690(0x08)
	float DashDeformTimeline_Deform_DD61F4AF4709979C8191398124472F53; // 0x698(0x04)
	float DashDeformTimeline_RibbonTrail_DD61F4AF4709979C8191398124472F53; // 0x69c(0x04)
	float DashDeformTimeline_linear_DD61F4AF4709979C8191398124472F53; // 0x6a0(0x04)
	enum class ETimelineDirection DashDeformTimeline__Direction_DD61F4AF4709979C8191398124472F53; // 0x6a4(0x01)
	char pad_6A5[0x3]; // 0x6a5(0x03)
	struct UTimelineComponent* DashDeformTimeline; // 0x6a8(0x08)
	double Duration; // 0x6b0(0x08)
	double Strenght; // 0x6b8(0x08)
	struct ACharacter* Pawn; // 0x6c0(0x08)
	struct FVector Direction; // 0x6c8(0x18)
	struct TArray<struct UMaterialInstanceDynamic*> PawnMaterials; // 0x6e0(0x10)
	struct UNiagaraComponent* RibbonTrails; // 0x6f0(0x08)
	struct AActor* TargetActor; // 0x6f8(0x08)
	struct TArray<struct UNiagaraComponent*> SpawnedEffects; // 0x700(0x10)
	struct FLinearColor TeamColor; // 0x710(0x10)
	struct ULyraTeamDisplayAsset* TeamDisplayAsset; // 0x720(0x08)

	void DashDeformTimeline__FinishedFunc(); // Function GCNL_Dash.GCNL_Dash_C.DashDeformTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x2552560
	void DashDeformTimeline__UpdateFunc(); // Function GCNL_Dash.GCNL_Dash_C.DashDeformTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x2552560
	void OnBurst(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GCNL_Dash.GCNL_Dash_C.OnBurst // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GCNL_Dash(int32_t EntryPoint); // Function GCNL_Dash.GCNL_Dash_C.ExecuteUbergraph_GCNL_Dash // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

