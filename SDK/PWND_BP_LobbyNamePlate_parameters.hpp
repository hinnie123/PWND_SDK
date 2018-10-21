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

// Function BP_LobbyNamePlate.BP_LobbyNamePlate_C.UpdateCharacter
struct UBP_LobbyNamePlate_C_UpdateCharacter_Params
{
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_LobbyNamePlate.BP_LobbyNamePlate_C.UpdateVisibility
struct UBP_LobbyNamePlate_C_UpdateVisibility_Params
{
	TEnumAsByte<EHostRelevantTeamButtonState>          PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyNamePlate.BP_LobbyNamePlate_C.UpdateRank
struct UBP_LobbyNamePlate_C_UpdateRank_Params
{
	int                                                Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyNamePlate.BP_LobbyNamePlate_C.ExecuteUbergraph_BP_LobbyNamePlate
struct UBP_LobbyNamePlate_C_ExecuteUbergraph_BP_LobbyNamePlate_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
