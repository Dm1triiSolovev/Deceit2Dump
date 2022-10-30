// Enum NetCore.ENetworkFailure
enum class ENetworkFailure : uint8 {
	NetDriverAlreadyExists = 0,
	NetDriverCreateFailure = 1,
	NetDriverListenFailure = 2,
	ConnectionLost = 3,
	ConnectionTimeout = 4,
	FailureReceived = 5,
	OutdatedClient = 6,
	OutdatedServer = 7,
	PendingConnectionFailure = 8,
	NetGuidMismatch = 9,
	NetChecksumMismatch = 10,
	ENetworkFailure_MAX = 11
};

// Enum NetCore.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8 {
	None = 0,
	HasBeenSerialized = 1,
	HasDeltaBeenRequested = 2,
	IsUsingDeltaSerialization = 4,
	EFastArraySerializerDeltaFlags_MAX = 5
};

// Enum NetCore.ENetCloseResult
enum class ENetCloseResult : uint8 {
	NetDriverAlreadyExists = 0,
	NetDriverCreateFailure = 1,
	NetDriverListenFailure = 2,
	ConnectionLost = 3,
	ConnectionTimeout = 4,
	FailureReceived = 5,
	OutdatedClient = 6,
	OutdatedServer = 7,
	PendingConnectionFailure = 8,
	NetGuidMismatch = 9,
	NetChecksumMismatch = 10,
	SecurityMalformedPacket = 11,
	SecurityInvalidData = 12,
	SecurityClosed = 13,
	Unknown = 14,
	Success = 15,
	Extended = 16,
	RPCDoS = 17,
	Cleanup = 18,
	MissingLevelPackage = 19,
	PacketHandlerIncomingError = 20,
	ZeroLastByte = 21,
	ZeroSize = 22,
	ReadHeaderFail = 23,
	ReadHeaderExtraFail = 24,
	AckSequenceMismatch = 25,
	BunchBadChannelIndex = 26,
	BunchChannelNameFail = 27,
	BunchWrongChannelType = 28,
	BunchHeaderOverflow = 29,
	BunchDataOverflow = 30,
	BunchPrematureControlChannel = 31,
	BunchPrematureChannel = 32,
	BunchPrematureControlClose = 33,
	UnknownChannelType = 34,
	PrematureSend = 35,
	CorruptData = 36,
	SocketSendFailure = 37,
	BadChildConnectionIndex = 38,
	LogLimitInstant = 39,
	LogLimitSustained = 40,
	ReceivedNetGUIDBunchFail = 41,
	MaxReliableExceeded = 42,
	ReceivedNextBunchFail = 43,
	ReceivedNextBunchQueueFail = 44,
	PartialInitialReliableDestroy = 45,
	PartialMergeReliableDestroy = 46,
	PartialInitialNonByteAligned = 47,
	PartialNonByteAligned = 48,
	PartialFinalPackageMapExports = 49,
	PartialTooLarge = 50,
	AlreadyOpen = 51,
	ReliableBeforeOpen = 52,
	ReliableBufferOverflow = 53,
	ControlChannelClose = 54,
	ControlChannelEndianCheck = 55,
	ControlChannelPlayerChannelFail = 56,
	ControlChannelMessageUnknown = 57,
	ControlChannelMessageFail = 58,
	ControlChannelMessagePayloadFail = 59,
	ControlChannelBunchOverflowed = 60,
	ControlChannelQueueBunchOverflowed = 61,
	ClientHasMustBeMappedGUIDs = 62,
	UnregisteredMustBeMappedGUID = 63,
	ObjectReplicatorReceivedBunchFail = 64,
	ContentBlockFail = 65,
	ContentBlockHeaderRepLayoutFail = 66,
	ContentBlockHeaderIsActorFail = 67,
	ContentBlockHeaderObjFail = 68,
	ContentBlockHeaderPrematureEnd = 69,
	ContentBlockHeaderSubObjectActor = 70,
	ContentBlockHeaderBadParent = 71,
	ContentBlockHeaderInvalidCreate = 72,
	ContentBlockHeaderStablyNamedFail = 73,
	ContentBlockHeaderNoSubObjectClass = 74,
	ContentBlockHeaderUObjectSubObject = 75,
	ContentBlockHeaderAActorSubObject = 76,
	ContentBlockHeaderFail = 77,
	ContentBlockPayloadBitsFail = 78,
	FieldHeaderRepIndex = 79,
	FieldHeaderBadRepIndex = 80,
	FieldHeaderPayloadBitsFail = 81,
	FieldPayloadFail = 82,
	FaultDisconnect = 83,
	NotRecoverable = 84,
	ENetCloseResult_MAX = 85
};

// ScriptStruct NetCore.FastArraySerializerItem
// Size: 0x0c (Inherited: 0x00)
struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x00(0x04)
	int32_t ReplicationKey; // 0x04(0x04)
	int32_t MostRecentArrayReplicationKey; // 0x08(0x04)
};

// ScriptStruct NetCore.FastArraySerializer
// Size: 0x108 (Inherited: 0x00)
struct FFastArraySerializer {
	char pad_0[0x54]; // 0x00(0x54)
	int32_t ArrayReplicationKey; // 0x54(0x04)
	char pad_58[0xa8]; // 0x58(0xa8)
	enum class EFastArraySerializerDeltaFlags DeltaFlags; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// ScriptStruct NetCore.StateStruct
// Size: 0x18 (Inherited: 0x00)
struct FStateStruct {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString StateName; // 0x08(0x10)
};

// ScriptStruct NetCore.EscalationState
// Size: 0x30 (Inherited: 0x18)
struct FEscalationState : FStateStruct {
	bool bLogEscalate; // 0x18(0x01)
	bool bDormant; // 0x19(0x01)
	int16_t CooloffTime; // 0x1a(0x02)
	int16_t AutoEscalateTime; // 0x1c(0x02)
	int8_t HighestTimePeriod; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	struct TArray<int8_t> AllTimePeriods; // 0x20(0x10)
};

// ScriptStruct NetCore.NetAnalyticsDataConfig
// Size: 0x0c (Inherited: 0x00)
struct FNetAnalyticsDataConfig {
	struct FName DataName; // 0x00(0x08)
	bool bEnabled; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct NetCore.NetFaultState
// Size: 0x40 (Inherited: 0x30)
struct FNetFaultState : FEscalationState {
	bool bCloseConnection; // 0x30(0x01)
	char pad_31[0x1]; // 0x31(0x01)
	int16_t EscalateQuotaFaultsPerPeriod; // 0x32(0x02)
	int8_t EscalateQuotaFaultPercentPerPeriod; // 0x34(0x01)
	char pad_35[0x1]; // 0x35(0x01)
	int16_t DescalateQuotaFaultsPerPeriod; // 0x36(0x02)
	int8_t DescalateQuotaFaultPercentPerPeriod; // 0x38(0x01)
	int8_t EscalateQuotaTimePeriod; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

