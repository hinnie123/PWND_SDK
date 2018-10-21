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

// Function BP_LobbyTimer.BP_LobbyTimer_C.Update Players
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team_Number                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Team_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPwndLoadout            Loadout                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   UserName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EHostRelevantTeamButtonState> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyTimer_C::Update_Players(int Team_Number, int Team_Index, const struct FPwndLoadout& Loadout, const struct FText& UserName, TEnumAsByte<EHostRelevantTeamButtonState> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyTimer.BP_LobbyTimer_C.Update Players");

	UBP_LobbyTimer_C_Update_Players_Params params;
	params.Team_Number = Team_Number;
	params.Team_Index = Team_Index;
	params.Loadout = Loadout;
	params.UserName = UserName;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyTimer.BP_LobbyTimer_C.Set Time
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Valid                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TimeToStart                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyTimer_C::Set_Time(bool Is_Valid, int TimeToStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyTimer.BP_LobbyTimer_C.Set Time");

	UBP_LobbyTimer_C_Set_Time_Params params;
	params.Is_Valid = Is_Valid;
	params.TimeToStart = TimeToStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyTimer.BP_LobbyTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_LobbyTimer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyTimer.BP_LobbyTimer_C.Construct");

	UBP_LobbyTimer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyTimer.BP_LobbyTimer_C.Custom Set
// (BlueprintCallable, BlueprintEvent)

void UBP_LobbyTimer_C::Custom_Set()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyTimer.BP_LobbyTimer_C.Custom Set");

	UBP_LobbyTimer_C_Custom_Set_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyTimer.BP_LobbyTimer_C.Waiting For Server
// (BlueprintCallable, BlueprintEvent)

void UBP_LobbyTimer_C::Waiting_For_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyTimer.BP_LobbyTimer_C.Waiting For Server");

	UBP_LobbyTimer_C_Waiting_For_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyTimer.BP_LobbyTimer_C.Async Continue
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName                   Type                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UTexture2D*              LoadedIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyTimer_C::Async_Continue(const struct FGuid& Guid, const struct FName& Type, class UTexture2D* LoadedIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyTimer.BP_LobbyTimer_C.Async Continue");

	UBP_LobbyTimer_C_Async_Continue_Params params;
	params.Guid = Guid;
	params.Type = Type;
	params.LoadedIcon = LoadedIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyTimer.BP_LobbyTimer_C.Backfill
// (BlueprintCallable, BlueprintEvent)

void UBP_LobbyTimer_C::Backfill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyTimer.BP_LobbyTimer_C.Backfill");

	UBP_LobbyTimer_C_Backfill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyTimer.BP_LobbyTimer_C.ExecuteUbergraph_BP_LobbyTimer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyTimer_C::ExecuteUbergraph_BP_LobbyTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyTimer.BP_LobbyTimer_C.ExecuteUbergraph_BP_LobbyTimer");

	UBP_LobbyTimer_C_ExecuteUbergraph_BP_LobbyTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
