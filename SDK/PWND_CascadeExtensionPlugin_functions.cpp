// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CascadeExtensionPlugin.ForcePointDataProvider.GetForcePoints
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FForcePoints            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FForcePoints UForcePointDataProvider::GetForcePoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function CascadeExtensionPlugin.ForcePointDataProvider.GetForcePoints");

	UForcePointDataProvider_GetForcePoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CascadeExtensionPlugin.MeshDataProvider.GetMeshTriangleData
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FMeshTriangleData       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshTriangleData UMeshDataProvider::GetMeshTriangleData()
{
	static auto fn = UObject::FindObject<UFunction>("Function CascadeExtensionPlugin.MeshDataProvider.GetMeshTriangleData");

	UMeshDataProvider_GetMeshTriangleData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CascadeExtensionPlugin.MeshDataProvider.GetDataRevision
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDataProvider::GetDataRevision()
{
	static auto fn = UObject::FindObject<UFunction>("Function CascadeExtensionPlugin.MeshDataProvider.GetDataRevision");

	UMeshDataProvider_GetDataRevision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CascadeExtensionPlugin.ParticleDataProvider.UpdateParticle
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FParticleProperties     currentParticleProperties      (Parm)
// struct FParticleProperties     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FParticleProperties UParticleDataProvider::UpdateParticle(const struct FParticleProperties& currentParticleProperties)
{
	static auto fn = UObject::FindObject<UFunction>("Function CascadeExtensionPlugin.ParticleDataProvider.UpdateParticle");

	UParticleDataProvider_UpdateParticle_Params params;
	params.currentParticleProperties = currentParticleProperties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CascadeExtensionPlugin.ParticleDataProvider.SpawnParticle
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FParticleProperties     currentParticleProperties      (Parm)
// struct FParticleProperties     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FParticleProperties UParticleDataProvider::SpawnParticle(const struct FParticleProperties& currentParticleProperties)
{
	static auto fn = UObject::FindObject<UFunction>("Function CascadeExtensionPlugin.ParticleDataProvider.SpawnParticle");

	UParticleDataProvider_SpawnParticle_Params params;
	params.currentParticleProperties = currentParticleProperties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CascadeExtensionPlugin.ParticleModuleLocationMesh.OnCachedActorDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void UParticleModuleLocationMesh::OnCachedActorDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CascadeExtensionPlugin.ParticleModuleLocationMesh.OnCachedActorDestroyed");

	UParticleModuleLocationMesh_OnCachedActorDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
