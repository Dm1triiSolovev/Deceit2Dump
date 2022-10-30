// Class DeceitCloud.CloudClient
// Size: 0x98 (Inherited: 0x28)
struct UCloudClient : UObject {
	struct FMulticastInlineDelegate AuthCompleteDelegate; // 0x28(0x10)
	struct FGuid SessionGuid; // 0x38(0x10)
	struct ULobbyClient* LobbyClient; // 0x48(0x08)
	enum class EAuthStatus AuthStatus; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString BaseUrl; // 0x58(0x10)
	char pad_68[0x30]; // 0x68(0x30)

	void SendStopQueuing(struct FDelegate OnSuccess, struct FDelegate OnError); // Function DeceitCloud.CloudClient.SendStopQueuing // (Final|Native|Public|BlueprintCallable) // @ game+0x1e21760
	void SendStartMatchmaking(struct FDelegate OnSuccess, struct FDelegate OnError); // Function DeceitCloud.CloudClient.SendStartMatchmaking // (Final|Native|Public|BlueprintCallable) // @ game+0x1e21660
	void SendQueueStatus(struct FDelegate QueuePopped, struct FDelegate QueueStatus, struct FDelegate OnError); // Function DeceitCloud.CloudClient.SendQueueStatus // (Final|Native|Public|BlueprintCallable) // @ game+0x1e21500
	void HandleQueueStatus(struct FString ResponseContent); // Function DeceitCloud.CloudClient.HandleQueueStatus // (Final|Native|Public) // @ game+0x1e211b0
};

// Class DeceitCloud.LobbyWrapper
// Size: 0x70 (Inherited: 0x28)
struct ULobbyWrapper : UObject {
	struct FLobby Lobby; // 0x28(0x48)
};

// Class DeceitCloud.LobbyClient
// Size: 0xa0 (Inherited: 0x28)
struct ULobbyClient : UObject {
	struct FMulticastInlineDelegate PublicLobbiesUpdated; // 0x28(0x10)
	struct FMulticastInlineDelegate LobbyJoined; // 0x38(0x10)
	struct FMulticastInlineDelegate LobbyUpdated; // 0x48(0x10)
	struct FMulticastInlineDelegate LobbyError; // 0x58(0x10)
	struct FMulticastInlineDelegate LobbyLeft; // 0x68(0x10)
	struct FMulticastInlineDelegate LobbyStartGame; // 0x78(0x10)
	struct FMulticastInlineDelegate LobbyVisibility; // 0x88(0x10)
	struct UCloudClient* CloudClient; // 0x98(0x08)

	bool ToggleVisibility(); // Function DeceitCloud.LobbyClient.ToggleVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x1e21890
	bool StartGame(); // Function DeceitCloud.LobbyClient.StartGame // (Final|Native|Public|BlueprintCallable) // @ game+0x1e21860
	bool RefreshLobby(); // Function DeceitCloud.LobbyClient.RefreshLobby // (Final|Native|Public|BlueprintCallable) // @ game+0x1e214d0
	bool LeaveLobby(); // Function DeceitCloud.LobbyClient.LeaveLobby // (Final|Native|Public|BlueprintCallable) // @ game+0x1e214a0
	bool KickPlayer(struct FString KickPlayerSession); // Function DeceitCloud.LobbyClient.KickPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x1e213a0
	bool JoinLobby(struct FString LobbyId); // Function DeceitCloud.LobbyClient.JoinLobby // (Final|Native|Public|BlueprintCallable) // @ game+0x1e212a0
	bool GetPublicLobbies(); // Function DeceitCloud.LobbyClient.GetPublicLobbies // (Final|Native|Public|BlueprintCallable) // @ game+0x1e21180
	bool CreateLobby(bool Open); // Function DeceitCloud.LobbyClient.CreateLobby // (Final|Native|Public|BlueprintCallable) // @ game+0x1e210e0
	void CopyID(struct FLobby& Lobby); // Function DeceitCloud.LobbyClient.CopyID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1e20fb0
};

