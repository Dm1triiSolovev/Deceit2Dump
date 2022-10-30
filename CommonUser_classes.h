// Class CommonUser.AsyncAction_CommonUserInitialize
// Size: 0x70 (Inherited: 0x30)
struct UAsyncAction_CommonUserInitialize : UCancellableAsyncAction {
	struct FMulticastInlineDelegate OnInitializationComplete; // 0x30(0x10)
	char pad_40[0x30]; // 0x40(0x30)

	struct UAsyncAction_CommonUserInitialize* LoginForOnlinePlay(struct UCommonUserSubsystem* Target, int32_t LocalPlayerIndex); // Function CommonUser.AsyncAction_CommonUserInitialize.LoginForOnlinePlay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xea8600
	struct UAsyncAction_CommonUserInitialize* InitializeForLocalPlay(struct UCommonUserSubsystem* Target, int32_t LocalPlayerIndex, int32_t ControllerId, bool bCanUseGuestLogin); // Function CommonUser.AsyncAction_CommonUserInitialize.InitializeForLocalPlay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xea80e0
	void HandleInitializationComplete(struct UCommonUserInfo* UserInfo, bool bSuccess, struct FText Error, enum class ECommonUserPrivilege RequestedPrivilege, enum class ECommonUserOnlineContext OnlineContext); // Function CommonUser.AsyncAction_CommonUserInitialize.HandleInitializationComplete // (Native|Public) // @ game+0xea7d10
};

// Class CommonUser.CommonSession_HostSessionRequest
// Size: 0xa8 (Inherited: 0x28)
struct UCommonSession_HostSessionRequest : UObject {
	enum class ECommonSessionOnlineMode OnlineMode; // 0x28(0x01)
	bool bUseLobbies; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FString ModeNameForAdvertisement; // 0x30(0x10)
	struct FPrimaryAssetId MapID; // 0x40(0x10)
	struct TMap<struct FString, struct FString> ExtraArgs; // 0x50(0x50)
	int32_t MaxPlayerCount; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class CommonUser.CommonSession_SearchResult
// Size: 0x130 (Inherited: 0x28)
struct UCommonSession_SearchResult : UObject {
	char pad_28[0x108]; // 0x28(0x108)

	void GetStringSetting(struct FName Key, struct FString& Value, bool& bFoundValue); // Function CommonUser.CommonSession_SearchResult.GetStringSetting // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xea78b0
	int32_t GetPingInMs(); // Function CommonUser.CommonSession_SearchResult.GetPingInMs // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xea77f0
	int32_t GetNumOpenPublicConnections(); // Function CommonUser.CommonSession_SearchResult.GetNumOpenPublicConnections // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xea77c0
	int32_t GetNumOpenPrivateConnections(); // Function CommonUser.CommonSession_SearchResult.GetNumOpenPrivateConnections // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xea7790
	int32_t GetMaxPublicConnections(); // Function CommonUser.CommonSession_SearchResult.GetMaxPublicConnections // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xea7520
	void GetIntSetting(struct FName Key, int32_t& Value, bool& bFoundValue); // Function CommonUser.CommonSession_SearchResult.GetIntSetting // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xea7330
	struct FString GetDescription(); // Function CommonUser.CommonSession_SearchResult.GetDescription // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xea72b0
};

// Class CommonUser.CommonSession_SearchSessionRequest
// Size: 0x68 (Inherited: 0x28)
struct UCommonSession_SearchSessionRequest : UObject {
	enum class ECommonSessionOnlineMode OnlineMode; // 0x28(0x01)
	bool bUseLobbies; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct TArray<struct UCommonSession_SearchResult*> Results; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)
	struct FMulticastInlineDelegate K2_OnSearchFinished; // 0x58(0x10)
};

// Class CommonUser.CommonSessionSubsystem
// Size: 0x68 (Inherited: 0x30)
struct UCommonSessionSubsystem : UGameInstanceSubsystem {
	char pad_30[0x38]; // 0x30(0x38)

	void QuickPlaySession(struct APlayerController* JoiningOrHostingPlayer, struct UCommonSession_HostSessionRequest* Request); // Function CommonUser.CommonSessionSubsystem.QuickPlaySession // (Native|Public|BlueprintCallable) // @ game+0xea86d0
	void JoinSession(struct APlayerController* JoiningPlayer, struct UCommonSession_SearchResult* Request); // Function CommonUser.CommonSessionSubsystem.JoinSession // (Native|Public|BlueprintCallable) // @ game+0xea8230
	void HostSession(struct APlayerController* HostingPlayer, struct UCommonSession_HostSessionRequest* Request); // Function CommonUser.CommonSessionSubsystem.HostSession // (Native|Public|BlueprintCallable) // @ game+0xea8010
	void FindSessions(struct APlayerController* SearchingPlayer, struct UCommonSession_SearchSessionRequest* Request); // Function CommonUser.CommonSessionSubsystem.FindSessions // (Native|Public|BlueprintCallable) // @ game+0xea7090
	struct UCommonSession_SearchSessionRequest* CreateOnlineSearchSessionRequest(); // Function CommonUser.CommonSessionSubsystem.CreateOnlineSearchSessionRequest // (Native|Public|BlueprintCallable) // @ game+0xea7060
	struct UCommonSession_HostSessionRequest* CreateOnlineHostSessionRequest(); // Function CommonUser.CommonSessionSubsystem.CreateOnlineHostSessionRequest // (Native|Public|BlueprintCallable) // @ game+0xea7030
	void CleanUpSessions(); // Function CommonUser.CommonSessionSubsystem.CleanUpSessions // (Native|Public|BlueprintCallable) // @ game+0xacd670
};

// Class CommonUser.CommonUserInfo
// Size: 0x88 (Inherited: 0x28)
struct UCommonUserInfo : UObject {
	int32_t PrimaryControllerId; // 0x28(0x04)
	int32_t PlatformUserIndex; // 0x2c(0x04)
	int32_t LocalPlayerIndex; // 0x30(0x04)
	bool bCanBeGuest; // 0x34(0x01)
	bool bIsGuest; // 0x35(0x01)
	enum class ECommonUserInitializationState InitializationState; // 0x36(0x01)
	char pad_37[0x51]; // 0x37(0x51)

	enum class ECommonUserAvailability GetPrivilegeAvailability(enum class ECommonUserPrivilege Privilege); // Function CommonUser.CommonUserInfo.GetPrivilegeAvailability // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xea7820
	struct FString GetNickname(); // Function CommonUser.CommonUserInfo.GetNickname // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xea76e0
	struct FUniqueNetIdRepl GetNetId(enum class ECommonUserOnlineContext Context); // Function CommonUser.CommonUserInfo.GetNetId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xea7550
	struct FString GetDebugString(); // Function CommonUser.CommonUserInfo.GetDebugString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xea7230
	enum class ECommonUserPrivilegeResult GetCachedPrivilegeResult(enum class ECommonUserPrivilege Privilege, enum class ECommonUserOnlineContext Context); // Function CommonUser.CommonUserInfo.GetCachedPrivilegeResult // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xea7160
};

// Class CommonUser.CommonUserSubsystem
// Size: 0x150 (Inherited: 0x30)
struct UCommonUserSubsystem : UGameInstanceSubsystem {
	struct FMulticastInlineDelegate OnUserInitializeComplete; // 0x30(0x10)
	struct FMulticastInlineDelegate OnHandleSystemMessage; // 0x40(0x10)
	struct FMulticastInlineDelegate OnUserPrivilegeChanged; // 0x50(0x10)
	char pad_60[0x68]; // 0x60(0x68)
	struct TMap<int32_t, struct UCommonUserInfo*> LocalUserInfos; // 0xc8(0x50)
	char pad_118[0x38]; // 0x118(0x38)

	bool TryToLoginForOnlinePlay(int32_t LocalPlayerIndex); // Function CommonUser.CommonUserSubsystem.TryToLoginForOnlinePlay // (Native|Public|BlueprintCallable) // @ game+0xea8c60
	bool TryToInitializeUser(struct FCommonUserInitializeParams Params); // Function CommonUser.CommonUserSubsystem.TryToInitializeUser // (Native|Public|BlueprintCallable) // @ game+0xea8b80
	bool TryToInitializeForLocalPlay(int32_t LocalPlayerIndex, int32_t ControllerId, bool bCanUseGuestLogin); // Function CommonUser.CommonUserSubsystem.TryToInitializeForLocalPlay // (Native|Public|BlueprintCallable) // @ game+0xea8a60
	bool ShouldWaitForStartInput(); // Function CommonUser.CommonUserSubsystem.ShouldWaitForStartInput // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xea8a30
	void SetMaxLocalPlayers(int32_t InMaxLocalPLayers); // Function CommonUser.CommonUserSubsystem.SetMaxLocalPlayers // (Native|Public|BlueprintCallable) // @ game+0xea89a0
	void SendSystemMessage(struct FGameplayTag MessageType, struct FText TitleText, struct FText BodyText); // Function CommonUser.CommonUserSubsystem.SendSystemMessage // (Native|Public|BlueprintCallable) // @ game+0xea87c0
	void ResetUserState(); // Function CommonUser.CommonUserSubsystem.ResetUserState // (Native|Public|BlueprintCallable) // @ game+0xea87a0
	void ListenForLoginKeyInput(struct TArray<struct FKey> AnyUserKeys, struct TArray<struct FKey> NewUserKeys, struct FCommonUserInitializeParams Params); // Function CommonUser.CommonUserSubsystem.ListenForLoginKeyInput // (Native|Public|BlueprintCallable) // @ game+0xea8300
	bool HasTraitTag(struct FGameplayTag TraitTag); // Function CommonUser.CommonUserSubsystem.HasTraitTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xea7f00
	struct UCommonUserInfo* GetUserInfoForUniqueNetId(struct FUniqueNetIdRepl& NetId); // Function CommonUser.CommonUserSubsystem.GetUserInfoForUniqueNetId // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0xea7bd0
	struct UCommonUserInfo* GetUserInfoForPlatformUserIndex(int32_t PlatformUserIndex); // Function CommonUser.CommonUserSubsystem.GetUserInfoForPlatformUserIndex // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xea7b30
	struct UCommonUserInfo* GetUserInfoForLocalPlayerIndex(int32_t LocalPlayerIndex); // Function CommonUser.CommonUserSubsystem.GetUserInfoForLocalPlayerIndex // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xea7a90
	struct UCommonUserInfo* GetUserInfoForControllerId(int32_t ControllerId); // Function CommonUser.CommonUserSubsystem.GetUserInfoForControllerId // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xea79f0
	int32_t GetNumLocalPlayers(); // Function CommonUser.CommonUserSubsystem.GetNumLocalPlayers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xea7760
	int32_t GetMaxLocalPlayers(); // Function CommonUser.CommonUserSubsystem.GetMaxLocalPlayers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xea74f0
	enum class ECommonUserInitializationState GetLocalPlayerInitializationState(int32_t LocalPlayerIndex); // Function CommonUser.CommonUserSubsystem.GetLocalPlayerInitializationState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xea7450
	bool CancelUserInitialization(int32_t LocalPlayerIndex); // Function CommonUser.CommonUserSubsystem.CancelUserInitialization // (Native|Public|BlueprintCallable) // @ game+0xea6f90
};

