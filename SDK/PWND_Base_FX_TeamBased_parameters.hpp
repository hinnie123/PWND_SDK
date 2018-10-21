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

// Function Base_FX_TeamBased.Base_FX_TeamBased_C.UserConstructionScript
struct ABase_FX_TeamBased_C_UserConstructionScript_Params
{
};

// Function Base_FX_TeamBased.Base_FX_TeamBased_C.ReceiveBeginPlay
struct ABase_FX_TeamBased_C_ReceiveBeginPlay_Params
{
};

// Function Base_FX_TeamBased.Base_FX_TeamBased_C.OnSetActive
struct ABase_FX_TeamBased_C_OnSetActive_Params
{
	bool*                                              bIsActive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_FX_TeamBased.Base_FX_TeamBased_C.OnSetTeamNum
struct ABase_FX_TeamBased_C_OnSetTeamNum_Params
{
	unsigned char*                                     OldTeamNum;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewTeamNum;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_FX_TeamBased.Base_FX_TeamBased_C.ExecuteUbergraph_Base_FX_TeamBased
struct ABase_FX_TeamBased_C_ExecuteUbergraph_Base_FX_TeamBased_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
