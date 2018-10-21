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

// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Return Slot State
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHostRelevantTeamButtonState> CurrentState                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreboardComponent_C::Return_Slot_State(TEnumAsByte<EHostRelevantTeamButtonState>* CurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Return Slot State");

	UBP_ScoreboardComponent_C_Return_Slot_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;
}


// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.UpdateInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APwndPlayerState*        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Friendly                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreboardComponent_C::UpdateInfo(class APwndPlayerState* PlayerState, bool Friendly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.UpdateInfo");

	UBP_ScoreboardComponent_C_UpdateInfo_Params params;
	params.PlayerState = PlayerState;
	params.Friendly = Friendly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Set Custom Host
// (BlueprintCallable, BlueprintEvent)

void UBP_ScoreboardComponent_C::Set_Custom_Host()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Set Custom Host");

	UBP_ScoreboardComponent_C_Set_Custom_Host_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Set Team Index
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreboardComponent_C::Set_Team_Index(int Team, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Set Team Index");

	UBP_ScoreboardComponent_C_Set_Team_Index_Params params;
	params.Team = Team;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Set Lobby Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHostRelevantTeamButtonState> Slot_State                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   UserName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGuid                   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FOnlineFriendBPData     Friend_GUID                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreboardComponent_C::Set_Lobby_Info(TEnumAsByte<EHostRelevantTeamButtonState> Slot_State, const struct FText& UserName, const struct FGuid& Character, const struct FOnlineFriendBPData& Friend_GUID, int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Set Lobby Info");

	UBP_ScoreboardComponent_C_Set_Lobby_Info_Params params;
	params.Slot_State = Slot_State;
	params.UserName = UserName;
	params.Character = Character;
	params.Friend_GUID = Friend_GUID;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.BndEvt__Button_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ScoreboardComponent_C::BndEvt__Button_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.BndEvt__Button_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature");

	UBP_ScoreboardComponent_C_BndEvt__Button_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.BndEvt__Button_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ScoreboardComponent_C::BndEvt__Button_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.BndEvt__Button_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature");

	UBP_ScoreboardComponent_C_BndEvt__Button_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Async Continue 1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UTexture2D*              LoadedIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreboardComponent_C::Async_Continue_1(const struct FGuid& Guid, class UTexture2D* LoadedIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Async Continue 1");

	UBP_ScoreboardComponent_C_Async_Continue_1_Params params;
	params.Guid = Guid;
	params.LoadedIcon = LoadedIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.DropDownSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreboardComponent_C::DropDownSelection(const struct FString& Index, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.DropDownSelection");

	UBP_ScoreboardComponent_C_DropDownSelection_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ScoreboardComponent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Construct");

	UBP_ScoreboardComponent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ScoreboardComponent_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBP_ScoreboardComponent_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Swap State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Swap_On                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreboardComponent_C::Swap_State(bool Swap_On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Swap State");

	UBP_ScoreboardComponent_C_Swap_State_Params params;
	params.Swap_On = Swap_On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Set Component Color
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ally                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Neutral                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreboardComponent_C::Set_Component_Color(bool Ally, bool Neutral)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Set Component Color");

	UBP_ScoreboardComponent_C_Set_Component_Color_Params params;
	params.Ally = Ally;
	params.Neutral = Neutral;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.ExecuteUbergraph_BP_ScoreboardComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreboardComponent_C::ExecuteUbergraph_BP_ScoreboardComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.ExecuteUbergraph_BP_ScoreboardComponent");

	UBP_ScoreboardComponent_C_ExecuteUbergraph_BP_ScoreboardComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Slot Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Slot_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FOnlineFriendBPData     Friend_GUID                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ScoreboardComponent_C::Slot_Selected__DelegateSignature(int Team_Index, int Slot_Index, const struct FOnlineFriendBPData& Friend_GUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.Slot Selected__DelegateSignature");

	UBP_ScoreboardComponent_C_Slot_Selected__DelegateSignature_Params params;
	params.Team_Index = Team_Index;
	params.Slot_Index = Slot_Index;
	params.Friend_GUID = Friend_GUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.SlotOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineFriendBPData     Friend_GUID                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Team_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Slot_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Selection_Index                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreboardComponent_C::SlotOptionSelected__DelegateSignature(const struct FOnlineFriendBPData& Friend_GUID, int Team_Index, int Slot_Index, int Selection_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.SlotOptionSelected__DelegateSignature");

	UBP_ScoreboardComponent_C_SlotOptionSelected__DelegateSignature_Params params;
	params.Friend_GUID = Friend_GUID;
	params.Team_Index = Team_Index;
	params.Slot_Index = Slot_Index;
	params.Selection_Index = Selection_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.SwitchToInviteScreen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScoreboardComponent_C::SwitchToInviteScreen__DelegateSignature(int Team, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScoreboardComponent.BP_ScoreboardComponent_C.SwitchToInviteScreen__DelegateSignature");

	UBP_ScoreboardComponent_C_SwitchToInviteScreen__DelegateSignature_Params params;
	params.Team = Team;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
