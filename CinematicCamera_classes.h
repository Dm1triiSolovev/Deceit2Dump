// Class CinematicCamera.CameraRig_Crane
// Size: 0x2a8 (Inherited: 0x278)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x278(0x04)
	float CraneYaw; // 0x27c(0x04)
	float CraneArmLength; // 0x280(0x04)
	bool bLockMountPitch; // 0x284(0x01)
	bool bLockMountYaw; // 0x285(0x01)
	char pad_286[0x2]; // 0x286(0x02)
	struct USceneComponent* TransformComponent; // 0x288(0x08)
	struct USceneComponent* CraneYawControl; // 0x290(0x08)
	struct USceneComponent* CranePitchControl; // 0x298(0x08)
	struct USceneComponent* CraneCameraMount; // 0x2a0(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x298 (Inherited: 0x278)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x278(0x04)
	bool bLockOrientationToRail; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct USceneComponent* TransformComponent; // 0x280(0x08)
	struct USplineComponent* RailSplineComponent; // 0x288(0x08)
	struct USceneComponent* RailCameraMount; // 0x290(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3fdcd20
};

// Class CinematicCamera.CineCameraActor
// Size: 0x9f0 (Inherited: 0x970)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x970(0x68)
	char pad_9D8[0x18]; // 0x9d8(0x18)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fdc950
};

// Class CinematicCamera.CineCameraComponent
// Size: 0xb30 (Inherited: 0xa20)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0xa20(0x0c)
	struct FCameraFilmbackSettings Filmback; // 0xa2c(0x0c)
	struct FCameraLensSettings LensSettings; // 0xa38(0x18)
	struct FCameraFocusSettings FocusSettings; // 0xa50(0x68)
	float CurrentFocalLength; // 0xab8(0x04)
	float CurrentAperture; // 0xabc(0x04)
	float CurrentFocusDistance; // 0xac0(0x04)
	char pad_AC4[0xc]; // 0xac4(0x0c)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0xad0(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0xae0(0x10)
	struct FString DefaultFilmbackPresetName; // 0xaf0(0x10)
	struct FString DefaultFilmbackPreset; // 0xb00(0x10)
	struct FString DefaultLensPresetName; // 0xb10(0x10)
	float DefaultLensFocalLength; // 0xb20(0x04)
	float DefaultLensFStop; // 0xb24(0x04)
	char pad_B28[0x8]; // 0xb28(0x08)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x3fdce90
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x3fdcdf0
	void SetCurrentFocalLength(float InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength // (Final|Native|Public|BlueprintCallable) // @ game+0x3fdcd70
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fdcd40
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fdcc40
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fdcbc0
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fdcb90
	struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3fdcab0
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fdca30
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fdc970
};

