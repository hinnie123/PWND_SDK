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

// Function BP_Scoreboard.BP_Scoreboard_C.IsFreeForAll
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bFreeForAll                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Scoreboard_C::IsFreeForAll(bool* bFreeForAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.IsFreeForAll");

	UBP_Scoreboard_C_IsFreeForAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFreeForAll != nullptr)
		*bFreeForAll = params.bFreeForAll;
}


// Function BP_Scoreboard.BP_Scoreboard_C.UpdateFreeForAllComponents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Scoreboard_C::UpdateFreeForAllComponents(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.UpdateFreeForAllComponents");

	UBP_Scoreboard_C_UpdateFreeForAllComponents_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Scoreboard.BP_Scoreboard_C.UpdateMatchInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Game_Mode                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Objective                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Map                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Duration                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Server                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   png                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   AllyScore                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   EnemyScore                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_Scoreboard_C::UpdateMatchInfo(const struct FText& Game_Mode, const struct FText& Objective, const struct FText& Map, const struct FText& Duration, const struct FText& Server, const struct FText& png, const struct FText& AllyScore, const struct FText& EnemyScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.UpdateMatchInfo");

	UBP_Scoreboard_C_UpdateMatchInfo_Params params;
	params.Game_Mode = Game_Mode;
	params.Objective = Objective;
	params.Map = Map;
	params.Duration = Duration;
	params.Server = Server;
	params.png = png;
	params.AllyScore = AllyScore;
	params.EnemyScore = EnemyScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Scoreboard.BP_Scoreboard_C.UpdateEnemyComponents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Scoreboard_C::UpdateEnemyComponents(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.UpdateEnemyComponents");

	UBP_Scoreboard_C_UpdateEnemyComponents_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Scoreboard.BP_Scoreboard_C.UpdateAllyComponents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Scoreboard_C::UpdateAllyComponents(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.UpdateAllyComponents");

	UBP_Scoreboard_C_UpdateAllyComponents_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetEnemyScoreboardComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_ScoreboardComponent_C* Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Scoreboard_C::GetEnemyScoreboardComponent(int Index, class UBP_ScoreboardComponent_C** Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetEnemyScoreboardComponent");

	UBP_Scoreboard_C_GetEnemyScoreboardComponent_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BP_Scoreboard.BP_Scoreboard_C.GetAllyScoreboardComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_ScoreboardComponent_C* Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Scoreboard_C::GetAllyScoreboardComponent(int Index, class UBP_ScoreboardComponent_C** Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.GetAllyScoreboardComponent");

	UBP_Scoreboard_C_GetAllyScoreboardComponent_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BP_Scoreboard.BP_Scoreboard_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Scoreboard_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Tick");

	UBP_Scoreboard_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Scoreboard.BP_Scoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Scoreboard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.Construct");

	UBP_Scoreboard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Scoreboard.BP_Scoreboard_C.ExecuteUbergraph_BP_Scoreboard
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Scoreboard_C::ExecuteUbergraph_BP_Scoreboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Scoreboard.BP_Scoreboard_C.ExecuteUbergraph_BP_Scoreboard");

	UBP_Scoreboard_C_ExecuteUbergraph_BP_Scoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
