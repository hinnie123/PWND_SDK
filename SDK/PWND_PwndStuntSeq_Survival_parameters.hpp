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

// Function PwndStuntSeq_Survival.PwndStuntSeq_Survival_C.OnTick
struct UPwndStuntSeq_Survival_C_OnTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PwndStuntSeq_Survival.PwndStuntSeq_Survival_C.ExecuteUbergraph_PwndStuntSeq_Survival
struct UPwndStuntSeq_Survival_C_ExecuteUbergraph_PwndStuntSeq_Survival_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
