#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.Construct
struct UBP_PostMatch_SummaryPage_C_Construct_Params
{
};

// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnReceiveTeamScores
struct UBP_PostMatch_SummaryPage_C_OnReceiveTeamScores_Params
{
	int*                                               team0;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               team1;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnReceiveMatchTime
struct UBP_PostMatch_SummaryPage_C_OnReceiveMatchTime_Params
{
	struct FText*                                      minutesText;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      secondsText;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnSetHighestRatingData
struct UBP_PostMatch_SummaryPage_C_OnSetHighestRatingData_Params
{
	int*                                               teamAffiliationIndex;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnSetHighestPWNScoreData
struct UBP_PostMatch_SummaryPage_C_OnSetHighestPWNScoreData_Params
{
	int*                                               teamAffiliationIndex;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnSetHighestDamageDealtData
struct UBP_PostMatch_SummaryPage_C_OnSetHighestDamageDealtData_Params
{
	int*                                               teamAffiliationIndex;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnSetHighestKDRData
struct UBP_PostMatch_SummaryPage_C_OnSetHighestKDRData_Params
{
	int*                                               teamAffiliationIndex;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnSetHighestSaveScoreData
struct UBP_PostMatch_SummaryPage_C_OnSetHighestSaveScoreData_Params
{
	int*                                               teamAffiliationIndex;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.OnSetLeastDamageTakenData
struct UBP_PostMatch_SummaryPage_C_OnSetLeastDamageTakenData_Params
{
	int*                                               teamAffiliationIndex;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PostMatch_SummaryPage.BP_PostMatch_SummaryPage_C.ExecuteUbergraph_BP_PostMatch_SummaryPage
struct UBP_PostMatch_SummaryPage_C_ExecuteUbergraph_BP_PostMatch_SummaryPage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
