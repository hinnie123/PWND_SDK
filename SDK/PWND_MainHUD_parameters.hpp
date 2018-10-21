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

// Function MainHUD.MainHUD_C.UpdateAbilityBindings
struct UMainHUD_C_UpdateAbilityBindings_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Action_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MainHUD.MainHUD_C.AbilityAmmoCountHelper
struct UMainHUD_C_AbilityAmmoCountHelper_Params
{
	int                                                MaxAmmoCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentAmmoCount;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      LeftDotFilled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UImage*                                      LeftDotOutline;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UImage*                                      MiddleDotFilled;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UImage*                                      MiddleDotOutline;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UImage*                                      RightDotFilled;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UImage*                                      RightDotOutline;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MainHUD.MainHUD_C.Get_MovementAbilityAmmoCount_Text_1
struct UMainHUD_C_Get_MovementAbilityAmmoCount_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD.MainHUD_C.SetMovementAbilityBarRecharging
struct UMainHUD_C_SetMovementAbilityBarRecharging_Params
{
	bool                                               bRecharging;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayRechargedAnim;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD.MainHUD_C.Get_PrimaryAbility_AmmoCount_Text_1
struct UMainHUD_C_Get_PrimaryAbility_AmmoCount_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD.MainHUD_C.Get_SecondaryAbility_AmmoCount_Text_1
struct UMainHUD_C_Get_SecondaryAbility_AmmoCount_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD.MainHUD_C.Get_MovementAbility_Bar_Percent_1
struct UMainHUD_C_Get_MovementAbility_Bar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD.MainHUD_C.UpdateRocketJumpable
struct UMainHUD_C_UpdateRocketJumpable_Params
{
};

// Function MainHUD.MainHUD_C.InitRocketJumpableIndicator
struct UMainHUD_C_InitRocketJumpableIndicator_Params
{
};

// Function MainHUD.MainHUD_C.Update_Teammates_Icon
struct UMainHUD_C_Update_Teammates_Icon_Params
{
};

// Function MainHUD.MainHUD_C.UpdateHeatMeterValue
struct UMainHUD_C_UpdateHeatMeterValue_Params
{
};

// Function MainHUD.MainHUD_C.Get_SecondaryAbilityReloadTimer_Text_1
struct UMainHUD_C_Get_SecondaryAbilityReloadTimer_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD.MainHUD_C.Get_PrimaryAbilityReloadTimer_Text_1
struct UMainHUD_C_Get_PrimaryAbilityReloadTimer_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD.MainHUD_C.Get_ActionText_General
struct UMainHUD_C_Get_ActionText_General_Params
{
	bool                                               WantsActionText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WantsAllyName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Output_Text;                                              // (Parm, OutParm)
};

// Function MainHUD.MainHUD_C.Get_Action_Enemy_text_Text_1
struct UMainHUD_C_Get_Action_Enemy_text_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD.MainHUD_C.Get_Action_Ally_text_Text_1
struct UMainHUD_C_Get_Action_Ally_text_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD.MainHUD_C.Get_Action_Text_Text_1
struct UMainHUD_C_Get_Action_Text_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD.MainHUD_C.Bar_Animation
struct UMainHUD_C_Bar_Animation_Params
{
	float                                              CurrentPercentage;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GoalPercentage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewPercentage;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD.MainHUD_C.Get_Bounty_Text_1
struct UMainHUD_C_Get_Bounty_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD.MainHUD_C.Get_Level_Number_Text_1
struct UMainHUD_C_Get_Level_Number_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD.MainHUD_C.Get_LevelProgressionBar_Percent_1
struct UMainHUD_C_Get_LevelProgressionBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD.MainHUD_C.Low_Health_FX
struct UMainHUD_C_Low_Health_FX_Params
{
};

// Function MainHUD.MainHUD_C.Update_Pwn_Icon
struct UMainHUD_C_Update_Pwn_Icon_Params
{
};

// Function MainHUD.MainHUD_C.Update_Player_Damaged_FX
struct UMainHUD_C_Update_Player_Damaged_FX_Params
{
};

// Function MainHUD.MainHUD_C.Get_Respawn_Text_Text_1
struct UMainHUD_C_Get_Respawn_Text_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD.MainHUD_C.Get_Enemy_Score_Bar_Percent
struct UMainHUD_C_Get_Enemy_Score_Bar_Percent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD.MainHUD_C.Get_Enemy_Team_Score
struct UMainHUD_C_Get_Enemy_Team_Score_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD.MainHUD_C.Get_PwndCharacter
struct UMainHUD_C_Get_PwndCharacter_Params
{
	class APwndCharacter*                              PwndCharacter;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD.MainHUD_C.Get_PrimaryAbilityImage_Brush_1
struct UMainHUD_C_Get_PrimaryAbilityImage_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD.MainHUD_C.Get_HealthBar_Healing_Percentage
struct UMainHUD_C_Get_HealthBar_Healing_Percentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD.MainHUD_C.Get_HealthBar_Damaged_Percentage
struct UMainHUD_C_Get_HealthBar_Damaged_Percentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD.MainHUD_C.Show_Me
struct UMainHUD_C_Show_Me_Params
{
};

// Function MainHUD.MainHUD_C.Hide_Me
struct UMainHUD_C_Hide_Me_Params
{
	bool                                               ShowHealthBar;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD.MainHUD_C.Get_Health_Left
struct UMainHUD_C_Get_Health_Left_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD.MainHUD_C.Get_Notification_TextBar
struct UMainHUD_C_Get_Notification_TextBar_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD.MainHUD_C.Get_SecondaryAbilityBar_Percent_1
struct UMainHUD_C_Get_SecondaryAbilityBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD.MainHUD_C.Get_PrimaryAbilityBar_Percent_1
struct UMainHUD_C_Get_PrimaryAbilityBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD.MainHUD_C.Get_Heat_Brush
struct UMainHUD_C_Get_Heat_Brush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainHUD.MainHUD_C.Get_HealthBar_Percentage
struct UMainHUD_C_Get_HealthBar_Percentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainHUD.MainHUD_C.OnUpdateUI_Event_1
struct UMainHUD_C_OnUpdateUI_Event_1_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Changed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD.MainHUD_C.OnAwardRank_Event_1
struct UMainHUD_C_OnAwardRank_Event_1_Params
{
	class APwndPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewRank;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewRating;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewNextRankRating;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD.MainHUD_C.Construct
struct UMainHUD_C_Construct_Params
{
};

// Function MainHUD.MainHUD_C.Tick
struct UMainHUD_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainHUD.MainHUD_C.ExecuteUbergraph_MainHUD
struct UMainHUD_C_ExecuteUbergraph_MainHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
