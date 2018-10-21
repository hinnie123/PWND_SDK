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

// Function PopGun_TP_MuzzleFlash_FX.PopGun_TP_MuzzleFlash_FX_C.UserConstructionScript
struct APopGun_TP_MuzzleFlash_FX_C_UserConstructionScript_Params
{
};

// Function PopGun_TP_MuzzleFlash_FX.PopGun_TP_MuzzleFlash_FX_C.ReceiveBeginPlay
struct APopGun_TP_MuzzleFlash_FX_C_ReceiveBeginPlay_Params
{
};

// Function PopGun_TP_MuzzleFlash_FX.PopGun_TP_MuzzleFlash_FX_C.OnSetActive
struct APopGun_TP_MuzzleFlash_FX_C_OnSetActive_Params
{
	bool*                                              bIsActive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopGun_TP_MuzzleFlash_FX.PopGun_TP_MuzzleFlash_FX_C.OnSetTeamNum
struct APopGun_TP_MuzzleFlash_FX_C_OnSetTeamNum_Params
{
	unsigned char*                                     OldTeamNum;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewTeamNum;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopGun_TP_MuzzleFlash_FX.PopGun_TP_MuzzleFlash_FX_C.ExecuteUbergraph_PopGun_TP_MuzzleFlash_FX
struct APopGun_TP_MuzzleFlash_FX_C_ExecuteUbergraph_PopGun_TP_MuzzleFlash_FX_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
