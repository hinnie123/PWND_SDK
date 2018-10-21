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

// Function GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C.ExecutePullIn
struct AGrappleHook_Base_Projectile_C_ExecutePullIn_Params
{
	class AActor*                                      PullInTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C.UserConstructionScript
struct AGrappleHook_Base_Projectile_C_UserConstructionScript_Params
{
};

// Function GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C.OnDetonate
struct AGrappleHook_Base_Projectile_C_OnDetonate_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bDestroy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C.ReceiveBeginPlay
struct AGrappleHook_Base_Projectile_C_ReceiveBeginPlay_Params
{
};

// Function GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C.OnTeamUpdated
struct AGrappleHook_Base_Projectile_C_OnTeamUpdated_Params
{
	unsigned char*                                     NewTeamNum;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleHook_Base_Projectile.GrappleHook_Base_Projectile_C.ExecuteUbergraph_GrappleHook_Base_Projectile
struct AGrappleHook_Base_Projectile_C_ExecuteUbergraph_GrappleHook_Base_Projectile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
