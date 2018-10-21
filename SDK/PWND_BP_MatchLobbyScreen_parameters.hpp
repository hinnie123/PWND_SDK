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

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.UpdateVisualizerMaterials
struct UBP_MatchLobbyScreen_C_UpdateVisualizerMaterials_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.CheckUserForReady
struct UBP_MatchLobbyScreen_C_CheckUserForReady_Params
{
	class UBP_LobbyReadyIcon_C*                        Ready;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               No_User;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.DestroyLoadoutVisualizers
struct UBP_MatchLobbyScreen_C_DestroyLoadoutVisualizers_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SpawnLoadoutVisualizers
struct UBP_MatchLobbyScreen_C_SpawnLoadoutVisualizers_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SetLoadout
struct UBP_MatchLobbyScreen_C_SetLoadout_Params
{
	struct FPwndLoadout                                Loadout;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                TeamNumber;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                teamIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SetRank
struct UBP_MatchLobbyScreen_C_SetRank_Params
{
	class UBP_UsernamePlate_C*                         plate;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SetUsername
struct UBP_MatchLobbyScreen_C_SetUsername_Params
{
	class UBP_UsernamePlate_C*                         plate;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               No_User;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Construct
struct UBP_MatchLobbyScreen_C_Construct_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_TextureSwap_102_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature
struct UBP_MatchLobbyScreen_C_BndEvt__Button_TextureSwap_102_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.NotifyCountDownValue
struct UBP_MatchLobbyScreen_C_NotifyCountDownValue_Params
{
	bool*                                              bIsValid;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               countdownTimer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_Ready_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct UBP_MatchLobbyScreen_C_BndEvt__Button_Ready_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_SewitchTeams_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
struct UBP_MatchLobbyScreen_C_BndEvt__Button_SewitchTeams_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_DebugLoadouts_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature
struct UBP_MatchLobbyScreen_C_BndEvt__Button_DebugLoadouts_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ClearLobbyPlayerDataForUpdate
struct UBP_MatchLobbyScreen_C_ClearLobbyPlayerDataForUpdate_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Destruct
struct UBP_MatchLobbyScreen_C_Destruct_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnSetLoadoutEvent_Event_1
struct UBP_MatchLobbyScreen_C_OnSetLoadoutEvent_Event_1_Params
{
	class APwndLoadoutVisualizerHelper*                Helper;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APwndLoadoutVisualizer*                      Visualizer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoadoutChanged;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPwndLoadout                                Loadout;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPwndLoadout                                PrevLoadout;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Character Changed
struct UBP_MatchLobbyScreen_C_Character_Changed_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.UnevenNumberOfPlayersAlert
struct UBP_MatchLobbyScreen_C_UnevenNumberOfPlayersAlert_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Toggle Buttons
struct UBP_MatchLobbyScreen_C_Toggle_Buttons_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnOkayPressed_Event_1
struct UBP_MatchLobbyScreen_C_OnOkayPressed_Event_1_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Error Leave Lobby
struct UBP_MatchLobbyScreen_C_Error_Leave_Lobby_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ONCancelPressed_Event_1
struct UBP_MatchLobbyScreen_C_ONCancelPressed_Event_1_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.CharacterInfoButtonPressed
struct UBP_MatchLobbyScreen_C_CharacterInfoButtonPressed_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ShowTeamsButtonPressed
struct UBP_MatchLobbyScreen_C_ShowTeamsButtonPressed_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Toggle Character Info
struct UBP_MatchLobbyScreen_C_Toggle_Character_Info_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Lock Character Select
struct UBP_MatchLobbyScreen_C_Lock_Character_Select_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Tick
struct UBP_MatchLobbyScreen_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.TEMP_ForceQuitIfStillNotInMatch
struct UBP_MatchLobbyScreen_C_TEMP_ForceQuitIfStillNotInMatch_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__ButtonHintBack_K2Node_ComponentBoundEvent_124_OnButtonClickedEvent__DelegateSignature
struct UBP_MatchLobbyScreen_C_BndEvt__ButtonHintBack_K2Node_ComponentBoundEvent_124_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__ButtonHintsScoreboard_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
struct UBP_MatchLobbyScreen_C_BndEvt__ButtonHintsScoreboard_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnEnterScreen
struct UBP_MatchLobbyScreen_C_OnEnterScreen_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnExitScreen
struct UBP_MatchLobbyScreen_C_OnExitScreen_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnBack
struct UBP_MatchLobbyScreen_C_OnBack_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ChangePlayer
struct UBP_MatchLobbyScreen_C_ChangePlayer_Params
{
	int                                                ChangeType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FOnlineFriendBPData                         Friend_GUID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Team_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ConfirmPlayerInvited
struct UBP_MatchLobbyScreen_C_ConfirmPlayerInvited_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SettingsSaved_Event
struct UBP_MatchLobbyScreen_C_SettingsSaved_Event_Params
{
	int                                                Map;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Points;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Arrange for Even Odd Players
struct UBP_MatchLobbyScreen_C_Arrange_for_Even_Odd_Players_Params
{
	int                                                NumPlayers;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Countdown
struct UBP_MatchLobbyScreen_C_Countdown_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnFriendAcceptedInvite
struct UBP_MatchLobbyScreen_C_OnFriendAcceptedInvite_Params
{
	struct FOnlineFriendBPData*                        FriendData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               teamIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnFriendRejectedInvite
struct UBP_MatchLobbyScreen_C_OnFriendRejectedInvite_Params
{
	struct FOnlineFriendBPData*                        FriendData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnReceivedFriendsList
struct UBP_MatchLobbyScreen_C_OnReceivedFriendsList_Params
{
	TArray<struct FOnlineFriendBPData>*                friendList;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnCustomLobbyInitialized
struct UBP_MatchLobbyScreen_C_OnCustomLobbyInitialized_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.HostLeft_Event
struct UBP_MatchLobbyScreen_C_HostLeft_Event_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_CustomSettings_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_MatchLobbyScreen_C_BndEvt__Button_CustomSettings_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Set Ready
struct UBP_MatchLobbyScreen_C_Set_Ready_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Set Char Select
struct UBP_MatchLobbyScreen_C_Set_Char_Select_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_HostStartMatch_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
struct UBP_MatchLobbyScreen_C_BndEvt__Button_HostStartMatch_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Invite_Event
struct UBP_MatchLobbyScreen_C_Invite_Event_Params
{
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FOnlineFriendBPData                         Friend_GUID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.HostJoined_Event
struct UBP_MatchLobbyScreen_C_HostJoined_Event_Params
{
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnServerReadyToBeSpunUp
struct UBP_MatchLobbyScreen_C_OnServerReadyToBeSpunUp_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnServerReadyToJoin
struct UBP_MatchLobbyScreen_C_OnServerReadyToJoin_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Joining Match Failed
struct UBP_MatchLobbyScreen_C_Joining_Match_Failed_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_CustomSave_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature
struct UBP_MatchLobbyScreen_C_BndEvt__Button_CustomSave_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.CustomEvent
struct UBP_MatchLobbyScreen_C_CustomEvent_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Custom Settings Screen
struct UBP_MatchLobbyScreen_C_Custom_Settings_Screen_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Custom Character Select Screen
struct UBP_MatchLobbyScreen_C_Custom_Character_Select_Screen_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Custom Readied Up Screen
struct UBP_MatchLobbyScreen_C_Custom_Readied_Up_Screen_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Scoreboard Up
struct UBP_MatchLobbyScreen_C_Scoreboard_Up_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Scoreboard Down
struct UBP_MatchLobbyScreen_C_Scoreboard_Down_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Show Button Ready or Unready
struct UBP_MatchLobbyScreen_C_Show_Button_Ready_or_Unready_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnAcceptButtonPressed
struct UBP_MatchLobbyScreen_C_OnAcceptButtonPressed_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnSpecialEscapeButtonPressed
struct UBP_MatchLobbyScreen_C_OnSpecialEscapeButtonPressed_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnEnteredBackfillingState
struct UBP_MatchLobbyScreen_C_OnEnteredBackfillingState_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.EnableCharacterSelectList
struct UBP_MatchLobbyScreen_C_EnableCharacterSelectList_Params
{
	bool                                               enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PressReadyButtonFunctionality;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.EnableEvenTeamOrientation
struct UBP_MatchLobbyScreen_C_EnableEvenTeamOrientation_Params
{
	bool                                               enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ProvideAvailableCharacterGuids
struct UBP_MatchLobbyScreen_C_ProvideAvailableCharacterGuids_Params
{
	TArray<struct FGuid>*                              allCharacterGuids;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Display Character Info
struct UBP_MatchLobbyScreen_C_Display_Character_Info_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Hide Character Info
struct UBP_MatchLobbyScreen_C_Hide_Character_Info_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.CharacterSelected_Event_1
struct UBP_MatchLobbyScreen_C_CharacterSelected_Event_1_Params
{
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UButton_CindyCharList_C*                     ButtonRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SlotTargetedForModification_Event
struct UBP_MatchLobbyScreen_C_SlotTargetedForModification_Event_Params
{
	int                                                teamIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Swap Spots Event
struct UBP_MatchLobbyScreen_C_Swap_Spots_Event_Params
{
	struct FOnlineFriendBPData                         Friend_GUID_A;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOnlineFriendBPData                         Friend_GUID_B;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnSlotUpdated
struct UBP_MatchLobbyScreen_C_OnSlotUpdated_Params
{
	struct FOnlineFriendBPData*                        playerData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EHostRelevantTeamButtonState>*         buttonState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPwndLoadout*                               Loadout;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int*                                               teamIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Update Slot
struct UBP_MatchLobbyScreen_C_Update_Slot_Params
{
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHostRelevantTeamButtonState>          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPwndLoadout                                Loadout;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOnlineFriendBPData                         Player_Data;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SetFriendsList
struct UBP_MatchLobbyScreen_C_SetFriendsList_Params
{
	bool                                               Opening;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnCustomLobbyUpdated
struct UBP_MatchLobbyScreen_C_OnCustomLobbyUpdated_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnSafeInitialization
struct UBP_MatchLobbyScreen_C_OnSafeInitialization_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Timer Count Down Value
struct UBP_MatchLobbyScreen_C_Timer_Count_Down_Value_Params
{
	bool                                               InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InputPin2;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnCurrentGameModeSet
struct UBP_MatchLobbyScreen_C_OnCurrentGameModeSet_Params
{
	int*                                               numberOfTeams;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnGameModeChangedViaDropDown
struct UBP_MatchLobbyScreen_C_OnGameModeChangedViaDropDown_Params
{
	int                                                GameModeIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ExecuteUbergraph_BP_MatchLobbyScreen
struct UBP_MatchLobbyScreen_C_ExecuteUbergraph_BP_MatchLobbyScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.DebugLoadoutsPressed__DelegateSignature
struct UBP_MatchLobbyScreen_C_DebugLoadoutsPressed__DelegateSignature_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.LoadingScreenWidget__DelegateSignature
struct UBP_MatchLobbyScreen_C_LoadingScreenWidget__DelegateSignature_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Back Button Pressed__DelegateSignature
struct UBP_MatchLobbyScreen_C_Back_Button_Pressed__DelegateSignature_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.LootButtonPressed__DelegateSignature
struct UBP_MatchLobbyScreen_C_LootButtonPressed__DelegateSignature_Params
{
};

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.CharactersButtonPressed__DelegateSignature
struct UBP_MatchLobbyScreen_C_CharactersButtonPressed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
