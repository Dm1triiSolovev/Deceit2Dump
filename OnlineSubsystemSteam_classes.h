// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// Size: 0x28 (Inherited: 0x28)
struct USteamAuthComponentModuleInterface : UHandlerComponentFactory {
};

// Class OnlineSubsystemSteam.SteamNetConnection
// Size: 0x32f0 (Inherited: 0x32e0)
struct USteamNetConnection : UIpConnection {
	bool bIsPassthrough; // 0x32e0(0x01)
	char pad_32E1[0xf]; // 0x32e1(0x0f)
};

// Class OnlineSubsystemSteam.SteamNetDriver
// Size: 0x7e0 (Inherited: 0x7d8)
struct USteamNetDriver : UIpNetDriver {
	char pad_7D8[0x8]; // 0x7d8(0x08)
};

