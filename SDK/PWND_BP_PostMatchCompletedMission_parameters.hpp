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

// Function BP_PostMatchCompletedMission.BP_PostMatchCompletedMission_C.Set Mission Info
struct UBP_PostMatchCompletedMission_C_Set_Mission_Info_Params
{
	struct FText                                       Mission_Name;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Mission_Desc;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                XP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                coin;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PostMatchCompletedMission.BP_PostMatchCompletedMission_C.Construct
struct UBP_PostMatchCompletedMission_C_Construct_Params
{
};

// Function BP_PostMatchCompletedMission.BP_PostMatchCompletedMission_C.ExecuteUbergraph_BP_PostMatchCompletedMission
struct UBP_PostMatchCompletedMission_C_ExecuteUbergraph_BP_PostMatchCompletedMission_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
