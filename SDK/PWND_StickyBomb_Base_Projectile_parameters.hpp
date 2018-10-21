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

// Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.UserConstructionScript
struct AStickyBomb_Base_Projectile_C_UserConstructionScript_Params
{
};

// Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.OnStuck
struct AStickyBomb_Base_Projectile_C_OnStuck_Params
{
};

// Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.OnArmedUpdated
struct AStickyBomb_Base_Projectile_C_OnArmedUpdated_Params
{
	bool*                                              bIsArmed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.OnBeginArming
struct AStickyBomb_Base_Projectile_C_OnBeginArming_Params
{
};

// Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.OnDetonate
struct AStickyBomb_Base_Projectile_C_OnDetonate_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bDestroy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.ReceiveBeginPlay
struct AStickyBomb_Base_Projectile_C_ReceiveBeginPlay_Params
{
};

// Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.OnTeamUpdated
struct AStickyBomb_Base_Projectile_C_OnTeamUpdated_Params
{
	unsigned char*                                     NewTeamNum;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.ExecuteUbergraph_StickyBomb_Base_Projectile
struct AStickyBomb_Base_Projectile_C_ExecuteUbergraph_StickyBomb_Base_Projectile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
