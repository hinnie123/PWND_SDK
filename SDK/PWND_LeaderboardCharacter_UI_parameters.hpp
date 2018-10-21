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

// Function LeaderboardCharacter_UI.LeaderboardCharacter_UI_C.SetStats
struct ULeaderboardCharacter_UI_C_SetStats_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderboardCharacter_UI.LeaderboardCharacter_UI_C.Set Button
struct ULeaderboardCharacter_UI_C_Set_Button_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function LeaderboardCharacter_UI.LeaderboardCharacter_UI_C.ExecuteUbergraph_LeaderboardCharacter_UI
struct ULeaderboardCharacter_UI_C_ExecuteUbergraph_LeaderboardCharacter_UI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderboardCharacter_UI.LeaderboardCharacter_UI_C.NotifyKeyNum__DelegateSignature
struct ULeaderboardCharacter_UI_C_NotifyKeyNum__DelegateSignature_Params
{
	int                                                Keys;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
