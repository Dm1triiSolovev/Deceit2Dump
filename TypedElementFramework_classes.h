// Class TypedElementFramework.TypedElementCounterInterface
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementCounterInterface : UInterface {
};

// Class TypedElementFramework.TestTypedElementInterfaceA
// Size: 0x28 (Inherited: 0x28)
struct UTestTypedElementInterfaceA : UInterface {

	bool SetDisplayName(struct FScriptTypedElementHandle& InElementHandle, struct FText InNewName, bool bNotify); // Function TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bcae50
	struct FText GetDisplayName(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bc9870
};

// Class TypedElementFramework.TestTypedElementInterfaceB
// Size: 0x28 (Inherited: 0x28)
struct UTestTypedElementInterfaceB : UInterface {

	bool MarkAsTested(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bca040
};

// Class TypedElementFramework.TestTypedElementInterfaceC
// Size: 0x28 (Inherited: 0x28)
struct UTestTypedElementInterfaceC : UInterface {

	bool GetIsTested(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementFramework.TestTypedElementInterfaceC.GetIsTested // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bca040
};

// Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
// Size: 0x30 (Inherited: 0x28)
struct UTestTypedElementInterfaceA_ImplTyped : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
// Size: 0x30 (Inherited: 0x28)
struct UTestTypedElementInterfaceA_ImplUntyped : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
// Size: 0x38 (Inherited: 0x28)
struct UTestTypedElementInterfaceBAndC_Typed : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class TypedElementFramework.TypedElementHandleLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementHandleLibrary : UObject {

	void Release(struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementHandleLibrary.Release // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3bca980
	bool NotEqual(struct FScriptTypedElementHandle& LHS, struct FScriptTypedElementHandle& RHS); // Function TypedElementFramework.TypedElementHandleLibrary.NotEqual // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bca6f0
	bool IsSet(struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementHandleLibrary.IsSet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bca470
	bool Equal(struct FScriptTypedElementHandle& LHS, struct FScriptTypedElementHandle& RHS); // Function TypedElementFramework.TypedElementHandleLibrary.Equal // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bc9740
};

// Class TypedElementFramework.TypedElementListLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementListLibrary : UObject {

	void Shrink(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Shrink // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bcb010
	void Reset(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Reset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bcad70
	void Reserve(struct FScriptTypedElementListProxy ElementList, int32_t Size); // Function TypedElementFramework.TypedElementListLibrary.Reserve // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bcac50
	bool Remove(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementListLibrary.Remove // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3bcaa50
	int32_t Num(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Num // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bca820
	bool IsValidIndex(struct FScriptTypedElementListProxy ElementList, int32_t Index); // Function TypedElementFramework.TypedElementListLibrary.IsValidIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bca530
	bool HasElementsOfType(struct FScriptTypedElementListProxy ElementList, struct FName ElementTypeName); // Function TypedElementFramework.TypedElementListLibrary.HasElementsOfType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bca2c0
	bool HasElements(struct FScriptTypedElementListProxy ElementList, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.HasElements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bca110
	struct UObject* GetElementInterface(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.GetElementInterface // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bc9ce0
	struct TArray<struct FScriptTypedElementHandle> GetElementHandles(struct FScriptTypedElementListProxy ElementList, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.GetElementHandles // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bc9b00
	struct FScriptTypedElementHandle GetElementHandleAt(struct FScriptTypedElementListProxy ElementList, int32_t Index); // Function TypedElementFramework.TypedElementListLibrary.GetElementHandleAt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bc99a0
	void Empty(struct FScriptTypedElementListProxy ElementList, int32_t Slack); // Function TypedElementFramework.TypedElementListLibrary.Empty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bc9620
	struct FScriptTypedElementListProxy CreateScriptElementList(struct UTypedElementRegistry* Registry); // Function TypedElementFramework.TypedElementListLibrary.CreateScriptElementList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bc94d0
	int32_t CountElementsOfType(struct FScriptTypedElementListProxy ElementList, struct FName ElementTypeName); // Function TypedElementFramework.TypedElementListLibrary.CountElementsOfType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bc9330
	int32_t CountElements(struct FScriptTypedElementListProxy ElementList, struct UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.CountElements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bc9180
	bool Contains(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementListLibrary.Contains // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bc8f80
	struct FScriptTypedElementListProxy Clone(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Clone // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bc8e40
	void AppendList(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementListProxy OtherElementList); // Function TypedElementFramework.TypedElementListLibrary.AppendList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bc8cc0
	void Append(struct FScriptTypedElementListProxy ElementList, struct TArray<struct FScriptTypedElementHandle>& ElementHandles); // Function TypedElementFramework.TypedElementListLibrary.Append // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3bc8b40
	bool Add(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementListLibrary.Add // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3bc8930
};

// Class TypedElementFramework.TypedElementRegistry
// Size: 0x948 (Inherited: 0x28)
struct UTypedElementRegistry : UObject {
	char pad_28[0x920]; // 0x28(0x920)

	struct UTypedElementRegistry* GetInstance(); // Function TypedElementFramework.TypedElementRegistry.GetInstance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bca010
	struct UObject* GetElementInterface(struct FScriptTypedElementHandle& InElementHandle, struct UInterface* InBaseInterfaceType); // Function TypedElementFramework.TypedElementRegistry.GetElementInterface // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bc9ef0
};

