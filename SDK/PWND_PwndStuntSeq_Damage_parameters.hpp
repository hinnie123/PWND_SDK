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

// Function PwndStuntSeq_Damage.PwndStuntSeq_Damage_C.OnPostEventTrigger
struct UPwndStuntSeq_Damage_C_OnPostEventTrigger_Params
{
	TEnumAsByte<EeEventTrigger>*                       Trigger;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>*                            Others;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PwndStuntSeq_Damage.PwndStuntSeq_Damage_C.ExecuteUbergraph_PwndStuntSeq_Damage
struct UPwndStuntSeq_Damage_C_ExecuteUbergraph_PwndStuntSeq_Damage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
