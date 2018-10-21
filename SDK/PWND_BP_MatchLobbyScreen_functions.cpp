// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.UpdateVisualizerMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::UpdateVisualizerMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.UpdateVisualizerMaterials");

	UBP_MatchLobbyScreen_C_UpdateVisualizerMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.CheckUserForReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LobbyReadyIcon_C*    Ready                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           No_User                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::CheckUserForReady(class UBP_LobbyReadyIcon_C* Ready, bool No_User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.CheckUserForReady");

	UBP_MatchLobbyScreen_C_CheckUserForReady_Params params;
	params.Ready = Ready;
	params.No_User = No_User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.DestroyLoadoutVisualizers
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::DestroyLoadoutVisualizers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.DestroyLoadoutVisualizers");

	UBP_MatchLobbyScreen_C_DestroyLoadoutVisualizers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SpawnLoadoutVisualizers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::SpawnLoadoutVisualizers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SpawnLoadoutVisualizers");

	UBP_MatchLobbyScreen_C_SpawnLoadoutVisualizers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SetLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPwndLoadout            Loadout                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            TeamNumber                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            teamIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::SetLoadout(const struct FPwndLoadout& Loadout, int TeamNumber, int teamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SetLoadout");

	UBP_MatchLobbyScreen_C_SetLoadout_Params params;
	params.Loadout = Loadout;
	params.TeamNumber = TeamNumber;
	params.teamIndex = teamIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SetRank
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_UsernamePlate_C*     plate                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::SetRank(class UBP_UsernamePlate_C* plate, int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SetRank");

	UBP_MatchLobbyScreen_C_SetRank_Params params;
	params.plate = plate;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SetUsername
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_UsernamePlate_C*     plate                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           No_User                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::SetUsername(class UBP_UsernamePlate_C* plate, const struct FText& Name, bool* No_User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SetUsername");

	UBP_MatchLobbyScreen_C_SetUsername_Params params;
	params.plate = plate;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (No_User != nullptr)
		*No_User = params.No_User;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_MatchLobbyScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Construct");

	UBP_MatchLobbyScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_TextureSwap_102_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MatchLobbyScreen_C::BndEvt__Button_TextureSwap_102_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_TextureSwap_102_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature");

	UBP_MatchLobbyScreen_C_BndEvt__Button_TextureSwap_102_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.NotifyCountDownValue
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsValid                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           countdownTimer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::NotifyCountDownValue(bool* bIsValid, int* countdownTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.NotifyCountDownValue");

	UBP_MatchLobbyScreen_C_NotifyCountDownValue_Params params;
	params.bIsValid = bIsValid;
	params.countdownTimer = countdownTimer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_Ready_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MatchLobbyScreen_C::BndEvt__Button_Ready_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_Ready_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UBP_MatchLobbyScreen_C_BndEvt__Button_Ready_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_SewitchTeams_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MatchLobbyScreen_C::BndEvt__Button_SewitchTeams_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_SewitchTeams_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");

	UBP_MatchLobbyScreen_C_BndEvt__Button_SewitchTeams_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_DebugLoadouts_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MatchLobbyScreen_C::BndEvt__Button_DebugLoadouts_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_DebugLoadouts_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature");

	UBP_MatchLobbyScreen_C_BndEvt__Button_DebugLoadouts_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ClearLobbyPlayerDataForUpdate
// (Event, Public, BlueprintEvent)

void UBP_MatchLobbyScreen_C::ClearLobbyPlayerDataForUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ClearLobbyPlayerDataForUpdate");

	UBP_MatchLobbyScreen_C_ClearLobbyPlayerDataForUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_MatchLobbyScreen_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Destruct");

	UBP_MatchLobbyScreen_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnSetLoadoutEvent_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndLoadoutVisualizerHelper* Helper                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APwndLoadoutVisualizer*  Visualizer                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoadoutChanged                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPwndLoadout            Loadout                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPwndLoadout            PrevLoadout                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MatchLobbyScreen_C::OnSetLoadoutEvent_Event_1(class APwndLoadoutVisualizerHelper* Helper, class APwndLoadoutVisualizer* Visualizer, bool bLoadoutChanged, const struct FPwndLoadout& Loadout, const struct FPwndLoadout& PrevLoadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnSetLoadoutEvent_Event_1");

	UBP_MatchLobbyScreen_C_OnSetLoadoutEvent_Event_1_Params params;
	params.Helper = Helper;
	params.Visualizer = Visualizer;
	params.bLoadoutChanged = bLoadoutChanged;
	params.Loadout = Loadout;
	params.PrevLoadout = PrevLoadout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Character Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::Character_Changed(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Character Changed");

	UBP_MatchLobbyScreen_C_Character_Changed_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.UnevenNumberOfPlayersAlert
// (Event, Public, BlueprintEvent)

void UBP_MatchLobbyScreen_C::UnevenNumberOfPlayersAlert()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.UnevenNumberOfPlayersAlert");

	UBP_MatchLobbyScreen_C_UnevenNumberOfPlayersAlert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Toggle Buttons
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::Toggle_Buttons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Toggle Buttons");

	UBP_MatchLobbyScreen_C_Toggle_Buttons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnOkayPressed_Event_1
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::OnOkayPressed_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnOkayPressed_Event_1");

	UBP_MatchLobbyScreen_C_OnOkayPressed_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Error Leave Lobby
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::Error_Leave_Lobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Error Leave Lobby");

	UBP_MatchLobbyScreen_C_Error_Leave_Lobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ONCancelPressed_Event_1
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::ONCancelPressed_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ONCancelPressed_Event_1");

	UBP_MatchLobbyScreen_C_ONCancelPressed_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.CharacterInfoButtonPressed
// (Event, Public, BlueprintEvent)

void UBP_MatchLobbyScreen_C::CharacterInfoButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.CharacterInfoButtonPressed");

	UBP_MatchLobbyScreen_C_CharacterInfoButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ShowTeamsButtonPressed
// (Event, Public, BlueprintEvent)

void UBP_MatchLobbyScreen_C::ShowTeamsButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ShowTeamsButtonPressed");

	UBP_MatchLobbyScreen_C_ShowTeamsButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Toggle Character Info
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::Toggle_Character_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Toggle Character Info");

	UBP_MatchLobbyScreen_C_Toggle_Character_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Lock Character Select
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::Lock_Character_Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Lock Character Select");

	UBP_MatchLobbyScreen_C_Lock_Character_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Tick");

	UBP_MatchLobbyScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.TEMP_ForceQuitIfStillNotInMatch
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::TEMP_ForceQuitIfStillNotInMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.TEMP_ForceQuitIfStillNotInMatch");

	UBP_MatchLobbyScreen_C_TEMP_ForceQuitIfStillNotInMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__ButtonHintBack_K2Node_ComponentBoundEvent_124_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MatchLobbyScreen_C::BndEvt__ButtonHintBack_K2Node_ComponentBoundEvent_124_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__ButtonHintBack_K2Node_ComponentBoundEvent_124_OnButtonClickedEvent__DelegateSignature");

	UBP_MatchLobbyScreen_C_BndEvt__ButtonHintBack_K2Node_ComponentBoundEvent_124_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__ButtonHintsScoreboard_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MatchLobbyScreen_C::BndEvt__ButtonHintsScoreboard_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__ButtonHintsScoreboard_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature");

	UBP_MatchLobbyScreen_C_BndEvt__ButtonHintsScoreboard_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnEnterScreen
// (Event, Public, BlueprintEvent)

void UBP_MatchLobbyScreen_C::OnEnterScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnEnterScreen");

	UBP_MatchLobbyScreen_C_OnEnterScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnExitScreen
// (Event, Public, BlueprintEvent)

void UBP_MatchLobbyScreen_C::OnExitScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnExitScreen");

	UBP_MatchLobbyScreen_C_OnExitScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnBack
// (Event, Public, BlueprintEvent)

void UBP_MatchLobbyScreen_C::OnBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnBack");

	UBP_MatchLobbyScreen_C_OnBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ChangePlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChangeType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FOnlineFriendBPData     Friend_GUID                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Team_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Slot_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::ChangePlayer(int ChangeType, const struct FOnlineFriendBPData& Friend_GUID, int Team_Index, int Slot_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ChangePlayer");

	UBP_MatchLobbyScreen_C_ChangePlayer_Params params;
	params.ChangeType = ChangeType;
	params.Friend_GUID = Friend_GUID;
	params.Team_Index = Team_Index;
	params.Slot_Index = Slot_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ConfirmPlayerInvited
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::ConfirmPlayerInvited()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ConfirmPlayerInvited");

	UBP_MatchLobbyScreen_C_ConfirmPlayerInvited_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SettingsSaved_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Map                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::SettingsSaved_Event(int Map, int Points, int Duration, int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SettingsSaved_Event");

	UBP_MatchLobbyScreen_C_SettingsSaved_Event_Params params;
	params.Map = Map;
	params.Points = Points;
	params.Duration = Duration;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Arrange for Even Odd Players
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumPlayers                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::Arrange_for_Even_Odd_Players(int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Arrange for Even Odd Players");

	UBP_MatchLobbyScreen_C_Arrange_for_Even_Odd_Players_Params params;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Countdown
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::Countdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Countdown");

	UBP_MatchLobbyScreen_C_Countdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnFriendAcceptedInvite
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FOnlineFriendBPData*    FriendData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           teamIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::OnFriendAcceptedInvite(struct FOnlineFriendBPData* FriendData, int* teamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnFriendAcceptedInvite");

	UBP_MatchLobbyScreen_C_OnFriendAcceptedInvite_Params params;
	params.FriendData = FriendData;
	params.teamIndex = teamIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnFriendRejectedInvite
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FOnlineFriendBPData*    FriendData                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_MatchLobbyScreen_C::OnFriendRejectedInvite(struct FOnlineFriendBPData* FriendData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnFriendRejectedInvite");

	UBP_MatchLobbyScreen_C_OnFriendRejectedInvite_Params params;
	params.FriendData = FriendData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnReceivedFriendsList
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FOnlineFriendBPData>* friendList                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MatchLobbyScreen_C::OnReceivedFriendsList(TArray<struct FOnlineFriendBPData>* friendList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnReceivedFriendsList");

	UBP_MatchLobbyScreen_C_OnReceivedFriendsList_Params params;
	params.friendList = friendList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnCustomLobbyInitialized
// (Event, Public, BlueprintEvent)

void UBP_MatchLobbyScreen_C::OnCustomLobbyInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnCustomLobbyInitialized");

	UBP_MatchLobbyScreen_C_OnCustomLobbyInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.HostLeft_Event
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::HostLeft_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.HostLeft_Event");

	UBP_MatchLobbyScreen_C_HostLeft_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_CustomSettings_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MatchLobbyScreen_C::BndEvt__Button_CustomSettings_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_CustomSettings_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_MatchLobbyScreen_C_BndEvt__Button_CustomSettings_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Set Ready
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::Set_Ready()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Set Ready");

	UBP_MatchLobbyScreen_C_Set_Ready_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Set Char Select
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::Set_Char_Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Set Char Select");

	UBP_MatchLobbyScreen_C_Set_Char_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_HostStartMatch_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MatchLobbyScreen_C::BndEvt__Button_HostStartMatch_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_HostStartMatch_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");

	UBP_MatchLobbyScreen_C_BndEvt__Button_HostStartMatch_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Invite_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FOnlineFriendBPData     Friend_GUID                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_MatchLobbyScreen_C::Invite_Event(int Team, int Index, const struct FOnlineFriendBPData& Friend_GUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Invite_Event");

	UBP_MatchLobbyScreen_C_Invite_Event_Params params;
	params.Team = Team;
	params.Index = Index;
	params.Friend_GUID = Friend_GUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.HostJoined_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::HostJoined_Event(int Team, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.HostJoined_Event");

	UBP_MatchLobbyScreen_C_HostJoined_Event_Params params;
	params.Team = Team;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnServerReadyToBeSpunUp
// (Event, Public, BlueprintEvent)

void UBP_MatchLobbyScreen_C::OnServerReadyToBeSpunUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnServerReadyToBeSpunUp");

	UBP_MatchLobbyScreen_C_OnServerReadyToBeSpunUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnServerReadyToJoin
// (Event, Public, BlueprintEvent)

void UBP_MatchLobbyScreen_C::OnServerReadyToJoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnServerReadyToJoin");

	UBP_MatchLobbyScreen_C_OnServerReadyToJoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Joining Match Failed
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::Joining_Match_Failed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Joining Match Failed");

	UBP_MatchLobbyScreen_C_Joining_Match_Failed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_CustomSave_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_MatchLobbyScreen_C::BndEvt__Button_CustomSave_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.BndEvt__Button_CustomSave_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature");

	UBP_MatchLobbyScreen_C_BndEvt__Button_CustomSave_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.CustomEvent");

	UBP_MatchLobbyScreen_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Custom Settings Screen
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::Custom_Settings_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Custom Settings Screen");

	UBP_MatchLobbyScreen_C_Custom_Settings_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Custom Character Select Screen
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::Custom_Character_Select_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Custom Character Select Screen");

	UBP_MatchLobbyScreen_C_Custom_Character_Select_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Custom Readied Up Screen
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::Custom_Readied_Up_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Custom Readied Up Screen");

	UBP_MatchLobbyScreen_C_Custom_Readied_Up_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Scoreboard Up
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::Scoreboard_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Scoreboard Up");

	UBP_MatchLobbyScreen_C_Scoreboard_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Scoreboard Down
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::Scoreboard_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Scoreboard Down");

	UBP_MatchLobbyScreen_C_Scoreboard_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Show Button Ready or Unready
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::Show_Button_Ready_or_Unready()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Show Button Ready or Unready");

	UBP_MatchLobbyScreen_C_Show_Button_Ready_or_Unready_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnAcceptButtonPressed
// (Event, Public, BlueprintEvent)

void UBP_MatchLobbyScreen_C::OnAcceptButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnAcceptButtonPressed");

	UBP_MatchLobbyScreen_C_OnAcceptButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnSpecialEscapeButtonPressed
// (Event, Public, BlueprintEvent)

void UBP_MatchLobbyScreen_C::OnSpecialEscapeButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnSpecialEscapeButtonPressed");

	UBP_MatchLobbyScreen_C_OnSpecialEscapeButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnEnteredBackfillingState
// (Event, Public, BlueprintEvent)

void UBP_MatchLobbyScreen_C::OnEnteredBackfillingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnEnteredBackfillingState");

	UBP_MatchLobbyScreen_C_OnEnteredBackfillingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.EnableCharacterSelectList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PressReadyButtonFunctionality  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::EnableCharacterSelectList(bool enable, bool PressReadyButtonFunctionality)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.EnableCharacterSelectList");

	UBP_MatchLobbyScreen_C_EnableCharacterSelectList_Params params;
	params.enable = enable;
	params.PressReadyButtonFunctionality = PressReadyButtonFunctionality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.EnableEvenTeamOrientation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::EnableEvenTeamOrientation(bool enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.EnableEvenTeamOrientation");

	UBP_MatchLobbyScreen_C_EnableEvenTeamOrientation_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ProvideAvailableCharacterGuids
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FGuid>*          allCharacterGuids              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_MatchLobbyScreen_C::ProvideAvailableCharacterGuids(TArray<struct FGuid>* allCharacterGuids)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ProvideAvailableCharacterGuids");

	UBP_MatchLobbyScreen_C_ProvideAvailableCharacterGuids_Params params;
	params.allCharacterGuids = allCharacterGuids;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Display Character Info
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::Display_Character_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Display Character Info");

	UBP_MatchLobbyScreen_C_Display_Character_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Hide Character Info
// (BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::Hide_Character_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Hide Character Info");

	UBP_MatchLobbyScreen_C_Hide_Character_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.CharacterSelected_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UButton_CindyCharList_C* ButtonRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::CharacterSelected_Event_1(const struct FGuid& Guid, class UButton_CindyCharList_C* ButtonRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.CharacterSelected_Event_1");

	UBP_MatchLobbyScreen_C_CharacterSelected_Event_1_Params params;
	params.Guid = Guid;
	params.ButtonRef = ButtonRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SlotTargetedForModification_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            teamIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::SlotTargetedForModification_Event(int teamIndex, int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SlotTargetedForModification_Event");

	UBP_MatchLobbyScreen_C_SlotTargetedForModification_Event_Params params;
	params.teamIndex = teamIndex;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Swap Spots Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineFriendBPData     Friend_GUID_A                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FOnlineFriendBPData     Friend_GUID_B                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_MatchLobbyScreen_C::Swap_Spots_Event(const struct FOnlineFriendBPData& Friend_GUID_A, const struct FOnlineFriendBPData& Friend_GUID_B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Swap Spots Event");

	UBP_MatchLobbyScreen_C_Swap_Spots_Event_Params params;
	params.Friend_GUID_A = Friend_GUID_A;
	params.Friend_GUID_B = Friend_GUID_B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnSlotUpdated
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOnlineFriendBPData*    playerData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EHostRelevantTeamButtonState>* buttonState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPwndLoadout*           Loadout                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int*                           teamIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::OnSlotUpdated(struct FOnlineFriendBPData* playerData, TEnumAsByte<EHostRelevantTeamButtonState>* buttonState, struct FPwndLoadout* Loadout, int* teamIndex, int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnSlotUpdated");

	UBP_MatchLobbyScreen_C_OnSlotUpdated_Params params;
	params.playerData = playerData;
	params.buttonState = buttonState;
	params.Loadout = Loadout;
	params.teamIndex = teamIndex;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Update Slot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EHostRelevantTeamButtonState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPwndLoadout            Loadout                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FOnlineFriendBPData     Player_Data                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_MatchLobbyScreen_C::Update_Slot(int Team, int Slot, TEnumAsByte<EHostRelevantTeamButtonState> State, const struct FPwndLoadout& Loadout, const struct FOnlineFriendBPData& Player_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Update Slot");

	UBP_MatchLobbyScreen_C_Update_Slot_Params params;
	params.Team = Team;
	params.Slot = Slot;
	params.State = State;
	params.Loadout = Loadout;
	params.Player_Data = Player_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SetFriendsList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Opening                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::SetFriendsList(bool Opening)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.SetFriendsList");

	UBP_MatchLobbyScreen_C_SetFriendsList_Params params;
	params.Opening = Opening;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnCustomLobbyUpdated
// (Event, Public, BlueprintEvent)

void UBP_MatchLobbyScreen_C::OnCustomLobbyUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnCustomLobbyUpdated");

	UBP_MatchLobbyScreen_C_OnCustomLobbyUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnSafeInitialization
// (Event, Public, BlueprintEvent)

void UBP_MatchLobbyScreen_C::OnSafeInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnSafeInitialization");

	UBP_MatchLobbyScreen_C_OnSafeInitialization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Timer Count Down Value
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InputPin2                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::Timer_Count_Down_Value(bool InputPin, int InputPin2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Timer Count Down Value");

	UBP_MatchLobbyScreen_C_Timer_Count_Down_Value_Params params;
	params.InputPin = InputPin;
	params.InputPin2 = InputPin2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnCurrentGameModeSet
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           numberOfTeams                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::OnCurrentGameModeSet(int* numberOfTeams)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnCurrentGameModeSet");

	UBP_MatchLobbyScreen_C_OnCurrentGameModeSet_Params params;
	params.numberOfTeams = numberOfTeams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnGameModeChangedViaDropDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GameModeIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::OnGameModeChangedViaDropDown(int GameModeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.OnGameModeChangedViaDropDown");

	UBP_MatchLobbyScreen_C_OnGameModeChangedViaDropDown_Params params;
	params.GameModeIndex = GameModeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ExecuteUbergraph_BP_MatchLobbyScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MatchLobbyScreen_C::ExecuteUbergraph_BP_MatchLobbyScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.ExecuteUbergraph_BP_MatchLobbyScreen");

	UBP_MatchLobbyScreen_C_ExecuteUbergraph_BP_MatchLobbyScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.DebugLoadoutsPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::DebugLoadoutsPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.DebugLoadoutsPressed__DelegateSignature");

	UBP_MatchLobbyScreen_C_DebugLoadoutsPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.LoadingScreenWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::LoadingScreenWidget__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.LoadingScreenWidget__DelegateSignature");

	UBP_MatchLobbyScreen_C_LoadingScreenWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Back Button Pressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::Back_Button_Pressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.Back Button Pressed__DelegateSignature");

	UBP_MatchLobbyScreen_C_Back_Button_Pressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.LootButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::LootButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.LootButtonPressed__DelegateSignature");

	UBP_MatchLobbyScreen_C_LootButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.CharactersButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_MatchLobbyScreen_C::CharactersButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MatchLobbyScreen.BP_MatchLobbyScreen_C.CharactersButtonPressed__DelegateSignature");

	UBP_MatchLobbyScreen_C_CharactersButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
