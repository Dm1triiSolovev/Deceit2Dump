// Enum MetasoundFrontend.EMetasoundFrontendClassType
enum class EMetasoundFrontendClassType : uint8 {
	External = 0,
	Graph = 1,
	Input = 2,
	Output = 3,
	Literal = 4,
	Variable = 5,
	VariableDeferredAccessor = 6,
	VariableAccessor = 7,
	VariableMutator = 8,
	Invalid = 9,
	EMetasoundFrontendClassType_MAX = 10
};

// Enum MetasoundFrontend.EMetasoundFrontendNodeStyleDisplayVisibility
enum class EMetasoundFrontendNodeStyleDisplayVisibility : uint8 {
	Visible = 0,
	Hidden = 1,
	EMetasoundFrontendNodeStyleDisplayVisibility_MAX = 2
};

// Enum MetasoundFrontend.EMetasoundFrontendStyleEdgeDisplay
enum class EMetasoundFrontendStyleEdgeDisplay : uint8 {
	Default = 0,
	Inherited = 1,
	Hidden = 2,
	EMetasoundFrontendStyleEdgeDisplay_MAX = 3
};

// Enum MetasoundFrontend.EMetasoundFrontendLiteralType
enum class EMetasoundFrontendLiteralType : uint8 {
	None = 0,
	Boolean = 1,
	Integer = 2,
	Float = 3,
	String = 4,
	UObject = 5,
	NoneArray = 6,
	BooleanArray = 7,
	IntegerArray = 8,
	FloatArray = 9,
	StringArray = 10,
	UObjectArray = 11,
	Invalid = 12,
	EMetasoundFrontendLiteralType_MAX = 13
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendVersionNumber
// Size: 0x08 (Inherited: 0x00)
struct FMetasoundFrontendVersionNumber {
	int32_t Major; // 0x00(0x04)
	int32_t Minor; // 0x04(0x04)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendVersion
// Size: 0x10 (Inherited: 0x00)
struct FMetasoundFrontendVersion {
	struct FName Name; // 0x00(0x08)
	struct FMetasoundFrontendVersionNumber Number; // 0x08(0x08)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendVertex
// Size: 0x28 (Inherited: 0x00)
struct FMetasoundFrontendVertex {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
	struct FName TypeName; // 0x10(0x08)
	struct FGuid VertexID; // 0x18(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendVertexLiteral
// Size: 0x68 (Inherited: 0x00)
struct FMetasoundFrontendVertexLiteral {
	struct FGuid VertexID; // 0x00(0x10)
	struct FMetasoundFrontendLiteral Value; // 0x10(0x58)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendLiteral
// Size: 0x58 (Inherited: 0x00)
struct FMetasoundFrontendLiteral {
	enum class EMetasoundFrontendLiteralType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t AsNumDefault; // 0x04(0x04)
	struct TArray<bool> AsBoolean; // 0x08(0x10)
	struct TArray<int32_t> AsInteger; // 0x18(0x10)
	struct TArray<float> AsFloat; // 0x28(0x10)
	struct TArray<struct FString> AsString; // 0x38(0x10)
	struct TArray<struct UObject*> AsUObject; // 0x48(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendVariable
// Size: 0xe8 (Inherited: 0x00)
struct FMetasoundFrontendVariable {
	struct FName Name; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct FName TypeName; // 0x38(0x08)
	struct FMetasoundFrontendLiteral Literal; // 0x40(0x58)
	struct FGuid ID; // 0x98(0x10)
	struct FGuid VariableNodeID; // 0xa8(0x10)
	struct FGuid MutatorNodeID; // 0xb8(0x10)
	struct TArray<struct FGuid> AccessorNodeIDs; // 0xc8(0x10)
	struct TArray<struct FGuid> DeferredAccessorNodeIDs; // 0xd8(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeInterface
// Size: 0x30 (Inherited: 0x00)
struct FMetasoundFrontendNodeInterface {
	struct TArray<struct FMetasoundFrontendVertex> Inputs; // 0x00(0x10)
	struct TArray<struct FMetasoundFrontendVertex> Outputs; // 0x10(0x10)
	struct TArray<struct FMetasoundFrontendVertex> Environment; // 0x20(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeStyleDisplay
// Size: 0x58 (Inherited: 0x00)
struct FMetasoundFrontendNodeStyleDisplay {
	enum class EMetasoundFrontendNodeStyleDisplayVisibility Visibility; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<struct FGuid, struct FVector2D> Locations; // 0x08(0x50)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeStyle
// Size: 0x60 (Inherited: 0x00)
struct FMetasoundFrontendNodeStyle {
	struct FMetasoundFrontendNodeStyleDisplay Display; // 0x00(0x58)
	bool bMessageNodeUpdated; // 0x58(0x01)
	bool bIsPrivate; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendNode
// Size: 0xc8 (Inherited: 0x00)
struct FMetasoundFrontendNode {
	struct FGuid ID; // 0x00(0x10)
	struct FGuid ClassID; // 0x10(0x10)
	struct FName Name; // 0x20(0x08)
	struct FMetasoundFrontendNodeInterface Interface; // 0x28(0x30)
	struct TArray<struct FMetasoundFrontendVertexLiteral> InputLiterals; // 0x58(0x10)
	struct FMetasoundFrontendNodeStyle Style; // 0x68(0x60)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendEdge
// Size: 0x40 (Inherited: 0x00)
struct FMetasoundFrontendEdge {
	struct FGuid FromNodeID; // 0x00(0x10)
	struct FGuid FromVertexID; // 0x10(0x10)
	struct FGuid ToNodeID; // 0x20(0x10)
	struct FGuid ToVertexID; // 0x30(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendStyleEdge
// Size: 0x01 (Inherited: 0x00)
struct FMetasoundFrontendStyleEdge {
	enum class EMetasoundFrontendStyleEdgeDisplay Display; // 0x00(0x01)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendStyleEdgeClass
// Size: 0x0c (Inherited: 0x00)
struct FMetasoundFrontendStyleEdgeClass {
	struct FName TypeName; // 0x00(0x08)
	struct FMetasoundFrontendStyleEdge Style; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphStyle
// Size: 0x18 (Inherited: 0x00)
struct FMetasoundFrontendGraphStyle {
	bool bIsGraphEditable; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FMetasoundFrontendStyleEdgeClass> EdgeStyles; // 0x08(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendGraph
// Size: 0x48 (Inherited: 0x00)
struct FMetasoundFrontendGraph {
	struct TArray<struct FMetasoundFrontendNode> Nodes; // 0x00(0x10)
	struct TArray<struct FMetasoundFrontendEdge> Edges; // 0x10(0x10)
	struct TArray<struct FMetasoundFrontendVariable> Variables; // 0x20(0x10)
	struct FMetasoundFrontendGraphStyle Style; // 0x30(0x18)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendVertexMetadata
// Size: 0x01 (Inherited: 0x00)
struct FMetasoundFrontendVertexMetadata {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassVertex
// Size: 0x38 (Inherited: 0x28)
struct FMetasoundFrontendClassVertex : FMetasoundFrontendVertex {
	struct FGuid NodeID; // 0x28(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassStyleDisplay
// Size: 0x0c (Inherited: 0x00)
struct FMetasoundFrontendClassStyleDisplay {
	struct FName ImageName; // 0x00(0x08)
	bool bShowName; // 0x08(0x01)
	bool bShowInputNames; // 0x09(0x01)
	bool bShowOutputNames; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassInput
// Size: 0x90 (Inherited: 0x38)
struct FMetasoundFrontendClassInput : FMetasoundFrontendClassVertex {
	struct FMetasoundFrontendLiteral DefaultLiteral; // 0x38(0x58)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassVariable
// Size: 0x90 (Inherited: 0x38)
struct FMetasoundFrontendClassVariable : FMetasoundFrontendClassVertex {
	struct FMetasoundFrontendLiteral DefaultLiteral; // 0x38(0x58)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassOutput
// Size: 0x38 (Inherited: 0x38)
struct FMetasoundFrontendClassOutput : FMetasoundFrontendClassVertex {
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassEnvironmentVariable
// Size: 0x20 (Inherited: 0x00)
struct FMetasoundFrontendClassEnvironmentVariable {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
	struct FName TypeName; // 0x10(0x08)
	bool bIsRequired; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendInterfaceStyle
// Size: 0x01 (Inherited: 0x00)
struct FMetasoundFrontendInterfaceStyle {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassInterface
// Size: 0x48 (Inherited: 0x00)
struct FMetasoundFrontendClassInterface {
	struct FMetasoundFrontendInterfaceStyle InputStyle; // 0x00(0x01)
	struct FMetasoundFrontendInterfaceStyle OutputStyle; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FMetasoundFrontendClassInput> Inputs; // 0x08(0x10)
	struct TArray<struct FMetasoundFrontendClassOutput> Outputs; // 0x18(0x10)
	struct TArray<struct FMetasoundFrontendClassEnvironmentVariable> Environment; // 0x28(0x10)
	struct FGuid ChangeID; // 0x38(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendInterface
// Size: 0x58 (Inherited: 0x48)
struct FMetasoundFrontendInterface : FMetasoundFrontendClassInterface {
	struct FMetasoundFrontendVersion Version; // 0x48(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassName
// Size: 0x18 (Inherited: 0x00)
struct FMetasoundFrontendClassName {
	struct FName Namespace; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
	struct FName Variant; // 0x10(0x08)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassMetadata
// Size: 0x34 (Inherited: 0x00)
struct FMetasoundFrontendClassMetadata {
	struct FMetasoundFrontendClassName ClassName; // 0x00(0x18)
	struct FMetasoundFrontendVersionNumber Version; // 0x18(0x08)
	enum class EMetasoundFrontendClassType Type; // 0x20(0x01)
	bool bIsDeprecated; // 0x21(0x01)
	bool bAutoUpdateManagesInterface; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	struct FGuid ChangeID; // 0x24(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassStyle
// Size: 0x0c (Inherited: 0x00)
struct FMetasoundFrontendClassStyle {
	struct FMetasoundFrontendClassStyleDisplay Display; // 0x00(0x0c)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClass
// Size: 0xa8 (Inherited: 0x00)
struct FMetasoundFrontendClass {
	char pad_0[0x8]; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
	struct FMetasoundFrontendClassMetadata MetaData; // 0x18(0x34)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FMetasoundFrontendClassInterface Interface; // 0x50(0x48)
	struct FMetasoundFrontendClassStyle Style; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphClassPresetOptions
// Size: 0x58 (Inherited: 0x00)
struct FMetasoundFrontendGraphClassPresetOptions {
	bool bIsPreset; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSet<struct FName> InputsInheritingDefault; // 0x08(0x50)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphClass
// Size: 0x148 (Inherited: 0xa8)
struct FMetasoundFrontendGraphClass : FMetasoundFrontendClass {
	struct FMetasoundFrontendGraph Graph; // 0xa8(0x48)
	struct FMetasoundFrontendGraphClassPresetOptions PresetOptions; // 0xf0(0x58)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendDocumentMetadata
// Size: 0x10 (Inherited: 0x00)
struct FMetasoundFrontendDocumentMetadata {
	struct FMetasoundFrontendVersion Version; // 0x00(0x10)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendDocument
// Size: 0x1f8 (Inherited: 0x00)
struct FMetasoundFrontendDocument {
	char pad_0[0x10]; // 0x00(0x10)
	struct FMetasoundFrontendDocumentMetadata MetaData; // 0x10(0x10)
	struct TSet<struct FMetasoundFrontendVersion> Interfaces; // 0x20(0x50)
	struct FMetasoundFrontendGraphClass RootGraph; // 0x70(0x148)
	struct TArray<struct FMetasoundFrontendGraphClass> Subgraphs; // 0x1b8(0x10)
	struct TArray<struct FMetasoundFrontendClass> Dependencies; // 0x1c8(0x10)
	struct FMetasoundFrontendVersion ArchetypeVersion; // 0x1d8(0x10)
	struct TArray<struct FMetasoundFrontendVersion> InterfaceVersions; // 0x1e8(0x10)
};

