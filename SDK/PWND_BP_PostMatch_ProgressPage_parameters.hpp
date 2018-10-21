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

// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.SetProgress
struct UBP_PostMatch_ProgressPage_C_SetProgress_Params
{
	int                                                Current_Level;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Current_XP;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Next_Level_XP;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Add Match Award
struct UBP_PostMatch_ProgressPage_C_Add_Match_Award_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rating;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Add XP
struct UBP_PostMatch_ProgressPage_C_Add_XP_Params
{
	int                                                XP_Value;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.XP Display
struct UBP_PostMatch_ProgressPage_C_XP_Display_Params
{
	int                                                Match_Won_XP;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       XP_Type;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGuid                                       Notification_GUID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Add Mission Complete
struct UBP_PostMatch_ProgressPage_C_Add_Mission_Complete_Params
{
	struct FText                                       Mission_Name;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Mission_Desc;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                XP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                coin;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.OnInitializeProgress
struct UBP_PostMatch_ProgressPage_C_OnInitializeProgress_Params
{
	int*                                               CurrentLevel;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int*                                               prestigeLevel;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int*                                               borderLevel;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int*                                               currentXP;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             nextLevelXP;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.OnMissionComplete
struct UBP_PostMatch_ProgressPage_C_OnMissionComplete_Params
{
	struct FText*                                      missionName;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      missionDesc;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int*                                               XP;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int*                                               coin;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.OnExperienceUpdate
struct UBP_PostMatch_ProgressPage_C_OnExperienceUpdate_Params
{
	int*                                               newXP;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.OnMatchVictory
struct UBP_PostMatch_ProgressPage_C_OnMatchVictory_Params
{
	int*                                               XP;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Queue Up Next Level Sequence
struct UBP_PostMatch_ProgressPage_C_Queue_Up_Next_Level_Sequence_Params
{
};

// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Check Play Level Up Seq
struct UBP_PostMatch_ProgressPage_C_Check_Play_Level_Up_Seq_Params
{
};

// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Level Up Sequence
struct UBP_PostMatch_ProgressPage_C_Level_Up_Sequence_Params
{
};

// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.OnAccoladeDataReady
struct UBP_PostMatch_ProgressPage_C_OnAccoladeDataReady_Params
{
	TArray<struct FPostMatchAccoladeData>*             accolades;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Test Add XP
struct UBP_PostMatch_ProgressPage_C_Test_Add_XP_Params
{
	int                                                New_XP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.Construct
struct UBP_PostMatch_ProgressPage_C_Construct_Params
{
};

// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.XPGained_Event
struct UBP_PostMatch_ProgressPage_C_XPGained_Event_Params
{
	struct FGuid                                       NotificationGuid;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FText                                       Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.ExecuteUbergraph_BP_PostMatch_ProgressPage
struct UBP_PostMatch_ProgressPage_C_ExecuteUbergraph_BP_PostMatch_ProgressPage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PostMatch_ProgressPage.BP_PostMatch_ProgressPage_C.StasLoaded__DelegateSignature
struct UBP_PostMatch_ProgressPage_C_StasLoaded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
