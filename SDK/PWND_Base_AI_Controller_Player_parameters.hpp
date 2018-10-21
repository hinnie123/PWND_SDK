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

// Function Base_AI_Controller_Player.Base_AI_Controller_Player_C.UserConstructionScript
struct ABase_AI_Controller_Player_C_UserConstructionScript_Params
{
};

// Function Base_AI_Controller_Player.Base_AI_Controller_Player_C.ReceiveBeginPlay
struct ABase_AI_Controller_Player_C_ReceiveBeginPlay_Params
{
};

// Function Base_AI_Controller_Player.Base_AI_Controller_Player_C.ReceiveTick
struct ABase_AI_Controller_Player_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_AI_Controller_Player.Base_AI_Controller_Player_C.ExecuteUbergraph_Base_AI_Controller_Player
struct ABase_AI_Controller_Player_C_ExecuteUbergraph_Base_AI_Controller_Player_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
