#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum CascadeExtensionPlugin.EDistanceWeight
enum class EDistanceWeight : uint8_t
{
	LINEAR                         = 0,
	INVERSE_LINEAR                 = 1,
	QUADRATIC                      = 2,
	INVERSE_QUAD                   = 3,
	W_Max                          = 4,
	EDistanceWeight_MAX            = 5
};


// Enum CascadeExtensionPlugin.ESpaceAxis
enum class ESpaceAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	Ax_Max                         = 3,
	ESpaceAxis_MAX                 = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CascadeExtensionPlugin.ForcePoints
// 0x0020
struct FForcePoints
{
	float                                              Intensity;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FVector>                             PointLocations;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EDistanceWeight>                       SeparationDistanceWeight;                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              DistanceScale;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CascadeExtensionPlugin.TriangleIndices
// 0x000C
struct FTriangleIndices
{
	int                                                v0;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                v1;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                v2;                                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CascadeExtensionPlugin.MeshTriangleData
// 0x0020
struct FMeshTriangleData
{
	TArray<struct FVector>                             Vertices;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FTriangleIndices>                    Indices;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct CascadeExtensionPlugin.ParticleProperties
// 0x0044
struct FParticleProperties
{
	int                                                ParticleId;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              RelativeTime;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0014(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Size;                                                     // 0x0020(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x002C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Rotation;                                                 // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationRate;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
