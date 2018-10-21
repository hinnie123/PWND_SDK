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

// Function ChallengeRank_UI.ChallengeRank_UI_C.SetRank
struct UChallengeRank_UI_C_SetRank_Params
{
	struct FText                                       Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ChallengeRank_UI.ChallengeRank_UI_C.ExecuteUbergraph_ChallengeRank_UI
struct UChallengeRank_UI_C_ExecuteUbergraph_ChallengeRank_UI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
