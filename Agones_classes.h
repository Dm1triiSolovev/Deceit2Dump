// Class Agones.AgonesComponent
// Size: 0x120 (Inherited: 0xb0)
struct UAgonesComponent : UActorComponent {
	struct FString HttpPort; // 0xb0(0x10)
	float HealthRateSeconds; // 0xc0(0x04)
	bool bDisableAutoConnect; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	struct FMulticastInlineDelegate ConnectedDelegate; // 0xc8(0x10)
	char pad_D8[0x48]; // 0xd8(0x48)

	void WatchGameServer(struct FDelegate WatchDelegate); // Function Agones.AgonesComponent.WatchGameServer // (Final|Native|Public|BlueprintCallable) // @ game+0x1e165c0
	void Shutdown(struct FDelegate SuccessDelegate, struct FDelegate ErrorDelegate); // Function Agones.AgonesComponent.Shutdown // (Final|Native|Public|BlueprintCallable) // @ game+0x1e164c0
	void SetPlayerCapacity(int64_t Count, struct FDelegate SuccessDelegate, struct FDelegate ErrorDelegate); // Function Agones.AgonesComponent.SetPlayerCapacity // (Final|Native|Public|BlueprintCallable) // @ game+0x1e16380
	void SetLabel(struct FString Key, struct FString Value, struct FDelegate SuccessDelegate, struct FDelegate ErrorDelegate); // Function Agones.AgonesComponent.SetLabel // (Final|Native|Public|BlueprintCallable) // @ game+0x1e161d0
	void SetAnnotation(struct FString Key, struct FString Value, struct FDelegate SuccessDelegate, struct FDelegate ErrorDelegate); // Function Agones.AgonesComponent.SetAnnotation // (Final|Native|Public|BlueprintCallable) // @ game+0x1e16020
	void Reserve(int64_t Seconds, struct FDelegate SuccessDelegate, struct FDelegate ErrorDelegate); // Function Agones.AgonesComponent.Reserve // (Final|Native|Public|BlueprintCallable) // @ game+0x1e15ee0
	void Ready(struct FDelegate SuccessDelegate, struct FDelegate ErrorDelegate); // Function Agones.AgonesComponent.Ready // (Final|Native|Public|BlueprintCallable) // @ game+0x1e15de0
	void PlayerDisconnect(struct FString PlayerID, struct FDelegate SuccessDelegate, struct FDelegate ErrorDelegate); // Function Agones.AgonesComponent.PlayerDisconnect // (Final|Native|Public|BlueprintCallable) // @ game+0x1e15c30
	void PlayerConnect(struct FString PlayerID, struct FDelegate SuccessDelegate, struct FDelegate ErrorDelegate); // Function Agones.AgonesComponent.PlayerConnect // (Final|Native|Public|BlueprintCallable) // @ game+0x1e15a80
	void IsPlayerConnected(struct FString PlayerID, struct FDelegate SuccessDelegate, struct FDelegate ErrorDelegate); // Function Agones.AgonesComponent.IsPlayerConnected // (Final|Native|Public|BlueprintCallable) // @ game+0x1e158d0
	void HealthPing(float RateSeconds); // Function Agones.AgonesComponent.HealthPing // (Final|Native|Public|BlueprintCallable) // @ game+0x1e15850
	void Health(struct FDelegate SuccessDelegate, struct FDelegate ErrorDelegate); // Function Agones.AgonesComponent.Health // (Final|Native|Public|BlueprintCallable) // @ game+0x1e15750
	void GetPlayerCount(struct FDelegate SuccessDelegate, struct FDelegate ErrorDelegate); // Function Agones.AgonesComponent.GetPlayerCount // (Final|Native|Public|BlueprintCallable) // @ game+0x1e15650
	void GetPlayerCapacity(struct FDelegate SuccessDelegate, struct FDelegate ErrorDelegate); // Function Agones.AgonesComponent.GetPlayerCapacity // (Final|Native|Public|BlueprintCallable) // @ game+0x1e15550
	void GetConnectedPlayers(struct FDelegate SuccessDelegate, struct FDelegate ErrorDelegate); // Function Agones.AgonesComponent.GetConnectedPlayers // (Final|Native|Public|BlueprintCallable) // @ game+0x1e15450
	void GameServer(struct FDelegate SuccessDelegate, struct FDelegate ErrorDelegate); // Function Agones.AgonesComponent.GameServer // (Final|Native|Public|BlueprintCallable) // @ game+0x1e15350
	void ConnectSuccess(struct FGameServerResponse GameServerResponse); // Function Agones.AgonesComponent.ConnectSuccess // (Final|Native|Private) // @ game+0x1e151f0
	void Connect(); // Function Agones.AgonesComponent.Connect // (Final|Native|Public|BlueprintCallable) // @ game+0x1e151d0
	void Allocate(struct FDelegate SuccessDelegate, struct FDelegate ErrorDelegate); // Function Agones.AgonesComponent.Allocate // (Final|Native|Public|BlueprintCallable) // @ game+0x1e150d0
};

