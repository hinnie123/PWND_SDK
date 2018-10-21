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

// Function RocketJump_Random_Task.RocketJump_Random_Task_C.ReceiveExecute
struct URocketJump_Random_Task_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RocketJump_Random_Task.RocketJump_Random_Task_C.ExecuteUbergraph_RocketJump_Random_Task
struct URocketJump_Random_Task_C_ExecuteUbergraph_RocketJump_Random_Task_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
