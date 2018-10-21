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

// Function BP_Scoreboard.BP_Scoreboard_C.IsFreeForAll
struct UBP_Scoreboard_C_IsFreeForAll_Params
{
	bool                                               bFreeForAll;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Scoreboard.BP_Scoreboard_C.UpdateFreeForAllComponents
struct UBP_Scoreboard_C_UpdateFreeForAllComponents_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Scoreboard.BP_Scoreboard_C.UpdateMatchInfo
struct UBP_Scoreboard_C_UpdateMatchInfo_Params
{
	struct FText                                       Game_Mode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Map;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Server;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       png;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       AllyScore;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       EnemyScore;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Scoreboard.BP_Scoreboard_C.UpdateEnemyComponents
struct UBP_Scoreboard_C_UpdateEnemyComponents_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Scoreboard.BP_Scoreboard_C.UpdateAllyComponents
struct UBP_Scoreboard_C_UpdateAllyComponents_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetEnemyScoreboardComponent
struct UBP_Scoreboard_C_GetEnemyScoreboardComponent_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_ScoreboardComponent_C*                   Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Scoreboard.BP_Scoreboard_C.GetAllyScoreboardComponent
struct UBP_Scoreboard_C_GetAllyScoreboardComponent_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_ScoreboardComponent_C*                   Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Scoreboard.BP_Scoreboard_C.Tick
struct UBP_Scoreboard_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Scoreboard.BP_Scoreboard_C.Construct
struct UBP_Scoreboard_C_Construct_Params
{
};

// Function BP_Scoreboard.BP_Scoreboard_C.ExecuteUbergraph_BP_Scoreboard
struct UBP_Scoreboard_C_ExecuteUbergraph_BP_Scoreboard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
