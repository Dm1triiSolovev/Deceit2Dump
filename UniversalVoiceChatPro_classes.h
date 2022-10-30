// Class UniversalVoiceChatPro.AudioCaptureAndroid
// Size: 0x28 (Inherited: 0x28)
struct UAudioCaptureAndroid : UBlueprintFunctionLibrary {

	void AndroidMicrophoneStop(struct UMicrophoneSpeakComponent* callbackComp); // Function UniversalVoiceChatPro.AudioCaptureAndroid.AndroidMicrophoneStop // (Final|Native|Static|Public) // @ game+0x1fa7570
	bool AndroidMicrophoneStart(struct UMicrophoneSpeakComponent* callbackComp, int32_t sampleRateToUse); // Function UniversalVoiceChatPro.AudioCaptureAndroid.AndroidMicrophoneStart // (Final|Native|Static|Public) // @ game+0x1fa74a0
	bool AndroidHasPermission(); // Function UniversalVoiceChatPro.AudioCaptureAndroid.AndroidHasPermission // (Final|Native|Static|Public) // @ game+0x9fa540
	void AndroidAskPermission(); // Function UniversalVoiceChatPro.AudioCaptureAndroid.AndroidAskPermission // (Final|Native|Static|Public) // @ game+0x1fa7480
};

// Class UniversalVoiceChatPro.MicrophoneSpeakComponent
// Size: 0x1e0 (Inherited: 0xb0)
struct UMicrophoneSpeakComponent : UActorComponent {
	struct FMulticastInlineDelegate OnDataMicrophoneReceived; // 0xb0(0x10)
	char pad_C0[0x28]; // 0xc0(0x28)
	struct UAudioComponent* VoiceCaptureAudioComponent; // 0xe8(0x08)
	struct USoundWaveProcedural* VoiceCaptureSoundWaveProcedural; // 0xf0(0x08)
	char pad_F8[0xe8]; // 0xf8(0xe8)

	bool startSpeaking(bool _shouldHearMyOwnVoice, bool isGlobal, int32_t radioChannel, bool useRange, float MaxRange); // Function UniversalVoiceChatPro.MicrophoneSpeakComponent.startSpeaking // (Final|Native|Public|BlueprintCallable) // @ game+0x1fa8f90
	void SetVoiceVolume(float Volume); // Function UniversalVoiceChatPro.MicrophoneSpeakComponent.SetVoiceVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x1fa82c0
	void setAttenuationAssetPath(bool enableAttenuation, struct FString _pathToAttenuationAsset); // Function UniversalVoiceChatPro.MicrophoneSpeakComponent.setAttenuationAssetPath // (Final|Native|Public) // @ game+0x1fa8e60
	void RPCServerBroadcastVoiceData(struct TArray<char> Data, int32_t SampleRate, int32_t NumChannels, int32_t PCMSize); // Function UniversalVoiceChatPro.MicrophoneSpeakComponent.RPCServerBroadcastVoiceData // (Net|Native|Event|NetMulticast|Public) // @ game+0x1fa7ca0
	void RPCReceiveVoiceFromServer(struct UMicrophoneSpeakComponent* compToOutputVoice, struct TArray<char> dataEncoded, int32_t SampleRate, int32_t NumChannels, int32_t PCMSize); // Function UniversalVoiceChatPro.MicrophoneSpeakComponent.RPCReceiveVoiceFromServer // (Net|Native|Event|Public|NetClient) // @ game+0x1fa7af0
	void RPCClientTransmitVoiceData(struct TArray<char> Data, int32_t SampleRate, int32_t NumChannels, int32_t PCMSize, bool _isGlobal, int32_t _radioChannel, bool _useRange, float _maxRange); // Function UniversalVoiceChatPro.MicrophoneSpeakComponent.RPCClientTransmitVoiceData // (Net|Native|Event|Public|NetServer) // @ game+0x1fa7870
	void payloadReceivedVoiceData(struct TArray<char>& dataEncoded, int32_t SampleRate, int32_t NumChannels, int32_t PCMSize); // Function UniversalVoiceChatPro.MicrophoneSpeakComponent.payloadReceivedVoiceData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1fa8ce0
	void muteAudio(bool _isMuted); // Function UniversalVoiceChatPro.MicrophoneSpeakComponent.muteAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x1fa8c50
	bool isPlayingAudioVoice(); // Function UniversalVoiceChatPro.MicrophoneSpeakComponent.isPlayingAudioVoice // (Final|Native|Public|BlueprintCallable) // @ game+0x1fa8b90
	bool initAudioResources(int32_t voiceSampleRate, int32_t _voiceNumChannels); // Function UniversalVoiceChatPro.MicrophoneSpeakComponent.initAudioResources // (Final|Native|Public|BlueprintCallable) // @ game+0x1fa8ac0
	void endSpeaking(); // Function UniversalVoiceChatPro.MicrophoneSpeakComponent.endSpeaking // (Final|Native|Public|BlueprintCallable) // @ game+0x1fa8aa0
	void DataMicrophoneReceived__DelegateSignature(struct TArray<char>& Data); // DelegateFunction UniversalVoiceChatPro.MicrophoneSpeakComponent.DataMicrophoneReceived__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2552560
};

// Class UniversalVoiceChatPro.PlayerVoiceChatActor
// Size: 0x2c0 (Inherited: 0x278)
struct APlayerVoiceChatActor : AActor {
	struct USceneComponent* RootSceneComponent; // 0x278(0x08)
	struct UMicrophoneSpeakComponent* MicrophoneSpeakComponent; // 0x280(0x08)
	struct APlayerState* OwnerPlayerState; // 0x288(0x08)
	int32_t idVoiceChat; // 0x290(0x04)
	float voiceVolume; // 0x294(0x04)
	struct TArray<int32_t> radioChannelSubscribed; // 0x298(0x10)
	struct FString pathToAttenuationAsset; // 0x2a8(0x10)
	bool ServerPerformAntiCheat; // 0x2b8(0x01)
	bool AntiCheatAllowUseProximity; // 0x2b9(0x01)
	bool AntiCheatAllowUseGlobal; // 0x2ba(0x01)
	char pad_2BB[0x1]; // 0x2bb(0x01)
	float AntiCheatMaxProximityRange; // 0x2bc(0x04)

	void ServerSetMaxProximityRange(float _maxProximityRange); // Function UniversalVoiceChatPro.PlayerVoiceChatActor.ServerSetMaxProximityRange // (Final|Native|Public|BlueprintCallable) // @ game+0x1fa8240
	void ServerSetAttenuation(bool enableAttenuation, struct FString _pathToAttenuationAsset); // Function UniversalVoiceChatPro.PlayerVoiceChatActor.ServerSetAttenuation // (Final|Native|Public|BlueprintCallable) // @ game+0x1fa8110
	void ServerSetAllowUseProximity(bool _allowUseRange); // Function UniversalVoiceChatPro.PlayerVoiceChatActor.ServerSetAllowUseProximity // (Final|Native|Public|BlueprintCallable) // @ game+0x1fa8080
	void ServerSetAllowUseGlobal(bool _allowUseGlobal); // Function UniversalVoiceChatPro.PlayerVoiceChatActor.ServerSetAllowUseGlobal // (Final|Native|Public|BlueprintCallable) // @ game+0x1fa7ff0
	void ServerRemoveChannel(int32_t channelToRemove); // Function UniversalVoiceChatPro.PlayerVoiceChatActor.ServerRemoveChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x1fa7f60
	void ServerAddChannel(int32_t channelToAdd); // Function UniversalVoiceChatPro.PlayerVoiceChatActor.ServerAddChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x1fa7ed0
	void RPCServerUpdatePosAudioComp(struct FVector worldPos); // Function UniversalVoiceChatPro.PlayerVoiceChatActor.RPCServerUpdatePosAudioComp // (Net|Native|Event|NetMulticast|Public|HasDefaults) // @ game+0x1fa7e00
	void RPCClientSetMicrophoneVolume(float Volume); // Function UniversalVoiceChatPro.PlayerVoiceChatActor.RPCClientSetMicrophoneVolume // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1fa77e0
	void RPCClientAskRemoveChannel(int32_t channelToRemove); // Function UniversalVoiceChatPro.PlayerVoiceChatActor.RPCClientAskRemoveChannel // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1fa7750
	void RPCClientAskAddChannel(int32_t channelToAdd); // Function UniversalVoiceChatPro.PlayerVoiceChatActor.RPCClientAskAddChannel // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1fa76c0
	void RepNotifyVoiceVolume(); // Function UniversalVoiceChatPro.PlayerVoiceChatActor.RepNotifyVoiceVolume // (Final|Native|Public) // @ game+0x1fa7eb0
	void RepNotifyMicComp(); // Function UniversalVoiceChatPro.PlayerVoiceChatActor.RepNotifyMicComp // (Final|Native|Public) // @ game+0x1fa7e90
	void RepNotifyAttenuationAsset(); // Function UniversalVoiceChatPro.PlayerVoiceChatActor.RepNotifyAttenuationAsset // (Final|Native|Public) // @ game+0x1fa7e90
	void muteAudio(bool isMute); // Function UniversalVoiceChatPro.PlayerVoiceChatActor.muteAudio // (Final|Native|Public) // @ game+0x1fa8bc0
	void DelegateEndPlayOwner(struct AActor* act, enum class EEndPlayReason EndPlayReason); // Function UniversalVoiceChatPro.PlayerVoiceChatActor.DelegateEndPlayOwner // (Final|Native|Public) // @ game+0x1fa75f0
};

// Class UniversalVoiceChatPro.UniversalVoiceChat
// Size: 0x28 (Inherited: 0x28)
struct UUniversalVoiceChat : UBlueprintFunctionLibrary {

	bool VoiceChatWasInitAudioVoiceChatQuality(); // Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatWasInitAudioVoiceChatQuality // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fa8a70
	bool VoiceChatStopSpeak(); // Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatStopSpeak // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fa8a40
	bool VoiceChatStartSpeak(bool _shouldHearMyOwnVoice, bool isGlobal, int32_t radioChannel, bool useProximity, float maxProximityRange); // Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatStartSpeak // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fa8870
	bool VoiceChatSetMicrophoneVolume(float Volume); // Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatSetMicrophoneVolume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fa87f0
	bool VoiceChatRemoveChannel(int32_t channelToRemove); // Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatRemoveChannel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fa8760
	void VoiceChatLocalMuteSomeone(struct UObject* WorldContextObject, struct APlayerState* playerToMute, bool shouldMute); // Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatLocalMuteSomeone // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fa8660
	bool VoiceChatLocalIsMutedSomeone(struct UObject* WorldContextObject, struct APlayerState* playerToCheckMute); // Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatLocalIsMutedSomeone // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fa8590
	bool VoiceChatInitAudioVoiceChatQuality(int32_t _sampleRate, int32_t _numChannels); // Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatInitAudioVoiceChatQuality // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fa84c0
	bool VoiceChatHasMicrophonePermission(); // Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatHasMicrophonePermission // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fa8490
	struct APlayerVoiceChatActor* VoiceChatGetMyLocalPlayerVoiceChat(); // Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatGetMyLocalPlayerVoiceChat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fa8460
	bool VoiceChatCheckRegisteredToChannel(int32_t channelToCheck); // Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatCheckRegisteredToChannel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fa83d0
	void VoiceChatAskMicrophonePermission(); // Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatAskMicrophonePermission // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fa7480
	bool VoiceChatAddChannel(int32_t channelToAdd); // Function UniversalVoiceChatPro.UniversalVoiceChat.VoiceChatAddChannel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1fa8340
};

