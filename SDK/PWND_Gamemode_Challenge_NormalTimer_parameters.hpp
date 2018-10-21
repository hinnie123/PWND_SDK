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

// Function Gamemode_Challenge_NormalTimer.Gamemode_Challenge_NormalTimer_C.UserConstructionScript
struct AGamemode_Challenge_NormalTimer_C_UserConstructionScript_Params
{
};

// Function Gamemode_Challenge_NormalTimer.Gamemode_Challenge_NormalTimer_C.ReceiveTick
struct AGamemode_Challenge_NormalTimer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gamemode_Challenge_NormalTimer.Gamemode_Challenge_NormalTimer_C.ExecuteUbergraph_Gamemode_Challenge_NormalTimer
struct AGamemode_Challenge_NormalTimer_C_ExecuteUbergraph_Gamemode_Challenge_NormalTimer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
