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

// Function VerticalProgressBarGraph.VerticalProgressBarGraph_C.OnBarAdded
struct UVerticalProgressBarGraph_C_OnBarAdded_Params
{
	class UUserWidget**                                newBarWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               teamAffiliationIndex;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VerticalProgressBarGraph.VerticalProgressBarGraph_C.ExecuteUbergraph_VerticalProgressBarGraph
struct UVerticalProgressBarGraph_C_ExecuteUbergraph_VerticalProgressBarGraph_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
