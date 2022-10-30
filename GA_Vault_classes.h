// BlueprintGeneratedClass GA_Vault.GA_Vault_C
// Size: 0x4a1 (Inherited: 0x480)
struct UGA_Vault_C : ULyraGameplayAbility_Vault {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct TArray<struct FVaultOption> Vault Options; // 0x488(0x10)
	struct AActor* TargetVaultable; // 0x498(0x08)
	bool WaitingForPawnAvatar; // 0x4a0(0x01)

	void Toggle Ignore Input(); // Function GA_Vault.GA_Vault_C.Toggle Ignore Input // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void StartVaultSearching(); // Function GA_Vault.GA_Vault_C.StartVaultSearching // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void VaultableObjectsChanged_5FC249F646200DD79EC44CAE11990F13(struct TArray<struct FVaultOption>& VaultOptions); // Function GA_Vault.GA_Vault_C.VaultableObjectsChanged_5FC249F646200DD79EC44CAE11990F13 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnPress_917B8F2941A742BF763C3F95447DFC39(float TimeWaited); // Function GA_Vault.GA_Vault_C.OnPress_917B8F2941A742BF763C3F95447DFC39 // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnCancelled_D2156D7D43C9809D318FB9BB2466920A(); // Function GA_Vault.GA_Vault_C.OnCancelled_D2156D7D43C9809D318FB9BB2466920A // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnInterrupted_D2156D7D43C9809D318FB9BB2466920A(); // Function GA_Vault.GA_Vault_C.OnInterrupted_D2156D7D43C9809D318FB9BB2466920A // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnBlendOut_D2156D7D43C9809D318FB9BB2466920A(); // Function GA_Vault.GA_Vault_C.OnBlendOut_D2156D7D43C9809D318FB9BB2466920A // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnCompleted_D2156D7D43C9809D318FB9BB2466920A(); // Function GA_Vault.GA_Vault_C.OnCompleted_D2156D7D43C9809D318FB9BB2466920A // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void K2_ActivateAbility(); // Function GA_Vault.GA_Vault_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void LookForVaultables(); // Function GA_Vault.GA_Vault_C.LookForVaultables // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void OnVault(); // Function GA_Vault.GA_Vault_C.OnVault // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Vault.GA_Vault_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void K2_OnPawnAvatarSet(); // Function GA_Vault.GA_Vault_C.K2_OnPawnAvatarSet // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_GA_Vault(int32_t EntryPoint); // Function GA_Vault.GA_Vault_C.ExecuteUbergraph_GA_Vault // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

