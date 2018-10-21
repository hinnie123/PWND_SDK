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

// Function Leaderboard_UI.Leaderboard_UI_C.LoadLeaderboard
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FText>           Names                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FText>           Ranks                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Times                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ULeaderboard_UI_C::LoadLeaderboard(const struct FString& Name, TArray<struct FText> Names, TArray<struct FText> Ranks, TArray<float> Times)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leaderboard_UI.Leaderboard_UI_C.LoadLeaderboard");

	ULeaderboard_UI_C_LoadLeaderboard_Params params;
	params.Name = Name;
	params.Names = Names;
	params.Ranks = Ranks;
	params.Times = Times;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Leaderboard_UI.Leaderboard_UI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULeaderboard_UI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Leaderboard_UI.Leaderboard_UI_C.Construct");

	ULeaderboard_UI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Leaderboard_UI.Leaderboard_UI_C.ShowPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Page_Num                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboard_UI_C::ShowPage(int Page_Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leaderboard_UI.Leaderboard_UI_C.ShowPage");

	ULeaderboard_UI_C_ShowPage_Params params;
	params.Page_Num = Page_Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Leaderboard_UI.Leaderboard_UI_C.ExecuteUbergraph_Leaderboard_UI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboard_UI_C::ExecuteUbergraph_Leaderboard_UI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leaderboard_UI.Leaderboard_UI_C.ExecuteUbergraph_Leaderboard_UI");

	ULeaderboard_UI_C_ExecuteUbergraph_Leaderboard_UI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
