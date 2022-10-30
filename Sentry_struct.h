// Enum Sentry.ESentryLevel
enum class ESentryLevel : uint8 {
	Debug = 0,
	Info = 1,
	Warning = 2,
	Error = 3,
	Fatal = 4,
	ESentryLevel_MAX = 5
};

// ScriptStruct Sentry.AutomaticBreadcrumbs
// Size: 0x05 (Inherited: 0x00)
struct FAutomaticBreadcrumbs {
	bool bOnMapLoadingStarted; // 0x00(0x01)
	bool bOnMapLoaded; // 0x01(0x01)
	bool bOnGameStateClassChanged; // 0x02(0x01)
	bool bOnGameSessionIDChanged; // 0x03(0x01)
	bool bOnUserActivityStringChanged; // 0x04(0x01)
};

