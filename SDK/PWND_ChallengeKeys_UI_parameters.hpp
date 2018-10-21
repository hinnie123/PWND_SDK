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

// Function ChallengeKeys_UI.ChallengeKeys_UI_C.SetKeys
struct UChallengeKeys_UI_C_SetKeys_Params
{
	int                                                NumKeys;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeKeys_UI.ChallengeKeys_UI_C.ExecuteUbergraph_ChallengeKeys_UI
struct UChallengeKeys_UI_C_ExecuteUbergraph_ChallengeKeys_UI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
