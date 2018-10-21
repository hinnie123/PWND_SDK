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

// Function AllyStatusWidget.AllyStatusWidget_C.Show_Me
struct UAllyStatusWidget_C_Show_Me_Params
{
};

// Function AllyStatusWidget.AllyStatusWidget_C.Get_CharacterHealth_Percent_1
struct UAllyStatusWidget_C_Get_CharacterHealth_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AllyStatusWidget.AllyStatusWidget_C.Hide_Me
struct UAllyStatusWidget_C_Hide_Me_Params
{
};

// Function AllyStatusWidget.AllyStatusWidget_C.Init
struct UAllyStatusWidget_C_Init_Params
{
	class APwndPlayerState*                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CharacterOffsetNumber;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AllyStatusWidget.AllyStatusWidget_C.Construct
struct UAllyStatusWidget_C_Construct_Params
{
};

// Function AllyStatusWidget.AllyStatusWidget_C.Tick
struct UAllyStatusWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AllyStatusWidget.AllyStatusWidget_C.ExecuteUbergraph_AllyStatusWidget
struct UAllyStatusWidget_C_ExecuteUbergraph_AllyStatusWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
