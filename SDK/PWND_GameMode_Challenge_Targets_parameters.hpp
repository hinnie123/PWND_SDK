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

// Function GameMode_Challenge_Targets.GameMode_Challenge_Targets_C.UserConstructionScript
struct AGameMode_Challenge_Targets_C_UserConstructionScript_Params
{
};

// Function GameMode_Challenge_Targets.GameMode_Challenge_Targets_C.Set Game
struct AGameMode_Challenge_Targets_C_Set_Game_Params
{
};

// Function GameMode_Challenge_Targets.GameMode_Challenge_Targets_C.ReceiveTick
struct AGameMode_Challenge_Targets_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMode_Challenge_Targets.GameMode_Challenge_Targets_C.Add To Time
struct AGameMode_Challenge_Targets_C_Add_To_Time_Params
{
	float                                              TimeToAdd;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMode_Challenge_Targets.GameMode_Challenge_Targets_C.Target Destroyed
struct AGameMode_Challenge_Targets_C_Target_Destroyed_Params
{
};

// Function GameMode_Challenge_Targets.GameMode_Challenge_Targets_C.ExecuteUbergraph_GameMode_Challenge_Targets
struct AGameMode_Challenge_Targets_C_ExecuteUbergraph_GameMode_Challenge_Targets_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
