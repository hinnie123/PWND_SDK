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

// Function SR_Widget.SR_Widget_C.Construct
struct USR_Widget_C_Construct_Params
{
};

// Function SR_Widget.SR_Widget_C.Tick
struct USR_Widget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SR_Widget.SR_Widget_C.ShowEnding
struct USR_Widget_C_ShowEnding_Params
{
};

// Function SR_Widget.SR_Widget_C.Item Grabbed
struct USR_Widget_C_Item_Grabbed_Params
{
};

// Function SR_Widget.SR_Widget_C.Reset UI
struct USR_Widget_C_Reset_UI_Params
{
};

// Function SR_Widget.SR_Widget_C.OKPressed
struct USR_Widget_C_OKPressed_Params
{
};

// Function SR_Widget.SR_Widget_C.CancelPressed
struct USR_Widget_C_CancelPressed_Params
{
};

// Function SR_Widget.SR_Widget_C.Set Record Time Text
struct USR_Widget_C_Set_Record_Time_Text_Params
{
	struct FText                                       Keys_Found;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SR_Widget.SR_Widget_C.Set Key visibiltiy
struct USR_Widget_C_Set_Key_visibiltiy_Params
{
	int                                                Key_Number;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SR_Widget.SR_Widget_C.Set Timer Text
struct USR_Widget_C_Set_Timer_Text_Params
{
	int                                                Millisecond;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Decisecond;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Centisecond;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Second;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Ten_Seconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SR_Widget.SR_Widget_C.SetMaxNumberOfTargets
struct USR_Widget_C_SetMaxNumberOfTargets_Params
{
	int                                                MaxNumberOfTargets;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SR_Widget.SR_Widget_C.TargetsDestroyed
struct USR_Widget_C_TargetsDestroyed_Params
{
	int                                                TargetsDestroyed;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SR_Widget.SR_Widget_C.Transition
struct USR_Widget_C_Transition_Params
{
};

// Function SR_Widget.SR_Widget_C.Set Hud
struct USR_Widget_C_Set_Hud_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SR_Widget.SR_Widget_C.HidLevelName
struct USR_Widget_C_HidLevelName_Params
{
};

// Function SR_Widget.SR_Widget_C.HidHud
struct USR_Widget_C_HidHud_Params
{
};

// Function SR_Widget.SR_Widget_C.RingTImeAddedEvent
struct USR_Widget_C_RingTImeAddedEvent_Params
{
	struct FString                                     TimeAdded;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function SR_Widget.SR_Widget_C.PlayTimeUpAnimation
struct USR_Widget_C_PlayTimeUpAnimation_Params
{
};

// Function SR_Widget.SR_Widget_C.Set ChallengeModeObjectText
struct USR_Widget_C_Set_ChallengeModeObjectText_Params
{
};

// Function SR_Widget.SR_Widget_C.BndEvt__Button_Cindy_C_30_K2Node_ComponentBoundEvent_585_OnButtonClickedEvent__DelegateSignature
struct USR_Widget_C_BndEvt__Button_Cindy_C_30_K2Node_ComponentBoundEvent_585_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SR_Widget.SR_Widget_C.BndEvt__Button_Menu_K2Node_ComponentBoundEvent_628_OnButtonClickedEvent__DelegateSignature
struct USR_Widget_C_BndEvt__Button_Menu_K2Node_ComponentBoundEvent_628_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SR_Widget.SR_Widget_C.BndEvt__Button_Retry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct USR_Widget_C_BndEvt__Button_Retry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SR_Widget.SR_Widget_C.PlaySkipAnimationUp
struct USR_Widget_C_PlaySkipAnimationUp_Params
{
};

// Function SR_Widget.SR_Widget_C.Hide
struct USR_Widget_C_Hide_Params
{
};

// Function SR_Widget.SR_Widget_C.Visible
struct USR_Widget_C_Visible_Params
{
};

// Function SR_Widget.SR_Widget_C.Check If Final Level
struct USR_Widget_C_Check_If_Final_Level_Params
{
};

// Function SR_Widget.SR_Widget_C.Show Menu
struct USR_Widget_C_Show_Menu_Params
{
};

// Function SR_Widget.SR_Widget_C.CheckCharacter
struct USR_Widget_C_CheckCharacter_Params
{
};

// Function SR_Widget.SR_Widget_C.Reset
struct USR_Widget_C_Reset_Params
{
};

// Function SR_Widget.SR_Widget_C.NextChallenge
struct USR_Widget_C_NextChallenge_Params
{
};

// Function SR_Widget.SR_Widget_C.CloseButtonsAnimation
struct USR_Widget_C_CloseButtonsAnimation_Params
{
};

// Function SR_Widget.SR_Widget_C.OpenButtonsAnimation
struct USR_Widget_C_OpenButtonsAnimation_Params
{
};

// Function SR_Widget.SR_Widget_C.Set Level Name
struct USR_Widget_C_Set_Level_Name_Params
{
};

// Function SR_Widget.SR_Widget_C.Set Ranking
struct USR_Widget_C_Set_Ranking_Params
{
	struct FText                                       LevelTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SR_Widget.SR_Widget_C.ExecuteUbergraph_SR_Widget
struct USR_Widget_C_ExecuteUbergraph_SR_Widget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SR_Widget.SR_Widget_C.ButtonClicked__DelegateSignature
struct USR_Widget_C_ButtonClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
