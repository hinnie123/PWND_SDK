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

// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.IsCurrentlyInvitingFriends
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::IsCurrentlyInvitingFriends(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.IsCurrentlyInvitingFriends");

	UBP_LobbyScoreboard_C_IsCurrentlyInvitingFriends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Check Opposite Team Filled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Vacancy                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::Check_Opposite_Team_Filled(int Team_Index, bool* Vacancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Check Opposite Team Filled");

	UBP_LobbyScoreboard_C_Check_Opposite_Team_Filled_Params params;
	params.Team_Index = Team_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vacancy != nullptr)
		*Vacancy = params.Vacancy;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Return Save Settings1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MapSelection                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            PointsSelection                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            DurationSelection              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ModeSelection                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            BotSetting                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::Return_Save_Settings1(int* MapSelection, int* PointsSelection, int* DurationSelection, int* ModeSelection, int* BotSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Return Save Settings1");

	UBP_LobbyScoreboard_C_Return_Save_Settings1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapSelection != nullptr)
		*MapSelection = params.MapSelection;
	if (PointsSelection != nullptr)
		*PointsSelection = params.PointsSelection;
	if (DurationSelection != nullptr)
		*DurationSelection = params.DurationSelection;
	if (ModeSelection != nullptr)
		*ModeSelection = params.ModeSelection;
	if (BotSetting != nullptr)
		*BotSetting = params.BotSetting;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Clear Users
// (BlueprintCallable, BlueprintEvent)

void UBP_LobbyScoreboard_C::Clear_Users()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Clear Users");

	UBP_LobbyScoreboard_C_Clear_Users_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.InviteToggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ToInvite                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::InviteToggle(bool ToInvite)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.InviteToggle");

	UBP_LobbyScoreboard_C_InviteToggle_Params params;
	params.ToInvite = ToInvite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Initialize Dropdowns
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           Maps                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FText>           Points                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FText>           Durations                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FText>           Modes                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_LobbyScoreboard_C::Initialize_Dropdowns(TArray<struct FText> Maps, TArray<struct FText> Points, TArray<struct FText> Durations, TArray<struct FText> Modes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Initialize Dropdowns");

	UBP_LobbyScoreboard_C_Initialize_Dropdowns_Params params;
	params.Maps = Maps;
	params.Points = Points;
	params.Durations = Durations;
	params.Modes = Modes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.MapChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::MapChanged(const struct FString& Index, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.MapChanged");

	UBP_LobbyScoreboard_C_MapChanged_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.PointsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::PointsChanged(const struct FString& Index, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.PointsChanged");

	UBP_LobbyScoreboard_C_PointsChanged_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.DurationChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::DurationChanged(const struct FString& Index, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.DurationChanged");

	UBP_LobbyScoreboard_C_DurationChanged_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Populate Friends List
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOnlineFriendBPData> Friends                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_LobbyScoreboard_C::Populate_Friends_List(TArray<struct FOnlineFriendBPData> Friends)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Populate Friends List");

	UBP_LobbyScoreboard_C_Populate_Friends_List_Params params;
	params.Friends = Friends;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.CustomLobby
// (BlueprintCallable, BlueprintEvent)

void UBP_LobbyScoreboard_C::CustomLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.CustomLobby");

	UBP_LobbyScoreboard_C_CustomLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Friend Joined
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineFriendBPData     Friend                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::Friend_Joined(const struct FOnlineFriendBPData& Friend, int Team, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Friend Joined");

	UBP_LobbyScoreboard_C_Friend_Joined_Params params;
	params.Friend = Friend;
	params.Team = Team;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Friend Declined
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineFriendBPData     Friend                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::Friend_Declined(const struct FOnlineFriendBPData& Friend, int Team, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Friend Declined");

	UBP_LobbyScoreboard_C_Friend_Declined_Params params;
	params.Friend = Friend;
	params.Team = Team;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_LobbyScoreboard_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_LobbyScoreboard_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.ConfirmedInviteSent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineFriendBPData     Friend_GUID                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::ConfirmedInviteSent(const struct FOnlineFriendBPData& Friend_GUID, int Team, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.ConfirmedInviteSent");

	UBP_LobbyScoreboard_C_ConfirmedInviteSent_Params params;
	params.Friend_GUID = Friend_GUID;
	params.Team = Team;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.SwitchToInviteScreen_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::SwitchToInviteScreen_event(int Team, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.SwitchToInviteScreen_event");

	UBP_LobbyScoreboard_C_SwitchToInviteScreen_event_Params params;
	params.Team = Team;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Invite_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FOnlineFriendBPData     Friend_GUID                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_LobbyScoreboard_C::Invite_Event(int Team, int Index, const struct FOnlineFriendBPData& Friend_GUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Invite_Event");

	UBP_LobbyScoreboard_C_Invite_Event_Params params;
	params.Team = Team;
	params.Index = Index;
	params.Friend_GUID = Friend_GUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Update Scoreboard Slot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Slot_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EHostRelevantTeamButtonState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   UserName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPwndLoadout            Loadout                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FOnlineFriendBPData     Friend_GUID                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_LobbyScoreboard_C::Update_Scoreboard_Slot(int Team_Index, int Slot_Index, TEnumAsByte<EHostRelevantTeamButtonState> State, const struct FText& UserName, const struct FPwndLoadout& Loadout, const struct FOnlineFriendBPData& Friend_GUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Update Scoreboard Slot");

	UBP_LobbyScoreboard_C_Update_Scoreboard_Slot_Params params;
	params.Team_Index = Team_Index;
	params.Slot_Index = Slot_Index;
	params.State = State;
	params.UserName = UserName;
	params.Loadout = Loadout;
	params.Friend_GUID = Friend_GUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.ScoreboardUp
// (BlueprintCallable, BlueprintEvent)

void UBP_LobbyScoreboard_C::ScoreboardUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.ScoreboardUp");

	UBP_LobbyScoreboard_C_ScoreboardUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.ScoreboardDown
// (BlueprintCallable, BlueprintEvent)

void UBP_LobbyScoreboard_C::ScoreboardDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.ScoreboardDown");

	UBP_LobbyScoreboard_C_ScoreboardDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.ModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::ModeChanged(const struct FString& Index, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.ModeChanged");

	UBP_LobbyScoreboard_C_ModeChanged_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_LobbyScoreboard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Construct");

	UBP_LobbyScoreboard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Bot Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::Bot_Selected(const struct FString& Index, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Bot Selected");

	UBP_LobbyScoreboard_C_Bot_Selected_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Slot Drop Down Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineFriendBPData     Friend_GUID                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Team_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Slot_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Selection_Index                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::Slot_Drop_Down_Selected(const struct FOnlineFriendBPData& Friend_GUID, int Team_Index, int Slot_Index, int Selection_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Slot Drop Down Selected");

	UBP_LobbyScoreboard_C_Slot_Drop_Down_Selected_Params params;
	params.Friend_GUID = Friend_GUID;
	params.Team_Index = Team_Index;
	params.Slot_Index = Slot_Index;
	params.Selection_Index = Selection_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Swap Slot Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Slot_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FOnlineFriendBPData     Friend_GUID                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_LobbyScoreboard_C::Swap_Slot_Selected(int Team_Index, int Slot_Index, const struct FOnlineFriendBPData& Friend_GUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Swap Slot Selected");

	UBP_LobbyScoreboard_C_Swap_Slot_Selected_Params params;
	params.Team_Index = Team_Index;
	params.Slot_Index = Slot_Index;
	params.Friend_GUID = Friend_GUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.BotChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::BotChanged(const struct FString& Index, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.BotChanged");

	UBP_LobbyScoreboard_C_BotChanged_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Set to Free for All
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Free_for_all                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::Set_to_Free_for_All(bool Free_for_all)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Set to Free for All");

	UBP_LobbyScoreboard_C_Set_to_Free_for_All_Params params;
	params.Free_for_all = Free_for_all;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.ExecuteUbergraph_BP_LobbyScoreboard
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::ExecuteUbergraph_BP_LobbyScoreboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.ExecuteUbergraph_BP_LobbyScoreboard");

	UBP_LobbyScoreboard_C_ExecuteUbergraph_BP_LobbyScoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.GameModeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GameModeIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::GameModeChanged__DelegateSignature(int GameModeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.GameModeChanged__DelegateSignature");

	UBP_LobbyScoreboard_C_GameModeChanged__DelegateSignature_Params params;
	params.GameModeIndex = GameModeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.FriendsList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Opening                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::FriendsList__DelegateSignature(bool Opening)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.FriendsList__DelegateSignature");

	UBP_LobbyScoreboard_C_FriendsList__DelegateSignature_Params params;
	params.Opening = Opening;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Swap Two Spots__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineFriendBPData     Friend_GUID_A                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FOnlineFriendBPData     Friend_GUID_B                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_LobbyScoreboard_C::Swap_Two_Spots__DelegateSignature(const struct FOnlineFriendBPData& Friend_GUID_A, const struct FOnlineFriendBPData& Friend_GUID_B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.Swap Two Spots__DelegateSignature");

	UBP_LobbyScoreboard_C_Swap_Two_Spots__DelegateSignature_Params params;
	params.Friend_GUID_A = Friend_GUID_A;
	params.Friend_GUID_B = Friend_GUID_B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.SlotTargetedForModification__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            teamIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::SlotTargetedForModification__DelegateSignature(int teamIndex, int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.SlotTargetedForModification__DelegateSignature");

	UBP_LobbyScoreboard_C_SlotTargetedForModification__DelegateSignature_Params params;
	params.teamIndex = teamIndex;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.BotAdded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::BotAdded__DelegateSignature(int Team, int Index, int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.BotAdded__DelegateSignature");

	UBP_LobbyScoreboard_C_BotAdded__DelegateSignature_Params params;
	params.Team = Team;
	params.Index = Index;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.HostLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_LobbyScoreboard_C::HostLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.HostLeft__DelegateSignature");

	UBP_LobbyScoreboard_C_HostLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.HostJoined__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::HostJoined__DelegateSignature(int Team, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.HostJoined__DelegateSignature");

	UBP_LobbyScoreboard_C_HostJoined__DelegateSignature_Params params;
	params.Team = Team;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.SettingsSaved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Map                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::SettingsSaved__DelegateSignature(int Map, int Points, int Duration, int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.SettingsSaved__DelegateSignature");

	UBP_LobbyScoreboard_C_SettingsSaved__DelegateSignature_Params params;
	params.Map = Map;
	params.Points = Points;
	params.Duration = Duration;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.PlayerInvited__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FOnlineFriendBPData     Friend_GUID                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_LobbyScoreboard_C::PlayerInvited__DelegateSignature(int Team, int Index, const struct FOnlineFriendBPData& Friend_GUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.PlayerInvited__DelegateSignature");

	UBP_LobbyScoreboard_C_PlayerInvited__DelegateSignature_Params params;
	params.Team = Team;
	params.Index = Index;
	params.Friend_GUID = Friend_GUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.PlayerEdited__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChangeType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FOnlineFriendBPData     Friend_GUID                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Team_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Slot_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyScoreboard_C::PlayerEdited__DelegateSignature(int ChangeType, const struct FOnlineFriendBPData& Friend_GUID, int Team_Index, int Slot_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyScoreboard.BP_LobbyScoreboard_C.PlayerEdited__DelegateSignature");

	UBP_LobbyScoreboard_C_PlayerEdited__DelegateSignature_Params params;
	params.ChangeType = ChangeType;
	params.Friend_GUID = Friend_GUID;
	params.Team_Index = Team_Index;
	params.Slot_Index = Slot_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
