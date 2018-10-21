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

// Function BP_ActionPanel_PWNEE_Base.BP_ActionPanel_PWNEE_Base_C.InteractionExit
struct UBP_ActionPanel_PWNEE_Base_C_InteractionExit_Params
{
};

// Function BP_ActionPanel_PWNEE_Base.BP_ActionPanel_PWNEE_Base_C.Construct
struct UBP_ActionPanel_PWNEE_Base_C_Construct_Params
{
};

// Function BP_ActionPanel_PWNEE_Base.BP_ActionPanel_PWNEE_Base_C.CE PWN Exit
struct UBP_ActionPanel_PWNEE_Base_C_CE_PWN_Exit_Params
{
};

// Function BP_ActionPanel_PWNEE_Base.BP_ActionPanel_PWNEE_Base_C.Tick
struct UBP_ActionPanel_PWNEE_Base_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ActionPanel_PWNEE_Base.BP_ActionPanel_PWNEE_Base_C.ExecuteUbergraph_BP_ActionPanel_PWNEE_Base
struct UBP_ActionPanel_PWNEE_Base_C_ExecuteUbergraph_BP_ActionPanel_PWNEE_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
