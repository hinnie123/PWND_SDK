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

// Function WallRun_CameraModifier.WallRun_CameraModifier_C.GetDesiredRoll
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                VIewRot                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Roll                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWallRun_CameraModifier_C::GetDesiredRoll(const struct FRotator& VIewRot, float* Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function WallRun_CameraModifier.WallRun_CameraModifier_C.GetDesiredRoll");

	UWallRun_CameraModifier_C_GetDesiredRoll_Params params;
	params.VIewRot = VIewRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Roll != nullptr)
		*Roll = params.Roll;
}


// Function WallRun_CameraModifier.WallRun_CameraModifier_C.BlueprintModifyCamera
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ViewLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator*               ViewRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         FOV                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewViewLocation                (Parm, OutParm, IsPlainOldData)
// struct FRotator                NewViewRotation                (Parm, OutParm, IsPlainOldData)
// float                          NewFOV                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWallRun_CameraModifier_C::BlueprintModifyCamera(float* DeltaTime, struct FVector* ViewLocation, struct FRotator* ViewRotation, float* FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function WallRun_CameraModifier.WallRun_CameraModifier_C.BlueprintModifyCamera");

	UWallRun_CameraModifier_C_BlueprintModifyCamera_Params params;
	params.DeltaTime = DeltaTime;
	params.ViewLocation = ViewLocation;
	params.ViewRotation = ViewRotation;
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewViewLocation != nullptr)
		*NewViewLocation = params.NewViewLocation;
	if (NewViewRotation != nullptr)
		*NewViewRotation = params.NewViewRotation;
	if (NewFOV != nullptr)
		*NewFOV = params.NewFOV;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
