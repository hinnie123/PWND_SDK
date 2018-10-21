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

// Function ChallengeSet_UI.ChallengeSet_UI_C.GetChallengeButton
struct UChallengeSet_UI_C_GetChallengeButton_Params
{
	int                                                zeroBasedIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UChallengeButton_UI_C*                       ChallengeButton;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeSet_UI.ChallengeSet_UI_C.Construct
struct UChallengeSet_UI_C_Construct_Params
{
};

// Function ChallengeSet_UI.ChallengeSet_UI_C.LoadLevelButtons
struct UChallengeSet_UI_C_LoadLevelButtons_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CharIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_A;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeSet_UI.ChallengeSet_UI_C.AddKeys
struct UChallengeSet_UI_C_AddKeys_Params
{
	int                                                Keys;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeSet_UI.ChallengeSet_UI_C.Load Leaderboard
struct UChallengeSet_UI_C_Load_Leaderboard_Params
{
	struct FString                                     Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ChallengeSet_UI.ChallengeSet_UI_C.ExecuteUbergraph_ChallengeSet_UI
struct UChallengeSet_UI_C_ExecuteUbergraph_ChallengeSet_UI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeSet_UI.ChallengeSet_UI_C.LoadLeaderboard__DelegateSignature
struct UChallengeSet_UI_C_LoadLeaderboard__DelegateSignature_Params
{
	struct FString                                     Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
