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

// Function BP_LobbyReadyIcon.BP_LobbyReadyIcon_C.Construct
struct UBP_LobbyReadyIcon_C_Construct_Params
{
};

// Function BP_LobbyReadyIcon.BP_LobbyReadyIcon_C.Toggle
struct UBP_LobbyReadyIcon_C_Toggle_Params
{
	bool                                               Ready;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyReadyIcon.BP_LobbyReadyIcon_C.disable
struct UBP_LobbyReadyIcon_C_disable_Params
{
};

// Function BP_LobbyReadyIcon.BP_LobbyReadyIcon_C.Set State
struct UBP_LobbyReadyIcon_C_Set_State_Params
{
	TEnumAsByte<EHostRelevantTeamButtonState>          Player_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyReadyIcon.BP_LobbyReadyIcon_C.ExecuteUbergraph_BP_LobbyReadyIcon
struct UBP_LobbyReadyIcon_C_ExecuteUbergraph_BP_LobbyReadyIcon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
