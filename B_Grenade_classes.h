// BlueprintGeneratedClass B_Grenade.B_Grenade_C
// Size: 0x308 (Inherited: 0x278)
struct AB_Grenade_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UStaticMeshComponent* Mesh; // 0x280(0x08)
	struct UProjectileMovementComponent* ProjectileMovement; // 0x288(0x08)
	double TimeBeforeExplode; // 0x290(0x08)
	struct FTimerHandle Timer; // 0x298(0x08)
	double Radius; // 0x2a0(0x08)
	struct FGameplayTag Gameplay Tag; // 0x2a8(0x08)
	struct FGameplayEffectContextHandle Gameplay Effect Context Handle Struct; // 0x2b0(0x18)
	struct UAbilitySystemComponent* Instigator Ability System; // 0x2c8(0x08)
	struct FLinearColor Team Color; // 0x2d0(0x10)
	struct TArray<struct AActor*> IgnoreActors; // 0x2e0(0x10)
	struct UNiagaraComponent* NS_Trail; // 0x2f0(0x08)
	float ConservedVelocity; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct UMaterialInterface* MaterialExplosion; // 0x300(0x08)

	void Setup VFX(); // Function B_Grenade.B_Grenade_C.Setup VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ReceiveBeginPlay(); // Function B_Grenade.B_Grenade_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2552560
	void Detonate(); // Function B_Grenade.B_Grenade_C.Detonate // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Grenade.B_Grenade_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2552560
	void PostLaunchCleanup(); // Function B_Grenade.B_Grenade_C.PostLaunchCleanup // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Destroy Grenade(struct UNiagaraComponent* PSystem); // Function B_Grenade.B_Grenade_C.Destroy Grenade // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void Teleport Grenade(struct FVector TeleportLocation, struct FVector TeleportForward); // Function B_Grenade.B_Grenade_C.Teleport Grenade // (BlueprintCallable|BlueprintEvent) // @ game+0x2552560
	void ExecuteUbergraph_B_Grenade(int32_t EntryPoint); // Function B_Grenade.B_Grenade_C.ExecuteUbergraph_B_Grenade // (Final|UbergraphFunction|HasDefaults) // @ game+0x2552560
};

