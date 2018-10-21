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

// Function WallRun_CameraModifier.WallRun_CameraModifier_C.GetDesiredRoll
struct UWallRun_CameraModifier_C_GetDesiredRoll_Params
{
	struct FRotator                                    VIewRot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Roll;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WallRun_CameraModifier.WallRun_CameraModifier_C.BlueprintModifyCamera
struct UWallRun_CameraModifier_C_BlueprintModifyCamera_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ViewLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator*                                   ViewRotation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             FOV;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewViewLocation;                                          // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    NewViewRotation;                                          // (Parm, OutParm, IsPlainOldData)
	float                                              NewFOV;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
