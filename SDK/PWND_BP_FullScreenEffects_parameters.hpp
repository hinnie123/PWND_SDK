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

// Function BP_FullScreenEffects.BP_FullScreenEffects_C.Get_Animation_Duration
struct UBP_FullScreenEffects_C_Get_Animation_Duration_Params
{
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FullScreenEffects.BP_FullScreenEffects_C.Start_Hiding_Me
struct UBP_FullScreenEffects_C_Start_Hiding_Me_Params
{
};

// Function BP_FullScreenEffects.BP_FullScreenEffects_C.Set_Text_Brush
struct UBP_FullScreenEffects_C_Set_Text_Brush_Params
{
	class UMaterialInstance*                           Material_Instance;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FullScreenEffects.BP_FullScreenEffects_C.Get_Text_Brush_1
struct UBP_FullScreenEffects_C_Get_Text_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_FullScreenEffects.BP_FullScreenEffects_C.Tick
struct UBP_FullScreenEffects_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FullScreenEffects.BP_FullScreenEffects_C.ExecuteUbergraph_BP_FullScreenEffects
struct UBP_FullScreenEffects_C_ExecuteUbergraph_BP_FullScreenEffects_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
