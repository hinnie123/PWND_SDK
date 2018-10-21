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

// Function RecallTeleporter_FP_FX.RecallTeleporter_FP_FX_C.UserConstructionScript
struct ARecallTeleporter_FP_FX_C_UserConstructionScript_Params
{
};

// Function RecallTeleporter_FP_FX.RecallTeleporter_FP_FX_C.ReceiveBeginPlay
struct ARecallTeleporter_FP_FX_C_ReceiveBeginPlay_Params
{
};

// Function RecallTeleporter_FP_FX.RecallTeleporter_FP_FX_C.ReceiveTick
struct ARecallTeleporter_FP_FX_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RecallTeleporter_FP_FX.RecallTeleporter_FP_FX_C.ReceiveEndPlay
struct ARecallTeleporter_FP_FX_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RecallTeleporter_FP_FX.RecallTeleporter_FP_FX_C.OnSetActive
struct ARecallTeleporter_FP_FX_C_OnSetActive_Params
{
	bool*                                              bIsActive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RecallTeleporter_FP_FX.RecallTeleporter_FP_FX_C.ExecuteUbergraph_RecallTeleporter_FP_FX
struct ARecallTeleporter_FP_FX_C_ExecuteUbergraph_RecallTeleporter_FP_FX_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
