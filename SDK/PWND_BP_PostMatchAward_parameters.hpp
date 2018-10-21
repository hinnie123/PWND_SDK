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

// Function BP_PostMatchAward.BP_PostMatchAward_C.Construct
struct UBP_PostMatchAward_C_Construct_Params
{
};

// Function BP_PostMatchAward.BP_PostMatchAward_C.Spawn
struct UBP_PostMatchAward_C_Spawn_Params
{
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Last;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PostMatchAward.BP_PostMatchAward_C.SetAccolade
struct UBP_PostMatchAward_C_SetAccolade_Params
{
	int                                                Place;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PostMatchAward.BP_PostMatchAward_C.ExecuteUbergraph_BP_PostMatchAward
struct UBP_PostMatchAward_C_ExecuteUbergraph_BP_PostMatchAward_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
