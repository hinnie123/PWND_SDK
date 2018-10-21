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

// Function BP_WidgetInterface.BP_WidgetInterface_C.CreateEscapeMenu
struct UBP_WidgetInterface_C_CreateEscapeMenu_Params
{
};

// Function BP_WidgetInterface.BP_WidgetInterface_C.HideEscapeMenu
struct UBP_WidgetInterface_C_HideEscapeMenu_Params
{
};

// Function BP_WidgetInterface.BP_WidgetInterface_C.Cancelled
struct UBP_WidgetInterface_C_Cancelled_Params
{
};

// Function BP_WidgetInterface.BP_WidgetInterface_C.Quitting
struct UBP_WidgetInterface_C_Quitting_Params
{
};

// Function BP_WidgetInterface.BP_WidgetInterface_C.OnMatchStateChanged_Event_2
struct UBP_WidgetInterface_C_OnMatchStateChanged_Event_2_Params
{
	class APwndGameState*                              GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MatchState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WidgetInterface.BP_WidgetInterface_C.OnMatchStateChanged_Event_1
struct UBP_WidgetInterface_C_OnMatchStateChanged_Event_1_Params
{
	class APwndGameState*                              GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MatchState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WidgetInterface.BP_WidgetInterface_C.Construct
struct UBP_WidgetInterface_C_Construct_Params
{
};

// Function BP_WidgetInterface.BP_WidgetInterface_C.OnEscapeMenuRequested
struct UBP_WidgetInterface_C_OnEscapeMenuRequested_Params
{
};

// Function BP_WidgetInterface.BP_WidgetInterface_C.OnEscapeMenuCleared
struct UBP_WidgetInterface_C_OnEscapeMenuCleared_Params
{
};

// Function BP_WidgetInterface.BP_WidgetInterface_C.OnTrainingEscapeMenuRequested
struct UBP_WidgetInterface_C_OnTrainingEscapeMenuRequested_Params
{
};

// Function BP_WidgetInterface.BP_WidgetInterface_C.Mission Complete
struct UBP_WidgetInterface_C_Mission_Complete_Params
{
	struct FGuid                                       NotificationGuid;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FMissionInfo                                MissionInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WidgetInterface.BP_WidgetInterface_C.Achievement Pop Up
struct UBP_WidgetInterface_C_Achievement_Pop_Up_Params
{
	struct FText                                       Achievement_Name;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Achievement_Desc;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Credit_Reward;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   Reward_Image;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Notification_GUID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_WidgetInterface.BP_WidgetInterface_C.Notification Finished
struct UBP_WidgetInterface_C_Notification_Finished_Params
{
	struct FGuid                                       Notification_GUID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_WidgetInterface.BP_WidgetInterface_C.XP Gained
struct UBP_WidgetInterface_C_XP_Gained_Params
{
	struct FGuid                                       NotificationGuid;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FText                                       Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WidgetInterface.BP_WidgetInterface_C.ExecuteUbergraph_BP_WidgetInterface
struct UBP_WidgetInterface_C_ExecuteUbergraph_BP_WidgetInterface_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WidgetInterface.BP_WidgetInterface_C.Training Escape Menu Requested__DelegateSignature
struct UBP_WidgetInterface_C_Training_Escape_Menu_Requested__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
