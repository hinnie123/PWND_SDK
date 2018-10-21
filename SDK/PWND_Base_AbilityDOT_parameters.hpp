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

// Function Base_AbilityDOT.Base_AbilityDOT_C.ReceiveBeginPlay
struct UBase_AbilityDOT_C_ReceiveBeginPlay_Params
{
};

// Function Base_AbilityDOT.Base_AbilityDOT_C.ReceiveEndPlay
struct UBase_AbilityDOT_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_AbilityDOT.Base_AbilityDOT_C.ReceiveTick
struct UBase_AbilityDOT_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_AbilityDOT.Base_AbilityDOT_C.ExecuteUbergraph_Base_AbilityDOT
struct UBase_AbilityDOT_C_ExecuteUbergraph_Base_AbilityDOT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
