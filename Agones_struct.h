// ScriptStruct Agones.AgonesError
// Size: 0x10 (Inherited: 0x00)
struct FAgonesError {
	struct FString ErrorMessage; // 0x00(0x10)
};

// ScriptStruct Agones.EmptyResponse
// Size: 0x01 (Inherited: 0x00)
struct FEmptyResponse {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Agones.GameServerResponse
// Size: 0x138 (Inherited: 0x00)
struct FGameServerResponse {
	struct FStatus Status; // 0x00(0x30)
	struct FObjectMeta ObjectMeta; // 0x30(0xf8)
	struct FSpec Spec; // 0x128(0x10)
};

// ScriptStruct Agones.Spec
// Size: 0x10 (Inherited: 0x00)
struct FSpec {
	struct FHealth Health; // 0x00(0x10)
};

// ScriptStruct Agones.Health
// Size: 0x10 (Inherited: 0x00)
struct FHealth {
	bool bDisabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t PeriodSeconds; // 0x04(0x04)
	int32_t FailureThreshold; // 0x08(0x04)
	int32_t InitialDelaySeconds; // 0x0c(0x04)
};

// ScriptStruct Agones.ObjectMeta
// Size: 0xf8 (Inherited: 0x00)
struct FObjectMeta {
	struct FString Name; // 0x00(0x10)
	struct FString Namespace; // 0x10(0x10)
	struct FString Uid; // 0x20(0x10)
	struct FString ResourceVersion; // 0x30(0x10)
	int64_t Generation; // 0x40(0x08)
	int64_t CreationTimestamp; // 0x48(0x08)
	int64_t DeletionTimestamp; // 0x50(0x08)
	struct TMap<struct FString, struct FString> Annotations; // 0x58(0x50)
	struct TMap<struct FString, struct FString> Labels; // 0xa8(0x50)
};

// ScriptStruct Agones.Status
// Size: 0x30 (Inherited: 0x00)
struct FStatus {
	struct FString State; // 0x00(0x10)
	struct FString Address; // 0x10(0x10)
	struct TArray<struct FPort> Ports; // 0x20(0x10)
};

// ScriptStruct Agones.Port
// Size: 0x18 (Inherited: 0x00)
struct FPort {
	struct FString Name; // 0x00(0x10)
	int32_t Port; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Agones.ConnectedPlayersResponse
// Size: 0x10 (Inherited: 0x00)
struct FConnectedPlayersResponse {
	struct TArray<struct FString> ConnectedPlayers; // 0x00(0x10)
};

// ScriptStruct Agones.CountResponse
// Size: 0x08 (Inherited: 0x00)
struct FCountResponse {
	int64_t Count; // 0x00(0x08)
};

// ScriptStruct Agones.ConnectedResponse
// Size: 0x01 (Inherited: 0x00)
struct FConnectedResponse {
	bool bConnected; // 0x00(0x01)
};

// ScriptStruct Agones.DisconnectResponse
// Size: 0x01 (Inherited: 0x00)
struct FDisconnectResponse {
	bool bDisconnected; // 0x00(0x01)
};

// ScriptStruct Agones.KeyValuePair
// Size: 0x20 (Inherited: 0x00)
struct FKeyValuePair {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Agones.Duration
// Size: 0x08 (Inherited: 0x00)
struct FDuration {
	int64_t Seconds; // 0x00(0x08)
};

// ScriptStruct Agones.AgonesPlayer
// Size: 0x10 (Inherited: 0x00)
struct FAgonesPlayer {
	struct FString PlayerID; // 0x00(0x10)
};

// ScriptStruct Agones.PlayerCapacity
// Size: 0x08 (Inherited: 0x00)
struct FPlayerCapacity {
	int64_t Count; // 0x00(0x08)
};

