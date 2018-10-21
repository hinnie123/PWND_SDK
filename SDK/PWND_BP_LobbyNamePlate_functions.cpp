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

// Function BP_LobbyNamePlate.BP_LobbyNamePlate_C.UpdateCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_LobbyNamePlate_C::UpdateCharacter(const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyNamePlate.BP_LobbyNamePlate_C.UpdateCharacter");

	UBP_LobbyNamePlate_C_UpdateCharacter_Params params;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyNamePlate.BP_LobbyNamePlate_C.UpdateVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHostRelevantTeamButtonState> PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyNamePlate_C::UpdateVisibility(TEnumAsByte<EHostRelevantTeamButtonState> PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyNamePlate.BP_LobbyNamePlate_C.UpdateVisibility");

	UBP_LobbyNamePlate_C_UpdateVisibility_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyNamePlate.BP_LobbyNamePlate_C.UpdateRank
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyNamePlate_C::UpdateRank(int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyNamePlate.BP_LobbyNamePlate_C.UpdateRank");

	UBP_LobbyNamePlate_C_UpdateRank_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LobbyNamePlate.BP_LobbyNamePlate_C.ExecuteUbergraph_BP_LobbyNamePlate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LobbyNamePlate_C::ExecuteUbergraph_BP_LobbyNamePlate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyNamePlate.BP_LobbyNamePlate_C.ExecuteUbergraph_BP_LobbyNamePlate");

	UBP_LobbyNamePlate_C_ExecuteUbergraph_BP_LobbyNamePlate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
