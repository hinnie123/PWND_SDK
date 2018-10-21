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

// Function LockdownShield_Base_Projectile.LockdownShield_Base_Projectile_C.UserConstructionScript
struct ALockdownShield_Base_Projectile_C_UserConstructionScript_Params
{
};

// Function LockdownShield_Base_Projectile.LockdownShield_Base_Projectile_C.OnDetonate
struct ALockdownShield_Base_Projectile_C_OnDetonate_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bDestroy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LockdownShield_Base_Projectile.LockdownShield_Base_Projectile_C.ExecuteUbergraph_LockdownShield_Base_Projectile
struct ALockdownShield_Base_Projectile_C_ExecuteUbergraph_LockdownShield_Base_Projectile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
