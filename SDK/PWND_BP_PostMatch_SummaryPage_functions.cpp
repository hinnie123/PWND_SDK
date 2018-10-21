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

// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_PostMatch_SummaryPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.Construct");

	UBP_PostMatch_SummaryPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnReceiveTeamScores
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           team0                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           team1                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatch_SummaryPage_C::OnReceiveTeamScores(int* team0, int* team1)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnReceiveTeamScores");

	UBP_PostMatch_SummaryPage_C_OnReceiveTeamScores_Params params;
	params.team0 = team0;
	params.team1 = team1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnReceiveMatchTime
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  minutesText                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  secondsText                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PostMatch_SummaryPage_C::OnReceiveMatchTime(struct FText* minutesText, struct FText* secondsText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnReceiveMatchTime");

	UBP_PostMatch_SummaryPage_C_OnReceiveMatchTime_Params params;
	params.minutesText = minutesText;
	params.secondsText = secondsText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnSetHighestRatingData
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           teamAffiliationIndex           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatch_SummaryPage_C::OnSetHighestRatingData(int* teamAffiliationIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnSetHighestRatingData");

	UBP_PostMatch_SummaryPage_C_OnSetHighestRatingData_Params params;
	params.teamAffiliationIndex = teamAffiliationIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnSetHighestPWNScoreData
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           teamAffiliationIndex           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatch_SummaryPage_C::OnSetHighestPWNScoreData(int* teamAffiliationIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnSetHighestPWNScoreData");

	UBP_PostMatch_SummaryPage_C_OnSetHighestPWNScoreData_Params params;
	params.teamAffiliationIndex = teamAffiliationIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnSetHighestDamageDealtData
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           teamAffiliationIndex           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatch_SummaryPage_C::OnSetHighestDamageDealtData(int* teamAffiliationIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnSetHighestDamageDealtData");

	UBP_PostMatch_SummaryPage_C_OnSetHighestDamageDealtData_Params params;
	params.teamAffiliationIndex = teamAffiliationIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnSetHighestKDRData
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           teamAffiliationIndex           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatch_SummaryPage_C::OnSetHighestKDRData(int* teamAffiliationIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnSetHighestKDRData");

	UBP_PostMatch_SummaryPage_C_OnSetHighestKDRData_Params params;
	params.teamAffiliationIndex = teamAffiliationIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnSetHighestSaveScoreData
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           teamAffiliationIndex           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatch_SummaryPage_C::OnSetHighestSaveScoreData(int* teamAffiliationIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnSetHighestSaveScoreData");

	UBP_PostMatch_SummaryPage_C_OnSetHighestSaveScoreData_Params params;
	params.teamAffiliationIndex = teamAffiliationIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnSetLeastDamageTakenData
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           teamAffiliationIndex           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatch_SummaryPage_C::OnSetLeastDamageTakenData(int* teamAffiliationIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnSetLeastDamageTakenData");

	UBP_PostMatch_SummaryPage_C_OnSetLeastDamageTakenData_Params params;
	params.teamAffiliationIndex = teamAffiliationIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.ExecuteUbergraph_BP_PostMatch_SummaryPage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PostMatch_SummaryPage_C::ExecuteUbergraph_BP_PostMatch_SummaryPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.ExecuteUbergraph_BP_PostMatch_SummaryPage");

	UBP_PostMatch_SummaryPage_C_ExecuteUbergraph_BP_PostMatch_SummaryPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
