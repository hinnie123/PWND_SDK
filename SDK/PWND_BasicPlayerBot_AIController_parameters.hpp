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

// Function BasicPlayerBot_AIController.BasicPlayerBot_AIController_C.UpdateBlackboard
struct ABasicPlayerBot_AIController_C_UpdateBlackboard_Params
{
};

// Function BasicPlayerBot_AIController.BasicPlayerBot_AIController_C.UserConstructionScript
struct ABasicPlayerBot_AIController_C_UserConstructionScript_Params
{
};

// Function BasicPlayerBot_AIController.BasicPlayerBot_AIController_C.ReceiveBeginPlay
struct ABasicPlayerBot_AIController_C_ReceiveBeginPlay_Params
{
};

// Function BasicPlayerBot_AIController.BasicPlayerBot_AIController_C.ReceiveTick
struct ABasicPlayerBot_AIController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicPlayerBot_AIController.BasicPlayerBot_AIController_C.ExecuteUbergraph_BasicPlayerBot_AIController
struct ABasicPlayerBot_AIController_C_ExecuteUbergraph_BasicPlayerBot_AIController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
