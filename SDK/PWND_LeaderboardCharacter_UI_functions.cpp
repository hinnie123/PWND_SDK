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

// Function LeaderboardCharacter_UI.LeaderboardCharacter_UI_C.SetStats
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Rank                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboardCharacter_UI_C::SetStats(const struct FText& Name, const struct FText& Rank, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardCharacter_UI.LeaderboardCharacter_UI_C.SetStats");

	ULeaderboardCharacter_UI_C_SetStats_Params params;
	params.Name = Name;
	params.Rank = Rank;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardCharacter_UI.LeaderboardCharacter_UI_C.Set Button
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULeaderboardCharacter_UI_C::Set_Button(const struct FText& Name, const struct FString& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardCharacter_UI.LeaderboardCharacter_UI_C.Set Button");

	ULeaderboardCharacter_UI_C_Set_Button_Params params;
	params.Name = Name;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardCharacter_UI.LeaderboardCharacter_UI_C.ExecuteUbergraph_LeaderboardCharacter_UI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboardCharacter_UI_C::ExecuteUbergraph_LeaderboardCharacter_UI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardCharacter_UI.LeaderboardCharacter_UI_C.ExecuteUbergraph_LeaderboardCharacter_UI");

	ULeaderboardCharacter_UI_C_ExecuteUbergraph_LeaderboardCharacter_UI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardCharacter_UI.LeaderboardCharacter_UI_C.NotifyKeyNum__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Keys                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboardCharacter_UI_C::NotifyKeyNum__DelegateSignature(int Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardCharacter_UI.LeaderboardCharacter_UI_C.NotifyKeyNum__DelegateSignature");

	ULeaderboardCharacter_UI_C_NotifyKeyNum__DelegateSignature_Params params;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
