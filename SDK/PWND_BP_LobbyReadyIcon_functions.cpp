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

// Function BP_LobbyReadyIcon.BP_LobbyReadyIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_LobbyReadyIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyReadyIcon.BP_LobbyReadyIcon_C.Construct");

	UBP_LobbyReadyIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyReadyIcon.BP_LobbyReadyIcon_C.Toggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ready                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyReadyIcon_C::Toggle(bool Ready)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyReadyIcon.BP_LobbyReadyIcon_C.Toggle");

	UBP_LobbyReadyIcon_C_Toggle_Params params;
	params.Ready = Ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyReadyIcon.BP_LobbyReadyIcon_C.disable
// (BlueprintCallable, BlueprintEvent)

void UBP_LobbyReadyIcon_C::disable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyReadyIcon.BP_LobbyReadyIcon_C.disable");

	UBP_LobbyReadyIcon_C_disable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyReadyIcon.BP_LobbyReadyIcon_C.Set State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHostRelevantTeamButtonState> Player_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyReadyIcon_C::Set_State(TEnumAsByte<EHostRelevantTeamButtonState> Player_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyReadyIcon.BP_LobbyReadyIcon_C.Set State");

	UBP_LobbyReadyIcon_C_Set_State_Params params;
	params.Player_State = Player_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyReadyIcon.BP_LobbyReadyIcon_C.ExecuteUbergraph_BP_LobbyReadyIcon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyReadyIcon_C::ExecuteUbergraph_BP_LobbyReadyIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyReadyIcon.BP_LobbyReadyIcon_C.ExecuteUbergraph_BP_LobbyReadyIcon");

	UBP_LobbyReadyIcon_C_ExecuteUbergraph_BP_LobbyReadyIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
