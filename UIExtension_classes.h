// Class UIExtension.UIExtensionPointWidget
// Size: 0x2a8 (Inherited: 0x208)
struct UUIExtensionPointWidget : UDynamicEntryBoxBase {
	struct FGameplayTag ExtensionPointTag; // 0x208(0x08)
	enum class EUIExtensionPointMatch ExtensionPointTagMatch; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct TArray<ClassPtrProperty> DataClasses; // 0x218(0x10)
	struct FDelegate GetWidgetClassForData; // 0x228(0x10)
	struct FDelegate ConfigureWidgetForData; // 0x238(0x10)
	char pad_248[0x10]; // 0x248(0x10)
	struct TMap<struct FUIExtensionHandle, struct UUserWidget*> ExtensionMapping; // 0x258(0x50)
};

// Class UIExtension.UIExtensionSubsystem
// Size: 0xd0 (Inherited: 0x30)
struct UUIExtensionSubsystem : UWorldSubsystem {
	char pad_30[0xa0]; // 0x30(0xa0)

	void UnregisterExtensionPoint(struct FUIExtensionPointHandle& ExtensionPointHandle); // Function UIExtension.UIExtensionSubsystem.UnregisterExtensionPoint // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1234a10
	void UnregisterExtension(struct FUIExtensionHandle& ExtensionHandle); // Function UIExtension.UIExtensionSubsystem.UnregisterExtension // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1234930
	struct FUIExtensionPointHandle K2_RegisterExtensionPoint(struct FGameplayTag ExtensionPointTag, enum class EUIExtensionPointMatch ExtensionPointTagMatchType, struct TArray<struct UObject*>& AllowedDataClasses, struct FDelegate ExtensionCallback); // Function UIExtension.UIExtensionSubsystem.K2_RegisterExtensionPoint // (Final|BlueprintCosmetic|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x1234590
	struct FUIExtensionHandle K2_RegisterExtensionAsWidgetForContext(struct FGameplayTag ExtensionPointTag, struct UUserWidget* WidgetClass, struct UObject* ContextObject, int32_t Priority); // Function UIExtension.UIExtensionSubsystem.K2_RegisterExtensionAsWidgetForContext // (Final|BlueprintCosmetic|Native|Protected|BlueprintCallable) // @ game+0x12343b0
	struct FUIExtensionHandle K2_RegisterExtensionAsWidget(struct FGameplayTag ExtensionPointTag, struct UUserWidget* WidgetClass, int32_t Priority); // Function UIExtension.UIExtensionSubsystem.K2_RegisterExtensionAsWidget // (Final|BlueprintCosmetic|Native|Protected|BlueprintCallable) // @ game+0x1234220
	struct FUIExtensionHandle K2_RegisterExtensionAsDataForContext(struct FGameplayTag ExtensionPointTag, struct UObject* ContextObject, struct UObject* Data, int32_t Priority); // Function UIExtension.UIExtensionSubsystem.K2_RegisterExtensionAsDataForContext // (Final|BlueprintCosmetic|Native|Protected|BlueprintCallable) // @ game+0x1234040
	struct FUIExtensionHandle K2_RegisterExtensionAsData(struct FGameplayTag ExtensionPointTag, struct UObject* Data, int32_t Priority); // Function UIExtension.UIExtensionSubsystem.K2_RegisterExtensionAsData // (Final|BlueprintCosmetic|Native|Protected|BlueprintCallable) // @ game+0x1233eb0
};

// Class UIExtension.UIExtensionHandleFunctions
// Size: 0x28 (Inherited: 0x28)
struct UUIExtensionHandleFunctions : UBlueprintFunctionLibrary {

	void Unregister(struct FUIExtensionHandle& Handle); // Function UIExtension.UIExtensionHandleFunctions.Unregister // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1234790
	bool IsValid(struct FUIExtensionHandle& Handle); // Function UIExtension.UIExtensionHandleFunctions.IsValid // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1233dd0
};

// Class UIExtension.UIExtensionPointHandleFunctions
// Size: 0x28 (Inherited: 0x28)
struct UUIExtensionPointHandleFunctions : UBlueprintFunctionLibrary {

	void Unregister(struct FUIExtensionPointHandle& Handle); // Function UIExtension.UIExtensionPointHandleFunctions.Unregister // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1234860
	bool IsValid(struct FUIExtensionPointHandle& Handle); // Function UIExtension.UIExtensionPointHandleFunctions.IsValid // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1233dd0
};

