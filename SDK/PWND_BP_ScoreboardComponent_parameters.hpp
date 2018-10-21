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

// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Return Slot State
struct UBP_ScoreboardComponent_C_Return_Slot_State_Params
{
	TEnumAsByte<EHostRelevantTeamButtonState>          CurrentState;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.UpdateInfo
struct UBP_ScoreboardComponent_C_UpdateInfo_Params
{
	class APwndPlayerState*                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Friendly;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Set Custom Host
struct UBP_ScoreboardComponent_C_Set_Custom_Host_Params
{
};

// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Set Team Index
struct UBP_ScoreboardComponent_C_Set_Team_Index_Params
{
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Set Lobby Info
struct UBP_ScoreboardComponent_C_Set_Lobby_Info_Params
{
	TEnumAsByte<EHostRelevantTeamButtonState>          Slot_State;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       UserName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGuid                                       Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FOnlineFriendBPData                         Friend_GUID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.BndEvt__Button_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
struct UBP_ScoreboardComponent_C_BndEvt__Button_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.BndEvt__Button_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature
struct UBP_ScoreboardComponent_C_BndEvt__Button_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Async Continue 1
struct UBP_ScoreboardComponent_C_Async_Continue_1_Params
{
	struct FGuid                                       Guid;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UTexture2D*                                  LoadedIcon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.DropDownSelection
struct UBP_ScoreboardComponent_C_DropDownSelection_Params
{
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Construct
struct UBP_ScoreboardComponent_C_Construct_Params
{
};

// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBP_ScoreboardComponent_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Swap State
struct UBP_ScoreboardComponent_C_Swap_State_Params
{
	bool                                               Swap_On;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Set Component Color
struct UBP_ScoreboardComponent_C_Set_Component_Color_Params
{
	bool                                               Ally;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Neutral;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.ExecuteUbergraph_BP_ScoreboardComponent
struct UBP_ScoreboardComponent_C_ExecuteUbergraph_BP_ScoreboardComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Slot Selected__DelegateSignature
struct UBP_ScoreboardComponent_C_Slot_Selected__DelegateSignature_Params
{
	int                                                Team_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FOnlineFriendBPData                         Friend_GUID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.SlotOptionSelected__DelegateSignature
struct UBP_ScoreboardComponent_C_SlotOptionSelected__DelegateSignature_Params
{
	struct FOnlineFriendBPData                         Friend_GUID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Team_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Selection_Index;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.SwitchToInviteScreen__DelegateSignature
struct UBP_ScoreboardComponent_C_SwitchToInviteScreen__DelegateSignature_Params
{
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
