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

// Function Pwnd_Announcer.Pwnd_Announcer_C.UserConstructionScript
struct APwnd_Announcer_C_UserConstructionScript_Params
{
};

// Function Pwnd_Announcer.Pwnd_Announcer_C.ReceiveBeginPlay
struct APwnd_Announcer_C_ReceiveBeginPlay_Params
{
};

// Function Pwnd_Announcer.Pwnd_Announcer_C.ReceiveTick
struct APwnd_Announcer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pwnd_Announcer.Pwnd_Announcer_C.ExecuteUbergraph_Pwnd_Announcer
struct APwnd_Announcer_C_ExecuteUbergraph_Pwnd_Announcer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
