// Enum CoreOnline.ECoreOnlineDummy
enum class ECoreOnlineDummy : uint8 {
	Dummy = 0,
	ECoreOnlineDummy_MAX = 1
};

// ScriptStruct CoreOnline.JoinabilitySettings
// Size: 0x14 (Inherited: 0x00)
struct FJoinabilitySettings {
	struct FName SessionName; // 0x00(0x08)
	bool bPublicSearchable; // 0x08(0x01)
	bool bAllowInvites; // 0x09(0x01)
	bool bJoinViaPresence; // 0x0a(0x01)
	bool bJoinViaPresenceFriendsOnly; // 0x0b(0x01)
	int32_t MaxPlayers; // 0x0c(0x04)
	int32_t MaxPartySize; // 0x10(0x04)
};

// ScriptStruct CoreOnline.UniqueNetIdWrapper
// Size: 0x01 (Inherited: 0x00)
struct FUniqueNetIdWrapper {
	char pad_0[0x1]; // 0x00(0x01)
};

