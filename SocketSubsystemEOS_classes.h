// Class SocketSubsystemEOS.NetDriverEOSBase
// Size: 0x7e0 (Inherited: 0x7d8)
struct UNetDriverEOSBase : UIpNetDriver {
	bool bIsPassthrough; // 0x7d8(0x01)
	bool bIsUsingP2PSockets; // 0x7d9(0x01)
	char pad_7DA[0x6]; // 0x7da(0x06)
};

// Class SocketSubsystemEOS.NetConnectionEOS
// Size: 0x32f0 (Inherited: 0x32e0)
struct UNetConnectionEOS : UIpConnection {
	char pad_32E0[0x10]; // 0x32e0(0x10)
};

