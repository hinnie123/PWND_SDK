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

// Function GrappleHook_Base_DOT.GrappleHook_Base_DOT_C.ReceiveTick
struct UGrappleHook_Base_DOT_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleHook_Base_DOT.GrappleHook_Base_DOT_C.ReceiveBeginPlay
struct UGrappleHook_Base_DOT_C_ReceiveBeginPlay_Params
{
};

// Function GrappleHook_Base_DOT.GrappleHook_Base_DOT_C.ReceiveEndPlay
struct UGrappleHook_Base_DOT_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleHook_Base_DOT.GrappleHook_Base_DOT_C.ExecuteUbergraph_GrappleHook_Base_DOT
struct UGrappleHook_Base_DOT_C_ExecuteUbergraph_GrappleHook_Base_DOT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
