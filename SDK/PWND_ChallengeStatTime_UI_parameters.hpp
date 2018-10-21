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

// Function ChallengeStatTime_UI.ChallengeStatTime_UI_C.SetTime
struct UChallengeStatTime_UI_C_SetTime_Params
{
	struct FText                                       Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ChallengeStatTime_UI.ChallengeStatTime_UI_C.ExecuteUbergraph_ChallengeStatTime_UI
struct UChallengeStatTime_UI_C_ExecuteUbergraph_ChallengeStatTime_UI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
