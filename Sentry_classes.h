// Class Sentry.SentryAttachment
// Size: 0x38 (Inherited: 0x28)
struct USentryAttachment : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	void InitializeWithPath(struct FString Path, struct FString Filename, struct FString ContentType); // Function Sentry.SentryAttachment.InitializeWithPath // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb5560
	void InitializeWithData(struct TArray<char>& Data, struct FString Filename, struct FString ContentType); // Function Sentry.SentryAttachment.InitializeWithData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1fb5400
	struct FString GetPath(); // Function Sentry.SentryAttachment.GetPath // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb4c20
	struct FString GetFilename(); // Function Sentry.SentryAttachment.GetFilename // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb4f00
	struct TArray<char> GetData(); // Function Sentry.SentryAttachment.GetData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb4940
	struct FString GetContentType(); // Function Sentry.SentryAttachment.GetContentType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb48c0
};

// Class Sentry.SentryBreadcrumb
// Size: 0x38 (Inherited: 0x28)
struct USentryBreadcrumb : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	void SetType(struct FString Type); // Function Sentry.SentryBreadcrumb.SetType // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb6220
	void SetMessage(struct FString Message); // Function Sentry.SentryBreadcrumb.SetMessage // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb6180
	void SetLevel(enum class ESentryLevel Level); // Function Sentry.SentryBreadcrumb.SetLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb6650
	void SetData(struct TMap<struct FString, struct FString>& Data); // Function Sentry.SentryBreadcrumb.SetData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1fb5ea0
	void SetCategory(struct FString Category); // Function Sentry.SentryBreadcrumb.SetCategory // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb5b40
	struct FString GetType(); // Function Sentry.SentryBreadcrumb.GetType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb48c0
	struct FString GetMessage(); // Function Sentry.SentryBreadcrumb.GetMessage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb4c20
	enum class ESentryLevel GetLevel(); // Function Sentry.SentryBreadcrumb.GetLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb50e0
	struct TMap<struct FString, struct FString> GetData(); // Function Sentry.SentryBreadcrumb.GetData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb49c0
	struct FString GetCategory(); // Function Sentry.SentryBreadcrumb.GetCategory // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb4840
};

// Class Sentry.SentryEvent
// Size: 0x38 (Inherited: 0x28)
struct USentryEvent : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	void SetMessage(struct FString Message); // Function Sentry.SentryEvent.SetMessage // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb6180
	void SetLevel(enum class ESentryLevel Level); // Function Sentry.SentryEvent.SetLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb66d0
	struct FString GetMessage(); // Function Sentry.SentryEvent.GetMessage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb4c20
	enum class ESentryLevel GetLevel(); // Function Sentry.SentryEvent.GetLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb5110
};

// Class Sentry.SentryId
// Size: 0x38 (Inherited: 0x28)
struct USentryId : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Sentry.SentryLibrary
// Size: 0x28 (Inherited: 0x28)
struct USentryLibrary : UBlueprintFunctionLibrary {

	struct TArray<char> StringToBytesArray(struct FString InString); // Function Sentry.SentryLibrary.StringToBytesArray // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fb6c00
	struct FString SaveStringToFile(struct FString InString, struct FString Filename); // Function Sentry.SentryLibrary.SaveStringToFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fb5a00
	struct USentryUserFeedback* CreateSentryUserFeedback(struct USentryId* EventId, struct FString Name, struct FString Email, struct FString Comments); // Function Sentry.SentryLibrary.CreateSentryUserFeedback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fb46b0
	struct USentryUser* CreateSentryUser(struct FString Email, struct FString ID, struct FString UserName, struct FString IpAddress, struct TMap<struct FString, struct FString>& Data); // Function Sentry.SentryLibrary.CreateSentryUser // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1fb4450
	struct USentryEvent* CreateSentryEvent(struct FString Message, enum class ESentryLevel Level); // Function Sentry.SentryLibrary.CreateSentryEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fb4370
	struct USentryBreadcrumb* CreateSentryBreadcrumb(struct FString Message, struct FString Type, struct FString Category, struct TMap<struct FString, struct FString>& Data, enum class ESentryLevel Level); // Function Sentry.SentryLibrary.CreateSentryBreadcrumb // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1fb4110
	struct USentryAttachment* CreateSentryAttachmentWithPath(struct FString Path, struct FString Filename, struct FString ContentType); // Function Sentry.SentryLibrary.CreateSentryAttachmentWithPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fb3fc0
	struct USentryAttachment* CreateSentryAttachmentWithData(struct TArray<char>& Data, struct FString Filename, struct FString ContentType); // Function Sentry.SentryLibrary.CreateSentryAttachmentWithData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1fb3e50
	struct FString ByteArrayToString(struct TArray<char>& Array); // Function Sentry.SentryLibrary.ByteArrayToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1fb3600
};

// Class Sentry.SentryScope
// Size: 0x38 (Inherited: 0x28)
struct USentryScope : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	void SetTagValue(struct FString Key, struct FString Value); // Function Sentry.SentryScope.SetTagValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb6950
	void SetTags(struct TMap<struct FString, struct FString>& Tags); // Function Sentry.SentryScope.SetTags // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1fb6a50
	void SetLevel(enum class ESentryLevel Level); // Function Sentry.SentryScope.SetLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb6750
	void SetFingerprint(struct TArray<struct FString>& Fingerprint); // Function Sentry.SentryScope.SetFingerprint // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1fb6580
	void SetExtraValue(struct FString Key, struct FString Value); // Function Sentry.SentryScope.SetExtraValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb6360
	void SetExtras(struct TMap<struct FString, struct FString>& Extras); // Function Sentry.SentryScope.SetExtras // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1fb6460
	void SetEnvironment(struct FString Environment); // Function Sentry.SentryScope.SetEnvironment // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb62c0
	void SetDist(struct FString Dist); // Function Sentry.SentryScope.SetDist // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb60e0
	void SetContext(struct FString Key, struct TMap<struct FString, struct FString>& Values); // Function Sentry.SentryScope.SetContext // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1fb5be0
	void RemoveTag(struct FString Key); // Function Sentry.SentryScope.RemoveTag // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb58a0
	void RemoveExtra(struct FString Key); // Function Sentry.SentryScope.RemoveExtra // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb5800
	void RemoveContext(struct FString Key); // Function Sentry.SentryScope.RemoveContext // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb5760
	struct FString GetTagValue(struct FString Key); // Function Sentry.SentryScope.GetTagValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb5170
	struct TMap<struct FString, struct FString> GetTags(); // Function Sentry.SentryScope.GetTags // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb5260
	enum class ESentryLevel GetLevel(); // Function Sentry.SentryScope.GetLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb5140
	struct TArray<struct FString> GetFingerprint(); // Function Sentry.SentryScope.GetFingerprint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb4f80
	struct FString GetExtraValue(struct FString Key); // Function Sentry.SentryScope.GetExtraValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb4d20
	struct TMap<struct FString, struct FString> GetExtras(); // Function Sentry.SentryScope.GetExtras // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb4e10
	struct FString GetEnvironment(); // Function Sentry.SentryScope.GetEnvironment // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb4ca0
	struct FString GetDist(); // Function Sentry.SentryScope.GetDist // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb4ba0
	void ClearBreadcrumbs(); // Function Sentry.SentryScope.ClearBreadcrumbs // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb3d40
	void ClearAttachments(); // Function Sentry.SentryScope.ClearAttachments // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb3d20
	void Clear(); // Function Sentry.SentryScope.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb3d00
	void AddBreadcrumb(struct USentryBreadcrumb* Breadcrumb); // Function Sentry.SentryScope.AddBreadcrumb // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb3280
	void AddAttachment(struct USentryAttachment* Attachment); // Function Sentry.SentryScope.AddAttachment // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb31f0
};

// Class Sentry.SentrySettings
// Size: 0x60 (Inherited: 0x28)
struct USentrySettings : UObject {
	struct FString DsnUrl; // 0x28(0x10)
	struct FString Release; // 0x38(0x10)
	bool InitAutomatically; // 0x48(0x01)
	struct FAutomaticBreadcrumbs AutomaticBreadcrumbs; // 0x49(0x05)
	bool UploadSymbolsAutomatically; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	struct FString PropertiesFilePath; // 0x50(0x10)
};

// Class Sentry.SentrySubsystem
// Size: 0x68 (Inherited: 0x30)
struct USentrySubsystem : UGameInstanceSubsystem {
	char pad_30[0x38]; // 0x30(0x38)

	void SetUser(struct USentryUser* User); // Function Sentry.SentrySubsystem.SetUser // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb6b70
	void SetTag(struct FString Key, struct FString Value); // Function Sentry.SentrySubsystem.SetTag // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb6850
	void SetLevel(enum class ESentryLevel Level); // Function Sentry.SentrySubsystem.SetLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb67d0
	void SetContext(struct FString Key, struct TMap<struct FString, struct FString>& Values); // Function Sentry.SentrySubsystem.SetContext // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1fb5d40
	void RemoveUser(); // Function Sentry.SentrySubsystem.RemoveUser // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb59e0
	void RemoveTag(struct FString Key); // Function Sentry.SentrySubsystem.RemoveTag // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb5940
	void InitializeWithSettings(struct FDelegate& OnConfigureSettings); // Function Sentry.SentrySubsystem.InitializeWithSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1fb56b0
	void Initialize(); // Function Sentry.SentrySubsystem.Initialize // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb5350
	void ConfigureScope(struct FDelegate& OnConfigureScope); // Function Sentry.SentrySubsystem.ConfigureScope // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1fb3da0
	void Close(); // Function Sentry.SentrySubsystem.Close // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb3d80
	void ClearBreadcrumbs(); // Function Sentry.SentrySubsystem.ClearBreadcrumbs // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb3d60
	void CaptureUserFeedbackWithParams(struct USentryId* EventId, struct FString Email, struct FString Comments, struct FString Name); // Function Sentry.SentrySubsystem.CaptureUserFeedbackWithParams // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb3b70
	void CaptureUserFeedback(struct USentryUserFeedback* UserFeedback); // Function Sentry.SentrySubsystem.CaptureUserFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb3ae0
	struct USentryId* CaptureMessageWithScope(struct FString Message, struct FDelegate& OnConfigureScope, enum class ESentryLevel Level); // Function Sentry.SentrySubsystem.CaptureMessageWithScope // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1fb3980
	struct USentryId* CaptureMessage(struct FString Message, enum class ESentryLevel Level); // Function Sentry.SentrySubsystem.CaptureMessage // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb3890
	struct USentryId* CaptureEventWithScope(struct USentryEvent* Event, struct FDelegate& OnConfigureScope); // Function Sentry.SentrySubsystem.CaptureEventWithScope // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1fb3790
	struct USentryId* CaptureEvent(struct USentryEvent* Event); // Function Sentry.SentrySubsystem.CaptureEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb36f0
	void AddBreadcrumbWithParams(struct FString Message, struct FString Category, struct FString Type, struct TMap<struct FString, struct FString>& Data, enum class ESentryLevel Level); // Function Sentry.SentrySubsystem.AddBreadcrumbWithParams // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1fb33a0
	void AddBreadcrumb(struct USentryBreadcrumb* Breadcrumb); // Function Sentry.SentrySubsystem.AddBreadcrumb // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb3310
};

// Class Sentry.SentryUser
// Size: 0x38 (Inherited: 0x28)
struct USentryUser : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	void SetUsername(struct FString UserName); // Function Sentry.SentryUser.SetUsername // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb5b40
	void SetIpAddress(struct FString IpAddress); // Function Sentry.SentryUser.SetIpAddress // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb58a0
	void SetId(struct FString ID); // Function Sentry.SentryUser.SetId // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb6220
	void SetEmail(struct FString Email); // Function Sentry.SentryUser.SetEmail // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb6180
	void SetData(struct TMap<struct FString, struct FString>& Data); // Function Sentry.SentryUser.SetData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1fb5fc0
	struct FString GetUsername(); // Function Sentry.SentryUser.GetUsername // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb4840
	struct FString GetIpAddress(); // Function Sentry.SentryUser.GetIpAddress // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb5060
	struct FString GetId(); // Function Sentry.SentryUser.GetId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb48c0
	struct FString GetEmail(); // Function Sentry.SentryUser.GetEmail // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb4c20
	struct TMap<struct FString, struct FString> GetData(); // Function Sentry.SentryUser.GetData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb4ab0
};

// Class Sentry.SentryUserFeedback
// Size: 0x38 (Inherited: 0x28)
struct USentryUserFeedback : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	void SetName(struct FString Name); // Function Sentry.SentryUserFeedback.SetName // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb6180
	void SetEmail(struct FString Email); // Function Sentry.SentryUserFeedback.SetEmail // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb6220
	void SetComment(struct FString Comments); // Function Sentry.SentryUserFeedback.SetComment // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb5b40
	void Initialize(struct USentryId* EventId); // Function Sentry.SentryUserFeedback.Initialize // (Final|Native|Public|BlueprintCallable) // @ game+0x1fb5370
	struct FString GetName(); // Function Sentry.SentryUserFeedback.GetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb4c20
	struct FString GetEmail(); // Function Sentry.SentryUserFeedback.GetEmail // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb48c0
	struct FString GetComment(); // Function Sentry.SentryUserFeedback.GetComment // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fb4840
};

