// Class SequencerScripting.MovieSceneBindingExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneBindingExtensions : UBlueprintFunctionLibrary {

	void SetParent(struct FSequencerBindingProxy& InBinding, struct FSequencerBindingProxy& InParentBinding); // Function SequencerScripting.MovieSceneBindingExtensions.SetParent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a287e0
	void SetName(struct FSequencerBindingProxy& InBinding, struct FString InName); // Function SequencerScripting.MovieSceneBindingExtensions.SetName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a28630
	void SetDisplayName(struct FSequencerBindingProxy& InBinding, struct FText& InDisplayName); // Function SequencerScripting.MovieSceneBindingExtensions.SetDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a28360
	void RemoveTrack(struct FSequencerBindingProxy& InBinding, struct UMovieSceneTrack* TrackToRemove); // Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a27f20
	void Remove(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.Remove // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a27af0
	void MoveBindingContents(struct FSequencerBindingProxy& SourceBindingId, struct FSequencerBindingProxy& DestinationBindingId); // Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a27a00
	bool IsValid(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.IsValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1a27960
	struct TArray<struct UMovieSceneTrack*> GetTracks(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetTracks // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a273e0
	struct UObject* GetPossessedObjectClass(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a27140
	struct FSequencerBindingProxy GetParent(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetParent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a27090
	struct UObject* GetObjectTemplate(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a26ff0
	struct FString GetName(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a26e20
	struct FGuid GetId(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetId // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a26cf0
	struct FText GetDisplayName(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a26ad0
	struct TArray<struct FSequencerBindingProxy> GetChildPossessables(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a26890
	struct TArray<struct UMovieSceneTrack*> FindTracksByType(struct FSequencerBindingProxy& InBinding, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a26420
	struct TArray<struct UMovieSceneTrack*> FindTracksByExactType(struct FSequencerBindingProxy& InBinding, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a262f0
	struct UMovieSceneTrack* AddTrack(struct FSequencerBindingProxy& InBinding, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneBindingExtensions.AddTrack // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a26040
};

// Class SequencerScripting.MovieSceneEventTrackExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneEventTrackExtensions : UBlueprintFunctionLibrary {

	struct UObject* GetBoundObjectPropertyClass(struct FMovieSceneEvent& EventKey); // Function SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a26550
	struct UMovieSceneEventTriggerSection* AddEventTriggerSection(struct UMovieSceneEventTrack* InTrack); // Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a25ae0
	struct UMovieSceneEventRepeaterSection* AddEventRepeaterSection(struct UMovieSceneEventTrack* InTrack); // Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a25a50
};

// Class SequencerScripting.MovieSceneFolderExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneFolderExtensions : UBlueprintFunctionLibrary {

	bool SetFolderName(struct UMovieSceneFolder* Folder, struct FName InFolderName); // Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a28560
	bool SetFolderColor(struct UMovieSceneFolder* Folder, struct FColor InFolderColor); // Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1a28490
	bool RemoveChildObjectBinding(struct UMovieSceneFolder* Folder, struct FSequencerBindingProxy InObjectBinding); // Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a27d20
	bool RemoveChildMasterTrack(struct UMovieSceneFolder* Folder, struct UMovieSceneTrack* InMasterTrack); // Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a27c50
	bool RemoveChildFolder(struct UMovieSceneFolder* TargetFolder, struct UMovieSceneFolder* FolderToRemove); // Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a27b80
	struct FName GetFolderName(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a26c60
	struct FColor GetFolderColor(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1a26bd0
	struct TArray<struct FSequencerBindingProxy> GetChildObjectBindings(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a267c0
	struct TArray<struct UMovieSceneTrack*> GetChildMasterTracks(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a266f0
	struct TArray<struct UMovieSceneFolder*> GetChildFolders(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a26620
	bool AddChildObjectBinding(struct UMovieSceneFolder* Folder, struct FSequencerBindingProxy InObjectBinding); // Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a25960
	bool AddChildMasterTrack(struct UMovieSceneFolder* Folder, struct UMovieSceneTrack* InMasterTrack); // Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a25890
	bool AddChildFolder(struct UMovieSceneFolder* TargetFolder, struct UMovieSceneFolder* FolderToAdd); // Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a257c0
};

// Class SequencerScripting.MovieScenePropertyTrackExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieScenePropertyTrackExtensions : UBlueprintFunctionLibrary {

	void SetPropertyNameAndPath(struct UMovieScenePropertyTrack* Track, struct FName& InPropertyName, struct FString InPropertyPath); // Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a288d0
	void SetObjectPropertyClass(struct UMovieSceneObjectPropertyTrack* Track, struct UObject* PropertyClass); // Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a28720
	struct FName GetUniqueTrackName(struct UMovieScenePropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a274c0
	struct FString GetPropertyPath(struct UMovieScenePropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a27270
	struct FName GetPropertyName(struct UMovieScenePropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a271e0
	struct UObject* GetObjectPropertyClass(struct UMovieSceneObjectPropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a26f60
};

// Class SequencerScripting.MovieSceneScriptingKey
// Size: 0x40 (Inherited: 0x28)
struct UMovieSceneScriptingKey : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class SequencerScripting.MovieSceneScriptingActorReferenceKey
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneScriptingActorReferenceKey : UMovieSceneScriptingKey {
	char pad_40[0x20]; // 0x40(0x20)

	void SetValue(struct FMovieSceneObjectBindingID& InNewValue); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a28c30
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a28a00
	struct FMovieSceneObjectBindingID GetValue(); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a27550
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a27340
};

// Class SequencerScripting.MovieSceneScriptingChannel
// Size: 0x30 (Inherited: 0x28)
struct UMovieSceneScriptingChannel : UObject {
	struct FName ChannelName; // 0x28(0x08)
};

// Class SequencerScripting.MovieSceneScriptingActorReferenceChannel
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneScriptingActorReferenceChannel : UMovieSceneScriptingChannel {
	char pad_30[0x30]; // 0x30(0x30)

	void SetDefault(struct FMovieSceneObjectBindingID InDefaultValue); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x1a28000
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x19f9e50
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x1a27e10
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a277d0
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a26da0
	struct FMovieSceneObjectBindingID GetDefault(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a26970
	struct UMovieSceneScriptingActorReferenceKey* AddKey(struct FFrameNumber InTime, struct FMovieSceneObjectBindingID NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1a25b70
};

// Class SequencerScripting.MovieSceneScriptingBoolKey
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneScriptingBoolKey : UMovieSceneScriptingKey {
	char pad_40[0x20]; // 0x40(0x20)

	void SetValue(bool InNewValue); // Function SequencerScripting.MovieSceneScriptingBoolKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1a28da0
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingBoolKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a28a00
	bool GetValue(); // Function SequencerScripting.MovieSceneScriptingBoolKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a27650
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingBoolKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a27340
};

// Class SequencerScripting.MovieSceneScriptingBoolChannel
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneScriptingBoolChannel : UMovieSceneScriptingChannel {
	char pad_30[0x30]; // 0x30(0x30)

	void SetDefault(bool InDefaultValue); // Function SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x1a28150
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x19f9e50
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x1a27e70
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a278a0
	int32_t GetNumKeys(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a26f00
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a26da0
	bool GetDefault(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a26a10
	struct TArray<bool> EvaluateKeys(struct FSequencerScriptingRange Range, struct FFrameRate FrameRate); // Function SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a26170
	struct FSequencerScriptingRange ComputeEffectiveRange(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a26130
	struct UMovieSceneScriptingBoolKey* AddKey(struct FFrameNumber& InTime, bool NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingBoolChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a25ce0
};

// Class SequencerScripting.MovieSceneScriptingByteKey
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneScriptingByteKey : UMovieSceneScriptingKey {
	char pad_40[0x20]; // 0x40(0x20)

	void SetValue(char InNewValue); // Function SequencerScripting.MovieSceneScriptingByteKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1a28ea0
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingByteKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a28a00
	char GetValue(); // Function SequencerScripting.MovieSceneScriptingByteKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a27710
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingByteKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a27340
};

// Class SequencerScripting.MovieSceneScriptingByteChannel
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneScriptingByteChannel : UMovieSceneScriptingChannel {
	char pad_30[0x30]; // 0x30(0x30)

	void SetDefault(char InDefaultValue); // Function SequencerScripting.MovieSceneScriptingByteChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x1a28260
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x19f9e50
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x1a27e70
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingByteChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a278a0
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingByteChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a26da0
	char GetDefault(); // Function SequencerScripting.MovieSceneScriptingByteChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a26a10
	struct UMovieSceneScriptingByteKey* AddKey(struct FFrameNumber& InTime, char NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation); // Function SequencerScripting.MovieSceneScriptingByteChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a25e70
};

// Class SequencerScripting.MovieSceneScriptingDoubleKey
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneScriptingDoubleKey : UMovieSceneScriptingKey {
	char pad_40[0x20]; // 0x40(0x20)

	void SetValue(double InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1a31f40
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a31cf0
	void SetTangentWeightMode(enum class ERichCurveTangentWeightMode InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode // (Final|Native|Public|BlueprintCallable) // @ game+0x1a31bb0
	void SetTangentMode(enum class ERichCurveTangentMode InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode // (Final|Native|Public|BlueprintCallable) // @ game+0x1a31a70
	void SetLeaveTangentWeight(float InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight // (Final|Native|Public|BlueprintCallable) // @ game+0x1a31620
	void SetLeaveTangent(float InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x1a314b0
	void SetInterpolationMode(enum class ERichCurveInterpMode InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode // (Final|Native|Public|BlueprintCallable) // @ game+0x1a31370
	void SetArriveTangentWeight(float InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight // (Final|Native|Public|BlueprintCallable) // @ game+0x1a30f80
	void SetArriveTangent(float InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x1a30e10
	double GetValue(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a30890
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a27340
	enum class ERichCurveTangentWeightMode GetTangentWeightMode(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a30820
	enum class ERichCurveTangentMode GetTangentMode(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a307b0
	float GetLeaveTangentWeight(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a30480
	float GetLeaveTangent(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a30400
	enum class ERichCurveInterpMode GetInterpolationMode(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a30390
	float GetArriveTangentWeight(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a300f0
	float GetArriveTangent(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a300b0
};

// Class SequencerScripting.MovieSceneScriptingDoubleChannel
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneScriptingDoubleChannel : UMovieSceneScriptingChannel {
	char pad_30[0x30]; // 0x30(0x30)

	void SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPreInfinityExtrapolation // (Final|Native|Public|BlueprintCallable) // @ game+0x1a31900
	void SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation // (Final|Native|Public|BlueprintCallable) // @ game+0x1a31790
	void SetDefault(double InDefaultValue); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x1a310e0
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x19f9e50
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x1a30c90
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a30ab0
	enum class ERichCurveExtrapolation GetPreInfinityExtrapolation(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a306d0
	enum class ERichCurveExtrapolation GetPostInfinityExtrapolation(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a305f0
	int32_t GetNumKeys(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a30500
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a26da0
	double GetDefault(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a30170
	struct TArray<double> EvaluateKeys(struct FSequencerScriptingRange Range, struct FFrameRate FrameRate); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a2fcb0
	struct FSequencerScriptingRange ComputeEffectiveRange(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a2fc30
	struct UMovieSceneScriptingDoubleKey* AddKey(struct FFrameNumber& InTime, double NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a2f4c0
};

// Class SequencerScripting.MovieSceneScriptingEventKey
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneScriptingEventKey : UMovieSceneScriptingKey {
	char pad_40[0x20]; // 0x40(0x20)

	void SetValue(struct FMovieSceneEvent& InNewValue); // Function SequencerScripting.MovieSceneScriptingEventKey.SetValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a32010
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingEventKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a28a00
	struct FMovieSceneEvent GetValue(); // Function SequencerScripting.MovieSceneScriptingEventKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a308d0
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingEventKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a27340
};

// Class SequencerScripting.MovieSceneScriptingEventChannel
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneScriptingEventChannel : UMovieSceneScriptingChannel {
	char pad_30[0x30]; // 0x30(0x30)

	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x19f9e50
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingEventChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a26da0
	struct UMovieSceneScriptingEventKey* AddKey(struct FFrameNumber& InTime, struct FMovieSceneEvent NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingEventChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a2f690
};

// Class SequencerScripting.MovieSceneScriptingFloatKey
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneScriptingFloatKey : UMovieSceneScriptingKey {

	void SetValue(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetValue // (Native|Public|BlueprintCallable) // @ game+0x1a32140
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetTime // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a31e20
	void SetTangentWeightMode(enum class ERichCurveTangentWeightMode InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode // (Native|Public|BlueprintCallable) // @ game+0x1a31c70
	void SetTangentMode(enum class ERichCurveTangentMode InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode // (Native|Public|BlueprintCallable) // @ game+0x1a31b30
	void SetLeaveTangentWeight(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight // (Native|Public|BlueprintCallable) // @ game+0x1a31700
	void SetLeaveTangent(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent // (Native|Public|BlueprintCallable) // @ game+0x1a31590
	void SetInterpolationMode(enum class ERichCurveInterpMode InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode // (Native|Public|BlueprintCallable) // @ game+0x1a31430
	void SetArriveTangentWeight(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight // (Native|Public|BlueprintCallable) // @ game+0x1a31050
	void SetArriveTangent(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent // (Native|Public|BlueprintCallable) // @ game+0x1a30ef0
	float GetValue(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetValue // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a309b0
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a27340
	enum class ERichCurveTangentWeightMode GetTangentWeightMode(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a30860
	enum class ERichCurveTangentMode GetTangentMode(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a307f0
	float GetLeaveTangentWeight(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a304c0
	float GetLeaveTangent(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a30440
	enum class ERichCurveInterpMode GetInterpolationMode(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a303d0
	float GetArriveTangentWeight(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a30130
	float GetArriveTangent(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19fb940
};

// Class SequencerScripting.MovieSceneScriptingActualFloatKey
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneScriptingActualFloatKey : UMovieSceneScriptingFloatKey {
	char pad_40[0x20]; // 0x40(0x20)
};

// Class SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneScriptingDoubleAsFloatKey : UMovieSceneScriptingFloatKey {
	char pad_40[0x20]; // 0x40(0x20)
};

// Class SequencerScripting.MovieSceneScriptingFloatChannel
// Size: 0x80 (Inherited: 0x30)
struct UMovieSceneScriptingFloatChannel : UMovieSceneScriptingChannel {
	char pad_30[0x50]; // 0x30(0x50)

	void SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation); // Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation // (Final|Native|Public|BlueprintCallable) // @ game+0x1a319b0
	void SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation); // Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation // (Final|Native|Public|BlueprintCallable) // @ game+0x1a31840
	void SetDefault(float InDefaultValue); // Function SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x1a311f0
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x19f9e50
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x1a30d40
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a30b30
	enum class ERichCurveExtrapolation GetPreInfinityExtrapolation(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a30730
	enum class ERichCurveExtrapolation GetPostInfinityExtrapolation(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a30650
	int32_t GetNumKeys(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a30560
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a26da0
	float GetDefault(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a30200
	struct TArray<float> EvaluateKeys(struct FSequencerScriptingRange Range, struct FFrameRate FrameRate); // Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a2fe30
	struct FSequencerScriptingRange ComputeEffectiveRange(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a2fc70
	struct UMovieSceneScriptingFloatKey* AddKey(struct FFrameNumber& InTime, float NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation); // Function SequencerScripting.MovieSceneScriptingFloatChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a2f8f0
};

// Class SequencerScripting.MovieSceneScriptingIntegerKey
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneScriptingIntegerKey : UMovieSceneScriptingKey {
	char pad_40[0x20]; // 0x40(0x20)

	void SetValue(int32_t InNewValue); // Function SequencerScripting.MovieSceneScriptingIntegerKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1a321d0
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingIntegerKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a28a00
	int32_t GetValue(); // Function SequencerScripting.MovieSceneScriptingIntegerKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a309f0
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingIntegerKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a27340
};

// Class SequencerScripting.MovieSceneScriptingIntegerChannel
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneScriptingIntegerChannel : UMovieSceneScriptingChannel {
	char pad_30[0x30]; // 0x30(0x30)

	void SetDefault(int32_t InDefaultValue); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x1a31270
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x19f9e50
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x1a30d60
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a30c10
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a26da0
	int32_t GetDefault(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a30300
	struct UMovieSceneScriptingIntegerKey* AddKey(struct FFrameNumber& InTime, int32_t NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a2fab0
};

// Class SequencerScripting.MovieSceneScriptingObjectPathKey
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneScriptingObjectPathKey : UMovieSceneScriptingKey {
	char pad_40[0x20]; // 0x40(0x20)

	void SetValue(struct UObject* InNewValue); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1a39770
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a39520
	struct UObject* GetValue(); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a37870
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a27340
};

// Class SequencerScripting.MovieSceneScriptingObjectPathChannel
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneScriptingObjectPathChannel : UMovieSceneScriptingChannel {
	char pad_30[0x30]; // 0x30(0x30)

	void SetDefault(struct UObject* InDefaultValue); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x1a38440
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x19f9e50
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x1a27e10
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a37ab0
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a26da0
	struct UObject* GetDefault(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a36800
	struct UMovieSceneScriptingObjectPathKey* AddKey(struct FFrameNumber InTime, struct UObject* NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1a35310
};

// Class SequencerScripting.MovieSceneScriptingStringKey
// Size: 0x60 (Inherited: 0x40)
struct UMovieSceneScriptingStringKey : UMovieSceneScriptingKey {
	char pad_40[0x20]; // 0x40(0x20)

	void SetValue(struct FString InNewValue); // Function SequencerScripting.MovieSceneScriptingStringKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1a398c0
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingStringKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a39520
	struct FString GetValue(); // Function SequencerScripting.MovieSceneScriptingStringKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a378e0
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingStringKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a27340
};

// Class SequencerScripting.MovieSceneScriptingStringChannel
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneScriptingStringChannel : UMovieSceneScriptingChannel {
	char pad_30[0x30]; // 0x30(0x30)

	void SetDefault(struct FString InDefaultValue); // Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x1a38500
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x19f9e50
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x1a30c90
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a37af0
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a26da0
	struct FString GetDefault(); // Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a36830
	struct UMovieSceneScriptingStringKey* AddKey(struct FFrameNumber& InTime, struct FString NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a35470
};

// Class SequencerScripting.MovieSceneSectionExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneSectionExtensions : UBlueprintFunctionLibrary {

	void SetStartFrameSeconds(struct UMovieSceneSection* Section, float StartTime); // Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a392c0
	void SetStartFrameBounded(struct UMovieSceneSection* Section, bool bIsBounded); // Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a39200
	void SetStartFrame(struct UMovieSceneSection* Section, int32_t StartFrame); // Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a39140
	void SetRangeSeconds(struct UMovieSceneSection* Section, float StartTime, float EndTime); // Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a38f80
	void SetRange(struct UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame); // Function SequencerScripting.MovieSceneSectionExtensions.SetRange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a38e80
	void SetEndFrameSeconds(struct UMovieSceneSection* Section, float EndTime); // Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a38900
	void SetEndFrameBounded(struct UMovieSceneSection* Section, bool bIsBounded); // Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a38840
	void SetEndFrame(struct UMovieSceneSection* Section, int32_t EndFrame); // Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a38780
	bool HasStartFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a37c30
	bool HasEndFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a37ba0
	float GetStartFrameSeconds(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a376b0
	int32_t GetStartFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a37620
	int32_t GetParentSequenceFrame(struct UMovieSceneSubSection* Section, int32_t InFrame, struct UMovieSceneSequence* ParentSequence); // Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a36e90
	float GetEndFrameSeconds(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a36af0
	int32_t GetEndFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a36a60
	struct TArray<struct UMovieSceneScriptingChannel*> GetChannelsByType(struct UMovieSceneSection* Section, struct UMovieSceneScriptingChannel* ChannelType); // Function SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a35e70
	struct TArray<struct UMovieSceneScriptingChannel*> GetChannels(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetChannels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a366a0
	struct TArray<struct UMovieSceneScriptingChannel*> GetAllChannels(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAllChannels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a36450
	struct TArray<struct UMovieSceneScriptingChannel*> FindChannelsByType(struct UMovieSceneSection* Section, struct UMovieSceneScriptingChannel* ChannelType); // Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a35e70
};

// Class SequencerScripting.MovieSceneSequenceExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneSequenceExtensions : UBlueprintFunctionLibrary {

	void SortMarkedFrames(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a39ae0
	void SetWorkRangeStart(struct UMovieSceneSequence* InSequence, float StartTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a39a20
	void SetWorkRangeEnd(struct UMovieSceneSequence* InSequence, float EndTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a39a20
	void SetViewRangeStart(struct UMovieSceneSequence* InSequence, float StartTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a39a20
	void SetViewRangeEnd(struct UMovieSceneSequence* InSequence, float EndTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a39a20
	void SetTickResolutionDirectly(struct UMovieSceneSequence* Sequence, struct FFrameRate TickResolution); // Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a39450
	void SetTickResolution(struct UMovieSceneSequence* Sequence, struct FFrameRate TickResolution); // Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a39380
	void SetReadOnly(struct UMovieSceneSequence* Sequence, bool bInReadOnly); // Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a39080
	void SetPlaybackStartSeconds(struct UMovieSceneSequence* Sequence, float StartTime); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a38dc0
	void SetPlaybackStart(struct UMovieSceneSequence* Sequence, int32_t StartFrame); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a38d00
	void SetPlaybackEndSeconds(struct UMovieSceneSequence* Sequence, float EndTime); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a38c40
	void SetPlaybackEnd(struct UMovieSceneSequence* Sequence, int32_t EndFrame); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a38b80
	void SetMarkedFrame(struct UMovieSceneSequence* Sequence, int32_t InMarkIndex, struct FFrameNumber InFrameNumber); // Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1a38a80
	void SetEvaluationType(struct UMovieSceneSequence* InSequence, enum class EMovieSceneEvaluationType InEvaluationType); // Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a389c0
	void SetDisplayRate(struct UMovieSceneSequence* Sequence, struct FFrameRate DisplayRate); // Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a386b0
	void SetClockSource(struct UMovieSceneSequence* InSequence, enum class EUpdateClockSource InClockSource); // Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a38380
	struct FSequencerBindingProxy ResolveBindingID(struct UMovieSceneSequence* MasterSequence, struct FMovieSceneObjectBindingID InObjectBindingID); // Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a38260
	bool RemoveMasterTrack(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* MasterTrack); // Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a38190
	struct FSequencerScriptingRange MakeRangeSeconds(struct UMovieSceneSequence* Sequence, float StartTime, float Duration); // Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a38080
	struct FSequencerScriptingRange MakeRange(struct UMovieSceneSequence* Sequence, int32_t StartFrame, int32_t Duration); // Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a37f70
	struct FMovieSceneObjectBindingID MakeBindingID(struct UMovieSceneSequence* MasterSequence, struct FSequencerBindingProxy& InBinding, enum class EMovieSceneObjectBindingSpace Space); // Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a37e30
	struct TArray<struct UObject*> LocateBoundObjects(struct UMovieSceneSequence* Sequence, struct FSequencerBindingProxy& InBinding, struct UObject* Context); // Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a37cc0
	bool IsReadOnly(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fa6a0
	float GetWorkRangeStart(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a37a20
	float GetWorkRangeEnd(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a37a20
	float GetViewRangeStart(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a37a20
	float GetViewRangeEnd(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a37a20
	struct FTimecode GetTimecodeSource(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a377d0
	struct FFrameRate GetTickResolution(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a37740
	struct TArray<struct FSequencerBindingProxy> GetSpawnables(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a37550
	struct TArray<struct UMovieSceneFolder*> GetRootFoldersInSequence(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a37480
	struct TArray<struct FSequencerBindingProxy> GetPossessables(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a373b0
	struct FMovieSceneObjectBindingID GetPortableBindingID(struct UMovieSceneSequence* MasterSequence, struct UMovieSceneSequence* DestinationSequence, struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a37270
	float GetPlaybackStartSeconds(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a371e0
	int32_t GetPlaybackStart(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a37150
	struct FSequencerScriptingRange GetPlaybackRange(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a370b0
	float GetPlaybackEndSeconds(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a37020
	int32_t GetPlaybackEnd(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a36f90
	struct UMovieScene* GetMovieScene(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a36e00
	struct TArray<struct UMovieSceneTrack*> GetMasterTracks(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a36d30
	struct TArray<struct FMovieSceneMarkedFrame> GetMarkedFrames(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a36c10
	enum class EMovieSceneEvaluationType GetEvaluationType(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a36b80
	struct FFrameRate GetDisplayRate(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a369d0
	enum class EUpdateClockSource GetClockSource(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a36770
	struct TArray<struct FSequencerBindingProxy> GetBindings(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a365d0
	struct FMovieSceneObjectBindingID GetBindingID(struct FSequencerBindingProxy& InBinding); // Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a36520
	int32_t FindNextMarkedFrame(struct UMovieSceneSequence* Sequence, struct FFrameNumber InFrameNumber, bool bForward); // Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1a36350
	struct TArray<struct UMovieSceneTrack*> FindMasterTracksByType(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a36240
	struct TArray<struct UMovieSceneTrack*> FindMasterTracksByExactType(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a36130
	int32_t FindMarkedFrameByLabel(struct UMovieSceneSequence* Sequence, struct FString InLabel); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a36050
	int32_t FindMarkedFrameByFrameNumber(struct UMovieSceneSequence* Sequence, struct FFrameNumber InFrameNumber); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1a35f80
	struct FSequencerBindingProxy FindBindingByName(struct UMovieSceneSequence* Sequence, struct FString Name); // Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a35d30
	struct FSequencerBindingProxy FindBindingById(struct UMovieSceneSequence* Sequence, struct FGuid BindingID); // Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1a35c40
	void DeleteMarkedFrames(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a35bc0
	void DeleteMarkedFrame(struct UMovieSceneSequence* Sequence, int32_t DeleteIndex); // Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a35b00
	struct FSequencerBindingProxy AddSpawnableFromInstance(struct UMovieSceneSequence* Sequence, struct UObject* ObjectToSpawn); // Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a35a20
	struct FSequencerBindingProxy AddSpawnableFromClass(struct UMovieSceneSequence* Sequence, struct UObject* ClassToSpawn); // Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a35a20
	struct UMovieSceneFolder* AddRootFolderToSequence(struct UMovieSceneSequence* Sequence, struct FString NewFolderName); // Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a358f0
	struct FSequencerBindingProxy AddPossessable(struct UMovieSceneSequence* Sequence, struct UObject* ObjectToPossess); // Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a35810
	struct UMovieSceneTrack* AddMasterTrack(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a35740
	int32_t AddMarkedFrame(struct UMovieSceneSequence* Sequence, struct FMovieSceneMarkedFrame& InMarkedFrame); // Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a35640
};

// Class SequencerScripting.MovieSceneTrackExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneTrackExtensions : UBlueprintFunctionLibrary {

	void SetTrackRowDisplayName(struct UMovieSceneTrack* Track, struct FText& InName, int32_t RowIndex); // Function SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a3b970
	void SetSortingOrder(struct UMovieSceneTrack* Track, int32_t SortingOrder); // Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a3b6e0
	void SetSectionToKey(struct UMovieSceneTrack* Track, struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a3b620
	void SetDisplayName(struct UMovieSceneTrack* Track, struct FText& InName); // Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a3b280
	void SetColorTint(struct UMovieSceneTrack* Track, struct FColor& ColorTint); // Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a3b1c0
	void RemoveSection(struct UMovieSceneTrack* Track, struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a3b070
	struct FText GetTrackRowDisplayName(struct UMovieSceneTrack* Track, int32_t RowIndex); // Function SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a3ad70
	int32_t GetSortingOrder(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a3aba0
	struct UMovieSceneSection* GetSectionToKey(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a3aa40
	struct TArray<struct UMovieSceneSection*> GetSections(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetSections // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a3aad0
	struct FText GetDisplayName(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a3a780
	struct FColor GetColorTint(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1a26bd0
	struct UMovieSceneSection* AddSection(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.AddSection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a3a6f0
};

// Class SequencerScripting.MovieSceneFloatVectorTrackExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneFloatVectorTrackExtensions : UBlueprintFunctionLibrary {

	void SetNumChannelsUsed(struct UMovieSceneFloatVectorTrack* Track, int32_t InNumChannelsUsed); // Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.SetNumChannelsUsed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a3b560
	int32_t GetNumChannelsUsed(struct UMovieSceneFloatVectorTrack* Track); // Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a3a9b0
};

// Class SequencerScripting.MovieSceneDoubleVectorTrackExtensions
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneDoubleVectorTrackExtensions : UBlueprintFunctionLibrary {

	void SetNumChannelsUsed(struct UMovieSceneDoubleVectorTrack* Track, int32_t InNumChannelsUsed); // Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a3b560
	int32_t GetNumChannelsUsed(struct UMovieSceneDoubleVectorTrack* Track); // Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a3a9b0
};

// Class SequencerScripting.SequencerScriptingRangeExtensions
// Size: 0x28 (Inherited: 0x28)
struct USequencerScriptingRangeExtensions : UBlueprintFunctionLibrary {

	void SetStartSeconds(struct FSequencerScriptingRange& Range, float Start); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a3b880
	void SetStartFrame(struct FSequencerScriptingRange& Range, int32_t Start); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a3b7a0
	void SetEndSeconds(struct FSequencerScriptingRange& Range, float End); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a3b470
	void SetEndFrame(struct FSequencerScriptingRange& Range, int32_t End); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a3b390
	void RemoveStart(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a3b130
	void RemoveEnd(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a3afe0
	bool HasStart(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a3af40
	bool HasEnd(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a3aea0
	float GetStartSeconds(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a3acd0
	int32_t GetStartFrame(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a3ac30
	float GetEndSeconds(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a3a910
	int32_t GetEndFrame(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a3a870
};

