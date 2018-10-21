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

// Function FinishLine.FinishLine_C.UserConstructionScript
struct AFinishLine_C_UserConstructionScript_Params
{
};

// Function FinishLine.FinishLine_C.Timeline_1__FinishedFunc
struct AFinishLine_C_Timeline_1__FinishedFunc_Params
{
};

// Function FinishLine.FinishLine_C.Timeline_1__UpdateFunc
struct AFinishLine_C_Timeline_1__UpdateFunc_Params
{
};

// Function FinishLine.FinishLine_C.Timeline_0__FinishedFunc
struct AFinishLine_C_Timeline_0__FinishedFunc_Params
{
};

// Function FinishLine.FinishLine_C.Timeline_0__UpdateFunc
struct AFinishLine_C_Timeline_0__UpdateFunc_Params
{
};

// Function FinishLine.FinishLine_C.Deactivate
struct AFinishLine_C_Deactivate_Params
{
};

// Function FinishLine.FinishLine_C.BndEvt__StaticMesh1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AFinishLine_C_BndEvt__StaticMesh1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function FinishLine.FinishLine_C.Animation
struct AFinishLine_C_Animation_Params
{
};

// Function FinishLine.FinishLine_C.Activate
struct AFinishLine_C_Activate_Params
{
};

// Function FinishLine.FinishLine_C.Check Ranking
struct AFinishLine_C_Check_Ranking_Params
{
};

// Function FinishLine.FinishLine_C.ExecuteUbergraph_FinishLine
struct AFinishLine_C_ExecuteUbergraph_FinishLine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
