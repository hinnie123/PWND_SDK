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

// Function Base_AIController.Base_AIController_C.UserConstructionScript
struct ABase_AIController_C_UserConstructionScript_Params
{
};

// Function Base_AIController.Base_AIController_C.ReceiveBeginPlay
struct ABase_AIController_C_ReceiveBeginPlay_Params
{
};

// Function Base_AIController.Base_AIController_C.ReceiveTick
struct ABase_AIController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_AIController.Base_AIController_C.ExecuteUbergraph_Base_AIController
struct ABase_AIController_C_ExecuteUbergraph_Base_AIController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
