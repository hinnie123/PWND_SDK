#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CascadeExtensionPlugin.ForcePointDataProvider.GetForcePoints
struct UForcePointDataProvider_GetForcePoints_Params
{
	struct FForcePoints                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CascadeExtensionPlugin.MeshDataProvider.GetMeshTriangleData
struct UMeshDataProvider_GetMeshTriangleData_Params
{
	struct FMeshTriangleData                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CascadeExtensionPlugin.MeshDataProvider.GetDataRevision
struct UMeshDataProvider_GetDataRevision_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CascadeExtensionPlugin.ParticleDataProvider.UpdateParticle
struct UParticleDataProvider_UpdateParticle_Params
{
	struct FParticleProperties                         currentParticleProperties;                                // (Parm)
	struct FParticleProperties                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CascadeExtensionPlugin.ParticleDataProvider.SpawnParticle
struct UParticleDataProvider_SpawnParticle_Params
{
	struct FParticleProperties                         currentParticleProperties;                                // (Parm)
	struct FParticleProperties                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CascadeExtensionPlugin.ParticleModuleLocationMesh.OnCachedActorDestroyed
struct UParticleModuleLocationMesh_OnCachedActorDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
