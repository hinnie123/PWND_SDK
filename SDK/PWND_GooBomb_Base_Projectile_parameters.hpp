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

// Function GooBomb_Base_Projectile.GooBomb_Base_Projectile_C.UserConstructionScript
struct AGooBomb_Base_Projectile_C_UserConstructionScript_Params
{
};

// Function GooBomb_Base_Projectile.GooBomb_Base_Projectile_C.OnTeamUpdated
struct AGooBomb_Base_Projectile_C_OnTeamUpdated_Params
{
	unsigned char*                                     NewTeamNum;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooBomb_Base_Projectile.GooBomb_Base_Projectile_C.ReceiveBeginPlay
struct AGooBomb_Base_Projectile_C_ReceiveBeginPlay_Params
{
};

// Function GooBomb_Base_Projectile.GooBomb_Base_Projectile_C.OnStuck
struct AGooBomb_Base_Projectile_C_OnStuck_Params
{
};

// Function GooBomb_Base_Projectile.GooBomb_Base_Projectile_C.ExecuteUbergraph_GooBomb_Base_Projectile
struct AGooBomb_Base_Projectile_C_ExecuteUbergraph_GooBomb_Base_Projectile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
