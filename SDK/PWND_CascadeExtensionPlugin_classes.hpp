#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CascadeExtensionPlugin.AbstractParticleModule
// 0x0030 (0x0060 - 0x0030)
class UAbstractParticleModule : public UParticleModule
{
public:
	struct FParticleRandomSeedInfo                     RandomSeedInfo;                                           // 0x0030(0x0020) (Edit)
	int                                                StartDelay;                                               // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxDuration;                                              // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LoopAfter;                                                // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CascadeExtensionPlugin.AbstractParticleModule");
		return ptr;
	}

};


// Class CascadeExtensionPlugin.ForcePointDataProvider
// 0x0000 (0x0028 - 0x0028)
class UForcePointDataProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CascadeExtensionPlugin.ForcePointDataProvider");
		return ptr;
	}


	struct FForcePoints GetForcePoints();
};


// Class CascadeExtensionPlugin.MeshDataProvider
// 0x0000 (0x0028 - 0x0028)
class UMeshDataProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CascadeExtensionPlugin.MeshDataProvider");
		return ptr;
	}


	struct FMeshTriangleData GetMeshTriangleData();
	int GetDataRevision();
};


// Class CascadeExtensionPlugin.ParticleDataProvider
// 0x0000 (0x0028 - 0x0028)
class UParticleDataProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CascadeExtensionPlugin.ParticleDataProvider");
		return ptr;
	}


	struct FParticleProperties UpdateParticle(const struct FParticleProperties& currentParticleProperties);
	struct FParticleProperties SpawnParticle(const struct FParticleProperties& currentParticleProperties);
};


// Class CascadeExtensionPlugin.ParticleDecalComponent
// 0x0000 (0x0420 - 0x0420)
class UParticleDecalComponent : public UDecalComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CascadeExtensionPlugin.ParticleDecalComponent");
		return ptr;
	}

};


// Class CascadeExtensionPlugin.ParticleModuleColorTexture
// 0x0050 (0x00B0 - 0x0060)
class UParticleModuleColorTexture : public UAbstractParticleModule
{
public:
	class UTexture2D*                                  ColorIndexTexture;                                        // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateWithTick;                                           // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	struct FBox                                        MapBounds;                                                // 0x006C(0x001C) (Edit, IsPlainOldData)
	TEnumAsByte<ESpaceAxis>                            ParticleAxisToTextureX;                                   // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpaceAxis>                            ParticleAxisToTextureY;                                   // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	float                                              Intensity;                                                // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseTextureAlpha;                                          // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1F];                                      // 0x0091(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CascadeExtensionPlugin.ParticleModuleColorTexture");
		return ptr;
	}

};


// Class CascadeExtensionPlugin.ParticleModuleCustomData
// 0x0010 (0x0070 - 0x0060)
class UParticleModuleCustomData : public UAbstractParticleModule
{
public:
	struct FName                                       DataProviderParameterName;                                // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UpdatedSpawnedParticles;                                  // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UpdatedTickedParticles;                                   // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseLocationFromProvider;                                  // 0x006A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseVelocityFromProvider;                                  // 0x006B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseSizeFromProvider;                                      // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseColorFromProvider;                                     // 0x006D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseRotationFromProvider;                                  // 0x006E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseRotationRateFromProvider;                              // 0x006F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CascadeExtensionPlugin.ParticleModuleCustomData");
		return ptr;
	}

};


// Class CascadeExtensionPlugin.ParticleModuleDecalComponent
// 0x00C8 (0x0128 - 0x0060)
class UParticleModuleDecalComponent : public UAbstractParticleModule
{
public:
	TArray<class UMaterialInterface*>                  DecalMaterials;                                           // 0x0060(0x0010) (Edit, ZeroConstructor)
	struct FRawDistributionVector                      DecalScale;                                               // 0x0070(0x0050) (Edit)
	struct FRawDistributionVector                      DecalRotation;                                            // 0x00C0(0x0050) (Edit)
	bool                                               RotateToParticleVelocity;                                 // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	int                                                SortOrder;                                                // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OptimizeDecalComponentUsage;                              // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FName                                       MaterialColorParameter;                                   // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CascadeExtensionPlugin.ParticleModuleDecalComponent");
		return ptr;
	}

};


// Class CascadeExtensionPlugin.ParticleModuleForcePoints
// 0x0028 (0x0088 - 0x0060)
class UParticleModuleForcePoints : public UAbstractParticleModule
{
public:
	float                                              Intensity;                                                // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<struct FVector>                             Points;                                                   // 0x0068(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EDistanceWeight>                       SeparationDistanceWeight;                                 // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              DistanceScale;                                            // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DynamicForcePointProviderName;                            // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CascadeExtensionPlugin.ParticleModuleForcePoints");
		return ptr;
	}

};


// Class CascadeExtensionPlugin.ParticleModuleLocationDonut
// 0x0018 (0x0078 - 0x0060)
class UParticleModuleLocationDonut : public UAbstractParticleModule
{
public:
	struct FVector                                     Center;                                                   // 0x0060(0x000C) (Edit, IsPlainOldData)
	float                                              MinRadius;                                                // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRadius;                                                // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SurfaceOnly;                                              // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsFlat;                                                   // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0076(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CascadeExtensionPlugin.ParticleModuleLocationDonut");
		return ptr;
	}

};


// Class CascadeExtensionPlugin.ParticleModuleLocationHeightmap
// 0x0048 (0x00A8 - 0x0060)
class UParticleModuleLocationHeightmap : public UAbstractParticleModule
{
public:
	class UTexture2D*                                  HeightmapTexture;                                         // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateWithTick;                                           // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SmoothUpdate;                                             // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	struct FBox                                        MapBounds;                                                // 0x006C(0x001C) (Edit, IsPlainOldData)
	float                                              Intensity;                                                // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x008C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CascadeExtensionPlugin.ParticleModuleLocationHeightmap");
		return ptr;
	}

};


// Class CascadeExtensionPlugin.ParticleModuleLocationJiggle
// 0x0050 (0x00B0 - 0x0060)
class UParticleModuleLocationJiggle : public UAbstractParticleModule
{
public:
	struct FRawDistributionVector                      Intensity;                                                // 0x0060(0x0050) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CascadeExtensionPlugin.ParticleModuleLocationJiggle");
		return ptr;
	}

};


// Class CascadeExtensionPlugin.ParticleModuleLocationMesh
// 0x00F0 (0x0150 - 0x0060)
class UParticleModuleLocationMesh : public UAbstractParticleModule
{
public:
	class UStaticMesh*                                 SurfaceMesh;                                              // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DynamicMeshParameterName;                                 // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  MeshTransform;                                            // 0x0070(0x0030) (Edit, IsPlainOldData)
	bool                                               EqualTriangeWeight;                                       // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	struct FRawDistributionFloat                       VelocityScale;                                            // 0x00A8(0x0038) (Edit)
	unsigned char                                      UnknownData01[0x70];                                      // 0x00E0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CascadeExtensionPlugin.ParticleModuleLocationMesh");
		return ptr;
	}


	void OnCachedActorDestroyed(class AActor* DestroyedActor);
};


// Class CascadeExtensionPlugin.ParticleModuleLocationSpiral
// 0x00D8 (0x0138 - 0x0060)
class UParticleModuleLocationSpiral : public UAbstractParticleModule
{
public:
	struct FRawDistributionVector                      StartLocation;                                            // 0x0060(0x0050) (Edit)
	struct FRawDistributionFloat                       Radius;                                                   // 0x00B0(0x0038) (Edit)
	float                                              DeltaAngle;                                               // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EllipseA;                                                 // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EllipseB;                                                 // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FRawDistributionFloat                       DiscHeight;                                               // 0x00F8(0x0038) (Edit)
	float                                              FalloffFactor;                                            // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CascadeExtensionPlugin.ParticleModuleLocationSpiral");
		return ptr;
	}

};


// Class CascadeExtensionPlugin.ParticleModuleSizeBySpeedOverTime
// 0x0070 (0x00D0 - 0x0060)
class UParticleModuleSizeBySpeedOverTime : public UAbstractParticleModule
{
public:
	struct FRawDistributionVector                      Size;                                                     // 0x0060(0x0050) (Edit)
	bool                                               InvertSpeed;                                              // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	struct FVector                                     MaxSize;                                                  // 0x00B4(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     MinSize;                                                  // 0x00C0(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CascadeExtensionPlugin.ParticleModuleSizeBySpeedOverTime");
		return ptr;
	}

};


// Class CascadeExtensionPlugin.ParticleModuleSortOrder
// 0x0008 (0x0068 - 0x0060)
class UParticleModuleSortOrder : public UAbstractParticleModule
{
public:
	int                                                SortOrder;                                                // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CascadeExtensionPlugin.ParticleModuleSortOrder");
		return ptr;
	}

};


// Class CascadeExtensionPlugin.ParticleModuleSwarmMovement
// 0x0038 (0x0098 - 0x0060)
class UParticleModuleSwarmMovement : public UAbstractParticleModule
{
public:
	float                                              PerceptionRadius;                                         // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxVelocity;                                              // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SeparationWeight;                                         // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AlignmentWeight;                                          // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CohesionWeight;                                           // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlindspotAngleDeg;                                        // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDistanceWeight>                       SeparationDistanceWeight;                                 // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	TArray<struct FVector>                             SteeringTargets;                                          // 0x0080(0x0010) (Edit, ZeroConstructor)
	float                                              SteeringWeight;                                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDistanceWeight>                       SteeringTargetDistanceWeight;                             // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0095(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CascadeExtensionPlugin.ParticleModuleSwarmMovement");
		return ptr;
	}

};


// Class CascadeExtensionPlugin.ParticleModuleVelocityTurbulence
// 0x0020 (0x0080 - 0x0060)
class UParticleModuleVelocityTurbulence : public UAbstractParticleModule
{
public:
	struct FVector                                     Intensity;                                                // 0x0060(0x000C) (Edit, IsPlainOldData)
	float                                              LengthScale;                                              // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Tightness;                                                // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxVelocity;                                              // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CascadeExtensionPlugin.ParticleModuleVelocityTurbulence");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
