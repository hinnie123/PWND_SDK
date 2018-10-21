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

// Function Base_PickupHealth.Base_PickupHealth_C.UserConstructionScript
struct ABase_PickupHealth_C_UserConstructionScript_Params
{
};

// Function Base_PickupHealth.Base_PickupHealth_C.ReceiveTick
struct ABase_PickupHealth_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_PickupHealth.Base_PickupHealth_C.OnPickedUp
struct ABase_PickupHealth_C_OnPickedUp_Params
{
};

// Function Base_PickupHealth.Base_PickupHealth_C.ExecuteUbergraph_Base_PickupHealth
struct ABase_PickupHealth_C_ExecuteUbergraph_Base_PickupHealth_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
