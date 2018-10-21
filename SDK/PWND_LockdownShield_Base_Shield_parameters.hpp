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

// Function LockdownShield_Base_Shield.LockdownShield_Base_Shield_C.UserConstructionScript
struct ALockdownShield_Base_Shield_C_UserConstructionScript_Params
{
};

// Function LockdownShield_Base_Shield.LockdownShield_Base_Shield_C.ReceiveBeginPlay
struct ALockdownShield_Base_Shield_C_ReceiveBeginPlay_Params
{
};

// Function LockdownShield_Base_Shield.LockdownShield_Base_Shield_C.ReceiveTick
struct ALockdownShield_Base_Shield_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LockdownShield_Base_Shield.LockdownShield_Base_Shield_C.ReceiveActorBeginOverlap
struct ALockdownShield_Base_Shield_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LockdownShield_Base_Shield.LockdownShield_Base_Shield_C.ExecuteUbergraph_LockdownShield_Base_Shield
struct ALockdownShield_Base_Shield_C_ExecuteUbergraph_LockdownShield_Base_Shield_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
