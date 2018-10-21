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

// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.SortRingArray
struct AGameMode_Challenge_Rings_C_SortRingArray_Params
{
	TArray<class ABP_TrainingRing_C*>                  Rings_Array;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.UserConstructionScript
struct AGameMode_Challenge_Rings_C_UserConstructionScript_Params
{
};

// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Timeline_0__FinishedFunc
struct AGameMode_Challenge_Rings_C_Timeline_0__FinishedFunc_Params
{
};

// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Timeline_0__UpdateFunc
struct AGameMode_Challenge_Rings_C_Timeline_0__UpdateFunc_Params
{
};

// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Ring Passed
struct AGameMode_Challenge_Rings_C_Ring_Passed_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.ReceiveTick
struct AGameMode_Challenge_Rings_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Set Rings
struct AGameMode_Challenge_Rings_C_Set_Rings_Params
{
};

// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Ring Success Event
struct AGameMode_Challenge_Rings_C_Ring_Success_Event_Params
{
};

// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.RingTImeAddedEvent
struct AGameMode_Challenge_Rings_C_RingTImeAddedEvent_Params
{
	float                                              TimeAdded;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.PlayAnimation
struct AGameMode_Challenge_Rings_C_PlayAnimation_Params
{
};

// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Final Check
struct AGameMode_Challenge_Rings_C_Final_Check_Params
{
};

// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.Set Score
struct AGameMode_Challenge_Rings_C_Set_Score_Params
{
};

// Function GameMode_Challenge_Rings.GameMode_Challenge_Rings_C.ExecuteUbergraph_GameMode_Challenge_Rings
struct AGameMode_Challenge_Rings_C_ExecuteUbergraph_GameMode_Challenge_Rings_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
