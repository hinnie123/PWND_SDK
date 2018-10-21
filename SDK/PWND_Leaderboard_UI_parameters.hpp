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

// Function Leaderboard_UI.Leaderboard_UI_C.LoadLeaderboard
struct ULeaderboard_UI_C_LoadLeaderboard_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FText>                               Names;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FText>                               Ranks;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Times;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Leaderboard_UI.Leaderboard_UI_C.Construct
struct ULeaderboard_UI_C_Construct_Params
{
};

// Function Leaderboard_UI.Leaderboard_UI_C.ShowPage
struct ULeaderboard_UI_C_ShowPage_Params
{
	int                                                Page_Num;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Leaderboard_UI.Leaderboard_UI_C.ExecuteUbergraph_Leaderboard_UI
struct ULeaderboard_UI_C_ExecuteUbergraph_Leaderboard_UI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
