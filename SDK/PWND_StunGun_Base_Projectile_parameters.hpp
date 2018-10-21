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

// Function StunGun_Base_Projectile.StunGun_Base_Projectile_C.UserConstructionScript
struct AStunGun_Base_Projectile_C_UserConstructionScript_Params
{
};

// Function StunGun_Base_Projectile.StunGun_Base_Projectile_C.OnDetonate
struct AStunGun_Base_Projectile_C_OnDetonate_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bDestroy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StunGun_Base_Projectile.StunGun_Base_Projectile_C.ExecuteUbergraph_StunGun_Base_Projectile
struct AStunGun_Base_Projectile_C_ExecuteUbergraph_StunGun_Base_Projectile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
