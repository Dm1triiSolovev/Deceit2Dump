// Class SlateCore.FontBulkData
// Size: 0x78 (Inherited: 0x28)
struct UFontBulkData : UObject {
	char pad_28[0x50]; // 0x28(0x50)
};

// Class SlateCore.FontFaceInterface
// Size: 0x28 (Inherited: 0x28)
struct UFontFaceInterface : UInterface {
};

// Class SlateCore.FontProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UFontProviderInterface : UInterface {
};

// Class SlateCore.SlateTypes
// Size: 0x28 (Inherited: 0x28)
struct USlateTypes : UObject {
};

// Class SlateCore.SlateWidgetStyleAsset
// Size: 0x30 (Inherited: 0x28)
struct USlateWidgetStyleAsset : UObject {
	struct USlateWidgetStyleContainerBase* CustomStyle; // 0x28(0x08)
};

// Class SlateCore.SlateWidgetStyleContainerBase
// Size: 0x30 (Inherited: 0x28)
struct USlateWidgetStyleContainerBase : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class SlateCore.SlateWidgetStyleContainerInterface
// Size: 0x28 (Inherited: 0x28)
struct USlateWidgetStyleContainerInterface : UInterface {
};

// Class SlateCore.SlateThemeManager
// Size: 0x9c0 (Inherited: 0x28)
struct USlateThemeManager : UObject {
	struct FGuid CurrentThemeId; // 0x28(0x10)
	struct FStyleColorList ActiveColors; // 0x38(0x988)
};

