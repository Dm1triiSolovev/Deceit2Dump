// Class TypedElementRuntime.TypedElementAssetDataInterface
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementAssetDataInterface : UInterface {

	struct FAssetData GetAssetData(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3fd6f50
	struct TArray<struct FAssetData> GetAllReferencedAssetDatas(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fd6d50
};

// Class TypedElementRuntime.TypedElementHierarchyInterface
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementHierarchyInterface : UInterface {

	struct FScriptTypedElementHandle GetParentElement(struct FScriptTypedElementHandle& InElementHandle, bool bAllowCreate); // Function TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fd79b0
	void GetChildElements(struct FScriptTypedElementHandle& InElementHandle, struct TArray<struct FScriptTypedElementHandle>& OutElementHandles, bool bAllowCreate); // Function TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fd7240
};

// Class TypedElementRuntime.TypedElementObjectInterface
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementObjectInterface : UInterface {

	struct UObject* GetObjectClass(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementObjectInterface.GetObjectClass // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fd78e0
	struct UObject* GetObject(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementObjectInterface.GetObject // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fd7810
};

// Class TypedElementRuntime.TypedElementSelectionInterface
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementSelectionInterface : UInterface {

	bool SelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.SelectElement // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fd8710
	bool IsElementSelected(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet, struct FTypedElementIsSelectedOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fd8220
	struct FScriptTypedElementHandle GetSelectionElement(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InCurrentSelection, enum class ETypedElementSelectionMethod InSelectionMethod); // Function TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fd7c30
	bool DeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.DeselectElement // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fd67b0
	bool CanSelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fd6330
	bool CanDeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fd6100
	bool AllowSelectionModifiers(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet); // Function TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fd5ed0
};

// Class TypedElementRuntime.TypedElementSelectionSet
// Size: 0x898 (Inherited: 0x28)
struct UTypedElementSelectionSet : UObject {
	char pad_28[0x800]; // 0x28(0x800)
	struct FMulticastInlineDelegate OnPreSelectionChange; // 0x828(0x10)
	struct FMulticastInlineDelegate OnSelectionChange; // 0x838(0x10)
	char pad_848[0x50]; // 0x848(0x50)

	bool SetSelection(struct TArray<struct FScriptTypedElementHandle>& InElementHandles, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.SetSelection // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fd8cb0
	bool SelectElements(struct TArray<struct FScriptTypedElementHandle>& InElementHandles, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.SelectElements // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fd89e0
	bool SelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.SelectElement // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fd88d0
	void RestoreSelectionState(struct FTypedElementSelectionSetState& InSelectionState); // Function TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fd8630
	void OnPreChangeDynamic__DelegateSignature(struct UTypedElementSelectionSet* SelectionSet); // DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2552560
	void OnChangeDynamic__DelegateSignature(struct UTypedElementSelectionSet* SelectionSet); // DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2552560
	struct TArray<struct FScriptTypedElementHandle> K2_GetSelectedElementHandles(struct UInterface* InBaseInterfaceType); // Function TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x3fd84f0
	bool IsElementSelected(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementIsSelectedOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.IsElementSelected // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd83e0
	bool HasSelectedObjects(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x3fd8110
	bool HasSelectedElements(struct UInterface* InBaseInterfaceType); // Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x3fd8070
	struct UObject* GetTopSelectedObject(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd7f60
	struct FScriptTypedElementHandle GetSelectionElement(struct FScriptTypedElementHandle& InElementHandle, enum class ETypedElementSelectionMethod InSelectionMethod); // Function TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd7e20
	struct TArray<struct UObject*> GetSelectedObjects(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x3fd7ae0
	int32_t GetNumSelectedElements(); // Function TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd77e0
	struct FTypedElementSelectionSetState GetCurrentSelectionState(); // Function TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd73e0
	struct UObject* GetBottomSelectedObject(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd7130
	bool DeselectElements(struct TArray<struct FScriptTypedElementHandle>& InElementHandles, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.DeselectElements // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fd6a80
	bool DeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.DeselectElement // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3fd6970
	int32_t CountSelectedObjects(struct UObject* InRequiredClass); // Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x3fd66b0
	int32_t CountSelectedElements(struct UInterface* InBaseInterfaceType); // Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x3fd6610
	bool ClearSelection(struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x3fd6560
	bool CanSelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.CanSelectElement // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd6450
	bool CanDeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd6220
	bool AllowSelectionModifiers(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd6040
};

// Class TypedElementRuntime.TypedElementSelectionSetLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTypedElementSelectionSetLibrary : UObject {

	bool SetSelectionFromList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionOptions SelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fd8e00
	bool SelectElementsFromList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionOptions SelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fd8b30
	struct FScriptTypedElementListProxy GetNormalizedSelection(struct UTypedElementSelectionSet* SelectionSet, struct FTypedElementSelectionNormalizationOptions NormalizationOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3fd76b0
	struct FScriptTypedElementListProxy GetNormalizedElementList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionNormalizationOptions NormalizationOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3fd74e0
	bool DeselectElementsFromList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionOptions SelectionOptions); // Function TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fd6bd0
};

