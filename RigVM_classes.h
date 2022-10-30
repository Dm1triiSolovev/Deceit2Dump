// Class RigVM.RigVM
// Size: 0x2c0 (Inherited: 0x28)
struct URigVM : UObject {
	struct URigVMMemoryStorage* WorkMemoryStorageObject; // 0x28(0x08)
	struct URigVMMemoryStorage* LiteralMemoryStorageObject; // 0x30(0x08)
	struct URigVMMemoryStorage* DebugMemoryStorageObject; // 0x38(0x08)
	char pad_40[0x20]; // 0x40(0x20)
	struct FRigVMByteCode ByteCodeStorage; // 0x60(0x30)
	char pad_90[0x8]; // 0x90(0x08)
	struct FRigVMInstructionArray Instructions; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)
	struct FRigVMExecuteContext Context; // 0xb0(0xc0)
	uint32_t NumExecutions; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct TArray<struct FName> FunctionNamesStorage; // 0x178(0x10)
	char pad_188[0x20]; // 0x188(0x20)
	struct TArray<struct FRigVMParameter> Parameters; // 0x1a8(0x10)
	struct TMap<struct FName, int32_t> ParametersNameMap; // 0x1b8(0x50)
	char pad_208[0x98]; // 0x208(0x98)
	struct URigVM* DeferredVMToCopy; // 0x2a0(0x08)
	char pad_2A8[0x18]; // 0x2a8(0x18)

	void SetParameterValueVector2D(struct FName& InParameterName, struct FVector2D& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueVector2D // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4e5a450
	void SetParameterValueVector(struct FName& InParameterName, struct FVector& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4e5a580
	void SetParameterValueTransform(struct FName& InParameterName, struct FTransform& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4e5a2a0
	void SetParameterValueString(struct FName& InParameterName, struct FString InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e5a170
	void SetParameterValueQuat(struct FName& InParameterName, struct FQuat& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4e5a040
	void SetParameterValueName(struct FName& InParameterName, struct FName& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e59f10
	void SetParameterValueInt(struct FName& InParameterName, int32_t InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueInt // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e59df0
	void SetParameterValueFloat(struct FName& InParameterName, float InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e59cc0
	void SetParameterValueDouble(struct FName& InParameterName, double InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueDouble // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e59b90
	void SetParameterValueBool(struct FName& InParameterName, bool InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e59a60
	struct FRigVMStatistics GetStatistics(); // Function RigVM.RigVM.GetStatistics // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4e59a10
	struct FString GetRigVMFunctionName(int32_t InFunctionIndex); // Function RigVM.RigVM.GetRigVMFunctionName // (Final|Native|Public|Const) // @ game+0x4e59930
	struct FVector2D GetParameterValueVector2D(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueVector2D // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4e596f0
	struct FVector GetParameterValueVector(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4e59800
	struct FTransform GetParameterValueTransform(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4e59550
	struct FString GetParameterValueString(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e59340
	struct FQuat GetParameterValueQuat(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4e59210
	struct FName GetParameterValueName(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e59120
	int32_t GetParameterValueInt(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueInt // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e59030
	float GetParameterValueFloat(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e58f40
	double GetParameterValueDouble(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueDouble // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e58e50
	bool GetParameterValueBool(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e58d60
	bool Execute(struct FName& InEntryName); // Function RigVM.RigVM.Execute // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4e58cc0
	int32_t AddRigVMFunction(struct UScriptStruct* InRigVMStruct, struct FName& InMethodName); // Function RigVM.RigVM.AddRigVMFunction // (Final|Native|Public|HasOutParms) // @ game+0x4e58be0
};

// Class RigVM.RigVMMemoryStorageGeneratorClass
// Size: 0x268 (Inherited: 0x230)
struct URigVMMemoryStorageGeneratorClass : UClass {
	char pad_230[0x38]; // 0x230(0x38)
};

// Class RigVM.RigVMMemoryStorage
// Size: 0x28 (Inherited: 0x28)
struct URigVMMemoryStorage : UObject {
};

