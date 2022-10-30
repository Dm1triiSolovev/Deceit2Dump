// Enum CommonUser.ECommonUserAvailability
enum class ECommonUserAvailability : uint8 {
	Unknown = 0,
	NowAvailable = 1,
	PossiblyAvailable = 2,
	CurrentlyUnavailable = 3,
	AlwaysUnavailable = 4,
	Invalid = 5,
	ECommonUserAvailability_MAX = 6
};

// Enum CommonUser.ECommonUserPrivilege
enum class ECommonUserPrivilege : uint8 {
	CanPlay = 0,
	CanPlayOnline = 1,
	CanCommunicateViaTextOnline = 2,
	CanCommunicateViaVoiceOnline = 3,
	CanUseUserGeneratedContent = 4,
	CanUseCrossPlay = 5,
	Invalid_Count = 6,
	ECommonUserPrivilege_MAX = 7
};

// Enum CommonUser.ECommonUserOnlineContext
enum class ECommonUserOnlineContext : uint8 {
	Game = 0,
	Default = 1,
	Service = 2,
	ServiceOrDefault = 3,
	Platform = 4,
	PlatformOrDefault = 5,
	Invalid = 6,
	ECommonUserOnlineContext_MAX = 7
};

// Enum CommonUser.ECommonSessionOnlineMode
enum class ECommonSessionOnlineMode : uint8 {
	Offline = 0,
	LAN = 1,
	Online = 2,
	ECommonSessionOnlineMode_MAX = 3
};

// Enum CommonUser.ECommonUserInitializationState
enum class ECommonUserInitializationState : uint8 {
	Unknown = 0,
	DoingInitialLogin = 1,
	DoingNetworkLogin = 2,
	FailedtoLogin = 3,
	LoggedInOnline = 4,
	LoggedInLocalOnly = 5,
	Invalid = 6,
	ECommonUserInitializationState_MAX = 7
};

// Enum CommonUser.ECommonUserPrivilegeResult
enum class ECommonUserPrivilegeResult : uint8 {
	Unknown = 0,
	Available = 1,
	UserNotLoggedIn = 2,
	LicenseInvalid = 3,
	VersionOutdated = 4,
	NetworkConnectionUnavailable = 5,
	AgeRestricted = 6,
	AccountTypeRestricted = 7,
	AccountUseRestricted = 8,
	PlatformFailure = 9,
	ECommonUserPrivilegeResult_MAX = 10
};

// ScriptStruct CommonUser.CommonUserInitializeParams
// Size: 0x24 (Inherited: 0x00)
struct FCommonUserInitializeParams {
	int32_t LocalPlayerIndex; // 0x00(0x04)
	int32_t ControllerId; // 0x04(0x04)
	int32_t PlatformUserIndex; // 0x08(0x04)
	enum class ECommonUserPrivilege RequestedPrivilege; // 0x0c(0x01)
	enum class ECommonUserOnlineContext OnlineContext; // 0x0d(0x01)
	bool bCanCreateNewLocalPlayer; // 0x0e(0x01)
	bool bCanUseGuestLogin; // 0x0f(0x01)
	bool bSuppressLoginErrors; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FDelegate OnUserInitializeComplete; // 0x14(0x10)
};

