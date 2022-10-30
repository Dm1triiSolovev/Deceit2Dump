// Class Lobby.LobbyBeaconClient
// Size: 0x390 (Inherited: 0x308)
struct ALobbyBeaconClient : AOnlineBeaconClient {
	struct ALobbyBeaconState* LobbyState; // 0x308(0x08)
	struct ALobbyBeaconPlayerState* PlayerState; // 0x310(0x08)
	char pad_318[0x1]; // 0x318(0x01)
	enum class ELobbyBeaconJoinState LobbyJoinServerState; // 0x319(0x01)
	char pad_31A[0x76]; // 0x31a(0x76)

	void ServerSetPartyOwner(struct FUniqueNetIdRepl InUniqueId, struct FUniqueNetIdRepl InPartyOwnerId); // Function Lobby.LobbyBeaconClient.ServerSetPartyOwner // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xfd10e0
	void ServerNotifyJoiningServer(); // Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xfd1090
	void ServerLoginPlayer(struct FString InSessionId, struct FUniqueNetIdRepl InUniqueId, struct FString UrlString); // Function Lobby.LobbyBeaconClient.ServerLoginPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xfd0e90
	void ServerKickPlayer(struct FUniqueNetIdRepl PlayerToKick, struct FText Reason); // Function Lobby.LobbyBeaconClient.ServerKickPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xfd0ca0
	void ServerDisconnectFromLobby(); // Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xfd0c50
	void ServerCheat(struct FString Msg); // Function Lobby.LobbyBeaconClient.ServerCheat // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xfd0b90
	void ClientWasKicked(struct FText KickReason); // Function Lobby.LobbyBeaconClient.ClientWasKicked // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xfd0a30
	void ClientSetInviteFlags(struct FJoinabilitySettings Settings); // Function Lobby.LobbyBeaconClient.ClientSetInviteFlags // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xfd0990
	void ClientPlayerLeft(struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerLeft // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xfd0850
	void ClientPlayerJoined(struct FText NewPlayerName, struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerJoined // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xfd0690
	void ClientLoginComplete(struct FUniqueNetIdRepl InUniqueId, bool bWasSuccessful); // Function Lobby.LobbyBeaconClient.ClientLoginComplete // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xfd0500
	void ClientJoinGame(); // Function Lobby.LobbyBeaconClient.ClientJoinGame // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xfd04e0
	void ClientAckJoiningServer(); // Function Lobby.LobbyBeaconClient.ClientAckJoiningServer // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xfd04c0
};

// Class Lobby.LobbyBeaconHost
// Size: 0x2d8 (Inherited: 0x2a0)
struct ALobbyBeaconHost : AOnlineBeaconHostObject {
	char pad_2A0[0x8]; // 0x2a0(0x08)
	struct TSoftClassPtr<UObject> LobbyStateClass; // 0x2a8(0x28)
	struct ALobbyBeaconState* LobbyState; // 0x2d0(0x08)
};

// Class Lobby.LobbyBeaconPlayerState
// Size: 0x348 (Inherited: 0x278)
struct ALobbyBeaconPlayerState : AInfo {
	struct FText DisplayName; // 0x278(0x18)
	struct FUniqueNetIdRepl UniqueId; // 0x290(0x30)
	struct FUniqueNetIdRepl PartyOwnerUniqueId; // 0x2c0(0x30)
	bool bInLobby; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct AOnlineBeaconClient* ClientActor; // 0x2f8(0x08)
	char pad_300[0x48]; // 0x300(0x48)

	void OnRep_UniqueId(); // Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId // (Final|Native|Protected) // @ game+0xfd0b50
	void OnRep_PartyOwner(); // Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner // (Final|Native|Protected) // @ game+0xfd0b30
	void OnRep_InLobby(); // Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby // (Final|Native|Protected) // @ game+0xfd0af0
};

// Class Lobby.LobbyBeaconState
// Size: 0x420 (Inherited: 0x278)
struct ALobbyBeaconState : AInfo {
	int32_t MaxPlayers; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct ALobbyBeaconPlayerState* LobbyBeaconPlayerStateClass; // 0x280(0x08)
	char pad_288[0x8]; // 0x288(0x08)
	bool bLobbyStarted; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float WaitForPlayersTimeRemaining; // 0x294(0x04)
	struct FLobbyPlayerStateInfoArray Players; // 0x298(0x120)
	char pad_3B8[0x68]; // 0x3b8(0x68)

	void OnRep_WaitForPlayersTimeRemaining(); // Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining // (Final|Native|Protected) // @ game+0xfd0b70
	void OnRep_LobbyStarted(); // Function Lobby.LobbyBeaconState.OnRep_LobbyStarted // (Final|Native|Protected) // @ game+0xfd0b10
};

