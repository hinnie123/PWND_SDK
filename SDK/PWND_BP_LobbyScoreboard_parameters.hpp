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

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.IsCurrentlyInvitingFriends
struct UBP_LobbyScoreboard_C_IsCurrentlyInvitingFriends_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Check Opposite Team Filled
struct UBP_LobbyScoreboard_C_Check_Opposite_Team_Filled_Params
{
	int                                                Team_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Vacancy;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Return Save Settings1
struct UBP_LobbyScoreboard_C_Return_Save_Settings1_Params
{
	int                                                MapSelection;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                PointsSelection;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                DurationSelection;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ModeSelection;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                BotSetting;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Clear Users
struct UBP_LobbyScoreboard_C_Clear_Users_Params
{
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.InviteToggle
struct UBP_LobbyScoreboard_C_InviteToggle_Params
{
	bool                                               ToInvite;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Initialize Dropdowns
struct UBP_LobbyScoreboard_C_Initialize_Dropdowns_Params
{
	TArray<struct FText>                               Maps;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FText>                               Points;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FText>                               Durations;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FText>                               Modes;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.MapChanged
struct UBP_LobbyScoreboard_C_MapChanged_Params
{
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.PointsChanged
struct UBP_LobbyScoreboard_C_PointsChanged_Params
{
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.DurationChanged
struct UBP_LobbyScoreboard_C_DurationChanged_Params
{
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Populate Friends List
struct UBP_LobbyScoreboard_C_Populate_Friends_List_Params
{
	TArray<struct FOnlineFriendBPData>                 Friends;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.CustomLobby
struct UBP_LobbyScoreboard_C_CustomLobby_Params
{
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Friend Joined
struct UBP_LobbyScoreboard_C_Friend_Joined_Params
{
	struct FOnlineFriendBPData                         Friend;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Friend Declined
struct UBP_LobbyScoreboard_C_Friend_Declined_Params
{
	struct FOnlineFriendBPData                         Friend;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_LobbyScoreboard_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.ConfirmedInviteSent
struct UBP_LobbyScoreboard_C_ConfirmedInviteSent_Params
{
	struct FOnlineFriendBPData                         Friend_GUID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.SwitchToInviteScreen_event
struct UBP_LobbyScoreboard_C_SwitchToInviteScreen_event_Params
{
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Invite_Event
struct UBP_LobbyScoreboard_C_Invite_Event_Params
{
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FOnlineFriendBPData                         Friend_GUID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Update Scoreboard Slot
struct UBP_LobbyScoreboard_C_Update_Scoreboard_Slot_Params
{
	int                                                Team_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHostRelevantTeamButtonState>          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       UserName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPwndLoadout                                Loadout;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOnlineFriendBPData                         Friend_GUID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.ScoreboardUp
struct UBP_LobbyScoreboard_C_ScoreboardUp_Params
{
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.ScoreboardDown
struct UBP_LobbyScoreboard_C_ScoreboardDown_Params
{
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.ModeChanged
struct UBP_LobbyScoreboard_C_ModeChanged_Params
{
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Construct
struct UBP_LobbyScoreboard_C_Construct_Params
{
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Bot Selected
struct UBP_LobbyScoreboard_C_Bot_Selected_Params
{
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Slot Drop Down Selected
struct UBP_LobbyScoreboard_C_Slot_Drop_Down_Selected_Params
{
	struct FOnlineFriendBPData                         Friend_GUID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Team_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Selection_Index;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Swap Slot Selected
struct UBP_LobbyScoreboard_C_Swap_Slot_Selected_Params
{
	int                                                Team_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FOnlineFriendBPData                         Friend_GUID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.BotChanged
struct UBP_LobbyScoreboard_C_BotChanged_Params
{
	struct FString                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Set to Free for All
struct UBP_LobbyScoreboard_C_Set_to_Free_for_All_Params
{
	bool                                               Free_for_all;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.ExecuteUbergraph_BP_LobbyScoreboard
struct UBP_LobbyScoreboard_C_ExecuteUbergraph_BP_LobbyScoreboard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.GameModeChanged__DelegateSignature
struct UBP_LobbyScoreboard_C_GameModeChanged__DelegateSignature_Params
{
	int                                                GameModeIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.FriendsList__DelegateSignature
struct UBP_LobbyScoreboard_C_FriendsList__DelegateSignature_Params
{
	bool                                               Opening;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Swap Two Spots__DelegateSignature
struct UBP_LobbyScoreboard_C_Swap_Two_Spots__DelegateSignature_Params
{
	struct FOnlineFriendBPData                         Friend_GUID_A;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOnlineFriendBPData                         Friend_GUID_B;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.SlotTargetedForModification__DelegateSignature
struct UBP_LobbyScoreboard_C_SlotTargetedForModification__DelegateSignature_Params
{
	int                                                teamIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.BotAdded__DelegateSignature
struct UBP_LobbyScoreboard_C_BotAdded__DelegateSignature_Params
{
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.HostLeft__DelegateSignature
struct UBP_LobbyScoreboard_C_HostLeft__DelegateSignature_Params
{
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.HostJoined__DelegateSignature
struct UBP_LobbyScoreboard_C_HostJoined__DelegateSignature_Params
{
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.SettingsSaved__DelegateSignature
struct UBP_LobbyScoreboard_C_SettingsSaved__DelegateSignature_Params
{
	int                                                Map;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.PlayerInvited__DelegateSignature
struct UBP_LobbyScoreboard_C_PlayerInvited__DelegateSignature_Params
{
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FOnlineFriendBPData                         Friend_GUID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.PlayerEdited__DelegateSignature
struct UBP_LobbyScoreboard_C_PlayerEdited__DelegateSignature_Params
{
	int                                                ChangeType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FOnlineFriendBPData                         Friend_GUID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Team_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
