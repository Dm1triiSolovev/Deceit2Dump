// Enum DeceitCloud.EAuthStatus
enum class EAuthStatus : uint8 {
	Pending = 0,
	Failed = 1,
	Success = 2,
	EAuthStatus_MAX = 3
};

// ScriptStruct DeceitCloud.Lobby
// Size: 0x48 (Inherited: 0x00)
struct FLobby {
	struct FString LobbyId; // 0x00(0x10)
	struct FLobbyPlayer Owner; // 0x10(0x20)
	struct TArray<struct FLobbyPlayer> Players; // 0x30(0x10)
	bool Open; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct DeceitCloud.LobbyPlayer
// Size: 0x20 (Inherited: 0x00)
struct FLobbyPlayer {
	struct FString Name; // 0x00(0x10)
	struct FString Session; // 0x10(0x10)
};

// ScriptStruct DeceitCloud.QueuedGame
// Size: 0x18 (Inherited: 0x00)
struct FQueuedGame {
	struct FString Ip; // 0x00(0x10)
	int32_t Port; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DeceitCloud.AuthMessage
// Size: 0x30 (Inherited: 0x00)
struct FAuthMessage {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct DeceitCloud.GetLobbies
// Size: 0x10 (Inherited: 0x00)
struct FGetLobbies {
	struct TArray<struct FLobby> Lobbies; // 0x00(0x10)
};

// ScriptStruct DeceitCloud.RefreshLobby
// Size: 0x68 (Inherited: 0x00)
struct FRefreshLobby {
	struct FLobby Lobby; // 0x00(0x48)
	struct FQueuedGame QueuedGame; // 0x48(0x18)
	int32_t MinPlayers; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct DeceitCloud.LeaveLobbyResponse
// Size: 0x01 (Inherited: 0x00)
struct FLeaveLobbyResponse {
	bool Success; // 0x00(0x01)
};

// ScriptStruct DeceitCloud.StartGameResponse
// Size: 0x01 (Inherited: 0x00)
struct FStartGameResponse {
	bool Success; // 0x00(0x01)
};

// ScriptStruct DeceitCloud.KickPlayerResponse
// Size: 0x01 (Inherited: 0x00)
struct FKickPlayerResponse {
	bool Success; // 0x00(0x01)
};

// ScriptStruct DeceitCloud.LobbyVisibilityResponse
// Size: 0x48 (Inherited: 0x00)
struct FLobbyVisibilityResponse {
	struct FLobby Lobby; // 0x00(0x48)
};

