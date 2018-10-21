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

// Function ChallengeButton_UI.ChallengeButton_UI_C.Set Button
struct UChallengeButton_UI_C_Set_Button_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                CharIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeButton_UI.ChallengeButton_UI_C.Reset
struct UChallengeButton_UI_C_Reset_Params
{
};

// Function ChallengeButton_UI.ChallengeButton_UI_C.Set Best Time & Key
struct UChallengeButton_UI_C_Set_Best_Time___Key_Params
{
};

// Function ChallengeButton_UI.ChallengeButton_UI_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UChallengeButton_UI_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ChallengeButton_UI.ChallengeButton_UI_C.BndEvt__Button_Leaderboards_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
struct UChallengeButton_UI_C_BndEvt__Button_Leaderboards_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ChallengeButton_UI.ChallengeButton_UI_C.Check Character
struct UChallengeButton_UI_C_Check_Character_Params
{
	int                                                CharIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeButton_UI.ChallengeButton_UI_C.Construct
struct UChallengeButton_UI_C_Construct_Params
{
};

// Function ChallengeButton_UI.ChallengeButton_UI_C.OnReceiveAttention
struct UChallengeButton_UI_C_OnReceiveAttention_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeButton_UI.ChallengeButton_UI_C.OnRemoveAttention
struct UChallengeButton_UI_C_OnRemoveAttention_Params
{
	bool*                                              bWasMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeButton_UI.ChallengeButton_UI_C.OnButtonPressed_Local
struct UChallengeButton_UI_C_OnButtonPressed_Local_Params
{
};

// Function ChallengeButton_UI.ChallengeButton_UI_C.ExecuteUbergraph_ChallengeButton_UI
struct UChallengeButton_UI_C_ExecuteUbergraph_ChallengeButton_UI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeButton_UI.ChallengeButton_UI_C.LoadLeaderboard__DelegateSignature
struct UChallengeButton_UI_C_LoadLeaderboard__DelegateSignature_Params
{
	struct FString                                     Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ChallengeButton_UI.ChallengeButton_UI_C.NotifyKeyNum__DelegateSignature
struct UChallengeButton_UI_C_NotifyKeyNum__DelegateSignature_Params
{
	int                                                Keys;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
