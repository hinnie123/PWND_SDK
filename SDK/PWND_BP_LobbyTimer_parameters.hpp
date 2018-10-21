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

// Function BP_LobbyTimer.BP_LobbyTimer_C.Update Players
struct UBP_LobbyTimer_C_Update_Players_Params
{
	int                                                Team_Number;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Team_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPwndLoadout                                Loadout;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       UserName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EHostRelevantTeamButtonState>          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyTimer.BP_LobbyTimer_C.Set Time
struct UBP_LobbyTimer_C_Set_Time_Params
{
	bool                                               Is_Valid;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TimeToStart;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyTimer.BP_LobbyTimer_C.Construct
struct UBP_LobbyTimer_C_Construct_Params
{
};

// Function BP_LobbyTimer.BP_LobbyTimer_C.Custom Set
struct UBP_LobbyTimer_C_Custom_Set_Params
{
};

// Function BP_LobbyTimer.BP_LobbyTimer_C.Waiting For Server
struct UBP_LobbyTimer_C_Waiting_For_Server_Params
{
};

// Function BP_LobbyTimer.BP_LobbyTimer_C.Async Continue
struct UBP_LobbyTimer_C_Async_Continue_Params
{
	struct FGuid                                       Guid;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       Type;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTexture2D*                                  LoadedIcon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LobbyTimer.BP_LobbyTimer_C.Backfill
struct UBP_LobbyTimer_C_Backfill_Params
{
};

// Function BP_LobbyTimer.BP_LobbyTimer_C.ExecuteUbergraph_BP_LobbyTimer
struct UBP_LobbyTimer_C_ExecuteUbergraph_BP_LobbyTimer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
