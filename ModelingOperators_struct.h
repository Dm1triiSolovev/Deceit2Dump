// Enum ModelingOperators.ECSGOperation
enum class ECSGOperation : uint8 {
	DifferenceAB = 0,
	DifferenceBA = 1,
	Intersect = 2,
	Union = 3,
	ECSGOperation_MAX = 4
};

// Enum ModelingOperators.ETrimOperation
enum class ETrimOperation : uint8 {
	TrimA = 0,
	TrimB = 1,
	ETrimOperation_MAX = 2
};

// Enum ModelingOperators.ETrimSide
enum class ETrimSide : uint8 {
	RemoveInside = 0,
	RemoveOutside = 1,
	ETrimSide_MAX = 2
};

// Enum ModelingOperators.ENormalCalculationMethod
enum class ENormalCalculationMethod : uint8 {
	AreaWeighted = 0,
	AngleWeighted = 1,
	AreaAngleWeighting = 2,
	ENormalCalculationMethod_MAX = 3
};

// Enum ModelingOperators.ESplitNormalMethod
enum class ESplitNormalMethod : uint8 {
	UseExistingTopology = 0,
	FaceNormalThreshold = 1,
	FaceGroupID = 2,
	PerTriangle = 3,
	PerVertex = 4,
	ESplitNormalMethod_MAX = 5
};

// Enum ModelingOperators.EHoleFillOpFillType
enum class EHoleFillOpFillType : uint8 {
	TriangleFan = 0,
	PolygonEarClipping = 1,
	Planar = 2,
	Minimal = 3,
	Smooth = 4,
	EHoleFillOpFillType_MAX = 5
};

// Enum ModelingOperators.ERecomputeUVsPropertiesUnwrapType
enum class ERecomputeUVsPropertiesUnwrapType : uint8 {
	ExpMap = 0,
	Conformal = 1,
	IslandMerging = 2,
	ERecomputeUVsPropertiesUnwrapType_MAX = 3
};

// Enum ModelingOperators.ERecomputeUVsPropertiesIslandMode
enum class ERecomputeUVsPropertiesIslandMode : uint8 {
	PolyGroups = 0,
	ExistingUVs = 1,
	ERecomputeUVsPropertiesIslandMode_MAX = 2
};

// Enum ModelingOperators.ERecomputeUVsToolOrientationMode
enum class ERecomputeUVsToolOrientationMode : uint8 {
	None = 0,
	MinBounds = 1,
	ERecomputeUVsToolOrientationMode_MAX = 2
};

// Enum ModelingOperators.ERecomputeUVsPropertiesLayoutType
enum class ERecomputeUVsPropertiesLayoutType : uint8 {
	None = 0,
	Repack = 1,
	NormalizeToBounds = 2,
	NormalizeToWorld = 3,
	ERecomputeUVsPropertiesLayoutType_MAX = 4
};

// Enum ModelingOperators.ERemeshType
enum class ERemeshType : uint8 {
	Standard = 0,
	FullPass = 1,
	NormalFlow = 2,
	ERemeshType_MAX = 3
};

// Enum ModelingOperators.ERemeshSmoothingType
enum class ERemeshSmoothingType : uint8 {
	Uniform = 0,
	Cotangent = 1,
	MeanValue = 2,
	ERemeshSmoothingType_MAX = 3
};

// Enum ModelingOperators.EUVLayoutType
enum class EUVLayoutType : uint8 {
	Transform = 0,
	Stack = 1,
	Repack = 2,
	EUVLayoutType_MAX = 3
};

// Enum ModelingOperators.EUVProjectionMethod
enum class EUVProjectionMethod : uint8 {
	Box = 0,
	Cylinder = 1,
	Plane = 2,
	ExpMap = 3,
	EUVProjectionMethod_MAX = 4
};

// Enum ModelingOperators.EMorphologyOperation
enum class EMorphologyOperation : uint8 {
	Dilate = 0,
	Contract = 1,
	Close = 2,
	Open = 3,
	EMorphologyOperation_MAX = 4
};

