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

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_Border_BadConnection_Visibility_1
struct UMainHUD_ScoreBar_C_Get_Border_BadConnection_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_titlebg_ColorAndOpacity_1
struct UMainHUD_ScoreBar_C_Get_titlebg_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.GetPwnControlText
struct UMainHUD_ScoreBar_C_GetPwnControlText_Params
{
	struct FText                                       Ctrl;                                                     // (Parm, OutParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.GetReviveControlText
struct UMainHUD_ScoreBar_C_GetReviveControlText_Params
{
	struct FText                                       Ctrl;                                                     // (Parm, OutParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_SafeToExitWithoutPenaltyTitle_Text_1
struct UMainHUD_ScoreBar_C_Get_SafeToExitWithoutPenaltyTitle_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_PenaltyBox_Visibility_1
struct UMainHUD_ScoreBar_C_Get_PenaltyBox_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_SafeToExitWithoutPenalty_Text_1
struct UMainHUD_ScoreBar_C_Get_SafeToExitWithoutPenalty_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_Pwned_Potenial_Score_Text_1
struct UMainHUD_ScoreBar_C_Get_Pwned_Potenial_Score_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_Pwn_Potential_Score_Text_1
struct UMainHUD_ScoreBar_C_Get_Pwn_Potential_Score_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Update_KillFeed_Individual
struct UMainHUD_ScoreBar_C_Update_KillFeed_Individual_Params
{
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Update_KillFeed
struct UMainHUD_ScoreBar_C_Update_KillFeed_Params
{
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Update_PwnStamp
struct UMainHUD_ScoreBar_C_Update_PwnStamp_Params
{
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Set_PwnStampBrush
struct UMainHUD_ScoreBar_C_Set_PwnStampBrush_Params
{
	class UMaterialInterface*                          Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.ClearDamageIndicator
struct UMainHUD_ScoreBar_C_ClearDamageIndicator_Params
{
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.KilledUpdateLoop
struct UMainHUD_ScoreBar_C_KilledUpdateLoop_Params
{
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Set_Action_Text
struct UMainHUD_ScoreBar_C_Set_Action_Text_Params
{
	float                                              DisplayTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ActionText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Friendly;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_ActionText_General
struct UMainHUD_ScoreBar_C_Get_ActionText_General_Params
{
	bool                                               WantsActionText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WantsAllyName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Output_Text;                                              // (Parm, OutParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_Action_Enemy_text_Text_1
struct UMainHUD_ScoreBar_C_Get_Action_Enemy_text_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_Action_Ally_text_Text_1
struct UMainHUD_ScoreBar_C_Get_Action_Ally_text_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_Action_Text_Text_1
struct UMainHUD_ScoreBar_C_Get_Action_Text_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.All_FullScreenEffect_NonEvent_Update
struct UMainHUD_ScoreBar_C_All_FullScreenEffect_NonEvent_Update_Params
{
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Handle_FullScreenEffect
struct UMainHUD_ScoreBar_C_Handle_FullScreenEffect_Params
{
	bool                                               BigUI;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Text_FullScreenEffect
struct UMainHUD_ScoreBar_C_Text_FullScreenEffect_Params
{
	class UMaterialInstance*                           Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Big_UI;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Custom_Duration;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_EnemyFlashingScoreBar_Percent_1
struct UMainHUD_ScoreBar_C_Get_EnemyFlashingScoreBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_Player_Flashing_Scorebar_Percent_1
struct UMainHUD_ScoreBar_C_Get_Player_Flashing_Scorebar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_EnemyPotentialScoreBar_Percent_1
struct UMainHUD_ScoreBar_C_Get_EnemyPotentialScoreBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_PlayerPotentialScoreBar_Percent_1
struct UMainHUD_ScoreBar_C_Get_PlayerPotentialScoreBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Bar_Animation
struct UMainHUD_ScoreBar_C_Bar_Animation_Params
{
	float                                              CurrentPercentage;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GoalPercentage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewPercentage;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_Bounty_Text_1
struct UMainHUD_ScoreBar_C_Get_Bounty_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_Level_Number_Text_1
struct UMainHUD_ScoreBar_C_Get_Level_Number_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_LevelProgressionBar_Percent_1
struct UMainHUD_ScoreBar_C_Get_LevelProgressionBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.OnUpdate_DamageIndicator
struct UMainHUD_ScoreBar_C_OnUpdate_DamageIndicator_Params
{
	class UDamageIndicatorWidget_C*                    WidgetInput;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.OnDamaged
struct UMainHUD_ScoreBar_C_OnDamaged_Params
{
	struct FPwndReplicatedDamageEvent                  DamageEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Low_Health_FX
struct UMainHUD_ScoreBar_C_Low_Health_FX_Params
{
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Update_Pwn_Icon
struct UMainHUD_ScoreBar_C_Update_Pwn_Icon_Params
{
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Update_Player_Damaged_FX
struct UMainHUD_ScoreBar_C_Update_Player_Damaged_FX_Params
{
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_Respawn_Text_Text_1
struct UMainHUD_ScoreBar_C_Get_Respawn_Text_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_Enemy_Score_Bar_Percent
struct UMainHUD_ScoreBar_C_Get_Enemy_Score_Bar_Percent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_Enemy_Team_Score
struct UMainHUD_ScoreBar_C_Get_Enemy_Team_Score_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_PwndCharacter
struct UMainHUD_ScoreBar_C_Get_PwndCharacter_Params
{
	class APwndCharacter*                              PwndCharacter;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_PrimaryAbilityImage_Brush_1
struct UMainHUD_ScoreBar_C_Get_PrimaryAbilityImage_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_HealthBar_Healing_Percentage
struct UMainHUD_ScoreBar_C_Get_HealthBar_Healing_Percentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_HealthBar_Damaged_Percentage
struct UMainHUD_ScoreBar_C_Get_HealthBar_Damaged_Percentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Show_Me
struct UMainHUD_ScoreBar_C_Show_Me_Params
{
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Hide_Me
struct UMainHUD_ScoreBar_C_Hide_Me_Params
{
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_PlayerScoreBar_Percent
struct UMainHUD_ScoreBar_C_Get_PlayerScoreBar_Percent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_Goal_Score
struct UMainHUD_ScoreBar_C_Get_Goal_Score_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_Health_Left
struct UMainHUD_ScoreBar_C_Get_Health_Left_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_TextTimePlayed_Text_1
struct UMainHUD_ScoreBar_C_Get_TextTimePlayed_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_Notification_TextBar
struct UMainHUD_ScoreBar_C_Get_Notification_TextBar_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_SecondaryAbilityBar_Percent_1
struct UMainHUD_ScoreBar_C_Get_SecondaryAbilityBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_PrimaryAbilityBar_Percent_1
struct UMainHUD_ScoreBar_C_Get_PrimaryAbilityBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_Heat_Brush
struct UMainHUD_ScoreBar_C_Get_Heat_Brush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_Player_Team_Score
struct UMainHUD_ScoreBar_C_Get_Player_Team_Score_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Get_HealthBar_Percentage
struct UMainHUD_ScoreBar_C_Get_HealthBar_Percentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Construct
struct UMainHUD_ScoreBar_C_Construct_Params
{
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Tick
struct UMainHUD_ScoreBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.OnUpdateUI_Event_1
struct UMainHUD_ScoreBar_C_OnUpdateUI_Event_1_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Changed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.OnReceiveDamage_Event_1
struct UMainHUD_ScoreBar_C_OnReceiveDamage_Event_1_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPwndReplicatedDamageEvent                  Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.OnStuntAwarded_Event_1
struct UMainHUD_ScoreBar_C_OnStuntAwarded_Event_1_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPwndStuntSequence*                          Stunt;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rating;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     RatingInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StuntType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.OnPwnageScoredEvent_Event_1
struct UMainHUD_ScoreBar_C_OnPwnageScoredEvent_Event_1_Params
{
	class AController*                                 Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APwndCharacter*                              Pwner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APwndCharacter*                              Pwnee;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstant;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.OnPwnageCancelledEvent_Event_1
struct UMainHUD_ScoreBar_C_OnPwnageCancelledEvent_Event_1_Params
{
	class AController*                                 Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APwndCharacter*                              Pwner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APwndCharacter*                              Pwnee;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSaved;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APwndCharacter*                              SaverPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.OnAwardRank_Event_1
struct UMainHUD_ScoreBar_C_OnAwardRank_Event_1_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewRank;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewRating;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewNextRankRating;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.OnPostEvenTrigger
struct UMainHUD_ScoreBar_C_OnPostEvenTrigger_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EeEventTrigger>                        Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPostedEventTrigger                         Trigger;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.OnSetEndGameInfo_Event_1
struct UMainHUD_ScoreBar_C_OnSetEndGameInfo_Event_1_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EndGameReason>                         Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVictory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APwndTeamInfo*                               WinningTeam;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APwndPlayerState*                            Winner;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ScoreActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.HideScore
struct UMainHUD_ScoreBar_C_HideScore_Params
{
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.CheckForLastPwn
struct UMainHUD_ScoreBar_C_CheckForLastPwn_Params
{
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.Showwarning
struct UMainHUD_ScoreBar_C_Showwarning_Params
{
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.HideWarning
struct UMainHUD_ScoreBar_C_HideWarning_Params
{
};

// Function MainHUD_ScoreBar.MainHUD_ScoreBar_C.ExecuteUbergraph_MainHUD_ScoreBar
struct UMainHUD_ScoreBar_C_ExecuteUbergraph_MainHUD_ScoreBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
